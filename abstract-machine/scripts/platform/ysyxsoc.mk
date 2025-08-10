AM_SRCS = riscv/ysyxSoC/start.S \
		  riscv/ysyxSoC/trm.c \
		  riscv/ysyxSoC/ioe.c \
		  riscv/ysyxSoC/timer.c \
		  riscv/ysyxSoC/cte.c \
		  riscv/ysyxSoC/trap.S

LDSCRIPTS += $(AM_HOME)/scripts/soclinker.ld
CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += --gc-sections -e _start #--print-map
NPC_ARGS += -i $(IMAGE).bin $(USER_ARGS)

# mainargs placeholder
MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = The insert-arg rule in Makefile will insert mainargs here.
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=\""$(MAINARGS_PLACEHOLDER)"\"

insert-arg: image
	@python $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) "$(MAINARGS_PLACEHOLDER)" "$(mainargs)"

image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: insert-arg
	$(MAKE) -C $(NPC_HOME) run ARGS="$(NPC_ARGS)"

gdb: insert-arg
	$(MAKE) -C $(NPC_HOME) gdb ARGS="$(NPC_ARGS)" DEBUG=1

.PHONY: image run insert-arg
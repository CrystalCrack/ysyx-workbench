# Compiler and flags
VERILATOR = verilator
VERILATOR_FLAGS = --cc --exe --trace --build -j 4 -O3 --x-assign fast --x-initial fast --noassert --autoflush --timescale "1ns/1ns" --no-timing --l2-name soc

TOPNAME = ysyxSoCFull
NXDC_FILES = constr/top.nxdc
SOC_DIR = /home/crystc/ysyx-workbench/ysyxSoC
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)
INC_PATH += $(abspath ./csrc/include) $(abspath ./tools/capstone/repo/include)

$(shell mkdir -p $(BUILD_DIR))

#constraint file
# SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
# $(SRC_AUTO_BIND): $(NXDC_FILES)
# 	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# Project source
VSRCS=$(wildcard ./vsrc/*.v ./vsrc/**/*.v ./vsrc/*.sv ./vsrc/**/*.sv) $(SOC_DIR)/build/ysyxSoCFull.v $(shell find $(SOC_DIR)/perip -name "*.v")
SIM_ALL ?= $(notdir $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp"))
SIM_CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS= $(SIM_CSRCS) $(SRC_AUTO_BIND)

LOCAL_ARGS += -d $(NEMU_HOME)/build/riscv32-nemu-interpreter-so

# Rules for NVBoard
# include $(NVBOARD_HOME)/scripts/nvboard.mk

# Rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\"" 
LDFLAGS += -lreadline -ltinfo -ldl -pie

V_INC_PATH = $(abspath ./vsrc/include) $(SOC_DIR)/perip/uart16550/rtl $(SOC_DIR)/perip/spi/rtl
VERILATOR_FLAGS += $(addprefix -I, $(V_INC_PATH))

DEBUG ?= 0
ifeq ($(DEBUG),1)
    VERILATOR_FLAGS += --debug     # 启用 Verilator 调试
    CXXFLAGS += -g -O0             # 启用 C++ 调试符号和禁用优化
endif

all: run

$(BIN): $(VSRCS) $(CSRCS) #$(NVBOARD_ARCHIVE)
	$(call git_commit, "sim RTL: $*")
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

run: $(BIN)
	@echo ARGS=$(ARGS) $(LOCAL_ARGS)
	@$^ $(ARGS) $(LOCAL_ARGS)


gdb: $(BIN)
	@gdb --args $^ $(ARGS) $(LOCAL_ARGS)

clean:
	@rm -rf $(BUILD_DIR) $(SIM_DIR)

.PHONY: all run gdb clean

include ../Makefile

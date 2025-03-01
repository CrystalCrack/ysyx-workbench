# Compiler and flags
VERILATOR = verilator
VERILATOR_FLAGS = --cc -D --exe --trace --build -j 4 -O3 --x-assign fast --x-initial fast --noassert

TOPNAME = npc
NXDC_FILES = constr/top.nxdc
BUILD_DIR = ./build
SIM_DIR = ./sim
OBJ_DIR = $(BUILD_DIR)/obj_dir
SIM_OBJ_DIR = $(SIM_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)
<<<<<<< HEAD
=======
INC_PATH += $(abspath ./csrc/include) 
>>>>>>> tracer-ysyx

$(shell mkdir -p $(BUILD_DIR))
$(shell mkdir -p $(SIM_DIR))

#constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# Project source
VSRCS=$(shell find $(abspath ./vsrc) -name "*.v" -or -name "*.sv")
SIM_ALL ?= $(notdir $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp"))
SIM_CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS= $(SIM_CSRCS) $(SRC_AUTO_BIND)

# Rules for NVBoard
<<<<<<< HEAD
include $(NVBOARD_HOME)/scripts/nvboard.mk
=======
# include $(NVBOARD_HOME)/scripts/nvboard.mk
>>>>>>> tracer-ysyx

# Rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

<<<<<<< HEAD
=======
# excutable args
ARGS += -i $(IMG)

>>>>>>> tracer-ysyx
all:
	@echo "Write this Makefile by your self."

sim-all:$(addprefix Makefile., $(SIM_ALL))
	@echo "test list [$(words $(SIM_ALL)) item(s)]:" $(SIM_ALL)

Makefile.%: ./csrc/%
	$(call git_commit, "sim RTL: $*")
	@mkdir -p $(SIM_OBJ_DIR)/$(basename $*)
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module $(basename $*) $(VSRCS) $(abspath $^) --Mdir $(abspath $(SIM_OBJ_DIR)/$(basename $*))
<<<<<<< HEAD
	$(SIM_OBJ_DIR)/$(basename $*)/V$(TOPNAME)

sim: $(VSRCS) $(SIM_CSRCS)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module $(TOPNAME) $^ --Mdir $(SIM_OBJ_DIR)
	$(SIM_OBJ_DIR)/V$(TOPNAME)
=======
	$(SIM_OBJ_DIR)/$(basename $*)/V$(TOPNAME) $(ARGS)

sim: $(VSRCS) $(SIM_CSRCS)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

	$(VERILATOR) $(VERILATOR_FLAGS) --top-module $(TOPNAME) $^ \
	$(addprefix -CFLAGS , $(CXXFLAGS)) \
	--Mdir $(SIM_OBJ_DIR)

	$(SIM_OBJ_DIR)/V$(TOPNAME) $(ARGS)
>>>>>>> tracer-ysyx

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

run: $(BIN)
	@$^

clean:
	rm -rf $(BUILD_DIR) $(SIM_DIR)

.PHONY: all sim run clean

include ../Makefile

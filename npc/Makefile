# Compiler and flags
VERILATOR = verilator
VERILATOR_FLAGS = --cc --exe --trace --build -j 4

TOPNAME = switch
NXDC_FILES = constr/top.nxdc
BUILD_DIR = ./build
SIM_DIR = ./sim
OBJ_DIR = $(BUILD_DIR)/obj_dir
SIM_OBJ_DIR = $(SIM_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

$(shell mkdir -p $(BUILD_DIR))

#constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# Project source
VSRCS=$(shell find $(abspath ./vsrc) -name "*.v")
CSRCS=$(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS+=$(SRC_AUTO_BIND)

# Rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# Rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

all:
	@echo "Write this Makefile by your self."

sim: $(VSRCS) $(CSRCS)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@rm -rf $(SIM_OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module $(TOPNAME) $^ --Mdir $(SIM_OBJ_DIR)
	$(SIM_OBJ_DIR)/V$(TOPNAME)

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

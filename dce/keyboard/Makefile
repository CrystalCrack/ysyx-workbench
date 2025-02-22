VERILATOR = verilator
VFLAGS = -cc --trace --exe --build -O3 --x-assign fast --x-initial fast --no-assert
TOP_NAME = top
SIM_DIR = ./sim
SIM_CSRC = ./csrc/sim.cpp
VSRC = $(shell find $(abspath ./vsrc) -name "*.v")
NXDC_FILES = ./constr/top.nxdc
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
SRC_AUTO_BIND = $(abspath ./build/autobind.cpp)
BUILD_CSRC = $(abspath ./csrc/build.cpp) $(SRC_AUTO_BIND)
BIN = $(BUILD_DIR)/$(TOP_NAME)

$(shell mkdir -p $(BUILD_DIR))
$(shell mkdir -p $(OBJ_DIR))
$(shell mkdir -p $(SIM_DIR))

include $(NVBOARD_HOME)/scripts/nvboard.mk

INCFLAGS= $(addprefix -I,$(INC_PATH))
CXXFLAGS+= $(INCFLAGS) -DTOP_NAME="\"V$(TOP_NAME)\""

all:
	@echo "empty now"

frame:
	@echo "Creating project frame"
	mkdir -p build constr csrc sim vsrc

sim: $(VSRC) $(SIM_CSRC)
	@echo "Simulating project"
	$(VERILATOR) $(VFLAGS) --top-module $(TOP_NAME) $^ -Mdir $(SIM_DIR)
	$(SIM_DIR)/V$(TOP_NAME)

wave: sim
	@echo "Generating waveforms"
	gtkwave $(shell find $(abspath .) -name "*.vcd")

$(SRC_AUTO_BIND): $(NXDC_FILES)
	@echo "Generating autobind file"
	@python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

$(BIN): $(VSRC) $(BUILD_CSRC) $(NVBOARD_ARCHIVE)
	@echo "Building project"
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VFLAGS) --top-module $(TOP_NAME) $^ \
	$(addprefix -CFLAGS ,$(CXXFLAGS)) $(addprefix -LDFLAGS ,$(LDFLAGS)) \
	-Mdir $(OBJ_DIR) -o $(abspath $(BIN))

run: $(BIN)
	@echo "Running project"
	$^

DESIGN := top
SDC_FILE := $(abspath ./constr/top.sdc)
RTL_FILES := $(VSRC)
include ~/yosys-sta/Makefile
my-sta: sta
	
clean-keyboard:
	@echo "Cleaning project"
	@rm -rf $(BUILD_DIR) $(SIM_DIR) $(SRC_AUTO_BIND)

.PHONY: all frame sim wave run clean-keyboard
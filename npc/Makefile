# Compiler and flags
VERILATOR = verilator
VERILATOR_FLAGS = --cc --exe --build -j 4 --trace

# Source files
RTL_NAME = switch
TB_SRC = $(addprefix ./csrc/tb_, $(addsuffix .cpp, $(RTL_NAME)))
RTL_SRC = $(addprefix ./vsrc/, $(addsuffix .v, $(RTL_NAME)))

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_FLAGS) $(RTL_SRC) $(TB_SRC)
	./obj_dir/V$(RTL_NAME)

include ../Makefile

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VNPC__DPI_H_
#define VERILATED_VNPC__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/crystc/ysyx-workbench/npc/vsrc/npc.sv:251:19
    extern void get_CSR(int* mtvec_data, int* mcause_data, int* mepc_data, int* mstatus_data);
    // DPI export at /home/crystc/ysyx-workbench/npc/vsrc/npc.sv:243:19
    extern void get_pc_inst(int* cpu_pc, int* cpu_inst);
    // DPI export at /home/crystc/ysyx-workbench/npc/vsrc/RegisterFile.v:29:19
    extern void get_reg(int addr, int* reg_data);

    // DPI IMPORTS
    // DPI import at /home/crystc/ysyx-workbench/npc/vsrc/npc.sv:262:34
    extern void ebreak();
    // DPI import at /home/crystc/ysyx-workbench/npc/vsrc/memory.v:10:33
    extern int pmem_read(int raddr);
    // DPI import at /home/crystc/ysyx-workbench/npc/vsrc/memory.v:11:34
    extern void pmem_write(int waddr, int wdata, char wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard

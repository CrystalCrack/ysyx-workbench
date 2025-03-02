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
    // DPI export at /home/crystc/ysyx-workbench/npc/vsrc/RegisterFile.v:29:19
    extern void get_reg(int addr, int* reg_data);

    // DPI IMPORTS
    // DPI import at /home/crystc/ysyx-workbench/npc/vsrc/npc.sv:100:34
    extern void ebreak();

#ifdef __cplusplus
}
#endif

#endif  // guard

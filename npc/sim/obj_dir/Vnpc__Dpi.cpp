// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vnpc::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vnpc__Dpi.h"
#include "Vnpc.h"

#ifndef VL_DPIDECL_get_reg_
#define VL_DPIDECL_get_reg_
int get_reg(int addr) {
    // DPI export at /home/crystc/ysyx-workbench/npc/vsrc/RegisterFile.v:21:18
    return Vnpc::get_reg(addr);
}
#endif


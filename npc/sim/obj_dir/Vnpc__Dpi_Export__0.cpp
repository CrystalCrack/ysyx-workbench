// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vnpc.h"
#include "Vnpc__Syms.h"
#include "verilated_dpi.h"


void Vnpc::get_pc_inst(int* cpu_pc, int* cpu_inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root::get_pc_inst\n"); );
    // Init
    IData/*31:0*/ cpu_pc__Vcvt;
    cpu_pc__Vcvt = 0;
    IData/*31:0*/ cpu_inst__Vcvt;
    cpu_inst__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_pc_inst");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vnpc__Vcb_get_pc_inst_t __Vcb = (Vnpc__Vcb_get_pc_inst_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vnpc__Syms*)(__Vscopep->symsp()), cpu_pc__Vcvt, cpu_inst__Vcvt);
    for (size_t cpu_pc__Vidx = 0; cpu_pc__Vidx < 1; ++cpu_pc__Vidx) *cpu_pc = cpu_pc__Vcvt;
    for (size_t cpu_inst__Vidx = 0; cpu_inst__Vidx < 1; ++cpu_inst__Vidx) *cpu_inst = cpu_inst__Vcvt;
}

void Vnpc::get_CSR(int* mtvec_data, int* mcause_data, int* mepc_data, int* mstatus_data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root::get_CSR\n"); );
    // Init
    IData/*31:0*/ mtvec_data__Vcvt;
    mtvec_data__Vcvt = 0;
    IData/*31:0*/ mcause_data__Vcvt;
    mcause_data__Vcvt = 0;
    IData/*31:0*/ mepc_data__Vcvt;
    mepc_data__Vcvt = 0;
    IData/*31:0*/ mstatus_data__Vcvt;
    mstatus_data__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_CSR");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vnpc__Vcb_get_CSR_t __Vcb = (Vnpc__Vcb_get_CSR_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vnpc__Syms*)(__Vscopep->symsp()), mtvec_data__Vcvt, mcause_data__Vcvt, mepc_data__Vcvt, mstatus_data__Vcvt);
    for (size_t mtvec_data__Vidx = 0; mtvec_data__Vidx < 1; ++mtvec_data__Vidx) *mtvec_data = mtvec_data__Vcvt;
    for (size_t mcause_data__Vidx = 0; mcause_data__Vidx < 1; ++mcause_data__Vidx) *mcause_data = mcause_data__Vcvt;
    for (size_t mepc_data__Vidx = 0; mepc_data__Vidx < 1; ++mepc_data__Vidx) *mepc_data = mepc_data__Vcvt;
    for (size_t mstatus_data__Vidx = 0; mstatus_data__Vidx < 1; ++mstatus_data__Vidx) *mstatus_data = mstatus_data__Vcvt;
}

void Vnpc::get_reg(int addr, int* reg_data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root::get_reg\n"); );
    // Init
    IData/*31:0*/ addr__Vcvt;
    addr__Vcvt = 0;
    IData/*31:0*/ reg_data__Vcvt;
    reg_data__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_reg");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vnpc__Vcb_get_reg_t __Vcb = (Vnpc__Vcb_get_reg_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    addr__Vcvt = addr;
    (*__Vcb)((Vnpc__Syms*)(__Vscopep->symsp()), addr__Vcvt, reg_data__Vcvt);
    for (size_t reg_data__Vidx = 0; reg_data__Vidx < 1; ++reg_data__Vidx) *reg_data = reg_data__Vcvt;
}

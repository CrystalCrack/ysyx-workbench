// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vnpc.h"
#include "Vnpc__Syms.h"
#include "verilated_dpi.h"


int Vnpc::get_reg(int addr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root::get_reg\n"); );
    // Init
    IData/*31:0*/ addr__Vcvt;
    addr__Vcvt = 0;
    IData/*31:0*/ get_reg__Vfuncrtn__Vcvt;
    get_reg__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_reg");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vnpc__Vcb_get_reg_t __Vcb = (Vnpc__Vcb_get_reg_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    addr__Vcvt = addr;
    (*__Vcb)((Vnpc__Syms*)(__Vscopep->symsp()), addr__Vcvt, get_reg__Vfuncrtn__Vcvt);
    int get_reg__Vfuncrtn;
    for (size_t get_reg__Vfuncrtn__Vidx = 0; get_reg__Vfuncrtn__Vidx < 1; ++get_reg__Vfuncrtn__Vidx) get_reg__Vfuncrtn = get_reg__Vfuncrtn__Vcvt;
    return get_reg__Vfuncrtn;
}

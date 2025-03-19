// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc___024root.h"

void Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vnpc___024root___ico_sequent__TOP__0(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->npc__DOT__validF = ((~ (IData)(vlSelf->rst)) 
                                & ((IData)(vlSelf->npc__DOT__validW_d) 
                                   | ((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->npc__DOT__rst_d))));
    if (vlSelf->npc__DOT__validF) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read_TOP(vlSelf->npc__DOT__pcF, vlSelf->__Vfunc_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read__1__Vfuncout);
        vlSelf->npc__DOT__instF = vlSelf->__Vfunc_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read__1__Vfuncout;
    } else {
        vlSelf->npc__DOT__instF = 0U;
    }
}

void Vnpc___024root___eval_ico(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vnpc___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vnpc___024root___eval_act(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_act\n"); );
}

void Vnpc___024root____Vdpiimwrap_npc__DOT__ebreak_TOP();
void Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vnpc___024root___nba_sequent__TOP__0(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__npc__DOT__pcF;
    __Vdly__npc__DOT__pcF = 0;
    CData/*0:0*/ __Vdly__npc__DOT__dstagebus_inst__DOT__state;
    __Vdly__npc__DOT__dstagebus_inst__DOT__state = 0;
    IData/*31:0*/ __Vdly__npc__DOT__pcD;
    __Vdly__npc__DOT__pcD = 0;
    IData/*31:0*/ __Vdly__npc__DOT__instD;
    __Vdly__npc__DOT__instD = 0;
    IData/*31:0*/ __Vdly__npc__DOT__snpcD;
    __Vdly__npc__DOT__snpcD = 0;
    CData/*0:0*/ __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v32;
    __Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    IData/*31:0*/ __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v32;
    __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    CData/*0:0*/ __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32;
    __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    CData/*0:0*/ __Vdly__npc__DOT__u_Xstage_bus__DOT__state;
    __Vdly__npc__DOT__u_Xstage_bus__DOT__state = 0;
    CData/*0:0*/ __Vdly__npc__DOT__u_Mstage_bus__DOT__state;
    __Vdly__npc__DOT__u_Mstage_bus__DOT__state = 0;
    CData/*0:0*/ __Vdly__npc__DOT__u_Wstage_bus__DOT__state;
    __Vdly__npc__DOT__u_Wstage_bus__DOT__state = 0;
    // Body
    if (vlSelf->npc__DOT__idu_inst__DOT__ebreak) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__ebreak_TOP();
    }
    __Vdly__npc__DOT__u_Wstage_bus__DOT__state = vlSelf->npc__DOT__u_Wstage_bus__DOT__state;
    __Vdly__npc__DOT__pcF = vlSelf->npc__DOT__pcF;
    __Vdly__npc__DOT__dstagebus_inst__DOT__state = vlSelf->npc__DOT__dstagebus_inst__DOT__state;
    __Vdly__npc__DOT__snpcD = vlSelf->npc__DOT__snpcD;
    __Vdly__npc__DOT__pcD = vlSelf->npc__DOT__pcD;
    __Vdly__npc__DOT__u_Xstage_bus__DOT__state = vlSelf->npc__DOT__u_Xstage_bus__DOT__state;
    __Vdly__npc__DOT__u_Mstage_bus__DOT__state = vlSelf->npc__DOT__u_Mstage_bus__DOT__state;
    __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0 = 0U;
    __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0U;
    __Vdly__npc__DOT__instD = vlSelf->npc__DOT__instD;
    vlSelf->npc__DOT__u_IFU__DOT__state = (1U & ((~ (IData)(vlSelf->rst)) 
                                                 & ((IData)(vlSelf->npc__DOT__u_IFU__DOT__state)
                                                     ? 
                                                    ((IData)(vlSelf->npc__DOT__u_IFU__DOT__state) 
                                                     & ((IData)(vlSelf->npc__DOT__dstagebus_inst__DOT__state)
                                                         ? 1U
                                                         : 0U))
                                                     : 
                                                    ((IData)(vlSelf->npc__DOT__validF)
                                                      ? 1U
                                                      : 0U))));
    vlSelf->npc__DOT__validW_d = vlSelf->npc__DOT__u_Wstage_bus__DOT__state;
    if (vlSelf->rst) {
        vlSelf->npc__DOT__rst_d = 1U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdly__npc__DOT__u_Wstage_bus__DOT__state = 0U;
        __Vdly__npc__DOT__pcF = 0x80000000U;
        __Vdly__npc__DOT__dstagebus_inst__DOT__state = 0U;
        __Vdly__npc__DOT__snpcD = 0U;
        __Vdly__npc__DOT__pcD = 0x80000000U;
        vlSelf->npc__DOT__pcF = __Vdly__npc__DOT__pcF;
        __Vdly__npc__DOT__u_Xstage_bus__DOT__state = 0U;
        __Vdly__npc__DOT__u_Mstage_bus__DOT__state = 0U;
        __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0 = 1U;
        __Vdly__npc__DOT__instD = 0U;
    } else {
        vlSelf->npc__DOT__rst_d = 0U;
        if (vlSelf->npc__DOT__u_Wstage_bus__DOT__state) {
            if (vlSelf->npc__DOT__u_Wstage_bus__DOT__state) {
                __Vdly__npc__DOT__u_Wstage_bus__DOT__state = 0U;
            }
            __Vdly__npc__DOT__pcF = vlSelf->npc__DOT__dnpcX;
        } else {
            __Vdly__npc__DOT__u_Wstage_bus__DOT__state 
                = vlSelf->npc__DOT__u_Mstage_bus__DOT__state;
            __Vdly__npc__DOT__pcF = vlSelf->npc__DOT__pcF;
        }
        if (vlSelf->npc__DOT__dstagebus_inst__DOT__state) {
            if (vlSelf->npc__DOT__dstagebus_inst__DOT__state) {
                __Vdly__npc__DOT__dstagebus_inst__DOT__state 
                    = vlSelf->npc__DOT__u_Xstage_bus__DOT__state;
            }
        } else {
            __Vdly__npc__DOT__dstagebus_inst__DOT__state 
                = vlSelf->npc__DOT__validF;
        }
        if (((~ (IData)(vlSelf->npc__DOT__u_Xstage_bus__DOT__state)) 
             & (IData)(vlSelf->npc__DOT__dstagebus_inst__DOT__state))) {
            __Vdly__npc__DOT__snpcD = ((IData)(4U) 
                                       + vlSelf->npc__DOT__pcF);
            __Vdly__npc__DOT__pcD = vlSelf->npc__DOT__pcF;
            __Vdly__npc__DOT__instD = vlSelf->npc__DOT__instF;
        } else {
            __Vdly__npc__DOT__snpcD = vlSelf->npc__DOT__snpcD;
            __Vdly__npc__DOT__pcD = vlSelf->npc__DOT__pcD;
            __Vdly__npc__DOT__instD = vlSelf->npc__DOT__instD;
        }
        vlSelf->npc__DOT__pcF = __Vdly__npc__DOT__pcF;
        if (vlSelf->npc__DOT__u_Xstage_bus__DOT__state) {
            if (vlSelf->npc__DOT__u_Xstage_bus__DOT__state) {
                __Vdly__npc__DOT__u_Xstage_bus__DOT__state 
                    = vlSelf->npc__DOT__u_Mstage_bus__DOT__state;
            }
        } else {
            __Vdly__npc__DOT__u_Xstage_bus__DOT__state 
                = vlSelf->npc__DOT__dstagebus_inst__DOT__state;
        }
        if (vlSelf->npc__DOT__u_Mstage_bus__DOT__state) {
            if (vlSelf->npc__DOT__u_Mstage_bus__DOT__state) {
                __Vdly__npc__DOT__u_Mstage_bus__DOT__state 
                    = vlSelf->npc__DOT__u_Wstage_bus__DOT__state;
            }
        } else {
            __Vdly__npc__DOT__u_Mstage_bus__DOT__state 
                = vlSelf->npc__DOT__u_Xstage_bus__DOT__state;
        }
        if ((5U != (IData)(vlSelf->npc__DOT__rdregsrcW))) {
            __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v32 
                = vlSelf->npc__DOT__rddataW;
            __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32 = 1U;
            __Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v32 
                = vlSelf->npc__DOT__rdW;
        }
    }
    vlSelf->npc__DOT__dstagebus_inst__DOT__state = __Vdly__npc__DOT__dstagebus_inst__DOT__state;
    vlSelf->npc__DOT__validF = ((~ (IData)(vlSelf->rst)) 
                                & ((IData)(vlSelf->npc__DOT__validW_d) 
                                   | ((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->npc__DOT__rst_d))));
    if (vlSelf->rst) {
        vlSelf->npc__DOT__mdataW = 0U;
    } else if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Wstage_bus__DOT__state)))) {
        vlSelf->npc__DOT__mdataW = vlSelf->npc__DOT__mdataM;
    }
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->npc__DOT__mdataW)));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[3U] 
        = vlSelf->npc__DOT__mdataW;
    if (vlSelf->rst) {
        vlSelf->npc__DOT__jumpX = 0U;
        vlSelf->npc__DOT__mretX = 0U;
        vlSelf->npc__DOT__cmp_typeX = 0U;
        vlSelf->npc__DOT__jalrX = 0U;
        vlSelf->npc__DOT__dnpcW = 0U;
        vlSelf->npc__DOT__mrtypeM = 0U;
        vlSelf->npc__DOT__cmp_resultW = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Xstage_bus__DOT__state)))) {
            vlSelf->npc__DOT__jumpX = vlSelf->npc__DOT__jumpD;
            vlSelf->npc__DOT__mretX = vlSelf->npc__DOT__mretD;
            vlSelf->npc__DOT__cmp_typeX = (7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                                                 >> 1U));
            vlSelf->npc__DOT__jalrX = vlSelf->npc__DOT__jalrD;
        }
        if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Wstage_bus__DOT__state)))) {
            vlSelf->npc__DOT__dnpcW = vlSelf->npc__DOT__dnpcM;
            vlSelf->npc__DOT__cmp_resultW = vlSelf->npc__DOT__cmp_resultM;
        }
        if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Mstage_bus__DOT__state)))) {
            vlSelf->npc__DOT__mrtypeM = vlSelf->npc__DOT__mrtypeX;
        }
    }
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->npc__DOT__cmp_resultW)));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[1U] 
        = vlSelf->npc__DOT__cmp_resultW;
    if (vlSelf->rst) {
        vlSelf->npc__DOT__mwmaskM = 0U;
        vlSelf->npc__DOT__snpcW = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Mstage_bus__DOT__state)))) {
            vlSelf->npc__DOT__mwmaskM = vlSelf->npc__DOT__mwmaskX;
        }
        if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Wstage_bus__DOT__state)))) {
            vlSelf->npc__DOT__snpcW = vlSelf->npc__DOT__snpcM;
        }
    }
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[2U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->npc__DOT__snpcW)));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[2U] 
        = vlSelf->npc__DOT__snpcW;
    if (vlSelf->rst) {
        vlSelf->npc__DOT__ALU_opX = 0U;
        vlSelf->npc__DOT__branchX = 0U;
        vlSelf->npc__DOT__mvalidM = 0U;
        vlSelf->npc__DOT__mwenM = 0U;
        vlSelf->npc__DOT__mstatus_data = 0x1800U;
    } else {
        if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Xstage_bus__DOT__state)))) {
            vlSelf->npc__DOT__ALU_opX = vlSelf->npc__DOT__ALU_opD;
            vlSelf->npc__DOT__branchX = (0x63U == (0x7fU 
                                                   & vlSelf->npc__DOT__instD));
        }
        if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Mstage_bus__DOT__state)))) {
            vlSelf->npc__DOT__mvalidM = vlSelf->npc__DOT__mvalidX;
            vlSelf->npc__DOT__mwenM = vlSelf->npc__DOT__mwenX;
        }
        if ((0x300U == (IData)(vlSelf->npc__DOT__csraddrW))) {
            vlSelf->npc__DOT__mstatus_data = vlSelf->npc__DOT__ALU_resultW;
        }
    }
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[3U] 
        = (0x30000000000ULL | (QData)((IData)(vlSelf->npc__DOT__mstatus_data)));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[3U] 
        = vlSelf->npc__DOT__mstatus_data;
    if (vlSelf->rst) {
        vlSelf->npc__DOT__ALUsrc2X = 0U;
        vlSelf->npc__DOT__immX = 0U;
        vlSelf->npc__DOT__ALUsrc1X = 0U;
        vlSelf->npc__DOT__src1X = 0U;
        vlSelf->npc__DOT__mcause_data = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Xstage_bus__DOT__state)))) {
            vlSelf->npc__DOT__ALUsrc2X = vlSelf->npc__DOT__ALUsrc2D;
            vlSelf->npc__DOT__immX = vlSelf->npc__DOT__immD;
            vlSelf->npc__DOT__ALUsrc1X = ((0x17U == 
                                           (0x7fU & vlSelf->npc__DOT__instD))
                                           ? 1U : (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->npc__DOT__instD))
                                                    ? 2U
                                                    : 0U));
            vlSelf->npc__DOT__src1X = ((0U == (0x1fU 
                                               & (vlSelf->npc__DOT__instD 
                                                  >> 0xfU)))
                                        ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                                       [(0x1fU & (vlSelf->npc__DOT__instD 
                                                  >> 0xfU))]);
        }
        if (((IData)(vlSelf->npc__DOT__ecallW) | (0x342U 
                                                  == (IData)(vlSelf->npc__DOT__csraddrW)))) {
            vlSelf->npc__DOT__mcause_data = ((IData)(vlSelf->npc__DOT__ecallW)
                                              ? vlSelf->npc__DOT__src2W
                                              : vlSelf->npc__DOT__ALU_resultW);
        }
    }
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[1U] 
        = (0x34200000000ULL | (QData)((IData)(vlSelf->npc__DOT__mcause_data)));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[1U] 
        = vlSelf->npc__DOT__mcause_data;
    if (vlSelf->rst) {
        vlSelf->npc__DOT__csrW = 0U;
    } else if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Wstage_bus__DOT__state)))) {
        vlSelf->npc__DOT__csrW = vlSelf->npc__DOT__csrM;
    }
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[0U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->npc__DOT__csrW)));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[0U] 
        = vlSelf->npc__DOT__csrW;
    if (vlSelf->rst) {
        vlSelf->npc__DOT__rdregsrcW = 0U;
        vlSelf->npc__DOT__rdW = 0U;
        vlSelf->npc__DOT__dnpcM = 0U;
        vlSelf->npc__DOT__mrtypeX = 0U;
        vlSelf->npc__DOT__cmp_resultM = 0U;
        vlSelf->npc__DOT__mwmaskX = 0U;
        vlSelf->npc__DOT__snpcM = 0U;
        vlSelf->npc__DOT__mvalidX = 0U;
        vlSelf->npc__DOT__mwenX = 0U;
        vlSelf->npc__DOT__src2W = 0U;
        vlSelf->npc__DOT__csrM = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Wstage_bus__DOT__state)))) {
            vlSelf->npc__DOT__rdregsrcW = vlSelf->npc__DOT__rdregsrcM;
            vlSelf->npc__DOT__rdW = vlSelf->npc__DOT__rdM;
            vlSelf->npc__DOT__src2W = vlSelf->npc__DOT__src2M;
        }
        if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Mstage_bus__DOT__state)))) {
            vlSelf->npc__DOT__dnpcM = vlSelf->npc__DOT__dnpcX;
            vlSelf->npc__DOT__cmp_resultM = vlSelf->npc__DOT__cmp_resultX;
            vlSelf->npc__DOT__snpcM = vlSelf->npc__DOT__snpcX;
            vlSelf->npc__DOT__csrM = vlSelf->npc__DOT__csrX;
        }
        if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Xstage_bus__DOT__state)))) {
            vlSelf->npc__DOT__mrtypeX = vlSelf->npc__DOT__mrtypeD;
            vlSelf->npc__DOT__mwmaskX = vlSelf->npc__DOT__mwmaskD;
            vlSelf->npc__DOT__mvalidX = ((3U == (0x7fU 
                                                 & vlSelf->npc__DOT__instD)) 
                                         | (0x23U == 
                                            (0x7fU 
                                             & vlSelf->npc__DOT__instD)));
            vlSelf->npc__DOT__mwenX = (0x23U == (0x7fU 
                                                 & vlSelf->npc__DOT__instD));
        }
    }
    if (vlSelf->npc__DOT__validF) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read_TOP(vlSelf->npc__DOT__pcF, vlSelf->__Vfunc_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read__1__Vfuncout);
        vlSelf->npc__DOT__instF = vlSelf->__Vfunc_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read__1__Vfuncout;
    } else {
        vlSelf->npc__DOT__instF = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->npc__DOT__rdregsrcM = 0U;
        vlSelf->npc__DOT__rdM = 0U;
        vlSelf->npc__DOT__snpcX = 0x80000000U;
        vlSelf->npc__DOT__snpcD = __Vdly__npc__DOT__snpcD;
        vlSelf->npc__DOT__src2M = 0U;
        vlSelf->npc__DOT__csrX = 0U;
        vlSelf->npc__DOT__rdregsrcX = 0U;
        vlSelf->npc__DOT__rdX = 0U;
        vlSelf->npc__DOT__instD = __Vdly__npc__DOT__instD;
        vlSelf->npc__DOT__src2X = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Mstage_bus__DOT__state)))) {
            vlSelf->npc__DOT__rdregsrcM = vlSelf->npc__DOT__rdregsrcX;
            vlSelf->npc__DOT__rdM = vlSelf->npc__DOT__rdX;
            vlSelf->npc__DOT__src2M = vlSelf->npc__DOT__src2X;
        }
        if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Xstage_bus__DOT__state)))) {
            vlSelf->npc__DOT__snpcX = vlSelf->npc__DOT__snpcD;
            vlSelf->npc__DOT__csrX = ((IData)(vlSelf->npc__DOT__ecallD)
                                       ? vlSelf->npc__DOT__mtvec_data
                                       : ((IData)(vlSelf->npc__DOT__mretD)
                                           ? vlSelf->npc__DOT__mepc_data
                                           : vlSelf->npc__DOT__csr_rdata));
            vlSelf->npc__DOT__rdregsrcX = vlSelf->npc__DOT__rdregsrcD;
            vlSelf->npc__DOT__rdX = (0x1fU & (vlSelf->npc__DOT__instD 
                                              >> 7U));
            vlSelf->npc__DOT__src2X = ((0U == (IData)(vlSelf->npc__DOT__rf_raddr2))
                                        ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                                       [vlSelf->npc__DOT__rf_raddr2]);
        }
        vlSelf->npc__DOT__snpcD = __Vdly__npc__DOT__snpcD;
        vlSelf->npc__DOT__instD = __Vdly__npc__DOT__instD;
    }
    if (__Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0) {
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xaU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xbU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xcU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xdU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xeU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xfU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x10U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x11U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x12U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x13U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x14U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x15U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x16U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x17U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x18U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x19U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1aU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1bU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1cU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1dU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1eU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1fU] = 0U;
    }
    if (__Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32) {
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[__Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v32] 
            = __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v32;
    }
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[0U] 
        = (0x500000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->npc__DOT__instD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelf->npc__DOT__instD 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->npc__DOT__instD 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->npc__DOT__instD 
                                                         >> 7U))))))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[1U] 
        = (0x400000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->npc__DOT__instD 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->npc__DOT__instD) 
                                                | ((0x800U 
                                                    & (vlSelf->npc__DOT__instD 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->npc__DOT__instD 
                                                         >> 0x14U))))))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[2U] 
        = (0x300000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelf->npc__DOT__instD))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->npc__DOT__instD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->npc__DOT__instD 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->npc__DOT__instD 
                                                      >> 7U)))))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)((((- (IData)((vlSelf->npc__DOT__instD 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->npc__DOT__instD 
                                        >> 0x14U))));
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->npc__DOT__instD 
                              >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->npc__DOT__instD >> 0xcU)) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instD 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instD >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instD 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instD >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__mwmaskD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit)
                                  ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out)
                                  : 0U);
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->npc__DOT__instD 
                              >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->npc__DOT__instD >> 0xcU)) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instD 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instD >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instD 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instD >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instD 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instD >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instD 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instD >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__mrtypeD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit)
                                  ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out)
                                  : 0U);
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key 
        = ((((0x33U == (0x7fU & vlSelf->npc__DOT__instD)) 
             | (0x63U == (0x7fU & vlSelf->npc__DOT__instD))) 
            << 2U) | (((IData)((0x1073U == (0x707fU 
                                            & vlSelf->npc__DOT__instD))) 
                       << 1U) | (IData)((0x2073U == 
                                         (0x707fU & vlSelf->npc__DOT__instD)))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->npc__DOT__instD >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__instD 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__instD 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__instD 
                                                    >> 7U)))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->npc__DOT__instD >> 0x1fU))) 
            << 0x14U) | ((0xff000U & vlSelf->npc__DOT__instD) 
                         | ((0x800U & (vlSelf->npc__DOT__instD 
                                       >> 9U)) | (0x7feU 
                                                  & (vlSelf->npc__DOT__instD 
                                                     >> 0x14U)))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[2U] 
        = (0xfffff000U & vlSelf->npc__DOT__instD);
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->npc__DOT__instD >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->npc__DOT__instD 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->npc__DOT__instD 
                                                    >> 7U))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->npc__DOT__instD >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__instD >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0 
        = ((0x13U == (0x7fU & vlSelf->npc__DOT__instD)) 
           | (0x33U == (0x7fU & vlSelf->npc__DOT__instD)));
    vlSelf->npc__DOT__jalrD = (IData)((0x67U == (0x707fU 
                                                 & vlSelf->npc__DOT__instD)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h098fb8c5__0 
        = (((0x13U == (0x7fU & vlSelf->npc__DOT__instD)) 
            << 1U) | (0x33U == (0x7fU & vlSelf->npc__DOT__instD)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0 
        = (IData)((0x73U == (0x707fU & vlSelf->npc__DOT__instD)));
    vlSelf->npc__DOT__ALU_B = ((0U == (IData)(vlSelf->npc__DOT__ALUsrc2X))
                                ? vlSelf->npc__DOT__src2X
                                : ((1U == (IData)(vlSelf->npc__DOT__ALUsrc2X))
                                    ? vlSelf->npc__DOT__immX
                                    : ((2U == (IData)(vlSelf->npc__DOT__ALUsrc2X))
                                        ? vlSelf->npc__DOT__csrX
                                        : 0U)));
    if (vlSelf->rst) {
        vlSelf->npc__DOT__mtvec_data = 0U;
    } else if ((0x305U == (IData)(vlSelf->npc__DOT__csraddrW))) {
        vlSelf->npc__DOT__mtvec_data = vlSelf->npc__DOT__ALU_resultW;
    }
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[0U] 
        = (0x30500000000ULL | (QData)((IData)(vlSelf->npc__DOT__mtvec_data)));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[0U] 
        = vlSelf->npc__DOT__mtvec_data;
    if (vlSelf->rst) {
        vlSelf->npc__DOT__mepc_data = 0U;
    } else if (((IData)(vlSelf->npc__DOT__ecallW) | 
                (0x341U == (IData)(vlSelf->npc__DOT__csraddrW)))) {
        vlSelf->npc__DOT__mepc_data = ((IData)(vlSelf->npc__DOT__ecallW)
                                        ? vlSelf->npc__DOT__pcW
                                        : vlSelf->npc__DOT__ALU_resultW);
    }
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[2U] 
        = (0x34100000000ULL | (QData)((IData)(vlSelf->npc__DOT__mepc_data)));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[2U] 
        = vlSelf->npc__DOT__mepc_data;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key) 
                       == vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__ALUsrc2D = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out)
                                   : 1U);
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
           & (0x5000U == (0x7000U & vlSelf->npc__DOT__instD)));
    vlSelf->npc__DOT__jumpD = ((0x6fU == (0x7fU & vlSelf->npc__DOT__instD)) 
                               | (IData)(vlSelf->npc__DOT__jalrD));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key 
        = (((0x37U == (0x7fU & vlSelf->npc__DOT__instD)) 
            << 8U) | (((0x17U == (0x7fU & vlSelf->npc__DOT__instD)) 
                       << 7U) | (((0x6fU == (0x7fU 
                                             & vlSelf->npc__DOT__instD)) 
                                  << 6U) | (((IData)(vlSelf->npc__DOT__jalrD) 
                                             << 5U) 
                                            | (((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->npc__DOT__instD)) 
                                                << 4U) 
                                               | (((3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->npc__DOT__instD)) 
                                                   << 3U) 
                                                  | (((0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->npc__DOT__instD)) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h098fb8c5__0))))))));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key 
        = ((0x38U & (vlSelf->npc__DOT__instD >> 9U)) 
           | (((0x63U == (0x7fU & vlSelf->npc__DOT__instD)) 
               << 2U) | (IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h098fb8c5__0)));
    vlSelf->npc__DOT__mretD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0) 
                               & (0x302U == (vlSelf->npc__DOT__instD 
                                             >> 0x14U)));
    vlSelf->npc__DOT__idu_inst__DOT__ebreak = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->npc__DOT__instD 
                                                   >> 0x14U)));
    if (vlSelf->rst) {
        vlSelf->npc__DOT__csraddrW = 0U;
        vlSelf->npc__DOT__ecallW = 0U;
        vlSelf->npc__DOT__ALU_resultW = 0U;
        vlSelf->npc__DOT__pcW = 0U;
    } else if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Wstage_bus__DOT__state)))) {
        vlSelf->npc__DOT__csraddrW = vlSelf->npc__DOT__csraddrM;
        vlSelf->npc__DOT__ecallW = vlSelf->npc__DOT__ecallM;
        vlSelf->npc__DOT__ALU_resultW = vlSelf->npc__DOT__ALU_resultM;
        vlSelf->npc__DOT__pcW = vlSelf->npc__DOT__pcM;
    }
    vlSelf->npc__DOT__u_Wstage_bus__DOT__state = __Vdly__npc__DOT__u_Wstage_bus__DOT__state;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                       == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__inst_type = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit)
                                    ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out)
                                    : 6U);
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                       == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit)
            ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out)
            : 0U);
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)(vlSelf->npc__DOT__ALU_resultW));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[4U] 
        = vlSelf->npc__DOT__ALU_resultW;
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__inst_type) 
                       == vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__inst_type) == vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
         [0U]);
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__inst_type) 
                          == vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__inst_type) == 
            vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
            [1U]));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__inst_type) 
                          == vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__inst_type) == 
            vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
            [2U]));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__inst_type) 
                          == vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__inst_type) == 
            vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
            [3U]));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__inst_type) 
                          == vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__inst_type) == 
            vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
            [4U]));
    vlSelf->npc__DOT__immD = ((IData)(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit)
                               ? vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out
                               : 0U);
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key 
        = ((0x40U & (((0x63U == (0x7fU & vlSelf->npc__DOT__instD)) 
                      | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                         | (IData)((0x40000033U == 
                                    (0xfe00707fU & vlSelf->npc__DOT__instD))))) 
                     << 6U)) | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                  & (IData)((0x1000U 
                                             == (0xfe007000U 
                                                 & vlSelf->npc__DOT__instD)))) 
                                 << 5U) | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0) 
                                             & (0U 
                                                == 
                                                (vlSelf->npc__DOT__instD 
                                                 >> 0x19U))) 
                                            << 4U) 
                                           | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0) 
                                                & (0x20U 
                                                   == 
                                                   (vlSelf->npc__DOT__instD 
                                                    >> 0x19U))) 
                                               << 3U) 
                                              | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                                   & (0x4000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->npc__DOT__instD))) 
                                                  << 2U) 
                                                 | (((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                                       & (0x6000U 
                                                          == 
                                                          (0x7000U 
                                                           & vlSelf->npc__DOT__instD))) 
                                                      | (0x73U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->npc__DOT__instD))) 
                                                     << 1U) 
                                                    | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                                       & (0x7000U 
                                                          == 
                                                          (0x7000U 
                                                           & vlSelf->npc__DOT__instD)))))))));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcW) 
                       == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__rdregsrcW) 
                                                   == 
                                                   vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                   [0U]);
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcW) 
                          == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->npc__DOT__rdregsrcW) 
                                                      == 
                                                      vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                      [1U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcW) 
                          == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->npc__DOT__rdregsrcW) 
                                                      == 
                                                      vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                      [2U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcW) 
                          == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->npc__DOT__rdregsrcW) 
                                                      == 
                                                      vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                      [3U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcW) 
                          == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->npc__DOT__rdregsrcW) 
                                                      == 
                                                      vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                      [4U]));
    vlSelf->npc__DOT__rddataW = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit)
                                  ? vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out
                                  : 0U);
    if (vlSelf->rst) {
        vlSelf->npc__DOT__csraddrM = 0U;
        vlSelf->npc__DOT__ecallM = 0U;
        vlSelf->npc__DOT__ALU_resultM = 0U;
        vlSelf->npc__DOT__pcM = 0U;
    } else if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Mstage_bus__DOT__state)))) {
        vlSelf->npc__DOT__csraddrM = vlSelf->npc__DOT__csraddrX;
        vlSelf->npc__DOT__ecallM = vlSelf->npc__DOT__ecallX;
        vlSelf->npc__DOT__ALU_resultM = (IData)(vlSelf->npc__DOT__u_ALU__DOT__out);
        vlSelf->npc__DOT__pcM = vlSelf->npc__DOT__pcX;
    }
    vlSelf->npc__DOT__u_Mstage_bus__DOT__state = __Vdly__npc__DOT__u_Mstage_bus__DOT__state;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
                       == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__ALU_opD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit)
                                  ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out)
                                  : 0U);
    if (vlSelf->rst) {
        vlSelf->npc__DOT__csraddrX = 0U;
        vlSelf->npc__DOT__ecallX = 0U;
    } else if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Xstage_bus__DOT__state)))) {
        vlSelf->npc__DOT__csraddrX = vlSelf->npc__DOT__csraddrD;
        vlSelf->npc__DOT__ecallX = vlSelf->npc__DOT__ecallD;
    }
    if (vlSelf->npc__DOT__mvalidM) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read_TOP(vlSelf->npc__DOT__ALU_resultM, vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout);
        vlSelf->npc__DOT__rdata = vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout;
        if (vlSelf->npc__DOT__mwenM) {
            Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_write_TOP(vlSelf->npc__DOT__ALU_resultM, vlSelf->npc__DOT__src2M, (IData)(vlSelf->npc__DOT__mwmaskM));
        }
    } else {
        vlSelf->npc__DOT__rdata = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->npc__DOT__pcX = 0x80000000U;
    } else if ((1U & (~ (IData)(vlSelf->npc__DOT__u_Xstage_bus__DOT__state)))) {
        vlSelf->npc__DOT__pcX = vlSelf->npc__DOT__pcD;
    }
    vlSelf->npc__DOT__ecallD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0) 
                                & (0U == (vlSelf->npc__DOT__instD 
                                          >> 0x14U)));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[0U] 
        = (0x400000000ULL | (QData)((IData)((0xffffU 
                                             & vlSelf->npc__DOT__rdata))));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)((0xffU 
                                             & vlSelf->npc__DOT__rdata))));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[2U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->npc__DOT__rdata)));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->npc__DOT__rdata 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->npc__DOT__rdata)))));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)((((- (IData)((1U & (vlSelf->npc__DOT__rdata 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelf->npc__DOT__rdata))));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[0U] 
        = (0xffffU & vlSelf->npc__DOT__rdata);
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->npc__DOT__rdata);
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[2U] 
        = vlSelf->npc__DOT__rdata;
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((1U & (vlSelf->npc__DOT__rdata 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->npc__DOT__rdata));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((1U & (vlSelf->npc__DOT__rdata 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->npc__DOT__rdata));
    vlSelf->npc__DOT__pcD = __Vdly__npc__DOT__pcD;
    vlSelf->npc__DOT__u_Xstage_bus__DOT__state = __Vdly__npc__DOT__u_Xstage_bus__DOT__state;
    vlSelf->npc__DOT__rf_raddr2 = ((IData)(vlSelf->npc__DOT__ecallD)
                                    ? 0xfU : (0x1fU 
                                              & (vlSelf->npc__DOT__instD 
                                                 >> 0x14U)));
    vlSelf->npc__DOT__csraddrD = (((0x73U == (0x7fU 
                                              & vlSelf->npc__DOT__instD)) 
                                   | (IData)(vlSelf->npc__DOT__ecallD))
                                   ? (vlSelf->npc__DOT__instD 
                                      >> 0x14U) : 0U);
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key 
        = (((3U == (0x7fU & vlSelf->npc__DOT__instD)) 
            << 4U) | (((IData)(vlSelf->npc__DOT__jumpD) 
                       << 3U) | ((4U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                                        << 2U)) | (
                                                   ((0x73U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->npc__DOT__instD)) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x63U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->npc__DOT__instD)) 
                                                         | ((0x23U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->npc__DOT__instD)) 
                                                            | ((IData)(vlSelf->npc__DOT__ecallD) 
                                                               | ((IData)(vlSelf->npc__DOT__mretD) 
                                                                  | ((~ 
                                                                      ((0x37U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->npc__DOT__instD)) 
                                                                       | ((0x17U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->npc__DOT__instD)) 
                                                                          | ((0x6fU 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->npc__DOT__instD)) 
                                                                             | ((IData)(vlSelf->npc__DOT__jalrD) 
                                                                                | ((0x63U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->npc__DOT__instD)) 
                                                                                | ((3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->npc__DOT__instD)) 
                                                                                | ((0x23U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->npc__DOT__instD)) 
                                                                                | ((0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->npc__DOT__instD)) 
                                                                                | ((0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->npc__DOT__instD)) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__ebreak) 
                                                                                | ((IData)(vlSelf->npc__DOT__ecallD) 
                                                                                | ((IData)(vlSelf->npc__DOT__mretD) 
                                                                                | (0x73U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->npc__DOT__instD))))))))))))))) 
                                                                     | (IData)(vlSelf->npc__DOT__idu_inst__DOT__ebreak)))))))))));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeM) 
                       == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__mrtypeM) == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeM) 
                          == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__mrtypeM) == 
              vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeM) 
                          == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__mrtypeM) == 
              vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeM) 
                          == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__mrtypeM) == 
              vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeM) 
                          == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__mrtypeM) == 
              vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__mdataM = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit)
                                 ? vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out
                                 : 0U);
    vlSelf->npc__DOT__ALU_A = ((0U == (IData)(vlSelf->npc__DOT__ALUsrc1X))
                                ? vlSelf->npc__DOT__src1X
                                : ((1U == (IData)(vlSelf->npc__DOT__ALUsrc1X))
                                    ? vlSelf->npc__DOT__pcX
                                    : 0U));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__csraddrD) 
                       == vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__csraddrD) == vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__csraddrD) 
                          == vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__csraddrD) == 
              vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__csraddrD) 
                          == vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__csraddrD) == 
              vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__csraddrD) 
                          == vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__csraddrD) == 
              vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__csr_rdata = ((IData)(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit)
                                    ? vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out
                                    : 0U);
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
                       == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__rdregsrcD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit)
                                    ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out)
                                    : 0U);
    vlSelf->npc__DOT__u_ALU__DOT__add_Cout = (1U & (IData)(
                                                           (1ULL 
                                                            & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                                + (QData)((IData)(vlSelf->npc__DOT__ALU_B))) 
                                                               >> 0x20U))));
    vlSelf->npc__DOT__u_ALU__DOT__sub_Cout = (1U & (IData)(
                                                           (1ULL 
                                                            & ((1ULL 
                                                                + 
                                                                ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                                 + (QData)((IData)(
                                                                                (~ vlSelf->npc__DOT__ALU_B))))) 
                                                               >> 0x20U))));
    vlSelf->__VdfgTmp_h0eee3364__0 = VL_SHIFTRS_III(32,32,5, vlSelf->npc__DOT__ALU_A, 
                                                    (0x1fU 
                                                     & vlSelf->npc__DOT__ALU_B));
    vlSelf->__VdfgTmp_h8d43fe98__0 = (vlSelf->npc__DOT__ALU_A 
                                      & vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h80607264__0 = (vlSelf->npc__DOT__ALU_A 
                                      | vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h8f7c6002__0 = (vlSelf->npc__DOT__ALU_A 
                                      ^ vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h0eead378__0 = (vlSelf->npc__DOT__ALU_A 
                                      << (0x1fU & vlSelf->npc__DOT__ALU_B));
    vlSelf->__VdfgTmp_h0ee2f3e1__0 = (vlSelf->npc__DOT__ALU_A 
                                      >> (0x1fU & vlSelf->npc__DOT__ALU_B));
    vlSelf->npc__DOT__u_ALU__DOT__add_result = (vlSelf->npc__DOT__ALU_A 
                                                + vlSelf->npc__DOT__ALU_B);
    vlSelf->npc__DOT__u_ALU__DOT__sub_result = ((IData)(1U) 
                                                + (vlSelf->npc__DOT__ALU_A 
                                                   + 
                                                   (~ vlSelf->npc__DOT__ALU_B)));
    if ((0U == (IData)(vlSelf->npc__DOT__ALU_opX))) {
        vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[0U] 
            = vlSelf->npc__DOT__u_ALU__DOT__add_Cout;
        vlSelf->npc__DOT__Cout = vlSelf->npc__DOT__u_ALU__DOT__add_Cout;
    } else {
        vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[0U] 
            = ((1U == (IData)(vlSelf->npc__DOT__ALU_opX)) 
               & (IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_Cout));
        vlSelf->npc__DOT__Cout = ((1U == (IData)(vlSelf->npc__DOT__ALU_opX)) 
                                  & (IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_Cout));
    }
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h0eee3364__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h0eee3364__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4U] 
        = (0x600000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h8d43fe98__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h8d43fe98__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U] 
        = (0x800000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h80607264__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h80607264__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U] 
        = (0xa00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h8f7c6002__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h8f7c6002__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (0xc00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h0eead378__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h0eead378__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h0ee2f3e1__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h0ee2f3e1__0));
    vlSelf->npc__DOT__u_ALU__DOT__add_overflow = (1U 
                                                  & (((vlSelf->npc__DOT__ALU_A 
                                                       >> 0x1fU) 
                                                      & ((~ 
                                                          (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                           >> 0x1fU)) 
                                                         & (vlSelf->npc__DOT__ALU_B 
                                                            >> 0x1fU))) 
                                                     | ((~ 
                                                         (vlSelf->npc__DOT__ALU_A 
                                                          >> 0x1fU)) 
                                                        & ((~ 
                                                            (vlSelf->npc__DOT__ALU_B 
                                                             >> 0x1fU)) 
                                                           & (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                              >> 0x1fU)))));
    vlSelf->npc__DOT__u_ALU__DOT__sub_overflow = (1U 
                                                  & (((vlSelf->npc__DOT__ALU_A 
                                                       >> 0x1fU) 
                                                      & ((~ 
                                                          (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                           >> 0x1fU)) 
                                                         & (~ 
                                                            (vlSelf->npc__DOT__ALU_B 
                                                             >> 0x1fU)))) 
                                                     | ((~ 
                                                         (vlSelf->npc__DOT__ALU_A 
                                                          >> 0x1fU)) 
                                                        & ((vlSelf->npc__DOT__ALU_B 
                                                            & vlSelf->npc__DOT__u_ALU__DOT__sub_result) 
                                                           >> 0x1fU))));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[0U] 
        = (0xaU | (IData)(vlSelf->npc__DOT__Cout));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[1U] 
        = (8U | (1U & (~ (IData)(vlSelf->npc__DOT__Cout))));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[1U] 
        = (1U & (~ (IData)(vlSelf->npc__DOT__Cout)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow)) 
            << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow)) 
            << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6U] 
        = (0x200000000ULL | (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow)) 
                              << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_result))));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow)) 
            << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opX) 
                               == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ALU_opX) == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opX) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opX) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opX) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opX) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opX) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opX) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opX) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opX) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opX) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opX) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opX) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opX) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opX) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opX) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__out = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit)
                                          ? vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out
                                          : 0ULL);
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[4U] 
        = (2U | (0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[5U] 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[3U] 
        = (1U & VL_REDXOR_64((0x180000000ULL & vlSelf->npc__DOT__u_ALU__DOT__out)));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[4U] 
        = (0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[5U] 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))));
    vlSelf->npc__DOT__slt = (1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->npc__DOT__u_ALU__DOT__out)));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[2U] 
        = (6U | (1U & (~ (IData)(vlSelf->npc__DOT__slt))));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[3U] 
        = (4U | (IData)(vlSelf->npc__DOT__slt));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[2U] 
        = (1U & (~ (IData)(vlSelf->npc__DOT__slt)));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->npc__DOT__cmp_typeX) == 
            vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [0U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__cmp_typeX) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
         [0U]);
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__cmp_typeX) 
               == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [1U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__cmp_typeX) == 
            vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [1U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__cmp_typeX) 
               == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [2U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__cmp_typeX) == 
            vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [2U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__cmp_typeX) 
               == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [3U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__cmp_typeX) == 
            vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [3U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__cmp_typeX) 
               == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [4U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__cmp_typeX) == 
            vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [4U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__cmp_typeX) 
               == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [5U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__cmp_typeX) == 
            vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [5U]));
    vlSelf->npc__DOT__cmp_resultX = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
                                     & (IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out));
    vlSelf->npc__DOT__dnpcX = (((IData)(vlSelf->npc__DOT__ecallX) 
                                | (IData)(vlSelf->npc__DOT__mretX))
                                ? vlSelf->npc__DOT__csrX
                                : (((IData)(vlSelf->npc__DOT__jumpX) 
                                    | ((IData)(vlSelf->npc__DOT__branchX) 
                                       & (IData)(vlSelf->npc__DOT__cmp_resultX)))
                                    ? (((IData)(vlSelf->npc__DOT__jalrX)
                                         ? vlSelf->npc__DOT__src1X
                                         : vlSelf->npc__DOT__pcX) 
                                       + vlSelf->npc__DOT__immX)
                                    : vlSelf->npc__DOT__snpcX));
}

void Vnpc___024root___eval_nba(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vnpc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vnpc___024root___eval_triggers__ico(Vnpc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__ico(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG
void Vnpc___024root___eval_triggers__act(Vnpc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__act(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__nba(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG

void Vnpc___024root___eval(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vnpc___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vnpc___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/npc.sv", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vnpc___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vnpc___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vnpc___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/npc.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vnpc___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vnpc___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/npc.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vnpc___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vnpc___024root___eval_debug_assertions(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG

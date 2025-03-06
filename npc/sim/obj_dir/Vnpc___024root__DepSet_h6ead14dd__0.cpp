// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc___024root.h"

void Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vnpc___024root___ico_sequent__TOP__0(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->npc__DOT__inst = 0U;
    } else {
        Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_read_TOP(vlSelf->npc__DOT__pc, vlSelf->__Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout);
        vlSelf->npc__DOT__inst = vlSelf->__Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout;
    }
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[0U] 
        = (0x700000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->npc__DOT__inst 
                                                      >> 7U)))))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[2U] 
        = (0x500000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->npc__DOT__inst) 
                                                | ((0x800U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->npc__DOT__inst 
                                                         >> 0x14U))))))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[3U] 
        = (0x400000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelf->npc__DOT__inst))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[4U] 
        = (0x300000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelf->npc__DOT__inst))));
    vlSelf->npc__DOT__idu_inst__DOT__immI = (((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->npc__DOT__inst 
                                                >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->npc__DOT__inst 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0x14U) | ((0xff000U & vlSelf->npc__DOT__inst) 
                         | ((0x800U & (vlSelf->npc__DOT__inst 
                                       >> 9U)) | (0x7feU 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 0x14U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[3U] 
        = (0xfffff000U & vlSelf->npc__DOT__inst);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[4U] 
        = (0xfffff000U & vlSelf->npc__DOT__inst);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[6U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi = (IData)(
                                                            (0x13U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw = (IData)(
                                                          (0x2023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr = (IData)(
                                                            (0x67U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[1U] 
        = (0x600000000ULL | (QData)((IData)(vlSelf->npc__DOT__idu_inst__DOT__immI)));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[6U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->npc__DOT__idu_inst__DOT__immI)));
    vlSelf->npc__DOT__stop_sim = (1U & ((~ ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi) 
                                            | ((0x100073U 
                                                == vlSelf->npc__DOT__inst) 
                                               | ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->npc__DOT__inst)) 
                                                  | ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->npc__DOT__inst)) 
                                                     | ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->npc__DOT__inst)) 
                                                        | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr) 
                                                           | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw)))))))) 
                                        | (0x100073U 
                                           == vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_name = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi)
                                                   ? 1U
                                                   : 
                                                  ((0x100073U 
                                                    == vlSelf->npc__DOT__inst)
                                                    ? 2U
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->npc__DOT__inst))
                                                     ? 3U
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->npc__DOT__inst))
                                                      ? 4U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->npc__DOT__inst))
                                                       ? 5U
                                                       : 
                                                      ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr)
                                                        ? 6U
                                                        : 
                                                       ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw)
                                                         ? 7U
                                                         : 0U)))))));
    vlSelf->npc__DOT__rs1 = (((IData)(vlSelf->npc__DOT__stop_sim) 
                              | (0x37U == (0x7fU & vlSelf->npc__DOT__inst)))
                              ? 0U : (0x1fU & (vlSelf->npc__DOT__inst 
                                               >> 0xfU)));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__rdregsrc = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__ALU_op = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit)
                                 ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out)
                                 : 0U);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__imm = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit)
                              ? vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out
                              : 1U);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
            == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
            [0U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [1U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [2U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [3U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [4U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [5U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [6U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__ALUsrc2 = (1U & ((~ (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit)) 
                                       | (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out)));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
            == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
            [0U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [1U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [2U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [3U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [4U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [5U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [6U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__ALUsrc1 = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
                                 & (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out));
    vlSelf->npc__DOT__ALU_B = ((IData)(vlSelf->npc__DOT__ALUsrc2)
                                ? vlSelf->npc__DOT__imm
                                : ((0U == (0x1fU & 
                                           (vlSelf->npc__DOT__inst 
                                            >> 0x14U)))
                                    ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                                   [(0x1fU & (vlSelf->npc__DOT__inst 
                                              >> 0x14U))]));
    vlSelf->npc__DOT__ALU_A = ((IData)(vlSelf->npc__DOT__ALUsrc1)
                                ? vlSelf->npc__DOT__pc
                                : ((0U == (IData)(vlSelf->npc__DOT__rs1))
                                    ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                                   [vlSelf->npc__DOT__rs1]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5U] 
        = (0x800000000ULL | (QData)((IData)((~ vlSelf->npc__DOT__ALU_A))));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5U] 
        = (QData)((IData)((~ vlSelf->npc__DOT__ALU_A)));
    vlSelf->__VdfgTmp_h9d656ae0__0 = (vlSelf->npc__DOT__ALU_A 
                                      & vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h9c50524a__0 = (vlSelf->npc__DOT__ALU_A 
                                      | vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h9b55b1fc__0 = (vlSelf->npc__DOT__ALU_A 
                                      ^ vlSelf->npc__DOT__ALU_B);
    vlSelf->npc__DOT__u_ALU__DOT__int_Cout = (1U & (IData)(
                                                           (1ULL 
                                                            & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                                + 
                                                                ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                                 + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                               >> 0x20U))));
    vlSelf->npc__DOT__u_ALU__DOT__add_result = (vlSelf->npc__DOT__ALU_A 
                                                + (vlSelf->npc__DOT__ALU_B 
                                                   + (IData)(vlSelf->npc__DOT__ALU_Cin)));
    vlSelf->npc__DOT__u_ALU__DOT__sub_result = ((IData)(1U) 
                                                + (vlSelf->npc__DOT__ALU_A 
                                                   + 
                                                   (~ vlSelf->npc__DOT__ALU_B)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4U] 
        = (0xc00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h9d656ae0__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h9d656ae0__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U] 
        = (0x1000000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h9c50524a__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h9c50524a__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U] 
        = (0x1400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h9b55b1fc__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h9b55b1fc__0));
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
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U] 
        = (0x1c00000000ULL | (QData)((IData)((1U & 
                                              (~ (IData)(
                                                         (0U 
                                                          != vlSelf->npc__DOT__u_ALU__DOT__sub_result)))))));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (QData)((IData)((1U & (~ (IData)((0U != vlSelf->npc__DOT__u_ALU__DOT__sub_result))))));
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
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__int_Cout)) 
            << 0x21U) | (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow)) 
                          << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_result))));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__int_Cout)) 
            << 0x21U) | (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow)) 
                          << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_result))));
    vlSelf->__VdfgTmp_h6a4a23bc__0 = (1U & ((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow) 
                                            ^ (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                               >> 3U)));
    vlSelf->__VdfgTmp_hf41dd485__0 = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (0x1800000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h6a4a23bc__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h6a4a23bc__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6U] 
        = (0x400000000ULL | vlSelf->__VdfgTmp_hf41dd485__0);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6U] 
        = vlSelf->__VdfgTmp_hf41dd485__0;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                               == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ALU_op) == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__out = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit)
                                          ? vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out
                                          : 0ULL);
    vlSelf->npc__DOT__u_PC__DOT__dnpc = (((0x6fU == 
                                           (0x7fU & vlSelf->npc__DOT__inst)) 
                                          | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr))
                                          ? ((IData)(
                                                     (vlSelf->npc__DOT__u_ALU__DOT__out 
                                                      >> 1U)) 
                                             << 1U)
                                          : ((IData)(4U) 
                                             + vlSelf->npc__DOT__pc));
}

void Vnpc___024root___eval_ico(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vnpc___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vnpc___024root___eval_act(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_act\n"); );
}

void Vnpc___024root____Vdpiimwrap_npc__DOT__ebreak_TOP();

VL_INLINE_OPT void Vnpc___024root___nba_sequent__TOP__0(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v32;
    __Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    IData/*31:0*/ __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v32;
    __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    CData/*0:0*/ __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32;
    __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    // Body
    if (vlSelf->npc__DOT__stop_sim) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__ebreak_TOP();
    }
    __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0 = 0U;
    __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0U;
    if (vlSelf->rst) {
        vlSelf->npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0 = 1U;
    } else if ((3U != (IData)(vlSelf->npc__DOT__rdregsrc))) {
        __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v32 
            = ((0U == (IData)(vlSelf->npc__DOT__rdregsrc))
                ? (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)
                : ((1U == (IData)(vlSelf->npc__DOT__rdregsrc))
                    ? 0U : ((2U == (IData)(vlSelf->npc__DOT__rdregsrc))
                             ? ((IData)(4U) + vlSelf->npc__DOT__pc)
                             : 0U)));
        __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32 = 1U;
        __Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v32 
            = ((IData)(vlSelf->npc__DOT__stop_sim) ? 0xaU
                : (0x1fU & (vlSelf->npc__DOT__inst 
                            >> 7U)));
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
    vlSelf->npc__DOT__pc = ((IData)(vlSelf->rst) ? 0x80000000U
                             : vlSelf->npc__DOT__u_PC__DOT__dnpc);
    if (vlSelf->rst) {
        vlSelf->npc__DOT__inst = 0U;
    } else {
        Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_read_TOP(vlSelf->npc__DOT__pc, vlSelf->__Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout);
        vlSelf->npc__DOT__inst = vlSelf->__Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout;
    }
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[0U] 
        = (0x700000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->npc__DOT__inst 
                                                      >> 7U)))))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[2U] 
        = (0x500000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->npc__DOT__inst) 
                                                | ((0x800U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->npc__DOT__inst 
                                                         >> 0x14U))))))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[3U] 
        = (0x400000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelf->npc__DOT__inst))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[4U] 
        = (0x300000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelf->npc__DOT__inst))));
    vlSelf->npc__DOT__idu_inst__DOT__immI = (((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->npc__DOT__inst 
                                                >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->npc__DOT__inst 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0x14U) | ((0xff000U & vlSelf->npc__DOT__inst) 
                         | ((0x800U & (vlSelf->npc__DOT__inst 
                                       >> 9U)) | (0x7feU 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 0x14U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[3U] 
        = (0xfffff000U & vlSelf->npc__DOT__inst);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[4U] 
        = (0xfffff000U & vlSelf->npc__DOT__inst);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[6U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi = (IData)(
                                                            (0x13U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw = (IData)(
                                                          (0x2023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr = (IData)(
                                                            (0x67U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[1U] 
        = (0x600000000ULL | (QData)((IData)(vlSelf->npc__DOT__idu_inst__DOT__immI)));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[6U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->npc__DOT__idu_inst__DOT__immI)));
    vlSelf->npc__DOT__stop_sim = (1U & ((~ ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi) 
                                            | ((0x100073U 
                                                == vlSelf->npc__DOT__inst) 
                                               | ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->npc__DOT__inst)) 
                                                  | ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->npc__DOT__inst)) 
                                                     | ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->npc__DOT__inst)) 
                                                        | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr) 
                                                           | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw)))))))) 
                                        | (0x100073U 
                                           == vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_name = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi)
                                                   ? 1U
                                                   : 
                                                  ((0x100073U 
                                                    == vlSelf->npc__DOT__inst)
                                                    ? 2U
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->npc__DOT__inst))
                                                     ? 3U
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->npc__DOT__inst))
                                                      ? 4U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->npc__DOT__inst))
                                                       ? 5U
                                                       : 
                                                      ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr)
                                                        ? 6U
                                                        : 
                                                       ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw)
                                                         ? 7U
                                                         : 0U)))))));
    vlSelf->npc__DOT__rs1 = (((IData)(vlSelf->npc__DOT__stop_sim) 
                              | (0x37U == (0x7fU & vlSelf->npc__DOT__inst)))
                              ? 0U : (0x1fU & (vlSelf->npc__DOT__inst 
                                               >> 0xfU)));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__rdregsrc = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__ALU_op = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit)
                                 ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out)
                                 : 0U);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__imm = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit)
                              ? vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out
                              : 1U);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
            == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
            [0U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [1U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [2U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [3U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [4U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [5U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [6U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__ALUsrc2 = (1U & ((~ (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit)) 
                                       | (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out)));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
            == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
            [0U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [1U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [2U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [3U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [4U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [5U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [6U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__ALUsrc1 = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
                                 & (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out));
    vlSelf->npc__DOT__ALU_B = ((IData)(vlSelf->npc__DOT__ALUsrc2)
                                ? vlSelf->npc__DOT__imm
                                : ((0U == (0x1fU & 
                                           (vlSelf->npc__DOT__inst 
                                            >> 0x14U)))
                                    ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                                   [(0x1fU & (vlSelf->npc__DOT__inst 
                                              >> 0x14U))]));
    vlSelf->npc__DOT__ALU_A = ((IData)(vlSelf->npc__DOT__ALUsrc1)
                                ? vlSelf->npc__DOT__pc
                                : ((0U == (IData)(vlSelf->npc__DOT__rs1))
                                    ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                                   [vlSelf->npc__DOT__rs1]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5U] 
        = (0x800000000ULL | (QData)((IData)((~ vlSelf->npc__DOT__ALU_A))));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5U] 
        = (QData)((IData)((~ vlSelf->npc__DOT__ALU_A)));
    vlSelf->__VdfgTmp_h9d656ae0__0 = (vlSelf->npc__DOT__ALU_A 
                                      & vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h9c50524a__0 = (vlSelf->npc__DOT__ALU_A 
                                      | vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h9b55b1fc__0 = (vlSelf->npc__DOT__ALU_A 
                                      ^ vlSelf->npc__DOT__ALU_B);
    vlSelf->npc__DOT__u_ALU__DOT__int_Cout = (1U & (IData)(
                                                           (1ULL 
                                                            & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                                + 
                                                                ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                                 + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                               >> 0x20U))));
    vlSelf->npc__DOT__u_ALU__DOT__add_result = (vlSelf->npc__DOT__ALU_A 
                                                + (vlSelf->npc__DOT__ALU_B 
                                                   + (IData)(vlSelf->npc__DOT__ALU_Cin)));
    vlSelf->npc__DOT__u_ALU__DOT__sub_result = ((IData)(1U) 
                                                + (vlSelf->npc__DOT__ALU_A 
                                                   + 
                                                   (~ vlSelf->npc__DOT__ALU_B)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4U] 
        = (0xc00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h9d656ae0__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h9d656ae0__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U] 
        = (0x1000000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h9c50524a__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h9c50524a__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U] 
        = (0x1400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h9b55b1fc__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h9b55b1fc__0));
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
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U] 
        = (0x1c00000000ULL | (QData)((IData)((1U & 
                                              (~ (IData)(
                                                         (0U 
                                                          != vlSelf->npc__DOT__u_ALU__DOT__sub_result)))))));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (QData)((IData)((1U & (~ (IData)((0U != vlSelf->npc__DOT__u_ALU__DOT__sub_result))))));
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
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__int_Cout)) 
            << 0x21U) | (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow)) 
                          << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_result))));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__int_Cout)) 
            << 0x21U) | (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow)) 
                          << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_result))));
    vlSelf->__VdfgTmp_h6a4a23bc__0 = (1U & ((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow) 
                                            ^ (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                               >> 3U)));
    vlSelf->__VdfgTmp_hf41dd485__0 = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (0x1800000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h6a4a23bc__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h6a4a23bc__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6U] 
        = (0x400000000ULL | vlSelf->__VdfgTmp_hf41dd485__0);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6U] 
        = vlSelf->__VdfgTmp_hf41dd485__0;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                               == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ALU_op) == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__out = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit)
                                          ? vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out
                                          : 0ULL);
    vlSelf->npc__DOT__u_PC__DOT__dnpc = (((0x6fU == 
                                           (0x7fU & vlSelf->npc__DOT__inst)) 
                                          | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr))
                                          ? ((IData)(
                                                     (vlSelf->npc__DOT__u_ALU__DOT__out 
                                                      >> 1U)) 
                                             << 1U)
                                          : ((IData)(4U) 
                                             + vlSelf->npc__DOT__pc));
}

void Vnpc___024root___eval_nba(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vnpc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
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
                VL_FATAL_MT("/home/crystc/ysyx-workbench/npc/vsrc/npc.sv", 1, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/crystc/ysyx-workbench/npc/vsrc/npc.sv", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/crystc/ysyx-workbench/npc/vsrc/npc.sv", 1, "", "NBA region did not converge.");
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

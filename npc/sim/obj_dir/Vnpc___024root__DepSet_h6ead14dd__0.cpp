// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc___024root.h"

VL_INLINE_OPT void Vnpc___024root___ico_sequent__TOP__0(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ npc__DOT__u_ALU__DOT__sub_inst__DOT____VdfgTmp_hc75629da__0;
    npc__DOT__u_ALU__DOT__sub_inst__DOT____VdfgTmp_hc75629da__0 = 0;
    IData/*31:0*/ __VdfgTmp_hb130fc64__0;
    __VdfgTmp_hb130fc64__0 = 0;
    QData/*32:0*/ __VdfgTmp_hb808bfef__0;
    __VdfgTmp_hb808bfef__0 = 0;
    // Body
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[1U] 
        = (0x100000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->inst 
                                                >> 0x14U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__inst_name = ((
                                                   (0x100073U 
                                                    == vlSelf->inst) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0x13U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->inst))));
    vlSelf->npc__DOT__rs1 = ((0x100073U == vlSelf->inst)
                              ? 0U : (0x1fU & (vlSelf->inst 
                                               >> 0xfU)));
    vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
            == vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__key_list
            [0U]) & vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__key_list
               [1U]) & vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__memtoreg = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__hit) 
                                  & (IData)(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__lut_out));
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
    vlSelf->npc__DOT__imm = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit)
                              ? vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out
                              : 0U);
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
    vlSelf->npc__DOT__ALUsrc2 = (1U & ((~ (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit)) 
                                       | (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out)));
    __VdfgTmp_hb130fc64__0 = vlSelf->npc__DOT__u_RegisterFile__DOT__rf
        [vlSelf->npc__DOT__rs1];
    vlSelf->npc__DOT__ALU_B = ((IData)(vlSelf->npc__DOT__ALUsrc2)
                                ? vlSelf->npc__DOT__imm
                                : ((0U == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 0x14U)))
                                    ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0x14U))]));
    if ((0U != (IData)(vlSelf->npc__DOT__rs1))) {
        vlSelf->__VdfgTmp_h633a2119__0 = (~ __VdfgTmp_hb130fc64__0);
        vlSelf->npc__DOT__rf_rdata1 = __VdfgTmp_hb130fc64__0;
        npc__DOT__u_ALU__DOT__sub_inst__DOT____VdfgTmp_hc75629da__0 
            = (__VdfgTmp_hb130fc64__0 >> 0x1fU);
    } else {
        vlSelf->__VdfgTmp_h633a2119__0 = 0xffffffffU;
        vlSelf->npc__DOT__rf_rdata1 = 0U;
        npc__DOT__u_ALU__DOT__sub_inst__DOT____VdfgTmp_hc75629da__0 = 0U;
    }
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5U] 
        = (0x800000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h633a2119__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h633a2119__0));
    vlSelf->__VdfgTmp_h0d5c396e__0 = (vlSelf->npc__DOT__rf_rdata1 
                                      & vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h0c61718c__0 = (vlSelf->npc__DOT__rf_rdata1 
                                      | vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h0f61fa2a__0 = (vlSelf->npc__DOT__rf_rdata1 
                                      ^ vlSelf->npc__DOT__ALU_B);
    vlSelf->npc__DOT__u_ALU__DOT__int_Cout = (1U & (IData)(
                                                           (1ULL 
                                                            & (((QData)((IData)(vlSelf->npc__DOT__rf_rdata1)) 
                                                                + 
                                                                ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                                 + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                               >> 0x20U))));
    vlSelf->npc__DOT__u_ALU__DOT__add_result = (vlSelf->npc__DOT__rf_rdata1 
                                                + (vlSelf->npc__DOT__ALU_B 
                                                   + (IData)(vlSelf->npc__DOT__ALU_Cin)));
    vlSelf->npc__DOT__u_ALU__DOT__sub_result = ((IData)(1U) 
                                                + (vlSelf->npc__DOT__rf_rdata1 
                                                   + 
                                                   (~ vlSelf->npc__DOT__ALU_B)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4U] 
        = (0xc00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h0d5c396e__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h0d5c396e__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U] 
        = (0x1000000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h0c61718c__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h0c61718c__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U] 
        = (0x1400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h0f61fa2a__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h0f61fa2a__0));
    vlSelf->npc__DOT__u_ALU__DOT__add_overflow = (1U 
                                                  & (((IData)(npc__DOT__u_ALU__DOT__sub_inst__DOT____VdfgTmp_hc75629da__0) 
                                                      & ((~ 
                                                          (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                           >> 0x1fU)) 
                                                         & (vlSelf->npc__DOT__ALU_B 
                                                            >> 0x1fU))) 
                                                     | ((~ (IData)(npc__DOT__u_ALU__DOT__sub_inst__DOT____VdfgTmp_hc75629da__0)) 
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
                                                  & (((IData)(npc__DOT__u_ALU__DOT__sub_inst__DOT____VdfgTmp_hc75629da__0) 
                                                      & ((~ 
                                                          (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                           >> 0x1fU)) 
                                                         & (~ 
                                                            (vlSelf->npc__DOT__ALU_B 
                                                             >> 0x1fU)))) 
                                                     | ((~ (IData)(npc__DOT__u_ALU__DOT__sub_inst__DOT____VdfgTmp_hc75629da__0)) 
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
    vlSelf->__VdfgTmp_hc8d59f1f__0 = (1U & ((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow) 
                                            ^ (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                               >> 3U)));
    __VdfgTmp_hb808bfef__0 = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow)) 
                               << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (0x1800000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_hc8d59f1f__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_hc8d59f1f__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6U] 
        = (0x400000000ULL | __VdfgTmp_hb808bfef__0);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6U] 
        = __VdfgTmp_hb808bfef__0;
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
    CData/*4:0*/ __Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    // Body
    if ((0x100073U == vlSelf->inst)) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__ebreak_TOP();
    }
    __Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v0 
        = ((0x100073U == vlSelf->inst) ? 0xaU : (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 7U)));
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : ((IData)(4U) + vlSelf->pc));
    __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v0 
        = ((IData)(vlSelf->npc__DOT__memtoreg) ? 0U
            : (IData)(vlSelf->npc__DOT__u_ALU__DOT__out));
    vlSelf->npc__DOT__u_RegisterFile__DOT__rf[__Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v0] 
        = __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v0;
}

VL_INLINE_OPT void Vnpc___024root___nba_sequent__TOP__1(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ npc__DOT__u_ALU__DOT__sub_inst__DOT____VdfgTmp_hc75629da__0;
    npc__DOT__u_ALU__DOT__sub_inst__DOT____VdfgTmp_hc75629da__0 = 0;
    IData/*31:0*/ __VdfgTmp_hb130fc64__0;
    __VdfgTmp_hb130fc64__0 = 0;
    QData/*32:0*/ __VdfgTmp_hb808bfef__0;
    __VdfgTmp_hb808bfef__0 = 0;
    // Body
    __VdfgTmp_hb130fc64__0 = vlSelf->npc__DOT__u_RegisterFile__DOT__rf
        [vlSelf->npc__DOT__rs1];
    vlSelf->npc__DOT__ALU_B = ((IData)(vlSelf->npc__DOT__ALUsrc2)
                                ? vlSelf->npc__DOT__imm
                                : ((0U == (0x1fU & 
                                           (vlSelf->inst 
                                            >> 0x14U)))
                                    ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0x14U))]));
    if ((0U != (IData)(vlSelf->npc__DOT__rs1))) {
        vlSelf->__VdfgTmp_h633a2119__0 = (~ __VdfgTmp_hb130fc64__0);
        vlSelf->npc__DOT__rf_rdata1 = __VdfgTmp_hb130fc64__0;
        npc__DOT__u_ALU__DOT__sub_inst__DOT____VdfgTmp_hc75629da__0 
            = (__VdfgTmp_hb130fc64__0 >> 0x1fU);
    } else {
        vlSelf->__VdfgTmp_h633a2119__0 = 0xffffffffU;
        vlSelf->npc__DOT__rf_rdata1 = 0U;
        npc__DOT__u_ALU__DOT__sub_inst__DOT____VdfgTmp_hc75629da__0 = 0U;
    }
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5U] 
        = (0x800000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h633a2119__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h633a2119__0));
    vlSelf->__VdfgTmp_h0d5c396e__0 = (vlSelf->npc__DOT__rf_rdata1 
                                      & vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h0c61718c__0 = (vlSelf->npc__DOT__rf_rdata1 
                                      | vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h0f61fa2a__0 = (vlSelf->npc__DOT__rf_rdata1 
                                      ^ vlSelf->npc__DOT__ALU_B);
    vlSelf->npc__DOT__u_ALU__DOT__int_Cout = (1U & (IData)(
                                                           (1ULL 
                                                            & (((QData)((IData)(vlSelf->npc__DOT__rf_rdata1)) 
                                                                + 
                                                                ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                                 + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                               >> 0x20U))));
    vlSelf->npc__DOT__u_ALU__DOT__add_result = (vlSelf->npc__DOT__rf_rdata1 
                                                + (vlSelf->npc__DOT__ALU_B 
                                                   + (IData)(vlSelf->npc__DOT__ALU_Cin)));
    vlSelf->npc__DOT__u_ALU__DOT__sub_result = ((IData)(1U) 
                                                + (vlSelf->npc__DOT__rf_rdata1 
                                                   + 
                                                   (~ vlSelf->npc__DOT__ALU_B)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4U] 
        = (0xc00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h0d5c396e__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h0d5c396e__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U] 
        = (0x1000000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h0c61718c__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h0c61718c__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U] 
        = (0x1400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h0f61fa2a__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h0f61fa2a__0));
    vlSelf->npc__DOT__u_ALU__DOT__add_overflow = (1U 
                                                  & (((IData)(npc__DOT__u_ALU__DOT__sub_inst__DOT____VdfgTmp_hc75629da__0) 
                                                      & ((~ 
                                                          (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                           >> 0x1fU)) 
                                                         & (vlSelf->npc__DOT__ALU_B 
                                                            >> 0x1fU))) 
                                                     | ((~ (IData)(npc__DOT__u_ALU__DOT__sub_inst__DOT____VdfgTmp_hc75629da__0)) 
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
                                                  & (((IData)(npc__DOT__u_ALU__DOT__sub_inst__DOT____VdfgTmp_hc75629da__0) 
                                                      & ((~ 
                                                          (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                           >> 0x1fU)) 
                                                         & (~ 
                                                            (vlSelf->npc__DOT__ALU_B 
                                                             >> 0x1fU)))) 
                                                     | ((~ (IData)(npc__DOT__u_ALU__DOT__sub_inst__DOT____VdfgTmp_hc75629da__0)) 
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
    vlSelf->__VdfgTmp_hc8d59f1f__0 = (1U & ((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow) 
                                            ^ (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                               >> 3U)));
    __VdfgTmp_hb808bfef__0 = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow)) 
                               << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (0x1800000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_hc8d59f1f__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_hc8d59f1f__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6U] 
        = (0x400000000ULL | __VdfgTmp_hb808bfef__0);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6U] 
        = __VdfgTmp_hb808bfef__0;
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
}

void Vnpc___024root___eval_nba(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vnpc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vnpc___024root___nba_sequent__TOP__1(vlSelf);
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

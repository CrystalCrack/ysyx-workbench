// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpc__Syms.h"


void Vnpc___024root__trace_chg_sub_0(Vnpc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vnpc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_chg_top_0\n"); );
    // Init
    Vnpc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc___024root*>(voidSelf);
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vnpc___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vnpc___024root__trace_chg_sub_0(Vnpc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<9>/*287:0*/ __Vtemp_hc5187844__0;
    VlWide<6>/*191:0*/ __Vtemp_ha175cb4c__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgSData(oldp+0,(vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__pair_list[0]),15);
        bufp->chgSData(oldp+1,(vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__pair_list[1]),15);
        bufp->chgSData(oldp+2,(vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__pair_list[2]),15);
        bufp->chgSData(oldp+3,(vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__key_list[0]),12);
        bufp->chgSData(oldp+4,(vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__key_list[1]),12);
        bufp->chgSData(oldp+5,(vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__key_list[2]),12);
        bufp->chgCData(oldp+6,(vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+7,(vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+8,(vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__data_list[2]),3);
        bufp->chgSData(oldp+9,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list[0]),12);
        bufp->chgSData(oldp+10,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list[1]),12);
        bufp->chgSData(oldp+11,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list[2]),12);
        bufp->chgSData(oldp+12,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list[3]),12);
        bufp->chgCData(oldp+13,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+14,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+15,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+16,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+17,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+18,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+19,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+20,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7]),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+21,(vlSelf->npc__DOT__rs1),5);
        bufp->chgCData(oldp+22,(vlSelf->npc__DOT__rs2),5);
        bufp->chgCData(oldp+23,(((IData)(vlSelf->npc__DOT__stop_sim)
                                  ? 0xaU : (0x1fU & 
                                            (vlSelf->npc__DOT__inst 
                                             >> 7U)))),5);
        bufp->chgIData(oldp+24,(vlSelf->npc__DOT__imm),32);
        bufp->chgCData(oldp+25,((7U & (vlSelf->npc__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+26,((vlSelf->npc__DOT__inst 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+27,((0x7fU & vlSelf->npc__DOT__inst)),7);
        bufp->chgCData(oldp+28,(vlSelf->npc__DOT__ALU_op),3);
        bufp->chgCData(oldp+29,(vlSelf->npc__DOT__rdregsrc),3);
        bufp->chgCData(oldp+30,(vlSelf->npc__DOT__cmp_type),2);
        bufp->chgBit(oldp+31,(vlSelf->npc__DOT__ALUsrc1));
        bufp->chgCData(oldp+32,(vlSelf->npc__DOT__ALUsrc2),2);
        bufp->chgBit(oldp+33,(((0x6fU == (0x7fU & vlSelf->npc__DOT__inst)) 
                               | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr) 
                                  | (IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hab5d87c6__0)))));
        bufp->chgBit(oldp+34,(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                               | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                  | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                     | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                        | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                           | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu))))))));
        bufp->chgBit(oldp+35,((4U != (IData)(vlSelf->npc__DOT__rdregsrc))));
        bufp->chgIData(oldp+36,(((0U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                  ? (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)
                                  : ((1U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                      ? ((0U == (7U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 0xcU)))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->npc__DOT__drdata 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->npc__DOT__drdata))
                                          : ((4U == 
                                              (7U & 
                                               (vlSelf->npc__DOT__inst 
                                                >> 0xcU)))
                                              ? (0xffU 
                                                 & vlSelf->npc__DOT__drdata)
                                              : ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->npc__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->npc__DOT__drdata 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->npc__DOT__drdata))
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelf->npc__DOT__drdata)
                                                   : vlSelf->npc__DOT__drdata))))
                                      : ((2U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                          ? ((IData)(4U) 
                                             + vlSelf->npc__DOT__pc)
                                          : ((3U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                              ? ((0U 
                                                  == (IData)(vlSelf->npc__DOT__cmp_type))
                                                  ? 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->npc__DOT__cmp_type))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->npc__DOT__cmp_type))
                                                    ? 
                                                   (1U 
                                                    & ((IData)(
                                                               (0x80000000ULL 
                                                                == 
                                                                (0x180000000ULL 
                                                                 & vlSelf->npc__DOT__u_ALU__DOT__out))) 
                                                       | (IData)(
                                                                 (0x100000000ULL 
                                                                  == 
                                                                  (0x180000000ULL 
                                                                   & vlSelf->npc__DOT__u_ALU__DOT__out)))))
                                                    : 
                                                   (1U 
                                                    & (~ 
                                                       ((0U 
                                                         == (IData)(vlSelf->npc__DOT__ALU_op))
                                                         ? (IData)(
                                                                   (1ULL 
                                                                    & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                                        + 
                                                                        ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                                         + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                                       >> 0x20U)))
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->npc__DOT__ALU_op)) 
                                                         & (IData)(
                                                                   (1ULL 
                                                                    & ((1ULL 
                                                                        + 
                                                                        ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                                         + (QData)((IData)(
                                                                                (~ vlSelf->npc__DOT__ALU_B))))) 
                                                                       >> 0x20U))))))))))
                                              : ((5U 
                                                  == (IData)(vlSelf->npc__DOT__rdregsrc))
                                                  ? vlSelf->npc__DOT__target_rdata
                                                  : 0U)))))),32);
        bufp->chgIData(oldp+37,(vlSelf->npc__DOT__rf_rdata1),32);
        bufp->chgIData(oldp+38,(vlSelf->npc__DOT__rf_rdata2),32);
        bufp->chgSData(oldp+39,(vlSelf->npc__DOT__csr_raddr),12);
        bufp->chgIData(oldp+40,((IData)(vlSelf->npc__DOT__u_ALU__DOT__out)),32);
        bufp->chgIData(oldp+41,(vlSelf->npc__DOT__ALU_A),32);
        bufp->chgIData(oldp+42,(vlSelf->npc__DOT__ALU_B),32);
        bufp->chgBit(oldp+43,((1U & (~ (IData)((0U 
                                                != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))));
        bufp->chgBit(oldp+44,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+45,((1U & ((0U == (IData)(vlSelf->npc__DOT__ALU_op))
                                      ? (IData)((1ULL 
                                                 & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                     + 
                                                     ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                      + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                    >> 0x20U)))
                                      : ((1U == (IData)(vlSelf->npc__DOT__ALU_op)) 
                                         & (IData)(
                                                   (1ULL 
                                                    & ((1ULL 
                                                        + 
                                                        ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                         + (QData)((IData)(
                                                                           (~ vlSelf->npc__DOT__ALU_B))))) 
                                                       >> 0x20U))))))));
        bufp->chgBit(oldp+46,((1U & ((IData)((0x80000000ULL 
                                              == (0x180000000ULL 
                                                  & vlSelf->npc__DOT__u_ALU__DOT__out))) 
                                     | (IData)((0x100000000ULL 
                                                == 
                                                (0x180000000ULL 
                                                 & vlSelf->npc__DOT__u_ALU__DOT__out)))))));
        bufp->chgBit(oldp+47,((1U & (~ ((0U == (IData)(vlSelf->npc__DOT__ALU_op))
                                         ? (IData)(
                                                   (1ULL 
                                                    & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                        + 
                                                        ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                         + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                       >> 0x20U)))
                                         : ((1U == (IData)(vlSelf->npc__DOT__ALU_op)) 
                                            & (IData)(
                                                      (1ULL 
                                                       & ((1ULL 
                                                           + 
                                                           ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                            + (QData)((IData)(
                                                                              (~ vlSelf->npc__DOT__ALU_B))))) 
                                                          >> 0x20U)))))))));
        bufp->chgBit(oldp+48,(vlSelf->npc__DOT__stop_sim));
        bufp->chgBit(oldp+49,((((0x6fU == (0x7fU & vlSelf->npc__DOT__inst)) 
                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr) 
                                   | (IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hab5d87c6__0))) 
                               | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                                   | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                      | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                         | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                            | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                               | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                                  & ((0U == (7U & (vlSelf->npc__DOT__inst 
                                                   >> 0xcU)))
                                      ? (vlSelf->npc__DOT__rf_rdata1 
                                         == vlSelf->npc__DOT__rf_rdata2)
                                      : ((1U == (7U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 0xcU)))
                                          ? (vlSelf->npc__DOT__rf_rdata1 
                                             != vlSelf->npc__DOT__rf_rdata2)
                                          : ((5U == 
                                              (7U & 
                                               (vlSelf->npc__DOT__inst 
                                                >> 0xcU)))
                                              ? VL_GTES_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                              : ((7U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->npc__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 
                                                 (vlSelf->npc__DOT__rf_rdata1 
                                                  >= vlSelf->npc__DOT__rf_rdata2)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  VL_LTS_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                                   : (IData)(
                                                             ((0x6000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->npc__DOT__inst)) 
                                                              & (vlSelf->npc__DOT__rf_rdata1 
                                                                 < vlSelf->npc__DOT__rf_rdata2))))))))))));
        bufp->chgBit(oldp+50,((((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                   | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                      | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                         | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                            | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                               & ((0U == (7U & (vlSelf->npc__DOT__inst 
                                                >> 0xcU)))
                                   ? (vlSelf->npc__DOT__rf_rdata1 
                                      == vlSelf->npc__DOT__rf_rdata2)
                                   : ((1U == (7U & 
                                              (vlSelf->npc__DOT__inst 
                                               >> 0xcU)))
                                       ? (vlSelf->npc__DOT__rf_rdata1 
                                          != vlSelf->npc__DOT__rf_rdata2)
                                       : ((5U == (7U 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 0xcU)))
                                           ? VL_GTES_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                           : ((7U == 
                                               (7U 
                                                & (vlSelf->npc__DOT__inst 
                                                   >> 0xcU)))
                                               ? (vlSelf->npc__DOT__rf_rdata1 
                                                  >= vlSelf->npc__DOT__rf_rdata2)
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  VL_LTS_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                                   : (IData)(
                                                             ((0x6000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->npc__DOT__inst)) 
                                                              & (vlSelf->npc__DOT__rf_rdata1 
                                                                 < vlSelf->npc__DOT__rf_rdata2)))))))))));
        bufp->chgIData(oldp+51,(vlSelf->npc__DOT__inst),32);
        bufp->chgCData(oldp+52,(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw)
                                  ? 0xfU : ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb)
                                             ? 1U : 
                                            ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh)
                                              ? 3U : 0U)))),8);
        bufp->chgIData(oldp+53,(vlSelf->npc__DOT__drdata),32);
        bufp->chgBit(oldp+54,(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw) 
                               | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw) 
                                  | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu) 
                                     | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb) 
                                        | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh) 
                                           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh) 
                                              | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu) 
                                                 | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lb))))))))));
        bufp->chgBit(oldp+55,(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw) 
                               | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb) 
                                  | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh)))));
        bufp->chgIData(oldp+56,(((0U == (7U & (vlSelf->npc__DOT__inst 
                                               >> 0xcU)))
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->npc__DOT__drdata 
                                                     >> 7U)))) 
                                      << 8U) | (0xffU 
                                                & vlSelf->npc__DOT__drdata))
                                  : ((4U == (7U & (vlSelf->npc__DOT__inst 
                                                   >> 0xcU)))
                                      ? (0xffU & vlSelf->npc__DOT__drdata)
                                      : ((1U == (7U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 0xcU)))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->npc__DOT__drdata 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->npc__DOT__drdata))
                                          : ((5U == 
                                              (7U & 
                                               (vlSelf->npc__DOT__inst 
                                                >> 0xcU)))
                                              ? (0xffffU 
                                                 & vlSelf->npc__DOT__drdata)
                                              : vlSelf->npc__DOT__drdata))))),32);
        bufp->chgIData(oldp+57,(((0U == (IData)(vlSelf->npc__DOT__cmp_type))
                                  ? (1U & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))
                                  : ((1U == (IData)(vlSelf->npc__DOT__cmp_type))
                                      ? (0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out))
                                      : ((2U == (IData)(vlSelf->npc__DOT__cmp_type))
                                          ? (1U & ((IData)(
                                                           (0x80000000ULL 
                                                            == 
                                                            (0x180000000ULL 
                                                             & vlSelf->npc__DOT__u_ALU__DOT__out))) 
                                                   | (IData)(
                                                             (0x100000000ULL 
                                                              == 
                                                              (0x180000000ULL 
                                                               & vlSelf->npc__DOT__u_ALU__DOT__out)))))
                                          : (1U & (~ 
                                                   ((0U 
                                                     == (IData)(vlSelf->npc__DOT__ALU_op))
                                                     ? (IData)(
                                                               (1ULL 
                                                                & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                                    + 
                                                                    ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                                     + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                                   >> 0x20U)))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->npc__DOT__ALU_op)) 
                                                     & (IData)(
                                                               (1ULL 
                                                                & ((1ULL 
                                                                    + 
                                                                    ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                                     + (QData)((IData)(
                                                                                (~ vlSelf->npc__DOT__ALU_B))))) 
                                                                   >> 0x20U))))))))))),32);
        bufp->chgBit(oldp+58,((1U & ((IData)(vlSelf->npc__DOT____Vcellout__idu_inst__csr_wen) 
                                     >> 2U))));
        bufp->chgBit(oldp+59,((1U & ((IData)(vlSelf->npc__DOT____Vcellout__idu_inst__csr_wen) 
                                     >> 1U))));
        bufp->chgBit(oldp+60,((1U & (IData)(vlSelf->npc__DOT____Vcellout__idu_inst__csr_wen))));
        bufp->chgIData(oldp+61,(vlSelf->npc__DOT__target_rdata),32);
        bufp->chgCData(oldp+62,(vlSelf->npc__DOT____Vcellout__idu_inst__csr_wen),3);
        bufp->chgCData(oldp+63,(vlSelf->npc__DOT__idu_inst__DOT__inst_name),6);
        bufp->chgBit(oldp+64,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi));
        bufp->chgBit(oldp+65,((0x100073U == vlSelf->npc__DOT__inst)));
        bufp->chgBit(oldp+66,((0x17U == (0x7fU & vlSelf->npc__DOT__inst))));
        bufp->chgBit(oldp+67,((0x37U == (0x7fU & vlSelf->npc__DOT__inst))));
        bufp->chgBit(oldp+68,((0x6fU == (0x7fU & vlSelf->npc__DOT__inst))));
        bufp->chgBit(oldp+69,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr));
        bufp->chgBit(oldp+70,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw));
        bufp->chgBit(oldp+71,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw));
        bufp->chgBit(oldp+72,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_add));
        bufp->chgBit(oldp+73,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq));
        bufp->chgBit(oldp+74,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu));
        bufp->chgBit(oldp+75,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xor));
        bufp->chgBit(oldp+76,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_or));
        bufp->chgBit(oldp+77,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu));
        bufp->chgBit(oldp+78,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne));
        bufp->chgBit(oldp+79,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu));
        bufp->chgBit(oldp+80,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb));
        bufp->chgBit(oldp+81,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sub));
        bufp->chgBit(oldp+82,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srai));
        bufp->chgBit(oldp+83,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_andi));
        bufp->chgBit(oldp+84,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sll));
        bufp->chgBit(oldp+85,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_and));
        bufp->chgBit(oldp+86,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh));
        bufp->chgBit(oldp+87,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xori));
        bufp->chgBit(oldp+88,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge));
        bufp->chgBit(oldp+89,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu));
        bufp->chgBit(oldp+90,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slli));
        bufp->chgBit(oldp+91,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt));
        bufp->chgBit(oldp+92,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu));
        bufp->chgBit(oldp+93,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt));
        bufp->chgBit(oldp+94,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh));
        bufp->chgBit(oldp+95,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu));
        bufp->chgBit(oldp+96,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl));
        bufp->chgBit(oldp+97,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srli));
        bufp->chgBit(oldp+98,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sra));
        bufp->chgBit(oldp+99,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lb));
        bufp->chgBit(oldp+100,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slti));
        bufp->chgBit(oldp+101,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_ori));
        bufp->chgBit(oldp+102,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrw));
        bufp->chgBit(oldp+103,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrs));
        bufp->chgBit(oldp+104,((0x73U == vlSelf->npc__DOT__inst)));
        bufp->chgBit(oldp+105,((0x30200073U == vlSelf->npc__DOT__inst)));
        bufp->chgIData(oldp+106,(vlSelf->npc__DOT__idu_inst__DOT__immI),32);
        bufp->chgIData(oldp+107,((0xfffff000U & vlSelf->npc__DOT__inst)),32);
        bufp->chgIData(oldp+108,(vlSelf->npc__DOT__idu_inst__DOT__immS),32);
        bufp->chgIData(oldp+109,(vlSelf->npc__DOT__idu_inst__DOT__immB),32);
        bufp->chgIData(oldp+110,(vlSelf->npc__DOT__idu_inst__DOT__immJ),32);
        bufp->chgCData(oldp+111,(vlSelf->npc__DOT__idu_inst__DOT__csr_wen_int),3);
        bufp->chgCData(oldp+112,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+113,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+114,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+115,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+116,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+117,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+118,(vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+119,(vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+120,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut),1634);
        bufp->chgIData(oldp+172,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+173,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+174,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+175,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+176,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+177,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+178,(vlSelf->npc__DOT__u_ALU__DOT__add_overflow));
        bufp->chgBit(oldp+179,(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow));
        bufp->chgBit(oldp+180,((1U & (IData)((1ULL 
                                              & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                  + 
                                                  ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                   + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+181,((1U & (IData)((1ULL 
                                              & ((1ULL 
                                                  + 
                                                  ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                   + (QData)((IData)(
                                                                     (~ vlSelf->npc__DOT__ALU_B))))) 
                                                 >> 0x20U))))));
        bufp->chgIData(oldp+182,(vlSelf->npc__DOT__u_ALU__DOT__add_result),32);
        bufp->chgIData(oldp+183,(vlSelf->npc__DOT__u_ALU__DOT__sub_result),32);
        bufp->chgQData(oldp+184,(vlSelf->npc__DOT__u_ALU__DOT__out),33);
        bufp->chgIData(oldp+186,((~ vlSelf->npc__DOT__ALU_B)),32);
        __Vtemp_hc5187844__0[0U] = (IData)((0xe00000000ULL 
                                            | (QData)((IData)(vlSelf->__VdfgTmp_hc72e60e3__0))));
        __Vtemp_hc5187844__0[1U] = ((vlSelf->__VdfgTmp_hc6c76036__0 
                                     << 4U) | (IData)(
                                                      ((0xe00000000ULL 
                                                        | (QData)((IData)(vlSelf->__VdfgTmp_hc72e60e3__0))) 
                                                       >> 0x20U)));
        __Vtemp_hc5187844__0[2U] = (0xc0U | ((vlSelf->__VdfgTmp_h534ad178__0 
                                              << 8U) 
                                             | (vlSelf->__VdfgTmp_hc6c76036__0 
                                                >> 0x1cU)));
        __Vtemp_hc5187844__0[3U] = (0xa00U | ((vlSelf->__VdfgTmp_ha636f1d6__0 
                                               << 0xcU) 
                                              | (vlSelf->__VdfgTmp_h534ad178__0 
                                                 >> 0x18U)));
        __Vtemp_hc5187844__0[4U] = (0x8000U | ((vlSelf->__VdfgTmp_ha53c2a9a__0 
                                                << 0x10U) 
                                               | (vlSelf->__VdfgTmp_ha636f1d6__0 
                                                  >> 0x14U)));
        __Vtemp_hc5187844__0[5U] = (0x60000U | ((vlSelf->__VdfgTmp_hc6d26016__0 
                                                 << 0x14U) 
                                                | (vlSelf->__VdfgTmp_ha53c2a9a__0 
                                                   >> 0x10U)));
        __Vtemp_hc5187844__0[6U] = (0x400000U | ((vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                  << 0x18U) 
                                                 | (vlSelf->__VdfgTmp_hc6d26016__0 
                                                    >> 0xcU)));
        __Vtemp_hc5187844__0[7U] = (0x2000000U | ((vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow) 
                                                      << 0x18U) 
                                                     | (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                        >> 8U))));
        __Vtemp_hc5187844__0[8U] = (((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow) 
                                     << 0x1cU) | (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                  >> 4U));
        bufp->chgWData(oldp+187,(__Vtemp_hc5187844__0),288);
        bufp->chgQData(oldp+196,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+198,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+200,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+202,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+204,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+206,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+208,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+210,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+212,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),33);
        bufp->chgQData(oldp+214,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),33);
        bufp->chgQData(oldp+216,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),33);
        bufp->chgQData(oldp+218,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),33);
        bufp->chgQData(oldp+220,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),33);
        bufp->chgQData(oldp+222,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),33);
        bufp->chgQData(oldp+224,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),33);
        bufp->chgQData(oldp+226,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7]),33);
        bufp->chgQData(oldp+228,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),33);
        bufp->chgBit(oldp+230,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+231,(((((0x6fU == (0x7fU 
                                               & vlSelf->npc__DOT__inst)) 
                                    | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr) 
                                       | (IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hab5d87c6__0))) 
                                   | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                                       | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                          | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                             | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                                   | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                                      & ((0U == (7U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 0xcU)))
                                          ? (vlSelf->npc__DOT__rf_rdata1 
                                             == vlSelf->npc__DOT__rf_rdata2)
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->npc__DOT__inst 
                                                >> 0xcU)))
                                              ? (vlSelf->npc__DOT__rf_rdata1 
                                                 != vlSelf->npc__DOT__rf_rdata2)
                                              : ((5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->npc__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 
                                                 VL_GTES_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                                  : 
                                                 ((7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  (vlSelf->npc__DOT__rf_rdata1 
                                                   >= vlSelf->npc__DOT__rf_rdata2)
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->npc__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 
                                                   VL_LTS_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                                    : (IData)(
                                                              ((0x6000U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelf->npc__DOT__inst)) 
                                                               & (vlSelf->npc__DOT__rf_rdata1 
                                                                  < vlSelf->npc__DOT__rf_rdata2))))))))))
                                   ? ((IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                               >> 1U)) 
                                      << 1U) : ((IData)(4U) 
                                                + vlSelf->npc__DOT__pc))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+232,(vlSelf->npc__DOT__pc),32);
        bufp->chgIData(oldp+233,(((IData)(4U) + vlSelf->npc__DOT__pc)),32);
        bufp->chgIData(oldp+234,(vlSelf->npc__DOT__mtvec_rdata),32);
        bufp->chgIData(oldp+235,(vlSelf->npc__DOT__mcause_rdata),32);
        bufp->chgIData(oldp+236,(vlSelf->npc__DOT__mepc_rdata),32);
        bufp->chgIData(oldp+237,(vlSelf->npc__DOT__mstatus_rdata),32);
        __Vtemp_ha175cb4c__0[0U] = (IData)((0x30500000000ULL 
                                            | (QData)((IData)(vlSelf->npc__DOT__mtvec_rdata))));
        __Vtemp_ha175cb4c__0[1U] = ((vlSelf->npc__DOT__mcause_rdata 
                                     << 0xcU) | (IData)(
                                                        ((0x30500000000ULL 
                                                          | (QData)((IData)(vlSelf->npc__DOT__mtvec_rdata))) 
                                                         >> 0x20U)));
        __Vtemp_ha175cb4c__0[2U] = (0x342000U | ((vlSelf->npc__DOT__mepc_rdata 
                                                  << 0x18U) 
                                                 | (vlSelf->npc__DOT__mcause_rdata 
                                                    >> 0x14U)));
        __Vtemp_ha175cb4c__0[3U] = (0x41000000U | (vlSelf->npc__DOT__mepc_rdata 
                                                   >> 8U));
        __Vtemp_ha175cb4c__0[4U] = (3U | (vlSelf->npc__DOT__mstatus_rdata 
                                          << 4U));
        __Vtemp_ha175cb4c__0[5U] = (0x3000U | (vlSelf->npc__DOT__mstatus_rdata 
                                               >> 0x1cU));
        bufp->chgWData(oldp+238,(__Vtemp_ha175cb4c__0),176);
        bufp->chgQData(oldp+244,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__pair_list[0]),44);
        bufp->chgQData(oldp+246,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__pair_list[1]),44);
        bufp->chgQData(oldp+248,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__pair_list[2]),44);
        bufp->chgQData(oldp+250,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__pair_list[3]),44);
        bufp->chgIData(oldp+252,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+253,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+254,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+255,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+256,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0]),32);
        bufp->chgIData(oldp+257,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1]),32);
        bufp->chgIData(oldp+258,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2]),32);
        bufp->chgIData(oldp+259,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3]),32);
        bufp->chgIData(oldp+260,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4]),32);
        bufp->chgIData(oldp+261,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5]),32);
        bufp->chgIData(oldp+262,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6]),32);
        bufp->chgIData(oldp+263,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7]),32);
        bufp->chgIData(oldp+264,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8]),32);
        bufp->chgIData(oldp+265,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9]),32);
        bufp->chgIData(oldp+266,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[10]),32);
        bufp->chgIData(oldp+267,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[11]),32);
        bufp->chgIData(oldp+268,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[12]),32);
        bufp->chgIData(oldp+269,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[13]),32);
        bufp->chgIData(oldp+270,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[14]),32);
        bufp->chgIData(oldp+271,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[15]),32);
        bufp->chgIData(oldp+272,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[16]),32);
        bufp->chgIData(oldp+273,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[17]),32);
        bufp->chgIData(oldp+274,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[18]),32);
        bufp->chgIData(oldp+275,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[19]),32);
        bufp->chgIData(oldp+276,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[20]),32);
        bufp->chgIData(oldp+277,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[21]),32);
        bufp->chgIData(oldp+278,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[22]),32);
        bufp->chgIData(oldp+279,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[23]),32);
        bufp->chgIData(oldp+280,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[24]),32);
        bufp->chgIData(oldp+281,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[25]),32);
        bufp->chgIData(oldp+282,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[26]),32);
        bufp->chgIData(oldp+283,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[27]),32);
        bufp->chgIData(oldp+284,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[28]),32);
        bufp->chgIData(oldp+285,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[29]),32);
        bufp->chgIData(oldp+286,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[30]),32);
        bufp->chgIData(oldp+287,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[31]),32);
        bufp->chgIData(oldp+288,(vlSelf->npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+289,(vlSelf->clk));
    bufp->chgBit(oldp+290,(vlSelf->rst));
    bufp->chgBit(oldp+291,((1U & (~ (IData)(vlSelf->rst)))));
}

void Vnpc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_cleanup\n"); );
    // Init
    Vnpc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc___024root*>(voidSelf);
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

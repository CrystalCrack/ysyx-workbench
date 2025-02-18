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
    VlWide<10>/*319:0*/ __Vtemp_h7ed3bec4__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+1,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+2,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+3,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+4,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+5,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+6,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+7,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7]),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+8,(vlSelf->npc__DOT__imm),32);
        bufp->chgCData(oldp+9,(vlSelf->npc__DOT__inst_type),6);
        bufp->chgCData(oldp+10,(vlSelf->npc__DOT__ALU_op),3);
        bufp->chgBit(oldp+11,(vlSelf->npc__DOT__memtoreg));
        bufp->chgBit(oldp+12,(vlSelf->npc__DOT__ALUsrc2));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+13,(((IData)(vlSelf->npc__DOT__memtoreg)
                                  ? 0U : (IData)(vlSelf->npc__DOT__u_ALU__DOT__out))),32);
        bufp->chgIData(oldp+14,(vlSelf->npc__DOT__rf_rdata1),32);
        bufp->chgIData(oldp+15,((IData)(vlSelf->npc__DOT__u_ALU__DOT__out)),32);
        bufp->chgIData(oldp+16,(vlSelf->npc__DOT__ALU_B),32);
        bufp->chgBit(oldp+17,((1U & (~ (IData)((0U 
                                                != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))));
        bufp->chgBit(oldp+18,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+19,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                             >> 0x21U)))));
        bufp->chgBit(oldp+20,(vlSelf->npc__DOT__u_ALU__DOT__add_overflow));
        bufp->chgBit(oldp+21,(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow));
        bufp->chgBit(oldp+22,(vlSelf->npc__DOT__u_ALU__DOT__int_Cout));
        bufp->chgIData(oldp+23,(vlSelf->npc__DOT__u_ALU__DOT__add_result),32);
        bufp->chgIData(oldp+24,(vlSelf->npc__DOT__u_ALU__DOT__sub_result),32);
        bufp->chgQData(oldp+25,(vlSelf->npc__DOT__u_ALU__DOT__out),34);
        bufp->chgIData(oldp+27,((~ vlSelf->npc__DOT__ALU_B)),32);
        bufp->chgBit(oldp+28,((1U & (IData)((1ULL & 
                                             ((1ULL 
                                               + ((QData)((IData)(vlSelf->npc__DOT__rf_rdata1)) 
                                                  + (QData)((IData)(
                                                                    (~ vlSelf->npc__DOT__ALU_B))))) 
                                              >> 0x20U))))));
        __Vtemp_h7ed3bec4__0[0U] = (IData)((0x1c00000000ULL 
                                            | (((QData)((IData)(vlSelf->__VdfgTmp_h6e125d43__0)) 
                                                << 0x25U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (0U 
                                                                                != vlSelf->npc__DOT__u_ALU__DOT__sub_result)))))))));
        __Vtemp_h7ed3bec4__0[1U] = (IData)(((0x1c00000000ULL 
                                             | (((QData)((IData)(vlSelf->__VdfgTmp_h6e125d43__0)) 
                                                 << 0x25U) 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                (0U 
                                                                                != vlSelf->npc__DOT__u_ALU__DOT__sub_result)))))))) 
                                            >> 0x20U));
        __Vtemp_h7ed3bec4__0[2U] = (0x300U | (vlSelf->__VdfgTmp_h5658ebd9__0 
                                              << 0xaU));
        __Vtemp_h7ed3bec4__0[3U] = (0x5000U | ((vlSelf->__VdfgTmp_h576f4bdf__0 
                                                << 0xfU) 
                                               | (vlSelf->__VdfgTmp_h5658ebd9__0 
                                                  >> 0x16U)));
        __Vtemp_h7ed3bec4__0[4U] = (0x80000U | ((vlSelf->__VdfgTmp_h5078321f__0 
                                                 << 0x14U) 
                                                | (vlSelf->__VdfgTmp_h576f4bdf__0 
                                                   >> 0x11U)));
        __Vtemp_h7ed3bec4__0[5U] = (0xc00000U | ((vlSelf->__VdfgTmp_hf55457f8__0 
                                                  << 0x19U) 
                                                 | (vlSelf->__VdfgTmp_h5078321f__0 
                                                    >> 0xcU)));
        __Vtemp_h7ed3bec4__0[6U] = (0x10000000U | (
                                                   (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                    << 0x1eU) 
                                                   | (vlSelf->__VdfgTmp_hf55457f8__0 
                                                      >> 7U)));
        __Vtemp_h7ed3bec4__0[7U] = (((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow) 
                                     << 0x1eU) | (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                  >> 2U));
        __Vtemp_h7ed3bec4__0[8U] = (1U | (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                          << 3U));
        __Vtemp_h7ed3bec4__0[9U] = (((IData)(vlSelf->npc__DOT__u_ALU__DOT__int_Cout) 
                                     << 4U) | (((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow) 
                                                << 3U) 
                                               | (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                  >> 0x1dU)));
        bufp->chgWData(oldp+29,(__Vtemp_h7ed3bec4__0),296);
        bufp->chgQData(oldp+39,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+41,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+43,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),37);
        bufp->chgQData(oldp+45,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),37);
        bufp->chgQData(oldp+47,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),37);
        bufp->chgQData(oldp+49,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),37);
        bufp->chgQData(oldp+51,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),37);
        bufp->chgQData(oldp+53,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7]),37);
        bufp->chgQData(oldp+55,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),34);
        bufp->chgQData(oldp+57,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),34);
        bufp->chgQData(oldp+59,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),34);
        bufp->chgQData(oldp+61,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),34);
        bufp->chgQData(oldp+63,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),34);
        bufp->chgQData(oldp+65,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),34);
        bufp->chgQData(oldp+67,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),34);
        bufp->chgQData(oldp+69,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7]),34);
        bufp->chgQData(oldp+71,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),34);
        bufp->chgBit(oldp+73,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+74,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0]),32);
        bufp->chgIData(oldp+75,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1]),32);
        bufp->chgIData(oldp+76,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2]),32);
        bufp->chgIData(oldp+77,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3]),32);
        bufp->chgIData(oldp+78,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4]),32);
        bufp->chgIData(oldp+79,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5]),32);
        bufp->chgIData(oldp+80,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6]),32);
        bufp->chgIData(oldp+81,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7]),32);
        bufp->chgIData(oldp+82,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8]),32);
        bufp->chgIData(oldp+83,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9]),32);
        bufp->chgIData(oldp+84,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[10]),32);
        bufp->chgIData(oldp+85,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[11]),32);
        bufp->chgIData(oldp+86,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[12]),32);
        bufp->chgIData(oldp+87,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[13]),32);
        bufp->chgIData(oldp+88,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[14]),32);
        bufp->chgIData(oldp+89,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[15]),32);
        bufp->chgIData(oldp+90,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[16]),32);
        bufp->chgIData(oldp+91,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[17]),32);
        bufp->chgIData(oldp+92,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[18]),32);
        bufp->chgIData(oldp+93,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[19]),32);
        bufp->chgIData(oldp+94,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[20]),32);
        bufp->chgIData(oldp+95,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[21]),32);
        bufp->chgIData(oldp+96,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[22]),32);
        bufp->chgIData(oldp+97,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[23]),32);
        bufp->chgIData(oldp+98,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[24]),32);
        bufp->chgIData(oldp+99,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[25]),32);
        bufp->chgIData(oldp+100,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[26]),32);
        bufp->chgIData(oldp+101,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[27]),32);
        bufp->chgIData(oldp+102,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[28]),32);
        bufp->chgIData(oldp+103,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[29]),32);
        bufp->chgIData(oldp+104,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[30]),32);
        bufp->chgIData(oldp+105,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+106,(vlSelf->clk));
    bufp->chgBit(oldp+107,(vlSelf->rst));
    bufp->chgIData(oldp+108,(vlSelf->pc),32);
    bufp->chgIData(oldp+109,(vlSelf->inst),32);
    bufp->chgCData(oldp+110,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+111,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->chgCData(oldp+112,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->chgCData(oldp+113,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+114,((vlSelf->inst >> 0x19U)),7);
    bufp->chgCData(oldp+115,((0x7fU & vlSelf->inst)),7);
    bufp->chgIData(oldp+116,(((0U == (0x1fU & (vlSelf->inst 
                                               >> 0x14U)))
                               ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                              [(0x1fU & (vlSelf->inst 
                                         >> 0x14U))])),32);
    bufp->chgIData(oldp+117,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->chgIData(oldp+118,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+119,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->chgIData(oldp+120,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->inst 
                                                    >> 7U)))))),32);
    bufp->chgIData(oldp+121,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->inst) 
                                            | ((0x800U 
                                                & (vlSelf->inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)))))),32);
    bufp->chgIData(oldp+122,(((IData)(4U) + vlSelf->pc)),32);
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

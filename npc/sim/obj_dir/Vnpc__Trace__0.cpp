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
    VlWide<10>/*319:0*/ __Vtemp_h25c1306d__0;
    VlWide<3>/*95:0*/ __Vtemp_h8eeb5ff4__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+1,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[1]),5);
        bufp->chgCData(oldp+2,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+3,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+4,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+5,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+6,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+7,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+8,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+9,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[1]),2);
        bufp->chgBit(oldp+10,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+11,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[1]));
        bufp->chgCData(oldp+12,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+13,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+14,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgCData(oldp+15,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+16,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+17,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__key_list[1]),2);
        bufp->chgBit(oldp+18,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+19,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__data_list[1]));
        bufp->chgCData(oldp+20,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+21,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+22,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+23,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+24,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+25,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+26,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+27,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7]),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+28,(vlSelf->npc__DOT__rs1),5);
        bufp->chgIData(oldp+29,(vlSelf->npc__DOT__imm),32);
        bufp->chgCData(oldp+30,(vlSelf->npc__DOT__ALU_op),3);
        bufp->chgBit(oldp+31,(vlSelf->npc__DOT__memtoreg));
        bufp->chgBit(oldp+32,(vlSelf->npc__DOT__ALUsrc2));
        bufp->chgCData(oldp+33,(vlSelf->npc__DOT__idu_inst__DOT__inst_name),2);
        bufp->chgCData(oldp+34,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+35,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+36,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+37,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+38,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+40,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgIData(oldp+42,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+43,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+44,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+45,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+46,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+47,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+48,(((IData)(vlSelf->npc__DOT__memtoreg)
                                  ? 0U : (IData)(vlSelf->npc__DOT__u_ALU__DOT__out))),32);
        bufp->chgIData(oldp+49,(vlSelf->npc__DOT__rf_rdata1),32);
        bufp->chgIData(oldp+50,((IData)(vlSelf->npc__DOT__u_ALU__DOT__out)),32);
        bufp->chgIData(oldp+51,(vlSelf->npc__DOT__ALU_B),32);
        bufp->chgBit(oldp+52,((1U & (~ (IData)((0U 
                                                != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))));
        bufp->chgBit(oldp+53,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+54,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                             >> 0x21U)))));
        bufp->chgBit(oldp+55,(vlSelf->npc__DOT__u_ALU__DOT__add_overflow));
        bufp->chgBit(oldp+56,(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow));
        bufp->chgBit(oldp+57,(vlSelf->npc__DOT__u_ALU__DOT__int_Cout));
        bufp->chgIData(oldp+58,(vlSelf->npc__DOT__u_ALU__DOT__add_result),32);
        bufp->chgIData(oldp+59,(vlSelf->npc__DOT__u_ALU__DOT__sub_result),32);
        bufp->chgQData(oldp+60,(vlSelf->npc__DOT__u_ALU__DOT__out),34);
        bufp->chgIData(oldp+62,((~ vlSelf->npc__DOT__ALU_B)),32);
        bufp->chgBit(oldp+63,((1U & (IData)((1ULL & 
                                             ((1ULL 
                                               + ((QData)((IData)(vlSelf->npc__DOT__rf_rdata1)) 
                                                  + (QData)((IData)(
                                                                    (~ vlSelf->npc__DOT__ALU_B))))) 
                                              >> 0x20U))))));
        __Vtemp_h25c1306d__0[0U] = (IData)((0x1c00000000ULL 
                                            | (((QData)((IData)(vlSelf->__VdfgTmp_hc8d59f1f__0)) 
                                                << 0x25U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (0U 
                                                                                != vlSelf->npc__DOT__u_ALU__DOT__sub_result)))))))));
        __Vtemp_h25c1306d__0[1U] = (IData)(((0x1c00000000ULL 
                                             | (((QData)((IData)(vlSelf->__VdfgTmp_hc8d59f1f__0)) 
                                                 << 0x25U) 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                (0U 
                                                                                != vlSelf->npc__DOT__u_ALU__DOT__sub_result)))))))) 
                                            >> 0x20U));
        __Vtemp_h25c1306d__0[2U] = (0x300U | (vlSelf->__VdfgTmp_h0f61fa2a__0 
                                              << 0xaU));
        __Vtemp_h25c1306d__0[3U] = (0x5000U | ((vlSelf->__VdfgTmp_h0c61718c__0 
                                                << 0xfU) 
                                               | (vlSelf->__VdfgTmp_h0f61fa2a__0 
                                                  >> 0x16U)));
        __Vtemp_h25c1306d__0[4U] = (0x80000U | ((vlSelf->__VdfgTmp_h0d5c396e__0 
                                                 << 0x14U) 
                                                | (vlSelf->__VdfgTmp_h0c61718c__0 
                                                   >> 0x11U)));
        __Vtemp_h25c1306d__0[5U] = (0xc00000U | ((vlSelf->__VdfgTmp_h633a2119__0 
                                                  << 0x19U) 
                                                 | (vlSelf->__VdfgTmp_h0d5c396e__0 
                                                    >> 0xcU)));
        __Vtemp_h25c1306d__0[6U] = (0x10000000U | (
                                                   (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                    << 0x1eU) 
                                                   | (vlSelf->__VdfgTmp_h633a2119__0 
                                                      >> 7U)));
        __Vtemp_h25c1306d__0[7U] = (((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow) 
                                     << 0x1eU) | (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                  >> 2U));
        __Vtemp_h25c1306d__0[8U] = (1U | (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                          << 3U));
        __Vtemp_h25c1306d__0[9U] = (((IData)(vlSelf->npc__DOT__u_ALU__DOT__int_Cout) 
                                     << 4U) | (((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow) 
                                                << 3U) 
                                               | (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                  >> 0x1dU)));
        bufp->chgWData(oldp+64,(__Vtemp_h25c1306d__0),296);
        bufp->chgQData(oldp+74,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+76,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+78,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),37);
        bufp->chgQData(oldp+80,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),37);
        bufp->chgQData(oldp+82,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),37);
        bufp->chgQData(oldp+84,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),37);
        bufp->chgQData(oldp+86,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),37);
        bufp->chgQData(oldp+88,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7]),37);
        bufp->chgQData(oldp+90,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),34);
        bufp->chgQData(oldp+92,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),34);
        bufp->chgQData(oldp+94,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),34);
        bufp->chgQData(oldp+96,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),34);
        bufp->chgQData(oldp+98,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),34);
        bufp->chgQData(oldp+100,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),34);
        bufp->chgQData(oldp+102,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),34);
        bufp->chgQData(oldp+104,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7]),34);
        bufp->chgQData(oldp+106,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),34);
        bufp->chgBit(oldp+108,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+109,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0]),32);
        bufp->chgIData(oldp+110,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1]),32);
        bufp->chgIData(oldp+111,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2]),32);
        bufp->chgIData(oldp+112,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3]),32);
        bufp->chgIData(oldp+113,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4]),32);
        bufp->chgIData(oldp+114,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5]),32);
        bufp->chgIData(oldp+115,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6]),32);
        bufp->chgIData(oldp+116,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7]),32);
        bufp->chgIData(oldp+117,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8]),32);
        bufp->chgIData(oldp+118,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9]),32);
        bufp->chgIData(oldp+119,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[10]),32);
        bufp->chgIData(oldp+120,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[11]),32);
        bufp->chgIData(oldp+121,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[12]),32);
        bufp->chgIData(oldp+122,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[13]),32);
        bufp->chgIData(oldp+123,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[14]),32);
        bufp->chgIData(oldp+124,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[15]),32);
        bufp->chgIData(oldp+125,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[16]),32);
        bufp->chgIData(oldp+126,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[17]),32);
        bufp->chgIData(oldp+127,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[18]),32);
        bufp->chgIData(oldp+128,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[19]),32);
        bufp->chgIData(oldp+129,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[20]),32);
        bufp->chgIData(oldp+130,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[21]),32);
        bufp->chgIData(oldp+131,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[22]),32);
        bufp->chgIData(oldp+132,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[23]),32);
        bufp->chgIData(oldp+133,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[24]),32);
        bufp->chgIData(oldp+134,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[25]),32);
        bufp->chgIData(oldp+135,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[26]),32);
        bufp->chgIData(oldp+136,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[27]),32);
        bufp->chgIData(oldp+137,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[28]),32);
        bufp->chgIData(oldp+138,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[29]),32);
        bufp->chgIData(oldp+139,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[30]),32);
        bufp->chgIData(oldp+140,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+141,(vlSelf->clk));
    bufp->chgBit(oldp+142,(vlSelf->rst));
    bufp->chgIData(oldp+143,(vlSelf->pc),32);
    bufp->chgIData(oldp+144,(vlSelf->inst),32);
    bufp->chgCData(oldp+145,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->chgCData(oldp+146,(((0x100073U == vlSelf->inst)
                               ? 0xaU : (0x1fU & (vlSelf->inst 
                                                  >> 7U)))),5);
    bufp->chgCData(oldp+147,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+148,((vlSelf->inst >> 0x19U)),7);
    bufp->chgCData(oldp+149,((0x7fU & vlSelf->inst)),7);
    bufp->chgIData(oldp+150,(((0U == (0x1fU & (vlSelf->inst 
                                               >> 0x14U)))
                               ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                              [(0x1fU & (vlSelf->inst 
                                         >> 0x14U))])),32);
    bufp->chgBit(oldp+151,((0x100073U == vlSelf->inst)));
    bufp->chgBit(oldp+152,((IData)((0x13U == (0x707fU 
                                              & vlSelf->inst)))));
    bufp->chgIData(oldp+153,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->chgIData(oldp+154,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+155,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->chgIData(oldp+156,((((- (IData)((vlSelf->inst 
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
    bufp->chgIData(oldp+157,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->inst) 
                                            | ((0x800U 
                                                & (vlSelf->inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)))))),32);
    __Vtemp_h8eeb5ff4__0[0U] = 0U;
    __Vtemp_h8eeb5ff4__0[1U] = (2U | (0xfffffffcU & 
                                      (((- (IData)(
                                                   (vlSelf->inst 
                                                    >> 0x1fU))) 
                                        << 0xeU) | 
                                       (0x3ffcU & (vlSelf->inst 
                                                   >> 0x12U)))));
    __Vtemp_h8eeb5ff4__0[2U] = (4U | (3U & ((- (IData)(
                                                       (vlSelf->inst 
                                                        >> 0x1fU))) 
                                            >> 0x12U)));
    bufp->chgWData(oldp+158,(__Vtemp_h8eeb5ff4__0),68);
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

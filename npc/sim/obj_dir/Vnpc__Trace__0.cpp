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
    VlWide<8>/*255:0*/ __Vtemp_h0eccaa97__0;
    VlWide<10>/*319:0*/ __Vtemp_h3fdb5aa9__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[0]),6);
        bufp->chgCData(oldp+1,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[1]),6);
        bufp->chgCData(oldp+2,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[2]),6);
        bufp->chgCData(oldp+3,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[3]),6);
        bufp->chgCData(oldp+4,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[4]),6);
        bufp->chgCData(oldp+5,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[5]),6);
        bufp->chgCData(oldp+6,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[6]),6);
        bufp->chgCData(oldp+7,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+8,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+9,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+10,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+11,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+12,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+13,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+14,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+15,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+16,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+17,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+18,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+19,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+20,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+21,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+22,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+23,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+24,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+25,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__pair_list[4]),4);
        bufp->chgCData(oldp+26,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__pair_list[5]),4);
        bufp->chgCData(oldp+27,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__pair_list[6]),4);
        bufp->chgCData(oldp+28,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+29,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+30,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+31,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+32,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+33,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+34,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[6]),3);
        bufp->chgBit(oldp+35,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+36,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+37,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+38,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+39,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+40,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[5]));
        bufp->chgBit(oldp+41,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[6]));
        bufp->chgCData(oldp+42,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+43,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+44,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+45,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+46,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[4]),4);
        bufp->chgCData(oldp+47,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[5]),4);
        bufp->chgCData(oldp+48,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[6]),4);
        bufp->chgCData(oldp+49,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+50,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+51,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+52,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+53,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+54,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+55,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[6]),3);
        bufp->chgBit(oldp+56,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+57,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+58,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+59,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+60,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+61,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[5]));
        bufp->chgBit(oldp+62,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[6]));
        bufp->chgCData(oldp+63,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+64,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+65,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+66,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+67,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+68,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+69,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+70,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+71,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__pair_list[1]),5);
        bufp->chgCData(oldp+72,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__pair_list[2]),5);
        bufp->chgCData(oldp+73,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__pair_list[3]),5);
        bufp->chgCData(oldp+74,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__pair_list[4]),5);
        bufp->chgCData(oldp+75,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__pair_list[5]),5);
        bufp->chgCData(oldp+76,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__pair_list[6]),5);
        bufp->chgCData(oldp+77,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+78,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+79,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+80,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+81,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+82,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+83,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+84,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+85,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+86,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+87,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[3]),2);
        bufp->chgCData(oldp+88,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[4]),2);
        bufp->chgCData(oldp+89,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[5]),2);
        bufp->chgCData(oldp+90,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[6]),2);
        bufp->chgCData(oldp+91,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+92,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+93,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+94,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+95,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+96,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+97,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+98,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7]),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+99,(vlSelf->npc__DOT__rs1),5);
        bufp->chgCData(oldp+100,((0x1fU & (vlSelf->npc__DOT__inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+101,(((IData)(vlSelf->npc__DOT__stop_sim)
                                   ? 0xaU : (0x1fU 
                                             & (vlSelf->npc__DOT__inst 
                                                >> 7U)))),5);
        bufp->chgIData(oldp+102,(vlSelf->npc__DOT__imm),32);
        bufp->chgCData(oldp+103,((7U & (vlSelf->npc__DOT__inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+104,((vlSelf->npc__DOT__inst 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+105,((0x7fU & vlSelf->npc__DOT__inst)),7);
        bufp->chgCData(oldp+106,(vlSelf->npc__DOT__ALU_op),3);
        bufp->chgCData(oldp+107,(vlSelf->npc__DOT__rdregsrc),2);
        bufp->chgBit(oldp+108,(vlSelf->npc__DOT__ALUsrc1));
        bufp->chgBit(oldp+109,(vlSelf->npc__DOT__ALUsrc2));
        bufp->chgBit(oldp+110,(((0x6fU == (0x7fU & vlSelf->npc__DOT__inst)) 
                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr))));
        bufp->chgBit(oldp+111,((3U != (IData)(vlSelf->npc__DOT__rdregsrc))));
        bufp->chgIData(oldp+112,(((0U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                   ? (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)
                                   : ((1U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                       ? 0U : ((2U 
                                                == (IData)(vlSelf->npc__DOT__rdregsrc))
                                                ? ((IData)(4U) 
                                                   + vlSelf->npc__DOT__pc)
                                                : 0U)))),32);
        bufp->chgIData(oldp+113,(((0U == (IData)(vlSelf->npc__DOT__rs1))
                                   ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                                  [vlSelf->npc__DOT__rs1])),32);
        bufp->chgIData(oldp+114,(((0U == (0x1fU & (vlSelf->npc__DOT__inst 
                                                   >> 0x14U)))
                                   ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                                  [(0x1fU & (vlSelf->npc__DOT__inst 
                                             >> 0x14U))])),32);
        bufp->chgIData(oldp+115,((IData)(vlSelf->npc__DOT__u_ALU__DOT__out)),32);
        bufp->chgIData(oldp+116,(vlSelf->npc__DOT__ALU_A),32);
        bufp->chgIData(oldp+117,(vlSelf->npc__DOT__ALU_B),32);
        bufp->chgBit(oldp+118,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))));
        bufp->chgBit(oldp+119,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+120,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+121,(vlSelf->npc__DOT__stop_sim));
        bufp->chgIData(oldp+122,(vlSelf->npc__DOT__inst),32);
        bufp->chgCData(oldp+123,(vlSelf->npc__DOT__idu_inst__DOT__inst_name),3);
        bufp->chgBit(oldp+124,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi));
        bufp->chgBit(oldp+125,((0x100073U == vlSelf->npc__DOT__inst)));
        bufp->chgBit(oldp+126,((0x17U == (0x7fU & vlSelf->npc__DOT__inst))));
        bufp->chgBit(oldp+127,((0x37U == (0x7fU & vlSelf->npc__DOT__inst))));
        bufp->chgBit(oldp+128,((0x6fU == (0x7fU & vlSelf->npc__DOT__inst))));
        bufp->chgBit(oldp+129,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr));
        bufp->chgBit(oldp+130,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw));
        bufp->chgIData(oldp+131,(vlSelf->npc__DOT__idu_inst__DOT__immI),32);
        bufp->chgIData(oldp+132,((0xfffff000U & vlSelf->npc__DOT__inst)),32);
        bufp->chgIData(oldp+133,((((- (IData)((vlSelf->npc__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->npc__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+134,((((- (IData)((vlSelf->npc__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0x800U 
                                                & (vlSelf->npc__DOT__inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->npc__DOT__inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->npc__DOT__inst 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+135,((((- (IData)((vlSelf->npc__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->npc__DOT__inst) 
                                                | ((0x800U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->npc__DOT__inst 
                                                         >> 0x14U)))))),32);
        bufp->chgCData(oldp+136,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+137,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+138,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+139,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+140,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+141,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit));
        __Vtemp_h0eccaa97__0[0U] = (IData)((0x700000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (vlSelf->npc__DOT__inst 
                                                                            >> 0x1fU))) 
                                                                << 0xcU) 
                                                               | ((0xfe0U 
                                                                   & (vlSelf->npc__DOT__inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->npc__DOT__inst 
                                                                        >> 7U))))))));
        __Vtemp_h0eccaa97__0[1U] = ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                                     << 3U) | (IData)(
                                                      ((0x700000000ULL 
                                                        | (QData)((IData)(
                                                                          (((- (IData)(
                                                                                (vlSelf->npc__DOT__inst 
                                                                                >> 0x1fU))) 
                                                                            << 0xcU) 
                                                                           | ((0xfe0U 
                                                                               & (vlSelf->npc__DOT__inst 
                                                                                >> 0x14U)) 
                                                                              | (0x1fU 
                                                                                & (vlSelf->npc__DOT__inst 
                                                                                >> 7U))))))) 
                                                       >> 0x20U)));
        __Vtemp_h0eccaa97__0[2U] = (0x30U | ((0xffffffc0U 
                                              & (((- (IData)(
                                                             (vlSelf->npc__DOT__inst 
                                                              >> 0x1fU))) 
                                                  << 0x1aU) 
                                                 | ((0x3fc0000U 
                                                     & (vlSelf->npc__DOT__inst 
                                                        << 6U)) 
                                                    | ((0x20000U 
                                                        & (vlSelf->npc__DOT__inst 
                                                           >> 3U)) 
                                                       | (0x1ff80U 
                                                          & (vlSelf->npc__DOT__inst 
                                                             >> 0xeU)))))) 
                                             | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                                >> 0x1dU)));
        __Vtemp_h0eccaa97__0[3U] = (0x140U | ((0xffe00000U 
                                               & (vlSelf->npc__DOT__inst 
                                                  << 9U)) 
                                              | (0x3fU 
                                                 & ((- (IData)(
                                                               (vlSelf->npc__DOT__inst 
                                                                >> 0x1fU))) 
                                                    >> 6U))));
        __Vtemp_h0eccaa97__0[4U] = (0x800U | ((0xff000000U 
                                               & (vlSelf->npc__DOT__inst 
                                                  << 0xcU)) 
                                              | (vlSelf->npc__DOT__inst 
                                                 >> 0x17U)));
        __Vtemp_h0eccaa97__0[5U] = (0x3000U | (vlSelf->npc__DOT__inst 
                                               >> 0x14U));
        __Vtemp_h0eccaa97__0[6U] = (0x10000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                                << 0x12U));
        __Vtemp_h0eccaa97__0[7U] = (0x40000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                                >> 0xeU));
        bufp->chgWData(oldp+142,(__Vtemp_h0eccaa97__0),245);
        bufp->chgQData(oldp+150,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+152,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+154,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+156,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+158,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgQData(oldp+160,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[5]),35);
        bufp->chgQData(oldp+162,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[6]),35);
        bufp->chgIData(oldp+164,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+165,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+166,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+167,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+168,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+169,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+170,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+171,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+172,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+173,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+174,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+175,(vlSelf->npc__DOT__u_ALU__DOT__add_overflow));
        bufp->chgBit(oldp+176,(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow));
        bufp->chgBit(oldp+177,(vlSelf->npc__DOT__u_ALU__DOT__int_Cout));
        bufp->chgIData(oldp+178,(vlSelf->npc__DOT__u_ALU__DOT__add_result),32);
        bufp->chgIData(oldp+179,(vlSelf->npc__DOT__u_ALU__DOT__sub_result),32);
        bufp->chgQData(oldp+180,(vlSelf->npc__DOT__u_ALU__DOT__out),34);
        bufp->chgIData(oldp+182,((~ vlSelf->npc__DOT__ALU_B)),32);
        bufp->chgBit(oldp+183,((1U & (IData)((1ULL 
                                              & ((1ULL 
                                                  + 
                                                  ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                   + (QData)((IData)(
                                                                     (~ vlSelf->npc__DOT__ALU_B))))) 
                                                 >> 0x20U))))));
        __Vtemp_h3fdb5aa9__0[0U] = (IData)((0x1c00000000ULL 
                                            | (((QData)((IData)(vlSelf->__VdfgTmp_h6a4a23bc__0)) 
                                                << 0x25U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (0U 
                                                                                != vlSelf->npc__DOT__u_ALU__DOT__sub_result)))))))));
        __Vtemp_h3fdb5aa9__0[1U] = (IData)(((0x1c00000000ULL 
                                             | (((QData)((IData)(vlSelf->__VdfgTmp_h6a4a23bc__0)) 
                                                 << 0x25U) 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                (0U 
                                                                                != vlSelf->npc__DOT__u_ALU__DOT__sub_result)))))))) 
                                            >> 0x20U));
        __Vtemp_h3fdb5aa9__0[2U] = (0x300U | (vlSelf->__VdfgTmp_h9b55b1fc__0 
                                              << 0xaU));
        __Vtemp_h3fdb5aa9__0[3U] = (0x5000U | ((vlSelf->__VdfgTmp_h9c50524a__0 
                                                << 0xfU) 
                                               | (vlSelf->__VdfgTmp_h9b55b1fc__0 
                                                  >> 0x16U)));
        __Vtemp_h3fdb5aa9__0[4U] = (0x80000U | ((vlSelf->__VdfgTmp_h9d656ae0__0 
                                                 << 0x14U) 
                                                | (vlSelf->__VdfgTmp_h9c50524a__0 
                                                   >> 0x11U)));
        __Vtemp_h3fdb5aa9__0[5U] = (0xc00000U | (((~ vlSelf->npc__DOT__ALU_A) 
                                                  << 0x19U) 
                                                 | (vlSelf->__VdfgTmp_h9d656ae0__0 
                                                    >> 0xcU)));
        __Vtemp_h3fdb5aa9__0[6U] = (0x10000000U | (
                                                   (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                    << 0x1eU) 
                                                   | ((~ vlSelf->npc__DOT__ALU_A) 
                                                      >> 7U)));
        __Vtemp_h3fdb5aa9__0[7U] = (((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow) 
                                     << 0x1eU) | (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                  >> 2U));
        __Vtemp_h3fdb5aa9__0[8U] = (1U | (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                          << 3U));
        __Vtemp_h3fdb5aa9__0[9U] = (((IData)(vlSelf->npc__DOT__u_ALU__DOT__int_Cout) 
                                     << 4U) | (((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow) 
                                                << 3U) 
                                               | (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                  >> 0x1dU)));
        bufp->chgWData(oldp+184,(__Vtemp_h3fdb5aa9__0),296);
        bufp->chgQData(oldp+194,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+196,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+198,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),37);
        bufp->chgQData(oldp+200,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),37);
        bufp->chgQData(oldp+202,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),37);
        bufp->chgQData(oldp+204,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),37);
        bufp->chgQData(oldp+206,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),37);
        bufp->chgQData(oldp+208,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7]),37);
        bufp->chgQData(oldp+210,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),34);
        bufp->chgQData(oldp+212,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),34);
        bufp->chgQData(oldp+214,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),34);
        bufp->chgQData(oldp+216,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),34);
        bufp->chgQData(oldp+218,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),34);
        bufp->chgQData(oldp+220,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),34);
        bufp->chgQData(oldp+222,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),34);
        bufp->chgQData(oldp+224,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7]),34);
        bufp->chgQData(oldp+226,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),34);
        bufp->chgBit(oldp+228,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+229,((((0x6fU == (0x7fU 
                                              & vlSelf->npc__DOT__inst)) 
                                   | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr))
                                   ? ((IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                               >> 1U)) 
                                      << 1U) : ((IData)(4U) 
                                                + vlSelf->npc__DOT__pc))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+230,(vlSelf->npc__DOT__pc),32);
        bufp->chgIData(oldp+231,(((IData)(4U) + vlSelf->npc__DOT__pc)),32);
        bufp->chgIData(oldp+232,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0]),32);
        bufp->chgIData(oldp+233,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1]),32);
        bufp->chgIData(oldp+234,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2]),32);
        bufp->chgIData(oldp+235,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3]),32);
        bufp->chgIData(oldp+236,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4]),32);
        bufp->chgIData(oldp+237,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5]),32);
        bufp->chgIData(oldp+238,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6]),32);
        bufp->chgIData(oldp+239,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7]),32);
        bufp->chgIData(oldp+240,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8]),32);
        bufp->chgIData(oldp+241,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9]),32);
        bufp->chgIData(oldp+242,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[10]),32);
        bufp->chgIData(oldp+243,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[11]),32);
        bufp->chgIData(oldp+244,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[12]),32);
        bufp->chgIData(oldp+245,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[13]),32);
        bufp->chgIData(oldp+246,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[14]),32);
        bufp->chgIData(oldp+247,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[15]),32);
        bufp->chgIData(oldp+248,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[16]),32);
        bufp->chgIData(oldp+249,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[17]),32);
        bufp->chgIData(oldp+250,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[18]),32);
        bufp->chgIData(oldp+251,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[19]),32);
        bufp->chgIData(oldp+252,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[20]),32);
        bufp->chgIData(oldp+253,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[21]),32);
        bufp->chgIData(oldp+254,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[22]),32);
        bufp->chgIData(oldp+255,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[23]),32);
        bufp->chgIData(oldp+256,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[24]),32);
        bufp->chgIData(oldp+257,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[25]),32);
        bufp->chgIData(oldp+258,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[26]),32);
        bufp->chgIData(oldp+259,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[27]),32);
        bufp->chgIData(oldp+260,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[28]),32);
        bufp->chgIData(oldp+261,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[29]),32);
        bufp->chgIData(oldp+262,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[30]),32);
        bufp->chgIData(oldp+263,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[31]),32);
        bufp->chgIData(oldp+264,(vlSelf->npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+265,(vlSelf->clk));
    bufp->chgBit(oldp+266,(vlSelf->rst));
    bufp->chgBit(oldp+267,((1U & (~ (IData)(vlSelf->rst)))));
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

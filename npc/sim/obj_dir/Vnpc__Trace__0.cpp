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
    VlWide<6>/*191:0*/ __Vtemp_h879478f5__0;
    VlWide<6>/*191:0*/ __Vtemp_h7ad68f80__0;
    VlWide<3>/*95:0*/ __Vtemp_h9b92af8f__0;
    VlWide<6>/*191:0*/ __Vtemp_h613f4dfe__0;
    VlWide<9>/*287:0*/ __Vtemp_hf363707d__0;
    VlWide<6>/*191:0*/ __Vtemp_hff3436d3__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+1,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+2,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+3,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+4,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list[4]),3);
        bufp->chgSData(oldp+5,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+6,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+7,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+8,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+9,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+10,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+11,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[6]),10);
        bufp->chgCData(oldp+12,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+13,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+14,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+15,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+16,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+17,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+18,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+19,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+20,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+21,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+22,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+23,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+24,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+25,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+26,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+27,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+28,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+29,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+30,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+31,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list[1]),2);
        bufp->chgSData(oldp+32,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+33,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+34,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+35,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+36,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+37,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+38,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[6]),10);
        bufp->chgSData(oldp+39,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[7]),10);
        bufp->chgSData(oldp+40,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[8]),10);
        bufp->chgSData(oldp+41,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[9]),10);
        bufp->chgCData(oldp+42,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[0]),6);
        bufp->chgCData(oldp+43,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[1]),6);
        bufp->chgCData(oldp+44,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[2]),6);
        bufp->chgCData(oldp+45,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[3]),6);
        bufp->chgCData(oldp+46,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[4]),6);
        bufp->chgCData(oldp+47,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[5]),6);
        bufp->chgCData(oldp+48,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[6]),6);
        bufp->chgCData(oldp+49,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[7]),6);
        bufp->chgCData(oldp+50,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[8]),6);
        bufp->chgCData(oldp+51,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[9]),6);
        bufp->chgCData(oldp+52,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+53,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+54,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+55,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[3]),4);
        bufp->chgCData(oldp+56,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[4]),4);
        bufp->chgCData(oldp+57,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[5]),4);
        bufp->chgCData(oldp+58,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[6]),4);
        bufp->chgCData(oldp+59,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[7]),4);
        bufp->chgCData(oldp+60,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[8]),4);
        bufp->chgCData(oldp+61,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[9]),4);
        bufp->chgSData(oldp+62,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[0]),12);
        bufp->chgSData(oldp+63,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[1]),12);
        bufp->chgSData(oldp+64,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[2]),12);
        bufp->chgSData(oldp+65,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[3]),12);
        bufp->chgSData(oldp+66,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[4]),12);
        bufp->chgSData(oldp+67,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[5]),12);
        bufp->chgSData(oldp+68,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[6]),12);
        bufp->chgSData(oldp+69,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[7]),12);
        bufp->chgSData(oldp+70,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[8]),12);
        bufp->chgSData(oldp+71,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[0]),9);
        bufp->chgSData(oldp+72,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[1]),9);
        bufp->chgSData(oldp+73,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[2]),9);
        bufp->chgSData(oldp+74,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[3]),9);
        bufp->chgSData(oldp+75,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[4]),9);
        bufp->chgSData(oldp+76,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[5]),9);
        bufp->chgSData(oldp+77,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[6]),9);
        bufp->chgSData(oldp+78,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[7]),9);
        bufp->chgSData(oldp+79,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[8]),9);
        bufp->chgCData(oldp+80,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+81,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+82,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+83,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+84,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+85,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+86,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+87,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[7]),3);
        bufp->chgCData(oldp+88,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[8]),3);
        bufp->chgCData(oldp+89,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[0]),6);
        bufp->chgCData(oldp+90,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[1]),6);
        bufp->chgCData(oldp+91,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[2]),6);
        bufp->chgCData(oldp+92,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[3]),6);
        bufp->chgCData(oldp+93,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[4]),6);
        bufp->chgCData(oldp+94,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+95,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+96,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+97,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+98,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+99,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+100,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+101,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+102,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+103,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[4]),3);
        bufp->chgSData(oldp+104,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__pair_list[0]),11);
        bufp->chgSData(oldp+105,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__pair_list[1]),11);
        bufp->chgSData(oldp+106,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__pair_list[2]),11);
        bufp->chgCData(oldp+107,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+108,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+109,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+110,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list[0]),8);
        bufp->chgCData(oldp+111,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list[1]),8);
        bufp->chgCData(oldp+112,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list[2]),8);
        bufp->chgCData(oldp+113,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[0]),8);
        bufp->chgCData(oldp+114,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[1]),8);
        bufp->chgCData(oldp+115,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[2]),8);
        bufp->chgCData(oldp+116,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[3]),8);
        bufp->chgCData(oldp+117,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[4]),8);
        bufp->chgCData(oldp+118,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[0]),5);
        bufp->chgCData(oldp+119,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[1]),5);
        bufp->chgCData(oldp+120,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[2]),5);
        bufp->chgCData(oldp+121,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[3]),5);
        bufp->chgCData(oldp+122,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[4]),5);
        bufp->chgCData(oldp+123,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+124,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+125,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+126,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+127,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+128,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+129,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+130,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+131,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+132,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+133,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+134,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+135,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+136,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+137,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+138,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[5]),3);
        bufp->chgSData(oldp+139,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list[0]),12);
        bufp->chgSData(oldp+140,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list[1]),12);
        bufp->chgSData(oldp+141,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list[2]),12);
        bufp->chgSData(oldp+142,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list[3]),12);
        bufp->chgCData(oldp+143,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+144,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+145,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+146,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+147,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+148,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+149,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+150,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+151,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+152,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+153,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+154,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+155,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7]),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+156,((1U & ((~ ((0x37U == 
                                           (0x7fU & vlSelf->npc__DOT__instF)) 
                                          | ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->npc__DOT__instF)) 
                                             | ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->npc__DOT__instF)) 
                                                | ((IData)(vlSelf->npc__DOT__jalrD) 
                                                   | ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->npc__DOT__instF)) 
                                                      | ((3U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->npc__DOT__instF)) 
                                                         | ((0x23U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->npc__DOT__instF)) 
                                                            | ((0x13U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->npc__DOT__instF)) 
                                                               | ((0x33U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->npc__DOT__instF)) 
                                                                  | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__ebreak) 
                                                                     | ((IData)(vlSelf->npc__DOT__ecallD) 
                                                                        | ((IData)(vlSelf->npc__DOT__mretD) 
                                                                           | (0x73U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->npc__DOT__instF))))))))))))))) 
                                      | (IData)(vlSelf->npc__DOT__idu_inst__DOT__ebreak)))));
        bufp->chgBit(oldp+157,(vlSelf->npc__DOT__validF));
        bufp->chgIData(oldp+158,(vlSelf->npc__DOT__instF),32);
        bufp->chgCData(oldp+159,((0x7fU & vlSelf->npc__DOT__instF)),7);
        bufp->chgCData(oldp+160,((vlSelf->npc__DOT__instF 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+161,((7U & (vlSelf->npc__DOT__instF 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+162,(vlSelf->npc__DOT__mrtypeD),3);
        bufp->chgCData(oldp+163,((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                                        >> 1U))),3);
        bufp->chgCData(oldp+164,(vlSelf->npc__DOT__ALU_opD),3);
        bufp->chgCData(oldp+165,(vlSelf->npc__DOT__rdregsrcD),3);
        bufp->chgCData(oldp+166,(vlSelf->npc__DOT__inst_type),3);
        bufp->chgCData(oldp+167,(((0x17U == (0x7fU 
                                             & vlSelf->npc__DOT__instF))
                                   ? 1U : ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->npc__DOT__instF))
                                            ? 2U : 0U))),2);
        bufp->chgCData(oldp+168,(vlSelf->npc__DOT__ALUsrc2D),2);
        bufp->chgSData(oldp+169,((vlSelf->npc__DOT__instF 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+170,(((3U == (0x7fU & vlSelf->npc__DOT__instF)) 
                                | (0x23U == (0x7fU 
                                             & vlSelf->npc__DOT__instF)))));
        bufp->chgBit(oldp+171,((0x23U == (0x7fU & vlSelf->npc__DOT__instF))));
        bufp->chgBit(oldp+172,((0x63U == (0x7fU & vlSelf->npc__DOT__instF))));
        bufp->chgBit(oldp+173,(vlSelf->npc__DOT__jumpD));
        bufp->chgBit(oldp+174,(vlSelf->npc__DOT__jalrD));
        bufp->chgBit(oldp+175,(vlSelf->npc__DOT__ecallD));
        bufp->chgBit(oldp+176,(vlSelf->npc__DOT__mretD));
        bufp->chgBit(oldp+177,(vlSelf->npc__DOT__write_csr));
        bufp->chgCData(oldp+178,(vlSelf->npc__DOT__mwmaskD),8);
        bufp->chgCData(oldp+179,((0x1fU & (vlSelf->npc__DOT__instF 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+180,(vlSelf->npc__DOT__rf_raddr2),5);
        bufp->chgCData(oldp+181,((0x1fU & (vlSelf->npc__DOT__instF 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+182,(vlSelf->npc__DOT__src1D),32);
        bufp->chgIData(oldp+183,(vlSelf->npc__DOT__src2D),32);
        bufp->chgIData(oldp+184,(vlSelf->npc__DOT__immD),32);
        bufp->chgSData(oldp+185,(vlSelf->npc__DOT__csraddrD),12);
        bufp->chgIData(oldp+186,(vlSelf->npc__DOT__csr_rdata),32);
        bufp->chgIData(oldp+187,(vlSelf->npc__DOT__csrD),32);
        bufp->chgIData(oldp+188,(vlSelf->npc__DOT__rddataW),32);
        bufp->chgIData(oldp+189,(((IData)(vlSelf->npc__DOT__ecallD)
                                   ? vlSelf->npc__DOT__src2D
                                   : vlSelf->npc__DOT__rddataW)),32);
        bufp->chgIData(oldp+190,(((IData)(vlSelf->npc__DOT__ecallD)
                                   ? vlSelf->npc__DOT__pcF
                                   : vlSelf->npc__DOT__rddataW)),32);
        bufp->chgBit(oldp+191,((0x305U == (IData)(vlSelf->npc__DOT__csraddrD))));
        bufp->chgBit(oldp+192,(((IData)(vlSelf->npc__DOT__ecallD) 
                                | (0x342U == (IData)(vlSelf->npc__DOT__csraddrD)))));
        bufp->chgBit(oldp+193,(((IData)(vlSelf->npc__DOT__ecallD) 
                                | (0x341U == (IData)(vlSelf->npc__DOT__csraddrD)))));
        bufp->chgBit(oldp+194,((0x300U == (IData)(vlSelf->npc__DOT__csraddrD))));
        bufp->chgCData(oldp+195,((0x1fU & (vlSelf->npc__DOT__instF 
                                           >> 7U))),5);
        bufp->chgIData(oldp+196,(vlSelf->npc__DOT__ALU_A),32);
        bufp->chgIData(oldp+197,(vlSelf->npc__DOT__ALU_B),32);
        bufp->chgIData(oldp+198,((IData)(vlSelf->npc__DOT__u_ALU__DOT__out)),32);
        bufp->chgBit(oldp+199,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+200,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))));
        bufp->chgBit(oldp+201,(vlSelf->npc__DOT__Cout));
        bufp->chgBit(oldp+202,((1U & (~ (IData)(vlSelf->npc__DOT__Cout)))));
        bufp->chgBit(oldp+203,((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out))));
        bufp->chgBit(oldp+204,(vlSelf->npc__DOT__slt));
        bufp->chgBit(oldp+205,((1U & (~ (IData)(vlSelf->npc__DOT__slt)))));
        bufp->chgBit(oldp+206,(vlSelf->npc__DOT__cmp_resultX));
        bufp->chgIData(oldp+207,(((IData)(vlSelf->npc__DOT__jalrD)
                                   ? vlSelf->npc__DOT__src1D
                                   : vlSelf->npc__DOT__pcF)),32);
        bufp->chgIData(oldp+208,((((IData)(vlSelf->npc__DOT__jalrD)
                                    ? vlSelf->npc__DOT__src1D
                                    : vlSelf->npc__DOT__pcF) 
                                  + vlSelf->npc__DOT__immD)),32);
        bufp->chgIData(oldp+209,((((IData)(vlSelf->npc__DOT__jumpD) 
                                   | ((0x63U == (0x7fU 
                                                 & vlSelf->npc__DOT__instF)) 
                                      & (IData)(vlSelf->npc__DOT__cmp_resultX)))
                                   ? (((IData)(vlSelf->npc__DOT__jalrD)
                                        ? vlSelf->npc__DOT__src1D
                                        : vlSelf->npc__DOT__pcF) 
                                      + vlSelf->npc__DOT__immD)
                                   : ((IData)(4U) + vlSelf->npc__DOT__pcF))),32);
        bufp->chgIData(oldp+210,((((IData)(vlSelf->npc__DOT__ecallD) 
                                   | (IData)(vlSelf->npc__DOT__mretD))
                                   ? vlSelf->npc__DOT__csrD
                                   : (((IData)(vlSelf->npc__DOT__jumpD) 
                                       | ((0x63U == 
                                           (0x7fU & vlSelf->npc__DOT__instF)) 
                                          & (IData)(vlSelf->npc__DOT__cmp_resultX)))
                                       ? (((IData)(vlSelf->npc__DOT__jalrD)
                                            ? vlSelf->npc__DOT__src1D
                                            : vlSelf->npc__DOT__pcF) 
                                          + vlSelf->npc__DOT__immD)
                                       : ((IData)(4U) 
                                          + vlSelf->npc__DOT__pcF)))),32);
        bufp->chgBit(oldp+211,(((IData)(vlSelf->npc__DOT__jumpD) 
                                | ((0x63U == (0x7fU 
                                              & vlSelf->npc__DOT__instF)) 
                                   & (IData)(vlSelf->npc__DOT__cmp_resultX)))));
        bufp->chgIData(oldp+212,(vlSelf->npc__DOT__rdata),32);
        bufp->chgIData(oldp+213,(vlSelf->npc__DOT__mdataM),32);
        bufp->chgBit(oldp+214,((5U == (IData)(vlSelf->npc__DOT__rdregsrcD))));
        __Vtemp_h879478f5__0[0U] = (IData)((0x400000000ULL 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & vlSelf->npc__DOT__rdata))) 
                                                << 0x23U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->npc__DOT__rdata))))));
        __Vtemp_h879478f5__0[1U] = (IData)(((0x400000000ULL 
                                             | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->npc__DOT__rdata))) 
                                                 << 0x23U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->npc__DOT__rdata))))) 
                                            >> 0x20U));
        __Vtemp_h879478f5__0[2U] = (0x18U | (vlSelf->npc__DOT__rdata 
                                             << 6U));
        __Vtemp_h879478f5__0[3U] = (0x80U | ((0x1fffe00U 
                                              & (vlSelf->npc__DOT__rdata 
                                                 << 9U)) 
                                             | (vlSelf->npc__DOT__rdata 
                                                >> 0x1aU)));
        __Vtemp_h879478f5__0[4U] = (0x200U | (0xfffff000U 
                                              & (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->npc__DOT__rdata 
                                                                 >> 7U)))) 
                                                  << 0x14U) 
                                                 | (0xff000U 
                                                    & (vlSelf->npc__DOT__rdata 
                                                       << 0xcU)))));
        __Vtemp_h879478f5__0[5U] = (0xfffU & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->npc__DOT__rdata 
                                                             >> 7U)))) 
                                              >> 0xcU));
        bufp->chgWData(oldp+215,(__Vtemp_h879478f5__0),175);
        bufp->chgQData(oldp+221,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+223,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+225,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+227,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+229,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+231,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+232,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+233,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+234,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+235,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+236,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+237,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+238,((0x37U == (0x7fU & vlSelf->npc__DOT__instF))));
        bufp->chgBit(oldp+239,((0x17U == (0x7fU & vlSelf->npc__DOT__instF))));
        bufp->chgBit(oldp+240,((0x6fU == (0x7fU & vlSelf->npc__DOT__instF))));
        bufp->chgBit(oldp+241,((3U == (0x7fU & vlSelf->npc__DOT__instF))));
        bufp->chgBit(oldp+242,((0x13U == (0x7fU & vlSelf->npc__DOT__instF))));
        bufp->chgBit(oldp+243,((0x33U == (0x7fU & vlSelf->npc__DOT__instF))));
        bufp->chgBit(oldp+244,(vlSelf->npc__DOT__idu_inst__DOT__ebreak));
        bufp->chgBit(oldp+245,((0x73U == (0x7fU & vlSelf->npc__DOT__instF))));
        bufp->chgBit(oldp+246,((1U & (~ ((0x37U == 
                                          (0x7fU & vlSelf->npc__DOT__instF)) 
                                         | ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->npc__DOT__instF)) 
                                            | ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->npc__DOT__instF)) 
                                               | ((IData)(vlSelf->npc__DOT__jalrD) 
                                                  | ((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->npc__DOT__instF)) 
                                                     | ((3U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->npc__DOT__instF)) 
                                                        | ((0x23U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->npc__DOT__instF)) 
                                                           | ((0x13U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->npc__DOT__instF)) 
                                                              | ((0x33U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->npc__DOT__instF)) 
                                                                 | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__ebreak) 
                                                                    | ((IData)(vlSelf->npc__DOT__ecallD) 
                                                                       | ((IData)(vlSelf->npc__DOT__mretD) 
                                                                          | (0x73U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->npc__DOT__instF))))))))))))))))));
        bufp->chgBit(oldp+247,((1U & (IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out))));
        bufp->chgBit(oldp+248,((1U & ((0x63U == (0x7fU 
                                                 & vlSelf->npc__DOT__instF)) 
                                      | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                                         | (IData)(
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->npc__DOT__instF))))))));
        bufp->chgBit(oldp+249,(((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                & (IData)((0x1000U 
                                           == (0xfe007000U 
                                               & vlSelf->npc__DOT__instF))))));
        bufp->chgBit(oldp+250,(((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0) 
                                & (0U == (vlSelf->npc__DOT__instF 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+251,(((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0) 
                                & (0x20U == (vlSelf->npc__DOT__instF 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+252,(((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                & (0x4000U == (0x7000U 
                                               & vlSelf->npc__DOT__instF)))));
        bufp->chgBit(oldp+253,(((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                & (0x6000U == (0x7000U 
                                               & vlSelf->npc__DOT__instF)))));
        bufp->chgBit(oldp+254,(((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                & (0x7000U == (0x7000U 
                                               & vlSelf->npc__DOT__instF)))));
        bufp->chgBit(oldp+255,((1U & ((0x63U == (0x7fU 
                                                 & vlSelf->npc__DOT__instF)) 
                                      | ((0x23U == 
                                          (0x7fU & vlSelf->npc__DOT__instF)) 
                                         | ((IData)(vlSelf->npc__DOT__ecallD) 
                                            | ((IData)(vlSelf->npc__DOT__mretD) 
                                               | ((~ 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->npc__DOT__instF)) 
                                                    | ((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->npc__DOT__instF)) 
                                                       | ((0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->npc__DOT__instF)) 
                                                          | ((IData)(vlSelf->npc__DOT__jalrD) 
                                                             | ((0x63U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->npc__DOT__instF)) 
                                                                | ((3U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->npc__DOT__instF)) 
                                                                   | ((0x23U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->npc__DOT__instF)) 
                                                                      | ((0x13U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->npc__DOT__instF)) 
                                                                         | ((0x33U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->npc__DOT__instF)) 
                                                                            | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__ebreak) 
                                                                               | ((IData)(vlSelf->npc__DOT__ecallD) 
                                                                                | ((IData)(vlSelf->npc__DOT__mretD) 
                                                                                | (0x73U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->npc__DOT__instF))))))))))))))) 
                                                  | (IData)(vlSelf->npc__DOT__idu_inst__DOT__ebreak)))))))));
        bufp->chgCData(oldp+256,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key),7);
        bufp->chgCData(oldp+257,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+258,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+259,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key),2);
        bufp->chgCData(oldp+260,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+261,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+262,(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out),4);
        bufp->chgCData(oldp+263,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key),6);
        bufp->chgCData(oldp+264,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+265,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+266,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key),9);
        bufp->chgCData(oldp+267,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+268,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+269,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+270,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+271,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+272,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+273,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key),5);
        bufp->chgCData(oldp+274,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+275,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit));
        __Vtemp_h7ad68f80__0[0U] = (IData)((0x400000000ULL 
                                            | (((QData)((IData)(vlSelf->npc__DOT__cmp_resultX)) 
                                                << 0x23U) 
                                               | (QData)((IData)(vlSelf->npc__DOT__csrD)))));
        __Vtemp_h7ad68f80__0[1U] = (IData)(((0x400000000ULL 
                                             | (((QData)((IData)(vlSelf->npc__DOT__cmp_resultX)) 
                                                 << 0x23U) 
                                                | (QData)((IData)(vlSelf->npc__DOT__csrD)))) 
                                            >> 0x20U));
        __Vtemp_h7ad68f80__0[2U] = (0x18U | (((IData)(4U) 
                                              + vlSelf->npc__DOT__pcF) 
                                             << 6U));
        __Vtemp_h7ad68f80__0[3U] = (0x80U | ((vlSelf->npc__DOT__mdataM 
                                              << 9U) 
                                             | (((IData)(4U) 
                                                 + vlSelf->npc__DOT__pcF) 
                                                >> 0x1aU)));
        __Vtemp_h7ad68f80__0[4U] = (0x200U | (((IData)(vlSelf->npc__DOT__u_ALU__DOT__out) 
                                               << 0xcU) 
                                              | (vlSelf->npc__DOT__mdataM 
                                                 >> 0x17U)));
        __Vtemp_h7ad68f80__0[5U] = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__out) 
                                    >> 0x14U);
        bufp->chgWData(oldp+276,(__Vtemp_h7ad68f80__0),175);
        bufp->chgQData(oldp+282,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+284,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+286,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+288,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+290,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+292,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+293,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+294,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+295,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+296,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+297,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+298,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+299,((0x2468aU | ((0x100000U 
                                               & ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))) 
                                                  << 0x14U)) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out))) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->npc__DOT__slt) 
                                                     << 0xcU) 
                                                    | ((0x100U 
                                                        & ((~ (IData)(vlSelf->npc__DOT__slt)) 
                                                           << 8U)) 
                                                       | ((0x10U 
                                                           & ((~ (IData)(vlSelf->npc__DOT__Cout)) 
                                                              << 4U)) 
                                                          | (IData)(vlSelf->npc__DOT__Cout)))))))),24);
        bufp->chgCData(oldp+300,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+301,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+302,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+303,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+304,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[4]),4);
        bufp->chgCData(oldp+305,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[5]),4);
        bufp->chgBit(oldp+306,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+307,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+308,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+309,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+310,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+311,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[5]));
        bufp->chgBit(oldp+312,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+313,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+314,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+315,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit));
        __Vtemp_h9b92af8f__0[1U] = (((- (IData)((vlSelf->npc__DOT__instF 
                                                 >> 0x1fU))) 
                                     << 0x17U) | (IData)(
                                                         ((0x500000000ULL 
                                                           | (((QData)((IData)(
                                                                               (0xffU 
                                                                                & (vlSelf->npc__DOT__instF 
                                                                                >> 0xcU)))) 
                                                               << 0x2fU) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->npc__DOT__instF 
                                                                                >> 0x14U)))) 
                                                                  << 0x2eU) 
                                                                 | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (vlSelf->npc__DOT__instF 
                                                                                >> 0x15U)))) 
                                                                     << 0x24U) 
                                                                    | (QData)((IData)(
                                                                                (((- (IData)(
                                                                                (vlSelf->npc__DOT__instF 
                                                                                >> 0x1fU))) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->npc__DOT__instF 
                                                                                << 4U)) 
                                                                                | ((0x7e0U 
                                                                                & (vlSelf->npc__DOT__instF 
                                                                                >> 0x14U)) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->npc__DOT__instF 
                                                                                >> 7U))))))))))) 
                                                          >> 0x20U)));
        __Vtemp_h613f4dfe__0[0U] = (IData)((0x500000000ULL 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (vlSelf->npc__DOT__instF 
                                                                    >> 0xcU)))) 
                                                << 0x2fU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->npc__DOT__instF 
                                                                       >> 0x14U)))) 
                                                   << 0x2eU) 
                                                  | (((QData)((IData)(
                                                                      (0x3ffU 
                                                                       & (vlSelf->npc__DOT__instF 
                                                                          >> 0x15U)))) 
                                                      << 0x24U) 
                                                     | (QData)((IData)(
                                                                       (((- (IData)(
                                                                                (vlSelf->npc__DOT__instF 
                                                                                >> 0x1fU))) 
                                                                         << 0xcU) 
                                                                        | ((0x800U 
                                                                            & (vlSelf->npc__DOT__instF 
                                                                               << 4U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->npc__DOT__instF 
                                                                                >> 0x14U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->npc__DOT__instF 
                                                                                >> 7U))))))))))));
        __Vtemp_h613f4dfe__0[1U] = __Vtemp_h9b92af8f__0[1U];
        __Vtemp_h613f4dfe__0[2U] = (0x20U | ((0xfffc0000U 
                                              & (vlSelf->npc__DOT__instF 
                                                 << 6U)) 
                                             | (7U 
                                                & ((- (IData)(
                                                              (vlSelf->npc__DOT__instF 
                                                               >> 0x1fU))) 
                                                   >> 9U))));
        __Vtemp_h613f4dfe__0[3U] = (0xc0U | (((- (IData)(
                                                         (vlSelf->npc__DOT__instF 
                                                          >> 0x1fU))) 
                                              << 0x15U) 
                                             | ((0x1fc000U 
                                                 & (vlSelf->npc__DOT__instF 
                                                    >> 0xbU)) 
                                                | ((0x3e00U 
                                                    & (vlSelf->npc__DOT__instF 
                                                       << 2U)) 
                                                   | (0x3ffffU 
                                                      & (vlSelf->npc__DOT__instF 
                                                         >> 0x1aU))))));
        __Vtemp_h613f4dfe__0[4U] = (0x200U | ((0xfffff000U 
                                               & (((- (IData)(
                                                              (vlSelf->npc__DOT__instF 
                                                               >> 0x1fU))) 
                                                   << 0x18U) 
                                                  | (0xfff000U 
                                                     & (vlSelf->npc__DOT__instF 
                                                        >> 8U)))) 
                                              | (0x1ffU 
                                                 & ((- (IData)(
                                                               (vlSelf->npc__DOT__instF 
                                                                >> 0x1fU))) 
                                                    >> 0xbU))));
        __Vtemp_h613f4dfe__0[5U] = (0xfffU & ((- (IData)(
                                                         (vlSelf->npc__DOT__instF 
                                                          >> 0x1fU))) 
                                              >> 8U));
        bufp->chgWData(oldp+316,(__Vtemp_h613f4dfe__0),175);
        bufp->chgQData(oldp+322,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+324,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+326,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+328,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+330,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+332,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+333,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+334,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+335,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+336,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+337,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+338,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+339,(vlSelf->npc__DOT__u_ALU__DOT__add_overflow));
        bufp->chgBit(oldp+340,(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow));
        bufp->chgBit(oldp+341,(vlSelf->npc__DOT__u_ALU__DOT__add_Cout));
        bufp->chgBit(oldp+342,(vlSelf->npc__DOT__u_ALU__DOT__sub_Cout));
        bufp->chgIData(oldp+343,(vlSelf->npc__DOT__u_ALU__DOT__add_result),32);
        bufp->chgIData(oldp+344,(vlSelf->npc__DOT__u_ALU__DOT__sub_result),32);
        bufp->chgQData(oldp+345,(vlSelf->npc__DOT__u_ALU__DOT__out),33);
        bufp->chgIData(oldp+347,((~ vlSelf->npc__DOT__ALU_B)),32);
        __Vtemp_hf363707d__0[0U] = (IData)((0xe00000000ULL 
                                            | (QData)((IData)(vlSelf->__VdfgTmp_h1042264f__0))));
        __Vtemp_hf363707d__0[1U] = ((vlSelf->__VdfgTmp_h104a0626__0 
                                     << 4U) | (IData)(
                                                      ((0xe00000000ULL 
                                                        | (QData)((IData)(vlSelf->__VdfgTmp_h1042264f__0))) 
                                                       >> 0x20U)));
        __Vtemp_hf363707d__0[2U] = (0xc0U | ((vlSelf->__VdfgTmp_h9dd7d0a0__0 
                                              << 8U) 
                                             | (vlSelf->__VdfgTmp_h104a0626__0 
                                                >> 0x1cU)));
        __Vtemp_hf363707d__0[3U] = (0xa00U | ((vlSelf->__VdfgTmp_h9edba206__0 
                                               << 0xcU) 
                                              | (vlSelf->__VdfgTmp_h9dd7d0a0__0 
                                                 >> 0x18U)));
        __Vtemp_hf363707d__0[4U] = (0x8000U | ((vlSelf->__VdfgTmp_h9a2a8d3a__0 
                                                << 0x10U) 
                                               | (vlSelf->__VdfgTmp_h9edba206__0 
                                                  >> 0x14U)));
        __Vtemp_hf363707d__0[5U] = (0x60000U | ((vlSelf->__VdfgTmp_h104e4682__0 
                                                 << 0x14U) 
                                                | (vlSelf->__VdfgTmp_h9a2a8d3a__0 
                                                   >> 0x10U)));
        __Vtemp_hf363707d__0[6U] = (0x400000U | ((vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                  << 0x18U) 
                                                 | (vlSelf->__VdfgTmp_h104e4682__0 
                                                    >> 0xcU)));
        __Vtemp_hf363707d__0[7U] = (0x2000000U | ((vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow) 
                                                      << 0x18U) 
                                                     | (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                        >> 8U))));
        __Vtemp_hf363707d__0[8U] = (((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow) 
                                     << 0x1cU) | (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                  >> 4U));
        bufp->chgWData(oldp+348,(__Vtemp_hf363707d__0),288);
        bufp->chgQData(oldp+357,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+359,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+361,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+363,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+365,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+367,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+369,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+371,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+373,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),33);
        bufp->chgQData(oldp+375,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),33);
        bufp->chgQData(oldp+377,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),33);
        bufp->chgQData(oldp+379,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),33);
        bufp->chgQData(oldp+381,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),33);
        bufp->chgQData(oldp+383,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),33);
        bufp->chgQData(oldp+385,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),33);
        bufp->chgQData(oldp+387,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7]),33);
        bufp->chgQData(oldp+389,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),33);
        bufp->chgBit(oldp+391,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+392,((5U != (IData)(vlSelf->npc__DOT__rdregsrcD))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+393,(vlSelf->npc__DOT__rst_d));
        bufp->chgIData(oldp+394,(vlSelf->npc__DOT__pcF),32);
        bufp->chgIData(oldp+395,(((IData)(4U) + vlSelf->npc__DOT__pcF)),32);
        bufp->chgIData(oldp+396,(vlSelf->npc__DOT__mtvec_data),32);
        bufp->chgIData(oldp+397,(vlSelf->npc__DOT__mcause_data),32);
        bufp->chgIData(oldp+398,(vlSelf->npc__DOT__mepc_data),32);
        bufp->chgIData(oldp+399,(vlSelf->npc__DOT__mstatus_data),32);
        __Vtemp_hff3436d3__0[0U] = (IData)((0x30500000000ULL 
                                            | (QData)((IData)(vlSelf->npc__DOT__mtvec_data))));
        __Vtemp_hff3436d3__0[1U] = ((vlSelf->npc__DOT__mcause_data 
                                     << 0xcU) | (IData)(
                                                        ((0x30500000000ULL 
                                                          | (QData)((IData)(vlSelf->npc__DOT__mtvec_data))) 
                                                         >> 0x20U)));
        __Vtemp_hff3436d3__0[2U] = (0x342000U | ((vlSelf->npc__DOT__mepc_data 
                                                  << 0x18U) 
                                                 | (vlSelf->npc__DOT__mcause_data 
                                                    >> 0x14U)));
        __Vtemp_hff3436d3__0[3U] = (0x41000000U | (vlSelf->npc__DOT__mepc_data 
                                                   >> 8U));
        __Vtemp_hff3436d3__0[4U] = (3U | (vlSelf->npc__DOT__mstatus_data 
                                          << 4U));
        __Vtemp_hff3436d3__0[5U] = (0x3000U | (vlSelf->npc__DOT__mstatus_data 
                                               >> 0x1cU));
        bufp->chgWData(oldp+400,(__Vtemp_hff3436d3__0),176);
        bufp->chgQData(oldp+406,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[0]),44);
        bufp->chgQData(oldp+408,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[1]),44);
        bufp->chgQData(oldp+410,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[2]),44);
        bufp->chgQData(oldp+412,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[3]),44);
        bufp->chgIData(oldp+414,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+415,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+416,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+417,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[3]),32);
        bufp->chgCData(oldp+418,(vlSelf->npc__DOT__u_IFU__DOT__state),2);
        bufp->chgIData(oldp+419,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0]),32);
        bufp->chgIData(oldp+420,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1]),32);
        bufp->chgIData(oldp+421,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2]),32);
        bufp->chgIData(oldp+422,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3]),32);
        bufp->chgIData(oldp+423,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4]),32);
        bufp->chgIData(oldp+424,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5]),32);
        bufp->chgIData(oldp+425,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6]),32);
        bufp->chgIData(oldp+426,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7]),32);
        bufp->chgIData(oldp+427,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8]),32);
        bufp->chgIData(oldp+428,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9]),32);
        bufp->chgIData(oldp+429,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[10]),32);
        bufp->chgIData(oldp+430,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[11]),32);
        bufp->chgIData(oldp+431,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[12]),32);
        bufp->chgIData(oldp+432,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[13]),32);
        bufp->chgIData(oldp+433,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[14]),32);
        bufp->chgIData(oldp+434,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[15]),32);
        bufp->chgIData(oldp+435,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[16]),32);
        bufp->chgIData(oldp+436,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[17]),32);
        bufp->chgIData(oldp+437,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[18]),32);
        bufp->chgIData(oldp+438,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[19]),32);
        bufp->chgIData(oldp+439,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[20]),32);
        bufp->chgIData(oldp+440,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[21]),32);
        bufp->chgIData(oldp+441,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[22]),32);
        bufp->chgIData(oldp+442,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[23]),32);
        bufp->chgIData(oldp+443,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[24]),32);
        bufp->chgIData(oldp+444,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[25]),32);
        bufp->chgIData(oldp+445,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[26]),32);
        bufp->chgIData(oldp+446,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[27]),32);
        bufp->chgIData(oldp+447,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[28]),32);
        bufp->chgIData(oldp+448,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[29]),32);
        bufp->chgIData(oldp+449,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[30]),32);
        bufp->chgIData(oldp+450,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[31]),32);
        bufp->chgIData(oldp+451,(vlSelf->npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+452,(vlSelf->clk));
    bufp->chgBit(oldp+453,(vlSelf->rst));
    bufp->chgBit(oldp+454,(((~ (IData)(vlSelf->rst)) 
                            & (IData)(vlSelf->npc__DOT__rst_d))));
    bufp->chgBit(oldp+455,((1U & (~ (IData)(vlSelf->rst)))));
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

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpc__Syms.h"


VL_ATTR_COLD void Vnpc___024root__trace_init_sub__TOP__0(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBit(c+108,"rst", false,-1);
    tracep->declBus(c+109,"pc", false,-1, 31,0);
    tracep->declBus(c+110,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("npc ");
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBit(c+108,"rst", false,-1);
    tracep->declBus(c+109,"pc", false,-1, 31,0);
    tracep->declBus(c+110,"inst", false,-1, 31,0);
    tracep->declBus(c+111,"rs1", false,-1, 4,0);
    tracep->declBus(c+112,"rs2", false,-1, 4,0);
    tracep->declBus(c+113,"rd", false,-1, 4,0);
    tracep->declBus(c+9,"imm", false,-1, 31,0);
    tracep->declBus(c+114,"funct3", false,-1, 2,0);
    tracep->declBus(c+115,"funct7", false,-1, 6,0);
    tracep->declBus(c+116,"opcode", false,-1, 6,0);
    tracep->declBus(c+10,"inst_type", false,-1, 5,0);
    tracep->declBus(c+11,"ALU_op", false,-1, 2,0);
    tracep->declBit(c+12,"memtoreg", false,-1);
    tracep->declBit(c+13,"ALUsrc2", false,-1);
    tracep->declBus(c+14,"rf_wdata", false,-1, 31,0);
    tracep->declBus(c+15,"rf_rdata1", false,-1, 31,0);
    tracep->declBus(c+117,"rf_rdata2", false,-1, 31,0);
    tracep->declBus(c+111,"rf_raddr1", false,-1, 4,0);
    tracep->declBus(c+112,"rf_raddr2", false,-1, 4,0);
    tracep->declBus(c+16,"ALU_result", false,-1, 31,0);
    tracep->declBus(c+15,"ALU_A", false,-1, 31,0);
    tracep->declBus(c+17,"ALU_B", false,-1, 31,0);
    tracep->declBit(c+123,"ALU_Cin", false,-1);
    tracep->declBit(c+18,"ALU_zero", false,-1);
    tracep->declBit(c+19,"ALU_overflow", false,-1);
    tracep->declBit(c+20,"ALU_Cout", false,-1);
    tracep->pushNamePrefix("idu_inst ");
    tracep->declBus(c+110,"inst", false,-1, 31,0);
    tracep->declBus(c+111,"rs1", false,-1, 4,0);
    tracep->declBus(c+112,"rs2", false,-1, 4,0);
    tracep->declBus(c+113,"rd", false,-1, 4,0);
    tracep->declBus(c+114,"funct3", false,-1, 2,0);
    tracep->declBus(c+115,"funct7", false,-1, 6,0);
    tracep->declBus(c+116,"opcode", false,-1, 6,0);
    tracep->declBus(c+9,"imm", false,-1, 31,0);
    tracep->declBus(c+10,"inst_type", false,-1, 5,0);
    tracep->declBus(c+11,"ALU_op", false,-1, 2,0);
    tracep->declBit(c+12,"memtoreg", false,-1);
    tracep->declBit(c+13,"ALUsrc2", false,-1);
    tracep->declBus(c+118,"immI", false,-1, 31,0);
    tracep->declBus(c+119,"immU", false,-1, 31,0);
    tracep->declBus(c+120,"immS", false,-1, 31,0);
    tracep->declBus(c+121,"immB", false,-1, 31,0);
    tracep->declBus(c+122,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ALU ");
    tracep->declBus(c+11,"mode", false,-1, 2,0);
    tracep->declBus(c+15,"A", false,-1, 31,0);
    tracep->declBus(c+17,"B", false,-1, 31,0);
    tracep->declBit(c+123,"Cin", false,-1);
    tracep->declBit(c+18,"zero", false,-1);
    tracep->declBit(c+19,"overflow", false,-1);
    tracep->declBit(c+20,"Cout", false,-1);
    tracep->declBus(c+16,"result", false,-1, 31,0);
    tracep->declBit(c+21,"add_overflow", false,-1);
    tracep->declBit(c+22,"sub_overflow", false,-1);
    tracep->declBit(c+23,"int_Cout", false,-1);
    tracep->declBus(c+24,"add_result", false,-1, 31,0);
    tracep->declBus(c+25,"sub_result", false,-1, 31,0);
    tracep->declQuad(c+26,"out", false,-1, 33,0);
    tracep->pushNamePrefix("adder_inst ");
    tracep->declBus(c+15,"A", false,-1, 31,0);
    tracep->declBus(c+17,"B", false,-1, 31,0);
    tracep->declBit(c+123,"Cin", false,-1);
    tracep->declBus(c+24,"sum", false,-1, 31,0);
    tracep->declBit(c+23,"Cout", false,-1);
    tracep->declBit(c+21,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub_inst ");
    tracep->declBus(c+15,"A", false,-1, 31,0);
    tracep->declBus(c+28,"B", false,-1, 31,0);
    tracep->declBit(c+124,"Cin", false,-1);
    tracep->declBus(c+25,"sum", false,-1, 31,0);
    tracep->declBit(c+29,"Cout", false,-1);
    tracep->declBit(c+22,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_MuxKeyWithDefault ");
    tracep->declBus(c+125,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+126,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+127,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+26,"out", false,-1, 33,0);
    tracep->declBus(c+11,"key", false,-1, 2,0);
    tracep->declQuad(c+128,"default_out", false,-1, 33,0);
    tracep->declArray(c+30,"lut", false,-1, 295,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+125,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+126,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+127,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+130,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+26,"out", false,-1, 33,0);
    tracep->declBus(c+11,"key", false,-1, 2,0);
    tracep->declQuad(c+128,"default_out", false,-1, 33,0);
    tracep->declArray(c+30,"lut", false,-1, 295,0);
    tracep->declBus(c+131,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+40+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+56+i*2,"data_list", true,(i+0), 33,0);
    }
    tracep->declQuad(c+72,"lut_out", false,-1, 33,0);
    tracep->declBit(c+74,"hit", false,-1);
    tracep->declBus(c+132,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+133,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+134,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBus(c+14,"wdata", false,-1, 31,0);
    tracep->declBus(c+113,"waddr", false,-1, 4,0);
    tracep->declBit(c+124,"wen", false,-1);
    tracep->declBus(c+111,"raddr1", false,-1, 4,0);
    tracep->declBus(c+112,"raddr2", false,-1, 4,0);
    tracep->declBus(c+15,"rdata1", false,-1, 31,0);
    tracep->declBus(c+117,"rdata2", false,-1, 31,0);
    tracep->declBit(c+124,"ren", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+75+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vnpc___024root__trace_init_top(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_init_top\n"); );
    // Body
    Vnpc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vnpc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vnpc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vnpc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vnpc___024root__trace_register(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vnpc___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vnpc___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vnpc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vnpc___024root__trace_full_sub_0(Vnpc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vnpc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_full_top_0\n"); );
    // Init
    Vnpc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc___024root*>(voidSelf);
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vnpc___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vnpc___024root__trace_full_sub_0(Vnpc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<10>/*319:0*/ __Vtemp_h7ed3bec4__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+5,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+6,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+7,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+8,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7]),3);
    bufp->fullIData(oldp+9,(vlSelf->npc__DOT__imm),32);
    bufp->fullCData(oldp+10,(vlSelf->npc__DOT__inst_type),6);
    bufp->fullCData(oldp+11,(vlSelf->npc__DOT__ALU_op),3);
    bufp->fullBit(oldp+12,(vlSelf->npc__DOT__memtoreg));
    bufp->fullBit(oldp+13,(vlSelf->npc__DOT__ALUsrc2));
    bufp->fullIData(oldp+14,(((IData)(vlSelf->npc__DOT__memtoreg)
                               ? 0U : (IData)(vlSelf->npc__DOT__u_ALU__DOT__out))),32);
    bufp->fullIData(oldp+15,(vlSelf->npc__DOT__rf_rdata1),32);
    bufp->fullIData(oldp+16,((IData)(vlSelf->npc__DOT__u_ALU__DOT__out)),32);
    bufp->fullIData(oldp+17,(vlSelf->npc__DOT__ALU_B),32);
    bufp->fullBit(oldp+18,((1U & (~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))));
    bufp->fullBit(oldp+19,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+20,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                          >> 0x21U)))));
    bufp->fullBit(oldp+21,(vlSelf->npc__DOT__u_ALU__DOT__add_overflow));
    bufp->fullBit(oldp+22,(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow));
    bufp->fullBit(oldp+23,(vlSelf->npc__DOT__u_ALU__DOT__int_Cout));
    bufp->fullIData(oldp+24,(vlSelf->npc__DOT__u_ALU__DOT__add_result),32);
    bufp->fullIData(oldp+25,(vlSelf->npc__DOT__u_ALU__DOT__sub_result),32);
    bufp->fullQData(oldp+26,(vlSelf->npc__DOT__u_ALU__DOT__out),34);
    bufp->fullIData(oldp+28,((~ vlSelf->npc__DOT__ALU_B)),32);
    bufp->fullBit(oldp+29,((1U & (IData)((1ULL & ((1ULL 
                                                   + 
                                                   ((QData)((IData)(vlSelf->npc__DOT__rf_rdata1)) 
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
    __Vtemp_h7ed3bec4__0[6U] = (0x10000000U | ((vlSelf->npc__DOT__u_ALU__DOT__sub_result 
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
    bufp->fullWData(oldp+30,(__Vtemp_h7ed3bec4__0),296);
    bufp->fullQData(oldp+40,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+42,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+44,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+46,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+48,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+50,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+52,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+54,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+56,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),34);
    bufp->fullQData(oldp+58,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),34);
    bufp->fullQData(oldp+60,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),34);
    bufp->fullQData(oldp+62,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),34);
    bufp->fullQData(oldp+64,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),34);
    bufp->fullQData(oldp+66,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),34);
    bufp->fullQData(oldp+68,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),34);
    bufp->fullQData(oldp+70,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7]),34);
    bufp->fullQData(oldp+72,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),34);
    bufp->fullBit(oldp+74,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+75,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+76,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+77,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+78,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+79,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+80,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+81,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+82,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+83,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+84,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+85,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+86,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+87,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+88,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+89,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+90,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+91,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+92,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+93,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+94,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+95,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+96,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+97,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+98,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+99,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+100,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+101,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+102,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+103,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+104,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+105,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+106,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullBit(oldp+107,(vlSelf->clk));
    bufp->fullBit(oldp+108,(vlSelf->rst));
    bufp->fullIData(oldp+109,(vlSelf->pc),32);
    bufp->fullIData(oldp+110,(vlSelf->inst),32);
    bufp->fullCData(oldp+111,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+112,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+113,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+114,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+115,((vlSelf->inst >> 0x19U)),7);
    bufp->fullCData(oldp+116,((0x7fU & vlSelf->inst)),7);
    bufp->fullIData(oldp+117,(((0U == (0x1fU & (vlSelf->inst 
                                                >> 0x14U)))
                                ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                               [(0x1fU & (vlSelf->inst 
                                          >> 0x14U))])),32);
    bufp->fullIData(oldp+118,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+119,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+120,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+121,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+122,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->inst) 
                                             | ((0x800U 
                                                 & (vlSelf->inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)))))),32);
    bufp->fullBit(oldp+123,(vlSelf->npc__DOT__ALU_Cin));
    bufp->fullBit(oldp+124,(1U));
    bufp->fullIData(oldp+125,(8U),32);
    bufp->fullIData(oldp+126,(3U),32);
    bufp->fullIData(oldp+127,(0x22U),32);
    bufp->fullQData(oldp+128,(0ULL),34);
    bufp->fullIData(oldp+130,(1U),32);
    bufp->fullIData(oldp+131,(0x25U),32);
    bufp->fullIData(oldp+132,(8U),32);
    bufp->fullIData(oldp+133,(5U),32);
    bufp->fullIData(oldp+134,(0x20U),32);
}

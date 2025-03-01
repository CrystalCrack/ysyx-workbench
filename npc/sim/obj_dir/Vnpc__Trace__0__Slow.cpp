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
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+143,"rst", false,-1);
    tracep->declBus(c+144,"pc", false,-1, 31,0);
    tracep->declBus(c+145,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("npc ");
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBit(c+143,"rst", false,-1);
    tracep->declBus(c+144,"pc", false,-1, 31,0);
    tracep->declBus(c+145,"inst", false,-1, 31,0);
    tracep->declBus(c+29,"rs1", false,-1, 4,0);
    tracep->declBus(c+146,"rs2", false,-1, 4,0);
    tracep->declBus(c+147,"rd", false,-1, 4,0);
    tracep->declBus(c+30,"imm", false,-1, 31,0);
    tracep->declBus(c+148,"funct3", false,-1, 2,0);
    tracep->declBus(c+149,"funct7", false,-1, 6,0);
    tracep->declBus(c+150,"opcode", false,-1, 6,0);
    tracep->declBus(c+31,"ALU_op", false,-1, 2,0);
    tracep->declBit(c+32,"memtoreg", false,-1);
    tracep->declBit(c+33,"ALUsrc2", false,-1);
    tracep->declBus(c+49,"rf_wdata", false,-1, 31,0);
    tracep->declBus(c+50,"rf_rdata1", false,-1, 31,0);
    tracep->declBus(c+151,"rf_rdata2", false,-1, 31,0);
    tracep->declBus(c+29,"rf_raddr1", false,-1, 4,0);
    tracep->declBus(c+146,"rf_raddr2", false,-1, 4,0);
    tracep->declBus(c+51,"ALU_result", false,-1, 31,0);
    tracep->declBus(c+50,"ALU_A", false,-1, 31,0);
    tracep->declBus(c+52,"ALU_B", false,-1, 31,0);
    tracep->declBit(c+163,"ALU_Cin", false,-1);
    tracep->declBit(c+53,"ALU_zero", false,-1);
    tracep->declBit(c+54,"ALU_overflow", false,-1);
    tracep->declBit(c+55,"ALU_Cout", false,-1);
    tracep->declBit(c+152,"stop_sim", false,-1);
    tracep->declBit(c+164,"stop_simulation", false,-1);
    tracep->pushNamePrefix("idu_inst ");
    tracep->declBus(c+145,"inst", false,-1, 31,0);
    tracep->declBus(c+29,"rs1", false,-1, 4,0);
    tracep->declBus(c+146,"rs2", false,-1, 4,0);
    tracep->declBus(c+147,"rd", false,-1, 4,0);
    tracep->declBus(c+148,"funct3", false,-1, 2,0);
    tracep->declBus(c+149,"funct7", false,-1, 6,0);
    tracep->declBus(c+150,"opcode", false,-1, 6,0);
    tracep->declBus(c+30,"imm", false,-1, 31,0);
    tracep->declBus(c+31,"ALU_op", false,-1, 2,0);
    tracep->declBit(c+32,"memtoreg", false,-1);
    tracep->declBit(c+33,"ALUsrc2", false,-1);
    tracep->declBit(c+152,"stop_sim", false,-1);
    tracep->declBus(c+34,"inst_name", false,-1, 1,0);
    tracep->declBit(c+153,"inst_is_addi", false,-1);
    tracep->declBit(c+154,"inst_is_ebreak", false,-1);
    tracep->declBus(c+155,"immI", false,-1, 31,0);
    tracep->declBus(c+156,"immU", false,-1, 31,0);
    tracep->declBus(c+157,"immS", false,-1, 31,0);
    tracep->declBus(c+158,"immB", false,-1, 31,0);
    tracep->declBus(c+159,"immJ", false,-1, 31,0);
    tracep->pushNamePrefix("getALU_mode ");
    tracep->declBus(c+165,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+165,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+166,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+31,"out", false,-1, 2,0);
    tracep->declBus(c+34,"key", false,-1, 1,0);
    tracep->declBus(c+167,"default_out", false,-1, 2,0);
    tracep->declBus(c+168,"lut", false,-1, 9,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+165,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+165,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+166,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+31,"out", false,-1, 2,0);
    tracep->declBus(c+34,"key", false,-1, 1,0);
    tracep->declBus(c+167,"default_out", false,-1, 2,0);
    tracep->declBus(c+168,"lut", false,-1, 9,0);
    tracep->declBus(c+170,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+35,"lut_out", false,-1, 2,0);
    tracep->declBit(c+36,"hit", false,-1);
    tracep->declBus(c+171,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getALUsrc2 ");
    tracep->declBus(c+165,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+165,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+33,"out", false,-1, 0,0);
    tracep->declBus(c+34,"key", false,-1, 1,0);
    tracep->declBus(c+172,"default_out", false,-1, 0,0);
    tracep->declBus(c+173,"lut", false,-1, 5,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+165,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+165,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+33,"out", false,-1, 0,0);
    tracep->declBus(c+34,"key", false,-1, 1,0);
    tracep->declBus(c+172,"default_out", false,-1, 0,0);
    tracep->declBus(c+173,"lut", false,-1, 5,0);
    tracep->declBus(c+166,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+7+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+11+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+37,"lut_out", false,-1, 0,0);
    tracep->declBit(c+38,"hit", false,-1);
    tracep->declBus(c+171,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getimm ");
    tracep->declBus(c+165,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+165,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+174,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+30,"out", false,-1, 31,0);
    tracep->declBus(c+34,"key", false,-1, 1,0);
    tracep->declBus(c+175,"default_out", false,-1, 31,0);
    tracep->declArray(c+160,"lut", false,-1, 67,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+165,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+165,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+174,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+30,"out", false,-1, 31,0);
    tracep->declBus(c+34,"key", false,-1, 1,0);
    tracep->declBus(c+175,"default_out", false,-1, 31,0);
    tracep->declArray(c+160,"lut", false,-1, 67,0);
    tracep->declBus(c+176,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+39+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+13+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+43+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+45,"lut_out", false,-1, 31,0);
    tracep->declBit(c+46,"hit", false,-1);
    tracep->declBus(c+171,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getmemtoreg ");
    tracep->declBus(c+165,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+165,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+32,"out", false,-1, 0,0);
    tracep->declBus(c+34,"key", false,-1, 1,0);
    tracep->declBus(c+164,"default_out", false,-1, 0,0);
    tracep->declBus(c+177,"lut", false,-1, 5,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+165,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+165,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+32,"out", false,-1, 0,0);
    tracep->declBus(c+34,"key", false,-1, 1,0);
    tracep->declBus(c+164,"default_out", false,-1, 0,0);
    tracep->declBus(c+177,"lut", false,-1, 5,0);
    tracep->declBus(c+166,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+15+i*1,"pair_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+17+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+19+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+47,"lut_out", false,-1, 0,0);
    tracep->declBit(c+48,"hit", false,-1);
    tracep->declBus(c+171,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_ALU ");
    tracep->declBus(c+31,"mode", false,-1, 2,0);
    tracep->declBus(c+50,"A", false,-1, 31,0);
    tracep->declBus(c+52,"B", false,-1, 31,0);
    tracep->declBit(c+163,"Cin", false,-1);
    tracep->declBit(c+53,"zero", false,-1);
    tracep->declBit(c+54,"overflow", false,-1);
    tracep->declBit(c+55,"Cout", false,-1);
    tracep->declBus(c+51,"result", false,-1, 31,0);
    tracep->declBit(c+56,"add_overflow", false,-1);
    tracep->declBit(c+57,"sub_overflow", false,-1);
    tracep->declBit(c+58,"int_Cout", false,-1);
    tracep->declBus(c+59,"add_result", false,-1, 31,0);
    tracep->declBus(c+60,"sub_result", false,-1, 31,0);
    tracep->declQuad(c+61,"out", false,-1, 33,0);
    tracep->pushNamePrefix("adder_inst ");
    tracep->declBus(c+50,"A", false,-1, 31,0);
    tracep->declBus(c+52,"B", false,-1, 31,0);
    tracep->declBit(c+163,"Cin", false,-1);
    tracep->declBus(c+59,"sum", false,-1, 31,0);
    tracep->declBit(c+58,"Cout", false,-1);
    tracep->declBit(c+56,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub_inst ");
    tracep->declBus(c+50,"A", false,-1, 31,0);
    tracep->declBus(c+63,"B", false,-1, 31,0);
    tracep->declBit(c+172,"Cin", false,-1);
    tracep->declBus(c+60,"sum", false,-1, 31,0);
    tracep->declBit(c+64,"Cout", false,-1);
    tracep->declBit(c+57,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_MuxKeyWithDefault ");
    tracep->declBus(c+178,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+166,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+176,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+61,"out", false,-1, 33,0);
    tracep->declBus(c+31,"key", false,-1, 2,0);
    tracep->declQuad(c+179,"default_out", false,-1, 33,0);
    tracep->declArray(c+65,"lut", false,-1, 295,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+178,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+166,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+176,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+61,"out", false,-1, 33,0);
    tracep->declBus(c+31,"key", false,-1, 2,0);
    tracep->declQuad(c+179,"default_out", false,-1, 33,0);
    tracep->declArray(c+65,"lut", false,-1, 295,0);
    tracep->declBus(c+181,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+75+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+21+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+91+i*2,"data_list", true,(i+0), 33,0);
    }
    tracep->declQuad(c+107,"lut_out", false,-1, 33,0);
    tracep->declBit(c+109,"hit", false,-1);
    tracep->declBus(c+182,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+170,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+174,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+142,"clk", false,-1);
    tracep->declBus(c+49,"wdata", false,-1, 31,0);
    tracep->declBus(c+147,"waddr", false,-1, 4,0);
    tracep->declBit(c+172,"wen", false,-1);
    tracep->declBus(c+29,"raddr1", false,-1, 4,0);
    tracep->declBus(c+146,"raddr2", false,-1, 4,0);
    tracep->declBus(c+50,"rdata1", false,-1, 31,0);
    tracep->declBus(c+151,"rdata2", false,-1, 31,0);
    tracep->declBit(c+172,"ren", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+110+i*1,"rf", true,(i+0), 31,0);
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
    VlWide<10>/*319:0*/ __Vtemp_h25c1306d__0;
    VlWide<3>/*95:0*/ __Vtemp_h8eeb5ff4__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+2,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+3,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+4,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+5,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+6,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+7,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+8,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+9,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+10,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[1]),2);
    bufp->fullBit(oldp+11,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+12,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[1]));
    bufp->fullCData(oldp+13,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+14,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+15,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__pair_list[0]),3);
    bufp->fullCData(oldp+16,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__pair_list[1]),3);
    bufp->fullCData(oldp+17,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+18,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__key_list[1]),2);
    bufp->fullBit(oldp+19,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+20,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__data_list[1]));
    bufp->fullCData(oldp+21,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+22,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+23,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+24,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+25,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+26,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+27,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+28,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+29,(vlSelf->npc__DOT__rs1),5);
    bufp->fullIData(oldp+30,(vlSelf->npc__DOT__imm),32);
    bufp->fullCData(oldp+31,(vlSelf->npc__DOT__ALU_op),3);
    bufp->fullBit(oldp+32,(vlSelf->npc__DOT__memtoreg));
    bufp->fullBit(oldp+33,(vlSelf->npc__DOT__ALUsrc2));
    bufp->fullCData(oldp+34,(vlSelf->npc__DOT__idu_inst__DOT__inst_name),2);
    bufp->fullCData(oldp+35,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+36,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+37,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+38,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+39,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+41,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullIData(oldp+43,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+44,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+45,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+46,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+47,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+48,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+49,(((IData)(vlSelf->npc__DOT__memtoreg)
                               ? 0U : (IData)(vlSelf->npc__DOT__u_ALU__DOT__out))),32);
    bufp->fullIData(oldp+50,(vlSelf->npc__DOT__rf_rdata1),32);
    bufp->fullIData(oldp+51,((IData)(vlSelf->npc__DOT__u_ALU__DOT__out)),32);
    bufp->fullIData(oldp+52,(vlSelf->npc__DOT__ALU_B),32);
    bufp->fullBit(oldp+53,((1U & (~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))));
    bufp->fullBit(oldp+54,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+55,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                          >> 0x21U)))));
    bufp->fullBit(oldp+56,(vlSelf->npc__DOT__u_ALU__DOT__add_overflow));
    bufp->fullBit(oldp+57,(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow));
    bufp->fullBit(oldp+58,(vlSelf->npc__DOT__u_ALU__DOT__int_Cout));
    bufp->fullIData(oldp+59,(vlSelf->npc__DOT__u_ALU__DOT__add_result),32);
    bufp->fullIData(oldp+60,(vlSelf->npc__DOT__u_ALU__DOT__sub_result),32);
    bufp->fullQData(oldp+61,(vlSelf->npc__DOT__u_ALU__DOT__out),34);
    bufp->fullIData(oldp+63,((~ vlSelf->npc__DOT__ALU_B)),32);
    bufp->fullBit(oldp+64,((1U & (IData)((1ULL & ((1ULL 
                                                   + 
                                                   ((QData)((IData)(vlSelf->npc__DOT__rf_rdata1)) 
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
    __Vtemp_h25c1306d__0[6U] = (0x10000000U | ((vlSelf->npc__DOT__u_ALU__DOT__sub_result 
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
    bufp->fullWData(oldp+65,(__Vtemp_h25c1306d__0),296);
    bufp->fullQData(oldp+75,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+77,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+79,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+81,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+83,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+85,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+87,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+89,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+91,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),34);
    bufp->fullQData(oldp+93,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),34);
    bufp->fullQData(oldp+95,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),34);
    bufp->fullQData(oldp+97,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),34);
    bufp->fullQData(oldp+99,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),34);
    bufp->fullQData(oldp+101,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),34);
    bufp->fullQData(oldp+103,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),34);
    bufp->fullQData(oldp+105,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7]),34);
    bufp->fullQData(oldp+107,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),34);
    bufp->fullBit(oldp+109,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+110,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+111,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+112,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+113,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+114,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+115,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+116,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+117,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+118,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+119,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+120,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+121,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+122,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+123,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+124,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+125,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+126,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+127,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+128,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+129,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+130,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+131,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+132,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+133,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+134,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+135,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+136,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+137,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+138,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+139,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+140,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+141,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullBit(oldp+142,(vlSelf->clk));
    bufp->fullBit(oldp+143,(vlSelf->rst));
    bufp->fullIData(oldp+144,(vlSelf->pc),32);
    bufp->fullIData(oldp+145,(vlSelf->inst),32);
    bufp->fullCData(oldp+146,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+147,(((0x100073U == vlSelf->inst)
                                ? 0xaU : (0x1fU & (vlSelf->inst 
                                                   >> 7U)))),5);
    bufp->fullCData(oldp+148,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+149,((vlSelf->inst >> 0x19U)),7);
    bufp->fullCData(oldp+150,((0x7fU & vlSelf->inst)),7);
    bufp->fullIData(oldp+151,(((0U == (0x1fU & (vlSelf->inst 
                                                >> 0x14U)))
                                ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                               [(0x1fU & (vlSelf->inst 
                                          >> 0x14U))])),32);
    bufp->fullBit(oldp+152,((1U & ((~ (IData)((0U != (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name)))) 
                                   | (0x100073U == vlSelf->inst)))));
    bufp->fullBit(oldp+153,((IData)((0x13U == (0x707fU 
                                               & vlSelf->inst)))));
    bufp->fullBit(oldp+154,((0x100073U == vlSelf->inst)));
    bufp->fullIData(oldp+155,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+156,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+157,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+158,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+159,((((- (IData)((vlSelf->inst 
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
    bufp->fullWData(oldp+160,(__Vtemp_h8eeb5ff4__0),68);
    bufp->fullBit(oldp+163,(vlSelf->npc__DOT__ALU_Cin));
    bufp->fullBit(oldp+164,(0U));
    bufp->fullIData(oldp+165,(2U),32);
    bufp->fullIData(oldp+166,(3U),32);
    bufp->fullCData(oldp+167,(0U),3);
    bufp->fullSData(oldp+168,(0x110U),10);
    bufp->fullIData(oldp+169,(1U),32);
    bufp->fullIData(oldp+170,(5U),32);
    bufp->fullIData(oldp+171,(2U),32);
    bufp->fullBit(oldp+172,(1U));
    bufp->fullCData(oldp+173,(0x1dU),6);
    bufp->fullIData(oldp+174,(0x20U),32);
    bufp->fullIData(oldp+175,(1U),32);
    bufp->fullIData(oldp+176,(0x22U),32);
    bufp->fullCData(oldp+177,(0x14U),6);
    bufp->fullIData(oldp+178,(8U),32);
    bufp->fullQData(oldp+179,(0ULL),34);
    bufp->fullIData(oldp+181,(0x25U),32);
    bufp->fullIData(oldp+182,(8U),32);
}

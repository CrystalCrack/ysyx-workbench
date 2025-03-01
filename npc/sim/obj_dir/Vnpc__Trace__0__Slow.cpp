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
    tracep->declBit(c+128,"clk", false,-1);
    tracep->declBit(c+129,"rst", false,-1);
    tracep->declBus(c+130,"pc", false,-1, 31,0);
    tracep->declBus(c+131,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("npc ");
    tracep->declBit(c+128,"clk", false,-1);
    tracep->declBit(c+129,"rst", false,-1);
    tracep->declBus(c+130,"pc", false,-1, 31,0);
    tracep->declBus(c+131,"inst", false,-1, 31,0);
    tracep->declBus(c+132,"rs1", false,-1, 4,0);
    tracep->declBus(c+133,"rs2", false,-1, 4,0);
    tracep->declBus(c+134,"rd", false,-1, 4,0);
    tracep->declBus(c+19,"imm", false,-1, 31,0);
    tracep->declBus(c+135,"funct3", false,-1, 2,0);
    tracep->declBus(c+136,"funct7", false,-1, 6,0);
    tracep->declBus(c+137,"opcode", false,-1, 6,0);
    tracep->declBus(c+20,"ALU_op", false,-1, 2,0);
    tracep->declBit(c+21,"memtoreg", false,-1);
    tracep->declBit(c+22,"ALUsrc2", false,-1);
    tracep->declBus(c+35,"rf_wdata", false,-1, 31,0);
    tracep->declBus(c+36,"rf_rdata1", false,-1, 31,0);
    tracep->declBus(c+138,"rf_rdata2", false,-1, 31,0);
    tracep->declBus(c+132,"rf_raddr1", false,-1, 4,0);
    tracep->declBus(c+133,"rf_raddr2", false,-1, 4,0);
    tracep->declBus(c+37,"ALU_result", false,-1, 31,0);
    tracep->declBus(c+36,"ALU_A", false,-1, 31,0);
    tracep->declBus(c+38,"ALU_B", false,-1, 31,0);
    tracep->declBit(c+147,"ALU_Cin", false,-1);
    tracep->declBit(c+39,"ALU_zero", false,-1);
    tracep->declBit(c+40,"ALU_overflow", false,-1);
    tracep->declBit(c+41,"ALU_Cout", false,-1);
    tracep->declBit(c+139,"stop_sim", false,-1);
    tracep->declBit(c+148,"stop_simulation", false,-1);
    tracep->pushNamePrefix("idu_inst ");
    tracep->declBus(c+131,"inst", false,-1, 31,0);
    tracep->declBus(c+132,"rs1", false,-1, 4,0);
    tracep->declBus(c+133,"rs2", false,-1, 4,0);
    tracep->declBus(c+134,"rd", false,-1, 4,0);
    tracep->declBus(c+135,"funct3", false,-1, 2,0);
    tracep->declBus(c+136,"funct7", false,-1, 6,0);
    tracep->declBus(c+137,"opcode", false,-1, 6,0);
    tracep->declBus(c+19,"imm", false,-1, 31,0);
    tracep->declBus(c+20,"ALU_op", false,-1, 2,0);
    tracep->declBit(c+21,"memtoreg", false,-1);
    tracep->declBit(c+22,"ALUsrc2", false,-1);
    tracep->declBit(c+139,"stop_sim", false,-1);
    tracep->declBus(c+140,"immI", false,-1, 31,0);
    tracep->declBus(c+141,"immU", false,-1, 31,0);
    tracep->declBus(c+142,"immS", false,-1, 31,0);
    tracep->declBus(c+143,"immB", false,-1, 31,0);
    tracep->declBus(c+144,"immJ", false,-1, 31,0);
    tracep->declBit(c+23,"inst_name", false,-1);
    tracep->declBit(c+23,"inst_is_addi", false,-1);
    tracep->pushNamePrefix("getALU_mode ");
    tracep->declBus(c+149,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+149,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+150,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+20,"out", false,-1, 2,0);
    tracep->declBus(c+23,"key", false,-1, 0,0);
    tracep->declBus(c+151,"default_out", false,-1, 2,0);
    tracep->declBus(c+152,"lut", false,-1, 3,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+149,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+149,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+150,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+149,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+20,"out", false,-1, 2,0);
    tracep->declBus(c+23,"key", false,-1, 0,0);
    tracep->declBus(c+151,"default_out", false,-1, 2,0);
    tracep->declBus(c+152,"lut", false,-1, 3,0);
    tracep->declBus(c+153,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+24,"lut_out", false,-1, 2,0);
    tracep->declBit(c+25,"hit", false,-1);
    tracep->declBus(c+154,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getALUsrc2 ");
    tracep->declBus(c+149,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+149,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+149,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+22,"out", false,-1, 0,0);
    tracep->declBus(c+23,"key", false,-1, 0,0);
    tracep->declBus(c+155,"default_out", false,-1, 0,0);
    tracep->declBus(c+156,"lut", false,-1, 1,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+149,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+149,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+149,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+149,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+22,"out", false,-1, 0,0);
    tracep->declBus(c+23,"key", false,-1, 0,0);
    tracep->declBus(c+155,"default_out", false,-1, 0,0);
    tracep->declBus(c+156,"lut", false,-1, 1,0);
    tracep->declBus(c+157,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4+i*1,"pair_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+6+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+26,"lut_out", false,-1, 0,0);
    tracep->declBit(c+27,"hit", false,-1);
    tracep->declBus(c+154,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getimm ");
    tracep->declBus(c+149,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+149,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+158,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+19,"out", false,-1, 31,0);
    tracep->declBus(c+23,"key", false,-1, 0,0);
    tracep->declBus(c+159,"default_out", false,-1, 31,0);
    tracep->declQuad(c+145,"lut", false,-1, 32,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+149,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+149,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+158,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+149,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+19,"out", false,-1, 31,0);
    tracep->declBus(c+23,"key", false,-1, 0,0);
    tracep->declBus(c+159,"default_out", false,-1, 31,0);
    tracep->declQuad(c+145,"lut", false,-1, 32,0);
    tracep->declBus(c+160,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+28+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+7+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+30+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+31,"lut_out", false,-1, 31,0);
    tracep->declBit(c+32,"hit", false,-1);
    tracep->declBus(c+154,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getmemtoreg ");
    tracep->declBus(c+149,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+149,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+149,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+21,"out", false,-1, 0,0);
    tracep->declBus(c+23,"key", false,-1, 0,0);
    tracep->declBus(c+148,"default_out", false,-1, 0,0);
    tracep->declBus(c+161,"lut", false,-1, 1,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+149,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+149,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+149,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+149,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+21,"out", false,-1, 0,0);
    tracep->declBus(c+23,"key", false,-1, 0,0);
    tracep->declBus(c+148,"default_out", false,-1, 0,0);
    tracep->declBus(c+161,"lut", false,-1, 1,0);
    tracep->declBus(c+157,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+8+i*1,"pair_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+10+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+33,"lut_out", false,-1, 0,0);
    tracep->declBit(c+34,"hit", false,-1);
    tracep->declBus(c+154,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_ALU ");
    tracep->declBus(c+20,"mode", false,-1, 2,0);
    tracep->declBus(c+36,"A", false,-1, 31,0);
    tracep->declBus(c+38,"B", false,-1, 31,0);
    tracep->declBit(c+147,"Cin", false,-1);
    tracep->declBit(c+39,"zero", false,-1);
    tracep->declBit(c+40,"overflow", false,-1);
    tracep->declBit(c+41,"Cout", false,-1);
    tracep->declBus(c+37,"result", false,-1, 31,0);
    tracep->declBit(c+42,"add_overflow", false,-1);
    tracep->declBit(c+43,"sub_overflow", false,-1);
    tracep->declBit(c+44,"int_Cout", false,-1);
    tracep->declBus(c+45,"add_result", false,-1, 31,0);
    tracep->declBus(c+46,"sub_result", false,-1, 31,0);
    tracep->declQuad(c+47,"out", false,-1, 33,0);
    tracep->pushNamePrefix("adder_inst ");
    tracep->declBus(c+36,"A", false,-1, 31,0);
    tracep->declBus(c+38,"B", false,-1, 31,0);
    tracep->declBit(c+147,"Cin", false,-1);
    tracep->declBus(c+45,"sum", false,-1, 31,0);
    tracep->declBit(c+44,"Cout", false,-1);
    tracep->declBit(c+42,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub_inst ");
    tracep->declBus(c+36,"A", false,-1, 31,0);
    tracep->declBus(c+49,"B", false,-1, 31,0);
    tracep->declBit(c+155,"Cin", false,-1);
    tracep->declBus(c+46,"sum", false,-1, 31,0);
    tracep->declBit(c+50,"Cout", false,-1);
    tracep->declBit(c+43,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_MuxKeyWithDefault ");
    tracep->declBus(c+162,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+150,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+163,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+47,"out", false,-1, 33,0);
    tracep->declBus(c+20,"key", false,-1, 2,0);
    tracep->declQuad(c+164,"default_out", false,-1, 33,0);
    tracep->declArray(c+51,"lut", false,-1, 295,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+162,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+150,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+163,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+149,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+47,"out", false,-1, 33,0);
    tracep->declBus(c+20,"key", false,-1, 2,0);
    tracep->declQuad(c+164,"default_out", false,-1, 33,0);
    tracep->declArray(c+51,"lut", false,-1, 295,0);
    tracep->declBus(c+166,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+61+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+11+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+77+i*2,"data_list", true,(i+0), 33,0);
    }
    tracep->declQuad(c+93,"lut_out", false,-1, 33,0);
    tracep->declBit(c+95,"hit", false,-1);
    tracep->declBus(c+167,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+168,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+158,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+128,"clk", false,-1);
    tracep->declBus(c+35,"wdata", false,-1, 31,0);
    tracep->declBus(c+134,"waddr", false,-1, 4,0);
    tracep->declBit(c+155,"wen", false,-1);
    tracep->declBus(c+132,"raddr1", false,-1, 4,0);
    tracep->declBus(c+133,"raddr2", false,-1, 4,0);
    tracep->declBus(c+36,"rdata1", false,-1, 31,0);
    tracep->declBus(c+138,"rdata2", false,-1, 31,0);
    tracep->declBit(c+155,"ren", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+96+i*1,"rf", true,(i+0), 31,0);
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
    VlWide<10>/*319:0*/ __Vtemp_h47329a61__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullBit(oldp+2,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0]));
    bufp->fullCData(oldp+3,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+4,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[0]),2);
    bufp->fullBit(oldp+5,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+6,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+7,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0]));
    bufp->fullCData(oldp+8,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__pair_list[0]),2);
    bufp->fullBit(oldp+9,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+10,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__data_list[0]));
    bufp->fullCData(oldp+11,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+12,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+13,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+14,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+15,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+16,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+17,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+18,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7]),3);
    bufp->fullIData(oldp+19,(vlSelf->npc__DOT__imm),32);
    bufp->fullCData(oldp+20,(vlSelf->npc__DOT__ALU_op),3);
    bufp->fullBit(oldp+21,(vlSelf->npc__DOT__memtoreg));
    bufp->fullBit(oldp+22,(vlSelf->npc__DOT__ALUsrc2));
    bufp->fullBit(oldp+23,(vlSelf->npc__DOT__idu_inst__DOT__inst_name));
    bufp->fullCData(oldp+24,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+25,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+26,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+27,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+28,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullIData(oldp+30,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+31,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+32,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+33,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+34,(vlSelf->npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+35,(((IData)(vlSelf->npc__DOT__memtoreg)
                               ? 0U : (IData)(vlSelf->npc__DOT__u_ALU__DOT__out))),32);
    bufp->fullIData(oldp+36,(vlSelf->npc__DOT__rf_rdata1),32);
    bufp->fullIData(oldp+37,((IData)(vlSelf->npc__DOT__u_ALU__DOT__out)),32);
    bufp->fullIData(oldp+38,(vlSelf->npc__DOT__ALU_B),32);
    bufp->fullBit(oldp+39,((1U & (~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))));
    bufp->fullBit(oldp+40,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+41,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                          >> 0x21U)))));
    bufp->fullBit(oldp+42,(vlSelf->npc__DOT__u_ALU__DOT__add_overflow));
    bufp->fullBit(oldp+43,(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow));
    bufp->fullBit(oldp+44,(vlSelf->npc__DOT__u_ALU__DOT__int_Cout));
    bufp->fullIData(oldp+45,(vlSelf->npc__DOT__u_ALU__DOT__add_result),32);
    bufp->fullIData(oldp+46,(vlSelf->npc__DOT__u_ALU__DOT__sub_result),32);
    bufp->fullQData(oldp+47,(vlSelf->npc__DOT__u_ALU__DOT__out),34);
    bufp->fullIData(oldp+49,((~ vlSelf->npc__DOT__ALU_B)),32);
    bufp->fullBit(oldp+50,((1U & (IData)((1ULL & ((1ULL 
                                                   + 
                                                   ((QData)((IData)(vlSelf->npc__DOT__rf_rdata1)) 
                                                    + (QData)((IData)(
                                                                      (~ vlSelf->npc__DOT__ALU_B))))) 
                                                  >> 0x20U))))));
    __Vtemp_h47329a61__0[0U] = (IData)((0x1c00000000ULL 
                                        | (((QData)((IData)(vlSelf->__VdfgTmp_hae490a24__0)) 
                                            << 0x25U) 
                                           | (QData)((IData)(
                                                             (1U 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != vlSelf->npc__DOT__u_ALU__DOT__sub_result)))))))));
    __Vtemp_h47329a61__0[1U] = (IData)(((0x1c00000000ULL 
                                         | (((QData)((IData)(vlSelf->__VdfgTmp_hae490a24__0)) 
                                             << 0x25U) 
                                            | (QData)((IData)(
                                                              (1U 
                                                               & (~ (IData)(
                                                                            (0U 
                                                                             != vlSelf->npc__DOT__u_ALU__DOT__sub_result)))))))) 
                                        >> 0x20U));
    __Vtemp_h47329a61__0[2U] = (0x300U | (vlSelf->__VdfgTmp_hae65ec79__0 
                                          << 0xaU));
    __Vtemp_h47329a61__0[3U] = (0x5000U | ((vlSelf->__VdfgTmp_haf74767f__0 
                                            << 0xfU) 
                                           | (vlSelf->__VdfgTmp_hae65ec79__0 
                                              >> 0x16U)));
    __Vtemp_h47329a61__0[4U] = (0x80000U | ((vlSelf->__VdfgTmp_ha8752fbf__0 
                                             << 0x14U) 
                                            | (vlSelf->__VdfgTmp_haf74767f__0 
                                               >> 0x11U)));
    __Vtemp_h47329a61__0[5U] = (0xc00000U | ((vlSelf->__VdfgTmp_hf55457f8__0 
                                              << 0x19U) 
                                             | (vlSelf->__VdfgTmp_ha8752fbf__0 
                                                >> 0xcU)));
    __Vtemp_h47329a61__0[6U] = (0x10000000U | ((vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                << 0x1eU) 
                                               | (vlSelf->__VdfgTmp_hf55457f8__0 
                                                  >> 7U)));
    __Vtemp_h47329a61__0[7U] = (((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow) 
                                 << 0x1eU) | (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                              >> 2U));
    __Vtemp_h47329a61__0[8U] = (1U | (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                      << 3U));
    __Vtemp_h47329a61__0[9U] = (((IData)(vlSelf->npc__DOT__u_ALU__DOT__int_Cout) 
                                 << 4U) | (((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow) 
                                            << 3U) 
                                           | (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                              >> 0x1dU)));
    bufp->fullWData(oldp+51,(__Vtemp_h47329a61__0),296);
    bufp->fullQData(oldp+61,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+63,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+65,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+67,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+69,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+71,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+73,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+75,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+77,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),34);
    bufp->fullQData(oldp+79,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),34);
    bufp->fullQData(oldp+81,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),34);
    bufp->fullQData(oldp+83,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),34);
    bufp->fullQData(oldp+85,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),34);
    bufp->fullQData(oldp+87,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),34);
    bufp->fullQData(oldp+89,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),34);
    bufp->fullQData(oldp+91,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7]),34);
    bufp->fullQData(oldp+93,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),34);
    bufp->fullBit(oldp+95,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+96,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+97,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+98,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+99,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+100,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+101,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+102,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+103,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+104,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+105,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+106,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+107,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+108,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+109,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+110,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+111,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+112,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+113,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+114,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+115,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+116,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+117,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+118,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+119,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+120,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+121,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+122,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+123,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+124,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+125,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+126,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+127,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullBit(oldp+128,(vlSelf->clk));
    bufp->fullBit(oldp+129,(vlSelf->rst));
    bufp->fullIData(oldp+130,(vlSelf->pc),32);
    bufp->fullIData(oldp+131,(vlSelf->inst),32);
    bufp->fullCData(oldp+132,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+133,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+134,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+135,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+136,((vlSelf->inst >> 0x19U)),7);
    bufp->fullCData(oldp+137,((0x7fU & vlSelf->inst)),7);
    bufp->fullIData(oldp+138,(((0U == (0x1fU & (vlSelf->inst 
                                                >> 0x14U)))
                                ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                               [(0x1fU & (vlSelf->inst 
                                          >> 0x14U))])),32);
    bufp->fullBit(oldp+139,((0x100073U == vlSelf->inst)));
    bufp->fullIData(oldp+140,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+141,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+142,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+143,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+144,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->inst) 
                                             | ((0x800U 
                                                 & (vlSelf->inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)))))),32);
    bufp->fullQData(oldp+145,((0x100000000ULL | (QData)((IData)(
                                                                (((- (IData)(
                                                                             (vlSelf->inst 
                                                                              >> 0x1fU))) 
                                                                  << 0xcU) 
                                                                 | (vlSelf->inst 
                                                                    >> 0x14U)))))),33);
    bufp->fullBit(oldp+147,(vlSelf->npc__DOT__ALU_Cin));
    bufp->fullBit(oldp+148,(0U));
    bufp->fullIData(oldp+149,(1U),32);
    bufp->fullIData(oldp+150,(3U),32);
    bufp->fullCData(oldp+151,(0U),3);
    bufp->fullCData(oldp+152,(8U),4);
    bufp->fullIData(oldp+153,(4U),32);
    bufp->fullIData(oldp+154,(1U),32);
    bufp->fullBit(oldp+155,(1U));
    bufp->fullCData(oldp+156,(3U),2);
    bufp->fullIData(oldp+157,(2U),32);
    bufp->fullIData(oldp+158,(0x20U),32);
    bufp->fullIData(oldp+159,(0U),32);
    bufp->fullIData(oldp+160,(0x21U),32);
    bufp->fullCData(oldp+161,(2U),2);
    bufp->fullIData(oldp+162,(8U),32);
    bufp->fullIData(oldp+163,(0x22U),32);
    bufp->fullQData(oldp+164,(0ULL),34);
    bufp->fullIData(oldp+166,(0x25U),32);
    bufp->fullIData(oldp+167,(8U),32);
    bufp->fullIData(oldp+168,(5U),32);
}

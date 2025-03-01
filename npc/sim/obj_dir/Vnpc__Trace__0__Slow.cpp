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
    tracep->declBit(c+237,"clk", false,-1);
    tracep->declBit(c+238,"rst", false,-1);
    tracep->declBus(c+239,"pc", false,-1, 31,0);
    tracep->declBus(c+240,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("npc ");
    tracep->declBit(c+237,"clk", false,-1);
    tracep->declBit(c+238,"rst", false,-1);
    tracep->declBus(c+239,"pc", false,-1, 31,0);
    tracep->declBus(c+240,"inst", false,-1, 31,0);
    tracep->declBus(c+241,"snpc", false,-1, 31,0);
    tracep->declBus(c+242,"dnpc", false,-1, 31,0);
    tracep->declBus(c+100,"rs1", false,-1, 4,0);
    tracep->declBus(c+243,"rs2", false,-1, 4,0);
    tracep->declBus(c+244,"rd", false,-1, 4,0);
    tracep->declBus(c+101,"imm", false,-1, 31,0);
    tracep->declBus(c+245,"funct3", false,-1, 2,0);
    tracep->declBus(c+246,"funct7", false,-1, 6,0);
    tracep->declBus(c+247,"opcode", false,-1, 6,0);
    tracep->declBus(c+102,"ALU_op", false,-1, 2,0);
    tracep->declBus(c+103,"rdregsrc", false,-1, 1,0);
    tracep->declBit(c+104,"ALUsrc1", false,-1);
    tracep->declBit(c+105,"ALUsrc2", false,-1);
    tracep->declBit(c+248,"jump", false,-1);
    tracep->declBit(c+106,"wen", false,-1);
    tracep->declBus(c+249,"rf_wdata", false,-1, 31,0);
    tracep->declBus(c+144,"rf_rdata1", false,-1, 31,0);
    tracep->declBus(c+250,"rf_rdata2", false,-1, 31,0);
    tracep->declBus(c+100,"rf_raddr1", false,-1, 4,0);
    tracep->declBus(c+243,"rf_raddr2", false,-1, 4,0);
    tracep->declBus(c+145,"ALU_result", false,-1, 31,0);
    tracep->declBus(c+146,"ALU_A", false,-1, 31,0);
    tracep->declBus(c+147,"ALU_B", false,-1, 31,0);
    tracep->declBit(c+267,"ALU_Cin", false,-1);
    tracep->declBit(c+148,"ALU_zero", false,-1);
    tracep->declBit(c+149,"ALU_overflow", false,-1);
    tracep->declBit(c+150,"ALU_Cout", false,-1);
    tracep->declBit(c+107,"stop_sim", false,-1);
    tracep->pushNamePrefix("idu_inst ");
    tracep->declBus(c+240,"inst", false,-1, 31,0);
    tracep->declBus(c+100,"rs1", false,-1, 4,0);
    tracep->declBus(c+243,"rs2", false,-1, 4,0);
    tracep->declBus(c+244,"rd", false,-1, 4,0);
    tracep->declBus(c+245,"funct3", false,-1, 2,0);
    tracep->declBus(c+246,"funct7", false,-1, 6,0);
    tracep->declBus(c+247,"opcode", false,-1, 6,0);
    tracep->declBus(c+101,"imm", false,-1, 31,0);
    tracep->declBus(c+102,"ALU_op", false,-1, 2,0);
    tracep->declBus(c+103,"rdregsrc", false,-1, 1,0);
    tracep->declBit(c+104,"ALUsrc1", false,-1);
    tracep->declBit(c+105,"ALUsrc2", false,-1);
    tracep->declBit(c+248,"jump", false,-1);
    tracep->declBit(c+107,"stop_sim", false,-1);
    tracep->declBus(c+268,"NUM_OF_INST", false,-1, 31,0);
    tracep->declBus(c+108,"inst_name", false,-1, 2,0);
    tracep->declBit(c+109,"inst_is_addi", false,-1);
    tracep->declBit(c+251,"inst_is_ebreak", false,-1);
    tracep->declBit(c+252,"inst_is_auipc", false,-1);
    tracep->declBit(c+253,"inst_is_lui", false,-1);
    tracep->declBit(c+254,"inst_is_jal", false,-1);
    tracep->declBit(c+110,"inst_is_jalr", false,-1);
    tracep->declBit(c+111,"inst_is_sw", false,-1);
    tracep->declBus(c+112,"immI", false,-1, 31,0);
    tracep->declBus(c+255,"immU", false,-1, 31,0);
    tracep->declBus(c+256,"immS", false,-1, 31,0);
    tracep->declBus(c+257,"immB", false,-1, 31,0);
    tracep->declBus(c+258,"immJ", false,-1, 31,0);
    tracep->pushNamePrefix("getALU_mode ");
    tracep->declBus(c+268,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+269,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+269,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+102,"out", false,-1, 2,0);
    tracep->declBus(c+108,"key", false,-1, 2,0);
    tracep->declBus(c+270,"default_out", false,-1, 2,0);
    tracep->declQuad(c+271,"lut", false,-1, 41,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+268,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+269,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+269,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+102,"out", false,-1, 2,0);
    tracep->declBus(c+108,"key", false,-1, 2,0);
    tracep->declBus(c+270,"default_out", false,-1, 2,0);
    tracep->declQuad(c+271,"lut", false,-1, 41,0);
    tracep->declBus(c+274,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 5,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+8+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+15+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+113,"lut_out", false,-1, 2,0);
    tracep->declBit(c+114,"hit", false,-1);
    tracep->declBus(c+275,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getALUsrc1 ");
    tracep->declBus(c+268,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+269,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+104,"out", false,-1, 0,0);
    tracep->declBus(c+108,"key", false,-1, 2,0);
    tracep->declBus(c+276,"default_out", false,-1, 0,0);
    tracep->declBus(c+277,"lut", false,-1, 27,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+268,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+269,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+104,"out", false,-1, 0,0);
    tracep->declBus(c+108,"key", false,-1, 2,0);
    tracep->declBus(c+276,"default_out", false,-1, 0,0);
    tracep->declBus(c+277,"lut", false,-1, 27,0);
    tracep->declBus(c+278,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+22+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+29+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+36+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+115,"lut_out", false,-1, 0,0);
    tracep->declBit(c+116,"hit", false,-1);
    tracep->declBus(c+275,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getALUsrc2 ");
    tracep->declBus(c+268,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+269,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+105,"out", false,-1, 0,0);
    tracep->declBus(c+108,"key", false,-1, 2,0);
    tracep->declBus(c+279,"default_out", false,-1, 0,0);
    tracep->declBus(c+280,"lut", false,-1, 27,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+268,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+269,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+105,"out", false,-1, 0,0);
    tracep->declBus(c+108,"key", false,-1, 2,0);
    tracep->declBus(c+279,"default_out", false,-1, 0,0);
    tracep->declBus(c+280,"lut", false,-1, 27,0);
    tracep->declBus(c+278,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+43+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+50+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+57+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+117,"lut_out", false,-1, 0,0);
    tracep->declBit(c+118,"hit", false,-1);
    tracep->declBus(c+275,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getimm ");
    tracep->declBus(c+268,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+269,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+281,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+101,"out", false,-1, 31,0);
    tracep->declBus(c+108,"key", false,-1, 2,0);
    tracep->declBus(c+282,"default_out", false,-1, 31,0);
    tracep->declArray(c+259,"lut", false,-1, 244,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+268,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+269,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+281,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+101,"out", false,-1, 31,0);
    tracep->declBus(c+108,"key", false,-1, 2,0);
    tracep->declBus(c+282,"default_out", false,-1, 31,0);
    tracep->declArray(c+259,"lut", false,-1, 244,0);
    tracep->declBus(c+283,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+119+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+64+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+133+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+140,"lut_out", false,-1, 31,0);
    tracep->declBit(c+141,"hit", false,-1);
    tracep->declBus(c+275,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getrdregsrc ");
    tracep->declBus(c+268,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+269,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+284,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+103,"out", false,-1, 1,0);
    tracep->declBus(c+108,"key", false,-1, 2,0);
    tracep->declBus(c+285,"default_out", false,-1, 1,0);
    tracep->declQuad(c+286,"lut", false,-1, 34,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+268,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+269,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+284,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+103,"out", false,-1, 1,0);
    tracep->declBus(c+108,"key", false,-1, 2,0);
    tracep->declBus(c+285,"default_out", false,-1, 1,0);
    tracep->declQuad(c+286,"lut", false,-1, 34,0);
    tracep->declBus(c+288,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+71+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+78+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+85+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+142,"lut_out", false,-1, 1,0);
    tracep->declBit(c+143,"hit", false,-1);
    tracep->declBus(c+275,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_ALU ");
    tracep->declBus(c+102,"mode", false,-1, 2,0);
    tracep->declBus(c+146,"A", false,-1, 31,0);
    tracep->declBus(c+147,"B", false,-1, 31,0);
    tracep->declBit(c+267,"Cin", false,-1);
    tracep->declBit(c+148,"zero", false,-1);
    tracep->declBit(c+149,"overflow", false,-1);
    tracep->declBit(c+150,"Cout", false,-1);
    tracep->declBus(c+145,"result", false,-1, 31,0);
    tracep->declBit(c+151,"add_overflow", false,-1);
    tracep->declBit(c+152,"sub_overflow", false,-1);
    tracep->declBit(c+153,"int_Cout", false,-1);
    tracep->declBus(c+154,"add_result", false,-1, 31,0);
    tracep->declBus(c+155,"sub_result", false,-1, 31,0);
    tracep->declQuad(c+156,"out", false,-1, 33,0);
    tracep->pushNamePrefix("adder_inst ");
    tracep->declBus(c+146,"A", false,-1, 31,0);
    tracep->declBus(c+147,"B", false,-1, 31,0);
    tracep->declBit(c+267,"Cin", false,-1);
    tracep->declBus(c+154,"sum", false,-1, 31,0);
    tracep->declBit(c+153,"Cout", false,-1);
    tracep->declBit(c+151,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub_inst ");
    tracep->declBus(c+146,"A", false,-1, 31,0);
    tracep->declBus(c+158,"B", false,-1, 31,0);
    tracep->declBit(c+279,"Cin", false,-1);
    tracep->declBus(c+155,"sum", false,-1, 31,0);
    tracep->declBit(c+159,"Cout", false,-1);
    tracep->declBit(c+152,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_MuxKeyWithDefault ");
    tracep->declBus(c+289,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+269,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+290,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+156,"out", false,-1, 33,0);
    tracep->declBus(c+102,"key", false,-1, 2,0);
    tracep->declQuad(c+291,"default_out", false,-1, 33,0);
    tracep->declArray(c+160,"lut", false,-1, 295,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+289,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+269,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+290,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+156,"out", false,-1, 33,0);
    tracep->declBus(c+102,"key", false,-1, 2,0);
    tracep->declQuad(c+291,"default_out", false,-1, 33,0);
    tracep->declArray(c+160,"lut", false,-1, 295,0);
    tracep->declBus(c+293,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+170+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+92+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+186+i*2,"data_list", true,(i+0), 33,0);
    }
    tracep->declQuad(c+202,"lut_out", false,-1, 33,0);
    tracep->declBit(c+204,"hit", false,-1);
    tracep->declBus(c+294,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+288,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+281,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+237,"clk", false,-1);
    tracep->declBus(c+249,"wdata", false,-1, 31,0);
    tracep->declBus(c+244,"waddr", false,-1, 4,0);
    tracep->declBit(c+106,"wen", false,-1);
    tracep->declBus(c+100,"raddr1", false,-1, 4,0);
    tracep->declBus(c+243,"raddr2", false,-1, 4,0);
    tracep->declBus(c+144,"rdata1", false,-1, 31,0);
    tracep->declBus(c+250,"rdata2", false,-1, 31,0);
    tracep->declBit(c+279,"ren", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+205+i*1,"rf", true,(i+0), 31,0);
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
    VlWide<10>/*319:0*/ __Vtemp_h4d9162db__0;
    VlWide<8>/*255:0*/ __Vtemp_hb70f9e6e__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[0]),6);
    bufp->fullCData(oldp+2,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[1]),6);
    bufp->fullCData(oldp+3,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[2]),6);
    bufp->fullCData(oldp+4,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[3]),6);
    bufp->fullCData(oldp+5,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[4]),6);
    bufp->fullCData(oldp+6,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[5]),6);
    bufp->fullCData(oldp+7,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list[6]),6);
    bufp->fullCData(oldp+8,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+9,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+10,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+11,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+12,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+13,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+14,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+15,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+16,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+17,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+18,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+19,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+20,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+21,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+22,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+23,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+24,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+25,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+26,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+27,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__pair_list[5]),4);
    bufp->fullCData(oldp+28,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__pair_list[6]),4);
    bufp->fullCData(oldp+29,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+30,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+31,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+32,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+33,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+34,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+35,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[6]),3);
    bufp->fullBit(oldp+36,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+37,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+38,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+39,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+40,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+41,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+42,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[6]));
    bufp->fullCData(oldp+43,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+44,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+45,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+46,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+47,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+48,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[5]),4);
    bufp->fullCData(oldp+49,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list[6]),4);
    bufp->fullCData(oldp+50,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+51,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+52,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+53,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+54,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+55,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+56,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[6]),3);
    bufp->fullBit(oldp+57,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+58,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+59,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+60,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+61,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+62,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+63,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[6]));
    bufp->fullCData(oldp+64,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+65,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+66,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+67,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+68,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+69,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+70,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+71,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+72,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+73,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+74,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+75,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+76,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__pair_list[5]),5);
    bufp->fullCData(oldp+77,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__pair_list[6]),5);
    bufp->fullCData(oldp+78,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+79,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+80,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+81,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+82,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+83,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+84,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+85,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+86,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+87,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+88,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+89,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[4]),2);
    bufp->fullCData(oldp+90,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[5]),2);
    bufp->fullCData(oldp+91,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[6]),2);
    bufp->fullCData(oldp+92,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+93,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+94,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+95,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+96,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+97,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+98,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+99,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+100,(vlSelf->npc__DOT__rs1),5);
    bufp->fullIData(oldp+101,(vlSelf->npc__DOT__imm),32);
    bufp->fullCData(oldp+102,(vlSelf->npc__DOT__ALU_op),3);
    bufp->fullCData(oldp+103,(vlSelf->npc__DOT__rdregsrc),2);
    bufp->fullBit(oldp+104,(vlSelf->npc__DOT__ALUsrc1));
    bufp->fullBit(oldp+105,(vlSelf->npc__DOT__ALUsrc2));
    bufp->fullBit(oldp+106,((3U != (IData)(vlSelf->npc__DOT__rdregsrc))));
    bufp->fullBit(oldp+107,(vlSelf->npc__DOT__stop_sim));
    bufp->fullCData(oldp+108,(vlSelf->npc__DOT__idu_inst__DOT__inst_name),3);
    bufp->fullBit(oldp+109,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi));
    bufp->fullBit(oldp+110,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr));
    bufp->fullBit(oldp+111,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw));
    bufp->fullIData(oldp+112,(vlSelf->npc__DOT__idu_inst__DOT__immI),32);
    bufp->fullCData(oldp+113,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+114,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+115,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+116,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+117,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+118,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+119,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+121,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+123,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+125,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+127,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+129,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullQData(oldp+131,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[6]),35);
    bufp->fullIData(oldp+133,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+134,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+135,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+136,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+137,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+138,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+139,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+140,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+141,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+142,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+143,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+144,(((0U == (IData)(vlSelf->npc__DOT__rs1))
                                ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                               [vlSelf->npc__DOT__rs1])),32);
    bufp->fullIData(oldp+145,((IData)(vlSelf->npc__DOT__u_ALU__DOT__out)),32);
    bufp->fullIData(oldp+146,(vlSelf->npc__DOT__ALU_A),32);
    bufp->fullIData(oldp+147,(vlSelf->npc__DOT__ALU_B),32);
    bufp->fullBit(oldp+148,((1U & (~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))));
    bufp->fullBit(oldp+149,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+150,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                           >> 0x21U)))));
    bufp->fullBit(oldp+151,(vlSelf->npc__DOT__u_ALU__DOT__add_overflow));
    bufp->fullBit(oldp+152,(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow));
    bufp->fullBit(oldp+153,(vlSelf->npc__DOT__u_ALU__DOT__int_Cout));
    bufp->fullIData(oldp+154,(vlSelf->npc__DOT__u_ALU__DOT__add_result),32);
    bufp->fullIData(oldp+155,(vlSelf->npc__DOT__u_ALU__DOT__sub_result),32);
    bufp->fullQData(oldp+156,(vlSelf->npc__DOT__u_ALU__DOT__out),34);
    bufp->fullIData(oldp+158,((~ vlSelf->npc__DOT__ALU_B)),32);
    bufp->fullBit(oldp+159,((1U & (IData)((1ULL & (
                                                   (1ULL 
                                                    + 
                                                    ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                     + (QData)((IData)(
                                                                       (~ vlSelf->npc__DOT__ALU_B))))) 
                                                   >> 0x20U))))));
    __Vtemp_h4d9162db__0[0U] = (IData)((0x1c00000000ULL 
                                        | (((QData)((IData)(vlSelf->__VdfgTmp_hb94d753f__0)) 
                                            << 0x25U) 
                                           | (QData)((IData)(
                                                             (1U 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != vlSelf->npc__DOT__u_ALU__DOT__sub_result)))))))));
    __Vtemp_h4d9162db__0[1U] = (IData)(((0x1c00000000ULL 
                                         | (((QData)((IData)(vlSelf->__VdfgTmp_hb94d753f__0)) 
                                             << 0x25U) 
                                            | (QData)((IData)(
                                                              (1U 
                                                               & (~ (IData)(
                                                                            (0U 
                                                                             != vlSelf->npc__DOT__u_ALU__DOT__sub_result)))))))) 
                                        >> 0x20U));
    __Vtemp_h4d9162db__0[2U] = (0x300U | (vlSelf->__VdfgTmp_h9f3ef2dc__0 
                                          << 0xaU));
    __Vtemp_h4d9162db__0[3U] = (0x5000U | ((vlSelf->__VdfgTmp_h9827ce54__0 
                                            << 0xfU) 
                                           | (vlSelf->__VdfgTmp_h9f3ef2dc__0 
                                              >> 0x16U)));
    __Vtemp_h4d9162db__0[4U] = (0x80000U | ((vlSelf->__VdfgTmp_h9e92ca9a__0 
                                             << 0x14U) 
                                            | (vlSelf->__VdfgTmp_h9827ce54__0 
                                               >> 0x11U)));
    __Vtemp_h4d9162db__0[5U] = (0xc00000U | (((~ vlSelf->npc__DOT__ALU_A) 
                                              << 0x19U) 
                                             | (vlSelf->__VdfgTmp_h9e92ca9a__0 
                                                >> 0xcU)));
    __Vtemp_h4d9162db__0[6U] = (0x10000000U | ((vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                << 0x1eU) 
                                               | ((~ vlSelf->npc__DOT__ALU_A) 
                                                  >> 7U)));
    __Vtemp_h4d9162db__0[7U] = (((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow) 
                                 << 0x1eU) | (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                              >> 2U));
    __Vtemp_h4d9162db__0[8U] = (1U | (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                      << 3U));
    __Vtemp_h4d9162db__0[9U] = (((IData)(vlSelf->npc__DOT__u_ALU__DOT__int_Cout) 
                                 << 4U) | (((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow) 
                                            << 3U) 
                                           | (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                              >> 0x1dU)));
    bufp->fullWData(oldp+160,(__Vtemp_h4d9162db__0),296);
    bufp->fullQData(oldp+170,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+172,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+174,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+176,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+178,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+180,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+182,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+184,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+186,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),34);
    bufp->fullQData(oldp+188,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),34);
    bufp->fullQData(oldp+190,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),34);
    bufp->fullQData(oldp+192,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),34);
    bufp->fullQData(oldp+194,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),34);
    bufp->fullQData(oldp+196,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),34);
    bufp->fullQData(oldp+198,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),34);
    bufp->fullQData(oldp+200,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7]),34);
    bufp->fullQData(oldp+202,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),34);
    bufp->fullBit(oldp+204,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+205,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+206,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+207,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+208,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+209,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+210,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+211,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+212,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+213,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+214,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+215,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+216,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+217,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+218,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+219,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+220,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+221,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+222,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+223,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+224,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+225,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+226,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+227,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+228,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+229,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+230,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+231,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+232,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+233,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+234,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+235,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+236,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullBit(oldp+237,(vlSelf->clk));
    bufp->fullBit(oldp+238,(vlSelf->rst));
    bufp->fullIData(oldp+239,(vlSelf->pc),32);
    bufp->fullIData(oldp+240,(vlSelf->inst),32);
    bufp->fullIData(oldp+241,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+242,((((0x6fU == (0x7fU & vlSelf->inst)) 
                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr))
                                ? ((IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                            >> 1U)) 
                                   << 1U) : ((IData)(4U) 
                                             + vlSelf->pc))),32);
    bufp->fullCData(oldp+243,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+244,(((IData)(vlSelf->npc__DOT__stop_sim)
                                ? 0xaU : (0x1fU & (vlSelf->inst 
                                                   >> 7U)))),5);
    bufp->fullCData(oldp+245,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+246,((vlSelf->inst >> 0x19U)),7);
    bufp->fullCData(oldp+247,((0x7fU & vlSelf->inst)),7);
    bufp->fullBit(oldp+248,(((0x6fU == (0x7fU & vlSelf->inst)) 
                             | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr))));
    bufp->fullIData(oldp+249,(((0U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                ? (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)
                                : ((1U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                    ? 0U : ((2U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                             ? ((IData)(4U) 
                                                + vlSelf->pc)
                                             : 0U)))),32);
    bufp->fullIData(oldp+250,(((0U == (0x1fU & (vlSelf->inst 
                                                >> 0x14U)))
                                ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                               [(0x1fU & (vlSelf->inst 
                                          >> 0x14U))])),32);
    bufp->fullBit(oldp+251,((0x100073U == vlSelf->inst)));
    bufp->fullBit(oldp+252,((0x17U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+253,((0x37U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+254,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullIData(oldp+255,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+256,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+257,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+258,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->inst) 
                                             | ((0x800U 
                                                 & (vlSelf->inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)))))),32);
    __Vtemp_hb70f9e6e__0[0U] = (IData)((0x700000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU))) 
                                                            << 0xcU) 
                                                           | ((0xfe0U 
                                                               & (vlSelf->inst 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->inst 
                                                                    >> 7U))))))));
    __Vtemp_hb70f9e6e__0[1U] = ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                                 << 3U) | (IData)((
                                                   (0x700000000ULL 
                                                    | (QData)((IData)(
                                                                      (((- (IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x1fU))) 
                                                                        << 0xcU) 
                                                                       | ((0xfe0U 
                                                                           & (vlSelf->inst 
                                                                              >> 0x14U)) 
                                                                          | (0x1fU 
                                                                             & (vlSelf->inst 
                                                                                >> 7U))))))) 
                                                   >> 0x20U)));
    __Vtemp_hb70f9e6e__0[2U] = (0x30U | ((0xffffffc0U 
                                          & (((- (IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU))) 
                                              << 0x1aU) 
                                             | ((0x3fc0000U 
                                                 & (vlSelf->inst 
                                                    << 6U)) 
                                                | ((0x20000U 
                                                    & (vlSelf->inst 
                                                       >> 3U)) 
                                                   | (0x1ff80U 
                                                      & (vlSelf->inst 
                                                         >> 0xeU)))))) 
                                         | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                            >> 0x1dU)));
    __Vtemp_hb70f9e6e__0[3U] = (0x140U | ((0xffe00000U 
                                           & (vlSelf->inst 
                                              << 9U)) 
                                          | (0x3fU 
                                             & ((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                >> 6U))));
    __Vtemp_hb70f9e6e__0[4U] = (0x800U | ((0xff000000U 
                                           & (vlSelf->inst 
                                              << 0xcU)) 
                                          | (vlSelf->inst 
                                             >> 0x17U)));
    __Vtemp_hb70f9e6e__0[5U] = (0x3000U | (vlSelf->inst 
                                           >> 0x14U));
    __Vtemp_hb70f9e6e__0[6U] = (0x10000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                            << 0x12U));
    __Vtemp_hb70f9e6e__0[7U] = (0x40000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                            >> 0xeU));
    bufp->fullWData(oldp+259,(__Vtemp_hb70f9e6e__0),245);
    bufp->fullBit(oldp+267,(vlSelf->npc__DOT__ALU_Cin));
    bufp->fullIData(oldp+268,(7U),32);
    bufp->fullIData(oldp+269,(3U),32);
    bufp->fullCData(oldp+270,(0U),3);
    bufp->fullQData(oldp+271,(0x8418828c38ULL),42);
    bufp->fullIData(oldp+273,(1U),32);
    bufp->fullIData(oldp+274,(6U),32);
    bufp->fullIData(oldp+275,(7U),32);
    bufp->fullBit(oldp+276,(0U));
    bufp->fullIData(oldp+277,(0x2478bceU),28);
    bufp->fullIData(oldp+278,(4U),32);
    bufp->fullBit(oldp+279,(1U));
    bufp->fullIData(oldp+280,(0x3579bdfU),28);
    bufp->fullIData(oldp+281,(0x20U),32);
    bufp->fullIData(oldp+282,(1U),32);
    bufp->fullIData(oldp+283,(0x23U),32);
    bufp->fullIData(oldp+284,(2U),32);
    bufp->fullCData(oldp+285,(0U),2);
    bufp->fullQData(oldp+286,(0x110c85b5fULL),35);
    bufp->fullIData(oldp+288,(5U),32);
    bufp->fullIData(oldp+289,(8U),32);
    bufp->fullIData(oldp+290,(0x22U),32);
    bufp->fullQData(oldp+291,(0ULL),34);
    bufp->fullIData(oldp+293,(0x25U),32);
    bufp->fullIData(oldp+294,(8U),32);
}

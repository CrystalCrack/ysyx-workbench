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
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst", false,-1);
    tracep->pushNamePrefix("npc ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst", false,-1);
    tracep->declBus(c+100,"rs1", false,-1, 4,0);
    tracep->declBus(c+101,"rs2", false,-1, 4,0);
    tracep->declBus(c+102,"rd", false,-1, 4,0);
    tracep->declBus(c+103,"imm", false,-1, 31,0);
    tracep->declBus(c+104,"funct3", false,-1, 2,0);
    tracep->declBus(c+105,"funct7", false,-1, 6,0);
    tracep->declBus(c+106,"opcode", false,-1, 6,0);
    tracep->declBus(c+107,"ALU_op", false,-1, 2,0);
    tracep->declBus(c+108,"rdregsrc", false,-1, 1,0);
    tracep->declBit(c+109,"ALUsrc1", false,-1);
    tracep->declBit(c+110,"ALUsrc2", false,-1);
    tracep->declBit(c+111,"jump", false,-1);
    tracep->declBit(c+112,"wen", false,-1);
    tracep->declBus(c+113,"rf_wdata", false,-1, 31,0);
    tracep->declBus(c+114,"rf_rdata1", false,-1, 31,0);
    tracep->declBus(c+115,"rf_rdata2", false,-1, 31,0);
    tracep->declBus(c+100,"rf_raddr1", false,-1, 4,0);
    tracep->declBus(c+101,"rf_raddr2", false,-1, 4,0);
    tracep->declBus(c+116,"ALU_result", false,-1, 31,0);
    tracep->declBus(c+117,"ALU_A", false,-1, 31,0);
    tracep->declBus(c+118,"ALU_B", false,-1, 31,0);
    tracep->declBit(c+269,"ALU_Cin", false,-1);
    tracep->declBit(c+119,"ALU_zero", false,-1);
    tracep->declBit(c+120,"ALU_overflow", false,-1);
    tracep->declBit(c+121,"ALU_Cout", false,-1);
    tracep->declBit(c+122,"stop_sim", false,-1);
    tracep->declBus(c+231,"pc", false,-1, 31,0);
    tracep->declBus(c+232,"snpc", false,-1, 31,0);
    tracep->declBus(c+123,"inst", false,-1, 31,0);
    tracep->declBit(c+268,"ivalid", false,-1);
    tracep->declBus(c+270,"draddr", false,-1, 31,0);
    tracep->declBus(c+270,"dwaddr", false,-1, 31,0);
    tracep->declBus(c+270,"dwdata", false,-1, 31,0);
    tracep->declBus(c+271,"dwmask", false,-1, 7,0);
    tracep->declBus(c+272,"drdata", false,-1, 31,0);
    tracep->declBit(c+273,"dvalid", false,-1);
    tracep->declBit(c+273,"dwen", false,-1);
    tracep->pushNamePrefix("idu_inst ");
    tracep->declBus(c+123,"inst", false,-1, 31,0);
    tracep->declBus(c+100,"rs1", false,-1, 4,0);
    tracep->declBus(c+101,"rs2", false,-1, 4,0);
    tracep->declBus(c+102,"rd", false,-1, 4,0);
    tracep->declBus(c+104,"funct3", false,-1, 2,0);
    tracep->declBus(c+105,"funct7", false,-1, 6,0);
    tracep->declBus(c+106,"opcode", false,-1, 6,0);
    tracep->declBus(c+103,"imm", false,-1, 31,0);
    tracep->declBus(c+107,"ALU_op", false,-1, 2,0);
    tracep->declBus(c+108,"rdregsrc", false,-1, 1,0);
    tracep->declBit(c+109,"ALUsrc1", false,-1);
    tracep->declBit(c+110,"ALUsrc2", false,-1);
    tracep->declBit(c+111,"jump", false,-1);
    tracep->declBit(c+122,"stop_sim", false,-1);
    tracep->declBus(c+274,"NUM_OF_INST", false,-1, 31,0);
    tracep->declBus(c+124,"inst_name", false,-1, 2,0);
    tracep->declBit(c+125,"inst_is_addi", false,-1);
    tracep->declBit(c+126,"inst_is_ebreak", false,-1);
    tracep->declBit(c+127,"inst_is_auipc", false,-1);
    tracep->declBit(c+128,"inst_is_lui", false,-1);
    tracep->declBit(c+129,"inst_is_jal", false,-1);
    tracep->declBit(c+130,"inst_is_jalr", false,-1);
    tracep->declBit(c+131,"inst_is_sw", false,-1);
    tracep->declBus(c+132,"immI", false,-1, 31,0);
    tracep->declBus(c+133,"immU", false,-1, 31,0);
    tracep->declBus(c+134,"immS", false,-1, 31,0);
    tracep->declBus(c+135,"immB", false,-1, 31,0);
    tracep->declBus(c+136,"immJ", false,-1, 31,0);
    tracep->pushNamePrefix("getALU_mode ");
    tracep->declBus(c+274,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+275,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+275,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+107,"out", false,-1, 2,0);
    tracep->declBus(c+124,"key", false,-1, 2,0);
    tracep->declBus(c+276,"default_out", false,-1, 2,0);
    tracep->declQuad(c+277,"lut", false,-1, 41,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+274,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+275,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+275,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+279,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+107,"out", false,-1, 2,0);
    tracep->declBus(c+124,"key", false,-1, 2,0);
    tracep->declBus(c+276,"default_out", false,-1, 2,0);
    tracep->declQuad(c+277,"lut", false,-1, 41,0);
    tracep->declBus(c+280,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 5,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+8+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+15+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+137,"lut_out", false,-1, 2,0);
    tracep->declBit(c+138,"hit", false,-1);
    tracep->declBus(c+281,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getALUsrc1 ");
    tracep->declBus(c+274,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+275,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+279,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+109,"out", false,-1, 0,0);
    tracep->declBus(c+124,"key", false,-1, 2,0);
    tracep->declBus(c+273,"default_out", false,-1, 0,0);
    tracep->declBus(c+282,"lut", false,-1, 27,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+274,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+275,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+279,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+279,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+109,"out", false,-1, 0,0);
    tracep->declBus(c+124,"key", false,-1, 2,0);
    tracep->declBus(c+273,"default_out", false,-1, 0,0);
    tracep->declBus(c+282,"lut", false,-1, 27,0);
    tracep->declBus(c+283,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+22+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+29+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+36+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+139,"lut_out", false,-1, 0,0);
    tracep->declBit(c+140,"hit", false,-1);
    tracep->declBus(c+281,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getALUsrc2 ");
    tracep->declBus(c+274,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+275,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+279,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+110,"out", false,-1, 0,0);
    tracep->declBus(c+124,"key", false,-1, 2,0);
    tracep->declBus(c+284,"default_out", false,-1, 0,0);
    tracep->declBus(c+285,"lut", false,-1, 27,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+274,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+275,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+279,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+279,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+110,"out", false,-1, 0,0);
    tracep->declBus(c+124,"key", false,-1, 2,0);
    tracep->declBus(c+284,"default_out", false,-1, 0,0);
    tracep->declBus(c+285,"lut", false,-1, 27,0);
    tracep->declBus(c+283,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+43+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+50+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+57+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+141,"lut_out", false,-1, 0,0);
    tracep->declBit(c+142,"hit", false,-1);
    tracep->declBus(c+281,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getimm ");
    tracep->declBus(c+274,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+275,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+286,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+103,"out", false,-1, 31,0);
    tracep->declBus(c+124,"key", false,-1, 2,0);
    tracep->declBus(c+287,"default_out", false,-1, 31,0);
    tracep->declArray(c+143,"lut", false,-1, 244,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+274,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+275,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+286,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+279,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+103,"out", false,-1, 31,0);
    tracep->declBus(c+124,"key", false,-1, 2,0);
    tracep->declBus(c+287,"default_out", false,-1, 31,0);
    tracep->declArray(c+143,"lut", false,-1, 244,0);
    tracep->declBus(c+288,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+151+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+64+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+165+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+172,"lut_out", false,-1, 31,0);
    tracep->declBit(c+173,"hit", false,-1);
    tracep->declBus(c+281,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getrdregsrc ");
    tracep->declBus(c+274,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+275,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+289,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+108,"out", false,-1, 1,0);
    tracep->declBus(c+124,"key", false,-1, 2,0);
    tracep->declBus(c+290,"default_out", false,-1, 1,0);
    tracep->declQuad(c+291,"lut", false,-1, 34,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+274,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+275,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+289,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+279,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+108,"out", false,-1, 1,0);
    tracep->declBus(c+124,"key", false,-1, 2,0);
    tracep->declBus(c+290,"default_out", false,-1, 1,0);
    tracep->declQuad(c+291,"lut", false,-1, 34,0);
    tracep->declBus(c+293,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+71+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+78+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+85+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+174,"lut_out", false,-1, 1,0);
    tracep->declBit(c+175,"hit", false,-1);
    tracep->declBus(c+281,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("inst_mem ");
    tracep->declBus(c+231,"raddr", false,-1, 31,0);
    tracep->declBus(c+270,"waddr", false,-1, 31,0);
    tracep->declBus(c+270,"wdata", false,-1, 31,0);
    tracep->declBus(c+271,"wmask", false,-1, 7,0);
    tracep->declBit(c+273,"wen", false,-1);
    tracep->declBit(c+268,"valid", false,-1);
    tracep->declBus(c+123,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ALU ");
    tracep->declBus(c+107,"mode", false,-1, 2,0);
    tracep->declBus(c+117,"A", false,-1, 31,0);
    tracep->declBus(c+118,"B", false,-1, 31,0);
    tracep->declBit(c+269,"Cin", false,-1);
    tracep->declBit(c+119,"zero", false,-1);
    tracep->declBit(c+120,"overflow", false,-1);
    tracep->declBit(c+121,"Cout", false,-1);
    tracep->declBus(c+116,"result", false,-1, 31,0);
    tracep->declBit(c+176,"add_overflow", false,-1);
    tracep->declBit(c+177,"sub_overflow", false,-1);
    tracep->declBit(c+178,"int_Cout", false,-1);
    tracep->declBus(c+179,"add_result", false,-1, 31,0);
    tracep->declBus(c+180,"sub_result", false,-1, 31,0);
    tracep->declQuad(c+181,"out", false,-1, 33,0);
    tracep->pushNamePrefix("adder_inst ");
    tracep->declBus(c+117,"A", false,-1, 31,0);
    tracep->declBus(c+118,"B", false,-1, 31,0);
    tracep->declBit(c+269,"Cin", false,-1);
    tracep->declBus(c+179,"sum", false,-1, 31,0);
    tracep->declBit(c+178,"Cout", false,-1);
    tracep->declBit(c+176,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub_inst ");
    tracep->declBus(c+117,"A", false,-1, 31,0);
    tracep->declBus(c+183,"B", false,-1, 31,0);
    tracep->declBit(c+284,"Cin", false,-1);
    tracep->declBus(c+180,"sum", false,-1, 31,0);
    tracep->declBit(c+184,"Cout", false,-1);
    tracep->declBit(c+177,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_MuxKeyWithDefault ");
    tracep->declBus(c+294,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+275,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+295,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+181,"out", false,-1, 33,0);
    tracep->declBus(c+107,"key", false,-1, 2,0);
    tracep->declQuad(c+296,"default_out", false,-1, 33,0);
    tracep->declArray(c+185,"lut", false,-1, 295,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+294,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+275,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+295,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+279,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+181,"out", false,-1, 33,0);
    tracep->declBus(c+107,"key", false,-1, 2,0);
    tracep->declQuad(c+296,"default_out", false,-1, 33,0);
    tracep->declArray(c+185,"lut", false,-1, 295,0);
    tracep->declBus(c+298,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+195+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+92+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+211+i*2,"data_list", true,(i+0), 33,0);
    }
    tracep->declQuad(c+227,"lut_out", false,-1, 33,0);
    tracep->declBit(c+229,"hit", false,-1);
    tracep->declBus(c+299,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_PC ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst", false,-1);
    tracep->declBit(c+111,"jump", false,-1);
    tracep->declBus(c+116,"ALU_result", false,-1, 31,0);
    tracep->declBus(c+231,"pc", false,-1, 31,0);
    tracep->declBus(c+232,"snpc", false,-1, 31,0);
    tracep->declBus(c+230,"dnpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+293,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+286,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst", false,-1);
    tracep->declBus(c+113,"wdata", false,-1, 31,0);
    tracep->declBus(c+102,"waddr", false,-1, 4,0);
    tracep->declBit(c+112,"wen", false,-1);
    tracep->declBus(c+100,"raddr1", false,-1, 4,0);
    tracep->declBus(c+101,"raddr2", false,-1, 4,0);
    tracep->declBus(c+114,"rdata1", false,-1, 31,0);
    tracep->declBus(c+115,"rdata2", false,-1, 31,0);
    tracep->declBit(c+284,"ren", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+233+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+265,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_memory ");
    tracep->declBus(c+270,"raddr", false,-1, 31,0);
    tracep->declBus(c+270,"waddr", false,-1, 31,0);
    tracep->declBus(c+270,"wdata", false,-1, 31,0);
    tracep->declBus(c+271,"wmask", false,-1, 7,0);
    tracep->declBit(c+273,"wen", false,-1);
    tracep->declBit(c+273,"valid", false,-1);
    tracep->declBus(c+272,"rdata", false,-1, 31,0);
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
    VlWide<8>/*255:0*/ __Vtemp_h0eccaa97__0;
    VlWide<10>/*319:0*/ __Vtemp_h3fdb5aa9__0;
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
    bufp->fullCData(oldp+101,((0x1fU & (vlSelf->npc__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+102,(((IData)(vlSelf->npc__DOT__stop_sim)
                                ? 0xaU : (0x1fU & (vlSelf->npc__DOT__inst 
                                                   >> 7U)))),5);
    bufp->fullIData(oldp+103,(vlSelf->npc__DOT__imm),32);
    bufp->fullCData(oldp+104,((7U & (vlSelf->npc__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+105,((vlSelf->npc__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+106,((0x7fU & vlSelf->npc__DOT__inst)),7);
    bufp->fullCData(oldp+107,(vlSelf->npc__DOT__ALU_op),3);
    bufp->fullCData(oldp+108,(vlSelf->npc__DOT__rdregsrc),2);
    bufp->fullBit(oldp+109,(vlSelf->npc__DOT__ALUsrc1));
    bufp->fullBit(oldp+110,(vlSelf->npc__DOT__ALUsrc2));
    bufp->fullBit(oldp+111,(((0x6fU == (0x7fU & vlSelf->npc__DOT__inst)) 
                             | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr))));
    bufp->fullBit(oldp+112,((3U != (IData)(vlSelf->npc__DOT__rdregsrc))));
    bufp->fullIData(oldp+113,(((0U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                ? (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)
                                : ((1U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                    ? 0U : ((2U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                             ? ((IData)(4U) 
                                                + vlSelf->npc__DOT__pc)
                                             : 0U)))),32);
    bufp->fullIData(oldp+114,(((0U == (IData)(vlSelf->npc__DOT__rs1))
                                ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                               [vlSelf->npc__DOT__rs1])),32);
    bufp->fullIData(oldp+115,(((0U == (0x1fU & (vlSelf->npc__DOT__inst 
                                                >> 0x14U)))
                                ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                               [(0x1fU & (vlSelf->npc__DOT__inst 
                                          >> 0x14U))])),32);
    bufp->fullIData(oldp+116,((IData)(vlSelf->npc__DOT__u_ALU__DOT__out)),32);
    bufp->fullIData(oldp+117,(vlSelf->npc__DOT__ALU_A),32);
    bufp->fullIData(oldp+118,(vlSelf->npc__DOT__ALU_B),32);
    bufp->fullBit(oldp+119,((1U & (~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))));
    bufp->fullBit(oldp+120,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+121,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                           >> 0x21U)))));
    bufp->fullBit(oldp+122,(vlSelf->npc__DOT__stop_sim));
    bufp->fullIData(oldp+123,(vlSelf->npc__DOT__inst),32);
    bufp->fullCData(oldp+124,(vlSelf->npc__DOT__idu_inst__DOT__inst_name),3);
    bufp->fullBit(oldp+125,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi));
    bufp->fullBit(oldp+126,((0x100073U == vlSelf->npc__DOT__inst)));
    bufp->fullBit(oldp+127,((0x17U == (0x7fU & vlSelf->npc__DOT__inst))));
    bufp->fullBit(oldp+128,((0x37U == (0x7fU & vlSelf->npc__DOT__inst))));
    bufp->fullBit(oldp+129,((0x6fU == (0x7fU & vlSelf->npc__DOT__inst))));
    bufp->fullBit(oldp+130,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr));
    bufp->fullBit(oldp+131,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw));
    bufp->fullIData(oldp+132,(vlSelf->npc__DOT__idu_inst__DOT__immI),32);
    bufp->fullIData(oldp+133,((0xfffff000U & vlSelf->npc__DOT__inst)),32);
    bufp->fullIData(oldp+134,((((- (IData)((vlSelf->npc__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->npc__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+135,((((- (IData)((vlSelf->npc__DOT__inst 
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
    bufp->fullIData(oldp+136,((((- (IData)((vlSelf->npc__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->npc__DOT__inst) 
                                             | ((0x800U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->npc__DOT__inst 
                                                      >> 0x14U)))))),32);
    bufp->fullCData(oldp+137,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+138,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+139,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+140,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+141,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+142,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit));
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
                                 << 3U) | (IData)((
                                                   (0x700000000ULL 
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
    bufp->fullWData(oldp+143,(__Vtemp_h0eccaa97__0),245);
    bufp->fullQData(oldp+151,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+153,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+155,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+157,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+159,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+161,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullQData(oldp+163,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list[6]),35);
    bufp->fullIData(oldp+165,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+166,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+167,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+168,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+169,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+170,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+171,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+172,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+173,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+174,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+175,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+176,(vlSelf->npc__DOT__u_ALU__DOT__add_overflow));
    bufp->fullBit(oldp+177,(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow));
    bufp->fullBit(oldp+178,(vlSelf->npc__DOT__u_ALU__DOT__int_Cout));
    bufp->fullIData(oldp+179,(vlSelf->npc__DOT__u_ALU__DOT__add_result),32);
    bufp->fullIData(oldp+180,(vlSelf->npc__DOT__u_ALU__DOT__sub_result),32);
    bufp->fullQData(oldp+181,(vlSelf->npc__DOT__u_ALU__DOT__out),34);
    bufp->fullIData(oldp+183,((~ vlSelf->npc__DOT__ALU_B)),32);
    bufp->fullBit(oldp+184,((1U & (IData)((1ULL & (
                                                   (1ULL 
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
    __Vtemp_h3fdb5aa9__0[6U] = (0x10000000U | ((vlSelf->npc__DOT__u_ALU__DOT__sub_result 
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
    bufp->fullWData(oldp+185,(__Vtemp_h3fdb5aa9__0),296);
    bufp->fullQData(oldp+195,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+197,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+199,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+201,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+203,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+205,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+207,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+209,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+211,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),34);
    bufp->fullQData(oldp+213,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),34);
    bufp->fullQData(oldp+215,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),34);
    bufp->fullQData(oldp+217,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),34);
    bufp->fullQData(oldp+219,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),34);
    bufp->fullQData(oldp+221,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),34);
    bufp->fullQData(oldp+223,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),34);
    bufp->fullQData(oldp+225,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7]),34);
    bufp->fullQData(oldp+227,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),34);
    bufp->fullBit(oldp+229,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+230,((((0x6fU == (0x7fU & vlSelf->npc__DOT__inst)) 
                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr))
                                ? ((IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                            >> 1U)) 
                                   << 1U) : ((IData)(4U) 
                                             + vlSelf->npc__DOT__pc))),32);
    bufp->fullIData(oldp+231,(vlSelf->npc__DOT__pc),32);
    bufp->fullIData(oldp+232,(((IData)(4U) + vlSelf->npc__DOT__pc)),32);
    bufp->fullIData(oldp+233,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+234,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+235,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+236,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+237,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+238,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+239,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+240,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+241,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+242,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+243,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+244,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+245,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+246,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+247,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+248,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+249,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+250,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+251,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+252,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+253,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+254,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+255,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+256,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+257,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+258,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+259,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+260,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+261,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+262,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+263,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+264,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+265,(vlSelf->npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+266,(vlSelf->clk));
    bufp->fullBit(oldp+267,(vlSelf->rst));
    bufp->fullBit(oldp+268,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullBit(oldp+269,(vlSelf->npc__DOT__ALU_Cin));
    bufp->fullIData(oldp+270,(0U),32);
    bufp->fullCData(oldp+271,(0U),8);
    bufp->fullIData(oldp+272,(0U),32);
    bufp->fullBit(oldp+273,(0U));
    bufp->fullIData(oldp+274,(7U),32);
    bufp->fullIData(oldp+275,(3U),32);
    bufp->fullCData(oldp+276,(0U),3);
    bufp->fullQData(oldp+277,(0x8418828c38ULL),42);
    bufp->fullIData(oldp+279,(1U),32);
    bufp->fullIData(oldp+280,(6U),32);
    bufp->fullIData(oldp+281,(7U),32);
    bufp->fullIData(oldp+282,(0x2478bceU),28);
    bufp->fullIData(oldp+283,(4U),32);
    bufp->fullBit(oldp+284,(1U));
    bufp->fullIData(oldp+285,(0x3579bdfU),28);
    bufp->fullIData(oldp+286,(0x20U),32);
    bufp->fullIData(oldp+287,(1U),32);
    bufp->fullIData(oldp+288,(0x23U),32);
    bufp->fullIData(oldp+289,(2U),32);
    bufp->fullCData(oldp+290,(0U),2);
    bufp->fullQData(oldp+291,(0x110c85b5fULL),35);
    bufp->fullIData(oldp+293,(5U),32);
    bufp->fullIData(oldp+294,(8U),32);
    bufp->fullIData(oldp+295,(0x22U),32);
    bufp->fullQData(oldp+296,(0ULL),34);
    bufp->fullIData(oldp+298,(0x25U),32);
    bufp->fullIData(oldp+299,(8U),32);
}

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
    tracep->declBit(c+277,"clk", false,-1);
    tracep->declBit(c+278,"rst", false,-1);
    tracep->pushNamePrefix("npc ");
    tracep->declBit(c+277,"clk", false,-1);
    tracep->declBit(c+278,"rst", false,-1);
    tracep->declBus(c+13,"rs1", false,-1, 4,0);
    tracep->declBus(c+14,"rs2", false,-1, 4,0);
    tracep->declBus(c+15,"rd", false,-1, 4,0);
    tracep->declBus(c+16,"imm", false,-1, 31,0);
    tracep->declBus(c+17,"funct3", false,-1, 2,0);
    tracep->declBus(c+18,"funct7", false,-1, 6,0);
    tracep->declBus(c+19,"opcode", false,-1, 6,0);
    tracep->declBus(c+20,"ALU_op", false,-1, 2,0);
    tracep->declBus(c+21,"rdregsrc", false,-1, 2,0);
    tracep->declBus(c+22,"cmp_type", false,-1, 1,0);
    tracep->declBit(c+23,"ALUsrc1", false,-1);
    tracep->declBus(c+24,"ALUsrc2", false,-1, 1,0);
    tracep->declBit(c+25,"jump", false,-1);
    tracep->declBit(c+26,"branch", false,-1);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->declBus(c+28,"rf_wdata", false,-1, 31,0);
    tracep->declBus(c+29,"rf_rdata1", false,-1, 31,0);
    tracep->declBus(c+30,"rf_rdata2", false,-1, 31,0);
    tracep->declBus(c+13,"rf_raddr1", false,-1, 4,0);
    tracep->declBus(c+14,"rf_raddr2", false,-1, 4,0);
    tracep->declBus(c+31,"csr_raddr", false,-1, 11,0);
    tracep->declBus(c+32,"ALU_result", false,-1, 31,0);
    tracep->declBus(c+33,"ALU_A", false,-1, 31,0);
    tracep->declBus(c+34,"ALU_B", false,-1, 31,0);
    tracep->declBit(c+280,"ALU_Cin", false,-1);
    tracep->declBit(c+35,"ALU_zero", false,-1);
    tracep->declBit(c+36,"ALU_overflow", false,-1);
    tracep->declBit(c+37,"ALU_Cout", false,-1);
    tracep->declBit(c+35,"equal", false,-1);
    tracep->declBit(c+38,"signed_less", false,-1);
    tracep->declBit(c+39,"unsigned_less", false,-1);
    tracep->declBit(c+40,"stop_sim", false,-1);
    tracep->declBus(c+220,"pc", false,-1, 31,0);
    tracep->declBus(c+221,"snpc", false,-1, 31,0);
    tracep->declBit(c+41,"dir_jump", false,-1);
    tracep->declBit(c+42,"branch_judge", false,-1);
    tracep->declBus(c+43,"inst", false,-1, 31,0);
    tracep->declBit(c+279,"ivalid", false,-1);
    tracep->declBus(c+32,"draddr", false,-1, 31,0);
    tracep->declBus(c+32,"dwaddr", false,-1, 31,0);
    tracep->declBus(c+30,"dwdata", false,-1, 31,0);
    tracep->declBus(c+44,"dwmask", false,-1, 7,0);
    tracep->declBus(c+45,"drdata", false,-1, 31,0);
    tracep->declBit(c+46,"dvalid", false,-1);
    tracep->declBit(c+47,"dwen", false,-1);
    tracep->declBus(c+48,"drdata_ext", false,-1, 31,0);
    tracep->declBus(c+49,"cmp_result", false,-1, 31,0);
    tracep->declBit(c+50,"mtvec_wen", false,-1);
    tracep->declBit(c+51,"mcause_wen", false,-1);
    tracep->declBit(c+51,"mepc_wen", false,-1);
    tracep->declBit(c+281,"mstatus_wen", false,-1);
    tracep->declBus(c+32,"mtvec_wdata", false,-1, 31,0);
    tracep->declBus(c+30,"mcause_wdata", false,-1, 31,0);
    tracep->declBus(c+220,"mepc_wdata", false,-1, 31,0);
    tracep->declBus(c+282,"mstatus_wdata", false,-1, 31,0);
    tracep->declBus(c+222,"mtvec_rdata", false,-1, 31,0);
    tracep->declBus(c+223,"mcause_rdata", false,-1, 31,0);
    tracep->declBus(c+224,"mepc_rdata", false,-1, 31,0);
    tracep->declBus(c+225,"mstatus_rdata", false,-1, 31,0);
    tracep->declBus(c+52,"target_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("data_mem ");
    tracep->declBus(c+32,"raddr", false,-1, 31,0);
    tracep->declBus(c+32,"waddr", false,-1, 31,0);
    tracep->declBus(c+30,"wdata", false,-1, 31,0);
    tracep->declBus(c+44,"wmask", false,-1, 7,0);
    tracep->declBit(c+47,"wen", false,-1);
    tracep->declBit(c+46,"valid", false,-1);
    tracep->declBus(c+45,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu_inst ");
    tracep->declBus(c+43,"inst", false,-1, 31,0);
    tracep->declBus(c+13,"rs1", false,-1, 4,0);
    tracep->declBus(c+14,"rs2", false,-1, 4,0);
    tracep->declBus(c+15,"rd", false,-1, 4,0);
    tracep->declBus(c+17,"funct3", false,-1, 2,0);
    tracep->declBus(c+18,"funct7", false,-1, 6,0);
    tracep->declBus(c+19,"opcode", false,-1, 6,0);
    tracep->declBus(c+16,"imm", false,-1, 31,0);
    tracep->declBus(c+20,"ALU_op", false,-1, 2,0);
    tracep->declBus(c+21,"rdregsrc", false,-1, 2,0);
    tracep->declBit(c+23,"ALUsrc1", false,-1);
    tracep->declBus(c+24,"ALUsrc2", false,-1, 1,0);
    tracep->declBit(c+25,"jump", false,-1);
    tracep->declBit(c+26,"branch", false,-1);
    tracep->declBus(c+22,"cmp_type", false,-1, 1,0);
    tracep->declBus(c+44,"dwmask", false,-1, 7,0);
    tracep->declBit(c+47,"dwen", false,-1);
    tracep->declBit(c+46,"dvalid", false,-1);
    tracep->declBus(c+31,"csr_raddr", false,-1, 11,0);
    tracep->declBus(c+53,"csr_wen", false,-1, 2,0);
    tracep->declBit(c+40,"stop_sim", false,-1);
    tracep->declBus(c+283,"NUM_OF_INST", false,-1, 31,0);
    tracep->declBus(c+54,"inst_name", false,-1, 5,0);
    tracep->declBit(c+55,"inst_is_addi", false,-1);
    tracep->declBit(c+56,"inst_is_ebreak", false,-1);
    tracep->declBit(c+57,"inst_is_auipc", false,-1);
    tracep->declBit(c+58,"inst_is_lui", false,-1);
    tracep->declBit(c+59,"inst_is_jal", false,-1);
    tracep->declBit(c+60,"inst_is_jalr", false,-1);
    tracep->declBit(c+61,"inst_is_sw", false,-1);
    tracep->declBit(c+62,"inst_is_lw", false,-1);
    tracep->declBit(c+63,"inst_is_add", false,-1);
    tracep->declBit(c+64,"inst_is_beq", false,-1);
    tracep->declBit(c+65,"inst_is_sltu", false,-1);
    tracep->declBit(c+66,"inst_is_xor", false,-1);
    tracep->declBit(c+67,"inst_is_or", false,-1);
    tracep->declBit(c+68,"inst_is_sltiu", false,-1);
    tracep->declBit(c+69,"inst_is_bne", false,-1);
    tracep->declBit(c+70,"inst_is_lbu", false,-1);
    tracep->declBit(c+71,"inst_is_sb", false,-1);
    tracep->declBit(c+72,"inst_is_sub", false,-1);
    tracep->declBit(c+73,"inst_is_srai", false,-1);
    tracep->declBit(c+74,"inst_is_andi", false,-1);
    tracep->declBit(c+75,"inst_is_sll", false,-1);
    tracep->declBit(c+76,"inst_is_and", false,-1);
    tracep->declBit(c+77,"inst_is_sh", false,-1);
    tracep->declBit(c+78,"inst_is_xori", false,-1);
    tracep->declBit(c+79,"inst_is_bge", false,-1);
    tracep->declBit(c+80,"inst_is_bgeu", false,-1);
    tracep->declBit(c+81,"inst_is_slli", false,-1);
    tracep->declBit(c+82,"inst_is_blt", false,-1);
    tracep->declBit(c+83,"inst_is_bltu", false,-1);
    tracep->declBit(c+84,"inst_is_slt", false,-1);
    tracep->declBit(c+85,"inst_is_lh", false,-1);
    tracep->declBit(c+86,"inst_is_lhu", false,-1);
    tracep->declBit(c+87,"inst_is_srl", false,-1);
    tracep->declBit(c+88,"inst_is_srli", false,-1);
    tracep->declBit(c+89,"inst_is_sra", false,-1);
    tracep->declBit(c+90,"inst_is_lb", false,-1);
    tracep->declBit(c+91,"inst_is_slti", false,-1);
    tracep->declBit(c+92,"inst_is_ori", false,-1);
    tracep->declBit(c+93,"inst_is_csrrw", false,-1);
    tracep->declBit(c+94,"inst_is_csrrs", false,-1);
    tracep->declBit(c+95,"inst_is_ecall", false,-1);
    tracep->declBit(c+96,"inst_is_mret", false,-1);
    tracep->declBus(c+97,"immI", false,-1, 31,0);
    tracep->declBus(c+98,"immU", false,-1, 31,0);
    tracep->declBus(c+99,"immS", false,-1, 31,0);
    tracep->declBus(c+100,"immB", false,-1, 31,0);
    tracep->declBus(c+101,"immJ", false,-1, 31,0);
    tracep->pushNamePrefix("getALU_mode ");
    tracep->declBus(c+283,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+284,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+285,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+20,"out", false,-1, 2,0);
    tracep->declBus(c+54,"key", false,-1, 5,0);
    tracep->declBus(c+286,"default_out", false,-1, 2,0);
    tracep->declArray(c+287,"lut", false,-1, 386,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+283,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+284,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+285,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+300,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+20,"out", false,-1, 2,0);
    tracep->declBus(c+54,"key", false,-1, 5,0);
    tracep->declBus(c+286,"default_out", false,-1, 2,0);
    tracep->declArray(c+287,"lut", false,-1, 386,0);
    tracep->declBus(c+301,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+102,"lut_out", false,-1, 2,0);
    tracep->declBit(c+103,"hit", false,-1);
    tracep->declBus(c+302,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getALUsrc1 ");
    tracep->declBus(c+283,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+284,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+300,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+23,"out", false,-1, 0,0);
    tracep->declBus(c+54,"key", false,-1, 5,0);
    tracep->declBus(c+281,"default_out", false,-1, 0,0);
    tracep->declArray(c+303,"lut", false,-1, 300,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+283,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+284,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+300,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+300,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+23,"out", false,-1, 0,0);
    tracep->declBus(c+54,"key", false,-1, 5,0);
    tracep->declBus(c+281,"default_out", false,-1, 0,0);
    tracep->declArray(c+303,"lut", false,-1, 300,0);
    tracep->declBus(c+313,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+104,"lut_out", false,-1, 0,0);
    tracep->declBit(c+105,"hit", false,-1);
    tracep->declBus(c+302,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getALUsrc2 ");
    tracep->declBus(c+283,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+284,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+314,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+24,"out", false,-1, 1,0);
    tracep->declBus(c+54,"key", false,-1, 5,0);
    tracep->declBus(c+315,"default_out", false,-1, 1,0);
    tracep->declArray(c+316,"lut", false,-1, 343,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+283,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+284,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+314,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+300,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+24,"out", false,-1, 1,0);
    tracep->declBus(c+54,"key", false,-1, 5,0);
    tracep->declBus(c+315,"default_out", false,-1, 1,0);
    tracep->declArray(c+316,"lut", false,-1, 343,0);
    tracep->declBus(c+327,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+106,"lut_out", false,-1, 1,0);
    tracep->declBit(c+107,"hit", false,-1);
    tracep->declBus(c+302,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getimm ");
    tracep->declBus(c+283,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+284,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+328,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+16,"out", false,-1, 31,0);
    tracep->declBus(c+54,"key", false,-1, 5,0);
    tracep->declBus(c+329,"default_out", false,-1, 31,0);
    tracep->declArray(c+108,"lut", false,-1, 1633,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+283,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+284,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+328,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+300,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+16,"out", false,-1, 31,0);
    tracep->declBus(c+54,"key", false,-1, 5,0);
    tracep->declBus(c+329,"default_out", false,-1, 31,0);
    tracep->declArray(c+108,"lut", false,-1, 1633,0);
    tracep->declBus(c+330,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+160,"lut_out", false,-1, 31,0);
    tracep->declBit(c+161,"hit", false,-1);
    tracep->declBus(c+302,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getrdregsrc ");
    tracep->declBus(c+283,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+284,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+285,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+21,"out", false,-1, 2,0);
    tracep->declBus(c+54,"key", false,-1, 5,0);
    tracep->declBus(c+286,"default_out", false,-1, 2,0);
    tracep->declArray(c+331,"lut", false,-1, 386,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+283,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+284,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+285,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+300,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+21,"out", false,-1, 2,0);
    tracep->declBus(c+54,"key", false,-1, 5,0);
    tracep->declBus(c+286,"default_out", false,-1, 2,0);
    tracep->declArray(c+331,"lut", false,-1, 386,0);
    tracep->declBus(c+301,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+162,"lut_out", false,-1, 2,0);
    tracep->declBit(c+163,"hit", false,-1);
    tracep->declBus(c+302,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("inst_mem ");
    tracep->declBus(c+220,"raddr", false,-1, 31,0);
    tracep->declBus(c+344,"waddr", false,-1, 31,0);
    tracep->declBus(c+344,"wdata", false,-1, 31,0);
    tracep->declBus(c+345,"wmask", false,-1, 7,0);
    tracep->declBit(c+281,"wen", false,-1);
    tracep->declBit(c+279,"valid", false,-1);
    tracep->declBus(c+43,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause ");
    tracep->declBus(c+328,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+344,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+277,"clk", false,-1);
    tracep->declBit(c+278,"rst", false,-1);
    tracep->declBus(c+30,"din", false,-1, 31,0);
    tracep->declBus(c+223,"dout", false,-1, 31,0);
    tracep->declBit(c+51,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc ");
    tracep->declBus(c+328,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+344,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+277,"clk", false,-1);
    tracep->declBit(c+278,"rst", false,-1);
    tracep->declBus(c+220,"din", false,-1, 31,0);
    tracep->declBus(c+224,"dout", false,-1, 31,0);
    tracep->declBit(c+51,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus ");
    tracep->declBus(c+328,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+282,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+277,"clk", false,-1);
    tracep->declBit(c+278,"rst", false,-1);
    tracep->declBus(c+282,"din", false,-1, 31,0);
    tracep->declBus(c+225,"dout", false,-1, 31,0);
    tracep->declBit(c+281,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec ");
    tracep->declBus(c+328,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+344,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+277,"clk", false,-1);
    tracep->declBit(c+278,"rst", false,-1);
    tracep->declBus(c+32,"din", false,-1, 31,0);
    tracep->declBus(c+222,"dout", false,-1, 31,0);
    tracep->declBit(c+50,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sel_csr ");
    tracep->declBus(c+346,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+347,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+328,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+52,"out", false,-1, 31,0);
    tracep->declBus(c+31,"key", false,-1, 11,0);
    tracep->declBus(c+348,"default_out", false,-1, 31,0);
    tracep->declArray(c+226,"lut", false,-1, 175,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+346,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+347,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+328,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+300,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+52,"out", false,-1, 31,0);
    tracep->declBus(c+31,"key", false,-1, 11,0);
    tracep->declBus(c+348,"default_out", false,-1, 31,0);
    tracep->declArray(c+226,"lut", false,-1, 175,0);
    tracep->declBus(c+349,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+232+i*2,"pair_list", true,(i+0), 43,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+240+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+164,"lut_out", false,-1, 31,0);
    tracep->declBit(c+165,"hit", false,-1);
    tracep->declBus(c+350,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ALU ");
    tracep->declBus(c+20,"mode", false,-1, 2,0);
    tracep->declBus(c+33,"A", false,-1, 31,0);
    tracep->declBus(c+34,"B", false,-1, 31,0);
    tracep->declBit(c+280,"Cin", false,-1);
    tracep->declBit(c+35,"zero", false,-1);
    tracep->declBit(c+36,"overflow", false,-1);
    tracep->declBit(c+37,"Cout", false,-1);
    tracep->declBus(c+32,"result", false,-1, 31,0);
    tracep->declBit(c+166,"add_overflow", false,-1);
    tracep->declBit(c+167,"sub_overflow", false,-1);
    tracep->declBit(c+168,"add_Cout", false,-1);
    tracep->declBit(c+169,"sub_Cout", false,-1);
    tracep->declBus(c+170,"add_result", false,-1, 31,0);
    tracep->declBus(c+171,"sub_result", false,-1, 31,0);
    tracep->declQuad(c+172,"out", false,-1, 32,0);
    tracep->pushNamePrefix("adder_inst ");
    tracep->declBus(c+33,"A", false,-1, 31,0);
    tracep->declBus(c+34,"B", false,-1, 31,0);
    tracep->declBit(c+280,"Cin", false,-1);
    tracep->declBus(c+170,"sum", false,-1, 31,0);
    tracep->declBit(c+168,"Cout", false,-1);
    tracep->declBit(c+166,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub_inst ");
    tracep->declBus(c+33,"A", false,-1, 31,0);
    tracep->declBus(c+174,"B", false,-1, 31,0);
    tracep->declBit(c+351,"Cin", false,-1);
    tracep->declBus(c+171,"sum", false,-1, 31,0);
    tracep->declBit(c+169,"Cout", false,-1);
    tracep->declBit(c+167,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_MuxKeyWithDefault ");
    tracep->declBus(c+327,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+285,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+352,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+172,"out", false,-1, 32,0);
    tracep->declBus(c+20,"key", false,-1, 2,0);
    tracep->declQuad(c+353,"default_out", false,-1, 32,0);
    tracep->declArray(c+175,"lut", false,-1, 287,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+327,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+285,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+352,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+300,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+172,"out", false,-1, 32,0);
    tracep->declBus(c+20,"key", false,-1, 2,0);
    tracep->declQuad(c+353,"default_out", false,-1, 32,0);
    tracep->declArray(c+175,"lut", false,-1, 287,0);
    tracep->declBus(c+355,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+184+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+200+i*2,"data_list", true,(i+0), 32,0);
    }
    tracep->declQuad(c+216,"lut_out", false,-1, 32,0);
    tracep->declBit(c+218,"hit", false,-1);
    tracep->declBus(c+356,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_PC ");
    tracep->declBit(c+277,"clk", false,-1);
    tracep->declBit(c+278,"rst", false,-1);
    tracep->declBit(c+41,"jump", false,-1);
    tracep->declBus(c+32,"ALU_result", false,-1, 31,0);
    tracep->declBus(c+220,"pc", false,-1, 31,0);
    tracep->declBus(c+221,"snpc", false,-1, 31,0);
    tracep->declBus(c+219,"dnpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+357,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+328,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+277,"clk", false,-1);
    tracep->declBit(c+278,"rst", false,-1);
    tracep->declBus(c+28,"wdata", false,-1, 31,0);
    tracep->declBus(c+15,"waddr", false,-1, 4,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->declBus(c+13,"raddr1", false,-1, 4,0);
    tracep->declBus(c+14,"raddr2", false,-1, 4,0);
    tracep->declBus(c+29,"rdata1", false,-1, 31,0);
    tracep->declBus(c+30,"rdata2", false,-1, 31,0);
    tracep->declBit(c+351,"ren", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+244+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+276,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
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

extern const VlWide<13>/*415:0*/ Vnpc__ConstPool__CONST_he1f74062_0;
extern const VlWide<10>/*319:0*/ Vnpc__ConstPool__CONST_h8b049ae1_0;
extern const VlWide<11>/*351:0*/ Vnpc__ConstPool__CONST_h845ddab0_0;
extern const VlWide<13>/*415:0*/ Vnpc__ConstPool__CONST_h82d8b3ba_0;

VL_ATTR_COLD void Vnpc___024root__trace_full_sub_0(Vnpc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<9>/*287:0*/ __Vtemp_h6df3bf81__0;
    VlWide<6>/*191:0*/ __Vtemp_ha175cb4c__0;
    // Body
    bufp->fullSData(oldp+1,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+2,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+3,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+4,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list[3]),12);
    bufp->fullCData(oldp+5,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+6,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+7,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+8,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+9,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+10,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+11,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+12,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+13,(vlSelf->npc__DOT__rs1),5);
    bufp->fullCData(oldp+14,(vlSelf->npc__DOT__rs2),5);
    bufp->fullCData(oldp+15,(((IData)(vlSelf->npc__DOT__stop_sim)
                               ? 0xaU : (0x1fU & (vlSelf->npc__DOT__inst 
                                                  >> 7U)))),5);
    bufp->fullIData(oldp+16,(vlSelf->npc__DOT__imm),32);
    bufp->fullCData(oldp+17,((7U & (vlSelf->npc__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+18,((vlSelf->npc__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+19,((0x7fU & vlSelf->npc__DOT__inst)),7);
    bufp->fullCData(oldp+20,(vlSelf->npc__DOT__ALU_op),3);
    bufp->fullCData(oldp+21,(vlSelf->npc__DOT__rdregsrc),3);
    bufp->fullCData(oldp+22,(vlSelf->npc__DOT__cmp_type),2);
    bufp->fullBit(oldp+23,(vlSelf->npc__DOT__ALUsrc1));
    bufp->fullCData(oldp+24,(vlSelf->npc__DOT__ALUsrc2),2);
    bufp->fullBit(oldp+25,(((0x6fU == (0x7fU & vlSelf->npc__DOT__inst)) 
                            | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr) 
                               | (IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hab5d87c6__0)))));
    bufp->fullBit(oldp+26,(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                            | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                               | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                  | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                     | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                        | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu))))))));
    bufp->fullBit(oldp+27,((4U != (IData)(vlSelf->npc__DOT__rdregsrc))));
    bufp->fullIData(oldp+28,(((0U == (IData)(vlSelf->npc__DOT__rdregsrc))
                               ? (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)
                               : ((1U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                   ? ((0U == (7U & 
                                              (vlSelf->npc__DOT__inst 
                                               >> 0xcU)))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->npc__DOT__drdata 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & vlSelf->npc__DOT__drdata))
                                       : ((4U == (7U 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 0xcU)))
                                           ? (0xffU 
                                              & vlSelf->npc__DOT__drdata)
                                           : ((1U == 
                                               (7U 
                                                & (vlSelf->npc__DOT__inst 
                                                   >> 0xcU)))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->npc__DOT__drdata 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->npc__DOT__drdata))
                                               : ((5U 
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
                                           ? ((0U == (IData)(vlSelf->npc__DOT__cmp_type))
                                               ? (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))
                                               : ((1U 
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
                                           : ((5U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                               ? vlSelf->npc__DOT__target_rdata
                                               : 0U)))))),32);
    bufp->fullIData(oldp+29,(vlSelf->npc__DOT__rf_rdata1),32);
    bufp->fullIData(oldp+30,(vlSelf->npc__DOT__rf_rdata2),32);
    bufp->fullSData(oldp+31,(vlSelf->npc__DOT__csr_raddr),12);
    bufp->fullIData(oldp+32,((IData)(vlSelf->npc__DOT__u_ALU__DOT__out)),32);
    bufp->fullIData(oldp+33,(vlSelf->npc__DOT__ALU_A),32);
    bufp->fullIData(oldp+34,(vlSelf->npc__DOT__ALU_B),32);
    bufp->fullBit(oldp+35,((1U & (~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))));
    bufp->fullBit(oldp+36,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+37,((1U & ((0U == (IData)(vlSelf->npc__DOT__ALU_op))
                                   ? (IData)((1ULL 
                                              & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                  + 
                                                  ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                   + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                 >> 0x20U)))
                                   : ((1U == (IData)(vlSelf->npc__DOT__ALU_op)) 
                                      & (IData)((1ULL 
                                                 & ((1ULL 
                                                     + 
                                                     ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                      + (QData)((IData)(
                                                                        (~ vlSelf->npc__DOT__ALU_B))))) 
                                                    >> 0x20U))))))));
    bufp->fullBit(oldp+38,((1U & ((IData)((0x80000000ULL 
                                           == (0x180000000ULL 
                                               & vlSelf->npc__DOT__u_ALU__DOT__out))) 
                                  | (IData)((0x100000000ULL 
                                             == (0x180000000ULL 
                                                 & vlSelf->npc__DOT__u_ALU__DOT__out)))))));
    bufp->fullBit(oldp+39,((1U & (~ ((0U == (IData)(vlSelf->npc__DOT__ALU_op))
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
                                                       >> 0x20U)))))))));
    bufp->fullBit(oldp+40,(vlSelf->npc__DOT__stop_sim));
    bufp->fullBit(oldp+41,((((0x6fU == (0x7fU & vlSelf->npc__DOT__inst)) 
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
                                                                 < vlSelf->npc__DOT__rf_rdata2))))))))))));
    bufp->fullBit(oldp+42,((((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                             | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                   | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                      | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                         | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                            & ((0U == (7U & (vlSelf->npc__DOT__inst 
                                             >> 0xcU)))
                                ? (vlSelf->npc__DOT__rf_rdata1 
                                   == vlSelf->npc__DOT__rf_rdata2)
                                : ((1U == (7U & (vlSelf->npc__DOT__inst 
                                                 >> 0xcU)))
                                    ? (vlSelf->npc__DOT__rf_rdata1 
                                       != vlSelf->npc__DOT__rf_rdata2)
                                    : ((5U == (7U & 
                                               (vlSelf->npc__DOT__inst 
                                                >> 0xcU)))
                                        ? VL_GTES_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                        : ((7U == (7U 
                                                   & (vlSelf->npc__DOT__inst 
                                                      >> 0xcU)))
                                            ? (vlSelf->npc__DOT__rf_rdata1 
                                               >= vlSelf->npc__DOT__rf_rdata2)
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 0xcU)))
                                                ? VL_LTS_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                                : (IData)(
                                                          ((0x6000U 
                                                            == 
                                                            (0x7000U 
                                                             & vlSelf->npc__DOT__inst)) 
                                                           & (vlSelf->npc__DOT__rf_rdata1 
                                                              < vlSelf->npc__DOT__rf_rdata2)))))))))));
    bufp->fullIData(oldp+43,(vlSelf->npc__DOT__inst),32);
    bufp->fullCData(oldp+44,(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw)
                               ? 0xfU : ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb)
                                          ? 1U : ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh)
                                                   ? 3U
                                                   : 0U)))),8);
    bufp->fullIData(oldp+45,(vlSelf->npc__DOT__drdata),32);
    bufp->fullBit(oldp+46,(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw) 
                            | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw) 
                               | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu) 
                                  | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb) 
                                     | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh) 
                                        | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh) 
                                           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu) 
                                              | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lb))))))))));
    bufp->fullBit(oldp+47,(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw) 
                            | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb) 
                               | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh)))));
    bufp->fullIData(oldp+48,(((0U == (7U & (vlSelf->npc__DOT__inst 
                                            >> 0xcU)))
                               ? (((- (IData)((1U & 
                                               (vlSelf->npc__DOT__drdata 
                                                >> 7U)))) 
                                   << 8U) | (0xffU 
                                             & vlSelf->npc__DOT__drdata))
                               : ((4U == (7U & (vlSelf->npc__DOT__inst 
                                                >> 0xcU)))
                                   ? (0xffU & vlSelf->npc__DOT__drdata)
                                   : ((1U == (7U & 
                                              (vlSelf->npc__DOT__inst 
                                               >> 0xcU)))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->npc__DOT__drdata 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelf->npc__DOT__drdata))
                                       : ((5U == (7U 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 0xcU)))
                                           ? (0xffffU 
                                              & vlSelf->npc__DOT__drdata)
                                           : vlSelf->npc__DOT__drdata))))),32);
    bufp->fullIData(oldp+49,(((0U == (IData)(vlSelf->npc__DOT__cmp_type))
                               ? (1U & (~ (IData)((0U 
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
                                       : (1U & (~ (
                                                   (0U 
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
    bufp->fullBit(oldp+50,(vlSelf->npc__DOT__mtvec_wen));
    bufp->fullBit(oldp+51,(vlSelf->npc__DOT__mcause_wen));
    bufp->fullIData(oldp+52,(vlSelf->npc__DOT__target_rdata),32);
    bufp->fullCData(oldp+53,(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrw)
                               ? 4U : ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrs)
                                        ? 4U : ((0x73U 
                                                 == vlSelf->npc__DOT__inst)
                                                 ? 3U
                                                 : 0U)))),3);
    bufp->fullCData(oldp+54,(vlSelf->npc__DOT__idu_inst__DOT__inst_name),6);
    bufp->fullBit(oldp+55,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi));
    bufp->fullBit(oldp+56,((0x100073U == vlSelf->npc__DOT__inst)));
    bufp->fullBit(oldp+57,((0x17U == (0x7fU & vlSelf->npc__DOT__inst))));
    bufp->fullBit(oldp+58,((0x37U == (0x7fU & vlSelf->npc__DOT__inst))));
    bufp->fullBit(oldp+59,((0x6fU == (0x7fU & vlSelf->npc__DOT__inst))));
    bufp->fullBit(oldp+60,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr));
    bufp->fullBit(oldp+61,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw));
    bufp->fullBit(oldp+62,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw));
    bufp->fullBit(oldp+63,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_add));
    bufp->fullBit(oldp+64,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq));
    bufp->fullBit(oldp+65,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu));
    bufp->fullBit(oldp+66,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xor));
    bufp->fullBit(oldp+67,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_or));
    bufp->fullBit(oldp+68,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu));
    bufp->fullBit(oldp+69,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne));
    bufp->fullBit(oldp+70,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu));
    bufp->fullBit(oldp+71,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb));
    bufp->fullBit(oldp+72,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sub));
    bufp->fullBit(oldp+73,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srai));
    bufp->fullBit(oldp+74,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_andi));
    bufp->fullBit(oldp+75,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sll));
    bufp->fullBit(oldp+76,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_and));
    bufp->fullBit(oldp+77,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh));
    bufp->fullBit(oldp+78,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xori));
    bufp->fullBit(oldp+79,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge));
    bufp->fullBit(oldp+80,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu));
    bufp->fullBit(oldp+81,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slli));
    bufp->fullBit(oldp+82,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt));
    bufp->fullBit(oldp+83,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu));
    bufp->fullBit(oldp+84,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt));
    bufp->fullBit(oldp+85,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh));
    bufp->fullBit(oldp+86,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu));
    bufp->fullBit(oldp+87,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl));
    bufp->fullBit(oldp+88,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srli));
    bufp->fullBit(oldp+89,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sra));
    bufp->fullBit(oldp+90,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lb));
    bufp->fullBit(oldp+91,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slti));
    bufp->fullBit(oldp+92,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_ori));
    bufp->fullBit(oldp+93,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrw));
    bufp->fullBit(oldp+94,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrs));
    bufp->fullBit(oldp+95,((0x73U == vlSelf->npc__DOT__inst)));
    bufp->fullBit(oldp+96,((0x30200073U == vlSelf->npc__DOT__inst)));
    bufp->fullIData(oldp+97,(vlSelf->npc__DOT__idu_inst__DOT__immI),32);
    bufp->fullIData(oldp+98,((0xfffff000U & vlSelf->npc__DOT__inst)),32);
    bufp->fullIData(oldp+99,(vlSelf->npc__DOT__idu_inst__DOT__immS),32);
    bufp->fullIData(oldp+100,(vlSelf->npc__DOT__idu_inst__DOT__immB),32);
    bufp->fullIData(oldp+101,(vlSelf->npc__DOT__idu_inst__DOT__immJ),32);
    bufp->fullCData(oldp+102,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+103,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+104,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+105,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+106,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+107,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit));
    bufp->fullWData(oldp+108,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut),1634);
    bufp->fullIData(oldp+160,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+161,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+162,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+163,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+164,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+165,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+166,(vlSelf->npc__DOT__u_ALU__DOT__add_overflow));
    bufp->fullBit(oldp+167,(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow));
    bufp->fullBit(oldp+168,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                    + 
                                                    ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                     + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                   >> 0x20U))))));
    bufp->fullBit(oldp+169,((1U & (IData)((1ULL & (
                                                   (1ULL 
                                                    + 
                                                    ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                     + (QData)((IData)(
                                                                       (~ vlSelf->npc__DOT__ALU_B))))) 
                                                   >> 0x20U))))));
    bufp->fullIData(oldp+170,(vlSelf->npc__DOT__u_ALU__DOT__add_result),32);
    bufp->fullIData(oldp+171,(vlSelf->npc__DOT__u_ALU__DOT__sub_result),32);
    bufp->fullQData(oldp+172,(vlSelf->npc__DOT__u_ALU__DOT__out),33);
    bufp->fullIData(oldp+174,((~ vlSelf->npc__DOT__ALU_B)),32);
    __Vtemp_h6df3bf81__0[0U] = (IData)((0xe00000000ULL 
                                        | (QData)((IData)(vlSelf->__VdfgTmp_hbb922a12__0))));
    __Vtemp_h6df3bf81__0[1U] = ((vlSelf->__VdfgTmp_hbb88d747__0 
                                 << 4U) | (IData)((
                                                   (0xe00000000ULL 
                                                    | (QData)((IData)(vlSelf->__VdfgTmp_hbb922a12__0))) 
                                                   >> 0x20U)));
    __Vtemp_h6df3bf81__0[2U] = (0xc0U | ((vlSelf->__VdfgTmp_hbed6fb89__0 
                                          << 8U) | 
                                         (vlSelf->__VdfgTmp_hbb88d747__0 
                                          >> 0x1cU)));
    __Vtemp_h6df3bf81__0[3U] = (0xa00U | ((vlSelf->__VdfgTmp_h82550779__0 
                                           << 0xcU) 
                                          | (vlSelf->__VdfgTmp_hbed6fb89__0 
                                             >> 0x18U)));
    __Vtemp_h6df3bf81__0[4U] = (0x8000U | ((vlSelf->__VdfgTmp_h815801cd__0 
                                            << 0x10U) 
                                           | (vlSelf->__VdfgTmp_h82550779__0 
                                              >> 0x14U)));
    __Vtemp_h6df3bf81__0[5U] = (0x60000U | ((vlSelf->__VdfgTmp_hbb862aa7__0 
                                             << 0x14U) 
                                            | (vlSelf->__VdfgTmp_h815801cd__0 
                                               >> 0x10U)));
    __Vtemp_h6df3bf81__0[6U] = (0x400000U | ((vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                              << 0x18U) 
                                             | (vlSelf->__VdfgTmp_hbb862aa7__0 
                                                >> 0xcU)));
    __Vtemp_h6df3bf81__0[7U] = (0x2000000U | ((vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                               << 0x1cU) 
                                              | (((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow) 
                                                  << 0x18U) 
                                                 | (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                    >> 8U))));
    __Vtemp_h6df3bf81__0[8U] = (((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow) 
                                 << 0x1cU) | (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                              >> 4U));
    bufp->fullWData(oldp+175,(__Vtemp_h6df3bf81__0),288);
    bufp->fullQData(oldp+184,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+186,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+188,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+190,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+192,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+194,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+196,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+198,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+200,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),33);
    bufp->fullQData(oldp+202,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),33);
    bufp->fullQData(oldp+204,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),33);
    bufp->fullQData(oldp+206,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),33);
    bufp->fullQData(oldp+208,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),33);
    bufp->fullQData(oldp+210,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),33);
    bufp->fullQData(oldp+212,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),33);
    bufp->fullQData(oldp+214,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7]),33);
    bufp->fullQData(oldp+216,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),33);
    bufp->fullBit(oldp+218,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+219,(((((0x6fU == (0x7fU & vlSelf->npc__DOT__inst)) 
                                 | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr) 
                                    | (IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hab5d87c6__0))) 
                                | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                                    | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                       | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                          | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                             | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                                   & ((0U == (7U & 
                                              (vlSelf->npc__DOT__inst 
                                               >> 0xcU)))
                                       ? (vlSelf->npc__DOT__rf_rdata1 
                                          == vlSelf->npc__DOT__rf_rdata2)
                                       : ((1U == (7U 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 0xcU)))
                                           ? (vlSelf->npc__DOT__rf_rdata1 
                                              != vlSelf->npc__DOT__rf_rdata2)
                                           : ((5U == 
                                               (7U 
                                                & (vlSelf->npc__DOT__inst 
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
                                                                  < vlSelf->npc__DOT__rf_rdata2))))))))))
                                ? ((IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                            >> 1U)) 
                                   << 1U) : ((IData)(4U) 
                                             + vlSelf->npc__DOT__pc))),32);
    bufp->fullIData(oldp+220,(vlSelf->npc__DOT__pc),32);
    bufp->fullIData(oldp+221,(((IData)(4U) + vlSelf->npc__DOT__pc)),32);
    bufp->fullIData(oldp+222,(vlSelf->npc__DOT__mtvec_rdata),32);
    bufp->fullIData(oldp+223,(vlSelf->npc__DOT__mcause_rdata),32);
    bufp->fullIData(oldp+224,(vlSelf->npc__DOT__mepc_rdata),32);
    bufp->fullIData(oldp+225,(vlSelf->npc__DOT__mstatus_rdata),32);
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
    bufp->fullWData(oldp+226,(__Vtemp_ha175cb4c__0),176);
    bufp->fullQData(oldp+232,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__pair_list[0]),44);
    bufp->fullQData(oldp+234,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__pair_list[1]),44);
    bufp->fullQData(oldp+236,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__pair_list[2]),44);
    bufp->fullQData(oldp+238,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__pair_list[3]),44);
    bufp->fullIData(oldp+240,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+241,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+242,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+243,(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+244,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+245,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+246,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+247,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+248,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+249,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+250,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+251,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+252,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+253,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+254,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+255,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+256,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+257,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+258,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+259,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+260,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+261,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+262,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+263,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+264,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+265,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+266,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+267,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+268,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+269,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+270,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+271,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+272,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+273,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+274,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+275,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+276,(vlSelf->npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+277,(vlSelf->clk));
    bufp->fullBit(oldp+278,(vlSelf->rst));
    bufp->fullBit(oldp+279,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullBit(oldp+280,(vlSelf->npc__DOT__ALU_Cin));
    bufp->fullBit(oldp+281,(0U));
    bufp->fullIData(oldp+282,(0x1800U),32);
    bufp->fullIData(oldp+283,(0x2bU),32);
    bufp->fullIData(oldp+284,(6U),32);
    bufp->fullIData(oldp+285,(3U),32);
    bufp->fullCData(oldp+286,(0U),3);
    bufp->fullWData(oldp+287,(Vnpc__ConstPool__CONST_he1f74062_0),387);
    bufp->fullIData(oldp+300,(1U),32);
    bufp->fullIData(oldp+301,(9U),32);
    bufp->fullIData(oldp+302,(0x2bU),32);
    bufp->fullWData(oldp+303,(Vnpc__ConstPool__CONST_h8b049ae1_0),301);
    bufp->fullIData(oldp+313,(7U),32);
    bufp->fullIData(oldp+314,(2U),32);
    bufp->fullCData(oldp+315,(1U),2);
    bufp->fullWData(oldp+316,(Vnpc__ConstPool__CONST_h845ddab0_0),344);
    bufp->fullIData(oldp+327,(8U),32);
    bufp->fullIData(oldp+328,(0x20U),32);
    bufp->fullIData(oldp+329,(1U),32);
    bufp->fullIData(oldp+330,(0x26U),32);
    bufp->fullWData(oldp+331,(Vnpc__ConstPool__CONST_h82d8b3ba_0),387);
    bufp->fullIData(oldp+344,(0U),32);
    bufp->fullCData(oldp+345,(0U),8);
    bufp->fullIData(oldp+346,(4U),32);
    bufp->fullIData(oldp+347,(0xcU),32);
    bufp->fullIData(oldp+348,(0U),32);
    bufp->fullIData(oldp+349,(0x2cU),32);
    bufp->fullIData(oldp+350,(4U),32);
    bufp->fullBit(oldp+351,(1U));
    bufp->fullIData(oldp+352,(0x21U),32);
    bufp->fullQData(oldp+353,(0ULL),33);
    bufp->fullIData(oldp+355,(0x24U),32);
    bufp->fullIData(oldp+356,(8U),32);
    bufp->fullIData(oldp+357,(5U),32);
}

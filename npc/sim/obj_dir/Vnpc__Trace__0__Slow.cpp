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
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->pushNamePrefix("npc ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+157,"stop_sim", false,-1);
    tracep->declBit(c+158,"validF", false,-1);
    tracep->declBit(c+455,"start", false,-1);
    tracep->declBit(c+394,"rst_d", false,-1);
    tracep->declBus(c+159,"instF", false,-1, 31,0);
    tracep->declBus(c+395,"pcF", false,-1, 31,0);
    tracep->declBus(c+396,"snpcF", false,-1, 31,0);
    tracep->declBus(c+159,"instD", false,-1, 31,0);
    tracep->declBus(c+395,"pcD", false,-1, 31,0);
    tracep->declBus(c+396,"snpcD", false,-1, 31,0);
    tracep->declBit(c+457,"readyD", false,-1);
    tracep->declBit(c+457,"validD", false,-1);
    tracep->declBus(c+160,"opcode", false,-1, 6,0);
    tracep->declBus(c+161,"funct7", false,-1, 6,0);
    tracep->declBus(c+162,"funct3", false,-1, 2,0);
    tracep->declBus(c+163,"mrtypeD", false,-1, 2,0);
    tracep->declBus(c+164,"cmp_typeD", false,-1, 2,0);
    tracep->declBus(c+165,"ALU_opD", false,-1, 2,0);
    tracep->declBus(c+166,"rdregsrcD", false,-1, 2,0);
    tracep->declBus(c+167,"inst_type", false,-1, 2,0);
    tracep->declBus(c+168,"ALUsrc1D", false,-1, 1,0);
    tracep->declBus(c+169,"ALUsrc2D", false,-1, 1,0);
    tracep->declBus(c+170,"funct12", false,-1, 11,0);
    tracep->declBit(c+171,"mvalidD", false,-1);
    tracep->declBit(c+172,"mwenD", false,-1);
    tracep->declBit(c+173,"branchD", false,-1);
    tracep->declBit(c+174,"jumpD", false,-1);
    tracep->declBit(c+175,"jalrD", false,-1);
    tracep->declBit(c+176,"ecallD", false,-1);
    tracep->declBit(c+177,"mretD", false,-1);
    tracep->declBit(c+178,"write_csr", false,-1);
    tracep->declBus(c+179,"mwmaskD", false,-1, 7,0);
    tracep->declBus(c+180,"rf_raddr1", false,-1, 4,0);
    tracep->declBus(c+181,"rf_raddr2", false,-1, 4,0);
    tracep->declBus(c+180,"rs1", false,-1, 4,0);
    tracep->declBus(c+182,"rs2", false,-1, 4,0);
    tracep->declBus(c+183,"src1D", false,-1, 31,0);
    tracep->declBus(c+184,"src2D", false,-1, 31,0);
    tracep->declBus(c+185,"immD", false,-1, 31,0);
    tracep->declBus(c+186,"csraddrD", false,-1, 11,0);
    tracep->declBus(c+397,"mtvec_data", false,-1, 31,0);
    tracep->declBus(c+398,"mcause_data", false,-1, 31,0);
    tracep->declBus(c+399,"mepc_data", false,-1, 31,0);
    tracep->declBus(c+400,"mstatus_data", false,-1, 31,0);
    tracep->declBus(c+187,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+188,"csrD", false,-1, 31,0);
    tracep->declBus(c+189,"mtvec_wdata", false,-1, 31,0);
    tracep->declBus(c+190,"mcause_wdata", false,-1, 31,0);
    tracep->declBus(c+191,"mepc_wdata", false,-1, 31,0);
    tracep->declBus(c+458,"mstatus_wdata", false,-1, 31,0);
    tracep->declBit(c+192,"mtvec_wen", false,-1);
    tracep->declBit(c+193,"mcause_wen", false,-1);
    tracep->declBit(c+194,"mepc_wen", false,-1);
    tracep->declBit(c+195,"mstatus_wen", false,-1);
    tracep->declBus(c+196,"rdD", false,-1, 4,0);
    tracep->declBit(c+171,"mvalidX", false,-1);
    tracep->declBit(c+172,"mwenX", false,-1);
    tracep->declBit(c+176,"ecallX", false,-1);
    tracep->declBit(c+177,"mretX", false,-1);
    tracep->declBit(c+173,"branchX", false,-1);
    tracep->declBit(c+174,"jumpX", false,-1);
    tracep->declBit(c+175,"jalrX", false,-1);
    tracep->declBus(c+168,"ALUsrc1X", false,-1, 1,0);
    tracep->declBus(c+169,"ALUsrc2X", false,-1, 1,0);
    tracep->declBus(c+164,"cmp_typeX", false,-1, 2,0);
    tracep->declBus(c+165,"ALU_opX", false,-1, 2,0);
    tracep->declBus(c+166,"rdregsrcX", false,-1, 2,0);
    tracep->declBus(c+163,"mrtypeX", false,-1, 2,0);
    tracep->declBus(c+196,"rdX", false,-1, 4,0);
    tracep->declBus(c+179,"mwmaskX", false,-1, 7,0);
    tracep->declBus(c+186,"csraddrX", false,-1, 11,0);
    tracep->declBus(c+188,"csrX", false,-1, 31,0);
    tracep->declBus(c+185,"immX", false,-1, 31,0);
    tracep->declBus(c+396,"snpcX", false,-1, 31,0);
    tracep->declBus(c+395,"pcX", false,-1, 31,0);
    tracep->declBus(c+183,"src1X", false,-1, 31,0);
    tracep->declBus(c+184,"src2X", false,-1, 31,0);
    tracep->declBit(c+457,"validX", false,-1);
    tracep->declBit(c+457,"readyX", false,-1);
    tracep->declBus(c+197,"ALU_A", false,-1, 31,0);
    tracep->declBus(c+198,"ALU_B", false,-1, 31,0);
    tracep->declBus(c+199,"ALU_resultX", false,-1, 31,0);
    tracep->declBit(c+200,"overflow", false,-1);
    tracep->declBit(c+201,"zero", false,-1);
    tracep->declBit(c+202,"Cout", false,-1);
    tracep->declBit(c+202,"uge", false,-1);
    tracep->declBit(c+203,"ult", false,-1);
    tracep->declBit(c+201,"eq", false,-1);
    tracep->declBit(c+204,"neq", false,-1);
    tracep->declBit(c+205,"slt", false,-1);
    tracep->declBit(c+206,"sge", false,-1);
    tracep->declBit(c+207,"cmp_resultX", false,-1);
    tracep->declBus(c+208,"base_addr", false,-1, 31,0);
    tracep->declBus(c+185,"offset", false,-1, 31,0);
    tracep->declBus(c+209,"jump_addr", false,-1, 31,0);
    tracep->declBus(c+210,"dnpc_", false,-1, 31,0);
    tracep->declBus(c+211,"dnpcX", false,-1, 31,0);
    tracep->declBit(c+212,"judge_jump", false,-1);
    tracep->declBit(c+457,"readyM", false,-1);
    tracep->declBit(c+457,"validM", false,-1);
    tracep->declBit(c+207,"cmp_resultM", false,-1);
    tracep->declBit(c+171,"mvalidM", false,-1);
    tracep->declBit(c+172,"mwenM", false,-1);
    tracep->declBit(c+176,"ecallM", false,-1);
    tracep->declBus(c+166,"rdregsrcM", false,-1, 2,0);
    tracep->declBus(c+163,"mrtypeM", false,-1, 2,0);
    tracep->declBus(c+196,"rdM", false,-1, 4,0);
    tracep->declBus(c+179,"mwmaskM", false,-1, 7,0);
    tracep->declBus(c+186,"csraddrM", false,-1, 11,0);
    tracep->declBus(c+211,"dnpcM", false,-1, 31,0);
    tracep->declBus(c+395,"pcM", false,-1, 31,0);
    tracep->declBus(c+184,"src2M", false,-1, 31,0);
    tracep->declBus(c+199,"ALU_resultM", false,-1, 31,0);
    tracep->declBus(c+188,"csrM", false,-1, 31,0);
    tracep->declBus(c+396,"snpcM", false,-1, 31,0);
    tracep->declBus(c+213,"rdata", false,-1, 31,0);
    tracep->declBus(c+214,"mdataM", false,-1, 31,0);
    tracep->declBit(c+457,"readyW", false,-1);
    tracep->declBit(c+457,"validW", false,-1);
    tracep->declBit(c+176,"ecallW", false,-1);
    tracep->declBit(c+207,"cmp_resultW", false,-1);
    tracep->declBit(c+215,"disableW", false,-1);
    tracep->declBus(c+166,"rdregsrcW", false,-1, 2,0);
    tracep->declBus(c+196,"rdW", false,-1, 4,0);
    tracep->declBus(c+184,"src2W", false,-1, 31,0);
    tracep->declBus(c+395,"pcW", false,-1, 31,0);
    tracep->declBus(c+211,"dnpcW", false,-1, 31,0);
    tracep->declBus(c+199,"ALU_resultW", false,-1, 31,0);
    tracep->declBus(c+188,"csrW", false,-1, 31,0);
    tracep->declBus(c+396,"snpcW", false,-1, 31,0);
    tracep->declBus(c+214,"mdataW", false,-1, 31,0);
    tracep->declBus(c+189,"rddataW", false,-1, 31,0);
    tracep->declBus(c+186,"csraddrW", false,-1, 11,0);
    tracep->pushNamePrefix("data_mem ");
    tracep->declBus(c+199,"raddr", false,-1, 31,0);
    tracep->declBus(c+199,"waddr", false,-1, 31,0);
    tracep->declBus(c+184,"wdata", false,-1, 31,0);
    tracep->declBus(c+179,"wmask", false,-1, 7,0);
    tracep->declBit(c+172,"wen", false,-1);
    tracep->declBit(c+171,"valid", false,-1);
    tracep->declBus(c+213,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dstagebus_inst ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+159,"instF", false,-1, 31,0);
    tracep->declBus(c+396,"snpcF", false,-1, 31,0);
    tracep->declBus(c+395,"pcF", false,-1, 31,0);
    tracep->declBus(c+159,"instD", false,-1, 31,0);
    tracep->declBus(c+396,"snpcD", false,-1, 31,0);
    tracep->declBus(c+395,"pcD", false,-1, 31,0);
    tracep->declBit(c+158,"s_valid", false,-1);
    tracep->declBit(c+457,"s_ready", false,-1);
    tracep->declBit(c+457,"m_ready", false,-1);
    tracep->declBit(c+457,"m_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ext_mdata ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+460,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+461,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+214,"out", false,-1, 31,0);
    tracep->declBus(c+163,"key", false,-1, 2,0);
    tracep->declBus(c+462,"default_out", false,-1, 31,0);
    tracep->declArray(c+216,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+460,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+461,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+214,"out", false,-1, 31,0);
    tracep->declBus(c+163,"key", false,-1, 2,0);
    tracep->declBus(c+462,"default_out", false,-1, 31,0);
    tracep->declArray(c+216,"lut", false,-1, 174,0);
    tracep->declBus(c+464,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+222+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+232+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+237,"lut_out", false,-1, 31,0);
    tracep->declBit(c+238,"hit", false,-1);
    tracep->declBus(c+465,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu_inst ");
    tracep->declBus(c+160,"opcode", false,-1, 6,0);
    tracep->declBus(c+162,"funct3", false,-1, 2,0);
    tracep->declBus(c+161,"funct7", false,-1, 6,0);
    tracep->declBus(c+170,"funct12", false,-1, 11,0);
    tracep->declBit(c+171,"mvalidD", false,-1);
    tracep->declBus(c+179,"mwmaskD", false,-1, 7,0);
    tracep->declBit(c+172,"mwenD", false,-1);
    tracep->declBus(c+163,"mrtypeD", false,-1, 2,0);
    tracep->declBus(c+164,"cmp_typeD", false,-1, 2,0);
    tracep->declBit(c+173,"branchD", false,-1);
    tracep->declBit(c+174,"jumpD", false,-1);
    tracep->declBus(c+165,"ALU_opD", false,-1, 2,0);
    tracep->declBus(c+166,"rdregsrcD", false,-1, 2,0);
    tracep->declBit(c+175,"jalrD", false,-1);
    tracep->declBus(c+168,"ALUsrc1D", false,-1, 1,0);
    tracep->declBus(c+169,"ALUsrc2D", false,-1, 1,0);
    tracep->declBus(c+167,"inst_type", false,-1, 2,0);
    tracep->declBit(c+176,"ecallD", false,-1);
    tracep->declBit(c+177,"mretD", false,-1);
    tracep->declBit(c+178,"write_csr", false,-1);
    tracep->declBit(c+157,"stop_sim", false,-1);
    tracep->declBit(c+239,"lui", false,-1);
    tracep->declBit(c+240,"auipc", false,-1);
    tracep->declBit(c+241,"jal", false,-1);
    tracep->declBit(c+242,"load", false,-1);
    tracep->declBit(c+172,"store", false,-1);
    tracep->declBit(c+243,"Iarith", false,-1);
    tracep->declBit(c+244,"Rarith", false,-1);
    tracep->declBit(c+245,"ebreak", false,-1);
    tracep->declBit(c+246,"csrRelated", false,-1);
    tracep->declBit(c+247,"mismatch", false,-1);
    tracep->declBit(c+248,"condset", false,-1);
    tracep->declBit(c+249,"sub", false,-1);
    tracep->declBit(c+250,"sll", false,-1);
    tracep->declBit(c+251,"srl", false,-1);
    tracep->declBit(c+252,"sra", false,-1);
    tracep->declBit(c+253,"xor_", false,-1);
    tracep->declBit(c+254,"or_", false,-1);
    tracep->declBit(c+255,"and_", false,-1);
    tracep->declBit(c+256,"is_disable", false,-1);
    tracep->pushNamePrefix("get_ALUop ");
    tracep->declBus(c+466,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+466,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+460,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+165,"out", false,-1, 2,0);
    tracep->declBus(c+257,"key", false,-1, 6,0);
    tracep->declBus(c+467,"default_out", false,-1, 2,0);
    tracep->declArray(c+468,"lut", false,-1, 69,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+466,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+466,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+460,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+165,"out", false,-1, 2,0);
    tracep->declBus(c+257,"key", false,-1, 6,0);
    tracep->declBus(c+467,"default_out", false,-1, 2,0);
    tracep->declArray(c+468,"lut", false,-1, 69,0);
    tracep->declBus(c+471,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+6+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+13+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+20+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+258,"lut_out", false,-1, 2,0);
    tracep->declBit(c+259,"hit", false,-1);
    tracep->declBus(c+472,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_ALUsrc2 ");
    tracep->declBus(c+473,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+473,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+473,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"out", false,-1, 1,0);
    tracep->declBus(c+260,"key", false,-1, 1,0);
    tracep->declBus(c+474,"default_out", false,-1, 1,0);
    tracep->declBus(c+475,"lut", false,-1, 7,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+473,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+473,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+473,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+169,"out", false,-1, 1,0);
    tracep->declBus(c+260,"key", false,-1, 1,0);
    tracep->declBus(c+474,"default_out", false,-1, 1,0);
    tracep->declBus(c+475,"lut", false,-1, 7,0);
    tracep->declBus(c+476,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+27+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+29+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+31+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+261,"lut_out", false,-1, 1,0);
    tracep->declBit(c+262,"hit", false,-1);
    tracep->declBus(c+477,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_cmptype ");
    tracep->declBus(c+471,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+478,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+476,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+263,"out", false,-1, 3,0);
    tracep->declBus(c+264,"key", false,-1, 5,0);
    tracep->declBus(c+479,"default_out", false,-1, 3,0);
    tracep->declArray(c+480,"lut", false,-1, 99,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+471,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+478,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+476,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+263,"out", false,-1, 3,0);
    tracep->declBus(c+264,"key", false,-1, 5,0);
    tracep->declBus(c+479,"default_out", false,-1, 3,0);
    tracep->declArray(c+480,"lut", false,-1, 99,0);
    tracep->declBus(c+471,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+33+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+43+i*1,"key_list", true,(i+0), 5,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+53+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+265,"lut_out", false,-1, 3,0);
    tracep->declBit(c+266,"hit", false,-1);
    tracep->declBus(c+484,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_itype ");
    tracep->declBus(c+485,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+485,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+460,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+167,"out", false,-1, 2,0);
    tracep->declBus(c+267,"key", false,-1, 8,0);
    tracep->declBus(c+486,"default_out", false,-1, 2,0);
    tracep->declArray(c+487,"lut", false,-1, 107,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+485,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+485,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+460,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+167,"out", false,-1, 2,0);
    tracep->declBus(c+267,"key", false,-1, 8,0);
    tracep->declBus(c+486,"default_out", false,-1, 2,0);
    tracep->declArray(c+487,"lut", false,-1, 107,0);
    tracep->declBus(c+491,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+63+i*1,"pair_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+72+i*1,"key_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+81+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+268,"lut_out", false,-1, 2,0);
    tracep->declBit(c+269,"hit", false,-1);
    tracep->declBus(c+492,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_mrtype ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+460,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+460,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+163,"out", false,-1, 2,0);
    tracep->declBus(c+162,"key", false,-1, 2,0);
    tracep->declBus(c+467,"default_out", false,-1, 2,0);
    tracep->declBus(c+493,"lut", false,-1, 29,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+460,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+460,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+163,"out", false,-1, 2,0);
    tracep->declBus(c+162,"key", false,-1, 2,0);
    tracep->declBus(c+467,"default_out", false,-1, 2,0);
    tracep->declBus(c+493,"lut", false,-1, 29,0);
    tracep->declBus(c+478,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+90+i*1,"pair_list", true,(i+0), 5,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+95+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+100+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+270,"lut_out", false,-1, 2,0);
    tracep->declBit(c+271,"hit", false,-1);
    tracep->declBus(c+465,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_mwmask ");
    tracep->declBus(c+460,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+460,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+494,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+179,"out", false,-1, 7,0);
    tracep->declBus(c+162,"key", false,-1, 2,0);
    tracep->declBus(c+495,"default_out", false,-1, 7,0);
    tracep->declQuad(c+496,"lut", false,-1, 32,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+460,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+460,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+494,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+179,"out", false,-1, 7,0);
    tracep->declBus(c+162,"key", false,-1, 2,0);
    tracep->declBus(c+495,"default_out", false,-1, 7,0);
    tracep->declQuad(c+496,"lut", false,-1, 32,0);
    tracep->declBus(c+498,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+105+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+108+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+111+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+272,"lut_out", false,-1, 7,0);
    tracep->declBit(c+273,"hit", false,-1);
    tracep->declBus(c+499,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_rdregsrc ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+459,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+460,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+166,"out", false,-1, 2,0);
    tracep->declBus(c+274,"key", false,-1, 4,0);
    tracep->declBus(c+467,"default_out", false,-1, 2,0);
    tracep->declQuad(c+500,"lut", false,-1, 39,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+459,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+460,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+166,"out", false,-1, 2,0);
    tracep->declBus(c+274,"key", false,-1, 4,0);
    tracep->declBus(c+467,"default_out", false,-1, 2,0);
    tracep->declQuad(c+500,"lut", false,-1, 39,0);
    tracep->declBus(c+494,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+114+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+119+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+124+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+275,"lut_out", false,-1, 2,0);
    tracep->declBit(c+276,"hit", false,-1);
    tracep->declBus(c+465,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mcause ");
    tracep->declBus(c+461,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+502,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+190,"din", false,-1, 31,0);
    tracep->declBus(c+398,"dout", false,-1, 31,0);
    tracep->declBit(c+193,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc ");
    tracep->declBus(c+461,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+502,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+191,"din", false,-1, 31,0);
    tracep->declBus(c+399,"dout", false,-1, 31,0);
    tracep->declBit(c+194,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus ");
    tracep->declBus(c+461,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+458,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+458,"din", false,-1, 31,0);
    tracep->declBus(c+400,"dout", false,-1, 31,0);
    tracep->declBit(c+195,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec ");
    tracep->declBus(c+461,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+502,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+189,"din", false,-1, 31,0);
    tracep->declBus(c+397,"dout", false,-1, 31,0);
    tracep->declBit(c+192,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sel_WB ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+460,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+461,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+189,"out", false,-1, 31,0);
    tracep->declBus(c+166,"key", false,-1, 2,0);
    tracep->declBus(c+462,"default_out", false,-1, 31,0);
    tracep->declArray(c+277,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+460,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+461,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+189,"out", false,-1, 31,0);
    tracep->declBus(c+166,"key", false,-1, 2,0);
    tracep->declBus(c+462,"default_out", false,-1, 31,0);
    tracep->declArray(c+277,"lut", false,-1, 174,0);
    tracep->declBus(c+464,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+283+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+129+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+293+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+298,"lut_out", false,-1, 31,0);
    tracep->declBit(c+299,"hit", false,-1);
    tracep->declBus(c+465,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sel_cmp ");
    tracep->declBus(c+478,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+460,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+207,"out", false,-1, 0,0);
    tracep->declBus(c+164,"key", false,-1, 2,0);
    tracep->declBus(c+503,"default_out", false,-1, 0,0);
    tracep->declBus(c+300,"lut", false,-1, 23,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+478,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+460,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+207,"out", false,-1, 0,0);
    tracep->declBus(c+164,"key", false,-1, 2,0);
    tracep->declBus(c+503,"default_out", false,-1, 0,0);
    tracep->declBus(c+300,"lut", false,-1, 23,0);
    tracep->declBus(c+476,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+301+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+134+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+307+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+313,"lut_out", false,-1, 0,0);
    tracep->declBit(c+314,"hit", false,-1);
    tracep->declBus(c+504,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sel_csr_read ");
    tracep->declBus(c+476,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+491,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+461,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+187,"out", false,-1, 31,0);
    tracep->declBus(c+186,"key", false,-1, 11,0);
    tracep->declBus(c+462,"default_out", false,-1, 31,0);
    tracep->declArray(c+401,"lut", false,-1, 175,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+476,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+491,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+461,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+187,"out", false,-1, 31,0);
    tracep->declBus(c+186,"key", false,-1, 11,0);
    tracep->declBus(c+462,"default_out", false,-1, 31,0);
    tracep->declArray(c+401,"lut", false,-1, 175,0);
    tracep->declBus(c+505,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+407+i*2,"pair_list", true,(i+0), 43,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+140+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+415+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+315,"lut_out", false,-1, 31,0);
    tracep->declBit(c+316,"hit", false,-1);
    tracep->declBus(c+506,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sel_imm ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+460,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+461,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+185,"out", false,-1, 31,0);
    tracep->declBus(c+167,"key", false,-1, 2,0);
    tracep->declBus(c+462,"default_out", false,-1, 31,0);
    tracep->declArray(c+317,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+460,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+461,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+185,"out", false,-1, 31,0);
    tracep->declBus(c+167,"key", false,-1, 2,0);
    tracep->declBus(c+462,"default_out", false,-1, 31,0);
    tracep->declArray(c+317,"lut", false,-1, 174,0);
    tracep->declBus(c+464,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+323+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+144+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+333+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+338,"lut_out", false,-1, 31,0);
    tracep->declBit(c+339,"hit", false,-1);
    tracep->declBus(c+465,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ALU ");
    tracep->declBus(c+165,"mode", false,-1, 2,0);
    tracep->declBus(c+197,"A", false,-1, 31,0);
    tracep->declBus(c+198,"B", false,-1, 31,0);
    tracep->declBit(c+503,"Cin", false,-1);
    tracep->declBit(c+201,"zero", false,-1);
    tracep->declBit(c+200,"overflow", false,-1);
    tracep->declBit(c+202,"Cout", false,-1);
    tracep->declBus(c+199,"result", false,-1, 31,0);
    tracep->declBit(c+340,"add_overflow", false,-1);
    tracep->declBit(c+341,"sub_overflow", false,-1);
    tracep->declBit(c+342,"add_Cout", false,-1);
    tracep->declBit(c+343,"sub_Cout", false,-1);
    tracep->declBus(c+344,"add_result", false,-1, 31,0);
    tracep->declBus(c+345,"sub_result", false,-1, 31,0);
    tracep->declQuad(c+346,"out", false,-1, 32,0);
    tracep->pushNamePrefix("adder_inst ");
    tracep->declBus(c+197,"A", false,-1, 31,0);
    tracep->declBus(c+198,"B", false,-1, 31,0);
    tracep->declBit(c+503,"Cin", false,-1);
    tracep->declBus(c+344,"sum", false,-1, 31,0);
    tracep->declBit(c+342,"Cout", false,-1);
    tracep->declBit(c+340,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub_inst ");
    tracep->declBus(c+197,"A", false,-1, 31,0);
    tracep->declBus(c+348,"B", false,-1, 31,0);
    tracep->declBit(c+457,"Cin", false,-1);
    tracep->declBus(c+345,"sum", false,-1, 31,0);
    tracep->declBit(c+343,"Cout", false,-1);
    tracep->declBit(c+341,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_MuxKeyWithDefault ");
    tracep->declBus(c+494,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+460,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+507,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+346,"out", false,-1, 32,0);
    tracep->declBus(c+165,"key", false,-1, 2,0);
    tracep->declQuad(c+508,"default_out", false,-1, 32,0);
    tracep->declArray(c+349,"lut", false,-1, 287,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+494,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+460,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+507,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+463,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+346,"out", false,-1, 32,0);
    tracep->declBus(c+165,"key", false,-1, 2,0);
    tracep->declQuad(c+508,"default_out", false,-1, 32,0);
    tracep->declArray(c+349,"lut", false,-1, 287,0);
    tracep->declBus(c+510,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+358+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+149+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+374+i*2,"data_list", true,(i+0), 32,0);
    }
    tracep->declQuad(c+390,"lut_out", false,-1, 32,0);
    tracep->declBit(c+392,"hit", false,-1);
    tracep->declBus(c+511,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_IFU ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+395,"pc", false,-1, 31,0);
    tracep->declBus(c+159,"inst", false,-1, 31,0);
    tracep->declBit(c+457,"ready", false,-1);
    tracep->declBit(c+158,"valid", false,-1);
    tracep->declBus(c+512,"IDLE", false,-1, 1,0);
    tracep->declBus(c+474,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+419,"state", false,-1, 1,0);
    tracep->pushNamePrefix("inst_mem ");
    tracep->declBus(c+395,"raddr", false,-1, 31,0);
    tracep->declBus(c+502,"waddr", false,-1, 31,0);
    tracep->declBus(c+502,"wdata", false,-1, 31,0);
    tracep->declBus(c+495,"wmask", false,-1, 7,0);
    tracep->declBit(c+503,"wen", false,-1);
    tracep->declBit(c+158,"valid", false,-1);
    tracep->declBus(c+159,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_Mstage_bus ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+171,"mvalidX", false,-1);
    tracep->declBit(c+172,"mwenX", false,-1);
    tracep->declBus(c+179,"mwmaskX", false,-1, 7,0);
    tracep->declBus(c+163,"mrtypeX", false,-1, 2,0);
    tracep->declBus(c+166,"rdregsrcX", false,-1, 2,0);
    tracep->declBus(c+211,"dnpcX", false,-1, 31,0);
    tracep->declBus(c+396,"snpcX", false,-1, 31,0);
    tracep->declBus(c+395,"pcX", false,-1, 31,0);
    tracep->declBus(c+184,"src2X", false,-1, 31,0);
    tracep->declBus(c+199,"ALU_resultX", false,-1, 31,0);
    tracep->declBus(c+186,"csraddrX", false,-1, 11,0);
    tracep->declBus(c+188,"csrX", false,-1, 31,0);
    tracep->declBit(c+207,"cmp_resultX", false,-1);
    tracep->declBit(c+176,"ecallX", false,-1);
    tracep->declBus(c+196,"rdX", false,-1, 4,0);
    tracep->declBit(c+171,"mvalidM", false,-1);
    tracep->declBit(c+172,"mwenM", false,-1);
    tracep->declBus(c+179,"mwmaskM", false,-1, 7,0);
    tracep->declBus(c+163,"mrtypeM", false,-1, 2,0);
    tracep->declBus(c+166,"rdregsrcM", false,-1, 2,0);
    tracep->declBus(c+211,"dnpcM", false,-1, 31,0);
    tracep->declBus(c+396,"snpcM", false,-1, 31,0);
    tracep->declBus(c+395,"pcM", false,-1, 31,0);
    tracep->declBus(c+184,"src2M", false,-1, 31,0);
    tracep->declBus(c+199,"ALU_resultM", false,-1, 31,0);
    tracep->declBus(c+186,"csraddrM", false,-1, 11,0);
    tracep->declBus(c+188,"csrM", false,-1, 31,0);
    tracep->declBit(c+207,"cmp_resultM", false,-1);
    tracep->declBit(c+176,"ecallM", false,-1);
    tracep->declBus(c+196,"rdM", false,-1, 4,0);
    tracep->declBit(c+457,"s_valid", false,-1);
    tracep->declBit(c+457,"s_ready", false,-1);
    tracep->declBit(c+457,"m_ready", false,-1);
    tracep->declBit(c+457,"m_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_PC ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+456,"en", false,-1);
    tracep->declBus(c+211,"dnpc", false,-1, 31,0);
    tracep->declBus(c+395,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+459,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+461,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+189,"wdata", false,-1, 31,0);
    tracep->declBus(c+196,"waddr", false,-1, 4,0);
    tracep->declBit(c+393,"wen", false,-1);
    tracep->declBus(c+180,"raddr1", false,-1, 4,0);
    tracep->declBus(c+181,"raddr2", false,-1, 4,0);
    tracep->declBus(c+183,"rdata1", false,-1, 31,0);
    tracep->declBus(c+184,"rdata2", false,-1, 31,0);
    tracep->declBit(c+457,"ren", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+420+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+452,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_Wstage_bus ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBus(c+211,"dnpcM", false,-1, 31,0);
    tracep->declBus(c+166,"rdregsrcM", false,-1, 2,0);
    tracep->declBus(c+214,"mdataM", false,-1, 31,0);
    tracep->declBus(c+199,"ALU_resultM", false,-1, 31,0);
    tracep->declBus(c+186,"csraddrM", false,-1, 11,0);
    tracep->declBus(c+396,"snpcM", false,-1, 31,0);
    tracep->declBus(c+395,"pcM", false,-1, 31,0);
    tracep->declBit(c+207,"cmp_resultM", false,-1);
    tracep->declBit(c+176,"ecallM", false,-1);
    tracep->declBus(c+188,"csrM", false,-1, 31,0);
    tracep->declBus(c+196,"rdM", false,-1, 4,0);
    tracep->declBus(c+184,"src2M", false,-1, 31,0);
    tracep->declBus(c+211,"dnpcW", false,-1, 31,0);
    tracep->declBus(c+166,"rdregsrcW", false,-1, 2,0);
    tracep->declBus(c+214,"mdataW", false,-1, 31,0);
    tracep->declBus(c+199,"ALU_resultW", false,-1, 31,0);
    tracep->declBus(c+186,"csraddrW", false,-1, 11,0);
    tracep->declBus(c+396,"snpcW", false,-1, 31,0);
    tracep->declBus(c+395,"pcW", false,-1, 31,0);
    tracep->declBit(c+207,"cmp_resultW", false,-1);
    tracep->declBit(c+176,"ecallW", false,-1);
    tracep->declBus(c+188,"csrW", false,-1, 31,0);
    tracep->declBus(c+196,"rdW", false,-1, 4,0);
    tracep->declBus(c+184,"src2W", false,-1, 31,0);
    tracep->declBit(c+457,"s_valid", false,-1);
    tracep->declBit(c+457,"s_ready", false,-1);
    tracep->declBit(c+457,"m_ready", false,-1);
    tracep->declBit(c+457,"m_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Xstage_bus ");
    tracep->declBit(c+453,"clk", false,-1);
    tracep->declBit(c+454,"rst", false,-1);
    tracep->declBit(c+171,"mvalidD", false,-1);
    tracep->declBit(c+172,"mwenD", false,-1);
    tracep->declBus(c+179,"mwmaskD", false,-1, 7,0);
    tracep->declBus(c+163,"mrtypeD", false,-1, 2,0);
    tracep->declBit(c+176,"ecallD", false,-1);
    tracep->declBit(c+177,"mretD", false,-1);
    tracep->declBus(c+164,"cmp_typeD", false,-1, 2,0);
    tracep->declBit(c+173,"branchD", false,-1);
    tracep->declBit(c+174,"jumpD", false,-1);
    tracep->declBus(c+165,"ALU_opD", false,-1, 2,0);
    tracep->declBus(c+166,"rdregsrcD", false,-1, 2,0);
    tracep->declBit(c+175,"jalrD", false,-1);
    tracep->declBus(c+168,"ALUsrc1D", false,-1, 1,0);
    tracep->declBus(c+169,"ALUsrc2D", false,-1, 1,0);
    tracep->declBus(c+183,"src1D", false,-1, 31,0);
    tracep->declBus(c+184,"src2D", false,-1, 31,0);
    tracep->declBus(c+185,"immD", false,-1, 31,0);
    tracep->declBus(c+396,"snpcD", false,-1, 31,0);
    tracep->declBus(c+186,"csraddrD", false,-1, 11,0);
    tracep->declBus(c+395,"pcD", false,-1, 31,0);
    tracep->declBus(c+188,"csrD", false,-1, 31,0);
    tracep->declBus(c+196,"rdD", false,-1, 4,0);
    tracep->declBit(c+171,"mvalidX", false,-1);
    tracep->declBit(c+172,"mwenX", false,-1);
    tracep->declBus(c+179,"mwmaskX", false,-1, 7,0);
    tracep->declBus(c+163,"mrtypeX", false,-1, 2,0);
    tracep->declBit(c+176,"ecallX", false,-1);
    tracep->declBit(c+177,"mretX", false,-1);
    tracep->declBus(c+164,"cmp_typeX", false,-1, 2,0);
    tracep->declBit(c+173,"branchX", false,-1);
    tracep->declBit(c+174,"jumpX", false,-1);
    tracep->declBus(c+165,"ALU_opX", false,-1, 2,0);
    tracep->declBus(c+166,"rdregsrcX", false,-1, 2,0);
    tracep->declBit(c+175,"jalrX", false,-1);
    tracep->declBus(c+168,"ALUsrc1X", false,-1, 1,0);
    tracep->declBus(c+169,"ALUsrc2X", false,-1, 1,0);
    tracep->declBus(c+183,"src1X", false,-1, 31,0);
    tracep->declBus(c+184,"src2X", false,-1, 31,0);
    tracep->declBus(c+185,"immX", false,-1, 31,0);
    tracep->declBus(c+396,"snpcX", false,-1, 31,0);
    tracep->declBus(c+186,"csraddrX", false,-1, 11,0);
    tracep->declBus(c+395,"pcX", false,-1, 31,0);
    tracep->declBus(c+188,"csrX", false,-1, 31,0);
    tracep->declBus(c+196,"rdX", false,-1, 4,0);
    tracep->declBit(c+457,"s_valid", false,-1);
    tracep->declBit(c+457,"s_ready", false,-1);
    tracep->declBit(c+457,"m_ready", false,-1);
    tracep->declBit(c+457,"m_valid", false,-1);
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
    VlWide<6>/*191:0*/ __Vtemp_h879478f5__0;
    VlWide<6>/*191:0*/ __Vtemp_h7ad68f80__0;
    VlWide<3>/*95:0*/ __Vtemp_h9b92af8f__0;
    VlWide<6>/*191:0*/ __Vtemp_h613f4dfe__0;
    VlWide<9>/*287:0*/ __Vtemp_h84333e7f__0;
    VlWide<6>/*191:0*/ __Vtemp_hff3436d3__0;
    VlWide<3>/*95:0*/ __Vtemp_hcc0a275b__0;
    VlWide<4>/*127:0*/ __Vtemp_h953757aa__0;
    VlWide<4>/*127:0*/ __Vtemp_he8e6515a__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+5,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list[4]),3);
    bufp->fullSData(oldp+6,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+7,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+8,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+9,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+10,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+11,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+12,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[6]),10);
    bufp->fullCData(oldp+13,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+14,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+15,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+16,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+17,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+18,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+19,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+20,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+21,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+22,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+23,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+24,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+25,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+26,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+27,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+28,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+29,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+30,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+31,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+32,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list[1]),2);
    bufp->fullSData(oldp+33,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+34,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+35,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+36,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+37,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+38,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+39,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+40,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[7]),10);
    bufp->fullSData(oldp+41,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[8]),10);
    bufp->fullSData(oldp+42,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[9]),10);
    bufp->fullCData(oldp+43,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[0]),6);
    bufp->fullCData(oldp+44,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[1]),6);
    bufp->fullCData(oldp+45,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[2]),6);
    bufp->fullCData(oldp+46,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[3]),6);
    bufp->fullCData(oldp+47,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[4]),6);
    bufp->fullCData(oldp+48,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[5]),6);
    bufp->fullCData(oldp+49,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[6]),6);
    bufp->fullCData(oldp+50,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[7]),6);
    bufp->fullCData(oldp+51,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[8]),6);
    bufp->fullCData(oldp+52,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[9]),6);
    bufp->fullCData(oldp+53,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+54,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+55,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+56,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+57,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+58,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+59,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+60,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+61,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[8]),4);
    bufp->fullCData(oldp+62,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[9]),4);
    bufp->fullSData(oldp+63,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[0]),12);
    bufp->fullSData(oldp+64,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[1]),12);
    bufp->fullSData(oldp+65,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[2]),12);
    bufp->fullSData(oldp+66,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[3]),12);
    bufp->fullSData(oldp+67,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[4]),12);
    bufp->fullSData(oldp+68,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[5]),12);
    bufp->fullSData(oldp+69,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[6]),12);
    bufp->fullSData(oldp+70,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[7]),12);
    bufp->fullSData(oldp+71,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[8]),12);
    bufp->fullSData(oldp+72,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[0]),9);
    bufp->fullSData(oldp+73,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[1]),9);
    bufp->fullSData(oldp+74,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[2]),9);
    bufp->fullSData(oldp+75,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[3]),9);
    bufp->fullSData(oldp+76,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[4]),9);
    bufp->fullSData(oldp+77,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[5]),9);
    bufp->fullSData(oldp+78,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[6]),9);
    bufp->fullSData(oldp+79,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[7]),9);
    bufp->fullSData(oldp+80,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[8]),9);
    bufp->fullCData(oldp+81,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+82,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+83,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+84,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+85,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+86,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+87,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+88,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[7]),3);
    bufp->fullCData(oldp+89,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[8]),3);
    bufp->fullCData(oldp+90,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[0]),6);
    bufp->fullCData(oldp+91,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[1]),6);
    bufp->fullCData(oldp+92,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[2]),6);
    bufp->fullCData(oldp+93,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[3]),6);
    bufp->fullCData(oldp+94,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[4]),6);
    bufp->fullCData(oldp+95,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+96,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+97,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+98,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+99,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+100,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+101,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+102,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+103,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+104,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[4]),3);
    bufp->fullSData(oldp+105,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__pair_list[0]),11);
    bufp->fullSData(oldp+106,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__pair_list[1]),11);
    bufp->fullSData(oldp+107,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__pair_list[2]),11);
    bufp->fullCData(oldp+108,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+109,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+110,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+111,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list[0]),8);
    bufp->fullCData(oldp+112,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list[1]),8);
    bufp->fullCData(oldp+113,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list[2]),8);
    bufp->fullCData(oldp+114,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+115,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+116,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+117,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[3]),8);
    bufp->fullCData(oldp+118,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[4]),8);
    bufp->fullCData(oldp+119,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[0]),5);
    bufp->fullCData(oldp+120,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[1]),5);
    bufp->fullCData(oldp+121,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[2]),5);
    bufp->fullCData(oldp+122,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[3]),5);
    bufp->fullCData(oldp+123,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[4]),5);
    bufp->fullCData(oldp+124,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+125,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+126,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+127,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+128,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+129,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+130,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+131,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+132,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+133,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+134,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+135,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+136,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+137,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+138,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+139,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[5]),3);
    bufp->fullSData(oldp+140,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+141,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+142,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+143,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list[3]),12);
    bufp->fullCData(oldp+144,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+145,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+146,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+147,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+148,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+149,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+150,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+151,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+152,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+153,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+154,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+155,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+156,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7]),3);
    bufp->fullBit(oldp+157,((1U & ((~ ((0x37U == (0x7fU 
                                                  & vlSelf->npc__DOT__instF)) 
                                       | ((0x17U == 
                                           (0x7fU & vlSelf->npc__DOT__instF)) 
                                          | ((0x6fU 
                                              == (0x7fU 
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
    bufp->fullBit(oldp+158,(vlSelf->npc__DOT__validF));
    bufp->fullIData(oldp+159,(vlSelf->npc__DOT__instF),32);
    bufp->fullCData(oldp+160,((0x7fU & vlSelf->npc__DOT__instF)),7);
    bufp->fullCData(oldp+161,((vlSelf->npc__DOT__instF 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+162,((7U & (vlSelf->npc__DOT__instF 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+163,(vlSelf->npc__DOT__mrtypeD),3);
    bufp->fullCData(oldp+164,((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                                     >> 1U))),3);
    bufp->fullCData(oldp+165,(vlSelf->npc__DOT__ALU_opD),3);
    bufp->fullCData(oldp+166,(vlSelf->npc__DOT__rdregsrcD),3);
    bufp->fullCData(oldp+167,(vlSelf->npc__DOT__inst_type),3);
    bufp->fullCData(oldp+168,(((0x17U == (0x7fU & vlSelf->npc__DOT__instF))
                                ? 1U : 0U)),2);
    bufp->fullCData(oldp+169,(vlSelf->npc__DOT__ALUsrc2D),2);
    bufp->fullSData(oldp+170,((vlSelf->npc__DOT__instF 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+171,(((3U == (0x7fU & vlSelf->npc__DOT__instF)) 
                             | (0x23U == (0x7fU & vlSelf->npc__DOT__instF)))));
    bufp->fullBit(oldp+172,((0x23U == (0x7fU & vlSelf->npc__DOT__instF))));
    bufp->fullBit(oldp+173,((0x63U == (0x7fU & vlSelf->npc__DOT__instF))));
    bufp->fullBit(oldp+174,(vlSelf->npc__DOT__jumpD));
    bufp->fullBit(oldp+175,(vlSelf->npc__DOT__jalrD));
    bufp->fullBit(oldp+176,(vlSelf->npc__DOT__ecallD));
    bufp->fullBit(oldp+177,(vlSelf->npc__DOT__mretD));
    bufp->fullBit(oldp+178,(vlSelf->npc__DOT__write_csr));
    bufp->fullCData(oldp+179,(vlSelf->npc__DOT__mwmaskD),8);
    bufp->fullCData(oldp+180,((0x1fU & (vlSelf->npc__DOT__instF 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+181,(vlSelf->npc__DOT__rf_raddr2),5);
    bufp->fullCData(oldp+182,((0x1fU & (vlSelf->npc__DOT__instF 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+183,(vlSelf->npc__DOT__src1D),32);
    bufp->fullIData(oldp+184,(vlSelf->npc__DOT__src2D),32);
    bufp->fullIData(oldp+185,(vlSelf->npc__DOT__immD),32);
    bufp->fullSData(oldp+186,(vlSelf->npc__DOT__csraddrD),12);
    bufp->fullIData(oldp+187,(vlSelf->npc__DOT__csr_rdata),32);
    bufp->fullIData(oldp+188,(vlSelf->npc__DOT__csrD),32);
    bufp->fullIData(oldp+189,(vlSelf->npc__DOT__rddataW),32);
    bufp->fullIData(oldp+190,(((IData)(vlSelf->npc__DOT__ecallD)
                                ? vlSelf->npc__DOT__src2D
                                : vlSelf->npc__DOT__rddataW)),32);
    bufp->fullIData(oldp+191,(((IData)(vlSelf->npc__DOT__ecallD)
                                ? vlSelf->npc__DOT__pcF
                                : vlSelf->npc__DOT__rddataW)),32);
    bufp->fullBit(oldp+192,((0x305U == (IData)(vlSelf->npc__DOT__csraddrD))));
    bufp->fullBit(oldp+193,(((IData)(vlSelf->npc__DOT__ecallD) 
                             | (0x342U == (IData)(vlSelf->npc__DOT__csraddrD)))));
    bufp->fullBit(oldp+194,(((IData)(vlSelf->npc__DOT__ecallD) 
                             | (0x341U == (IData)(vlSelf->npc__DOT__csraddrD)))));
    bufp->fullBit(oldp+195,((0x300U == (IData)(vlSelf->npc__DOT__csraddrD))));
    bufp->fullCData(oldp+196,((0x1fU & (vlSelf->npc__DOT__instF 
                                        >> 7U))),5);
    bufp->fullIData(oldp+197,(vlSelf->npc__DOT__ALU_A),32);
    bufp->fullIData(oldp+198,(vlSelf->npc__DOT__ALU_B),32);
    bufp->fullIData(oldp+199,((IData)(vlSelf->npc__DOT__u_ALU__DOT__out)),32);
    bufp->fullBit(oldp+200,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+201,((1U & (~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))));
    bufp->fullBit(oldp+202,(vlSelf->npc__DOT__Cout));
    bufp->fullBit(oldp+203,((1U & (~ (IData)(vlSelf->npc__DOT__Cout)))));
    bufp->fullBit(oldp+204,((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out))));
    bufp->fullBit(oldp+205,(vlSelf->npc__DOT__slt));
    bufp->fullBit(oldp+206,((1U & (~ (IData)(vlSelf->npc__DOT__slt)))));
    bufp->fullBit(oldp+207,(vlSelf->npc__DOT__cmp_resultX));
    bufp->fullIData(oldp+208,(((IData)(vlSelf->npc__DOT__jalrD)
                                ? vlSelf->npc__DOT__src1D
                                : vlSelf->npc__DOT__pcF)),32);
    bufp->fullIData(oldp+209,((((IData)(vlSelf->npc__DOT__jalrD)
                                 ? vlSelf->npc__DOT__src1D
                                 : vlSelf->npc__DOT__pcF) 
                               + vlSelf->npc__DOT__immD)),32);
    bufp->fullIData(oldp+210,((((IData)(vlSelf->npc__DOT__jumpD) 
                                | ((0x63U == (0x7fU 
                                              & vlSelf->npc__DOT__instF)) 
                                   & (IData)(vlSelf->npc__DOT__cmp_resultX)))
                                ? (((IData)(vlSelf->npc__DOT__jalrD)
                                     ? vlSelf->npc__DOT__src1D
                                     : vlSelf->npc__DOT__pcF) 
                                   + vlSelf->npc__DOT__immD)
                                : ((IData)(4U) + vlSelf->npc__DOT__pcF))),32);
    bufp->fullIData(oldp+211,((((IData)(vlSelf->npc__DOT__ecallD) 
                                | (IData)(vlSelf->npc__DOT__mretD))
                                ? vlSelf->npc__DOT__csrD
                                : (((IData)(vlSelf->npc__DOT__jumpD) 
                                    | ((0x63U == (0x7fU 
                                                  & vlSelf->npc__DOT__instF)) 
                                       & (IData)(vlSelf->npc__DOT__cmp_resultX)))
                                    ? (((IData)(vlSelf->npc__DOT__jalrD)
                                         ? vlSelf->npc__DOT__src1D
                                         : vlSelf->npc__DOT__pcF) 
                                       + vlSelf->npc__DOT__immD)
                                    : ((IData)(4U) 
                                       + vlSelf->npc__DOT__pcF)))),32);
    bufp->fullBit(oldp+212,(((IData)(vlSelf->npc__DOT__jumpD) 
                             | ((0x63U == (0x7fU & vlSelf->npc__DOT__instF)) 
                                & (IData)(vlSelf->npc__DOT__cmp_resultX)))));
    bufp->fullIData(oldp+213,(vlSelf->npc__DOT__rdata),32);
    bufp->fullIData(oldp+214,(vlSelf->npc__DOT__mdataM),32);
    bufp->fullBit(oldp+215,((5U == (IData)(vlSelf->npc__DOT__rdregsrcD))));
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
    bufp->fullWData(oldp+216,(__Vtemp_h879478f5__0),175);
    bufp->fullQData(oldp+222,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+224,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+226,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+228,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+230,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+232,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+233,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+234,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+235,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+236,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+237,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+238,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+239,((0x37U == (0x7fU & vlSelf->npc__DOT__instF))));
    bufp->fullBit(oldp+240,((0x17U == (0x7fU & vlSelf->npc__DOT__instF))));
    bufp->fullBit(oldp+241,((0x6fU == (0x7fU & vlSelf->npc__DOT__instF))));
    bufp->fullBit(oldp+242,((3U == (0x7fU & vlSelf->npc__DOT__instF))));
    bufp->fullBit(oldp+243,((0x13U == (0x7fU & vlSelf->npc__DOT__instF))));
    bufp->fullBit(oldp+244,((0x33U == (0x7fU & vlSelf->npc__DOT__instF))));
    bufp->fullBit(oldp+245,(vlSelf->npc__DOT__idu_inst__DOT__ebreak));
    bufp->fullBit(oldp+246,((0x73U == (0x7fU & vlSelf->npc__DOT__instF))));
    bufp->fullBit(oldp+247,((1U & (~ ((0x37U == (0x7fU 
                                                 & vlSelf->npc__DOT__instF)) 
                                      | ((0x17U == 
                                          (0x7fU & vlSelf->npc__DOT__instF)) 
                                         | ((0x6fU 
                                             == (0x7fU 
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
    bufp->fullBit(oldp+248,((1U & (IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out))));
    bufp->fullBit(oldp+249,((1U & ((0x63U == (0x7fU 
                                              & vlSelf->npc__DOT__instF)) 
                                   | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                                      | (IData)((0x40000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->npc__DOT__instF))))))));
    bufp->fullBit(oldp+250,(((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                             & (IData)((0x1000U == 
                                        (0xfe007000U 
                                         & vlSelf->npc__DOT__instF))))));
    bufp->fullBit(oldp+251,(((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0) 
                             & (0U == (vlSelf->npc__DOT__instF 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+252,(((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0) 
                             & (0x20U == (vlSelf->npc__DOT__instF 
                                          >> 0x19U)))));
    bufp->fullBit(oldp+253,(((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                             & (0x4000U == (0x7000U 
                                            & vlSelf->npc__DOT__instF)))));
    bufp->fullBit(oldp+254,(((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                             & (0x6000U == (0x7000U 
                                            & vlSelf->npc__DOT__instF)))));
    bufp->fullBit(oldp+255,(((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                             & (0x7000U == (0x7000U 
                                            & vlSelf->npc__DOT__instF)))));
    bufp->fullBit(oldp+256,((1U & ((0x63U == (0x7fU 
                                              & vlSelf->npc__DOT__instF)) 
                                   | ((0x23U == (0x7fU 
                                                 & vlSelf->npc__DOT__instF)) 
                                      | ((IData)(vlSelf->npc__DOT__ecallD) 
                                         | ((IData)(vlSelf->npc__DOT__mretD) 
                                            | ((~ (
                                                   (0x37U 
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
    bufp->fullCData(oldp+257,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key),7);
    bufp->fullCData(oldp+258,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+259,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+260,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key),2);
    bufp->fullCData(oldp+261,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+262,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+263,(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out),4);
    bufp->fullCData(oldp+264,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key),6);
    bufp->fullCData(oldp+265,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+266,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+267,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key),9);
    bufp->fullCData(oldp+268,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+269,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+270,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+271,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+272,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+273,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+274,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key),5);
    bufp->fullCData(oldp+275,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+276,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit));
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
                                          << 9U) | 
                                         (((IData)(4U) 
                                           + vlSelf->npc__DOT__pcF) 
                                          >> 0x1aU)));
    __Vtemp_h7ad68f80__0[4U] = (0x200U | (((IData)(vlSelf->npc__DOT__u_ALU__DOT__out) 
                                           << 0xcU) 
                                          | (vlSelf->npc__DOT__mdataM 
                                             >> 0x17U)));
    __Vtemp_h7ad68f80__0[5U] = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__out) 
                                >> 0x14U);
    bufp->fullWData(oldp+277,(__Vtemp_h7ad68f80__0),175);
    bufp->fullQData(oldp+283,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+285,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+287,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+289,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+291,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+293,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+294,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+295,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+296,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+297,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+298,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+299,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+300,((0x2468aU | ((0x100000U 
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
    bufp->fullCData(oldp+301,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+302,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+303,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+304,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+305,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+306,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[5]),4);
    bufp->fullBit(oldp+307,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+308,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+309,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+310,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+311,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+312,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+313,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+314,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+315,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+316,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit));
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
                                         | (7U & ((- (IData)(
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
    bufp->fullWData(oldp+317,(__Vtemp_h613f4dfe__0),175);
    bufp->fullQData(oldp+323,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+325,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+327,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+329,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+331,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+333,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+334,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+335,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+336,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+337,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+338,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+339,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+340,(vlSelf->npc__DOT__u_ALU__DOT__add_overflow));
    bufp->fullBit(oldp+341,(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow));
    bufp->fullBit(oldp+342,(vlSelf->npc__DOT__u_ALU__DOT__add_Cout));
    bufp->fullBit(oldp+343,(vlSelf->npc__DOT__u_ALU__DOT__sub_Cout));
    bufp->fullIData(oldp+344,(vlSelf->npc__DOT__u_ALU__DOT__add_result),32);
    bufp->fullIData(oldp+345,(vlSelf->npc__DOT__u_ALU__DOT__sub_result),32);
    bufp->fullQData(oldp+346,(vlSelf->npc__DOT__u_ALU__DOT__out),33);
    bufp->fullIData(oldp+348,((~ vlSelf->npc__DOT__ALU_B)),32);
    __Vtemp_h84333e7f__0[0U] = (IData)((0xe00000000ULL 
                                        | (QData)((IData)(vlSelf->__VdfgTmp_h46b7e40b__0))));
    __Vtemp_h84333e7f__0[1U] = ((vlSelf->__VdfgTmp_h46a938df__0 
                                 << 4U) | (IData)((
                                                   (0xe00000000ULL 
                                                    | (QData)((IData)(vlSelf->__VdfgTmp_h46b7e40b__0))) 
                                                   >> 0x20U)));
    __Vtemp_h84333e7f__0[2U] = (0xc0U | ((vlSelf->__VdfgTmp_hc2b79a77__0 
                                          << 8U) | 
                                         (vlSelf->__VdfgTmp_h46a938df__0 
                                          >> 0x1cU)));
    __Vtemp_h84333e7f__0[3U] = (0xa00U | ((vlSelf->__VdfgTmp_hc5593bcf__0 
                                           << 0xcU) 
                                          | (vlSelf->__VdfgTmp_hc2b79a77__0 
                                             >> 0x18U)));
    __Vtemp_h84333e7f__0[4U] = (0x8000U | ((vlSelf->__VdfgTmp_hc20fdb71__0 
                                            << 0x10U) 
                                           | (vlSelf->__VdfgTmp_hc5593bcf__0 
                                              >> 0x14U)));
    __Vtemp_h84333e7f__0[5U] = (0x60000U | ((vlSelf->__VdfgTmp_h468c645e__0 
                                             << 0x14U) 
                                            | (vlSelf->__VdfgTmp_hc20fdb71__0 
                                               >> 0x10U)));
    __Vtemp_h84333e7f__0[6U] = (0x400000U | ((vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                              << 0x18U) 
                                             | (vlSelf->__VdfgTmp_h468c645e__0 
                                                >> 0xcU)));
    __Vtemp_h84333e7f__0[7U] = (0x2000000U | ((vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                               << 0x1cU) 
                                              | (((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow) 
                                                  << 0x18U) 
                                                 | (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                    >> 8U))));
    __Vtemp_h84333e7f__0[8U] = (((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow) 
                                 << 0x1cU) | (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                              >> 4U));
    bufp->fullWData(oldp+349,(__Vtemp_h84333e7f__0),288);
    bufp->fullQData(oldp+358,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+360,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+362,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+364,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+366,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+368,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+370,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+372,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+374,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),33);
    bufp->fullQData(oldp+376,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),33);
    bufp->fullQData(oldp+378,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),33);
    bufp->fullQData(oldp+380,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),33);
    bufp->fullQData(oldp+382,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),33);
    bufp->fullQData(oldp+384,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),33);
    bufp->fullQData(oldp+386,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),33);
    bufp->fullQData(oldp+388,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7]),33);
    bufp->fullQData(oldp+390,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),33);
    bufp->fullBit(oldp+392,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+393,((5U != (IData)(vlSelf->npc__DOT__rdregsrcD))));
    bufp->fullBit(oldp+394,(vlSelf->npc__DOT__rst_d));
    bufp->fullIData(oldp+395,(vlSelf->npc__DOT__pcF),32);
    bufp->fullIData(oldp+396,(((IData)(4U) + vlSelf->npc__DOT__pcF)),32);
    bufp->fullIData(oldp+397,(vlSelf->npc__DOT__mtvec_data),32);
    bufp->fullIData(oldp+398,(vlSelf->npc__DOT__mcause_data),32);
    bufp->fullIData(oldp+399,(vlSelf->npc__DOT__mepc_data),32);
    bufp->fullIData(oldp+400,(vlSelf->npc__DOT__mstatus_data),32);
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
    bufp->fullWData(oldp+401,(__Vtemp_hff3436d3__0),176);
    bufp->fullQData(oldp+407,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[0]),44);
    bufp->fullQData(oldp+409,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[1]),44);
    bufp->fullQData(oldp+411,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[2]),44);
    bufp->fullQData(oldp+413,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[3]),44);
    bufp->fullIData(oldp+415,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+416,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+417,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+418,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[3]),32);
    bufp->fullCData(oldp+419,(vlSelf->npc__DOT__u_IFU__DOT__state),2);
    bufp->fullIData(oldp+420,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+421,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+422,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+423,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+424,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+425,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+426,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+427,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+428,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+429,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+430,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+431,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+432,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+433,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+434,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+435,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+436,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+437,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+438,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+439,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+440,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+441,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+442,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+443,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+444,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+445,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+446,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+447,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+448,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+449,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+450,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+451,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+452,(vlSelf->npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+453,(vlSelf->clk));
    bufp->fullBit(oldp+454,(vlSelf->rst));
    bufp->fullBit(oldp+455,(((~ (IData)(vlSelf->rst)) 
                             & (IData)(vlSelf->npc__DOT__rst_d))));
    bufp->fullBit(oldp+456,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullBit(oldp+457,(1U));
    bufp->fullIData(oldp+458,(0x1800U),32);
    bufp->fullIData(oldp+459,(5U),32);
    bufp->fullIData(oldp+460,(3U),32);
    bufp->fullIData(oldp+461,(0x20U),32);
    bufp->fullIData(oldp+462,(0U),32);
    bufp->fullIData(oldp+463,(1U),32);
    bufp->fullIData(oldp+464,(0x23U),32);
    bufp->fullIData(oldp+465,(5U),32);
    bufp->fullIData(oldp+466,(7U),32);
    bufp->fullCData(oldp+467,(0U),3);
    __Vtemp_hcc0a275b__0[0U] = 0x8250500bU;
    __Vtemp_hcc0a275b__0[1U] = 0x14188710U;
    __Vtemp_hcc0a275b__0[2U] = 0x20U;
    bufp->fullWData(oldp+468,(__Vtemp_hcc0a275b__0),70);
    bufp->fullIData(oldp+471,(0xaU),32);
    bufp->fullIData(oldp+472,(7U),32);
    bufp->fullIData(oldp+473,(2U),32);
    bufp->fullCData(oldp+474,(1U),2);
    bufp->fullCData(oldp+475,(0x86U),8);
    bufp->fullIData(oldp+476,(4U),32);
    bufp->fullIData(oldp+477,(2U),32);
    bufp->fullIData(oldp+478,(6U),32);
    bufp->fullCData(oldp+479,(0U),4);
    __Vtemp_h953757aa__0[0U] = 0x5a945599U;
    __Vtemp_h953757aa__0[1U] = 0x6d23ca49U;
    __Vtemp_h953757aa__0[2U] = 0xc2912cU;
    __Vtemp_h953757aa__0[3U] = 1U;
    bufp->fullWData(oldp+480,(__Vtemp_h953757aa__0),100);
    bufp->fullIData(oldp+484,(0xaU),32);
    bufp->fullIData(oldp+485,(9U),32);
    bufp->fullCData(oldp+486,(6U),3);
    __Vtemp_he8e6515a__0[0U] = 0x2101000aU;
    __Vtemp_he8e6515a__0[1U] = 0x850400U;
    __Vtemp_he8e6515a__0[2U] = 0x40320410U;
    __Vtemp_he8e6515a__0[3U] = 0x803U;
    bufp->fullWData(oldp+487,(__Vtemp_he8e6515a__0),108);
    bufp->fullIData(oldp+491,(0xcU),32);
    bufp->fullIData(oldp+492,(9U),32);
    bufp->fullIData(oldp+493,(0x2528ecU),30);
    bufp->fullIData(oldp+494,(8U),32);
    bufp->fullCData(oldp+495,(0U),8);
    bufp->fullQData(oldp+496,(0x481a0fULL),33);
    bufp->fullIData(oldp+498,(0xbU),32);
    bufp->fullIData(oldp+499,(3U),32);
    bufp->fullQData(oldp+500,(0x814223140dULL),40);
    bufp->fullIData(oldp+502,(0U),32);
    bufp->fullBit(oldp+503,(0U));
    bufp->fullIData(oldp+504,(6U),32);
    bufp->fullIData(oldp+505,(0x2cU),32);
    bufp->fullIData(oldp+506,(4U),32);
    bufp->fullIData(oldp+507,(0x21U),32);
    bufp->fullQData(oldp+508,(0ULL),33);
    bufp->fullIData(oldp+510,(0x24U),32);
    bufp->fullIData(oldp+511,(8U),32);
    bufp->fullCData(oldp+512,(0U),2);
}

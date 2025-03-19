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
    tracep->declBit(c+516,"clk", false,-1);
    tracep->declBit(c+517,"rst", false,-1);
    tracep->pushNamePrefix("npc ");
    tracep->declBit(c+516,"clk", false,-1);
    tracep->declBit(c+517,"rst", false,-1);
    tracep->declBit(c+160,"stop_sim", false,-1);
    tracep->declBit(c+161,"validF", false,-1);
    tracep->declBit(c+518,"start", false,-1);
    tracep->declBit(c+519,"ifetch_en", false,-1);
    tracep->declBit(c+162,"rst_d1", false,-1);
    tracep->declBit(c+163,"rst_d2", false,-1);
    tracep->declBus(c+520,"instF", false,-1, 31,0);
    tracep->declBus(c+164,"pcF", false,-1, 31,0);
    tracep->declBus(c+165,"snpcF", false,-1, 31,0);
    tracep->declBus(c+166,"instD", false,-1, 31,0);
    tracep->declBus(c+167,"pcD", false,-1, 31,0);
    tracep->declBus(c+168,"snpcD", false,-1, 31,0);
    tracep->declBit(c+169,"readyD", false,-1);
    tracep->declBit(c+170,"validD", false,-1);
    tracep->declBus(c+171,"opcode", false,-1, 6,0);
    tracep->declBus(c+172,"funct7", false,-1, 6,0);
    tracep->declBus(c+173,"funct3", false,-1, 2,0);
    tracep->declBus(c+174,"mrtypeD", false,-1, 2,0);
    tracep->declBus(c+175,"cmp_typeD", false,-1, 2,0);
    tracep->declBus(c+176,"ALU_opD", false,-1, 2,0);
    tracep->declBus(c+177,"rdregsrcD", false,-1, 2,0);
    tracep->declBus(c+178,"inst_type", false,-1, 2,0);
    tracep->declBus(c+179,"ALUsrc1D", false,-1, 1,0);
    tracep->declBus(c+180,"ALUsrc2D", false,-1, 1,0);
    tracep->declBus(c+181,"funct12", false,-1, 11,0);
    tracep->declBit(c+182,"mvalidD", false,-1);
    tracep->declBit(c+183,"mwenD", false,-1);
    tracep->declBit(c+184,"branchD", false,-1);
    tracep->declBit(c+185,"jumpD", false,-1);
    tracep->declBit(c+186,"jalrD", false,-1);
    tracep->declBit(c+187,"ecallD", false,-1);
    tracep->declBit(c+188,"mretD", false,-1);
    tracep->declBit(c+189,"write_csr", false,-1);
    tracep->declBus(c+190,"mwmaskD", false,-1, 7,0);
    tracep->declBus(c+191,"rf_raddr1", false,-1, 4,0);
    tracep->declBus(c+192,"rf_raddr2", false,-1, 4,0);
    tracep->declBus(c+191,"rs1", false,-1, 4,0);
    tracep->declBus(c+193,"rs2", false,-1, 4,0);
    tracep->declBus(c+194,"src1D", false,-1, 31,0);
    tracep->declBus(c+195,"src2D", false,-1, 31,0);
    tracep->declBus(c+196,"immD", false,-1, 31,0);
    tracep->declBus(c+197,"csraddrD", false,-1, 11,0);
    tracep->declBus(c+198,"mtvec_data", false,-1, 31,0);
    tracep->declBus(c+199,"mcause_data", false,-1, 31,0);
    tracep->declBus(c+200,"mepc_data", false,-1, 31,0);
    tracep->declBus(c+201,"mstatus_data", false,-1, 31,0);
    tracep->declBus(c+202,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+203,"csrD", false,-1, 31,0);
    tracep->declBus(c+204,"mtvec_wdata", false,-1, 31,0);
    tracep->declBus(c+205,"mcause_wdata", false,-1, 31,0);
    tracep->declBus(c+206,"mepc_wdata", false,-1, 31,0);
    tracep->declBus(c+204,"mstatus_wdata", false,-1, 31,0);
    tracep->declBit(c+207,"mtvec_wen", false,-1);
    tracep->declBit(c+208,"mcause_wen", false,-1);
    tracep->declBit(c+209,"mepc_wen", false,-1);
    tracep->declBit(c+210,"mstatus_wen", false,-1);
    tracep->declBus(c+211,"rdD", false,-1, 4,0);
    tracep->declBit(c+212,"mvalidX", false,-1);
    tracep->declBit(c+213,"mwenX", false,-1);
    tracep->declBit(c+214,"ecallX", false,-1);
    tracep->declBit(c+215,"mretX", false,-1);
    tracep->declBit(c+216,"branchX", false,-1);
    tracep->declBit(c+217,"jumpX", false,-1);
    tracep->declBit(c+218,"jalrX", false,-1);
    tracep->declBus(c+219,"ALUsrc1X", false,-1, 1,0);
    tracep->declBus(c+220,"ALUsrc2X", false,-1, 1,0);
    tracep->declBus(c+221,"cmp_typeX", false,-1, 2,0);
    tracep->declBus(c+222,"ALU_opX", false,-1, 2,0);
    tracep->declBus(c+223,"rdregsrcX", false,-1, 2,0);
    tracep->declBus(c+224,"mrtypeX", false,-1, 2,0);
    tracep->declBus(c+225,"rdX", false,-1, 4,0);
    tracep->declBus(c+226,"mwmaskX", false,-1, 7,0);
    tracep->declBus(c+227,"csraddrX", false,-1, 11,0);
    tracep->declBus(c+228,"csrX", false,-1, 31,0);
    tracep->declBus(c+229,"immX", false,-1, 31,0);
    tracep->declBus(c+230,"snpcX", false,-1, 31,0);
    tracep->declBus(c+231,"pcX", false,-1, 31,0);
    tracep->declBus(c+232,"src1X", false,-1, 31,0);
    tracep->declBus(c+233,"src2X", false,-1, 31,0);
    tracep->declBit(c+234,"validX", false,-1);
    tracep->declBit(c+235,"readyX", false,-1);
    tracep->declBus(c+236,"ALU_A", false,-1, 31,0);
    tracep->declBus(c+237,"ALU_B", false,-1, 31,0);
    tracep->declBus(c+238,"ALU_resultX", false,-1, 31,0);
    tracep->declBit(c+239,"overflow", false,-1);
    tracep->declBit(c+240,"zero", false,-1);
    tracep->declBit(c+241,"Cout", false,-1);
    tracep->declBit(c+241,"uge", false,-1);
    tracep->declBit(c+242,"ult", false,-1);
    tracep->declBit(c+240,"eq", false,-1);
    tracep->declBit(c+243,"neq", false,-1);
    tracep->declBit(c+244,"slt", false,-1);
    tracep->declBit(c+245,"sge", false,-1);
    tracep->declBit(c+246,"cmp_resultX", false,-1);
    tracep->declBus(c+247,"base_addr", false,-1, 31,0);
    tracep->declBus(c+229,"offset", false,-1, 31,0);
    tracep->declBus(c+248,"jump_addr", false,-1, 31,0);
    tracep->declBus(c+249,"dnpc_", false,-1, 31,0);
    tracep->declBus(c+250,"dnpcX", false,-1, 31,0);
    tracep->declBit(c+251,"judge_jump", false,-1);
    tracep->declBit(c+252,"readyM", false,-1);
    tracep->declBit(c+253,"validM", false,-1);
    tracep->declBit(c+254,"cmp_resultM", false,-1);
    tracep->declBit(c+255,"mvalidM", false,-1);
    tracep->declBit(c+256,"mwenM", false,-1);
    tracep->declBit(c+257,"ecallM", false,-1);
    tracep->declBus(c+258,"rdregsrcM", false,-1, 2,0);
    tracep->declBus(c+259,"mrtypeM", false,-1, 2,0);
    tracep->declBus(c+260,"rdM", false,-1, 4,0);
    tracep->declBus(c+261,"mwmaskM", false,-1, 7,0);
    tracep->declBus(c+262,"csraddrM", false,-1, 11,0);
    tracep->declBus(c+263,"dnpcM", false,-1, 31,0);
    tracep->declBus(c+264,"pcM", false,-1, 31,0);
    tracep->declBus(c+265,"src2M", false,-1, 31,0);
    tracep->declBus(c+266,"ALU_resultM", false,-1, 31,0);
    tracep->declBus(c+267,"csrM", false,-1, 31,0);
    tracep->declBus(c+268,"snpcM", false,-1, 31,0);
    tracep->declBus(c+269,"rdata", false,-1, 31,0);
    tracep->declBus(c+270,"mdataM", false,-1, 31,0);
    tracep->declBit(c+271,"readyW", false,-1);
    tracep->declBit(c+272,"validW", false,-1);
    tracep->declBit(c+273,"ecallW", false,-1);
    tracep->declBit(c+274,"cmp_resultW", false,-1);
    tracep->declBit(c+275,"disableW", false,-1);
    tracep->declBus(c+276,"rdregsrcW", false,-1, 2,0);
    tracep->declBus(c+277,"rdW", false,-1, 4,0);
    tracep->declBus(c+278,"src2W", false,-1, 31,0);
    tracep->declBus(c+279,"pcW", false,-1, 31,0);
    tracep->declBus(c+280,"dnpcW", false,-1, 31,0);
    tracep->declBus(c+204,"ALU_resultW", false,-1, 31,0);
    tracep->declBus(c+281,"csrW", false,-1, 31,0);
    tracep->declBus(c+282,"snpcW", false,-1, 31,0);
    tracep->declBus(c+283,"mdataW", false,-1, 31,0);
    tracep->declBus(c+284,"rddataW", false,-1, 31,0);
    tracep->declBus(c+285,"csraddrW", false,-1, 11,0);
    tracep->pushNamePrefix("data_mem ");
    tracep->declBus(c+266,"raddr", false,-1, 31,0);
    tracep->declBus(c+266,"waddr", false,-1, 31,0);
    tracep->declBus(c+265,"wdata", false,-1, 31,0);
    tracep->declBus(c+261,"wmask", false,-1, 7,0);
    tracep->declBit(c+256,"wen", false,-1);
    tracep->declBit(c+255,"valid", false,-1);
    tracep->declBus(c+269,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dstagebus_inst ");
    tracep->declBit(c+516,"clk", false,-1);
    tracep->declBit(c+517,"rst", false,-1);
    tracep->declBus(c+520,"instF", false,-1, 31,0);
    tracep->declBus(c+165,"snpcF", false,-1, 31,0);
    tracep->declBus(c+164,"pcF", false,-1, 31,0);
    tracep->declBus(c+166,"instD", false,-1, 31,0);
    tracep->declBus(c+168,"snpcD", false,-1, 31,0);
    tracep->declBus(c+167,"pcD", false,-1, 31,0);
    tracep->declBit(c+161,"s_valid", false,-1);
    tracep->declBit(c+169,"s_ready", false,-1);
    tracep->declBit(c+235,"m_ready", false,-1);
    tracep->declBit(c+170,"m_valid", false,-1);
    tracep->declBus(c+521,"IDLE", false,-1, 31,0);
    tracep->declBus(c+522,"WAIT_READY", false,-1, 31,0);
    tracep->declBit(c+170,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ext_mdata ");
    tracep->declBus(c+523,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+524,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+525,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+270,"out", false,-1, 31,0);
    tracep->declBus(c+259,"key", false,-1, 2,0);
    tracep->declBus(c+526,"default_out", false,-1, 31,0);
    tracep->declArray(c+286,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+523,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+524,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+525,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+522,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+270,"out", false,-1, 31,0);
    tracep->declBus(c+259,"key", false,-1, 2,0);
    tracep->declBus(c+526,"default_out", false,-1, 31,0);
    tracep->declArray(c+286,"lut", false,-1, 174,0);
    tracep->declBus(c+527,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+292+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+302+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+307,"lut_out", false,-1, 31,0);
    tracep->declBit(c+308,"hit", false,-1);
    tracep->declBus(c+528,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu_inst ");
    tracep->declBus(c+171,"opcode", false,-1, 6,0);
    tracep->declBus(c+173,"funct3", false,-1, 2,0);
    tracep->declBus(c+172,"funct7", false,-1, 6,0);
    tracep->declBus(c+181,"funct12", false,-1, 11,0);
    tracep->declBit(c+182,"mvalidD", false,-1);
    tracep->declBus(c+190,"mwmaskD", false,-1, 7,0);
    tracep->declBit(c+183,"mwenD", false,-1);
    tracep->declBus(c+174,"mrtypeD", false,-1, 2,0);
    tracep->declBus(c+175,"cmp_typeD", false,-1, 2,0);
    tracep->declBit(c+184,"branchD", false,-1);
    tracep->declBit(c+185,"jumpD", false,-1);
    tracep->declBus(c+176,"ALU_opD", false,-1, 2,0);
    tracep->declBus(c+177,"rdregsrcD", false,-1, 2,0);
    tracep->declBit(c+186,"jalrD", false,-1);
    tracep->declBus(c+179,"ALUsrc1D", false,-1, 1,0);
    tracep->declBus(c+180,"ALUsrc2D", false,-1, 1,0);
    tracep->declBus(c+178,"inst_type", false,-1, 2,0);
    tracep->declBit(c+187,"ecallD", false,-1);
    tracep->declBit(c+188,"mretD", false,-1);
    tracep->declBit(c+189,"write_csr", false,-1);
    tracep->declBit(c+160,"stop_sim", false,-1);
    tracep->declBit(c+309,"lui", false,-1);
    tracep->declBit(c+310,"auipc", false,-1);
    tracep->declBit(c+311,"jal", false,-1);
    tracep->declBit(c+312,"load", false,-1);
    tracep->declBit(c+183,"store", false,-1);
    tracep->declBit(c+313,"Iarith", false,-1);
    tracep->declBit(c+314,"Rarith", false,-1);
    tracep->declBit(c+160,"ebreak", false,-1);
    tracep->declBit(c+315,"csrRelated", false,-1);
    tracep->declBit(c+316,"csrrw", false,-1);
    tracep->declBit(c+317,"csrrs", false,-1);
    tracep->declBit(c+318,"mismatch", false,-1);
    tracep->declBit(c+319,"condset", false,-1);
    tracep->declBit(c+320,"sub", false,-1);
    tracep->declBit(c+321,"sll", false,-1);
    tracep->declBit(c+322,"srl", false,-1);
    tracep->declBit(c+323,"sra", false,-1);
    tracep->declBit(c+324,"xor_", false,-1);
    tracep->declBit(c+325,"or_", false,-1);
    tracep->declBit(c+326,"and_", false,-1);
    tracep->declBit(c+327,"is_disable", false,-1);
    tracep->pushNamePrefix("get_ALUop ");
    tracep->declBus(c+529,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+529,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+524,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+176,"out", false,-1, 2,0);
    tracep->declBus(c+328,"key", false,-1, 6,0);
    tracep->declBus(c+530,"default_out", false,-1, 2,0);
    tracep->declArray(c+531,"lut", false,-1, 69,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+529,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+529,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+524,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+522,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+176,"out", false,-1, 2,0);
    tracep->declBus(c+328,"key", false,-1, 6,0);
    tracep->declBus(c+530,"default_out", false,-1, 2,0);
    tracep->declArray(c+531,"lut", false,-1, 69,0);
    tracep->declBus(c+534,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+6+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+13+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+20+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+329,"lut_out", false,-1, 2,0);
    tracep->declBit(c+330,"hit", false,-1);
    tracep->declBus(c+535,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_ALUsrc2 ");
    tracep->declBus(c+524,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+524,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+536,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+180,"out", false,-1, 1,0);
    tracep->declBus(c+331,"key", false,-1, 2,0);
    tracep->declBus(c+537,"default_out", false,-1, 1,0);
    tracep->declBus(c+538,"lut", false,-1, 14,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+524,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+524,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+536,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+522,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+180,"out", false,-1, 1,0);
    tracep->declBus(c+331,"key", false,-1, 2,0);
    tracep->declBus(c+537,"default_out", false,-1, 1,0);
    tracep->declBus(c+538,"lut", false,-1, 14,0);
    tracep->declBus(c+523,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+27+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+30+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+33+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+332,"lut_out", false,-1, 1,0);
    tracep->declBit(c+333,"hit", false,-1);
    tracep->declBus(c+539,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_cmptype ");
    tracep->declBus(c+534,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+540,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+541,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+334,"out", false,-1, 3,0);
    tracep->declBus(c+335,"key", false,-1, 5,0);
    tracep->declBus(c+542,"default_out", false,-1, 3,0);
    tracep->declArray(c+543,"lut", false,-1, 99,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+534,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+540,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+541,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+522,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+334,"out", false,-1, 3,0);
    tracep->declBus(c+335,"key", false,-1, 5,0);
    tracep->declBus(c+542,"default_out", false,-1, 3,0);
    tracep->declArray(c+543,"lut", false,-1, 99,0);
    tracep->declBus(c+534,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+36+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+46+i*1,"key_list", true,(i+0), 5,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+56+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+336,"lut_out", false,-1, 3,0);
    tracep->declBit(c+337,"hit", false,-1);
    tracep->declBus(c+547,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_itype ");
    tracep->declBus(c+548,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+548,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+524,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+178,"out", false,-1, 2,0);
    tracep->declBus(c+338,"key", false,-1, 8,0);
    tracep->declBus(c+549,"default_out", false,-1, 2,0);
    tracep->declArray(c+550,"lut", false,-1, 107,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+548,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+548,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+524,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+522,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+178,"out", false,-1, 2,0);
    tracep->declBus(c+338,"key", false,-1, 8,0);
    tracep->declBus(c+549,"default_out", false,-1, 2,0);
    tracep->declArray(c+550,"lut", false,-1, 107,0);
    tracep->declBus(c+554,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+66+i*1,"pair_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+75+i*1,"key_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+84+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+339,"lut_out", false,-1, 2,0);
    tracep->declBit(c+340,"hit", false,-1);
    tracep->declBus(c+555,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_mrtype ");
    tracep->declBus(c+523,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+524,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+524,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+174,"out", false,-1, 2,0);
    tracep->declBus(c+173,"key", false,-1, 2,0);
    tracep->declBus(c+530,"default_out", false,-1, 2,0);
    tracep->declBus(c+556,"lut", false,-1, 29,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+523,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+524,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+524,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+522,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+174,"out", false,-1, 2,0);
    tracep->declBus(c+173,"key", false,-1, 2,0);
    tracep->declBus(c+530,"default_out", false,-1, 2,0);
    tracep->declBus(c+556,"lut", false,-1, 29,0);
    tracep->declBus(c+540,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+93+i*1,"pair_list", true,(i+0), 5,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+98+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+103+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+341,"lut_out", false,-1, 2,0);
    tracep->declBit(c+342,"hit", false,-1);
    tracep->declBus(c+528,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_mwmask ");
    tracep->declBus(c+524,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+524,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+557,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+190,"out", false,-1, 7,0);
    tracep->declBus(c+173,"key", false,-1, 2,0);
    tracep->declBus(c+558,"default_out", false,-1, 7,0);
    tracep->declQuad(c+559,"lut", false,-1, 32,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+524,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+524,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+557,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+522,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+190,"out", false,-1, 7,0);
    tracep->declBus(c+173,"key", false,-1, 2,0);
    tracep->declBus(c+558,"default_out", false,-1, 7,0);
    tracep->declQuad(c+559,"lut", false,-1, 32,0);
    tracep->declBus(c+561,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+108+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+111+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+114+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+343,"lut_out", false,-1, 7,0);
    tracep->declBit(c+344,"hit", false,-1);
    tracep->declBus(c+539,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_rdregsrc ");
    tracep->declBus(c+523,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+523,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+524,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+177,"out", false,-1, 2,0);
    tracep->declBus(c+345,"key", false,-1, 4,0);
    tracep->declBus(c+530,"default_out", false,-1, 2,0);
    tracep->declQuad(c+562,"lut", false,-1, 39,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+523,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+523,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+524,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+522,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+177,"out", false,-1, 2,0);
    tracep->declBus(c+345,"key", false,-1, 4,0);
    tracep->declBus(c+530,"default_out", false,-1, 2,0);
    tracep->declQuad(c+562,"lut", false,-1, 39,0);
    tracep->declBus(c+557,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+117+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+122+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+127+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+346,"lut_out", false,-1, 2,0);
    tracep->declBit(c+347,"hit", false,-1);
    tracep->declBus(c+528,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mcause ");
    tracep->declBus(c+525,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+516,"clk", false,-1);
    tracep->declBit(c+517,"rst", false,-1);
    tracep->declBus(c+205,"din", false,-1, 31,0);
    tracep->declBus(c+199,"dout", false,-1, 31,0);
    tracep->declBit(c+208,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc ");
    tracep->declBus(c+525,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+516,"clk", false,-1);
    tracep->declBit(c+517,"rst", false,-1);
    tracep->declBus(c+206,"din", false,-1, 31,0);
    tracep->declBus(c+200,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus ");
    tracep->declBus(c+525,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+564,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+516,"clk", false,-1);
    tracep->declBit(c+517,"rst", false,-1);
    tracep->declBus(c+204,"din", false,-1, 31,0);
    tracep->declBus(c+201,"dout", false,-1, 31,0);
    tracep->declBit(c+210,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec ");
    tracep->declBus(c+525,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+521,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+516,"clk", false,-1);
    tracep->declBit(c+517,"rst", false,-1);
    tracep->declBus(c+204,"din", false,-1, 31,0);
    tracep->declBus(c+198,"dout", false,-1, 31,0);
    tracep->declBit(c+207,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sel_WB ");
    tracep->declBus(c+523,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+524,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+525,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+284,"out", false,-1, 31,0);
    tracep->declBus(c+276,"key", false,-1, 2,0);
    tracep->declBus(c+526,"default_out", false,-1, 31,0);
    tracep->declArray(c+348,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+523,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+524,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+525,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+522,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+284,"out", false,-1, 31,0);
    tracep->declBus(c+276,"key", false,-1, 2,0);
    tracep->declBus(c+526,"default_out", false,-1, 31,0);
    tracep->declArray(c+348,"lut", false,-1, 174,0);
    tracep->declBus(c+527,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+354+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+132+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+364+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+369,"lut_out", false,-1, 31,0);
    tracep->declBit(c+370,"hit", false,-1);
    tracep->declBus(c+528,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sel_cmp ");
    tracep->declBus(c+540,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+524,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+522,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+246,"out", false,-1, 0,0);
    tracep->declBus(c+221,"key", false,-1, 2,0);
    tracep->declBus(c+565,"default_out", false,-1, 0,0);
    tracep->declBus(c+371,"lut", false,-1, 23,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+540,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+524,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+522,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+522,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+246,"out", false,-1, 0,0);
    tracep->declBus(c+221,"key", false,-1, 2,0);
    tracep->declBus(c+565,"default_out", false,-1, 0,0);
    tracep->declBus(c+371,"lut", false,-1, 23,0);
    tracep->declBus(c+541,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+372+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+137+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+378+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+384,"lut_out", false,-1, 0,0);
    tracep->declBit(c+385,"hit", false,-1);
    tracep->declBus(c+566,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sel_csr_read ");
    tracep->declBus(c+541,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+554,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+525,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+202,"out", false,-1, 31,0);
    tracep->declBus(c+197,"key", false,-1, 11,0);
    tracep->declBus(c+526,"default_out", false,-1, 31,0);
    tracep->declArray(c+386,"lut", false,-1, 175,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+541,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+554,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+525,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+522,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+202,"out", false,-1, 31,0);
    tracep->declBus(c+197,"key", false,-1, 11,0);
    tracep->declBus(c+526,"default_out", false,-1, 31,0);
    tracep->declArray(c+386,"lut", false,-1, 175,0);
    tracep->declBus(c+567,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+392+i*2,"pair_list", true,(i+0), 43,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+143+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+400+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+404,"lut_out", false,-1, 31,0);
    tracep->declBit(c+405,"hit", false,-1);
    tracep->declBus(c+568,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sel_imm ");
    tracep->declBus(c+523,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+524,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+525,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+196,"out", false,-1, 31,0);
    tracep->declBus(c+178,"key", false,-1, 2,0);
    tracep->declBus(c+526,"default_out", false,-1, 31,0);
    tracep->declArray(c+406,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+523,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+524,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+525,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+522,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+196,"out", false,-1, 31,0);
    tracep->declBus(c+178,"key", false,-1, 2,0);
    tracep->declBus(c+526,"default_out", false,-1, 31,0);
    tracep->declArray(c+406,"lut", false,-1, 174,0);
    tracep->declBus(c+527,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+412+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+147+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+422+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+427,"lut_out", false,-1, 31,0);
    tracep->declBit(c+428,"hit", false,-1);
    tracep->declBus(c+528,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ALU ");
    tracep->declBus(c+222,"mode", false,-1, 2,0);
    tracep->declBus(c+236,"A", false,-1, 31,0);
    tracep->declBus(c+237,"B", false,-1, 31,0);
    tracep->declBit(c+565,"Cin", false,-1);
    tracep->declBit(c+240,"zero", false,-1);
    tracep->declBit(c+239,"overflow", false,-1);
    tracep->declBit(c+241,"Cout", false,-1);
    tracep->declBus(c+238,"result", false,-1, 31,0);
    tracep->declBit(c+429,"add_overflow", false,-1);
    tracep->declBit(c+430,"sub_overflow", false,-1);
    tracep->declBit(c+431,"add_Cout", false,-1);
    tracep->declBit(c+432,"sub_Cout", false,-1);
    tracep->declBus(c+433,"add_result", false,-1, 31,0);
    tracep->declBus(c+434,"sub_result", false,-1, 31,0);
    tracep->declQuad(c+435,"out", false,-1, 32,0);
    tracep->pushNamePrefix("adder_inst ");
    tracep->declBus(c+236,"A", false,-1, 31,0);
    tracep->declBus(c+237,"B", false,-1, 31,0);
    tracep->declBit(c+565,"Cin", false,-1);
    tracep->declBus(c+433,"sum", false,-1, 31,0);
    tracep->declBit(c+431,"Cout", false,-1);
    tracep->declBit(c+429,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub_inst ");
    tracep->declBus(c+236,"A", false,-1, 31,0);
    tracep->declBus(c+437,"B", false,-1, 31,0);
    tracep->declBit(c+569,"Cin", false,-1);
    tracep->declBus(c+434,"sum", false,-1, 31,0);
    tracep->declBit(c+432,"Cout", false,-1);
    tracep->declBit(c+430,"overflow", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_MuxKeyWithDefault ");
    tracep->declBus(c+557,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+524,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+570,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+435,"out", false,-1, 32,0);
    tracep->declBus(c+222,"key", false,-1, 2,0);
    tracep->declQuad(c+571,"default_out", false,-1, 32,0);
    tracep->declArray(c+438,"lut", false,-1, 287,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+557,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+524,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+570,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+522,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+435,"out", false,-1, 32,0);
    tracep->declBus(c+222,"key", false,-1, 2,0);
    tracep->declQuad(c+571,"default_out", false,-1, 32,0);
    tracep->declArray(c+438,"lut", false,-1, 287,0);
    tracep->declBus(c+573,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+447+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+152+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+463+i*2,"data_list", true,(i+0), 32,0);
    }
    tracep->declQuad(c+479,"lut_out", false,-1, 32,0);
    tracep->declBit(c+481,"hit", false,-1);
    tracep->declBus(c+574,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_IFU ");
    tracep->declBit(c+516,"clk", false,-1);
    tracep->declBit(c+517,"rst", false,-1);
    tracep->declBus(c+164,"pc", false,-1, 31,0);
    tracep->declBus(c+520,"inst", false,-1, 31,0);
    tracep->declBit(c+519,"s_valid", false,-1);
    tracep->declBit(c+169,"m_ready", false,-1);
    tracep->declBit(c+161,"m_valid", false,-1);
    tracep->declBus(c+521,"IDLE", false,-1, 31,0);
    tracep->declBus(c+522,"WAIT_READY", false,-1, 31,0);
    tracep->declBit(c+161,"state", false,-1);
    tracep->pushNamePrefix("inst_mem ");
    tracep->declBus(c+164,"raddr", false,-1, 31,0);
    tracep->declBus(c+521,"waddr", false,-1, 31,0);
    tracep->declBus(c+521,"wdata", false,-1, 31,0);
    tracep->declBus(c+558,"wmask", false,-1, 7,0);
    tracep->declBit(c+565,"wen", false,-1);
    tracep->declBit(c+519,"valid", false,-1);
    tracep->declBus(c+520,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_Mstage_bus ");
    tracep->declBit(c+516,"clk", false,-1);
    tracep->declBit(c+517,"rst", false,-1);
    tracep->declBit(c+212,"mvalidX", false,-1);
    tracep->declBit(c+213,"mwenX", false,-1);
    tracep->declBus(c+226,"mwmaskX", false,-1, 7,0);
    tracep->declBus(c+224,"mrtypeX", false,-1, 2,0);
    tracep->declBus(c+223,"rdregsrcX", false,-1, 2,0);
    tracep->declBus(c+250,"dnpcX", false,-1, 31,0);
    tracep->declBus(c+230,"snpcX", false,-1, 31,0);
    tracep->declBus(c+231,"pcX", false,-1, 31,0);
    tracep->declBus(c+233,"src2X", false,-1, 31,0);
    tracep->declBus(c+238,"ALU_resultX", false,-1, 31,0);
    tracep->declBus(c+227,"csraddrX", false,-1, 11,0);
    tracep->declBus(c+228,"csrX", false,-1, 31,0);
    tracep->declBit(c+246,"cmp_resultX", false,-1);
    tracep->declBit(c+214,"ecallX", false,-1);
    tracep->declBus(c+225,"rdX", false,-1, 4,0);
    tracep->declBit(c+255,"mvalidM", false,-1);
    tracep->declBit(c+256,"mwenM", false,-1);
    tracep->declBus(c+261,"mwmaskM", false,-1, 7,0);
    tracep->declBus(c+259,"mrtypeM", false,-1, 2,0);
    tracep->declBus(c+258,"rdregsrcM", false,-1, 2,0);
    tracep->declBus(c+263,"dnpcM", false,-1, 31,0);
    tracep->declBus(c+268,"snpcM", false,-1, 31,0);
    tracep->declBus(c+264,"pcM", false,-1, 31,0);
    tracep->declBus(c+265,"src2M", false,-1, 31,0);
    tracep->declBus(c+266,"ALU_resultM", false,-1, 31,0);
    tracep->declBus(c+262,"csraddrM", false,-1, 11,0);
    tracep->declBus(c+267,"csrM", false,-1, 31,0);
    tracep->declBit(c+254,"cmp_resultM", false,-1);
    tracep->declBit(c+257,"ecallM", false,-1);
    tracep->declBus(c+260,"rdM", false,-1, 4,0);
    tracep->declBit(c+234,"s_valid", false,-1);
    tracep->declBit(c+252,"s_ready", false,-1);
    tracep->declBit(c+271,"m_ready", false,-1);
    tracep->declBit(c+253,"m_valid", false,-1);
    tracep->declBus(c+521,"IDLE", false,-1, 31,0);
    tracep->declBus(c+522,"WAIT_READY", false,-1, 31,0);
    tracep->declBit(c+253,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_PC ");
    tracep->declBit(c+516,"clk", false,-1);
    tracep->declBit(c+517,"rst", false,-1);
    tracep->declBit(c+272,"en", false,-1);
    tracep->declBus(c+250,"dnpc", false,-1, 31,0);
    tracep->declBus(c+164,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBus(c+523,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+525,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+516,"clk", false,-1);
    tracep->declBit(c+517,"rst", false,-1);
    tracep->declBus(c+284,"wdata", false,-1, 31,0);
    tracep->declBus(c+277,"waddr", false,-1, 4,0);
    tracep->declBit(c+482,"wen", false,-1);
    tracep->declBus(c+191,"raddr1", false,-1, 4,0);
    tracep->declBus(c+192,"raddr2", false,-1, 4,0);
    tracep->declBus(c+194,"rdata1", false,-1, 31,0);
    tracep->declBus(c+195,"rdata2", false,-1, 31,0);
    tracep->declBit(c+569,"ren", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+483+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+515,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_Wstage_bus ");
    tracep->declBit(c+516,"clk", false,-1);
    tracep->declBit(c+517,"rst", false,-1);
    tracep->declBus(c+263,"dnpcM", false,-1, 31,0);
    tracep->declBus(c+258,"rdregsrcM", false,-1, 2,0);
    tracep->declBus(c+270,"mdataM", false,-1, 31,0);
    tracep->declBus(c+266,"ALU_resultM", false,-1, 31,0);
    tracep->declBus(c+262,"csraddrM", false,-1, 11,0);
    tracep->declBus(c+268,"snpcM", false,-1, 31,0);
    tracep->declBus(c+264,"pcM", false,-1, 31,0);
    tracep->declBit(c+254,"cmp_resultM", false,-1);
    tracep->declBit(c+257,"ecallM", false,-1);
    tracep->declBus(c+267,"csrM", false,-1, 31,0);
    tracep->declBus(c+260,"rdM", false,-1, 4,0);
    tracep->declBus(c+265,"src2M", false,-1, 31,0);
    tracep->declBus(c+280,"dnpcW", false,-1, 31,0);
    tracep->declBus(c+276,"rdregsrcW", false,-1, 2,0);
    tracep->declBus(c+283,"mdataW", false,-1, 31,0);
    tracep->declBus(c+204,"ALU_resultW", false,-1, 31,0);
    tracep->declBus(c+285,"csraddrW", false,-1, 11,0);
    tracep->declBus(c+282,"snpcW", false,-1, 31,0);
    tracep->declBus(c+279,"pcW", false,-1, 31,0);
    tracep->declBit(c+274,"cmp_resultW", false,-1);
    tracep->declBit(c+273,"ecallW", false,-1);
    tracep->declBus(c+281,"csrW", false,-1, 31,0);
    tracep->declBus(c+277,"rdW", false,-1, 4,0);
    tracep->declBus(c+278,"src2W", false,-1, 31,0);
    tracep->declBit(c+253,"s_valid", false,-1);
    tracep->declBit(c+271,"s_ready", false,-1);
    tracep->declBit(c+569,"m_ready", false,-1);
    tracep->declBit(c+272,"m_valid", false,-1);
    tracep->declBus(c+521,"IDLE", false,-1, 31,0);
    tracep->declBus(c+522,"WAIT_READY", false,-1, 31,0);
    tracep->declBit(c+272,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Xstage_bus ");
    tracep->declBit(c+516,"clk", false,-1);
    tracep->declBit(c+517,"rst", false,-1);
    tracep->declBit(c+182,"mvalidD", false,-1);
    tracep->declBit(c+183,"mwenD", false,-1);
    tracep->declBus(c+190,"mwmaskD", false,-1, 7,0);
    tracep->declBus(c+174,"mrtypeD", false,-1, 2,0);
    tracep->declBit(c+187,"ecallD", false,-1);
    tracep->declBit(c+188,"mretD", false,-1);
    tracep->declBus(c+175,"cmp_typeD", false,-1, 2,0);
    tracep->declBit(c+184,"branchD", false,-1);
    tracep->declBit(c+185,"jumpD", false,-1);
    tracep->declBus(c+176,"ALU_opD", false,-1, 2,0);
    tracep->declBus(c+177,"rdregsrcD", false,-1, 2,0);
    tracep->declBit(c+186,"jalrD", false,-1);
    tracep->declBus(c+179,"ALUsrc1D", false,-1, 1,0);
    tracep->declBus(c+180,"ALUsrc2D", false,-1, 1,0);
    tracep->declBus(c+194,"src1D", false,-1, 31,0);
    tracep->declBus(c+195,"src2D", false,-1, 31,0);
    tracep->declBus(c+196,"immD", false,-1, 31,0);
    tracep->declBus(c+168,"snpcD", false,-1, 31,0);
    tracep->declBus(c+197,"csraddrD", false,-1, 11,0);
    tracep->declBus(c+167,"pcD", false,-1, 31,0);
    tracep->declBus(c+203,"csrD", false,-1, 31,0);
    tracep->declBus(c+211,"rdD", false,-1, 4,0);
    tracep->declBit(c+212,"mvalidX", false,-1);
    tracep->declBit(c+213,"mwenX", false,-1);
    tracep->declBus(c+226,"mwmaskX", false,-1, 7,0);
    tracep->declBus(c+224,"mrtypeX", false,-1, 2,0);
    tracep->declBit(c+214,"ecallX", false,-1);
    tracep->declBit(c+215,"mretX", false,-1);
    tracep->declBus(c+221,"cmp_typeX", false,-1, 2,0);
    tracep->declBit(c+216,"branchX", false,-1);
    tracep->declBit(c+217,"jumpX", false,-1);
    tracep->declBus(c+222,"ALU_opX", false,-1, 2,0);
    tracep->declBus(c+223,"rdregsrcX", false,-1, 2,0);
    tracep->declBit(c+218,"jalrX", false,-1);
    tracep->declBus(c+219,"ALUsrc1X", false,-1, 1,0);
    tracep->declBus(c+220,"ALUsrc2X", false,-1, 1,0);
    tracep->declBus(c+232,"src1X", false,-1, 31,0);
    tracep->declBus(c+233,"src2X", false,-1, 31,0);
    tracep->declBus(c+229,"immX", false,-1, 31,0);
    tracep->declBus(c+230,"snpcX", false,-1, 31,0);
    tracep->declBus(c+227,"csraddrX", false,-1, 11,0);
    tracep->declBus(c+231,"pcX", false,-1, 31,0);
    tracep->declBus(c+228,"csrX", false,-1, 31,0);
    tracep->declBus(c+225,"rdX", false,-1, 4,0);
    tracep->declBit(c+170,"s_valid", false,-1);
    tracep->declBit(c+235,"s_ready", false,-1);
    tracep->declBit(c+252,"m_ready", false,-1);
    tracep->declBit(c+234,"m_valid", false,-1);
    tracep->declBus(c+521,"IDLE", false,-1, 31,0);
    tracep->declBus(c+522,"WAIT_READY", false,-1, 31,0);
    tracep->declBit(c+234,"state", false,-1);
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
    VlWide<6>/*191:0*/ __Vtemp_h02160c61__0;
    VlWide<6>/*191:0*/ __Vtemp_h41cfb5f1__0;
    VlWide<6>/*191:0*/ __Vtemp_hff3436d3__0;
    VlWide<3>/*95:0*/ __Vtemp_h687c90e6__0;
    VlWide<6>/*191:0*/ __Vtemp_h1a1727fc__0;
    VlWide<9>/*287:0*/ __Vtemp_hb9820ff4__0;
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
    bufp->fullCData(oldp+27,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+28,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+29,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+30,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+31,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+32,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+33,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+34,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+35,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list[2]),2);
    bufp->fullSData(oldp+36,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+37,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+38,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+39,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+40,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+41,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+42,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+43,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[7]),10);
    bufp->fullSData(oldp+44,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[8]),10);
    bufp->fullSData(oldp+45,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[9]),10);
    bufp->fullCData(oldp+46,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[0]),6);
    bufp->fullCData(oldp+47,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[1]),6);
    bufp->fullCData(oldp+48,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[2]),6);
    bufp->fullCData(oldp+49,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[3]),6);
    bufp->fullCData(oldp+50,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[4]),6);
    bufp->fullCData(oldp+51,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[5]),6);
    bufp->fullCData(oldp+52,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[6]),6);
    bufp->fullCData(oldp+53,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[7]),6);
    bufp->fullCData(oldp+54,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[8]),6);
    bufp->fullCData(oldp+55,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[9]),6);
    bufp->fullCData(oldp+56,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+57,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+58,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+59,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+60,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+61,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+62,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+63,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+64,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[8]),4);
    bufp->fullCData(oldp+65,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[9]),4);
    bufp->fullSData(oldp+66,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[0]),12);
    bufp->fullSData(oldp+67,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[1]),12);
    bufp->fullSData(oldp+68,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[2]),12);
    bufp->fullSData(oldp+69,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[3]),12);
    bufp->fullSData(oldp+70,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[4]),12);
    bufp->fullSData(oldp+71,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[5]),12);
    bufp->fullSData(oldp+72,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[6]),12);
    bufp->fullSData(oldp+73,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[7]),12);
    bufp->fullSData(oldp+74,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[8]),12);
    bufp->fullSData(oldp+75,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[0]),9);
    bufp->fullSData(oldp+76,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[1]),9);
    bufp->fullSData(oldp+77,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[2]),9);
    bufp->fullSData(oldp+78,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[3]),9);
    bufp->fullSData(oldp+79,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[4]),9);
    bufp->fullSData(oldp+80,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[5]),9);
    bufp->fullSData(oldp+81,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[6]),9);
    bufp->fullSData(oldp+82,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[7]),9);
    bufp->fullSData(oldp+83,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[8]),9);
    bufp->fullCData(oldp+84,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+85,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+86,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+87,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+88,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+89,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+90,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+91,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[7]),3);
    bufp->fullCData(oldp+92,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[8]),3);
    bufp->fullCData(oldp+93,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[0]),6);
    bufp->fullCData(oldp+94,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[1]),6);
    bufp->fullCData(oldp+95,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[2]),6);
    bufp->fullCData(oldp+96,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[3]),6);
    bufp->fullCData(oldp+97,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[4]),6);
    bufp->fullCData(oldp+98,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+99,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+100,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+101,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+102,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+103,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+104,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+105,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+106,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+107,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[4]),3);
    bufp->fullSData(oldp+108,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__pair_list[0]),11);
    bufp->fullSData(oldp+109,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__pair_list[1]),11);
    bufp->fullSData(oldp+110,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__pair_list[2]),11);
    bufp->fullCData(oldp+111,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+112,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+113,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+114,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list[0]),8);
    bufp->fullCData(oldp+115,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list[1]),8);
    bufp->fullCData(oldp+116,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list[2]),8);
    bufp->fullCData(oldp+117,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+118,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+119,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+120,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[3]),8);
    bufp->fullCData(oldp+121,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[4]),8);
    bufp->fullCData(oldp+122,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[0]),5);
    bufp->fullCData(oldp+123,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[1]),5);
    bufp->fullCData(oldp+124,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[2]),5);
    bufp->fullCData(oldp+125,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[3]),5);
    bufp->fullCData(oldp+126,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[4]),5);
    bufp->fullCData(oldp+127,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+128,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+129,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+130,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+131,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+132,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+133,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+134,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+135,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+136,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+137,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+138,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+139,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+140,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+141,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+142,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[5]),3);
    bufp->fullSData(oldp+143,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+144,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+145,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+146,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list[3]),12);
    bufp->fullCData(oldp+147,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+148,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+149,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+150,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+151,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+152,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+153,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+154,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+155,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+156,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+157,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+158,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+159,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7]),3);
    bufp->fullBit(oldp+160,(vlSelf->npc__DOT__idu_inst__DOT__ebreak));
    bufp->fullBit(oldp+161,(vlSelf->npc__DOT__u_IFU__DOT__state));
    bufp->fullBit(oldp+162,(vlSelf->npc__DOT__rst_d1));
    bufp->fullBit(oldp+163,(vlSelf->npc__DOT__rst_d2));
    bufp->fullIData(oldp+164,(vlSelf->npc__DOT__pcF),32);
    bufp->fullIData(oldp+165,(((IData)(4U) + vlSelf->npc__DOT__pcF)),32);
    bufp->fullIData(oldp+166,(vlSelf->npc__DOT__instD),32);
    bufp->fullIData(oldp+167,(vlSelf->npc__DOT__pcD),32);
    bufp->fullIData(oldp+168,(vlSelf->npc__DOT__snpcD),32);
    bufp->fullBit(oldp+169,((1U & (~ (IData)(vlSelf->npc__DOT__dstagebus_inst__DOT__state)))));
    bufp->fullBit(oldp+170,(vlSelf->npc__DOT__dstagebus_inst__DOT__state));
    bufp->fullCData(oldp+171,((0x7fU & vlSelf->npc__DOT__instD)),7);
    bufp->fullCData(oldp+172,((vlSelf->npc__DOT__instD 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+173,((7U & (vlSelf->npc__DOT__instD 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+174,(vlSelf->npc__DOT__mrtypeD),3);
    bufp->fullCData(oldp+175,((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                                     >> 1U))),3);
    bufp->fullCData(oldp+176,(vlSelf->npc__DOT__ALU_opD),3);
    bufp->fullCData(oldp+177,(vlSelf->npc__DOT__rdregsrcD),3);
    bufp->fullCData(oldp+178,(vlSelf->npc__DOT__inst_type),3);
    bufp->fullCData(oldp+179,(((0x17U == (0x7fU & vlSelf->npc__DOT__instD))
                                ? 1U : ((0x37U == (0x7fU 
                                                   & vlSelf->npc__DOT__instD))
                                         ? 2U : 0U))),2);
    bufp->fullCData(oldp+180,(vlSelf->npc__DOT__ALUsrc2D),2);
    bufp->fullSData(oldp+181,((vlSelf->npc__DOT__instD 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+182,(((3U == (0x7fU & vlSelf->npc__DOT__instD)) 
                             | (0x23U == (0x7fU & vlSelf->npc__DOT__instD)))));
    bufp->fullBit(oldp+183,((0x23U == (0x7fU & vlSelf->npc__DOT__instD))));
    bufp->fullBit(oldp+184,((0x63U == (0x7fU & vlSelf->npc__DOT__instD))));
    bufp->fullBit(oldp+185,(vlSelf->npc__DOT__jumpD));
    bufp->fullBit(oldp+186,(vlSelf->npc__DOT__jalrD));
    bufp->fullBit(oldp+187,(vlSelf->npc__DOT__ecallD));
    bufp->fullBit(oldp+188,(vlSelf->npc__DOT__mretD));
    bufp->fullBit(oldp+189,(((0x73U == (0x7fU & vlSelf->npc__DOT__instD)) 
                             | (IData)(vlSelf->npc__DOT__ecallD))));
    bufp->fullCData(oldp+190,(vlSelf->npc__DOT__mwmaskD),8);
    bufp->fullCData(oldp+191,((0x1fU & (vlSelf->npc__DOT__instD 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+192,(vlSelf->npc__DOT__rf_raddr2),5);
    bufp->fullCData(oldp+193,((0x1fU & (vlSelf->npc__DOT__instD 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+194,(((0U == (0x1fU & (vlSelf->npc__DOT__instD 
                                                >> 0xfU)))
                                ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                               [(0x1fU & (vlSelf->npc__DOT__instD 
                                          >> 0xfU))])),32);
    bufp->fullIData(oldp+195,(((0U == (IData)(vlSelf->npc__DOT__rf_raddr2))
                                ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                               [vlSelf->npc__DOT__rf_raddr2])),32);
    bufp->fullIData(oldp+196,(vlSelf->npc__DOT__immD),32);
    bufp->fullSData(oldp+197,(vlSelf->npc__DOT__csraddrD),12);
    bufp->fullIData(oldp+198,(vlSelf->npc__DOT__mtvec_data),32);
    bufp->fullIData(oldp+199,(vlSelf->npc__DOT__mcause_data),32);
    bufp->fullIData(oldp+200,(vlSelf->npc__DOT__mepc_data),32);
    bufp->fullIData(oldp+201,(vlSelf->npc__DOT__mstatus_data),32);
    bufp->fullIData(oldp+202,(vlSelf->npc__DOT__csr_rdata),32);
    bufp->fullIData(oldp+203,(((IData)(vlSelf->npc__DOT__ecallD)
                                ? vlSelf->npc__DOT__mtvec_data
                                : ((IData)(vlSelf->npc__DOT__mretD)
                                    ? vlSelf->npc__DOT__mepc_data
                                    : vlSelf->npc__DOT__csr_rdata))),32);
    bufp->fullIData(oldp+204,(vlSelf->npc__DOT__ALU_resultW),32);
    bufp->fullIData(oldp+205,(((IData)(vlSelf->npc__DOT__ecallW)
                                ? vlSelf->npc__DOT__src2W
                                : vlSelf->npc__DOT__ALU_resultW)),32);
    bufp->fullIData(oldp+206,(((IData)(vlSelf->npc__DOT__ecallW)
                                ? vlSelf->npc__DOT__pcW
                                : vlSelf->npc__DOT__ALU_resultW)),32);
    bufp->fullBit(oldp+207,((0x305U == (IData)(vlSelf->npc__DOT__csraddrW))));
    bufp->fullBit(oldp+208,(((IData)(vlSelf->npc__DOT__ecallW) 
                             | (0x342U == (IData)(vlSelf->npc__DOT__csraddrW)))));
    bufp->fullBit(oldp+209,(((IData)(vlSelf->npc__DOT__ecallW) 
                             | (0x341U == (IData)(vlSelf->npc__DOT__csraddrW)))));
    bufp->fullBit(oldp+210,((0x300U == (IData)(vlSelf->npc__DOT__csraddrW))));
    bufp->fullCData(oldp+211,((0x1fU & (vlSelf->npc__DOT__instD 
                                        >> 7U))),5);
    bufp->fullBit(oldp+212,(vlSelf->npc__DOT__mvalidX));
    bufp->fullBit(oldp+213,(vlSelf->npc__DOT__mwenX));
    bufp->fullBit(oldp+214,(vlSelf->npc__DOT__ecallX));
    bufp->fullBit(oldp+215,(vlSelf->npc__DOT__mretX));
    bufp->fullBit(oldp+216,(vlSelf->npc__DOT__branchX));
    bufp->fullBit(oldp+217,(vlSelf->npc__DOT__jumpX));
    bufp->fullBit(oldp+218,(vlSelf->npc__DOT__jalrX));
    bufp->fullCData(oldp+219,(vlSelf->npc__DOT__ALUsrc1X),2);
    bufp->fullCData(oldp+220,(vlSelf->npc__DOT__ALUsrc2X),2);
    bufp->fullCData(oldp+221,(vlSelf->npc__DOT__cmp_typeX),3);
    bufp->fullCData(oldp+222,(vlSelf->npc__DOT__ALU_opX),3);
    bufp->fullCData(oldp+223,(vlSelf->npc__DOT__rdregsrcX),3);
    bufp->fullCData(oldp+224,(vlSelf->npc__DOT__mrtypeX),3);
    bufp->fullCData(oldp+225,(vlSelf->npc__DOT__rdX),5);
    bufp->fullCData(oldp+226,(vlSelf->npc__DOT__mwmaskX),8);
    bufp->fullSData(oldp+227,(vlSelf->npc__DOT__csraddrX),12);
    bufp->fullIData(oldp+228,(vlSelf->npc__DOT__csrX),32);
    bufp->fullIData(oldp+229,(vlSelf->npc__DOT__immX),32);
    bufp->fullIData(oldp+230,(vlSelf->npc__DOT__snpcX),32);
    bufp->fullIData(oldp+231,(vlSelf->npc__DOT__pcX),32);
    bufp->fullIData(oldp+232,(vlSelf->npc__DOT__src1X),32);
    bufp->fullIData(oldp+233,(vlSelf->npc__DOT__src2X),32);
    bufp->fullBit(oldp+234,(vlSelf->npc__DOT__u_Xstage_bus__DOT__state));
    bufp->fullBit(oldp+235,((1U & (~ (IData)(vlSelf->npc__DOT__u_Xstage_bus__DOT__state)))));
    bufp->fullIData(oldp+236,(vlSelf->npc__DOT__ALU_A),32);
    bufp->fullIData(oldp+237,(vlSelf->npc__DOT__ALU_B),32);
    bufp->fullIData(oldp+238,((IData)(vlSelf->npc__DOT__u_ALU__DOT__out)),32);
    bufp->fullBit(oldp+239,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+240,((1U & (~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))));
    bufp->fullBit(oldp+241,(vlSelf->npc__DOT__Cout));
    bufp->fullBit(oldp+242,((1U & (~ (IData)(vlSelf->npc__DOT__Cout)))));
    bufp->fullBit(oldp+243,((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out))));
    bufp->fullBit(oldp+244,(vlSelf->npc__DOT__slt));
    bufp->fullBit(oldp+245,((1U & (~ (IData)(vlSelf->npc__DOT__slt)))));
    bufp->fullBit(oldp+246,(vlSelf->npc__DOT__cmp_resultX));
    bufp->fullIData(oldp+247,(((IData)(vlSelf->npc__DOT__jalrX)
                                ? vlSelf->npc__DOT__src1X
                                : vlSelf->npc__DOT__pcX)),32);
    bufp->fullIData(oldp+248,((((IData)(vlSelf->npc__DOT__jalrX)
                                 ? vlSelf->npc__DOT__src1X
                                 : vlSelf->npc__DOT__pcX) 
                               + vlSelf->npc__DOT__immX)),32);
    bufp->fullIData(oldp+249,((((IData)(vlSelf->npc__DOT__jumpX) 
                                | ((IData)(vlSelf->npc__DOT__branchX) 
                                   & (IData)(vlSelf->npc__DOT__cmp_resultX)))
                                ? (((IData)(vlSelf->npc__DOT__jalrX)
                                     ? vlSelf->npc__DOT__src1X
                                     : vlSelf->npc__DOT__pcX) 
                                   + vlSelf->npc__DOT__immX)
                                : vlSelf->npc__DOT__snpcX)),32);
    bufp->fullIData(oldp+250,(vlSelf->npc__DOT__dnpcX),32);
    bufp->fullBit(oldp+251,(((IData)(vlSelf->npc__DOT__jumpX) 
                             | ((IData)(vlSelf->npc__DOT__branchX) 
                                & (IData)(vlSelf->npc__DOT__cmp_resultX)))));
    bufp->fullBit(oldp+252,((1U & (~ (IData)(vlSelf->npc__DOT__u_Mstage_bus__DOT__state)))));
    bufp->fullBit(oldp+253,(vlSelf->npc__DOT__u_Mstage_bus__DOT__state));
    bufp->fullBit(oldp+254,(vlSelf->npc__DOT__cmp_resultM));
    bufp->fullBit(oldp+255,(vlSelf->npc__DOT__mvalidM));
    bufp->fullBit(oldp+256,(vlSelf->npc__DOT__mwenM));
    bufp->fullBit(oldp+257,(vlSelf->npc__DOT__ecallM));
    bufp->fullCData(oldp+258,(vlSelf->npc__DOT__rdregsrcM),3);
    bufp->fullCData(oldp+259,(vlSelf->npc__DOT__mrtypeM),3);
    bufp->fullCData(oldp+260,(vlSelf->npc__DOT__rdM),5);
    bufp->fullCData(oldp+261,(vlSelf->npc__DOT__mwmaskM),8);
    bufp->fullSData(oldp+262,(vlSelf->npc__DOT__csraddrM),12);
    bufp->fullIData(oldp+263,(vlSelf->npc__DOT__dnpcM),32);
    bufp->fullIData(oldp+264,(vlSelf->npc__DOT__pcM),32);
    bufp->fullIData(oldp+265,(vlSelf->npc__DOT__src2M),32);
    bufp->fullIData(oldp+266,(vlSelf->npc__DOT__ALU_resultM),32);
    bufp->fullIData(oldp+267,(vlSelf->npc__DOT__csrM),32);
    bufp->fullIData(oldp+268,(vlSelf->npc__DOT__snpcM),32);
    bufp->fullIData(oldp+269,(vlSelf->npc__DOT__rdata),32);
    bufp->fullIData(oldp+270,(vlSelf->npc__DOT__mdataM),32);
    bufp->fullBit(oldp+271,((1U & (~ (IData)(vlSelf->npc__DOT__u_Wstage_bus__DOT__state)))));
    bufp->fullBit(oldp+272,(vlSelf->npc__DOT__u_Wstage_bus__DOT__state));
    bufp->fullBit(oldp+273,(vlSelf->npc__DOT__ecallW));
    bufp->fullBit(oldp+274,(vlSelf->npc__DOT__cmp_resultW));
    bufp->fullBit(oldp+275,((5U == (IData)(vlSelf->npc__DOT__rdregsrcW))));
    bufp->fullCData(oldp+276,(vlSelf->npc__DOT__rdregsrcW),3);
    bufp->fullCData(oldp+277,(vlSelf->npc__DOT__rdW),5);
    bufp->fullIData(oldp+278,(vlSelf->npc__DOT__src2W),32);
    bufp->fullIData(oldp+279,(vlSelf->npc__DOT__pcW),32);
    bufp->fullIData(oldp+280,(vlSelf->npc__DOT__dnpcW),32);
    bufp->fullIData(oldp+281,(vlSelf->npc__DOT__csrW),32);
    bufp->fullIData(oldp+282,(vlSelf->npc__DOT__snpcW),32);
    bufp->fullIData(oldp+283,(vlSelf->npc__DOT__mdataW),32);
    bufp->fullIData(oldp+284,(vlSelf->npc__DOT__rddataW),32);
    bufp->fullSData(oldp+285,(vlSelf->npc__DOT__csraddrW),12);
    __Vtemp_h02160c61__0[0U] = (IData)((0x400000000ULL 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & vlSelf->npc__DOT__rdata))) 
                                            << 0x23U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSelf->npc__DOT__rdata))))));
    __Vtemp_h02160c61__0[1U] = (IData)(((0x400000000ULL 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & vlSelf->npc__DOT__rdata))) 
                                             << 0x23U) 
                                            | (QData)((IData)(
                                                              (0xffffU 
                                                               & vlSelf->npc__DOT__rdata))))) 
                                        >> 0x20U));
    __Vtemp_h02160c61__0[2U] = (0x18U | (vlSelf->npc__DOT__rdata 
                                         << 6U));
    __Vtemp_h02160c61__0[3U] = (0x80U | ((0xfffffe00U 
                                          & (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->npc__DOT__rdata 
                                                             >> 0xfU)))) 
                                              << 0x19U) 
                                             | (0x1fffe00U 
                                                & (vlSelf->npc__DOT__rdata 
                                                   << 9U)))) 
                                         | (vlSelf->npc__DOT__rdata 
                                            >> 0x1aU)));
    __Vtemp_h02160c61__0[4U] = (0x200U | ((0xfffff000U 
                                           & (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->npc__DOT__rdata 
                                                              >> 7U)))) 
                                               << 0x14U) 
                                              | (0xff000U 
                                                 & (vlSelf->npc__DOT__rdata 
                                                    << 0xcU)))) 
                                          | (0x1ffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->npc__DOT__rdata 
                                                               >> 0xfU)))) 
                                                >> 7U))));
    __Vtemp_h02160c61__0[5U] = (0xfffU & ((- (IData)(
                                                     (1U 
                                                      & (vlSelf->npc__DOT__rdata 
                                                         >> 7U)))) 
                                          >> 0xcU));
    bufp->fullWData(oldp+286,(__Vtemp_h02160c61__0),175);
    bufp->fullQData(oldp+292,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+294,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+296,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+298,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+300,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+302,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+303,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+304,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+305,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+306,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+307,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+308,(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+309,((0x37U == (0x7fU & vlSelf->npc__DOT__instD))));
    bufp->fullBit(oldp+310,((0x17U == (0x7fU & vlSelf->npc__DOT__instD))));
    bufp->fullBit(oldp+311,((0x6fU == (0x7fU & vlSelf->npc__DOT__instD))));
    bufp->fullBit(oldp+312,((3U == (0x7fU & vlSelf->npc__DOT__instD))));
    bufp->fullBit(oldp+313,((0x13U == (0x7fU & vlSelf->npc__DOT__instD))));
    bufp->fullBit(oldp+314,((0x33U == (0x7fU & vlSelf->npc__DOT__instD))));
    bufp->fullBit(oldp+315,((0x73U == (0x7fU & vlSelf->npc__DOT__instD))));
    bufp->fullBit(oldp+316,((IData)((0x1073U == (0x707fU 
                                                 & vlSelf->npc__DOT__instD)))));
    bufp->fullBit(oldp+317,((IData)((0x2073U == (0x707fU 
                                                 & vlSelf->npc__DOT__instD)))));
    bufp->fullBit(oldp+318,((1U & (~ ((0x37U == (0x7fU 
                                                 & vlSelf->npc__DOT__instD)) 
                                      | ((0x17U == 
                                          (0x7fU & vlSelf->npc__DOT__instD)) 
                                         | ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->npc__DOT__instD)) 
                                            | ((IData)(vlSelf->npc__DOT__jalrD) 
                                               | ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->npc__DOT__instD)) 
                                                  | ((3U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->npc__DOT__instD)) 
                                                     | ((0x23U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->npc__DOT__instD)) 
                                                        | ((0x13U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->npc__DOT__instD)) 
                                                           | ((0x33U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->npc__DOT__instD)) 
                                                              | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__ebreak) 
                                                                 | ((IData)(vlSelf->npc__DOT__ecallD) 
                                                                    | ((IData)(vlSelf->npc__DOT__mretD) 
                                                                       | (0x73U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->npc__DOT__instD))))))))))))))))));
    bufp->fullBit(oldp+319,((1U & (IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out))));
    bufp->fullBit(oldp+320,((1U & ((0x63U == (0x7fU 
                                              & vlSelf->npc__DOT__instD)) 
                                   | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                                      | (IData)((0x40000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->npc__DOT__instD))))))));
    bufp->fullBit(oldp+321,(((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                             & (IData)((0x1000U == 
                                        (0xfe007000U 
                                         & vlSelf->npc__DOT__instD))))));
    bufp->fullBit(oldp+322,(((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0) 
                             & (0U == (vlSelf->npc__DOT__instD 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+323,(((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0) 
                             & (0x20U == (vlSelf->npc__DOT__instD 
                                          >> 0x19U)))));
    bufp->fullBit(oldp+324,(((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                             & (0x4000U == (0x7000U 
                                            & vlSelf->npc__DOT__instD)))));
    bufp->fullBit(oldp+325,((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                              & (0x6000U == (0x7000U 
                                             & vlSelf->npc__DOT__instD))) 
                             | (0x73U == (0x7fU & vlSelf->npc__DOT__instD)))));
    bufp->fullBit(oldp+326,(((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                             & (0x7000U == (0x7000U 
                                            & vlSelf->npc__DOT__instD)))));
    bufp->fullBit(oldp+327,((1U & ((0x63U == (0x7fU 
                                              & vlSelf->npc__DOT__instD)) 
                                   | ((0x23U == (0x7fU 
                                                 & vlSelf->npc__DOT__instD)) 
                                      | ((IData)(vlSelf->npc__DOT__ecallD) 
                                         | ((IData)(vlSelf->npc__DOT__mretD) 
                                            | ((~ (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->npc__DOT__instD)) 
                                                   | ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->npc__DOT__instD)) 
                                                      | ((0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->npc__DOT__instD)) 
                                                         | ((IData)(vlSelf->npc__DOT__jalrD) 
                                                            | ((0x63U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->npc__DOT__instD)) 
                                                               | ((3U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->npc__DOT__instD)) 
                                                                  | ((0x23U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->npc__DOT__instD)) 
                                                                     | ((0x13U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->npc__DOT__instD)) 
                                                                        | ((0x33U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->npc__DOT__instD)) 
                                                                           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__ebreak) 
                                                                              | ((IData)(vlSelf->npc__DOT__ecallD) 
                                                                                | ((IData)(vlSelf->npc__DOT__mretD) 
                                                                                | (0x73U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->npc__DOT__instD))))))))))))))) 
                                               | (IData)(vlSelf->npc__DOT__idu_inst__DOT__ebreak)))))))));
    bufp->fullCData(oldp+328,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key),7);
    bufp->fullCData(oldp+329,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+330,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+331,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key),3);
    bufp->fullCData(oldp+332,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+333,(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+334,(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out),4);
    bufp->fullCData(oldp+335,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key),6);
    bufp->fullCData(oldp+336,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+337,(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+338,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key),9);
    bufp->fullCData(oldp+339,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+340,(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+341,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+342,(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+343,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+344,(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+345,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key),5);
    bufp->fullCData(oldp+346,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+347,(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit));
    __Vtemp_h41cfb5f1__0[0U] = (IData)((0x400000000ULL 
                                        | (((QData)((IData)(vlSelf->npc__DOT__cmp_resultW)) 
                                            << 0x23U) 
                                           | (QData)((IData)(vlSelf->npc__DOT__csrW)))));
    __Vtemp_h41cfb5f1__0[1U] = (IData)(((0x400000000ULL 
                                         | (((QData)((IData)(vlSelf->npc__DOT__cmp_resultW)) 
                                             << 0x23U) 
                                            | (QData)((IData)(vlSelf->npc__DOT__csrW)))) 
                                        >> 0x20U));
    __Vtemp_h41cfb5f1__0[2U] = (0x18U | (vlSelf->npc__DOT__snpcW 
                                         << 6U));
    __Vtemp_h41cfb5f1__0[3U] = (0x80U | ((vlSelf->npc__DOT__mdataW 
                                          << 9U) | 
                                         (vlSelf->npc__DOT__snpcW 
                                          >> 0x1aU)));
    __Vtemp_h41cfb5f1__0[4U] = (0x200U | ((vlSelf->npc__DOT__ALU_resultW 
                                           << 0xcU) 
                                          | (vlSelf->npc__DOT__mdataW 
                                             >> 0x17U)));
    __Vtemp_h41cfb5f1__0[5U] = (vlSelf->npc__DOT__ALU_resultW 
                                >> 0x14U);
    bufp->fullWData(oldp+348,(__Vtemp_h41cfb5f1__0),175);
    bufp->fullQData(oldp+354,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+356,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+358,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+360,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+362,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+364,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+365,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+366,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+367,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+368,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+369,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+370,(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+371,((0x2468aU | ((0x100000U 
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
    bufp->fullCData(oldp+372,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+373,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+374,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+375,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+376,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+377,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[5]),4);
    bufp->fullBit(oldp+378,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+379,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+380,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+381,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+382,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+383,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+384,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+385,(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+386,(__Vtemp_hff3436d3__0),176);
    bufp->fullQData(oldp+392,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[0]),44);
    bufp->fullQData(oldp+394,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[1]),44);
    bufp->fullQData(oldp+396,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[2]),44);
    bufp->fullQData(oldp+398,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[3]),44);
    bufp->fullIData(oldp+400,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+401,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+402,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+403,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+404,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+405,(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit));
    __Vtemp_h687c90e6__0[1U] = (((- (IData)((vlSelf->npc__DOT__instD 
                                             >> 0x1fU))) 
                                 << 0x17U) | (IData)(
                                                     ((0x500000000ULL 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (vlSelf->npc__DOT__instD 
                                                                               >> 0xcU)))) 
                                                           << 0x2fU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->npc__DOT__instD 
                                                                                >> 0x14U)))) 
                                                              << 0x2eU) 
                                                             | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (vlSelf->npc__DOT__instD 
                                                                                >> 0x15U)))) 
                                                                 << 0x24U) 
                                                                | (QData)((IData)(
                                                                                (((- (IData)(
                                                                                (vlSelf->npc__DOT__instD 
                                                                                >> 0x1fU))) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->npc__DOT__instD 
                                                                                << 4U)) 
                                                                                | ((0x7e0U 
                                                                                & (vlSelf->npc__DOT__instD 
                                                                                >> 0x14U)) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->npc__DOT__instD 
                                                                                >> 7U))))))))))) 
                                                      >> 0x20U)));
    __Vtemp_h1a1727fc__0[0U] = (IData)((0x500000000ULL 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (vlSelf->npc__DOT__instD 
                                                                >> 0xcU)))) 
                                            << 0x2fU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->npc__DOT__instD 
                                                                   >> 0x14U)))) 
                                               << 0x2eU) 
                                              | (((QData)((IData)(
                                                                  (0x3ffU 
                                                                   & (vlSelf->npc__DOT__instD 
                                                                      >> 0x15U)))) 
                                                  << 0x24U) 
                                                 | (QData)((IData)(
                                                                   (((- (IData)(
                                                                                (vlSelf->npc__DOT__instD 
                                                                                >> 0x1fU))) 
                                                                     << 0xcU) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->npc__DOT__instD 
                                                                           << 4U)) 
                                                                       | ((0x7e0U 
                                                                           & (vlSelf->npc__DOT__instD 
                                                                              >> 0x14U)) 
                                                                          | (0x1eU 
                                                                             & (vlSelf->npc__DOT__instD 
                                                                                >> 7U))))))))))));
    __Vtemp_h1a1727fc__0[1U] = __Vtemp_h687c90e6__0[1U];
    __Vtemp_h1a1727fc__0[2U] = (0x20U | ((0xfffc0000U 
                                          & (vlSelf->npc__DOT__instD 
                                             << 6U)) 
                                         | (7U & ((- (IData)(
                                                             (vlSelf->npc__DOT__instD 
                                                              >> 0x1fU))) 
                                                  >> 9U))));
    __Vtemp_h1a1727fc__0[3U] = (0xc0U | (((- (IData)(
                                                     (vlSelf->npc__DOT__instD 
                                                      >> 0x1fU))) 
                                          << 0x15U) 
                                         | ((0x1fc000U 
                                             & (vlSelf->npc__DOT__instD 
                                                >> 0xbU)) 
                                            | ((0x3e00U 
                                                & (vlSelf->npc__DOT__instD 
                                                   << 2U)) 
                                               | (0x3ffffU 
                                                  & (vlSelf->npc__DOT__instD 
                                                     >> 0x1aU))))));
    __Vtemp_h1a1727fc__0[4U] = (0x200U | ((0xfffff000U 
                                           & (((- (IData)(
                                                          (vlSelf->npc__DOT__instD 
                                                           >> 0x1fU))) 
                                               << 0x18U) 
                                              | (0xfff000U 
                                                 & (vlSelf->npc__DOT__instD 
                                                    >> 8U)))) 
                                          | (0x1ffU 
                                             & ((- (IData)(
                                                           (vlSelf->npc__DOT__instD 
                                                            >> 0x1fU))) 
                                                >> 0xbU))));
    __Vtemp_h1a1727fc__0[5U] = (0xfffU & ((- (IData)(
                                                     (vlSelf->npc__DOT__instD 
                                                      >> 0x1fU))) 
                                          >> 8U));
    bufp->fullWData(oldp+406,(__Vtemp_h1a1727fc__0),175);
    bufp->fullQData(oldp+412,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+414,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+416,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+418,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+420,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+422,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+423,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+424,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+425,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+426,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+427,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+428,(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+429,(vlSelf->npc__DOT__u_ALU__DOT__add_overflow));
    bufp->fullBit(oldp+430,(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow));
    bufp->fullBit(oldp+431,(vlSelf->npc__DOT__u_ALU__DOT__add_Cout));
    bufp->fullBit(oldp+432,(vlSelf->npc__DOT__u_ALU__DOT__sub_Cout));
    bufp->fullIData(oldp+433,(vlSelf->npc__DOT__u_ALU__DOT__add_result),32);
    bufp->fullIData(oldp+434,(vlSelf->npc__DOT__u_ALU__DOT__sub_result),32);
    bufp->fullQData(oldp+435,(vlSelf->npc__DOT__u_ALU__DOT__out),33);
    bufp->fullIData(oldp+437,((~ vlSelf->npc__DOT__ALU_B)),32);
    __Vtemp_hb9820ff4__0[0U] = (IData)((0xe00000000ULL 
                                        | (QData)((IData)(vlSelf->__VdfgTmp_h0ee2f3e1__0))));
    __Vtemp_hb9820ff4__0[1U] = ((vlSelf->__VdfgTmp_h0eead378__0 
                                 << 4U) | (IData)((
                                                   (0xe00000000ULL 
                                                    | (QData)((IData)(vlSelf->__VdfgTmp_h0ee2f3e1__0))) 
                                                   >> 0x20U)));
    __Vtemp_hb9820ff4__0[2U] = (0xc0U | ((vlSelf->__VdfgTmp_h8f7c6002__0 
                                          << 8U) | 
                                         (vlSelf->__VdfgTmp_h0eead378__0 
                                          >> 0x1cU)));
    __Vtemp_hb9820ff4__0[3U] = (0xa00U | ((vlSelf->__VdfgTmp_h80607264__0 
                                           << 0xcU) 
                                          | (vlSelf->__VdfgTmp_h8f7c6002__0 
                                             >> 0x18U)));
    __Vtemp_hb9820ff4__0[4U] = (0x8000U | ((vlSelf->__VdfgTmp_h8d43fe98__0 
                                            << 0x10U) 
                                           | (vlSelf->__VdfgTmp_h80607264__0 
                                              >> 0x14U)));
    __Vtemp_hb9820ff4__0[5U] = (0x60000U | ((vlSelf->__VdfgTmp_h0eee3364__0 
                                             << 0x14U) 
                                            | (vlSelf->__VdfgTmp_h8d43fe98__0 
                                               >> 0x10U)));
    __Vtemp_hb9820ff4__0[6U] = (0x400000U | ((vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                              << 0x18U) 
                                             | (vlSelf->__VdfgTmp_h0eee3364__0 
                                                >> 0xcU)));
    __Vtemp_hb9820ff4__0[7U] = (0x2000000U | ((vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                               << 0x1cU) 
                                              | (((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow) 
                                                  << 0x18U) 
                                                 | (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                    >> 8U))));
    __Vtemp_hb9820ff4__0[8U] = (((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow) 
                                 << 0x1cU) | (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                              >> 4U));
    bufp->fullWData(oldp+438,(__Vtemp_hb9820ff4__0),288);
    bufp->fullQData(oldp+447,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+449,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+451,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+453,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+455,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+457,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+459,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+461,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+463,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),33);
    bufp->fullQData(oldp+465,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),33);
    bufp->fullQData(oldp+467,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),33);
    bufp->fullQData(oldp+469,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),33);
    bufp->fullQData(oldp+471,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),33);
    bufp->fullQData(oldp+473,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),33);
    bufp->fullQData(oldp+475,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),33);
    bufp->fullQData(oldp+477,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7]),33);
    bufp->fullQData(oldp+479,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),33);
    bufp->fullBit(oldp+481,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+482,((5U != (IData)(vlSelf->npc__DOT__rdregsrcW))));
    bufp->fullIData(oldp+483,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+484,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+485,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+486,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+487,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+488,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+489,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+490,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+491,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+492,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+493,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+494,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+495,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+496,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+497,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+498,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+499,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+500,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+501,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+502,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+503,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+504,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+505,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+506,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+507,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+508,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+509,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+510,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+511,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+512,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+513,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+514,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+515,(vlSelf->npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+516,(vlSelf->clk));
    bufp->fullBit(oldp+517,(vlSelf->rst));
    bufp->fullBit(oldp+518,(((~ (IData)(vlSelf->rst)) 
                             & (IData)(vlSelf->npc__DOT__rst_d1))));
    bufp->fullBit(oldp+519,(vlSelf->npc__DOT__ifetch_en));
    bufp->fullIData(oldp+520,(vlSelf->npc__DOT__instF),32);
    bufp->fullIData(oldp+521,(0U),32);
    bufp->fullIData(oldp+522,(1U),32);
    bufp->fullIData(oldp+523,(5U),32);
    bufp->fullIData(oldp+524,(3U),32);
    bufp->fullIData(oldp+525,(0x20U),32);
    bufp->fullIData(oldp+526,(0U),32);
    bufp->fullIData(oldp+527,(0x23U),32);
    bufp->fullIData(oldp+528,(5U),32);
    bufp->fullIData(oldp+529,(7U),32);
    bufp->fullCData(oldp+530,(0U),3);
    __Vtemp_hcc0a275b__0[0U] = 0x8250500bU;
    __Vtemp_hcc0a275b__0[1U] = 0x14188710U;
    __Vtemp_hcc0a275b__0[2U] = 0x20U;
    bufp->fullWData(oldp+531,(__Vtemp_hcc0a275b__0),70);
    bufp->fullIData(oldp+534,(0xaU),32);
    bufp->fullIData(oldp+535,(7U),32);
    bufp->fullIData(oldp+536,(2U),32);
    bufp->fullCData(oldp+537,(1U),2);
    bufp->fullSData(oldp+538,(0x4166U),15);
    bufp->fullIData(oldp+539,(3U),32);
    bufp->fullIData(oldp+540,(6U),32);
    bufp->fullIData(oldp+541,(4U),32);
    bufp->fullCData(oldp+542,(0U),4);
    __Vtemp_h953757aa__0[0U] = 0x5a945599U;
    __Vtemp_h953757aa__0[1U] = 0x6d23ca49U;
    __Vtemp_h953757aa__0[2U] = 0xc2912cU;
    __Vtemp_h953757aa__0[3U] = 1U;
    bufp->fullWData(oldp+543,(__Vtemp_h953757aa__0),100);
    bufp->fullIData(oldp+547,(0xaU),32);
    bufp->fullIData(oldp+548,(9U),32);
    bufp->fullCData(oldp+549,(6U),3);
    __Vtemp_he8e6515a__0[0U] = 0x2101000aU;
    __Vtemp_he8e6515a__0[1U] = 0x850400U;
    __Vtemp_he8e6515a__0[2U] = 0x40320410U;
    __Vtemp_he8e6515a__0[3U] = 0x803U;
    bufp->fullWData(oldp+550,(__Vtemp_he8e6515a__0),108);
    bufp->fullIData(oldp+554,(0xcU),32);
    bufp->fullIData(oldp+555,(9U),32);
    bufp->fullIData(oldp+556,(0x2528ecU),30);
    bufp->fullIData(oldp+557,(8U),32);
    bufp->fullCData(oldp+558,(0U),8);
    bufp->fullQData(oldp+559,(0x481a0fULL),33);
    bufp->fullIData(oldp+561,(0xbU),32);
    bufp->fullQData(oldp+562,(0x814223140dULL),40);
    bufp->fullIData(oldp+564,(0x1800U),32);
    bufp->fullBit(oldp+565,(0U));
    bufp->fullIData(oldp+566,(6U),32);
    bufp->fullIData(oldp+567,(0x2cU),32);
    bufp->fullIData(oldp+568,(4U),32);
    bufp->fullBit(oldp+569,(1U));
    bufp->fullIData(oldp+570,(0x21U),32);
    bufp->fullQData(oldp+571,(0ULL),33);
    bufp->fullIData(oldp+573,(0x24U),32);
    bufp->fullIData(oldp+574,(8U),32);
}

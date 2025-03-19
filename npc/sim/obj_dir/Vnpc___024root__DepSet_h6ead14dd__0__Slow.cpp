// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc___024root.h"

VL_ATTR_COLD void Vnpc___024root___eval_static(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vnpc___024root___eval_initial__TOP(Vnpc___024root* vlSelf);

VL_ATTR_COLD void Vnpc___024root___eval_initial(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_initial\n"); );
    // Body
    Vnpc___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vnpc___024root___eval_initial__TOP(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[0U] = 5U;
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[1U] = 4U;
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[4U] = 0U;
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list[0U] = 0x305U;
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list[1U] = 0x342U;
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list[2U] = 0x341U;
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list[3U] = 0x300U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5U] = 2U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6U] = 1U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7U] = 0U;
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[0U] = 5U;
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[1U] = 4U;
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[3U] = 2U;
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[4U] = 1U;
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[5U] = 0U;
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[1U] = 3U;
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[4U] = 0U;
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list[1U] = 3U;
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list[4U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[2U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[3U] = 8U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[4U] = 0x10U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[5U] = 0x20U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[6U] = 0x40U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[7U] = 0x80U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[8U] = 0x100U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[0U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[4U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[5U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[6U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[7U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[8U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[0U] = 0xaU;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[1U] = 0x10U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[2U] = 0x21U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[3U] = 0x40U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[4U] = 0x85U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[5U] = 0x100U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[6U] = 0x204U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[7U] = 0x403U;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[8U] = 0x803U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list[0U] = 0xfU;
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list[1U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__pair_list[0U] = 0x20fU;
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__pair_list[1U] = 0x103U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__pair_list[2U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[0U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[1U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[4U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[0U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[1U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[2U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[0U] = 0x2cU;
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[1U] = 0x23U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[2U] = 0x12U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[3U] = 9U;
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[4U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[0U] = 0x19U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[1U] = 0x11U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[2U] = 0x1aU;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[3U] = 0x12U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[4U] = 0x3cU;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[5U] = 0x34U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[6U] = 0x2cU;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[7U] = 0x24U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[8U] = 0xcU;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[9U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[0U] = 9U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[1U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[2U] = 9U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[3U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[4U] = 0xaU;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[5U] = 8U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[6U] = 6U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[7U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[8U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[9U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[0U] = 0x199U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[1U] = 0x115U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[2U] = 0x1a9U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[3U] = 0x125U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[4U] = 0x3caU;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[5U] = 0x348U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[6U] = 0x2c6U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[7U] = 0x244U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[8U] = 0xc2U;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[9U] = 0x40U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[2U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[3U] = 8U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[4U] = 0x10U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[5U] = 0x20U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[6U] = 0x40U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[0U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[1U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[2U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[3U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[4U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[5U] = 6U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[6U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[0U] = 0xbU;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[1U] = 0x14U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[2U] = 0x25U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[3U] = 0x42U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[4U] = 0x87U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[5U] = 0x106U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[6U] = 0x201U;
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[2U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[3U] = 8U;
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[4U] = 0x10U;
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[0U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[1U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[2U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[3U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[0U] = 0xdU;
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[1U] = 0x14U;
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[2U] = 0x23U;
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[3U] = 0x42U;
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[4U] = 0x81U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list[2U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list[0U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list[1U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__pair_list[0U] = 6U;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__pair_list[1U] = 0xbU;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__pair_list[2U] = 0x10U;
}

VL_ATTR_COLD void Vnpc___024root___eval_final(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vnpc___024root___eval_triggers__stl(Vnpc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__stl(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___eval_stl(Vnpc___024root* vlSelf);

VL_ATTR_COLD void Vnpc___024root___eval_settle(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vnpc___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vnpc___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/npc.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vnpc___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__stl(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_ATTR_COLD void Vnpc___024root___stl_sequent__TOP__0(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[0U] 
        = (0x30500000000ULL | (QData)((IData)(vlSelf->npc__DOT__mtvec_data)));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[1U] 
        = (0x34200000000ULL | (QData)((IData)(vlSelf->npc__DOT__mcause_data)));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[2U] 
        = (0x34100000000ULL | (QData)((IData)(vlSelf->npc__DOT__mepc_data)));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[3U] 
        = (0x30000000000ULL | (QData)((IData)(vlSelf->npc__DOT__mstatus_data)));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[0U] 
        = (0x500000000ULL | (QData)((IData)((((- (IData)(
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
                                                         >> 7U))))))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[1U] 
        = (0x400000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->npc__DOT__instD 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->npc__DOT__instD) 
                                                | ((0x800U 
                                                    & (vlSelf->npc__DOT__instD 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->npc__DOT__instD 
                                                         >> 0x14U))))))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[2U] 
        = (0x300000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelf->npc__DOT__instD))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->npc__DOT__instD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->npc__DOT__instD 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->npc__DOT__instD 
                                                      >> 7U)))))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)((((- (IData)((vlSelf->npc__DOT__instD 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->npc__DOT__instD 
                                        >> 0x14U))));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[0U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->npc__DOT__csrW)));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->npc__DOT__cmp_resultW)));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[2U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->npc__DOT__snpcW)));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->npc__DOT__mdataW)));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)(vlSelf->npc__DOT__ALU_resultW));
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->npc__DOT__instD 
                              >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->npc__DOT__instD >> 0xcU)) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instD 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instD >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instD 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instD >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__mwmaskD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit)
                                  ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out)
                                  : 0U);
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->npc__DOT__instD 
                              >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->npc__DOT__instD >> 0xcU)) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instD 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instD >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instD 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instD >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instD 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instD >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instD 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instD >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__mrtypeD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit)
                                  ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out)
                                  : 0U);
    vlSelf->npc__DOT__validF = ((~ (IData)(vlSelf->rst)) 
                                & ((IData)(vlSelf->npc__DOT__validW_d) 
                                   | ((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->npc__DOT__rst_d))));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key 
        = ((((0x33U == (0x7fU & vlSelf->npc__DOT__instD)) 
             | (0x63U == (0x7fU & vlSelf->npc__DOT__instD))) 
            << 2U) | (((IData)((0x1073U == (0x707fU 
                                            & vlSelf->npc__DOT__instD))) 
                       << 1U) | (IData)((0x2073U == 
                                         (0x707fU & vlSelf->npc__DOT__instD)))));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[0U] 
        = vlSelf->npc__DOT__mtvec_data;
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[1U] 
        = vlSelf->npc__DOT__mcause_data;
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[2U] 
        = vlSelf->npc__DOT__mepc_data;
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[3U] 
        = vlSelf->npc__DOT__mstatus_data;
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->npc__DOT__instD >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__instD 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__instD 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__instD 
                                                    >> 7U)))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->npc__DOT__instD >> 0x1fU))) 
            << 0x14U) | ((0xff000U & vlSelf->npc__DOT__instD) 
                         | ((0x800U & (vlSelf->npc__DOT__instD 
                                       >> 9U)) | (0x7feU 
                                                  & (vlSelf->npc__DOT__instD 
                                                     >> 0x14U)))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[2U] 
        = (0xfffff000U & vlSelf->npc__DOT__instD);
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->npc__DOT__instD >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->npc__DOT__instD 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->npc__DOT__instD 
                                                    >> 7U))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->npc__DOT__instD >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__instD >> 0x14U));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[0U] 
        = vlSelf->npc__DOT__csrW;
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[1U] 
        = vlSelf->npc__DOT__cmp_resultW;
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[2U] 
        = vlSelf->npc__DOT__snpcW;
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[3U] 
        = vlSelf->npc__DOT__mdataW;
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[4U] 
        = vlSelf->npc__DOT__ALU_resultW;
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0 
        = ((0x13U == (0x7fU & vlSelf->npc__DOT__instD)) 
           | (0x33U == (0x7fU & vlSelf->npc__DOT__instD)));
    vlSelf->npc__DOT__jalrD = (IData)((0x67U == (0x707fU 
                                                 & vlSelf->npc__DOT__instD)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h098fb8c5__0 
        = (((0x13U == (0x7fU & vlSelf->npc__DOT__instD)) 
            << 1U) | (0x33U == (0x7fU & vlSelf->npc__DOT__instD)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0 
        = (IData)((0x73U == (0x707fU & vlSelf->npc__DOT__instD)));
    if (vlSelf->npc__DOT__mvalidM) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read_TOP(vlSelf->npc__DOT__ALU_resultM, vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout);
        vlSelf->npc__DOT__rdata = vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout;
        if (vlSelf->npc__DOT__mwenM) {
            Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_write_TOP(vlSelf->npc__DOT__ALU_resultM, vlSelf->npc__DOT__src2M, (IData)(vlSelf->npc__DOT__mwmaskM));
        }
    } else {
        vlSelf->npc__DOT__rdata = 0U;
    }
    vlSelf->npc__DOT__ALU_A = ((0U == (IData)(vlSelf->npc__DOT__ALUsrc1X))
                                ? vlSelf->npc__DOT__src1X
                                : ((1U == (IData)(vlSelf->npc__DOT__ALUsrc1X))
                                    ? vlSelf->npc__DOT__pcX
                                    : 0U));
    vlSelf->npc__DOT__ALU_B = ((0U == (IData)(vlSelf->npc__DOT__ALUsrc2X))
                                ? vlSelf->npc__DOT__src2X
                                : ((1U == (IData)(vlSelf->npc__DOT__ALUsrc2X))
                                    ? vlSelf->npc__DOT__immX
                                    : ((2U == (IData)(vlSelf->npc__DOT__ALUsrc2X))
                                        ? vlSelf->npc__DOT__csrX
                                        : 0U)));
    if (vlSelf->npc__DOT__validF) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read_TOP(vlSelf->npc__DOT__pcF, vlSelf->__Vfunc_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read__1__Vfuncout);
        vlSelf->npc__DOT__instF = vlSelf->__Vfunc_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read__1__Vfuncout;
    } else {
        vlSelf->npc__DOT__instF = 0U;
    }
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key) 
                       == vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__ALUsrc2D = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out)
                                   : 1U);
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcW) 
                       == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__rdregsrcW) 
                                                   == 
                                                   vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                   [0U]);
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcW) 
                          == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->npc__DOT__rdregsrcW) 
                                                      == 
                                                      vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                      [1U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcW) 
                          == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->npc__DOT__rdregsrcW) 
                                                      == 
                                                      vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                      [2U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcW) 
                          == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->npc__DOT__rdregsrcW) 
                                                      == 
                                                      vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                      [3U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcW) 
                          == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->npc__DOT__rdregsrcW) 
                                                      == 
                                                      vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                      [4U]));
    vlSelf->npc__DOT__rddataW = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit)
                                  ? vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out
                                  : 0U);
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
           & (0x5000U == (0x7000U & vlSelf->npc__DOT__instD)));
    vlSelf->npc__DOT__jumpD = ((0x6fU == (0x7fU & vlSelf->npc__DOT__instD)) 
                               | (IData)(vlSelf->npc__DOT__jalrD));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key 
        = (((0x37U == (0x7fU & vlSelf->npc__DOT__instD)) 
            << 8U) | (((0x17U == (0x7fU & vlSelf->npc__DOT__instD)) 
                       << 7U) | (((0x6fU == (0x7fU 
                                             & vlSelf->npc__DOT__instD)) 
                                  << 6U) | (((IData)(vlSelf->npc__DOT__jalrD) 
                                             << 5U) 
                                            | (((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->npc__DOT__instD)) 
                                                << 4U) 
                                               | (((3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->npc__DOT__instD)) 
                                                   << 3U) 
                                                  | (((0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->npc__DOT__instD)) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h098fb8c5__0))))))));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key 
        = ((0x38U & (vlSelf->npc__DOT__instD >> 9U)) 
           | (((0x63U == (0x7fU & vlSelf->npc__DOT__instD)) 
               << 2U) | (IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h098fb8c5__0)));
    vlSelf->npc__DOT__mretD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0) 
                               & (0x302U == (vlSelf->npc__DOT__instD 
                                             >> 0x14U)));
    vlSelf->npc__DOT__idu_inst__DOT__ebreak = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->npc__DOT__instD 
                                                   >> 0x14U)));
    vlSelf->npc__DOT__ecallD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0) 
                                & (0U == (vlSelf->npc__DOT__instD 
                                          >> 0x14U)));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[0U] 
        = (0x400000000ULL | (QData)((IData)((0xffffU 
                                             & vlSelf->npc__DOT__rdata))));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)((0xffU 
                                             & vlSelf->npc__DOT__rdata))));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[2U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->npc__DOT__rdata)));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->npc__DOT__rdata 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->npc__DOT__rdata)))));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)((((- (IData)((1U & (vlSelf->npc__DOT__rdata 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelf->npc__DOT__rdata))));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[0U] 
        = (0xffffU & vlSelf->npc__DOT__rdata);
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->npc__DOT__rdata);
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[2U] 
        = vlSelf->npc__DOT__rdata;
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((1U & (vlSelf->npc__DOT__rdata 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->npc__DOT__rdata));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((1U & (vlSelf->npc__DOT__rdata 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->npc__DOT__rdata));
    vlSelf->npc__DOT__u_ALU__DOT__add_Cout = (1U & (IData)(
                                                           (1ULL 
                                                            & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                                + (QData)((IData)(vlSelf->npc__DOT__ALU_B))) 
                                                               >> 0x20U))));
    vlSelf->npc__DOT__u_ALU__DOT__sub_Cout = (1U & (IData)(
                                                           (1ULL 
                                                            & ((1ULL 
                                                                + 
                                                                ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                                 + (QData)((IData)(
                                                                                (~ vlSelf->npc__DOT__ALU_B))))) 
                                                               >> 0x20U))));
    vlSelf->__VdfgTmp_h0eee3364__0 = VL_SHIFTRS_III(32,32,5, vlSelf->npc__DOT__ALU_A, 
                                                    (0x1fU 
                                                     & vlSelf->npc__DOT__ALU_B));
    vlSelf->__VdfgTmp_h8d43fe98__0 = (vlSelf->npc__DOT__ALU_A 
                                      & vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h80607264__0 = (vlSelf->npc__DOT__ALU_A 
                                      | vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h8f7c6002__0 = (vlSelf->npc__DOT__ALU_A 
                                      ^ vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h0eead378__0 = (vlSelf->npc__DOT__ALU_A 
                                      << (0x1fU & vlSelf->npc__DOT__ALU_B));
    vlSelf->__VdfgTmp_h0ee2f3e1__0 = (vlSelf->npc__DOT__ALU_A 
                                      >> (0x1fU & vlSelf->npc__DOT__ALU_B));
    vlSelf->npc__DOT__u_ALU__DOT__add_result = (vlSelf->npc__DOT__ALU_A 
                                                + vlSelf->npc__DOT__ALU_B);
    vlSelf->npc__DOT__u_ALU__DOT__sub_result = ((IData)(1U) 
                                                + (vlSelf->npc__DOT__ALU_A 
                                                   + 
                                                   (~ vlSelf->npc__DOT__ALU_B)));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                       == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__inst_type = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit)
                                    ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out)
                                    : 6U);
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                       == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit)
            ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out)
            : 0U);
    vlSelf->npc__DOT__rf_raddr2 = ((IData)(vlSelf->npc__DOT__ecallD)
                                    ? 0xfU : (0x1fU 
                                              & (vlSelf->npc__DOT__instD 
                                                 >> 0x14U)));
    vlSelf->npc__DOT__csraddrD = (((0x73U == (0x7fU 
                                              & vlSelf->npc__DOT__instD)) 
                                   | (IData)(vlSelf->npc__DOT__ecallD))
                                   ? (vlSelf->npc__DOT__instD 
                                      >> 0x14U) : 0U);
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeM) 
                       == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__mrtypeM) == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeM) 
                          == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__mrtypeM) == 
              vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeM) 
                          == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__mrtypeM) == 
              vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeM) 
                          == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__mrtypeM) == 
              vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeM) 
                          == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__mrtypeM) == 
              vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__mdataM = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit)
                                 ? vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out
                                 : 0U);
    if ((0U == (IData)(vlSelf->npc__DOT__ALU_opX))) {
        vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[0U] 
            = vlSelf->npc__DOT__u_ALU__DOT__add_Cout;
        vlSelf->npc__DOT__Cout = vlSelf->npc__DOT__u_ALU__DOT__add_Cout;
    } else {
        vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[0U] 
            = ((1U == (IData)(vlSelf->npc__DOT__ALU_opX)) 
               & (IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_Cout));
        vlSelf->npc__DOT__Cout = ((1U == (IData)(vlSelf->npc__DOT__ALU_opX)) 
                                  & (IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_Cout));
    }
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h0eee3364__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h0eee3364__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4U] 
        = (0x600000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h8d43fe98__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h8d43fe98__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U] 
        = (0x800000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h80607264__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h80607264__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U] 
        = (0xa00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h8f7c6002__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h8f7c6002__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (0xc00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h0eead378__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h0eead378__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h0ee2f3e1__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h0ee2f3e1__0));
    vlSelf->npc__DOT__u_ALU__DOT__add_overflow = (1U 
                                                  & (((vlSelf->npc__DOT__ALU_A 
                                                       >> 0x1fU) 
                                                      & ((~ 
                                                          (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                           >> 0x1fU)) 
                                                         & (vlSelf->npc__DOT__ALU_B 
                                                            >> 0x1fU))) 
                                                     | ((~ 
                                                         (vlSelf->npc__DOT__ALU_A 
                                                          >> 0x1fU)) 
                                                        & ((~ 
                                                            (vlSelf->npc__DOT__ALU_B 
                                                             >> 0x1fU)) 
                                                           & (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                              >> 0x1fU)))));
    vlSelf->npc__DOT__u_ALU__DOT__sub_overflow = (1U 
                                                  & (((vlSelf->npc__DOT__ALU_A 
                                                       >> 0x1fU) 
                                                      & ((~ 
                                                          (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                           >> 0x1fU)) 
                                                         & (~ 
                                                            (vlSelf->npc__DOT__ALU_B 
                                                             >> 0x1fU)))) 
                                                     | ((~ 
                                                         (vlSelf->npc__DOT__ALU_A 
                                                          >> 0x1fU)) 
                                                        & ((vlSelf->npc__DOT__ALU_B 
                                                            & vlSelf->npc__DOT__u_ALU__DOT__sub_result) 
                                                           >> 0x1fU))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__inst_type) 
                       == vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__inst_type) == vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
         [0U]);
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__inst_type) 
                          == vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__inst_type) == 
            vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
            [1U]));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__inst_type) 
                          == vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__inst_type) == 
            vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
            [2U]));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__inst_type) 
                          == vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__inst_type) == 
            vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
            [3U]));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__inst_type) 
                          == vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__inst_type) == 
            vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list
            [4U]));
    vlSelf->npc__DOT__immD = ((IData)(vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit)
                               ? vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out
                               : 0U);
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key 
        = ((0x40U & (((0x63U == (0x7fU & vlSelf->npc__DOT__instD)) 
                      | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                         | (IData)((0x40000033U == 
                                    (0xfe00707fU & vlSelf->npc__DOT__instD))))) 
                     << 6U)) | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                  & (IData)((0x1000U 
                                             == (0xfe007000U 
                                                 & vlSelf->npc__DOT__instD)))) 
                                 << 5U) | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0) 
                                             & (0U 
                                                == 
                                                (vlSelf->npc__DOT__instD 
                                                 >> 0x19U))) 
                                            << 4U) 
                                           | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0) 
                                                & (0x20U 
                                                   == 
                                                   (vlSelf->npc__DOT__instD 
                                                    >> 0x19U))) 
                                               << 3U) 
                                              | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                                   & (0x4000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->npc__DOT__instD))) 
                                                  << 2U) 
                                                 | (((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                                       & (0x6000U 
                                                          == 
                                                          (0x7000U 
                                                           & vlSelf->npc__DOT__instD))) 
                                                      | (0x73U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->npc__DOT__instD))) 
                                                     << 1U) 
                                                    | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                                       & (0x7000U 
                                                          == 
                                                          (0x7000U 
                                                           & vlSelf->npc__DOT__instD)))))))));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key 
        = (((3U == (0x7fU & vlSelf->npc__DOT__instD)) 
            << 4U) | (((IData)(vlSelf->npc__DOT__jumpD) 
                       << 3U) | ((4U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                                        << 2U)) | (
                                                   ((0x73U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->npc__DOT__instD)) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x63U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->npc__DOT__instD)) 
                                                         | ((0x23U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->npc__DOT__instD)) 
                                                            | ((IData)(vlSelf->npc__DOT__ecallD) 
                                                               | ((IData)(vlSelf->npc__DOT__mretD) 
                                                                  | ((~ 
                                                                      ((0x37U 
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
                                                                     | (IData)(vlSelf->npc__DOT__idu_inst__DOT__ebreak)))))))))));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__csraddrD) 
                       == vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__csraddrD) == vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__csraddrD) 
                          == vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__csraddrD) == 
              vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__csraddrD) 
                          == vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__csraddrD) == 
              vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__csraddrD) 
                          == vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__csraddrD) == 
              vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__csr_rdata = ((IData)(vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit)
                                    ? vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out
                                    : 0U);
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[0U] 
        = (0xaU | (IData)(vlSelf->npc__DOT__Cout));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[1U] 
        = (8U | (1U & (~ (IData)(vlSelf->npc__DOT__Cout))));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[1U] 
        = (1U & (~ (IData)(vlSelf->npc__DOT__Cout)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow)) 
            << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow)) 
            << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6U] 
        = (0x200000000ULL | (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow)) 
                              << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_result))));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow)) 
            << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_result)));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
                       == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__ALU_opD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit)
                                  ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out)
                                  : 0U);
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
                       == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
                          == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__rdregsrcD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit)
                                    ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out)
                                    : 0U);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opX) 
                               == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ALU_opX) == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opX) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opX) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opX) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opX) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opX) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opX) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opX) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opX) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opX) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opX) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opX) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opX) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opX) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opX) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__out = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit)
                                          ? vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out
                                          : 0ULL);
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[4U] 
        = (2U | (0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[5U] 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[3U] 
        = (1U & VL_REDXOR_64((0x180000000ULL & vlSelf->npc__DOT__u_ALU__DOT__out)));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[4U] 
        = (0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[5U] 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))));
    vlSelf->npc__DOT__slt = (1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->npc__DOT__u_ALU__DOT__out)));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[2U] 
        = (6U | (1U & (~ (IData)(vlSelf->npc__DOT__slt))));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[3U] 
        = (4U | (IData)(vlSelf->npc__DOT__slt));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[2U] 
        = (1U & (~ (IData)(vlSelf->npc__DOT__slt)));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->npc__DOT__cmp_typeX) == 
            vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [0U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__cmp_typeX) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
         [0U]);
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__cmp_typeX) 
               == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [1U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__cmp_typeX) == 
            vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [1U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__cmp_typeX) 
               == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [2U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__cmp_typeX) == 
            vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [2U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__cmp_typeX) 
               == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [3U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__cmp_typeX) == 
            vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [3U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__cmp_typeX) 
               == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [4U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__cmp_typeX) == 
            vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [4U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__cmp_typeX) 
               == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [5U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__cmp_typeX) == 
            vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [5U]));
    vlSelf->npc__DOT__cmp_resultX = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
                                     & (IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out));
    vlSelf->npc__DOT__dnpcX = (((IData)(vlSelf->npc__DOT__ecallX) 
                                | (IData)(vlSelf->npc__DOT__mretX))
                                ? vlSelf->npc__DOT__csrX
                                : (((IData)(vlSelf->npc__DOT__jumpX) 
                                    | ((IData)(vlSelf->npc__DOT__branchX) 
                                       & (IData)(vlSelf->npc__DOT__cmp_resultX)))
                                    ? (((IData)(vlSelf->npc__DOT__jalrX)
                                         ? vlSelf->npc__DOT__src1X
                                         : vlSelf->npc__DOT__pcX) 
                                       + vlSelf->npc__DOT__immX)
                                    : vlSelf->npc__DOT__snpcX));
}

VL_ATTR_COLD void Vnpc___024root___eval_stl(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vnpc___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__ico(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__act(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__nba(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vnpc___024root___ctor_var_reset(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->npc__DOT__validF = 0;
    vlSelf->npc__DOT__rst_d = 0;
    vlSelf->npc__DOT__validW_d = 0;
    vlSelf->npc__DOT__instF = 0;
    vlSelf->npc__DOT__pcF = 0;
    vlSelf->npc__DOT__instD = 0;
    vlSelf->npc__DOT__pcD = 0;
    vlSelf->npc__DOT__snpcD = 0;
    vlSelf->npc__DOT__mrtypeD = 0;
    vlSelf->npc__DOT__ALU_opD = 0;
    vlSelf->npc__DOT__rdregsrcD = 0;
    vlSelf->npc__DOT__inst_type = 0;
    vlSelf->npc__DOT__ALUsrc2D = 0;
    vlSelf->npc__DOT__jumpD = 0;
    vlSelf->npc__DOT__jalrD = 0;
    vlSelf->npc__DOT__ecallD = 0;
    vlSelf->npc__DOT__mretD = 0;
    vlSelf->npc__DOT__mwmaskD = 0;
    vlSelf->npc__DOT__rf_raddr2 = 0;
    vlSelf->npc__DOT__immD = 0;
    vlSelf->npc__DOT__csraddrD = 0;
    vlSelf->npc__DOT__mtvec_data = 0;
    vlSelf->npc__DOT__mcause_data = 0;
    vlSelf->npc__DOT__mepc_data = 0;
    vlSelf->npc__DOT__mstatus_data = 0;
    vlSelf->npc__DOT__csr_rdata = 0;
    vlSelf->npc__DOT__mvalidX = 0;
    vlSelf->npc__DOT__mwenX = 0;
    vlSelf->npc__DOT__ecallX = 0;
    vlSelf->npc__DOT__mretX = 0;
    vlSelf->npc__DOT__branchX = 0;
    vlSelf->npc__DOT__jumpX = 0;
    vlSelf->npc__DOT__jalrX = 0;
    vlSelf->npc__DOT__ALUsrc1X = 0;
    vlSelf->npc__DOT__ALUsrc2X = 0;
    vlSelf->npc__DOT__cmp_typeX = 0;
    vlSelf->npc__DOT__ALU_opX = 0;
    vlSelf->npc__DOT__rdregsrcX = 0;
    vlSelf->npc__DOT__mrtypeX = 0;
    vlSelf->npc__DOT__rdX = 0;
    vlSelf->npc__DOT__mwmaskX = 0;
    vlSelf->npc__DOT__csraddrX = 0;
    vlSelf->npc__DOT__csrX = 0;
    vlSelf->npc__DOT__immX = 0;
    vlSelf->npc__DOT__snpcX = 0;
    vlSelf->npc__DOT__pcX = 0;
    vlSelf->npc__DOT__src1X = 0;
    vlSelf->npc__DOT__src2X = 0;
    vlSelf->npc__DOT__ALU_A = 0;
    vlSelf->npc__DOT__ALU_B = 0;
    vlSelf->npc__DOT__Cout = 0;
    vlSelf->npc__DOT__slt = 0;
    vlSelf->npc__DOT__cmp_resultX = 0;
    vlSelf->npc__DOT__dnpcX = 0;
    vlSelf->npc__DOT__cmp_resultM = 0;
    vlSelf->npc__DOT__mvalidM = 0;
    vlSelf->npc__DOT__mwenM = 0;
    vlSelf->npc__DOT__ecallM = 0;
    vlSelf->npc__DOT__rdregsrcM = 0;
    vlSelf->npc__DOT__mrtypeM = 0;
    vlSelf->npc__DOT__rdM = 0;
    vlSelf->npc__DOT__mwmaskM = 0;
    vlSelf->npc__DOT__csraddrM = 0;
    vlSelf->npc__DOT__dnpcM = 0;
    vlSelf->npc__DOT__pcM = 0;
    vlSelf->npc__DOT__src2M = 0;
    vlSelf->npc__DOT__ALU_resultM = 0;
    vlSelf->npc__DOT__csrM = 0;
    vlSelf->npc__DOT__snpcM = 0;
    vlSelf->npc__DOT__rdata = 0;
    vlSelf->npc__DOT__mdataM = 0;
    vlSelf->npc__DOT__ecallW = 0;
    vlSelf->npc__DOT__cmp_resultW = 0;
    vlSelf->npc__DOT__rdregsrcW = 0;
    vlSelf->npc__DOT__rdW = 0;
    vlSelf->npc__DOT__src2W = 0;
    vlSelf->npc__DOT__pcW = 0;
    vlSelf->npc__DOT__dnpcW = 0;
    vlSelf->npc__DOT__ALU_resultW = 0;
    vlSelf->npc__DOT__csrW = 0;
    vlSelf->npc__DOT__snpcW = 0;
    vlSelf->npc__DOT__mdataW = 0;
    vlSelf->npc__DOT__rddataW = 0;
    vlSelf->npc__DOT__csraddrW = 0;
    vlSelf->npc__DOT__u_IFU__DOT__state = 0;
    vlSelf->npc__DOT__dstagebus_inst__DOT__state = 0;
    vlSelf->npc__DOT__idu_inst__DOT__ebreak = 0;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key = 0;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key = 0;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out = 0;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key = 0;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key = 0;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key = 0;
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0 = 0;
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h098fb8c5__0 = 0;
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0 = 0;
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[__Vi0] = 0;
    }
    vlSelf->npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__hit = 0;
    vlSelf->npc__DOT__u_Xstage_bus__DOT__state = 0;
    vlSelf->npc__DOT__u_ALU__DOT__add_overflow = 0;
    vlSelf->npc__DOT__u_ALU__DOT__sub_overflow = 0;
    vlSelf->npc__DOT__u_ALU__DOT__add_Cout = 0;
    vlSelf->npc__DOT__u_ALU__DOT__sub_Cout = 0;
    vlSelf->npc__DOT__u_ALU__DOT__add_result = 0;
    vlSelf->npc__DOT__u_ALU__DOT__sub_result = 0;
    vlSelf->npc__DOT__u_ALU__DOT__out = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 0;
    vlSelf->npc__DOT__u_Mstage_bus__DOT__state = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit = 0;
    vlSelf->npc__DOT__u_Wstage_bus__DOT__state = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = 0;
    vlSelf->__VdfgTmp_h0eee3364__0 = 0;
    vlSelf->__VdfgTmp_h8d43fe98__0 = 0;
    vlSelf->__VdfgTmp_h80607264__0 = 0;
    vlSelf->__VdfgTmp_h8f7c6002__0 = 0;
    vlSelf->__VdfgTmp_h0eead378__0 = 0;
    vlSelf->__VdfgTmp_h0ee2f3e1__0 = 0;
    vlSelf->__Vfunc_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read__1__Vfuncout = 0;
    vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

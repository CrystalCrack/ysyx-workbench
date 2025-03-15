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
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vnpc___024root___eval_initial__TOP(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0U] = 0x2bU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[1U] = 0x2aU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[2U] = 0x29U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[3U] = 0x28U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[4U] = 0x27U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[5U] = 0x26U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[6U] = 0x25U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[7U] = 0x24U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[8U] = 0x23U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[9U] = 0x22U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xaU] = 0x21U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xbU] = 0x20U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xcU] = 0x1fU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xdU] = 0x1eU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xeU] = 0x1dU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xfU] = 0x1cU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x10U] = 0x1bU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x11U] = 0x1aU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x12U] = 0x19U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x13U] = 0x18U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x14U] = 0x17U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x15U] = 0x16U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x16U] = 0x15U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x17U] = 0x14U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x18U] = 0x13U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x19U] = 0x12U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1aU] = 0x11U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1bU] = 0x10U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1cU] = 0xfU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1dU] = 0xeU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1eU] = 0xdU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1fU] = 0xcU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x20U] = 0xbU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x21U] = 0xaU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x22U] = 9U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x23U] = 8U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x24U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x25U] = 6U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x26U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x27U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x28U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x29U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x2aU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[7U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[8U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xaU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xdU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x15U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x16U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x19U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1eU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1fU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x20U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x22U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x29U] = 0U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5U] = 2U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6U] = 1U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7U] = 0U;
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list[0U] = 0x305U;
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list[1U] = 0x342U;
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list[2U] = 0x341U;
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list[3U] = 0x300U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0U] = 0x2bU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[1U] = 0x2aU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[2U] = 0x29U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[3U] = 0x28U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[4U] = 0x27U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[5U] = 0x26U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[6U] = 0x25U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[7U] = 0x24U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[8U] = 0x23U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[9U] = 0x22U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xaU] = 0x21U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xbU] = 0x20U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xcU] = 0x1fU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xdU] = 0x1eU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xeU] = 0x1dU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xfU] = 0x1cU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x10U] = 0x1bU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x11U] = 0x1aU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x12U] = 0x19U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x13U] = 0x18U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x14U] = 0x17U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x15U] = 0x16U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x16U] = 0x15U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x17U] = 0x14U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x18U] = 0x13U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x19U] = 0x12U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1aU] = 0x11U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1bU] = 0x10U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1cU] = 0xfU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1dU] = 0xeU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1eU] = 0xdU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1fU] = 0xcU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x20U] = 0xbU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x21U] = 0xaU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x22U] = 9U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x23U] = 8U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x24U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x25U] = 6U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x26U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x27U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x28U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x29U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x2aU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[2U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[4U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[5U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[7U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[8U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[9U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xaU] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xbU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xcU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xdU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xeU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xfU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x10U] = 6U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x11U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x12U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x13U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x14U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x15U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x16U] = 6U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x17U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x18U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x19U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1aU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1bU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1cU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1dU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1eU] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1fU] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x20U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x21U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x22U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x23U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x24U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x25U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x26U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x27U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x28U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x29U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x2aU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0U] = 0x2bU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[1U] = 0x2aU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[2U] = 0x29U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[3U] = 0x28U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[4U] = 0x27U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[5U] = 0x26U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[6U] = 0x25U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[7U] = 0x24U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[8U] = 0x23U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[9U] = 0x22U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xaU] = 0x21U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xbU] = 0x20U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xcU] = 0x1fU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xdU] = 0x1eU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xeU] = 0x1dU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xfU] = 0x1cU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x10U] = 0x1bU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x11U] = 0x1aU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x12U] = 0x19U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x13U] = 0x18U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x14U] = 0x17U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x15U] = 0x16U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x16U] = 0x15U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x17U] = 0x14U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x18U] = 0x13U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x19U] = 0x12U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1aU] = 0x11U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1bU] = 0x10U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1cU] = 0xfU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1dU] = 0xeU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1eU] = 0xdU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1fU] = 0xcU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x20U] = 0xbU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x21U] = 0xaU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x22U] = 9U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x23U] = 8U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x24U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x25U] = 6U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x26U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x27U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x28U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x29U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x2aU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[1U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[2U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[3U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[5U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[6U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[7U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[8U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[9U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xaU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xbU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xcU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xdU] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xeU] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xfU] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x10U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x11U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x12U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x13U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x14U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x15U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x16U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x17U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x18U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x19U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1aU] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1bU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1cU] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1dU] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1eU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1fU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x20U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x21U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x22U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x23U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x24U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x25U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x26U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x27U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x28U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x29U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x2aU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0U] = 0x2bU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[1U] = 0x2aU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[2U] = 0x29U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[3U] = 0x28U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[4U] = 0x27U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[5U] = 0x26U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[6U] = 0x25U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[7U] = 0x24U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[8U] = 0x23U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[9U] = 0x22U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xaU] = 0x21U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xbU] = 0x20U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xcU] = 0x1fU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xdU] = 0x1eU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xeU] = 0x1dU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xfU] = 0x1cU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x10U] = 0x1bU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x11U] = 0x1aU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x12U] = 0x19U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x13U] = 0x18U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x14U] = 0x17U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x15U] = 0x16U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x16U] = 0x15U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x17U] = 0x14U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x18U] = 0x13U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x19U] = 0x12U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1aU] = 0x11U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1bU] = 0x10U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1cU] = 0xfU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1dU] = 0xeU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1eU] = 0xdU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1fU] = 0xcU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x20U] = 0xbU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x21U] = 0xaU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x22U] = 9U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x23U] = 8U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x24U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x25U] = 6U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x26U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x27U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x28U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x29U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x2aU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[5U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[7U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[8U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[9U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xaU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xbU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xcU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xdU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xeU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xfU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x10U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x11U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x12U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x13U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x14U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x15U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x16U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x17U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x18U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x19U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1aU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1bU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1cU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1dU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1eU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1fU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x20U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x21U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x22U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x23U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x24U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x25U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x26U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x27U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x28U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x29U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x2aU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0U] = 0x2bU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[1U] = 0x2aU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[2U] = 0x29U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[3U] = 0x28U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[4U] = 0x27U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[5U] = 0x26U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[6U] = 0x25U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[7U] = 0x24U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[8U] = 0x23U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[9U] = 0x22U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xaU] = 0x21U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xbU] = 0x20U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xcU] = 0x1fU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xdU] = 0x1eU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xeU] = 0x1dU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xfU] = 0x1cU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x10U] = 0x1bU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x11U] = 0x1aU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x12U] = 0x19U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x13U] = 0x18U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x14U] = 0x17U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x15U] = 0x16U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x16U] = 0x15U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x17U] = 0x14U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x18U] = 0x13U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x19U] = 0x12U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1aU] = 0x11U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1bU] = 0x10U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1cU] = 0xfU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1dU] = 0xeU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1eU] = 0xdU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1fU] = 0xcU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x20U] = 0xbU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x21U] = 0xaU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x22U] = 9U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x23U] = 8U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x24U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x25U] = 6U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x26U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x27U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x28U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x29U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x2aU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[1U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[2U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[5U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[6U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[7U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[8U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[9U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xaU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xbU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xcU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xdU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xeU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xfU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x10U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x11U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x12U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x13U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x14U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x15U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x16U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x17U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x18U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x19U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1aU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1bU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1cU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1dU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1eU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1fU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x20U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x21U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x22U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x23U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x24U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x25U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x26U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x27U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x28U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x29U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x2aU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__key_list[0U] = 0x341U;
    vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__key_list[1U] = 0x342U;
    vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__key_list[2U] = 0x305U;
    vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__data_list[1U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__data_list[2U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__pair_list[0U] = 0x1a09U;
    vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__pair_list[1U] = 0x1a12U;
    vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__pair_list[2U] = 0x182cU;
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
                VL_FATAL_MT("/home/crystc/ysyx-workbench/npc/vsrc/npc.sv", 1, "", "Settle region did not converge.");
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

void Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_ATTR_COLD void Vnpc___024root___stl_sequent__TOP__0(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__pair_list[0U] 
        = (0x30500000000ULL | (QData)((IData)(vlSelf->npc__DOT__mtvec_rdata)));
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__pair_list[1U] 
        = (0x34200000000ULL | (QData)((IData)(vlSelf->npc__DOT__mcause_rdata)));
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__pair_list[2U] 
        = (0x34100000000ULL | (QData)((IData)(vlSelf->npc__DOT__mepc_rdata)));
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__pair_list[3U] 
        = (0x30000000000ULL | (QData)((IData)(vlSelf->npc__DOT__mstatus_rdata)));
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__data_list[0U] 
        = vlSelf->npc__DOT__mtvec_rdata;
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__data_list[1U] 
        = vlSelf->npc__DOT__mcause_rdata;
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__data_list[2U] 
        = vlSelf->npc__DOT__mepc_rdata;
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__data_list[3U] 
        = vlSelf->npc__DOT__mstatus_rdata;
    if (vlSelf->rst) {
        vlSelf->npc__DOT__inst = 0U;
    } else {
        Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_read_TOP(vlSelf->npc__DOT__pc, vlSelf->__Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout);
        vlSelf->npc__DOT__inst = vlSelf->__Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout;
    }
    vlSelf->npc__DOT__idu_inst__DOT__immI = (((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->npc__DOT__inst 
                                                >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__immS = (((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->npc__DOT__inst 
                                                      >> 7U))));
    vlSelf->npc__DOT__idu_inst__DOT__immB = (((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->npc__DOT__inst 
                                                         >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__immJ = (((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->npc__DOT__inst) 
                                                | ((0x800U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->npc__DOT__inst 
                                                         >> 0x14U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[6U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[9U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xbU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xcU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xeU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xfU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x10U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x11U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x12U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x13U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x14U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->npc__DOT__inst 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x17U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x18U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1aU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->npc__DOT__inst 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1bU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1cU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1dU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x21U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x23U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x24U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->npc__DOT__inst 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x25U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x26U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0x14U) | ((0xff000U & vlSelf->npc__DOT__inst) 
                         | ((0x800U & (vlSelf->npc__DOT__inst 
                                       >> 9U)) | (0x7feU 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 0x14U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x27U] 
        = (0xfffff000U & vlSelf->npc__DOT__inst);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x28U] 
        = (0xfffff000U & vlSelf->npc__DOT__inst);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x2aU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hab5d87c6__0 
        = ((0x73U == vlSelf->npc__DOT__inst) | (0x30200073U 
                                                == vlSelf->npc__DOT__inst));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi = (IData)(
                                                            (0x13U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_xor = (IData)(
                                                           (0x4033U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_or = (IData)(
                                                          (0x6033U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_andi = (IData)(
                                                            (0x7013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sll = (IData)(
                                                           (0x1033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_and = (IData)(
                                                           (0x7033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_xori = (IData)(
                                                            (0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_slli = (IData)(
                                                            (0x1013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_ori = (IData)(
                                                           (0x6013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu = (IData)(
                                                            (0x3033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu 
        = (IData)((0x3013U == (0x707fU & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt = (IData)(
                                                           (0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_slti = (IData)(
                                                            (0x2013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw = (IData)(
                                                          (0x2023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb = (IData)(
                                                          (0x23U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh = (IData)(
                                                          (0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw = (IData)(
                                                          (0x2003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu = (IData)(
                                                           (0x4003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh = (IData)(
                                                          (0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu = (IData)(
                                                           (0x5003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lb = (IData)(
                                                          (3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr = (IData)(
                                                            (0x67U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq = (IData)(
                                                           (0x63U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne = (IData)(
                                                           (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge = (IData)(
                                                           (0x5063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu = (IData)(
                                                            (0x7063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt = (IData)(
                                                           (0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu = (IData)(
                                                            (0x6063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_he69f398c__0 
        = (IData)((0x33U == (0x707fU & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h873f971e__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd3ddd1c8__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[1U] = 0x2bU;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[2U] 
        = (0xa80U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                     << 0xcU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[3U] 
        = (0x29000U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                        << 0x12U) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                     >> 0x14U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[4U] 
        = (0xa00000U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                         << 0x18U) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                      >> 0xeU)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[5U] 
        = (0x27000000U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                           << 0x1eU) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                        >> 8U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[6U] 
        = (0x80000000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                          >> 2U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[7U] 
        = (9U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                 << 4U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[8U] 
        = (0x250U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                     >> 0x1cU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[9U] = 0x9000U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xaU] 
        = (0x230000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                        << 0x16U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xbU] 
        = (0x8800000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                         >> 0xaU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xcU] = 0x10000000U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xdU] 
        = (2U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                 << 2U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xeU] 
        = (0x80U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                     << 8U) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                               >> 0x1eU)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xfU] 
        = (0x1f00U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                      >> 0x18U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x10U] 
        = (0x78000U | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                       << 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x11U] 
        = (0x1d00000U | ((vlSelf->npc__DOT__idu_inst__DOT__immB 
                          << 0x1aU) | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                                       >> 0xcU)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x12U] 
        = (0x70000000U | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                          >> 6U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x13U] 
        = vlSelf->npc__DOT__idu_inst__DOT__immI;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x14U] 
        = (0x1bU | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                    << 6U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x15U] 
        = (0x680U | ((vlSelf->npc__DOT__idu_inst__DOT__immB 
                      << 0xcU) | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                                  >> 0x1aU)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x16U] 
        = (0x19000U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                        << 0x12U) | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                                     >> 0x14U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x17U] 
        = (0x600000U | ((vlSelf->npc__DOT__idu_inst__DOT__immS 
                         << 0x18U) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                      >> 0xeU)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x18U] 
        = (0x17000000U | (vlSelf->npc__DOT__idu_inst__DOT__immS 
                          >> 8U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x19U] = 0x80000000U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1aU] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1bU] 
        = (0x150U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                     << 0xaU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1cU] 
        = (0x5000U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                       << 0x10U) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                    >> 0x16U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1dU] 
        = (0x130000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                        >> 0x10U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1eU] 
        = (0x4800000U | (vlSelf->npc__DOT__idu_inst__DOT__immS 
                         << 0x1cU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1fU] 
        = (0x10000000U | (vlSelf->npc__DOT__idu_inst__DOT__immS 
                          >> 4U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x20U] 
        = (1U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                 << 2U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x21U] 
        = (0x40U | ((vlSelf->npc__DOT__idu_inst__DOT__immB 
                     << 8U) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                               >> 0x1eU)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x22U] 
        = (0xf00U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                      << 0xeU) | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                                  >> 0x18U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x23U] 
        = (0x38000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                       >> 0x12U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x24U] = 0xd00000U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x25U] = 0x30000000U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x26U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x27U] 
        = (0xbU | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                   << 6U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x28U] 
        = (0x280U | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                     >> 0x1aU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x29U] 
        = (0x9000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                      << 0x12U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2aU] 
        = (0x200000U | ((vlSelf->npc__DOT__idu_inst__DOT__immS 
                         << 0x18U) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                      >> 0xeU)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2bU] 
        = (0x7000000U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                          << 0x1eU) | (vlSelf->npc__DOT__idu_inst__DOT__immS 
                                       >> 8U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2cU] 
        = (0x80000000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                          >> 2U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2dU] 
        = (1U | (vlSelf->npc__DOT__idu_inst__DOT__immJ 
                 << 4U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2eU] 
        = (0x50U | ((0xffc00000U & (vlSelf->npc__DOT__inst 
                                    << 0xaU)) | (vlSelf->npc__DOT__idu_inst__DOT__immJ 
                                                 >> 0x1cU)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2fU] 
        = (0x1000U | ((0xf0000000U & (vlSelf->npc__DOT__inst 
                                      << 0x10U)) | 
                      (vlSelf->npc__DOT__inst >> 0x16U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x30U] 
        = (0x30000U | (vlSelf->npc__DOT__inst >> 0x10U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x31U] 
        = (0x800000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                        << 0x1cU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x32U] 
        = (0x10000000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                          >> 4U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x33U] = 0U;
    vlSelf->npc__DOT__cmp_type = (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu) 
                                   | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu))
                                   ? 3U : (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt) 
                                            | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slti))
                                            ? 2U : 0U));
    vlSelf->npc__DOT__csr_raddr = (0xfffU & (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrw) 
                                              | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrs))
                                              ? (vlSelf->npc__DOT__inst 
                                                 >> 0x14U)
                                              : ((0x73U 
                                                  == vlSelf->npc__DOT__inst)
                                                  ? 0x305U
                                                  : 
                                                 ((0x30200073U 
                                                   == vlSelf->npc__DOT__inst)
                                                   ? 0x341U
                                                   : 0U))));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_add = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_he69f398c__0) 
         & (0U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sub = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_he69f398c__0) 
         & (0x20U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_srai = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h873f971e__0) 
         & (0x20U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_srli = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h873f971e__0) 
         & (0U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd3ddd1c8__0) 
         & (0U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sra = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd3ddd1c8__0) 
         & (0x20U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__csr_raddr) 
                       == vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__csr_raddr) == 
           vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__csr_raddr) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__csr_raddr) 
              == vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__csr_raddr) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__csr_raddr) 
              == vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__csr_wen_int = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__hit)
          ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__lut_out)
          : 0U);
    if (vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrw) {
        vlSelf->npc__DOT__rs2 = 0U;
        vlSelf->npc__DOT____Vcellout__idu_inst__csr_wen 
            = vlSelf->npc__DOT__idu_inst__DOT__csr_wen_int;
    } else {
        vlSelf->npc__DOT__rs2 = ((0x73U == vlSelf->npc__DOT__inst)
                                  ? 0xfU : (0x1fU & 
                                            (vlSelf->npc__DOT__inst 
                                             >> 0x14U)));
        vlSelf->npc__DOT____Vcellout__idu_inst__csr_wen 
            = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrs)
                ? 4U : ((0x73U == vlSelf->npc__DOT__inst)
                         ? 3U : 0U));
    }
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__csr_raddr) 
                       == vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__csr_raddr) == vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list
         [0U]);
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__csr_raddr) 
                          == vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__csr_raddr) == 
            vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list
            [1U]));
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__csr_raddr) 
                          == vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__csr_raddr) == 
            vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list
            [2U]));
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__csr_raddr) 
                          == vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->npc__DOT__csr_raddr) == 
            vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list
            [3U]));
    vlSelf->npc__DOT__target_rdata = ((IData)(vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__hit)
                                       ? vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__lut_out
                                       : 0U);
    vlSelf->npc__DOT__rf_rdata2 = ((0U == (IData)(vlSelf->npc__DOT__rs2))
                                    ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                                   [vlSelf->npc__DOT__rs2]);
    vlSelf->npc__DOT__stop_sim = (1U & ((~ ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi) 
                                            | ((0x100073U 
                                                == vlSelf->npc__DOT__inst) 
                                               | ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->npc__DOT__inst)) 
                                                  | ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->npc__DOT__inst)) 
                                                     | ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->npc__DOT__inst)) 
                                                        | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr) 
                                                           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw) 
                                                              | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw) 
                                                                 | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_add) 
                                                                    | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                                                                       | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu) 
                                                                          | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xor) 
                                                                             | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_or) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sub) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srai) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_andi) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sll) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_and) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xori) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slli) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu) 
                                                                                | (((((((((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl) 
                                                                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srli)) 
                                                                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sra)) 
                                                                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lb)) 
                                                                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slti)) 
                                                                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_ori)) 
                                                                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrw)) 
                                                                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrs)) 
                                                                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hab5d87c6__0))))))))))))))))))))))))))))))))))) 
                                        | (0x100073U 
                                           == vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_name = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi)
                                                   ? 1U
                                                   : 
                                                  ((0x100073U 
                                                    == vlSelf->npc__DOT__inst)
                                                    ? 2U
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->npc__DOT__inst))
                                                     ? 3U
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->npc__DOT__inst))
                                                      ? 4U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->npc__DOT__inst))
                                                       ? 5U
                                                       : 
                                                      ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr)
                                                        ? 6U
                                                        : 
                                                       ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw)
                                                         ? 7U
                                                         : 
                                                        ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw)
                                                          ? 8U
                                                          : 
                                                         ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_add)
                                                           ? 9U
                                                           : 
                                                          ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq)
                                                            ? 0xaU
                                                            : 
                                                           ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu)
                                                             ? 0xbU
                                                             : 
                                                            ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xor)
                                                              ? 0xcU
                                                              : 
                                                             ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_or)
                                                               ? 0xdU
                                                               : 
                                                              ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu)
                                                                ? 0xeU
                                                                : 
                                                               ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne)
                                                                 ? 0xfU
                                                                 : 
                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu)
                                                                  ? 0x10U
                                                                  : 
                                                                 ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb)
                                                                   ? 0x11U
                                                                   : 
                                                                  ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sub)
                                                                    ? 0x12U
                                                                    : 
                                                                   ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srai)
                                                                     ? 0x13U
                                                                     : 
                                                                    ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_andi)
                                                                      ? 0x14U
                                                                      : 
                                                                     ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sll)
                                                                       ? 0x15U
                                                                       : 
                                                                      ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_and)
                                                                        ? 0x16U
                                                                        : 
                                                                       ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh)
                                                                         ? 0x17U
                                                                         : 
                                                                        ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xori)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge)
                                                                           ? 0x19U
                                                                           : 
                                                                          ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu)
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slli)
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu)
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt)
                                                                                ? 0x1eU
                                                                                : 
                                                                               ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh)
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu)
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl)
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srli)
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sra)
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl)
                                                                                 ? 0x24U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lb)
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slti)
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_ori)
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrw)
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrs)
                                                                                 ? 0x29U
                                                                                 : 
                                                                                ((0x73U 
                                                                                == vlSelf->npc__DOT__inst)
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((0x30200073U 
                                                                                == vlSelf->npc__DOT__inst)
                                                                                 ? 0x2bU
                                                                                 : 0U)))))))))))))))))))))))))))))))))))))))))));
    vlSelf->npc__DOT__rs1 = (((IData)(vlSelf->npc__DOT__stop_sim) 
                              | ((0x37U == (0x7fU & vlSelf->npc__DOT__inst)) 
                                 | (IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hab5d87c6__0)))
                              ? 0U : (0x1fU & (vlSelf->npc__DOT__inst 
                                               >> 0xfU)));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x24U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x25U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x26U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x27U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x27U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x27U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x28U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x28U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x28U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x29U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x29U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x29U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x2aU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x2aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x2aU]));
    vlSelf->npc__DOT__rdregsrc = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x24U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x25U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x26U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x27U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x27U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x27U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x28U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x28U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x28U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x29U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x29U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x29U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x2aU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x2aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x2aU]));
    vlSelf->npc__DOT__ALU_op = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit)
                                 ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out)
                                 : 0U);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
            == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
            [0U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [1U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [2U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [3U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [4U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [5U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [6U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [7U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [8U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [9U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xaU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xbU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xcU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xdU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xeU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xfU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x10U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x11U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x12U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x13U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x14U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x15U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x16U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x17U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x18U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x19U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1aU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1bU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1cU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1dU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1eU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1fU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x20U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x21U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x22U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x23U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x24U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x25U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x26U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x27U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x27U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x27U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x28U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x28U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x28U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x29U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x29U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x29U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x2aU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x2aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x2aU]));
    vlSelf->npc__DOT__ALUsrc1 = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
                                 & (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x24U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x25U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x26U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x27U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x27U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x27U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x28U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x28U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x28U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x29U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x29U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x29U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x2aU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x2aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x2aU]));
    vlSelf->npc__DOT__imm = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit)
                              ? vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out
                              : 1U);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x24U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x25U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x26U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x27U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x27U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x27U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x28U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x28U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x28U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x29U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x29U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x29U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
                          [0x2aU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x2aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x2aU]));
    vlSelf->npc__DOT__ALUsrc2 = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit)
                                  ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out)
                                  : 1U);
    vlSelf->npc__DOT__rf_rdata1 = ((0U == (IData)(vlSelf->npc__DOT__rs1))
                                    ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                                   [vlSelf->npc__DOT__rs1]);
    vlSelf->npc__DOT__ALU_B = ((0U == (IData)(vlSelf->npc__DOT__ALUsrc2))
                                ? vlSelf->npc__DOT__rf_rdata2
                                : ((1U == (IData)(vlSelf->npc__DOT__ALUsrc2))
                                    ? vlSelf->npc__DOT__imm
                                    : vlSelf->npc__DOT__target_rdata));
    vlSelf->npc__DOT__ALU_A = ((IData)(vlSelf->npc__DOT__ALUsrc1)
                                ? vlSelf->npc__DOT__pc
                                : vlSelf->npc__DOT__rf_rdata1);
    vlSelf->__VdfgTmp_hc6d26016__0 = VL_SHIFTRS_III(32,32,5, vlSelf->npc__DOT__ALU_A, 
                                                    (0x1fU 
                                                     & vlSelf->npc__DOT__ALU_B));
    vlSelf->__VdfgTmp_ha53c2a9a__0 = (vlSelf->npc__DOT__ALU_A 
                                      & vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_ha636f1d6__0 = (vlSelf->npc__DOT__ALU_A 
                                      | vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h534ad178__0 = (vlSelf->npc__DOT__ALU_A 
                                      ^ vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_hc6c76036__0 = (vlSelf->npc__DOT__ALU_A 
                                      << (0x1fU & vlSelf->npc__DOT__ALU_B));
    vlSelf->__VdfgTmp_hc72e60e3__0 = (vlSelf->npc__DOT__ALU_A 
                                      >> (0x1fU & vlSelf->npc__DOT__ALU_B));
    vlSelf->npc__DOT__u_ALU__DOT__sub_result = ((IData)(1U) 
                                                + (vlSelf->npc__DOT__ALU_A 
                                                   + 
                                                   (~ vlSelf->npc__DOT__ALU_B)));
    vlSelf->npc__DOT__u_ALU__DOT__add_result = (vlSelf->npc__DOT__ALU_A 
                                                + (vlSelf->npc__DOT__ALU_B 
                                                   + (IData)(vlSelf->npc__DOT__ALU_Cin)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_hc6d26016__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_hc6d26016__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4U] 
        = (0x600000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha53c2a9a__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_ha53c2a9a__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U] 
        = (0x800000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_ha636f1d6__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_ha636f1d6__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U] 
        = (0xa00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h534ad178__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h534ad178__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (0xc00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_hc6c76036__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_hc6c76036__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_hc72e60e3__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_hc72e60e3__0));
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
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6U] 
        = (0x200000000ULL | (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow)) 
                              << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_result))));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow)) 
            << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow)) 
            << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow)) 
            << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                               == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ALU_op) == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__out = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit)
                                          ? vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out
                                          : 0ULL);
    if (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw) 
         | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw) 
            | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu) 
               | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb) 
                  | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh) 
                     | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh) 
                        | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu) 
                           | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lb))))))))) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_read_TOP((IData)(vlSelf->npc__DOT__u_ALU__DOT__out), vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout);
        vlSelf->npc__DOT__drdata = vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout;
        if (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw) 
             | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb) 
                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh)))) {
            Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_write_TOP((IData)(vlSelf->npc__DOT__u_ALU__DOT__out), vlSelf->npc__DOT__rf_rdata2, 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw)
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh)
                                                                                 ? 3U
                                                                                 : 0U))));
        }
    } else {
        vlSelf->npc__DOT__drdata = 0U;
    }
    vlSelf->npc__DOT__u_PC__DOT__dnpc = ((((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->npc__DOT__inst)) 
                                           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr) 
                                              | (IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hab5d87c6__0))) 
                                          | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                                              | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                                 | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                                    | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                                       | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                                          | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                                             & ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 0xcU)))
                                                 ? 
                                                (vlSelf->npc__DOT__rf_rdata1 
                                                 == vlSelf->npc__DOT__rf_rdata2)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->npc__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 
                                                 (vlSelf->npc__DOT__rf_rdata1 
                                                  != vlSelf->npc__DOT__rf_rdata2)
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  VL_GTES_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                                   : 
                                                  ((7U 
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
                                          ? ((IData)(
                                                     (vlSelf->npc__DOT__u_ALU__DOT__out 
                                                      >> 1U)) 
                                             << 1U)
                                          : ((IData)(4U) 
                                             + vlSelf->npc__DOT__pc));
}

VL_ATTR_COLD void Vnpc___024root___eval_stl(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vnpc___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
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
    vlSelf->npc__DOT__rs1 = 0;
    vlSelf->npc__DOT__rs2 = 0;
    vlSelf->npc__DOT__imm = 0;
    vlSelf->npc__DOT__ALU_op = 0;
    vlSelf->npc__DOT__rdregsrc = 0;
    vlSelf->npc__DOT__cmp_type = 0;
    vlSelf->npc__DOT__ALUsrc1 = 0;
    vlSelf->npc__DOT__ALUsrc2 = 0;
    vlSelf->npc__DOT__rf_rdata1 = 0;
    vlSelf->npc__DOT__rf_rdata2 = 0;
    vlSelf->npc__DOT__csr_raddr = 0;
    vlSelf->npc__DOT__ALU_A = 0;
    vlSelf->npc__DOT__ALU_B = 0;
    vlSelf->npc__DOT__ALU_Cin = 0;
    vlSelf->npc__DOT__stop_sim = 0;
    vlSelf->npc__DOT__pc = 0;
    vlSelf->npc__DOT__inst = 0;
    vlSelf->npc__DOT__drdata = 0;
    vlSelf->npc__DOT____Vcellout__idu_inst__csr_wen = 0;
    vlSelf->npc__DOT__mtvec_rdata = 0;
    vlSelf->npc__DOT__mcause_rdata = 0;
    vlSelf->npc__DOT__mepc_rdata = 0;
    vlSelf->npc__DOT__mstatus_rdata = 0;
    vlSelf->npc__DOT__target_rdata = 0;
    vlSelf->npc__DOT__u_PC__DOT__dnpc = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_name = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_add = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_xor = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_or = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sub = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_srai = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_andi = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sll = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_and = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_xori = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_slli = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_srli = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sra = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lb = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_slti = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_ori = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrw = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_csrrs = 0;
    vlSelf->npc__DOT__idu_inst__DOT__immI = 0;
    vlSelf->npc__DOT__idu_inst__DOT__immS = 0;
    vlSelf->npc__DOT__idu_inst__DOT__immB = 0;
    vlSelf->npc__DOT__idu_inst__DOT__immJ = 0;
    VL_ZERO_RESET_W(1634, vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut);
    vlSelf->npc__DOT__idu_inst__DOT__csr_wen_int = 0;
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hab5d87c6__0 = 0;
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_he69f398c__0 = 0;
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h873f971e__0 = 0;
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd3ddd1c8__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 43; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 43; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 43; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 43; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 43; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 43; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 43; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 43; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 43; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 43; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__getcsrwen__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[__Vi0] = 0;
    }
    vlSelf->npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->npc__DOT__u_ALU__DOT__add_overflow = 0;
    vlSelf->npc__DOT__u_ALU__DOT__sub_overflow = 0;
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
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__sel_csr__DOT__i0__DOT__hit = 0;
    vlSelf->__VdfgTmp_hc6d26016__0 = 0;
    vlSelf->__VdfgTmp_ha53c2a9a__0 = 0;
    vlSelf->__VdfgTmp_ha636f1d6__0 = 0;
    vlSelf->__VdfgTmp_h534ad178__0 = 0;
    vlSelf->__VdfgTmp_hc6c76036__0 = 0;
    vlSelf->__VdfgTmp_hc72e60e3__0 = 0;
    vlSelf->__Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout = 0;
    vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

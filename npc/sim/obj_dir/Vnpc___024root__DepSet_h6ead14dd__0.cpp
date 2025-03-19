// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc___024root.h"

void Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vnpc___024root___ico_sequent__TOP__0(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->npc__DOT__validF = ((~ (IData)(vlSelf->rst)) 
                                & (0U == (IData)(vlSelf->npc__DOT__u_IFU__DOT__state)));
    if (vlSelf->npc__DOT__validF) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read_TOP(vlSelf->npc__DOT__pcF, vlSelf->__Vfunc_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read__1__Vfuncout);
        vlSelf->npc__DOT__instF = vlSelf->__Vfunc_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read__1__Vfuncout;
    } else {
        vlSelf->npc__DOT__instF = 0U;
    }
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[0U] 
        = (0x500000000ULL | (QData)((IData)((((- (IData)(
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
                                                         >> 7U))))))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[1U] 
        = (0x400000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->npc__DOT__instF 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->npc__DOT__instF) 
                                                | ((0x800U 
                                                    & (vlSelf->npc__DOT__instF 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->npc__DOT__instF 
                                                         >> 0x14U))))))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[2U] 
        = (0x300000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelf->npc__DOT__instF))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->npc__DOT__instF 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->npc__DOT__instF 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->npc__DOT__instF 
                                                      >> 7U)))))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)((((- (IData)((vlSelf->npc__DOT__instF 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->npc__DOT__instF 
                                        >> 0x14U))));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->npc__DOT__instF 
                              >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->npc__DOT__instF >> 0xcU)) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instF 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instF >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instF 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instF >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instF 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instF >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instF 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instF >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__mrtypeD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit)
                                  ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out)
                                  : 0U);
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->npc__DOT__instF 
                              >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->npc__DOT__instF >> 0xcU)) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instF 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instF >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instF 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instF >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__mwmaskD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit)
                                  ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out)
                                  : 0U);
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0 
        = ((0x13U == (0x7fU & vlSelf->npc__DOT__instF)) 
           | (0x33U == (0x7fU & vlSelf->npc__DOT__instF)));
    vlSelf->npc__DOT__ALU_A = ((0U == ((0x17U == (0x7fU 
                                                  & vlSelf->npc__DOT__instF))
                                        ? 1U : 0U))
                                ? vlSelf->npc__DOT__src1D
                                : vlSelf->npc__DOT__pcF);
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key 
        = (((0x33U == (0x7fU & vlSelf->npc__DOT__instF)) 
            << 1U) | (0x73U == (0x7fU & vlSelf->npc__DOT__instF)));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->npc__DOT__instF >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__instF 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__instF 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__instF 
                                                    >> 7U)))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->npc__DOT__instF >> 0x1fU))) 
            << 0x14U) | ((0xff000U & vlSelf->npc__DOT__instF) 
                         | ((0x800U & (vlSelf->npc__DOT__instF 
                                       >> 9U)) | (0x7feU 
                                                  & (vlSelf->npc__DOT__instF 
                                                     >> 0x14U)))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[2U] 
        = (0xfffff000U & vlSelf->npc__DOT__instF);
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->npc__DOT__instF >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->npc__DOT__instF 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->npc__DOT__instF 
                                                    >> 7U))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->npc__DOT__instF >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__instF >> 0x14U));
    vlSelf->npc__DOT__jalrD = (IData)((0x67U == (0x707fU 
                                                 & vlSelf->npc__DOT__instF)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h098fb8c5__0 
        = (((0x13U == (0x7fU & vlSelf->npc__DOT__instF)) 
            << 1U) | (0x33U == (0x7fU & vlSelf->npc__DOT__instF)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0 
        = (IData)((0x73U == (0x707fU & vlSelf->npc__DOT__instF)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
           & (0x5000U == (0x7000U & vlSelf->npc__DOT__instF)));
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
    vlSelf->npc__DOT__ALUsrc2D = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out)
                                   : 1U);
    vlSelf->npc__DOT__jumpD = ((0x6fU == (0x7fU & vlSelf->npc__DOT__instF)) 
                               | (IData)(vlSelf->npc__DOT__jalrD));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key 
        = ((0x38U & (vlSelf->npc__DOT__instF >> 9U)) 
           | (((0x63U == (0x7fU & vlSelf->npc__DOT__instF)) 
               << 2U) | (IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h098fb8c5__0)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key 
        = (((0x37U == (0x7fU & vlSelf->npc__DOT__instF)) 
            << 8U) | (((0x17U == (0x7fU & vlSelf->npc__DOT__instF)) 
                       << 7U) | (((0x6fU == (0x7fU 
                                             & vlSelf->npc__DOT__instF)) 
                                  << 6U) | (((IData)(vlSelf->npc__DOT__jalrD) 
                                             << 5U) 
                                            | (((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->npc__DOT__instF)) 
                                                << 4U) 
                                               | (((3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->npc__DOT__instF)) 
                                                   << 3U) 
                                                  | (((0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->npc__DOT__instF)) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h098fb8c5__0))))))));
    vlSelf->npc__DOT__idu_inst__DOT__ebreak = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->npc__DOT__instF 
                                                   >> 0x14U)));
    vlSelf->npc__DOT__mretD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0) 
                               & (0x302U == (vlSelf->npc__DOT__instF 
                                             >> 0x14U)));
    vlSelf->npc__DOT__ecallD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0) 
                                & (0U == (vlSelf->npc__DOT__instF 
                                          >> 0x14U)));
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
    vlSelf->npc__DOT__write_csr = ((0x73U == (0x7fU 
                                              & vlSelf->npc__DOT__instF)) 
                                   | (IData)(vlSelf->npc__DOT__ecallD));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key 
        = ((0x40U & (((0x63U == (0x7fU & vlSelf->npc__DOT__instF)) 
                      | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                         | (IData)((0x40000033U == 
                                    (0xfe00707fU & vlSelf->npc__DOT__instF))))) 
                     << 6U)) | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                  & (IData)((0x1000U 
                                             == (0xfe007000U 
                                                 & vlSelf->npc__DOT__instF)))) 
                                 << 5U) | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0) 
                                             & (0U 
                                                == 
                                                (vlSelf->npc__DOT__instF 
                                                 >> 0x19U))) 
                                            << 4U) 
                                           | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0) 
                                                & (0x20U 
                                                   == 
                                                   (vlSelf->npc__DOT__instF 
                                                    >> 0x19U))) 
                                               << 3U) 
                                              | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                                   & (0x4000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->npc__DOT__instF))) 
                                                  << 2U) 
                                                 | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                                      & (0x6000U 
                                                         == 
                                                         (0x7000U 
                                                          & vlSelf->npc__DOT__instF))) 
                                                     << 1U) 
                                                    | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                                       & (0x7000U 
                                                          == 
                                                          (0x7000U 
                                                           & vlSelf->npc__DOT__instF)))))))));
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
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key 
        = (((3U == (0x7fU & vlSelf->npc__DOT__instF)) 
            << 4U) | (((IData)(vlSelf->npc__DOT__jumpD) 
                       << 3U) | ((4U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                                        << 2U)) | (
                                                   ((IData)(vlSelf->npc__DOT__write_csr) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x63U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->npc__DOT__instF)) 
                                                         | ((0x23U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->npc__DOT__instF)) 
                                                            | ((IData)(vlSelf->npc__DOT__ecallD) 
                                                               | ((IData)(vlSelf->npc__DOT__mretD) 
                                                                  | ((~ 
                                                                      ((0x37U 
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
                                                                     | (IData)(vlSelf->npc__DOT__idu_inst__DOT__ebreak)))))))))));
    vlSelf->npc__DOT__csraddrD = ((IData)(vlSelf->npc__DOT__write_csr)
                                   ? (vlSelf->npc__DOT__instF 
                                      >> 0x14U) : 0U);
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
    if (vlSelf->npc__DOT__ecallD) {
        vlSelf->npc__DOT__rf_raddr2 = 0xfU;
        vlSelf->npc__DOT__csrD = vlSelf->npc__DOT__mtvec_data;
    } else {
        vlSelf->npc__DOT__rf_raddr2 = (0x1fU & (vlSelf->npc__DOT__instF 
                                                >> 0x14U));
        vlSelf->npc__DOT__csrD = ((IData)(vlSelf->npc__DOT__mretD)
                                   ? vlSelf->npc__DOT__mepc_data
                                   : vlSelf->npc__DOT__csr_rdata);
    }
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[0U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->npc__DOT__csrD)));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[0U] 
        = vlSelf->npc__DOT__csrD;
    vlSelf->npc__DOT__ALU_B = ((0U == (IData)(vlSelf->npc__DOT__ALUsrc2D))
                                ? vlSelf->npc__DOT__src2D
                                : ((1U == (IData)(vlSelf->npc__DOT__ALUsrc2D))
                                    ? vlSelf->npc__DOT__immD
                                    : vlSelf->npc__DOT__csrD));
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
    vlSelf->__VdfgTmp_h468c645e__0 = VL_SHIFTRS_III(32,32,5, vlSelf->npc__DOT__ALU_A, 
                                                    (0x1fU 
                                                     & vlSelf->npc__DOT__ALU_B));
    vlSelf->__VdfgTmp_hc20fdb71__0 = (vlSelf->npc__DOT__ALU_A 
                                      & vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_hc5593bcf__0 = (vlSelf->npc__DOT__ALU_A 
                                      | vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_hc2b79a77__0 = (vlSelf->npc__DOT__ALU_A 
                                      ^ vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h46a938df__0 = (vlSelf->npc__DOT__ALU_A 
                                      << (0x1fU & vlSelf->npc__DOT__ALU_B));
    vlSelf->__VdfgTmp_h46b7e40b__0 = (vlSelf->npc__DOT__ALU_A 
                                      >> (0x1fU & vlSelf->npc__DOT__ALU_B));
    vlSelf->npc__DOT__u_ALU__DOT__add_result = (vlSelf->npc__DOT__ALU_A 
                                                + vlSelf->npc__DOT__ALU_B);
    vlSelf->npc__DOT__u_ALU__DOT__sub_result = ((IData)(1U) 
                                                + (vlSelf->npc__DOT__ALU_A 
                                                   + 
                                                   (~ vlSelf->npc__DOT__ALU_B)));
    if ((0U == (IData)(vlSelf->npc__DOT__ALU_opD))) {
        vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[0U] 
            = vlSelf->npc__DOT__u_ALU__DOT__add_Cout;
        vlSelf->npc__DOT__Cout = vlSelf->npc__DOT__u_ALU__DOT__add_Cout;
    } else {
        vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[0U] 
            = ((1U == (IData)(vlSelf->npc__DOT__ALU_opD)) 
               & (IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_Cout));
        vlSelf->npc__DOT__Cout = ((1U == (IData)(vlSelf->npc__DOT__ALU_opD)) 
                                  & (IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_Cout));
    }
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h468c645e__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h468c645e__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4U] 
        = (0x600000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_hc20fdb71__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_hc20fdb71__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U] 
        = (0x800000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_hc5593bcf__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_hc5593bcf__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U] 
        = (0xa00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_hc2b79a77__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_hc2b79a77__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (0xc00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h46a938df__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h46a938df__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h46b7e40b__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h46b7e40b__0));
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
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opD) 
                               == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ALU_opD) == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opD) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opD) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opD) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opD) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opD) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opD) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opD) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opD) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opD) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opD) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opD) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opD) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opD) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opD) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__out = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit)
                                          ? vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out
                                          : 0ULL);
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__out));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[4U] 
        = (2U | (0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[5U] 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[4U] 
        = (IData)(vlSelf->npc__DOT__u_ALU__DOT__out);
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[3U] 
        = (1U & VL_REDXOR_64((0x180000000ULL & vlSelf->npc__DOT__u_ALU__DOT__out)));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[4U] 
        = (0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[5U] 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))));
    vlSelf->npc__DOT__slt = (1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->npc__DOT__u_ALU__DOT__out)));
    if (((3U == (0x7fU & vlSelf->npc__DOT__instF)) 
         | (0x23U == (0x7fU & vlSelf->npc__DOT__instF)))) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read_TOP((IData)(vlSelf->npc__DOT__u_ALU__DOT__out), vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout);
        vlSelf->npc__DOT__rdata = vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout;
        if ((0x23U == (0x7fU & vlSelf->npc__DOT__instF))) {
            Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_write_TOP((IData)(vlSelf->npc__DOT__u_ALU__DOT__out), vlSelf->npc__DOT__src2D, (IData)(vlSelf->npc__DOT__mwmaskD));
        }
    } else {
        vlSelf->npc__DOT__rdata = 0U;
    }
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[2U] 
        = (6U | (1U & (~ (IData)(vlSelf->npc__DOT__slt))));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[3U] 
        = (4U | (IData)(vlSelf->npc__DOT__slt));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[2U] 
        = (1U & (~ (IData)(vlSelf->npc__DOT__slt)));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[0U] 
        = (0x400000000ULL | (QData)((IData)((0xffffU 
                                             & vlSelf->npc__DOT__rdata))));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)((0xffU 
                                             & vlSelf->npc__DOT__rdata))));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[2U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->npc__DOT__rdata)));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)((0xffffU 
                                             & vlSelf->npc__DOT__rdata))));
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
        = (0xffffU & vlSelf->npc__DOT__rdata);
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((1U & (vlSelf->npc__DOT__rdata 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->npc__DOT__rdata));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = (((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                   >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [0U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
         [0U]);
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                      >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [1U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                   >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [1U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                      >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [2U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                   >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [2U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                      >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [3U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                   >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [3U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                      >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [4U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                   >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [4U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                      >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [5U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                   >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [5U]));
    vlSelf->npc__DOT__cmp_resultX = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
                                     & (IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeD) 
                       == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__mrtypeD) == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeD) 
                          == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__mrtypeD) == 
              vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeD) 
                          == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__mrtypeD) == 
              vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeD) 
                          == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__mrtypeD) == 
              vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeD) 
                          == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__mrtypeD) == 
              vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__mdataM = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit)
                                 ? vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out
                                 : 0U);
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->npc__DOT__cmp_resultX)));
    vlSelf->npc__DOT__dnpc_ = (((IData)(vlSelf->npc__DOT__jumpD) 
                                | ((0x63U == (0x7fU 
                                              & vlSelf->npc__DOT__instF)) 
                                   & (IData)(vlSelf->npc__DOT__cmp_resultX)))
                                ? (((IData)(vlSelf->npc__DOT__jalrD)
                                     ? vlSelf->npc__DOT__src1D
                                     : vlSelf->npc__DOT__pcF) 
                                   + vlSelf->npc__DOT__immD)
                                : ((IData)(4U) + vlSelf->npc__DOT__pcF));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[1U] 
        = vlSelf->npc__DOT__cmp_resultX;
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->npc__DOT__mdataM)));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[3U] 
        = vlSelf->npc__DOT__mdataM;
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcD) 
                       == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__rdregsrcD) 
                                                   == 
                                                   vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                   [0U]);
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcD) 
                          == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->npc__DOT__rdregsrcD) 
                                                      == 
                                                      vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                      [1U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcD) 
                          == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->npc__DOT__rdregsrcD) 
                                                      == 
                                                      vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                      [2U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcD) 
                          == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->npc__DOT__rdregsrcD) 
                                                      == 
                                                      vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                      [3U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcD) 
                          == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->npc__DOT__rdregsrcD) 
                                                      == 
                                                      vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                      [4U]));
    vlSelf->npc__DOT__rddataW = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit)
                                  ? vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out
                                  : 0U);
}

void Vnpc___024root___eval_ico(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vnpc___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vnpc___024root___eval_act(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_act\n"); );
}

void Vnpc___024root____Vdpiimwrap_npc__DOT__ebreak_TOP();
extern const VlUnpacked<CData/*1:0*/, 32> Vnpc__ConstPool__TABLE_he4a28a83_0;

VL_INLINE_OPT void Vnpc___024root___nba_sequent__TOP__0(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __Vdly__npc__DOT__pcF;
    __Vdly__npc__DOT__pcF = 0;
    CData/*0:0*/ __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v32;
    __Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    IData/*31:0*/ __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v32;
    __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    CData/*0:0*/ __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32;
    __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    // Body
    __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0 = 0U;
    __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0U;
    if ((1U & ((~ ((0x37U == (0x7fU & vlSelf->npc__DOT__instF)) 
                   | ((0x17U == (0x7fU & vlSelf->npc__DOT__instF)) 
                      | ((0x6fU == (0x7fU & vlSelf->npc__DOT__instF)) 
                         | ((IData)(vlSelf->npc__DOT__jalrD) 
                            | ((0x63U == (0x7fU & vlSelf->npc__DOT__instF)) 
                               | ((3U == (0x7fU & vlSelf->npc__DOT__instF)) 
                                  | ((0x23U == (0x7fU 
                                                & vlSelf->npc__DOT__instF)) 
                                     | ((0x13U == (0x7fU 
                                                   & vlSelf->npc__DOT__instF)) 
                                        | ((0x33U == 
                                            (0x7fU 
                                             & vlSelf->npc__DOT__instF)) 
                                           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__ebreak) 
                                              | ((IData)(vlSelf->npc__DOT__ecallD) 
                                                 | ((IData)(vlSelf->npc__DOT__mretD) 
                                                    | (0x73U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->npc__DOT__instF))))))))))))))) 
               | (IData)(vlSelf->npc__DOT__idu_inst__DOT__ebreak)))) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__ebreak_TOP();
    }
    __Vdly__npc__DOT__pcF = vlSelf->npc__DOT__pcF;
    if (vlSelf->rst) {
        vlSelf->npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0 = 1U;
        __Vdly__npc__DOT__pcF = 0x80000000U;
        vlSelf->npc__DOT__mstatus_data = 0x1800U;
        vlSelf->npc__DOT__mtvec_data = 0U;
        vlSelf->npc__DOT__mcause_data = 0U;
        vlSelf->npc__DOT__mepc_data = 0U;
    } else {
        if ((5U != (IData)(vlSelf->npc__DOT__rdregsrcD))) {
            __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v32 
                = vlSelf->npc__DOT__rddataW;
            __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32 = 1U;
            __Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v32 
                = (0x1fU & (vlSelf->npc__DOT__instF 
                            >> 7U));
        }
        __Vdly__npc__DOT__pcF = ((IData)(vlSelf->rst)
                                  ? vlSelf->npc__DOT__pcF
                                  : (((IData)(vlSelf->npc__DOT__ecallD) 
                                      | (IData)(vlSelf->npc__DOT__mretD))
                                      ? vlSelf->npc__DOT__csrD
                                      : vlSelf->npc__DOT__dnpc_));
        if ((0x300U == (IData)(vlSelf->npc__DOT__csraddrD))) {
            vlSelf->npc__DOT__mstatus_data = 0x1800U;
        }
        if ((0x305U == (IData)(vlSelf->npc__DOT__csraddrD))) {
            vlSelf->npc__DOT__mtvec_data = vlSelf->npc__DOT__rddataW;
        }
        if (((IData)(vlSelf->npc__DOT__ecallD) | (0x342U 
                                                  == (IData)(vlSelf->npc__DOT__csraddrD)))) {
            vlSelf->npc__DOT__mcause_data = ((IData)(vlSelf->npc__DOT__ecallD)
                                              ? vlSelf->npc__DOT__src2D
                                              : vlSelf->npc__DOT__rddataW);
        }
        if (((IData)(vlSelf->npc__DOT__ecallD) | (0x341U 
                                                  == (IData)(vlSelf->npc__DOT__csraddrD)))) {
            vlSelf->npc__DOT__mepc_data = ((IData)(vlSelf->npc__DOT__ecallD)
                                            ? vlSelf->npc__DOT__pcF
                                            : vlSelf->npc__DOT__rddataW);
        }
    }
    __Vtableidx1 = (0x10U | (((IData)(vlSelf->npc__DOT__validF) 
                              << 3U) | (((IData)(vlSelf->npc__DOT__u_IFU__DOT__state) 
                                         << 1U) | (IData)(vlSelf->rst))));
    vlSelf->npc__DOT__u_IFU__DOT__state = Vnpc__ConstPool__TABLE_he4a28a83_0
        [__Vtableidx1];
    vlSelf->npc__DOT__rst_d = vlSelf->rst;
    if (__Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0) {
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xaU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xbU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xcU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xdU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xeU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xfU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x10U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x11U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x12U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x13U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x14U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x15U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x16U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x17U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x18U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x19U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1aU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1bU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1cU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1dU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1eU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1fU] = 0U;
    }
    if (__Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32) {
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[__Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v32] 
            = __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v32;
    }
    vlSelf->npc__DOT__pcF = __Vdly__npc__DOT__pcF;
    vlSelf->npc__DOT__validF = ((~ (IData)(vlSelf->rst)) 
                                & (0U == (IData)(vlSelf->npc__DOT__u_IFU__DOT__state)));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[3U] 
        = (0x30000000000ULL | (QData)((IData)(vlSelf->npc__DOT__mstatus_data)));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[3U] 
        = vlSelf->npc__DOT__mstatus_data;
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[0U] 
        = (0x30500000000ULL | (QData)((IData)(vlSelf->npc__DOT__mtvec_data)));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[0U] 
        = vlSelf->npc__DOT__mtvec_data;
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[1U] 
        = (0x34200000000ULL | (QData)((IData)(vlSelf->npc__DOT__mcause_data)));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[1U] 
        = vlSelf->npc__DOT__mcause_data;
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list[2U] 
        = (0x34100000000ULL | (QData)((IData)(vlSelf->npc__DOT__mepc_data)));
    vlSelf->npc__DOT__sel_csr_read__DOT__i0__DOT__data_list[2U] 
        = vlSelf->npc__DOT__mepc_data;
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[2U] 
        = (0x200000000ULL | (QData)((IData)(((IData)(4U) 
                                             + vlSelf->npc__DOT__pcF))));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[2U] 
        = ((IData)(4U) + vlSelf->npc__DOT__pcF);
    if (vlSelf->npc__DOT__validF) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read_TOP(vlSelf->npc__DOT__pcF, vlSelf->__Vfunc_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read__1__Vfuncout);
        vlSelf->npc__DOT__instF = vlSelf->__Vfunc_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read__1__Vfuncout;
    } else {
        vlSelf->npc__DOT__instF = 0U;
    }
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[0U] 
        = (0x500000000ULL | (QData)((IData)((((- (IData)(
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
                                                         >> 7U))))))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[1U] 
        = (0x400000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->npc__DOT__instF 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->npc__DOT__instF) 
                                                | ((0x800U 
                                                    & (vlSelf->npc__DOT__instF 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->npc__DOT__instF 
                                                         >> 0x14U))))))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[2U] 
        = (0x300000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelf->npc__DOT__instF))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->npc__DOT__instF 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->npc__DOT__instF 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->npc__DOT__instF 
                                                      >> 7U)))))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)((((- (IData)((vlSelf->npc__DOT__instF 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->npc__DOT__instF 
                                        >> 0x14U))));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->npc__DOT__instF 
                              >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->npc__DOT__instF >> 0xcU)) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instF 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instF >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instF 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instF >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instF 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instF >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instF 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instF >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__mrtypeD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit)
                                  ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out)
                                  : 0U);
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->npc__DOT__instF 
                              >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->npc__DOT__instF >> 0xcU)) 
           == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instF 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instF >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->npc__DOT__instF 
                                 >> 0xcU)) == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->npc__DOT__instF >> 0xcU)) 
              == vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__mwmaskD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit)
                                  ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out)
                                  : 0U);
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0 
        = ((0x13U == (0x7fU & vlSelf->npc__DOT__instF)) 
           | (0x33U == (0x7fU & vlSelf->npc__DOT__instF)));
    vlSelf->npc__DOT__ALU_A = ((0U == ((0x17U == (0x7fU 
                                                  & vlSelf->npc__DOT__instF))
                                        ? 1U : 0U))
                                ? vlSelf->npc__DOT__src1D
                                : vlSelf->npc__DOT__pcF);
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key 
        = (((0x33U == (0x7fU & vlSelf->npc__DOT__instF)) 
            << 1U) | (0x73U == (0x7fU & vlSelf->npc__DOT__instF)));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->npc__DOT__instF >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__instF 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__instF 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__instF 
                                                    >> 7U)))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->npc__DOT__instF >> 0x1fU))) 
            << 0x14U) | ((0xff000U & vlSelf->npc__DOT__instF) 
                         | ((0x800U & (vlSelf->npc__DOT__instF 
                                       >> 9U)) | (0x7feU 
                                                  & (vlSelf->npc__DOT__instF 
                                                     >> 0x14U)))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[2U] 
        = (0xfffff000U & vlSelf->npc__DOT__instF);
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->npc__DOT__instF >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->npc__DOT__instF 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->npc__DOT__instF 
                                                    >> 7U))));
    vlSelf->npc__DOT__sel_imm__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->npc__DOT__instF >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__instF >> 0x14U));
    vlSelf->npc__DOT__jalrD = (IData)((0x67U == (0x707fU 
                                                 & vlSelf->npc__DOT__instF)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h098fb8c5__0 
        = (((0x13U == (0x7fU & vlSelf->npc__DOT__instF)) 
            << 1U) | (0x33U == (0x7fU & vlSelf->npc__DOT__instF)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0 
        = (IData)((0x73U == (0x707fU & vlSelf->npc__DOT__instF)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
           & (0x5000U == (0x7000U & vlSelf->npc__DOT__instF)));
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
    vlSelf->npc__DOT__ALUsrc2D = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out)
                                   : 1U);
    vlSelf->npc__DOT__jumpD = ((0x6fU == (0x7fU & vlSelf->npc__DOT__instF)) 
                               | (IData)(vlSelf->npc__DOT__jalrD));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key 
        = ((0x38U & (vlSelf->npc__DOT__instF >> 9U)) 
           | (((0x63U == (0x7fU & vlSelf->npc__DOT__instF)) 
               << 2U) | (IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h098fb8c5__0)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key 
        = (((0x37U == (0x7fU & vlSelf->npc__DOT__instF)) 
            << 8U) | (((0x17U == (0x7fU & vlSelf->npc__DOT__instF)) 
                       << 7U) | (((0x6fU == (0x7fU 
                                             & vlSelf->npc__DOT__instF)) 
                                  << 6U) | (((IData)(vlSelf->npc__DOT__jalrD) 
                                             << 5U) 
                                            | (((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->npc__DOT__instF)) 
                                                << 4U) 
                                               | (((3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->npc__DOT__instF)) 
                                                   << 3U) 
                                                  | (((0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->npc__DOT__instF)) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h098fb8c5__0))))))));
    vlSelf->npc__DOT__idu_inst__DOT__ebreak = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->npc__DOT__instF 
                                                   >> 0x14U)));
    vlSelf->npc__DOT__mretD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0) 
                               & (0x302U == (vlSelf->npc__DOT__instF 
                                             >> 0x14U)));
    vlSelf->npc__DOT__ecallD = ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0) 
                                & (0U == (vlSelf->npc__DOT__instF 
                                          >> 0x14U)));
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
    vlSelf->npc__DOT__write_csr = ((0x73U == (0x7fU 
                                              & vlSelf->npc__DOT__instF)) 
                                   | (IData)(vlSelf->npc__DOT__ecallD));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key 
        = ((0x40U & (((0x63U == (0x7fU & vlSelf->npc__DOT__instF)) 
                      | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                         | (IData)((0x40000033U == 
                                    (0xfe00707fU & vlSelf->npc__DOT__instF))))) 
                     << 6U)) | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                  & (IData)((0x1000U 
                                             == (0xfe007000U 
                                                 & vlSelf->npc__DOT__instF)))) 
                                 << 5U) | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0) 
                                             & (0U 
                                                == 
                                                (vlSelf->npc__DOT__instF 
                                                 >> 0x19U))) 
                                            << 4U) 
                                           | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0) 
                                                & (0x20U 
                                                   == 
                                                   (vlSelf->npc__DOT__instF 
                                                    >> 0x19U))) 
                                               << 3U) 
                                              | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                                   & (0x4000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->npc__DOT__instF))) 
                                                  << 2U) 
                                                 | ((((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                                      & (0x6000U 
                                                         == 
                                                         (0x7000U 
                                                          & vlSelf->npc__DOT__instF))) 
                                                     << 1U) 
                                                    | ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0) 
                                                       & (0x7000U 
                                                          == 
                                                          (0x7000U 
                                                           & vlSelf->npc__DOT__instF)))))))));
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
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key 
        = (((3U == (0x7fU & vlSelf->npc__DOT__instF)) 
            << 4U) | (((IData)(vlSelf->npc__DOT__jumpD) 
                       << 3U) | ((4U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                                        << 2U)) | (
                                                   ((IData)(vlSelf->npc__DOT__write_csr) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((0x63U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->npc__DOT__instF)) 
                                                         | ((0x23U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->npc__DOT__instF)) 
                                                            | ((IData)(vlSelf->npc__DOT__ecallD) 
                                                               | ((IData)(vlSelf->npc__DOT__mretD) 
                                                                  | ((~ 
                                                                      ((0x37U 
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
                                                                     | (IData)(vlSelf->npc__DOT__idu_inst__DOT__ebreak)))))))))));
    vlSelf->npc__DOT__csraddrD = ((IData)(vlSelf->npc__DOT__write_csr)
                                   ? (vlSelf->npc__DOT__instF 
                                      >> 0x14U) : 0U);
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
    if (vlSelf->npc__DOT__ecallD) {
        vlSelf->npc__DOT__rf_raddr2 = 0xfU;
        vlSelf->npc__DOT__csrD = vlSelf->npc__DOT__mtvec_data;
    } else {
        vlSelf->npc__DOT__rf_raddr2 = (0x1fU & (vlSelf->npc__DOT__instF 
                                                >> 0x14U));
        vlSelf->npc__DOT__csrD = ((IData)(vlSelf->npc__DOT__mretD)
                                   ? vlSelf->npc__DOT__mepc_data
                                   : vlSelf->npc__DOT__csr_rdata);
    }
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[0U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->npc__DOT__csrD)));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[0U] 
        = vlSelf->npc__DOT__csrD;
    vlSelf->npc__DOT__ALU_B = ((0U == (IData)(vlSelf->npc__DOT__ALUsrc2D))
                                ? vlSelf->npc__DOT__src2D
                                : ((1U == (IData)(vlSelf->npc__DOT__ALUsrc2D))
                                    ? vlSelf->npc__DOT__immD
                                    : vlSelf->npc__DOT__csrD));
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
    vlSelf->__VdfgTmp_h468c645e__0 = VL_SHIFTRS_III(32,32,5, vlSelf->npc__DOT__ALU_A, 
                                                    (0x1fU 
                                                     & vlSelf->npc__DOT__ALU_B));
    vlSelf->__VdfgTmp_hc20fdb71__0 = (vlSelf->npc__DOT__ALU_A 
                                      & vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_hc5593bcf__0 = (vlSelf->npc__DOT__ALU_A 
                                      | vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_hc2b79a77__0 = (vlSelf->npc__DOT__ALU_A 
                                      ^ vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h46a938df__0 = (vlSelf->npc__DOT__ALU_A 
                                      << (0x1fU & vlSelf->npc__DOT__ALU_B));
    vlSelf->__VdfgTmp_h46b7e40b__0 = (vlSelf->npc__DOT__ALU_A 
                                      >> (0x1fU & vlSelf->npc__DOT__ALU_B));
    vlSelf->npc__DOT__u_ALU__DOT__add_result = (vlSelf->npc__DOT__ALU_A 
                                                + vlSelf->npc__DOT__ALU_B);
    vlSelf->npc__DOT__u_ALU__DOT__sub_result = ((IData)(1U) 
                                                + (vlSelf->npc__DOT__ALU_A 
                                                   + 
                                                   (~ vlSelf->npc__DOT__ALU_B)));
    if ((0U == (IData)(vlSelf->npc__DOT__ALU_opD))) {
        vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[0U] 
            = vlSelf->npc__DOT__u_ALU__DOT__add_Cout;
        vlSelf->npc__DOT__Cout = vlSelf->npc__DOT__u_ALU__DOT__add_Cout;
    } else {
        vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[0U] 
            = ((1U == (IData)(vlSelf->npc__DOT__ALU_opD)) 
               & (IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_Cout));
        vlSelf->npc__DOT__Cout = ((1U == (IData)(vlSelf->npc__DOT__ALU_opD)) 
                                  & (IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_Cout));
    }
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h468c645e__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h468c645e__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4U] 
        = (0x600000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_hc20fdb71__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_hc20fdb71__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U] 
        = (0x800000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_hc5593bcf__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_hc5593bcf__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U] 
        = (0xa00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_hc2b79a77__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_hc2b79a77__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (0xc00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h46a938df__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h46a938df__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h46b7e40b__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h46b7e40b__0));
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
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opD) 
                               == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ALU_opD) == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opD) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opD) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opD) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opD) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opD) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opD) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opD) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opD) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opD) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opD) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opD) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opD) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_opD) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_opD) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__out = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit)
                                          ? vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out
                                          : 0ULL);
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__out));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[4U] 
        = (2U | (0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[5U] 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[4U] 
        = (IData)(vlSelf->npc__DOT__u_ALU__DOT__out);
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[3U] 
        = (1U & VL_REDXOR_64((0x180000000ULL & vlSelf->npc__DOT__u_ALU__DOT__out)));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[4U] 
        = (0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[5U] 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))));
    vlSelf->npc__DOT__slt = (1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->npc__DOT__u_ALU__DOT__out)));
    if (((3U == (0x7fU & vlSelf->npc__DOT__instF)) 
         | (0x23U == (0x7fU & vlSelf->npc__DOT__instF)))) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read_TOP((IData)(vlSelf->npc__DOT__u_ALU__DOT__out), vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout);
        vlSelf->npc__DOT__rdata = vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout;
        if ((0x23U == (0x7fU & vlSelf->npc__DOT__instF))) {
            Vnpc___024root____Vdpiimwrap_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_write_TOP((IData)(vlSelf->npc__DOT__u_ALU__DOT__out), vlSelf->npc__DOT__src2D, (IData)(vlSelf->npc__DOT__mwmaskD));
        }
    } else {
        vlSelf->npc__DOT__rdata = 0U;
    }
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[2U] 
        = (6U | (1U & (~ (IData)(vlSelf->npc__DOT__slt))));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__pair_list[3U] 
        = (4U | (IData)(vlSelf->npc__DOT__slt));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list[2U] 
        = (1U & (~ (IData)(vlSelf->npc__DOT__slt)));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[0U] 
        = (0x400000000ULL | (QData)((IData)((0xffffU 
                                             & vlSelf->npc__DOT__rdata))));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)((0xffU 
                                             & vlSelf->npc__DOT__rdata))));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[2U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->npc__DOT__rdata)));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)((0xffffU 
                                             & vlSelf->npc__DOT__rdata))));
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
        = (0xffffU & vlSelf->npc__DOT__rdata);
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((1U & (vlSelf->npc__DOT__rdata 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->npc__DOT__rdata));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = (((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                   >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [0U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
         [0U]);
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                      >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [1U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                   >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [1U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                      >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [2U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                   >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [2U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                      >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [3U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                   >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [3U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                      >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [4U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                   >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [4U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out) 
           | (((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                      >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
               [5U]) & vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
         | ((7U & ((IData)(vlSelf->npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out) 
                   >> 1U)) == vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__key_list
            [5U]));
    vlSelf->npc__DOT__cmp_resultX = ((IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__hit) 
                                     & (IData)(vlSelf->npc__DOT__sel_cmp__DOT__i0__DOT__lut_out));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeD) 
                       == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__mrtypeD) == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeD) 
                          == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__mrtypeD) == 
              vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeD) 
                          == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__mrtypeD) == 
              vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeD) 
                          == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__mrtypeD) == 
              vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__mrtypeD) 
                          == vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__mrtypeD) == 
              vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__mdataM = ((IData)(vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__hit)
                                 ? vlSelf->npc__DOT__ext_mdata__DOT__i0__DOT__lut_out
                                 : 0U);
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->npc__DOT__cmp_resultX)));
    vlSelf->npc__DOT__dnpc_ = (((IData)(vlSelf->npc__DOT__jumpD) 
                                | ((0x63U == (0x7fU 
                                              & vlSelf->npc__DOT__instF)) 
                                   & (IData)(vlSelf->npc__DOT__cmp_resultX)))
                                ? (((IData)(vlSelf->npc__DOT__jalrD)
                                     ? vlSelf->npc__DOT__src1D
                                     : vlSelf->npc__DOT__pcF) 
                                   + vlSelf->npc__DOT__immD)
                                : ((IData)(4U) + vlSelf->npc__DOT__pcF));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[1U] 
        = vlSelf->npc__DOT__cmp_resultX;
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->npc__DOT__mdataM)));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list[3U] 
        = vlSelf->npc__DOT__mdataM;
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcD) 
                       == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__rdregsrcD) 
                                                   == 
                                                   vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                   [0U]);
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcD) 
                          == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->npc__DOT__rdregsrcD) 
                                                      == 
                                                      vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                      [1U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcD) 
                          == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->npc__DOT__rdregsrcD) 
                                                      == 
                                                      vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                      [2U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcD) 
                          == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->npc__DOT__rdregsrcD) 
                                                      == 
                                                      vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                      [3U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__rdregsrcD) 
                          == vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->npc__DOT__rdregsrcD) 
                                                      == 
                                                      vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__key_list
                                                      [4U]));
    vlSelf->npc__DOT__rddataW = ((IData)(vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__hit)
                                  ? vlSelf->npc__DOT__sel_WB__DOT__i0__DOT__lut_out
                                  : 0U);
}

void Vnpc___024root___eval_nba(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vnpc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vnpc___024root___eval_triggers__ico(Vnpc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__ico(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG
void Vnpc___024root___eval_triggers__act(Vnpc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__act(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__nba(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG

void Vnpc___024root___eval(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vnpc___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vnpc___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/crystc/ysyx-workbench/npc/vsrc/npc.sv", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vnpc___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vnpc___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vnpc___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/crystc/ysyx-workbench/npc/vsrc/npc.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vnpc___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vnpc___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/crystc/ysyx-workbench/npc/vsrc/npc.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vnpc___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vnpc___024root___eval_debug_assertions(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG

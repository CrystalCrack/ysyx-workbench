// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC___024ROOT_H_
#define VERILATED_VNPC___024ROOT_H_  // guard

#include "verilated.h"

class Vnpc__Syms;

class Vnpc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ npc__DOT__validF;
        CData/*0:0*/ npc__DOT__rst_d;
        CData/*0:0*/ npc__DOT__validW_d;
        CData/*2:0*/ npc__DOT__mrtypeD;
        CData/*2:0*/ npc__DOT__ALU_opD;
        CData/*2:0*/ npc__DOT__rdregsrcD;
        CData/*2:0*/ npc__DOT__inst_type;
        CData/*1:0*/ npc__DOT__ALUsrc2D;
        CData/*0:0*/ npc__DOT__jumpD;
        CData/*0:0*/ npc__DOT__jalrD;
        CData/*0:0*/ npc__DOT__ecallD;
        CData/*0:0*/ npc__DOT__mretD;
        CData/*7:0*/ npc__DOT__mwmaskD;
        CData/*4:0*/ npc__DOT__rf_raddr2;
        CData/*0:0*/ npc__DOT__mvalidX;
        CData/*0:0*/ npc__DOT__mwenX;
        CData/*0:0*/ npc__DOT__ecallX;
        CData/*0:0*/ npc__DOT__mretX;
        CData/*0:0*/ npc__DOT__branchX;
        CData/*0:0*/ npc__DOT__jumpX;
        CData/*0:0*/ npc__DOT__jalrX;
        CData/*1:0*/ npc__DOT__ALUsrc1X;
        CData/*1:0*/ npc__DOT__ALUsrc2X;
        CData/*2:0*/ npc__DOT__cmp_typeX;
        CData/*2:0*/ npc__DOT__ALU_opX;
        CData/*2:0*/ npc__DOT__rdregsrcX;
        CData/*2:0*/ npc__DOT__mrtypeX;
        CData/*4:0*/ npc__DOT__rdX;
        CData/*7:0*/ npc__DOT__mwmaskX;
        CData/*0:0*/ npc__DOT__Cout;
        CData/*0:0*/ npc__DOT__slt;
        CData/*0:0*/ npc__DOT__cmp_resultX;
        CData/*0:0*/ npc__DOT__cmp_resultM;
        CData/*0:0*/ npc__DOT__mvalidM;
        CData/*0:0*/ npc__DOT__mwenM;
        CData/*0:0*/ npc__DOT__ecallM;
        CData/*2:0*/ npc__DOT__rdregsrcM;
        CData/*2:0*/ npc__DOT__mrtypeM;
        CData/*4:0*/ npc__DOT__rdM;
        CData/*7:0*/ npc__DOT__mwmaskM;
        CData/*0:0*/ npc__DOT__ecallW;
        CData/*0:0*/ npc__DOT__cmp_resultW;
        CData/*2:0*/ npc__DOT__rdregsrcW;
        CData/*4:0*/ npc__DOT__rdW;
        CData/*0:0*/ npc__DOT__u_IFU__DOT__state;
        CData/*0:0*/ npc__DOT__dstagebus_inst__DOT__state;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__ebreak;
        CData/*5:0*/ npc__DOT__idu_inst__DOT____Vcellinp__get_cmptype__key;
        CData/*3:0*/ npc__DOT__idu_inst__DOT____Vcellout__get_cmptype__out;
        CData/*6:0*/ npc__DOT__idu_inst__DOT____Vcellinp__get_ALUop__key;
        CData/*4:0*/ npc__DOT__idu_inst__DOT____Vcellinp__get_rdregsrc__key;
        CData/*2:0*/ npc__DOT__idu_inst__DOT____Vcellinp__get_ALUsrc2__key;
        CData/*0:0*/ npc__DOT__idu_inst__DOT____VdfgTmp_hd1c31b8f__0;
        CData/*1:0*/ npc__DOT__idu_inst__DOT____VdfgTmp_h098fb8c5__0;
        CData/*0:0*/ npc__DOT__idu_inst__DOT____VdfgTmp_h099e61d4__0;
        CData/*0:0*/ npc__DOT__idu_inst__DOT____VdfgTmp_h094e31bc__0;
        CData/*2:0*/ npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__lut_out;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__hit;
        CData/*7:0*/ npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__lut_out;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__hit;
        CData/*2:0*/ npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__lut_out;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__hit;
    };
    struct {
        CData/*3:0*/ npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__lut_out;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__hit;
        CData/*2:0*/ npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__lut_out;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__hit;
        CData/*2:0*/ npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__lut_out;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__hit;
        CData/*1:0*/ npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__lut_out;
        CData/*0:0*/ npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__hit;
        CData/*0:0*/ npc__DOT__sel_imm__DOT__i0__DOT__hit;
        CData/*0:0*/ npc__DOT__sel_csr_read__DOT__i0__DOT__hit;
        CData/*0:0*/ npc__DOT__u_Xstage_bus__DOT__state;
        CData/*0:0*/ npc__DOT__u_ALU__DOT__add_overflow;
        CData/*0:0*/ npc__DOT__u_ALU__DOT__sub_overflow;
        CData/*0:0*/ npc__DOT__u_ALU__DOT__add_Cout;
        CData/*0:0*/ npc__DOT__u_ALU__DOT__sub_Cout;
        CData/*0:0*/ npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit;
        CData/*0:0*/ npc__DOT__sel_cmp__DOT__i0__DOT__lut_out;
        CData/*0:0*/ npc__DOT__sel_cmp__DOT__i0__DOT__hit;
        CData/*0:0*/ npc__DOT__u_Mstage_bus__DOT__state;
        CData/*0:0*/ npc__DOT__ext_mdata__DOT__i0__DOT__hit;
        CData/*0:0*/ npc__DOT__u_Wstage_bus__DOT__state;
        CData/*0:0*/ npc__DOT__sel_WB__DOT__i0__DOT__hit;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ npc__DOT__csraddrD;
        SData/*11:0*/ npc__DOT__csraddrX;
        SData/*11:0*/ npc__DOT__csraddrM;
        SData/*11:0*/ npc__DOT__csraddrW;
        SData/*8:0*/ npc__DOT__idu_inst__DOT____Vcellinp__get_itype__key;
        IData/*31:0*/ npc__DOT__instF;
        IData/*31:0*/ npc__DOT__pcF;
        IData/*31:0*/ npc__DOT__instD;
        IData/*31:0*/ npc__DOT__pcD;
        IData/*31:0*/ npc__DOT__snpcD;
        IData/*31:0*/ npc__DOT__immD;
        IData/*31:0*/ npc__DOT__mtvec_data;
        IData/*31:0*/ npc__DOT__mcause_data;
        IData/*31:0*/ npc__DOT__mepc_data;
        IData/*31:0*/ npc__DOT__mstatus_data;
        IData/*31:0*/ npc__DOT__csr_rdata;
        IData/*31:0*/ npc__DOT__csrX;
        IData/*31:0*/ npc__DOT__immX;
        IData/*31:0*/ npc__DOT__snpcX;
        IData/*31:0*/ npc__DOT__pcX;
        IData/*31:0*/ npc__DOT__src1X;
        IData/*31:0*/ npc__DOT__src2X;
        IData/*31:0*/ npc__DOT__ALU_A;
        IData/*31:0*/ npc__DOT__ALU_B;
        IData/*31:0*/ npc__DOT__dnpcX;
        IData/*31:0*/ npc__DOT__dnpcM;
        IData/*31:0*/ npc__DOT__pcM;
        IData/*31:0*/ npc__DOT__src2M;
        IData/*31:0*/ npc__DOT__ALU_resultM;
        IData/*31:0*/ npc__DOT__csrM;
        IData/*31:0*/ npc__DOT__snpcM;
        IData/*31:0*/ npc__DOT__rdata;
        IData/*31:0*/ npc__DOT__mdataM;
        IData/*31:0*/ npc__DOT__src2W;
        IData/*31:0*/ npc__DOT__pcW;
        IData/*31:0*/ npc__DOT__dnpcW;
        IData/*31:0*/ npc__DOT__ALU_resultW;
        IData/*31:0*/ npc__DOT__csrW;
        IData/*31:0*/ npc__DOT__snpcW;
        IData/*31:0*/ npc__DOT__mdataW;
    };
    struct {
        IData/*31:0*/ npc__DOT__rddataW;
        IData/*31:0*/ npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ npc__DOT__sel_imm__DOT__i0__DOT__lut_out;
        IData/*31:0*/ npc__DOT__sel_csr_read__DOT__i0__DOT__lut_out;
        IData/*31:0*/ npc__DOT__u_ALU__DOT__add_result;
        IData/*31:0*/ npc__DOT__u_ALU__DOT__sub_result;
        IData/*31:0*/ npc__DOT__ext_mdata__DOT__i0__DOT__lut_out;
        IData/*31:0*/ npc__DOT__sel_WB__DOT__i0__DOT__lut_out;
        IData/*31:0*/ __VdfgTmp_h0eee3364__0;
        IData/*31:0*/ __VdfgTmp_h8d43fe98__0;
        IData/*31:0*/ __VdfgTmp_h80607264__0;
        IData/*31:0*/ __VdfgTmp_h8f7c6002__0;
        IData/*31:0*/ __VdfgTmp_h0eead378__0;
        IData/*31:0*/ __VdfgTmp_h0ee2f3e1__0;
        IData/*31:0*/ __Vfunc_npc__DOT__u_IFU__DOT__inst_mem__DOT__pmem_read__1__Vfuncout;
        IData/*31:0*/ __Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ npc__DOT__u_ALU__DOT__out;
        QData/*32:0*/ npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out;
        VlUnpacked<SData/*11:0*/, 9> npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__pair_list;
        VlUnpacked<SData/*8:0*/, 9> npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 9> npc__DOT__idu_inst__DOT__get_itype__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*10:0*/, 3> npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 3> npc__DOT__idu_inst__DOT__get_mwmask__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*5:0*/, 5> npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 5> npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 5> npc__DOT__idu_inst__DOT__get_mrtype__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*9:0*/, 10> npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*5:0*/, 10> npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 10> npc__DOT__idu_inst__DOT__get_cmptype__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*9:0*/, 7> npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 7> npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 7> npc__DOT__idu_inst__DOT__get_ALUop__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 5> npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 5> npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 5> npc__DOT__idu_inst__DOT__get_rdregsrc__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*4:0*/, 3> npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 3> npc__DOT__idu_inst__DOT__get_ALUsrc2__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> npc__DOT__u_RegisterFile__DOT__rf;
        VlUnpacked<QData/*34:0*/, 5> npc__DOT__sel_imm__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 5> npc__DOT__sel_imm__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> npc__DOT__sel_imm__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*43:0*/, 4> npc__DOT__sel_csr_read__DOT__i0__DOT__pair_list;
        VlUnpacked<SData/*11:0*/, 4> npc__DOT__sel_csr_read__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> npc__DOT__sel_csr_read__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*35:0*/, 8> npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 8> npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*32:0*/, 8> npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 6> npc__DOT__sel_cmp__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 6> npc__DOT__sel_cmp__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 6> npc__DOT__sel_cmp__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*34:0*/, 5> npc__DOT__ext_mdata__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 5> npc__DOT__ext_mdata__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> npc__DOT__ext_mdata__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*34:0*/, 5> npc__DOT__sel_WB__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 5> npc__DOT__sel_WB__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> npc__DOT__sel_WB__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc___024root(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc___024root();
    VL_UNCOPYABLE(Vnpc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

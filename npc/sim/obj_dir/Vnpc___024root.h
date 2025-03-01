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
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*4:0*/ npc__DOT__rs1;
    CData/*2:0*/ npc__DOT__ALU_op;
    CData/*0:0*/ npc__DOT__memtoreg;
    CData/*0:0*/ npc__DOT__ALUsrc2;
    CData/*0:0*/ npc__DOT__ALU_Cin;
    CData/*1:0*/ npc__DOT__idu_inst__DOT__inst_name;
    CData/*0:0*/ npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit;
    CData/*2:0*/ npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out;
    CData/*0:0*/ npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit;
    CData/*0:0*/ npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__lut_out;
    CData/*0:0*/ npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__hit;
    CData/*0:0*/ npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out;
    CData/*0:0*/ npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit;
    CData/*0:0*/ npc__DOT__u_ALU__DOT__add_overflow;
    CData/*0:0*/ npc__DOT__u_ALU__DOT__sub_overflow;
    CData/*0:0*/ npc__DOT__u_ALU__DOT__int_Cout;
    CData/*0:0*/ npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit;
    CData/*0:0*/ __VdfgTmp_hc8d59f1f__0;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_OUT(pc,31,0);
    VL_IN(inst,31,0);
    IData/*31:0*/ npc__DOT__imm;
    IData/*31:0*/ npc__DOT__rf_rdata1;
    IData/*31:0*/ npc__DOT__ALU_B;
    IData/*31:0*/ npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out;
    IData/*31:0*/ npc__DOT__u_ALU__DOT__add_result;
    IData/*31:0*/ npc__DOT__u_ALU__DOT__sub_result;
    IData/*31:0*/ __VdfgTmp_h633a2119__0;
    IData/*31:0*/ __VdfgTmp_h0d5c396e__0;
    IData/*31:0*/ __VdfgTmp_h0c61718c__0;
    IData/*31:0*/ __VdfgTmp_h0f61fa2a__0;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*33:0*/ npc__DOT__u_ALU__DOT__out;
    QData/*33:0*/ npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out;
    VlUnpacked<QData/*33:0*/, 2> npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 2> npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*4:0*/, 2> npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 2> npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*2:0*/, 2> npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*2:0*/, 2> npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 2> npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 2> npc__DOT__idu_inst__DOT__getmemtoreg__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*2:0*/, 2> npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 2> npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 2> npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list;
    VlUnpacked<IData/*31:0*/, 32> npc__DOT__u_RegisterFile__DOT__rf;
    VlUnpacked<QData/*36:0*/, 8> npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 8> npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*33:0*/, 8> npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
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

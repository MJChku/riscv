// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmul41.h for the primary calling header

#ifndef VERILATED_VMUL41___024ROOT_H_
#define VERILATED_VMUL41___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vmul41__Syms;
class Vmul41_VerilatedVcd;


//----------

VL_MODULE(Vmul41___024root) {
  public:

    // PORTS
    VL_IN8(X0,1,0);
    VL_IN8(X1,1,0);
    VL_IN8(X2,1,0);
    VL_IN8(X3,1,0);
    VL_IN8(s,1,0);
    VL_OUT8(y,1,0);

    // LOCAL SIGNALS
    CData/*1:0*/ mul41__DOT__multiplexier__DOT__lut_out;
    CData/*0:0*/ mul41__DOT__multiplexier__DOT__hit;
    VlUnpacked<CData/*3:0*/, 4> mul41__DOT__multiplexier__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 4> mul41__DOT__multiplexier__DOT__data_list;
    VlUnpacked<CData/*1:0*/, 4> mul41__DOT__multiplexier__DOT__key_list;

    // LOCAL VARIABLES
    SData/*15:0*/ mul41__DOT____Vcellinp__multiplexier____pinNumber4;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vmul41__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmul41___024root);  ///< Copying not allowed
  public:
    Vmul41___024root(const char* name);
    ~Vmul41___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vmul41__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

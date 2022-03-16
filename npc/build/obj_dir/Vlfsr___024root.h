// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlfsr.h for the primary calling header

#ifndef VERILATED_VLFSR___024ROOT_H_
#define VERILATED_VLFSR___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vlfsr__Syms;

//----------

VL_MODULE(Vlfsr___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(ctl,2,0);
    VL_IN8(din,7,0);
    VL_OUT8(hex0,6,0);
    VL_OUT8(hex1,6,0);

    // LOCAL SIGNALS
    CData/*0:0*/ lfsr__DOT__sig_1s;
    CData/*7:0*/ lfsr__DOT__dout;
    CData/*4:0*/ lfsr__DOT__freq__DOT__count_clk;

    // LOCAL VARIABLES
    CData/*0:0*/ __VinpClk__TOP__lfsr__DOT__sig_1s;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__lfsr__DOT__sig_1s;
    CData/*0:0*/ __Vchglast__TOP__lfsr__DOT__sig_1s;

    // INTERNAL VARIABLES
    Vlfsr__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vlfsr___024root);  ///< Copying not allowed
  public:
    Vlfsr___024root(const char* name);
    ~Vlfsr___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vlfsr__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

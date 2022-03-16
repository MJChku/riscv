// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtimer.h for the primary calling header

#ifndef VERILATED_VTIMER___024ROOT_H_
#define VERILATED_VTIMER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtimer__Syms;

//----------

VL_MODULE(Vtimer___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(pause,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(hex0,6,0);
    VL_OUT8(hex1,6,0);

    // LOCAL SIGNALS
    CData/*0:0*/ timer__DOT__sig_1s;
    CData/*6:0*/ timer__DOT__counter;
    CData/*3:0*/ timer__DOT__num0;
    CData/*3:0*/ timer__DOT__num1;
    IData/*24:0*/ timer__DOT__freq__DOT__count_clk;

    // LOCAL VARIABLES
    CData/*0:0*/ __VinpClk__TOP__timer__DOT__sig_1s;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__timer__DOT__sig_1s;
    CData/*0:0*/ __Vchglast__TOP__timer__DOT__sig_1s;

    // INTERNAL VARIABLES
    Vtimer__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtimer___024root);  ///< Copying not allowed
  public:
    Vtimer___024root(const char* name);
    ~Vtimer___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtimer__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

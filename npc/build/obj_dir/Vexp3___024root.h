// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vexp3.h for the primary calling header

#ifndef VERILATED_VEXP3___024ROOT_H_
#define VERILATED_VEXP3___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vexp3__Syms;
class Vexp3_VerilatedVcd;


//----------

VL_MODULE(Vexp3___024root) {
  public:

    // PORTS
    VL_IN8(selector,2,0);
    VL_IN8(A,3,0);
    VL_IN8(B,3,0);
    VL_OUT8(result,3,0);
    VL_OUT8(overflow,0,0);
    VL_OUT8(carry,0,0);
    VL_OUT8(zero,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ exp3__DOT__alu_instance__DOT__carry_in;
    CData/*3:0*/ exp3__DOT__alu_instance__DOT__sub_B;

    // INTERNAL VARIABLES
    Vexp3__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vexp3___024root);  ///< Copying not allowed
  public:
    Vexp3___024root(const char* name);
    ~Vexp3___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vexp3__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vexp2.h for the primary calling header

#ifndef VERILATED_VEXP2___024ROOT_H_
#define VERILATED_VEXP2___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vexp2__Syms;

//----------

VL_MODULE(Vexp2___024root) {
  public:

    // PORTS
    VL_IN8(enable,0,0);
    VL_IN8(x,7,0);
    VL_OUT8(led0,0,0);
    VL_OUT8(led1,0,0);
    VL_OUT8(led2,0,0);
    VL_OUT8(led4,0,0);
    VL_OUT8(hex0,6,0);

    // INTERNAL VARIABLES
    Vexp2__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vexp2___024root);  ///< Copying not allowed
  public:
    Vexp2___024root(const char* name);
    ~Vexp2___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vexp2__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

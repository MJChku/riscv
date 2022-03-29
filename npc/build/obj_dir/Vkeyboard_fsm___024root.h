// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vkeyboard_fsm.h for the primary calling header

#ifndef VERILATED_VKEYBOARD_FSM___024ROOT_H_
#define VERILATED_VKEYBOARD_FSM___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vkeyboard_fsm__Syms;
class Vkeyboard_fsm_VerilatedVcd;


//----------

VL_MODULE(Vkeyboard_fsm___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw,7,0);
    VL_OUT8(key_pressed,7,0);

    // LOCAL SIGNALS
    CData/*1:0*/ keyboard_fsm__DOT__state_din;
    CData/*1:0*/ keyboard_fsm__DOT__state_dout;
    CData/*7:0*/ keyboard_fsm__DOT__keyboard_dout;
    CData/*1:0*/ keyboard_fsm__DOT__fsm1__DOT__lut_out;
    CData/*0:0*/ keyboard_fsm__DOT__fsm1__DOT__hit;
    VlUnpacked<CData/*3:0*/, 4> keyboard_fsm__DOT__fsm1__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 4> keyboard_fsm__DOT__fsm1__DOT__data_list;
    VlUnpacked<CData/*1:0*/, 4> keyboard_fsm__DOT__fsm1__DOT__key_list;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*15:0*/ keyboard_fsm__DOT____Vcellinp__fsm1____pinNumber4;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vkeyboard_fsm__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vkeyboard_fsm___024root);  ///< Copying not allowed
  public:
    Vkeyboard_fsm___024root(const char* name);
    ~Vkeyboard_fsm___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vkeyboard_fsm__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

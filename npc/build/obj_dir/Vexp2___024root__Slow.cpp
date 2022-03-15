// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexp2.h for the primary calling header

#include "Vexp2___024root.h"
#include "Vexp2__Syms.h"

//==========


void Vexp2___024root___ctor_var_reset(Vexp2___024root* vlSelf);

Vexp2___024root::Vexp2___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vexp2___024root___ctor_var_reset(this);
}

void Vexp2___024root::__Vconfigure(Vexp2__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vexp2___024root::~Vexp2___024root() {
}

void Vexp2___024root___eval_initial(Vexp2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp2___024root___eval_initial\n"); );
}

void Vexp2___024root___combo__TOP__1(Vexp2___024root* vlSelf);

void Vexp2___024root___eval_settle(Vexp2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp2___024root___eval_settle\n"); );
    // Body
    Vexp2___024root___combo__TOP__1(vlSelf);
}

void Vexp2___024root___final(Vexp2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp2___024root___final\n"); );
}

void Vexp2___024root___ctor_var_reset(Vexp2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp2___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->enable = 0;
    vlSelf->x = 0;
    vlSelf->led0 = 0;
    vlSelf->led1 = 0;
    vlSelf->led2 = 0;
    vlSelf->led4 = 0;
    vlSelf->hex0 = 0;
}

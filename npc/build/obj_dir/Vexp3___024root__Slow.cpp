// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexp3.h for the primary calling header

#include "Vexp3___024root.h"
#include "Vexp3__Syms.h"

//==========


void Vexp3___024root___ctor_var_reset(Vexp3___024root* vlSelf);

Vexp3___024root::Vexp3___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vexp3___024root___ctor_var_reset(this);
}

void Vexp3___024root::__Vconfigure(Vexp3__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vexp3___024root::~Vexp3___024root() {
}

void Vexp3___024root___eval_initial(Vexp3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp3___024root___eval_initial\n"); );
}

void Vexp3___024root___combo__TOP__1(Vexp3___024root* vlSelf);

void Vexp3___024root___eval_settle(Vexp3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp3___024root___eval_settle\n"); );
    // Body
    Vexp3___024root___combo__TOP__1(vlSelf);
}

void Vexp3___024root___final(Vexp3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp3___024root___final\n"); );
}

void Vexp3___024root___ctor_var_reset(Vexp3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp3___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->selector = 0;
    vlSelf->A = 0;
    vlSelf->B = 0;
    vlSelf->result = 0;
    vlSelf->overflow = 0;
    vlSelf->carry = 0;
    vlSelf->zero = 0;
    vlSelf->exp3__DOT__alu_instance__DOT__carry_in = 0;
    vlSelf->exp3__DOT__alu_instance__DOT__sub_B = 0;
}

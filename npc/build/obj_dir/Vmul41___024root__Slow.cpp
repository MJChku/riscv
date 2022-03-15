// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul41.h for the primary calling header

#include "Vmul41___024root.h"
#include "Vmul41__Syms.h"

//==========


void Vmul41___024root___ctor_var_reset(Vmul41___024root* vlSelf);

Vmul41___024root::Vmul41___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vmul41___024root___ctor_var_reset(this);
}

void Vmul41___024root::__Vconfigure(Vmul41__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vmul41___024root::~Vmul41___024root() {
}

void Vmul41___024root___eval_initial(Vmul41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul41___024root___eval_initial\n"); );
}

void Vmul41___024root___combo__TOP__1(Vmul41___024root* vlSelf);

void Vmul41___024root___eval_settle(Vmul41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul41___024root___eval_settle\n"); );
    // Body
    Vmul41___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vmul41___024root___final(Vmul41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul41___024root___final\n"); );
}

void Vmul41___024root___ctor_var_reset(Vmul41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul41___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->X0 = 0;
    vlSelf->X1 = 0;
    vlSelf->X2 = 0;
    vlSelf->X3 = 0;
    vlSelf->s = 0;
    vlSelf->y = 0;
    vlSelf->mul41__DOT____Vcellinp__multiplexier____pinNumber4 = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mul41__DOT__multiplexier__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mul41__DOT__multiplexier__DOT__data_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mul41__DOT__multiplexier__DOT__key_list[__Vi0] = 0;
    }
    vlSelf->mul41__DOT__multiplexier__DOT__lut_out = 0;
    vlSelf->mul41__DOT__multiplexier__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

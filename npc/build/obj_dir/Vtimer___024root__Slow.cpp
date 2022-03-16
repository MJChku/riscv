// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer.h for the primary calling header

#include "Vtimer___024root.h"
#include "Vtimer__Syms.h"

//==========


void Vtimer___024root___ctor_var_reset(Vtimer___024root* vlSelf);

Vtimer___024root::Vtimer___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtimer___024root___ctor_var_reset(this);
}

void Vtimer___024root::__Vconfigure(Vtimer__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtimer___024root::~Vtimer___024root() {
}

void Vtimer___024root___initial__TOP__2(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___initial__TOP__2\n"); );
    // Body
    vlSelf->timer__DOT__counter = 0U;
    vlSelf->timer__DOT__num0 = 0U;
    vlSelf->timer__DOT__num1 = 0U;
}

void Vtimer___024root___settle__TOP__4(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___settle__TOP__4\n"); );
    // Body
    if ((8U & (IData)(vlSelf->timer__DOT__num0))) {
        if ((4U & (IData)(vlSelf->timer__DOT__num0))) {
            if ((2U & (IData)(vlSelf->timer__DOT__num0))) {
                if ((1U & (IData)(vlSelf->timer__DOT__num0))) {
                    vlSelf->hex0 = 0U;
                    vlSelf->hex0 = (0xeU | (IData)(vlSelf->hex0));
                } else {
                    vlSelf->hex0 = 0U;
                    vlSelf->hex0 = (6U | (IData)(vlSelf->hex0));
                }
            } else if ((1U & (IData)(vlSelf->timer__DOT__num0))) {
                vlSelf->hex0 = 0U;
                vlSelf->hex0 = (1U | (IData)(vlSelf->hex0));
                vlSelf->hex0 = (0x20U | (IData)(vlSelf->hex0));
            } else {
                vlSelf->hex0 = 0U;
                vlSelf->hex0 = (6U | (IData)(vlSelf->hex0));
                vlSelf->hex0 = (0x40U | (IData)(vlSelf->hex0));
            }
        } else if ((2U & (IData)(vlSelf->timer__DOT__num0))) {
            if ((1U & (IData)(vlSelf->timer__DOT__num0))) {
                vlSelf->hex0 = 0U;
                vlSelf->hex0 = (3U | (IData)(vlSelf->hex0));
            } else {
                vlSelf->hex0 = 0U;
                vlSelf->hex0 = (8U | (IData)(vlSelf->hex0));
            }
        } else if ((1U & (IData)(vlSelf->timer__DOT__num0))) {
            vlSelf->hex0 = 0U;
            vlSelf->hex0 = (0x10U | (IData)(vlSelf->hex0));
        } else {
            vlSelf->hex0 = 0U;
        }
    } else if ((4U & (IData)(vlSelf->timer__DOT__num0))) {
        if ((2U & (IData)(vlSelf->timer__DOT__num0))) {
            if ((1U & (IData)(vlSelf->timer__DOT__num0))) {
                vlSelf->hex0 = 0x7fU;
                vlSelf->hex0 = (0x78U & (IData)(vlSelf->hex0));
            } else {
                vlSelf->hex0 = 0U;
                vlSelf->hex0 = (2U | (IData)(vlSelf->hex0));
            }
        } else if ((1U & (IData)(vlSelf->timer__DOT__num0))) {
            vlSelf->hex0 = 0U;
            vlSelf->hex0 = (2U | (IData)(vlSelf->hex0));
            vlSelf->hex0 = (0x10U | (IData)(vlSelf->hex0));
        } else {
            vlSelf->hex0 = 0U;
            vlSelf->hex0 = (1U | (IData)(vlSelf->hex0));
            vlSelf->hex0 = (0x18U | (IData)(vlSelf->hex0));
        }
    } else if ((2U & (IData)(vlSelf->timer__DOT__num0))) {
        if ((1U & (IData)(vlSelf->timer__DOT__num0))) {
            vlSelf->hex0 = 0U;
            vlSelf->hex0 = (0x30U | (IData)(vlSelf->hex0));
        } else {
            vlSelf->hex0 = 0U;
            vlSelf->hex0 = (0x20U | (IData)(vlSelf->hex0));
            vlSelf->hex0 = (4U | (IData)(vlSelf->hex0));
        }
    } else if ((1U & (IData)(vlSelf->timer__DOT__num0))) {
        vlSelf->hex0 = 0x7fU;
        vlSelf->hex0 = (0x79U & (IData)(vlSelf->hex0));
    } else {
        vlSelf->hex0 = 0U;
        vlSelf->hex0 = (0x40U | (IData)(vlSelf->hex0));
    }
    if ((8U & (IData)(vlSelf->timer__DOT__num1))) {
        if ((4U & (IData)(vlSelf->timer__DOT__num1))) {
            if ((2U & (IData)(vlSelf->timer__DOT__num1))) {
                if ((1U & (IData)(vlSelf->timer__DOT__num1))) {
                    vlSelf->hex1 = 0U;
                    vlSelf->hex1 = (0xeU | (IData)(vlSelf->hex1));
                } else {
                    vlSelf->hex1 = 0U;
                    vlSelf->hex1 = (6U | (IData)(vlSelf->hex1));
                }
            } else if ((1U & (IData)(vlSelf->timer__DOT__num1))) {
                vlSelf->hex1 = 0U;
                vlSelf->hex1 = (1U | (IData)(vlSelf->hex1));
                vlSelf->hex1 = (0x20U | (IData)(vlSelf->hex1));
            } else {
                vlSelf->hex1 = 0U;
                vlSelf->hex1 = (6U | (IData)(vlSelf->hex1));
                vlSelf->hex1 = (0x40U | (IData)(vlSelf->hex1));
            }
        } else if ((2U & (IData)(vlSelf->timer__DOT__num1))) {
            if ((1U & (IData)(vlSelf->timer__DOT__num1))) {
                vlSelf->hex1 = 0U;
                vlSelf->hex1 = (3U | (IData)(vlSelf->hex1));
            } else {
                vlSelf->hex1 = 0U;
                vlSelf->hex1 = (8U | (IData)(vlSelf->hex1));
            }
        } else if ((1U & (IData)(vlSelf->timer__DOT__num1))) {
            vlSelf->hex1 = 0U;
            vlSelf->hex1 = (0x10U | (IData)(vlSelf->hex1));
        } else {
            vlSelf->hex1 = 0U;
        }
    } else if ((4U & (IData)(vlSelf->timer__DOT__num1))) {
        if ((2U & (IData)(vlSelf->timer__DOT__num1))) {
            if ((1U & (IData)(vlSelf->timer__DOT__num1))) {
                vlSelf->hex1 = 0x7fU;
                vlSelf->hex1 = (0x78U & (IData)(vlSelf->hex1));
            } else {
                vlSelf->hex1 = 0U;
                vlSelf->hex1 = (2U | (IData)(vlSelf->hex1));
            }
        } else if ((1U & (IData)(vlSelf->timer__DOT__num1))) {
            vlSelf->hex1 = 0U;
            vlSelf->hex1 = (2U | (IData)(vlSelf->hex1));
            vlSelf->hex1 = (0x10U | (IData)(vlSelf->hex1));
        } else {
            vlSelf->hex1 = 0U;
            vlSelf->hex1 = (1U | (IData)(vlSelf->hex1));
            vlSelf->hex1 = (0x18U | (IData)(vlSelf->hex1));
        }
    } else if ((2U & (IData)(vlSelf->timer__DOT__num1))) {
        if ((1U & (IData)(vlSelf->timer__DOT__num1))) {
            vlSelf->hex1 = 0U;
            vlSelf->hex1 = (0x30U | (IData)(vlSelf->hex1));
        } else {
            vlSelf->hex1 = 0U;
            vlSelf->hex1 = (0x20U | (IData)(vlSelf->hex1));
            vlSelf->hex1 = (4U | (IData)(vlSelf->hex1));
        }
    } else if ((1U & (IData)(vlSelf->timer__DOT__num1))) {
        vlSelf->hex1 = 0x7fU;
        vlSelf->hex1 = (0x79U & (IData)(vlSelf->hex1));
    } else {
        vlSelf->hex1 = 0U;
        vlSelf->hex1 = (0x40U | (IData)(vlSelf->hex1));
    }
}

void Vtimer___024root___eval_initial(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtimer___024root___initial__TOP__2(vlSelf);
    vlSelf->__Vclklast__TOP____VinpClk__TOP__timer__DOT__sig_1s 
        = vlSelf->__VinpClk__TOP__timer__DOT__sig_1s;
}

void Vtimer___024root___eval_settle(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_settle\n"); );
    // Body
    Vtimer___024root___settle__TOP__4(vlSelf);
}

void Vtimer___024root___final(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___final\n"); );
}

void Vtimer___024root___ctor_var_reset(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->enable = 0;
    vlSelf->pause = 0;
    vlSelf->reset = 0;
    vlSelf->hex0 = 0;
    vlSelf->hex1 = 0;
    vlSelf->timer__DOT__sig_1s = 0;
    vlSelf->timer__DOT__counter = 0;
    vlSelf->timer__DOT__num0 = 0;
    vlSelf->timer__DOT__num1 = 0;
    vlSelf->timer__DOT__freq__DOT__count_clk = 0;
    vlSelf->__VinpClk__TOP__timer__DOT__sig_1s = 0;
    vlSelf->__Vchglast__TOP__timer__DOT__sig_1s = 0;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr.h for the primary calling header

#include "Vlfsr___024root.h"
#include "Vlfsr__Syms.h"

//==========


void Vlfsr___024root___ctor_var_reset(Vlfsr___024root* vlSelf);

Vlfsr___024root::Vlfsr___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vlfsr___024root___ctor_var_reset(this);
}

void Vlfsr___024root::__Vconfigure(Vlfsr__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vlfsr___024root::~Vlfsr___024root() {
}

void Vlfsr___024root___initial__TOP__2(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___initial__TOP__2\n"); );
    // Body
    vlSelf->lfsr__DOT__freq__DOT__count_clk = 0U;
}

void Vlfsr___024root___settle__TOP__3(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___settle__TOP__3\n"); );
    // Body
    if ((8U & (IData)(vlSelf->lfsr__DOT__dout))) {
        if ((4U & (IData)(vlSelf->lfsr__DOT__dout))) {
            if ((2U & (IData)(vlSelf->lfsr__DOT__dout))) {
                if ((1U & (IData)(vlSelf->lfsr__DOT__dout))) {
                    vlSelf->hex0 = 0U;
                    vlSelf->hex0 = (0xeU | (IData)(vlSelf->hex0));
                } else {
                    vlSelf->hex0 = 0U;
                    vlSelf->hex0 = (6U | (IData)(vlSelf->hex0));
                }
            } else if ((1U & (IData)(vlSelf->lfsr__DOT__dout))) {
                vlSelf->hex0 = 0U;
                vlSelf->hex0 = (1U | (IData)(vlSelf->hex0));
                vlSelf->hex0 = (0x20U | (IData)(vlSelf->hex0));
            } else {
                vlSelf->hex0 = 0U;
                vlSelf->hex0 = (6U | (IData)(vlSelf->hex0));
                vlSelf->hex0 = (0x40U | (IData)(vlSelf->hex0));
            }
        } else if ((2U & (IData)(vlSelf->lfsr__DOT__dout))) {
            if ((1U & (IData)(vlSelf->lfsr__DOT__dout))) {
                vlSelf->hex0 = 0U;
                vlSelf->hex0 = (3U | (IData)(vlSelf->hex0));
            } else {
                vlSelf->hex0 = 0U;
                vlSelf->hex0 = (8U | (IData)(vlSelf->hex0));
            }
        } else if ((1U & (IData)(vlSelf->lfsr__DOT__dout))) {
            vlSelf->hex0 = 0U;
            vlSelf->hex0 = (0x10U | (IData)(vlSelf->hex0));
        } else {
            vlSelf->hex0 = 0U;
        }
    } else if ((4U & (IData)(vlSelf->lfsr__DOT__dout))) {
        if ((2U & (IData)(vlSelf->lfsr__DOT__dout))) {
            if ((1U & (IData)(vlSelf->lfsr__DOT__dout))) {
                vlSelf->hex0 = 0x7fU;
                vlSelf->hex0 = (0x78U & (IData)(vlSelf->hex0));
            } else {
                vlSelf->hex0 = 0U;
                vlSelf->hex0 = (2U | (IData)(vlSelf->hex0));
            }
        } else if ((1U & (IData)(vlSelf->lfsr__DOT__dout))) {
            vlSelf->hex0 = 0U;
            vlSelf->hex0 = (2U | (IData)(vlSelf->hex0));
            vlSelf->hex0 = (0x10U | (IData)(vlSelf->hex0));
        } else {
            vlSelf->hex0 = 0U;
            vlSelf->hex0 = (1U | (IData)(vlSelf->hex0));
            vlSelf->hex0 = (0x18U | (IData)(vlSelf->hex0));
        }
    } else if ((2U & (IData)(vlSelf->lfsr__DOT__dout))) {
        if ((1U & (IData)(vlSelf->lfsr__DOT__dout))) {
            vlSelf->hex0 = 0U;
            vlSelf->hex0 = (0x30U | (IData)(vlSelf->hex0));
        } else {
            vlSelf->hex0 = 0U;
            vlSelf->hex0 = (0x20U | (IData)(vlSelf->hex0));
            vlSelf->hex0 = (4U | (IData)(vlSelf->hex0));
        }
    } else if ((1U & (IData)(vlSelf->lfsr__DOT__dout))) {
        vlSelf->hex0 = 0x7fU;
        vlSelf->hex0 = (0x79U & (IData)(vlSelf->hex0));
    } else {
        vlSelf->hex0 = 0U;
        vlSelf->hex0 = (0x40U | (IData)(vlSelf->hex0));
    }
    if ((0x80U & (IData)(vlSelf->lfsr__DOT__dout))) {
        if ((0x40U & (IData)(vlSelf->lfsr__DOT__dout))) {
            if ((0x20U & (IData)(vlSelf->lfsr__DOT__dout))) {
                if ((0x10U & (IData)(vlSelf->lfsr__DOT__dout))) {
                    vlSelf->hex1 = 0U;
                    vlSelf->hex1 = (0xeU | (IData)(vlSelf->hex1));
                } else {
                    vlSelf->hex1 = 0U;
                    vlSelf->hex1 = (6U | (IData)(vlSelf->hex1));
                }
            } else if ((0x10U & (IData)(vlSelf->lfsr__DOT__dout))) {
                vlSelf->hex1 = 0U;
                vlSelf->hex1 = (1U | (IData)(vlSelf->hex1));
                vlSelf->hex1 = (0x20U | (IData)(vlSelf->hex1));
            } else {
                vlSelf->hex1 = 0U;
                vlSelf->hex1 = (6U | (IData)(vlSelf->hex1));
                vlSelf->hex1 = (0x40U | (IData)(vlSelf->hex1));
            }
        } else if ((0x20U & (IData)(vlSelf->lfsr__DOT__dout))) {
            if ((0x10U & (IData)(vlSelf->lfsr__DOT__dout))) {
                vlSelf->hex1 = 0U;
                vlSelf->hex1 = (3U | (IData)(vlSelf->hex1));
            } else {
                vlSelf->hex1 = 0U;
                vlSelf->hex1 = (8U | (IData)(vlSelf->hex1));
            }
        } else if ((0x10U & (IData)(vlSelf->lfsr__DOT__dout))) {
            vlSelf->hex1 = 0U;
            vlSelf->hex1 = (0x10U | (IData)(vlSelf->hex1));
        } else {
            vlSelf->hex1 = 0U;
        }
    } else if ((0x40U & (IData)(vlSelf->lfsr__DOT__dout))) {
        if ((0x20U & (IData)(vlSelf->lfsr__DOT__dout))) {
            if ((0x10U & (IData)(vlSelf->lfsr__DOT__dout))) {
                vlSelf->hex1 = 0x7fU;
                vlSelf->hex1 = (0x78U & (IData)(vlSelf->hex1));
            } else {
                vlSelf->hex1 = 0U;
                vlSelf->hex1 = (2U | (IData)(vlSelf->hex1));
            }
        } else if ((0x10U & (IData)(vlSelf->lfsr__DOT__dout))) {
            vlSelf->hex1 = 0U;
            vlSelf->hex1 = (2U | (IData)(vlSelf->hex1));
            vlSelf->hex1 = (0x10U | (IData)(vlSelf->hex1));
        } else {
            vlSelf->hex1 = 0U;
            vlSelf->hex1 = (1U | (IData)(vlSelf->hex1));
            vlSelf->hex1 = (0x18U | (IData)(vlSelf->hex1));
        }
    } else if ((0x20U & (IData)(vlSelf->lfsr__DOT__dout))) {
        if ((0x10U & (IData)(vlSelf->lfsr__DOT__dout))) {
            vlSelf->hex1 = 0U;
            vlSelf->hex1 = (0x30U | (IData)(vlSelf->hex1));
        } else {
            vlSelf->hex1 = 0U;
            vlSelf->hex1 = (0x20U | (IData)(vlSelf->hex1));
            vlSelf->hex1 = (4U | (IData)(vlSelf->hex1));
        }
    } else if ((0x10U & (IData)(vlSelf->lfsr__DOT__dout))) {
        vlSelf->hex1 = 0x7fU;
        vlSelf->hex1 = (0x79U & (IData)(vlSelf->hex1));
    } else {
        vlSelf->hex1 = 0U;
        vlSelf->hex1 = (0x40U | (IData)(vlSelf->hex1));
    }
}

void Vlfsr___024root___eval_initial(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vlfsr___024root___initial__TOP__2(vlSelf);
    vlSelf->__Vclklast__TOP____VinpClk__TOP__lfsr__DOT__sig_1s 
        = vlSelf->__VinpClk__TOP__lfsr__DOT__sig_1s;
}

void Vlfsr___024root___eval_settle(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval_settle\n"); );
    // Body
    Vlfsr___024root___settle__TOP__3(vlSelf);
}

void Vlfsr___024root___final(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___final\n"); );
}

void Vlfsr___024root___ctor_var_reset(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->ctl = 0;
    vlSelf->din = 0;
    vlSelf->hex0 = 0;
    vlSelf->hex1 = 0;
    vlSelf->lfsr__DOT__sig_1s = 0;
    vlSelf->lfsr__DOT__dout = 0;
    vlSelf->lfsr__DOT__freq__DOT__count_clk = 0;
    vlSelf->__VinpClk__TOP__lfsr__DOT__sig_1s = 0;
    vlSelf->__Vchglast__TOP__lfsr__DOT__sig_1s = 0;
}

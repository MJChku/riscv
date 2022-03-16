// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer.h for the primary calling header

#include "Vtimer___024root.h"
#include "Vtimer__Syms.h"

//==========

VL_INLINE_OPT void Vtimer___024root___sequent__TOP__1(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___sequent__TOP__1\n"); );
    // Variables
    IData/*24:0*/ __Vdly__timer__DOT__freq__DOT__count_clk;
    // Body
    __Vdly__timer__DOT__freq__DOT__count_clk = vlSelf->timer__DOT__freq__DOT__count_clk;
    if ((0x17d783fU == vlSelf->timer__DOT__freq__DOT__count_clk)) {
        vlSelf->timer__DOT__sig_1s = (1U & (~ (IData)(vlSelf->timer__DOT__sig_1s)));
        __Vdly__timer__DOT__freq__DOT__count_clk = 0U;
    } else {
        __Vdly__timer__DOT__freq__DOT__count_clk = 
            (0x1ffffffU & ((IData)(1U) + vlSelf->timer__DOT__freq__DOT__count_clk));
    }
    vlSelf->timer__DOT__freq__DOT__count_clk = __Vdly__timer__DOT__freq__DOT__count_clk;
}

VL_INLINE_OPT void Vtimer___024root___sequent__TOP__3(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*6:0*/ __Vdly__timer__DOT__counter;
    // Body
    __Vdly__timer__DOT__counter = vlSelf->timer__DOT__counter;
    if (vlSelf->enable) {
        __Vdly__timer__DOT__counter = (0x7fU & ((0x63U 
                                                 == (IData)(vlSelf->timer__DOT__counter))
                                                 ? 
                                                ((IData)(vlSelf->pause)
                                                  ? (IData)(vlSelf->timer__DOT__counter)
                                                  : 0U)
                                                 : 
                                                ((IData)(vlSelf->reset)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->pause)
                                                   ? (IData)(vlSelf->timer__DOT__counter)
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->timer__DOT__counter))))));
        vlSelf->timer__DOT__num0 = (0xfU & (IData)(vlSelf->timer__DOT__counter));
        vlSelf->timer__DOT__num1 = (7U & ((IData)(vlSelf->timer__DOT__counter) 
                                          >> 4U));
    }
    vlSelf->timer__DOT__counter = __Vdly__timer__DOT__counter;
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

void Vtimer___024root___eval(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtimer___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->__VinpClk__TOP__timer__DOT__sig_1s) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__timer__DOT__sig_1s)))) {
        Vtimer___024root___sequent__TOP__3(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__timer__DOT__sig_1s 
        = vlSelf->__VinpClk__TOP__timer__DOT__sig_1s;
    vlSelf->__VinpClk__TOP__timer__DOT__sig_1s = vlSelf->timer__DOT__sig_1s;
}

QData Vtimer___024root___change_request_1(Vtimer___024root* vlSelf);

VL_INLINE_OPT QData Vtimer___024root___change_request(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___change_request\n"); );
    // Body
    return (Vtimer___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtimer___024root___change_request_1(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->timer__DOT__sig_1s ^ vlSelf->__Vchglast__TOP__timer__DOT__sig_1s));
    VL_DEBUG_IF( if(__req && ((vlSelf->timer__DOT__sig_1s ^ vlSelf->__Vchglast__TOP__timer__DOT__sig_1s))) VL_DBG_MSGF("        CHANGE: /home/mjc/onelife/PA0/ysyx-workbench/npc/vsrc/timer.v:10: timer.sig_1s\n"); );
    // Final
    vlSelf->__Vchglast__TOP__timer__DOT__sig_1s = vlSelf->timer__DOT__sig_1s;
    return __req;
}

#ifdef VL_DEBUG
void Vtimer___024root___eval_debug_assertions(Vtimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY((vlSelf->pause & 0xfeU))) {
        Verilated::overWidthError("pause");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

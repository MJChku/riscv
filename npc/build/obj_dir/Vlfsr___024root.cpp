// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr.h for the primary calling header

#include "Vlfsr___024root.h"
#include "Vlfsr__Syms.h"

//==========

VL_INLINE_OPT void Vlfsr___024root___sequent__TOP__1(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdly__lfsr__DOT__freq__DOT__count_clk;
    // Body
    __Vdly__lfsr__DOT__freq__DOT__count_clk = vlSelf->lfsr__DOT__freq__DOT__count_clk;
    if ((1U == (IData)(vlSelf->lfsr__DOT__freq__DOT__count_clk))) {
        vlSelf->lfsr__DOT__sig_1s = (1U & (~ (IData)(vlSelf->lfsr__DOT__sig_1s)));
        __Vdly__lfsr__DOT__freq__DOT__count_clk = 0U;
    } else {
        __Vdly__lfsr__DOT__freq__DOT__count_clk = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->lfsr__DOT__freq__DOT__count_clk)));
    }
    vlSelf->lfsr__DOT__freq__DOT__count_clk = __Vdly__lfsr__DOT__freq__DOT__count_clk;
}

VL_INLINE_OPT void Vlfsr___024root___sequent__TOP__4(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*31:0*/ __Vtemp2;
    // Body
    __Vtemp2 = ((4U & (IData)(vlSelf->ctl)) ? ((2U 
                                                & (IData)(vlSelf->ctl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ctl))
                                                    ? 
                                                   ((0xfeU 
                                                     & ((IData)(vlSelf->lfsr__DOT__dout) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_32(
                                                                      (0x1dU 
                                                                       & (IData)(vlSelf->lfsr__DOT__dout)))))
                                                    : 
                                                   ((0x80U 
                                                     & (VL_REDXOR_32(
                                                                     (0x1dU 
                                                                      & (IData)(vlSelf->lfsr__DOT__dout))) 
                                                        << 7U)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlSelf->lfsr__DOT__dout) 
                                                          >> 1U))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ctl))
                                                    ? 0U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->lfsr__DOT__dout)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlSelf->lfsr__DOT__dout) 
                                                          >> 1U)))))
                 : ((2U & (IData)(vlSelf->ctl)) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ctl))
                                                    ? 
                                                   ((0xfeU 
                                                     & ((IData)(vlSelf->lfsr__DOT__dout) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->lfsr__DOT__dout) 
                                                          >> 7U)))
                                                    : 
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->lfsr__DOT__dout) 
                                                        << 7U)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlSelf->lfsr__DOT__dout) 
                                                          >> 1U))))
                     : ((1U & (IData)(vlSelf->ctl))
                         ? (IData)(vlSelf->din) : 0U)));
    vlSelf->lfsr__DOT__dout = __Vtemp2;
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

void Vlfsr___024root___eval(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vlfsr___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->__VinpClk__TOP__lfsr__DOT__sig_1s) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__lfsr__DOT__sig_1s)))) {
        Vlfsr___024root___sequent__TOP__4(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__lfsr__DOT__sig_1s 
        = vlSelf->__VinpClk__TOP__lfsr__DOT__sig_1s;
    vlSelf->__VinpClk__TOP__lfsr__DOT__sig_1s = vlSelf->lfsr__DOT__sig_1s;
}

QData Vlfsr___024root___change_request_1(Vlfsr___024root* vlSelf);

VL_INLINE_OPT QData Vlfsr___024root___change_request(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___change_request\n"); );
    // Body
    return (Vlfsr___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vlfsr___024root___change_request_1(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->lfsr__DOT__sig_1s ^ vlSelf->__Vchglast__TOP__lfsr__DOT__sig_1s));
    VL_DEBUG_IF( if(__req && ((vlSelf->lfsr__DOT__sig_1s ^ vlSelf->__Vchglast__TOP__lfsr__DOT__sig_1s))) VL_DBG_MSGF("        CHANGE: /home/mjc/onelife/PA0/ysyx-workbench/npc/vsrc/lfsr.v:8: lfsr.sig_1s\n"); );
    // Final
    vlSelf->__Vchglast__TOP__lfsr__DOT__sig_1s = vlSelf->lfsr__DOT__sig_1s;
    return __req;
}

#ifdef VL_DEBUG
void Vlfsr___024root___eval_debug_assertions(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->ctl & 0xf8U))) {
        Verilated::overWidthError("ctl");}
}
#endif  // VL_DEBUG

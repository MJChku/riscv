// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexp3.h for the primary calling header

#include "Vexp3___024root.h"
#include "Vexp3__Syms.h"

//==========

VL_INLINE_OPT void Vexp3___024root___combo__TOP__1(Vexp3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp3___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->exp3__DOT__alu_instance__DOT__carry_in = 0U;
    vlSelf->exp3__DOT__alu_instance__DOT__sub_B = 0U;
    vlSelf->carry = 0U;
    vlSelf->zero = 0U;
    vlSelf->overflow = 0U;
    vlSelf->result = 0U;
    if ((4U & (IData)(vlSelf->selector))) {
        if ((2U & (IData)(vlSelf->selector))) {
            if ((1U & (IData)(vlSelf->selector))) {
                vlSelf->exp3__DOT__alu_instance__DOT__sub_B 
                    = (0xfU & ((- (IData)((1U & (~ (IData)(vlSelf->exp3__DOT__alu_instance__DOT__carry_in))))) 
                               ^ (IData)(vlSelf->B)));
                vlSelf->carry = (1U & ((((IData)(vlSelf->A) 
                                         + (IData)(vlSelf->exp3__DOT__alu_instance__DOT__sub_B)) 
                                        + (1U & (~ (IData)(vlSelf->exp3__DOT__alu_instance__DOT__carry_in)))) 
                                       >> 4U));
                vlSelf->result = (0xfU & (((IData)(vlSelf->A) 
                                           + (IData)(vlSelf->exp3__DOT__alu_instance__DOT__sub_B)) 
                                          + (1U & (~ (IData)(vlSelf->exp3__DOT__alu_instance__DOT__carry_in)))));
                vlSelf->overflow = (((1U & ((IData)(vlSelf->A) 
                                            >> 3U)) 
                                     == (1U & ((IData)(vlSelf->exp3__DOT__alu_instance__DOT__sub_B) 
                                               >> 3U))) 
                                    & ((1U & ((IData)(vlSelf->result) 
                                              >> 3U)) 
                                       != (1U & ((IData)(vlSelf->A) 
                                                 >> 3U))));
                vlSelf->zero = (1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->result)))));
                vlSelf->result = ((IData)(vlSelf->zero) 
                                  & (~ (IData)(vlSelf->overflow)));
            } else {
                vlSelf->exp3__DOT__alu_instance__DOT__sub_B 
                    = (0xfU & ((- (IData)((1U & (~ (IData)(vlSelf->exp3__DOT__alu_instance__DOT__carry_in))))) 
                               ^ (IData)(vlSelf->B)));
                vlSelf->carry = (1U & ((((IData)(vlSelf->A) 
                                         + (IData)(vlSelf->exp3__DOT__alu_instance__DOT__sub_B)) 
                                        + (1U & (~ (IData)(vlSelf->exp3__DOT__alu_instance__DOT__carry_in)))) 
                                       >> 4U));
                vlSelf->result = (0xfU & (((IData)(vlSelf->A) 
                                           + (IData)(vlSelf->exp3__DOT__alu_instance__DOT__sub_B)) 
                                          + (1U & (~ (IData)(vlSelf->exp3__DOT__alu_instance__DOT__carry_in)))));
                vlSelf->overflow = (((1U & ((IData)(vlSelf->A) 
                                            >> 3U)) 
                                     == (1U & ((IData)(vlSelf->exp3__DOT__alu_instance__DOT__sub_B) 
                                               >> 3U))) 
                                    & ((1U & ((IData)(vlSelf->result) 
                                              >> 3U)) 
                                       != (1U & ((IData)(vlSelf->A) 
                                                 >> 3U))));
                vlSelf->zero = (1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->result)))));
                vlSelf->result = (1U & (((IData)(vlSelf->result) 
                                         >> 3U) ^ (IData)(vlSelf->overflow)));
            }
        } else {
            vlSelf->result = ((1U & (IData)(vlSelf->selector))
                               ? ((IData)(vlSelf->A) 
                                  ^ (IData)(vlSelf->B))
                               : ((IData)(vlSelf->A) 
                                  | (IData)(vlSelf->B)));
        }
    } else if ((2U & (IData)(vlSelf->selector))) {
        vlSelf->result = (0xfU & ((1U & (IData)(vlSelf->selector))
                                   ? ((IData)(vlSelf->A) 
                                      & (IData)(vlSelf->B))
                                   : (~ (IData)(vlSelf->B))));
    } else if ((1U & (IData)(vlSelf->selector))) {
        vlSelf->exp3__DOT__alu_instance__DOT__sub_B 
            = (0xfU & ((- (IData)((1U & (~ (IData)(vlSelf->exp3__DOT__alu_instance__DOT__carry_in))))) 
                       ^ (IData)(vlSelf->B)));
        vlSelf->carry = (1U & ((((IData)(vlSelf->A) 
                                 + (IData)(vlSelf->exp3__DOT__alu_instance__DOT__sub_B)) 
                                + (1U & (~ (IData)(vlSelf->exp3__DOT__alu_instance__DOT__carry_in)))) 
                               >> 4U));
        vlSelf->result = (0xfU & (((IData)(vlSelf->A) 
                                   + (IData)(vlSelf->exp3__DOT__alu_instance__DOT__sub_B)) 
                                  + (1U & (~ (IData)(vlSelf->exp3__DOT__alu_instance__DOT__carry_in)))));
        vlSelf->overflow = (((1U & ((IData)(vlSelf->A) 
                                    >> 3U)) == (1U 
                                                & ((IData)(vlSelf->exp3__DOT__alu_instance__DOT__sub_B) 
                                                   >> 3U))) 
                            & ((1U & ((IData)(vlSelf->result) 
                                      >> 3U)) != (1U 
                                                  & ((IData)(vlSelf->A) 
                                                     >> 3U))));
        vlSelf->carry = (1U & ((IData)(vlSelf->carry) 
                               ^ (~ (IData)(vlSelf->exp3__DOT__alu_instance__DOT__carry_in))));
        vlSelf->zero = (1U & (~ (IData)((0U != (IData)(vlSelf->result)))));
    } else {
        vlSelf->carry = (1U & ((((IData)(vlSelf->A) 
                                 + (IData)(vlSelf->B)) 
                                + (IData)(vlSelf->exp3__DOT__alu_instance__DOT__carry_in)) 
                               >> 4U));
        vlSelf->result = (0xfU & (((IData)(vlSelf->A) 
                                   + (IData)(vlSelf->B)) 
                                  + (IData)(vlSelf->exp3__DOT__alu_instance__DOT__carry_in)));
        vlSelf->overflow = (((1U & ((IData)(vlSelf->A) 
                                    >> 3U)) == (1U 
                                                & ((IData)(vlSelf->B) 
                                                   >> 3U))) 
                            & ((1U & ((IData)(vlSelf->result) 
                                      >> 3U)) != (1U 
                                                  & ((IData)(vlSelf->A) 
                                                     >> 3U))));
        vlSelf->zero = (1U & (~ (IData)((0U != (IData)(vlSelf->result)))));
    }
}

void Vexp3___024root___eval(Vexp3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp3___024root___eval\n"); );
    // Body
    Vexp3___024root___combo__TOP__1(vlSelf);
}

QData Vexp3___024root___change_request_1(Vexp3___024root* vlSelf);

VL_INLINE_OPT QData Vexp3___024root___change_request(Vexp3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp3___024root___change_request\n"); );
    // Body
    return (Vexp3___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vexp3___024root___change_request_1(Vexp3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp3___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vexp3___024root___eval_debug_assertions(Vexp3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp3___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->selector & 0xf8U))) {
        Verilated::overWidthError("selector");}
    if (VL_UNLIKELY((vlSelf->A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xf0U))) {
        Verilated::overWidthError("B");}
}
#endif  // VL_DEBUG

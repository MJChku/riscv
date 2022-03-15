// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul41.h for the primary calling header

#include "Vmul41___024root.h"
#include "Vmul41__Syms.h"

//==========

VL_INLINE_OPT void Vmul41___024root___combo__TOP__1(Vmul41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul41___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->mul41__DOT____Vcellinp__multiplexier____pinNumber4 
        = (0x48cU | (((IData)(vlSelf->X0) << 0xcU) 
                     | (((IData)(vlSelf->X1) << 8U) 
                        | (((IData)(vlSelf->X2) << 4U) 
                           | (IData)(vlSelf->X3)))));
    vlSelf->mul41__DOT__multiplexier__DOT__pair_list[0U] 
        = (0xfU & (IData)(vlSelf->mul41__DOT____Vcellinp__multiplexier____pinNumber4));
    vlSelf->mul41__DOT__multiplexier__DOT__pair_list[1U] 
        = (0xfU & ((IData)(vlSelf->mul41__DOT____Vcellinp__multiplexier____pinNumber4) 
                   >> 4U));
    vlSelf->mul41__DOT__multiplexier__DOT__pair_list[2U] 
        = (0xfU & ((IData)(vlSelf->mul41__DOT____Vcellinp__multiplexier____pinNumber4) 
                   >> 8U));
    vlSelf->mul41__DOT__multiplexier__DOT__pair_list[3U] 
        = (0xfU & ((IData)(vlSelf->mul41__DOT____Vcellinp__multiplexier____pinNumber4) 
                   >> 0xcU));
    vlSelf->mul41__DOT__multiplexier__DOT__key_list[0U] 
        = (3U & (vlSelf->mul41__DOT__multiplexier__DOT__pair_list
                 [0U] >> 2U));
    vlSelf->mul41__DOT__multiplexier__DOT__data_list[0U] 
        = (3U & vlSelf->mul41__DOT__multiplexier__DOT__pair_list
           [0U]);
    vlSelf->mul41__DOT__multiplexier__DOT__key_list[1U] 
        = (3U & (vlSelf->mul41__DOT__multiplexier__DOT__pair_list
                 [1U] >> 2U));
    vlSelf->mul41__DOT__multiplexier__DOT__data_list[1U] 
        = (3U & vlSelf->mul41__DOT__multiplexier__DOT__pair_list
           [1U]);
    vlSelf->mul41__DOT__multiplexier__DOT__key_list[2U] 
        = (3U & (vlSelf->mul41__DOT__multiplexier__DOT__pair_list
                 [2U] >> 2U));
    vlSelf->mul41__DOT__multiplexier__DOT__data_list[2U] 
        = (3U & vlSelf->mul41__DOT__multiplexier__DOT__pair_list
           [2U]);
    vlSelf->mul41__DOT__multiplexier__DOT__key_list[3U] 
        = (3U & (vlSelf->mul41__DOT__multiplexier__DOT__pair_list
                 [3U] >> 2U));
    vlSelf->mul41__DOT__multiplexier__DOT__data_list[3U] 
        = (3U & vlSelf->mul41__DOT__multiplexier__DOT__pair_list
           [3U]);
    vlSelf->mul41__DOT__multiplexier__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->s) == vlSelf->mul41__DOT__multiplexier__DOT__key_list
                       [0U]))) & vlSelf->mul41__DOT__multiplexier__DOT__data_list
           [0U]);
    vlSelf->mul41__DOT__multiplexier__DOT__hit = ((IData)(vlSelf->s) 
                                                  == 
                                                  vlSelf->mul41__DOT__multiplexier__DOT__key_list
                                                  [0U]);
    vlSelf->mul41__DOT__multiplexier__DOT__lut_out 
        = ((IData)(vlSelf->mul41__DOT__multiplexier__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->s) == vlSelf->mul41__DOT__multiplexier__DOT__key_list
                          [1U]))) & vlSelf->mul41__DOT__multiplexier__DOT__data_list
              [1U]));
    vlSelf->mul41__DOT__multiplexier__DOT__hit = ((IData)(vlSelf->mul41__DOT__multiplexier__DOT__hit) 
                                                  | ((IData)(vlSelf->s) 
                                                     == 
                                                     vlSelf->mul41__DOT__multiplexier__DOT__key_list
                                                     [1U]));
    vlSelf->mul41__DOT__multiplexier__DOT__lut_out 
        = ((IData)(vlSelf->mul41__DOT__multiplexier__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->s) == vlSelf->mul41__DOT__multiplexier__DOT__key_list
                          [2U]))) & vlSelf->mul41__DOT__multiplexier__DOT__data_list
              [2U]));
    vlSelf->mul41__DOT__multiplexier__DOT__hit = ((IData)(vlSelf->mul41__DOT__multiplexier__DOT__hit) 
                                                  | ((IData)(vlSelf->s) 
                                                     == 
                                                     vlSelf->mul41__DOT__multiplexier__DOT__key_list
                                                     [2U]));
    vlSelf->mul41__DOT__multiplexier__DOT__lut_out 
        = ((IData)(vlSelf->mul41__DOT__multiplexier__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->s) == vlSelf->mul41__DOT__multiplexier__DOT__key_list
                          [3U]))) & vlSelf->mul41__DOT__multiplexier__DOT__data_list
              [3U]));
    vlSelf->mul41__DOT__multiplexier__DOT__hit = ((IData)(vlSelf->mul41__DOT__multiplexier__DOT__hit) 
                                                  | ((IData)(vlSelf->s) 
                                                     == 
                                                     vlSelf->mul41__DOT__multiplexier__DOT__key_list
                                                     [3U]));
    vlSelf->y = ((IData)(vlSelf->mul41__DOT__multiplexier__DOT__hit)
                  ? (IData)(vlSelf->mul41__DOT__multiplexier__DOT__lut_out)
                  : 0U);
}

void Vmul41___024root___eval(Vmul41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul41___024root___eval\n"); );
    // Body
    Vmul41___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

QData Vmul41___024root___change_request_1(Vmul41___024root* vlSelf);

VL_INLINE_OPT QData Vmul41___024root___change_request(Vmul41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul41___024root___change_request\n"); );
    // Body
    return (Vmul41___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vmul41___024root___change_request_1(Vmul41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul41___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmul41___024root___eval_debug_assertions(Vmul41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul41___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->X0 & 0xfcU))) {
        Verilated::overWidthError("X0");}
    if (VL_UNLIKELY((vlSelf->X1 & 0xfcU))) {
        Verilated::overWidthError("X1");}
    if (VL_UNLIKELY((vlSelf->X2 & 0xfcU))) {
        Verilated::overWidthError("X2");}
    if (VL_UNLIKELY((vlSelf->X3 & 0xfcU))) {
        Verilated::overWidthError("X3");}
    if (VL_UNLIKELY((vlSelf->s & 0xfcU))) {
        Verilated::overWidthError("s");}
}
#endif  // VL_DEBUG

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeyboard_fsm.h for the primary calling header

#include "Vkeyboard_fsm___024root.h"
#include "Vkeyboard_fsm__Syms.h"

//==========

VL_INLINE_OPT void Vkeyboard_fsm___024root___sequent__TOP__1(Vkeyboard_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_fsm___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*7:0*/ __Vdly__keyboard_fsm__DOT__keyboard_dout;
    // Body
    __Vdly__keyboard_fsm__DOT__keyboard_dout = vlSelf->keyboard_fsm__DOT__keyboard_dout;
    __Vdly__keyboard_fsm__DOT__keyboard_dout = ((0U 
                                                 == (IData)(vlSelf->keyboard_fsm__DOT__state_dout))
                                                 ? (IData)(vlSelf->raw)
                                                 : (IData)(vlSelf->keyboard_fsm__DOT__keyboard_dout));
    vlSelf->key_pressed = ((3U == (IData)(vlSelf->keyboard_fsm__DOT__state_dout))
                            ? (IData)(vlSelf->keyboard_fsm__DOT__keyboard_dout)
                            : 0U);
    vlSelf->keyboard_fsm__DOT__keyboard_dout = __Vdly__keyboard_fsm__DOT__keyboard_dout;
    vlSelf->keyboard_fsm__DOT__state_dout = ((IData)(vlSelf->reset)
                                              ? 0U : 
                                             (3U & (IData)(vlSelf->keyboard_fsm__DOT__state_din)));
}

VL_INLINE_OPT void Vkeyboard_fsm___024root___combo__TOP__2(Vkeyboard_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_fsm___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->keyboard_fsm__DOT____Vcellinp__fsm1____pinNumber4 
        = (0x48cU | (((((0xf0U != (IData)(vlSelf->raw)) 
                        & (0U != (IData)(vlSelf->raw)))
                        ? 1U : 0U) << 0xcU) | ((((0xf0U 
                                                  == (IData)(vlSelf->raw))
                                                  ? 2U
                                                  : 0U) 
                                                << 8U) 
                                               | (((0xf0U 
                                                    != (IData)(vlSelf->raw))
                                                    ? 3U
                                                    : 0U) 
                                                  << 4U))));
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list[0U] 
        = (0xfU & (IData)(vlSelf->keyboard_fsm__DOT____Vcellinp__fsm1____pinNumber4));
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list[1U] 
        = (0xfU & ((IData)(vlSelf->keyboard_fsm__DOT____Vcellinp__fsm1____pinNumber4) 
                   >> 4U));
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list[2U] 
        = (0xfU & ((IData)(vlSelf->keyboard_fsm__DOT____Vcellinp__fsm1____pinNumber4) 
                   >> 8U));
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list[3U] 
        = (0xfU & ((IData)(vlSelf->keyboard_fsm__DOT____Vcellinp__fsm1____pinNumber4) 
                   >> 0xcU));
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list[0U] 
        = (3U & (vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list
                 [0U] >> 2U));
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__data_list[0U] 
        = (3U & vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list
           [0U]);
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list[1U] 
        = (3U & (vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list
                 [1U] >> 2U));
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__data_list[1U] 
        = (3U & vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list
           [1U]);
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list[2U] 
        = (3U & (vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list
                 [2U] >> 2U));
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__data_list[2U] 
        = (3U & vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list
           [2U]);
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list[3U] 
        = (3U & (vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list
                 [3U] >> 2U));
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__data_list[3U] 
        = (3U & vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list
           [3U]);
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__lut_out = 
        ((- (IData)(((IData)(vlSelf->keyboard_fsm__DOT__state_dout) 
                     == vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list
                     [0U]))) & vlSelf->keyboard_fsm__DOT__fsm1__DOT__data_list
         [0U]);
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__hit = ((IData)(vlSelf->keyboard_fsm__DOT__state_dout) 
                                                 == 
                                                 vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list
                                                 [0U]);
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__lut_out = 
        ((IData)(vlSelf->keyboard_fsm__DOT__fsm1__DOT__lut_out) 
         | ((- (IData)(((IData)(vlSelf->keyboard_fsm__DOT__state_dout) 
                        == vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list
                        [1U]))) & vlSelf->keyboard_fsm__DOT__fsm1__DOT__data_list
            [1U]));
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__hit = ((IData)(vlSelf->keyboard_fsm__DOT__fsm1__DOT__hit) 
                                                 | ((IData)(vlSelf->keyboard_fsm__DOT__state_dout) 
                                                    == 
                                                    vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list
                                                    [1U]));
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__lut_out = 
        ((IData)(vlSelf->keyboard_fsm__DOT__fsm1__DOT__lut_out) 
         | ((- (IData)(((IData)(vlSelf->keyboard_fsm__DOT__state_dout) 
                        == vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list
                        [2U]))) & vlSelf->keyboard_fsm__DOT__fsm1__DOT__data_list
            [2U]));
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__hit = ((IData)(vlSelf->keyboard_fsm__DOT__fsm1__DOT__hit) 
                                                 | ((IData)(vlSelf->keyboard_fsm__DOT__state_dout) 
                                                    == 
                                                    vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list
                                                    [2U]));
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__lut_out = 
        ((IData)(vlSelf->keyboard_fsm__DOT__fsm1__DOT__lut_out) 
         | ((- (IData)(((IData)(vlSelf->keyboard_fsm__DOT__state_dout) 
                        == vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list
                        [3U]))) & vlSelf->keyboard_fsm__DOT__fsm1__DOT__data_list
            [3U]));
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__hit = ((IData)(vlSelf->keyboard_fsm__DOT__fsm1__DOT__hit) 
                                                 | ((IData)(vlSelf->keyboard_fsm__DOT__state_dout) 
                                                    == 
                                                    vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list
                                                    [3U]));
    vlSelf->keyboard_fsm__DOT__state_din = ((IData)(vlSelf->keyboard_fsm__DOT__fsm1__DOT__hit)
                                             ? (IData)(vlSelf->keyboard_fsm__DOT__fsm1__DOT__lut_out)
                                             : 0U);
}

void Vkeyboard_fsm___024root___eval(Vkeyboard_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_fsm___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vkeyboard_fsm___024root___sequent__TOP__1(vlSelf);
    }
    Vkeyboard_fsm___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vkeyboard_fsm___024root___change_request_1(Vkeyboard_fsm___024root* vlSelf);

VL_INLINE_OPT QData Vkeyboard_fsm___024root___change_request(Vkeyboard_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_fsm___024root___change_request\n"); );
    // Body
    return (Vkeyboard_fsm___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vkeyboard_fsm___024root___change_request_1(Vkeyboard_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_fsm___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vkeyboard_fsm___024root___eval_debug_assertions(Vkeyboard_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_fsm___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

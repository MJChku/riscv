// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeyboard_fsm.h for the primary calling header

#include "Vkeyboard_fsm___024root.h"
#include "Vkeyboard_fsm__Syms.h"

//==========


void Vkeyboard_fsm___024root___ctor_var_reset(Vkeyboard_fsm___024root* vlSelf);

Vkeyboard_fsm___024root::Vkeyboard_fsm___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vkeyboard_fsm___024root___ctor_var_reset(this);
}

void Vkeyboard_fsm___024root::__Vconfigure(Vkeyboard_fsm__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vkeyboard_fsm___024root::~Vkeyboard_fsm___024root() {
}

void Vkeyboard_fsm___024root___settle__TOP__3(Vkeyboard_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_fsm___024root___settle__TOP__3\n"); );
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
}

void Vkeyboard_fsm___024root___initial__TOP__4(Vkeyboard_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_fsm___024root___initial__TOP__4\n"); );
    // Body
    vlSelf->keyboard_fsm__DOT__state_dout = 0U;
    vlSelf->keyboard_fsm__DOT__state_din = 0U;
}

void Vkeyboard_fsm___024root___settle__TOP__5(Vkeyboard_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_fsm___024root___settle__TOP__5\n"); );
    // Body
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

void Vkeyboard_fsm___024root___eval_initial(Vkeyboard_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_fsm___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vkeyboard_fsm___024root___initial__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vkeyboard_fsm___024root___eval_settle(Vkeyboard_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_fsm___024root___eval_settle\n"); );
    // Body
    Vkeyboard_fsm___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vkeyboard_fsm___024root___settle__TOP__5(vlSelf);
}

void Vkeyboard_fsm___024root___final(Vkeyboard_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_fsm___024root___final\n"); );
}

void Vkeyboard_fsm___024root___ctor_var_reset(Vkeyboard_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_fsm___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->raw = 0;
    vlSelf->key_pressed = 0;
    vlSelf->keyboard_fsm__DOT__state_din = 0;
    vlSelf->keyboard_fsm__DOT__state_dout = 0;
    vlSelf->keyboard_fsm__DOT__keyboard_dout = 0;
    vlSelf->keyboard_fsm__DOT____Vcellinp__fsm1____pinNumber4 = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->keyboard_fsm__DOT__fsm1__DOT__data_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list[__Vi0] = 0;
    }
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__lut_out = 0;
    vlSelf->keyboard_fsm__DOT__fsm1__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexp2.h for the primary calling header

#include "Vexp2___024root.h"
#include "Vexp2__Syms.h"

//==========

extern const VlUnpacked<CData/*2:0*/, 512> Vexp2__ConstPool__TABLE_2ab4c310_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vexp2__ConstPool__TABLE_d484eecf_0;

VL_INLINE_OPT void Vexp2___024root___combo__TOP__1(Vexp2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp2___024root___combo__TOP__1\n"); );
    // Variables
    CData/*2:0*/ exp2__DOT____Vcellout__pencoder_instance____pinNumber3;
    CData/*3:0*/ exp2__DOT____Vcellinp__bcd_instance____pinNumber1;
    SData/*8:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->x) << 1U) | (IData)(vlSelf->enable));
    exp2__DOT____Vcellout__pencoder_instance____pinNumber3 
        = Vexp2__ConstPool__TABLE_2ab4c310_0[__Vtableidx1];
    vlSelf->led4 = Vexp2__ConstPool__TABLE_d484eecf_0
        [__Vtableidx1];
    vlSelf->led0 = (1U & ((IData)(exp2__DOT____Vcellout__pencoder_instance____pinNumber3) 
                          >> 2U));
    vlSelf->led1 = (1U & ((IData)(exp2__DOT____Vcellout__pencoder_instance____pinNumber3) 
                          >> 1U));
    vlSelf->led2 = (1U & (IData)(exp2__DOT____Vcellout__pencoder_instance____pinNumber3));
    exp2__DOT____Vcellinp__bcd_instance____pinNumber1 
        = (((IData)(vlSelf->led0) << 2U) | (((IData)(vlSelf->led1) 
                                             << 1U) 
                                            | (IData)(vlSelf->led2)));
    if ((8U & (IData)(exp2__DOT____Vcellinp__bcd_instance____pinNumber1))) {
        if ((4U & (IData)(exp2__DOT____Vcellinp__bcd_instance____pinNumber1))) {
            if ((2U & (IData)(exp2__DOT____Vcellinp__bcd_instance____pinNumber1))) {
                if ((1U & (IData)(exp2__DOT____Vcellinp__bcd_instance____pinNumber1))) {
                    vlSelf->hex0 = 0U;
                    vlSelf->hex0 = (0xeU | (IData)(vlSelf->hex0));
                } else {
                    vlSelf->hex0 = 0U;
                    vlSelf->hex0 = (6U | (IData)(vlSelf->hex0));
                }
            } else if ((1U & (IData)(exp2__DOT____Vcellinp__bcd_instance____pinNumber1))) {
                vlSelf->hex0 = 0U;
                vlSelf->hex0 = (1U | (IData)(vlSelf->hex0));
                vlSelf->hex0 = (0x20U | (IData)(vlSelf->hex0));
            } else {
                vlSelf->hex0 = 0U;
                vlSelf->hex0 = (6U | (IData)(vlSelf->hex0));
                vlSelf->hex0 = (0x40U | (IData)(vlSelf->hex0));
            }
        } else if ((2U & (IData)(exp2__DOT____Vcellinp__bcd_instance____pinNumber1))) {
            if ((1U & (IData)(exp2__DOT____Vcellinp__bcd_instance____pinNumber1))) {
                vlSelf->hex0 = 0U;
                vlSelf->hex0 = (3U | (IData)(vlSelf->hex0));
            } else {
                vlSelf->hex0 = 0U;
                vlSelf->hex0 = (8U | (IData)(vlSelf->hex0));
            }
        } else if ((1U & (IData)(exp2__DOT____Vcellinp__bcd_instance____pinNumber1))) {
            vlSelf->hex0 = 0U;
            vlSelf->hex0 = (0x10U | (IData)(vlSelf->hex0));
        } else {
            vlSelf->hex0 = 0U;
        }
    } else if ((4U & (IData)(exp2__DOT____Vcellinp__bcd_instance____pinNumber1))) {
        if ((2U & (IData)(exp2__DOT____Vcellinp__bcd_instance____pinNumber1))) {
            if ((1U & (IData)(exp2__DOT____Vcellinp__bcd_instance____pinNumber1))) {
                vlSelf->hex0 = 0x7fU;
                vlSelf->hex0 = (0x78U & (IData)(vlSelf->hex0));
            } else {
                vlSelf->hex0 = 0U;
                vlSelf->hex0 = (2U | (IData)(vlSelf->hex0));
            }
        } else if ((1U & (IData)(exp2__DOT____Vcellinp__bcd_instance____pinNumber1))) {
            vlSelf->hex0 = 0U;
            vlSelf->hex0 = (2U | (IData)(vlSelf->hex0));
            vlSelf->hex0 = (0x10U | (IData)(vlSelf->hex0));
        } else {
            vlSelf->hex0 = 0U;
            vlSelf->hex0 = (1U | (IData)(vlSelf->hex0));
            vlSelf->hex0 = (0x18U | (IData)(vlSelf->hex0));
        }
    } else if ((2U & (IData)(exp2__DOT____Vcellinp__bcd_instance____pinNumber1))) {
        if ((1U & (IData)(exp2__DOT____Vcellinp__bcd_instance____pinNumber1))) {
            vlSelf->hex0 = 0U;
            vlSelf->hex0 = (0x30U | (IData)(vlSelf->hex0));
        } else {
            vlSelf->hex0 = 0U;
            vlSelf->hex0 = (0x20U | (IData)(vlSelf->hex0));
            vlSelf->hex0 = (4U | (IData)(vlSelf->hex0));
        }
    } else if ((1U & (IData)(exp2__DOT____Vcellinp__bcd_instance____pinNumber1))) {
        vlSelf->hex0 = 0x7fU;
        vlSelf->hex0 = (0x79U & (IData)(vlSelf->hex0));
    } else {
        vlSelf->hex0 = 0U;
        vlSelf->hex0 = (0x40U | (IData)(vlSelf->hex0));
    }
}

void Vexp2___024root___eval(Vexp2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp2___024root___eval\n"); );
    // Body
    Vexp2___024root___combo__TOP__1(vlSelf);
}

QData Vexp2___024root___change_request_1(Vexp2___024root* vlSelf);

VL_INLINE_OPT QData Vexp2___024root___change_request(Vexp2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp2___024root___change_request\n"); );
    // Body
    return (Vexp2___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vexp2___024root___change_request_1(Vexp2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp2___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vexp2___024root___eval_debug_assertions(Vexp2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp2___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG

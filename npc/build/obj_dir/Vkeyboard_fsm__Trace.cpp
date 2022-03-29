// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vkeyboard_fsm__Syms.h"


void Vkeyboard_fsm___024root__traceChgSub0(Vkeyboard_fsm___024root* vlSelf, VerilatedVcd* tracep);

void Vkeyboard_fsm___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vkeyboard_fsm___024root* const __restrict vlSelf = static_cast<Vkeyboard_fsm___024root*>(voidSelf);
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vkeyboard_fsm___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vkeyboard_fsm___024root__traceChgSub0(Vkeyboard_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->keyboard_fsm__DOT__state_din),2);
            tracep->chgSData(oldp+1,(vlSelf->keyboard_fsm__DOT____Vcellinp__fsm1____pinNumber4),16);
            tracep->chgCData(oldp+2,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+3,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+4,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+5,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list[3]),4);
            tracep->chgCData(oldp+6,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__data_list[0]),2);
            tracep->chgCData(oldp+7,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__data_list[1]),2);
            tracep->chgCData(oldp+8,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__data_list[2]),2);
            tracep->chgCData(oldp+9,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__data_list[3]),2);
            tracep->chgCData(oldp+10,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list[0]),2);
            tracep->chgCData(oldp+11,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list[1]),2);
            tracep->chgCData(oldp+12,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list[2]),2);
            tracep->chgCData(oldp+13,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list[3]),2);
            tracep->chgCData(oldp+14,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__lut_out),2);
            tracep->chgBit(oldp+15,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__hit));
        }
        tracep->chgBit(oldp+16,(vlSelf->clk));
        tracep->chgBit(oldp+17,(vlSelf->reset));
        tracep->chgCData(oldp+18,(vlSelf->raw),8);
        tracep->chgCData(oldp+19,(vlSelf->key_pressed),8);
        tracep->chgCData(oldp+20,(vlSelf->keyboard_fsm__DOT__state_dout),2);
        tracep->chgCData(oldp+21,(vlSelf->keyboard_fsm__DOT__keyboard_dout),8);
    }
}

void Vkeyboard_fsm___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vkeyboard_fsm___024root* const __restrict vlSelf = static_cast<Vkeyboard_fsm___024root*>(voidSelf);
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}

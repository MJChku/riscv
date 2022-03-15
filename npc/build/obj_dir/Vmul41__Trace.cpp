// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmul41__Syms.h"


void Vmul41___024root__traceChgSub0(Vmul41___024root* vlSelf, VerilatedVcd* tracep);

void Vmul41___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vmul41___024root* const __restrict vlSelf = static_cast<Vmul41___024root*>(voidSelf);
    Vmul41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vmul41___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vmul41___024root__traceChgSub0(Vmul41___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlSelf->mul41__DOT____Vcellinp__multiplexier____pinNumber4),16);
            tracep->chgCData(oldp+1,(vlSelf->mul41__DOT__multiplexier__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+2,(vlSelf->mul41__DOT__multiplexier__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+3,(vlSelf->mul41__DOT__multiplexier__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+4,(vlSelf->mul41__DOT__multiplexier__DOT__pair_list[3]),4);
            tracep->chgCData(oldp+5,(vlSelf->mul41__DOT__multiplexier__DOT__data_list[0]),2);
            tracep->chgCData(oldp+6,(vlSelf->mul41__DOT__multiplexier__DOT__data_list[1]),2);
            tracep->chgCData(oldp+7,(vlSelf->mul41__DOT__multiplexier__DOT__data_list[2]),2);
            tracep->chgCData(oldp+8,(vlSelf->mul41__DOT__multiplexier__DOT__data_list[3]),2);
            tracep->chgCData(oldp+9,(vlSelf->mul41__DOT__multiplexier__DOT__key_list[0]),2);
            tracep->chgCData(oldp+10,(vlSelf->mul41__DOT__multiplexier__DOT__key_list[1]),2);
            tracep->chgCData(oldp+11,(vlSelf->mul41__DOT__multiplexier__DOT__key_list[2]),2);
            tracep->chgCData(oldp+12,(vlSelf->mul41__DOT__multiplexier__DOT__key_list[3]),2);
            tracep->chgCData(oldp+13,(vlSelf->mul41__DOT__multiplexier__DOT__lut_out),2);
            tracep->chgBit(oldp+14,(vlSelf->mul41__DOT__multiplexier__DOT__hit));
        }
        tracep->chgCData(oldp+15,(vlSelf->X0),2);
        tracep->chgCData(oldp+16,(vlSelf->X1),2);
        tracep->chgCData(oldp+17,(vlSelf->X2),2);
        tracep->chgCData(oldp+18,(vlSelf->X3),2);
        tracep->chgCData(oldp+19,(vlSelf->s),2);
        tracep->chgCData(oldp+20,(vlSelf->y),2);
    }
}

void Vmul41___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vmul41___024root* const __restrict vlSelf = static_cast<Vmul41___024root*>(voidSelf);
    Vmul41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}

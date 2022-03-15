// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexp3__Syms.h"


void Vexp3___024root__traceChgSub0(Vexp3___024root* vlSelf, VerilatedVcd* tracep);

void Vexp3___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vexp3___024root* const __restrict vlSelf = static_cast<Vexp3___024root*>(voidSelf);
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vexp3___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vexp3___024root__traceChgSub0(Vexp3___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlSelf->selector),3);
        tracep->chgCData(oldp+1,(vlSelf->A),4);
        tracep->chgCData(oldp+2,(vlSelf->B),4);
        tracep->chgCData(oldp+3,(vlSelf->result),4);
        tracep->chgBit(oldp+4,(vlSelf->overflow));
        tracep->chgBit(oldp+5,(vlSelf->carry));
        tracep->chgBit(oldp+6,(vlSelf->zero));
        tracep->chgBit(oldp+7,(vlSelf->exp3__DOT__alu_instance__DOT__carry_in));
        tracep->chgCData(oldp+8,(vlSelf->exp3__DOT__alu_instance__DOT__sub_B),4);
    }
}

void Vexp3___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vexp3___024root* const __restrict vlSelf = static_cast<Vexp3___024root*>(voidSelf);
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}

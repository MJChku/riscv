// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexp3__Syms.h"


void Vexp3___024root__traceInitSub0(Vexp3___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vexp3___024root__traceInitTop(Vexp3___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vexp3___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vexp3___024root__traceInitSub0(Vexp3___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"selector", false,-1, 2,0);
        tracep->declBus(c+2,"A", false,-1, 3,0);
        tracep->declBus(c+3,"B", false,-1, 3,0);
        tracep->declBus(c+4,"result", false,-1, 3,0);
        tracep->declBit(c+5,"overflow", false,-1);
        tracep->declBit(c+6,"carry", false,-1);
        tracep->declBit(c+7,"zero", false,-1);
        tracep->declBus(c+1,"exp3 selector", false,-1, 2,0);
        tracep->declBus(c+2,"exp3 A", false,-1, 3,0);
        tracep->declBus(c+3,"exp3 B", false,-1, 3,0);
        tracep->declBus(c+4,"exp3 result", false,-1, 3,0);
        tracep->declBit(c+5,"exp3 overflow", false,-1);
        tracep->declBit(c+6,"exp3 carry", false,-1);
        tracep->declBit(c+7,"exp3 zero", false,-1);
        tracep->declBus(c+10,"exp3 alu_instance WIDTH", false,-1, 31,0);
        tracep->declBus(c+1,"exp3 alu_instance selector", false,-1, 2,0);
        tracep->declBus(c+2,"exp3 alu_instance A", false,-1, 3,0);
        tracep->declBus(c+3,"exp3 alu_instance B", false,-1, 3,0);
        tracep->declBus(c+4,"exp3 alu_instance result", false,-1, 3,0);
        tracep->declBit(c+5,"exp3 alu_instance overflow", false,-1);
        tracep->declBit(c+6,"exp3 alu_instance carry", false,-1);
        tracep->declBit(c+7,"exp3 alu_instance zero", false,-1);
        tracep->declBit(c+8,"exp3 alu_instance carry_in", false,-1);
        tracep->declBus(c+9,"exp3 alu_instance sub_B", false,-1, 3,0);
    }
}

void Vexp3___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vexp3___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vexp3___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vexp3___024root__traceRegister(Vexp3___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vexp3___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vexp3___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vexp3___024root__traceCleanup, vlSelf);
    }
}

void Vexp3___024root__traceFullSub0(Vexp3___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vexp3___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vexp3___024root* const __restrict vlSelf = static_cast<Vexp3___024root*>(voidSelf);
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vexp3___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vexp3___024root__traceFullSub0(Vexp3___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->selector),3);
        tracep->fullCData(oldp+2,(vlSelf->A),4);
        tracep->fullCData(oldp+3,(vlSelf->B),4);
        tracep->fullCData(oldp+4,(vlSelf->result),4);
        tracep->fullBit(oldp+5,(vlSelf->overflow));
        tracep->fullBit(oldp+6,(vlSelf->carry));
        tracep->fullBit(oldp+7,(vlSelf->zero));
        tracep->fullBit(oldp+8,(vlSelf->exp3__DOT__alu_instance__DOT__carry_in));
        tracep->fullCData(oldp+9,(vlSelf->exp3__DOT__alu_instance__DOT__sub_B),4);
        tracep->fullIData(oldp+10,(4U),32);
    }
}

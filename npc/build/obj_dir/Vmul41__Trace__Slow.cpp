// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmul41__Syms.h"


void Vmul41___024root__traceInitSub0(Vmul41___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vmul41___024root__traceInitTop(Vmul41___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vmul41___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vmul41___024root__traceInitSub0(Vmul41___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+16,"X0", false,-1, 1,0);
        tracep->declBus(c+17,"X1", false,-1, 1,0);
        tracep->declBus(c+18,"X2", false,-1, 1,0);
        tracep->declBus(c+19,"X3", false,-1, 1,0);
        tracep->declBus(c+20,"s", false,-1, 1,0);
        tracep->declBus(c+21,"y", false,-1, 1,0);
        tracep->declBus(c+16,"mul41 X0", false,-1, 1,0);
        tracep->declBus(c+17,"mul41 X1", false,-1, 1,0);
        tracep->declBus(c+18,"mul41 X2", false,-1, 1,0);
        tracep->declBus(c+19,"mul41 X3", false,-1, 1,0);
        tracep->declBus(c+20,"mul41 s", false,-1, 1,0);
        tracep->declBus(c+21,"mul41 y", false,-1, 1,0);
        tracep->declBus(c+22,"mul41 multiplexier NR_KEY", false,-1, 31,0);
        tracep->declBus(c+23,"mul41 multiplexier KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+23,"mul41 multiplexier DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+24,"mul41 multiplexier HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+21,"mul41 multiplexier out", false,-1, 1,0);
        tracep->declBus(c+20,"mul41 multiplexier key", false,-1, 1,0);
        tracep->declBus(c+25,"mul41 multiplexier default_out", false,-1, 1,0);
        tracep->declBus(c+1,"mul41 multiplexier lut", false,-1, 15,0);
        tracep->declBus(c+22,"mul41 multiplexier PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+2+i*1,"mul41 multiplexier pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+6+i*1,"mul41 multiplexier data_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+10+i*1,"mul41 multiplexier key_list", true,(i+0), 1,0);}}
        tracep->declBus(c+14,"mul41 multiplexier lut_out", false,-1, 1,0);
        tracep->declBit(c+15,"mul41 multiplexier hit", false,-1);
        tracep->declBus(c+26,"mul41 multiplexier unnamedblk1 i", false,-1, 31,0);
    }
}

void Vmul41___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vmul41___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vmul41___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vmul41___024root__traceRegister(Vmul41___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vmul41___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vmul41___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vmul41___024root__traceCleanup, vlSelf);
    }
}

void Vmul41___024root__traceFullSub0(Vmul41___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vmul41___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vmul41___024root* const __restrict vlSelf = static_cast<Vmul41___024root*>(voidSelf);
    Vmul41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vmul41___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vmul41___024root__traceFullSub0(Vmul41___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->mul41__DOT____Vcellinp__multiplexier____pinNumber4),16);
        tracep->fullCData(oldp+2,(vlSelf->mul41__DOT__multiplexier__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+3,(vlSelf->mul41__DOT__multiplexier__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+4,(vlSelf->mul41__DOT__multiplexier__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+5,(vlSelf->mul41__DOT__multiplexier__DOT__pair_list[3]),4);
        tracep->fullCData(oldp+6,(vlSelf->mul41__DOT__multiplexier__DOT__data_list[0]),2);
        tracep->fullCData(oldp+7,(vlSelf->mul41__DOT__multiplexier__DOT__data_list[1]),2);
        tracep->fullCData(oldp+8,(vlSelf->mul41__DOT__multiplexier__DOT__data_list[2]),2);
        tracep->fullCData(oldp+9,(vlSelf->mul41__DOT__multiplexier__DOT__data_list[3]),2);
        tracep->fullCData(oldp+10,(vlSelf->mul41__DOT__multiplexier__DOT__key_list[0]),2);
        tracep->fullCData(oldp+11,(vlSelf->mul41__DOT__multiplexier__DOT__key_list[1]),2);
        tracep->fullCData(oldp+12,(vlSelf->mul41__DOT__multiplexier__DOT__key_list[2]),2);
        tracep->fullCData(oldp+13,(vlSelf->mul41__DOT__multiplexier__DOT__key_list[3]),2);
        tracep->fullCData(oldp+14,(vlSelf->mul41__DOT__multiplexier__DOT__lut_out),2);
        tracep->fullBit(oldp+15,(vlSelf->mul41__DOT__multiplexier__DOT__hit));
        tracep->fullCData(oldp+16,(vlSelf->X0),2);
        tracep->fullCData(oldp+17,(vlSelf->X1),2);
        tracep->fullCData(oldp+18,(vlSelf->X2),2);
        tracep->fullCData(oldp+19,(vlSelf->X3),2);
        tracep->fullCData(oldp+20,(vlSelf->s),2);
        tracep->fullCData(oldp+21,(vlSelf->y),2);
        tracep->fullIData(oldp+22,(4U),32);
        tracep->fullIData(oldp+23,(2U),32);
        tracep->fullIData(oldp+24,(1U),32);
        tracep->fullCData(oldp+25,(0U),2);
        tracep->fullIData(oldp+26,(4U),32);
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vkeyboard_fsm__Syms.h"


void Vkeyboard_fsm___024root__traceInitSub0(Vkeyboard_fsm___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vkeyboard_fsm___024root__traceInitTop(Vkeyboard_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vkeyboard_fsm___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vkeyboard_fsm___024root__traceInitSub0(Vkeyboard_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+17,"clk", false,-1);
        tracep->declBit(c+18,"reset", false,-1);
        tracep->declBus(c+19,"raw", false,-1, 7,0);
        tracep->declBus(c+20,"key_pressed", false,-1, 7,0);
        tracep->declBit(c+17,"keyboard_fsm clk", false,-1);
        tracep->declBit(c+18,"keyboard_fsm reset", false,-1);
        tracep->declBus(c+19,"keyboard_fsm raw", false,-1, 7,0);
        tracep->declBus(c+20,"keyboard_fsm key_pressed", false,-1, 7,0);
        tracep->declBus(c+23,"keyboard_fsm S1", false,-1, 1,0);
        tracep->declBus(c+24,"keyboard_fsm S2", false,-1, 1,0);
        tracep->declBus(c+25,"keyboard_fsm S3", false,-1, 1,0);
        tracep->declBus(c+26,"keyboard_fsm S4", false,-1, 1,0);
        tracep->declBus(c+1,"keyboard_fsm state_din", false,-1, 1,0);
        tracep->declBus(c+21,"keyboard_fsm state_dout", false,-1, 1,0);
        tracep->declBus(c+22,"keyboard_fsm keyboard_dout", false,-1, 7,0);
        tracep->declBit(c+27,"keyboard_fsm state_wen", false,-1);
        tracep->declBus(c+28,"keyboard_fsm state WIDTH", false,-1, 31,0);
        tracep->declBit(c+17,"keyboard_fsm state clk", false,-1);
        tracep->declBit(c+18,"keyboard_fsm state reset", false,-1);
        tracep->declBus(c+1,"keyboard_fsm state din", false,-1, 1,0);
        tracep->declBus(c+21,"keyboard_fsm state dout", false,-1, 1,0);
        tracep->declBit(c+27,"keyboard_fsm state en", false,-1);
        tracep->declBus(c+29,"keyboard_fsm fsm1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+28,"keyboard_fsm fsm1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+28,"keyboard_fsm fsm1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+30,"keyboard_fsm fsm1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1,"keyboard_fsm fsm1 out", false,-1, 1,0);
        tracep->declBus(c+21,"keyboard_fsm fsm1 key", false,-1, 1,0);
        tracep->declBus(c+23,"keyboard_fsm fsm1 default_out", false,-1, 1,0);
        tracep->declBus(c+2,"keyboard_fsm fsm1 lut", false,-1, 15,0);
        tracep->declBus(c+29,"keyboard_fsm fsm1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+3+i*1,"keyboard_fsm fsm1 pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+7+i*1,"keyboard_fsm fsm1 data_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+11+i*1,"keyboard_fsm fsm1 key_list", true,(i+0), 1,0);}}
        tracep->declBus(c+15,"keyboard_fsm fsm1 lut_out", false,-1, 1,0);
        tracep->declBit(c+16,"keyboard_fsm fsm1 hit", false,-1);
        tracep->declBus(c+31,"keyboard_fsm fsm1 unnamedblk1 i", false,-1, 31,0);
    }
}

void Vkeyboard_fsm___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vkeyboard_fsm___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vkeyboard_fsm___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vkeyboard_fsm___024root__traceRegister(Vkeyboard_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vkeyboard_fsm___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vkeyboard_fsm___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vkeyboard_fsm___024root__traceCleanup, vlSelf);
    }
}

void Vkeyboard_fsm___024root__traceFullSub0(Vkeyboard_fsm___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vkeyboard_fsm___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vkeyboard_fsm___024root* const __restrict vlSelf = static_cast<Vkeyboard_fsm___024root*>(voidSelf);
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vkeyboard_fsm___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vkeyboard_fsm___024root__traceFullSub0(Vkeyboard_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->keyboard_fsm__DOT__state_din),2);
        tracep->fullSData(oldp+2,(vlSelf->keyboard_fsm__DOT____Vcellinp__fsm1____pinNumber4),16);
        tracep->fullCData(oldp+3,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+4,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+5,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+6,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__pair_list[3]),4);
        tracep->fullCData(oldp+7,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__data_list[0]),2);
        tracep->fullCData(oldp+8,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__data_list[1]),2);
        tracep->fullCData(oldp+9,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__data_list[2]),2);
        tracep->fullCData(oldp+10,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__data_list[3]),2);
        tracep->fullCData(oldp+11,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list[0]),2);
        tracep->fullCData(oldp+12,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list[1]),2);
        tracep->fullCData(oldp+13,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list[2]),2);
        tracep->fullCData(oldp+14,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__key_list[3]),2);
        tracep->fullCData(oldp+15,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__lut_out),2);
        tracep->fullBit(oldp+16,(vlSelf->keyboard_fsm__DOT__fsm1__DOT__hit));
        tracep->fullBit(oldp+17,(vlSelf->clk));
        tracep->fullBit(oldp+18,(vlSelf->reset));
        tracep->fullCData(oldp+19,(vlSelf->raw),8);
        tracep->fullCData(oldp+20,(vlSelf->key_pressed),8);
        tracep->fullCData(oldp+21,(vlSelf->keyboard_fsm__DOT__state_dout),2);
        tracep->fullCData(oldp+22,(vlSelf->keyboard_fsm__DOT__keyboard_dout),8);
        tracep->fullCData(oldp+23,(0U),2);
        tracep->fullCData(oldp+24,(1U),2);
        tracep->fullCData(oldp+25,(2U),2);
        tracep->fullCData(oldp+26,(3U),2);
        tracep->fullBit(oldp+27,(1U));
        tracep->fullIData(oldp+28,(2U),32);
        tracep->fullIData(oldp+29,(4U),32);
        tracep->fullIData(oldp+30,(1U),32);
        tracep->fullIData(oldp+31,(4U),32);
    }
}

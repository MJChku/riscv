// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vexp3.h"
#include "Vexp3__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vexp3::Vexp3(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vexp3__Syms(_vcontextp__, _vcname__, this)}
    , selector{vlSymsp->TOP.selector}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , result{vlSymsp->TOP.result}
    , overflow{vlSymsp->TOP.overflow}
    , carry{vlSymsp->TOP.carry}
    , zero{vlSymsp->TOP.zero}
    , rootp{&(vlSymsp->TOP)}
{
}

Vexp3::Vexp3(const char* _vcname__)
    : Vexp3(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vexp3::~Vexp3() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vexp3___024root___eval_initial(Vexp3___024root* vlSelf);
void Vexp3___024root___eval_settle(Vexp3___024root* vlSelf);
void Vexp3___024root___eval(Vexp3___024root* vlSelf);
QData Vexp3___024root___change_request(Vexp3___024root* vlSelf);
#ifdef VL_DEBUG
void Vexp3___024root___eval_debug_assertions(Vexp3___024root* vlSelf);
#endif  // VL_DEBUG
void Vexp3___024root___final(Vexp3___024root* vlSelf);

static void _eval_initial_loop(Vexp3__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vexp3___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vexp3___024root___eval_settle(&(vlSymsp->TOP));
        Vexp3___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vexp3___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/mjc/onelife/PA0/ysyx-workbench/npc/vsrc/exp3.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vexp3___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vexp3::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vexp3::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vexp3___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vexp3___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vexp3___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/mjc/onelife/PA0/ysyx-workbench/npc/vsrc/exp3.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vexp3___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vexp3::final() {
    Vexp3___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vexp3::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vexp3::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vexp3___024root__traceInitTop(Vexp3___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vexp3___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexp3___024root*>(voidSelf);
    Vexp3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vexp3___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vexp3___024root__traceRegister(Vexp3___024root* vlSelf, VerilatedVcd* tracep);

void Vexp3::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vexp3___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlfsr.h"
#include "Vlfsr__Syms.h"

//============================================================
// Constructors

Vlfsr::Vlfsr(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vlfsr__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , ctl{vlSymsp->TOP.ctl}
    , din{vlSymsp->TOP.din}
    , hex0{vlSymsp->TOP.hex0}
    , hex1{vlSymsp->TOP.hex1}
    , rootp{&(vlSymsp->TOP)}
{
}

Vlfsr::Vlfsr(const char* _vcname__)
    : Vlfsr(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vlfsr::~Vlfsr() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vlfsr___024root___eval_initial(Vlfsr___024root* vlSelf);
void Vlfsr___024root___eval_settle(Vlfsr___024root* vlSelf);
void Vlfsr___024root___eval(Vlfsr___024root* vlSelf);
QData Vlfsr___024root___change_request(Vlfsr___024root* vlSelf);
#ifdef VL_DEBUG
void Vlfsr___024root___eval_debug_assertions(Vlfsr___024root* vlSelf);
#endif  // VL_DEBUG
void Vlfsr___024root___final(Vlfsr___024root* vlSelf);

static void _eval_initial_loop(Vlfsr__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vlfsr___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vlfsr___024root___eval_settle(&(vlSymsp->TOP));
        Vlfsr___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vlfsr___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/mjc/onelife/PA0/ysyx-workbench/npc/vsrc/lfsr.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vlfsr___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vlfsr::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlfsr::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlfsr___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vlfsr___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vlfsr___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/mjc/onelife/PA0/ysyx-workbench/npc/vsrc/lfsr.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vlfsr___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vlfsr::final() {
    Vlfsr___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vlfsr::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vlfsr::name() const {
    return vlSymsp->name();
}

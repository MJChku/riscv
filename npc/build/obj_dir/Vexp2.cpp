// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vexp2.h"
#include "Vexp2__Syms.h"

//============================================================
// Constructors

Vexp2::Vexp2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vexp2__Syms(_vcontextp__, _vcname__, this)}
    , enable{vlSymsp->TOP.enable}
    , x{vlSymsp->TOP.x}
    , led0{vlSymsp->TOP.led0}
    , led1{vlSymsp->TOP.led1}
    , led2{vlSymsp->TOP.led2}
    , led4{vlSymsp->TOP.led4}
    , hex0{vlSymsp->TOP.hex0}
    , rootp{&(vlSymsp->TOP)}
{
}

Vexp2::Vexp2(const char* _vcname__)
    : Vexp2(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vexp2::~Vexp2() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vexp2___024root___eval_initial(Vexp2___024root* vlSelf);
void Vexp2___024root___eval_settle(Vexp2___024root* vlSelf);
void Vexp2___024root___eval(Vexp2___024root* vlSelf);
QData Vexp2___024root___change_request(Vexp2___024root* vlSelf);
#ifdef VL_DEBUG
void Vexp2___024root___eval_debug_assertions(Vexp2___024root* vlSelf);
#endif  // VL_DEBUG
void Vexp2___024root___final(Vexp2___024root* vlSelf);

static void _eval_initial_loop(Vexp2__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vexp2___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vexp2___024root___eval_settle(&(vlSymsp->TOP));
        Vexp2___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vexp2___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/mjc/onelife/PA0/ysyx-workbench/npc/vsrc/exp2.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vexp2___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vexp2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vexp2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vexp2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vexp2___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vexp2___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/mjc/onelife/PA0/ysyx-workbench/npc/vsrc/exp2.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vexp2___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vexp2::final() {
    Vexp2___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vexp2::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vexp2::name() const {
    return vlSymsp->name();
}

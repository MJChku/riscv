// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VEXP2__SYMS_H_
#define VERILATED_VEXP2__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vexp2.h"

// INCLUDE MODULE CLASSES
#include "Vexp2___024root.h"

// SYMS CLASS (contains all model state)
class Vexp2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vexp2* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vexp2___024root                TOP;

    // CONSTRUCTORS
    Vexp2__Syms(VerilatedContext* contextp, const char* namep, Vexp2* modelp);
    ~Vexp2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

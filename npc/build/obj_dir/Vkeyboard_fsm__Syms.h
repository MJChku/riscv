// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VKEYBOARD_FSM__SYMS_H_
#define VERILATED_VKEYBOARD_FSM__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vkeyboard_fsm.h"

// INCLUDE MODULE CLASSES
#include "Vkeyboard_fsm___024root.h"

// SYMS CLASS (contains all model state)
class Vkeyboard_fsm__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vkeyboard_fsm* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vkeyboard_fsm___024root        TOP;

    // CONSTRUCTORS
    Vkeyboard_fsm__Syms(VerilatedContext* contextp, const char* namep, Vkeyboard_fsm* modelp);
    ~Vkeyboard_fsm__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_cpu_core__pch.h"

//============================================================
// Constructors

Vtb_cpu_core::Vtb_cpu_core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_cpu_core__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_cpu_core::Vtb_cpu_core(const char* _vcname__)
    : Vtb_cpu_core(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_cpu_core::~Vtb_cpu_core() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_cpu_core___024root___eval_debug_assertions(Vtb_cpu_core___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_cpu_core___024root___eval_static(Vtb_cpu_core___024root* vlSelf);
void Vtb_cpu_core___024root___eval_initial(Vtb_cpu_core___024root* vlSelf);
void Vtb_cpu_core___024root___eval_settle(Vtb_cpu_core___024root* vlSelf);
void Vtb_cpu_core___024root___eval(Vtb_cpu_core___024root* vlSelf);

void Vtb_cpu_core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_cpu_core::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_cpu_core___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_cpu_core___024root___eval_static(&(vlSymsp->TOP));
        Vtb_cpu_core___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_cpu_core___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_cpu_core___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_cpu_core::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_cpu_core::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_cpu_core::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_cpu_core___024root___eval_final(Vtb_cpu_core___024root* vlSelf);

VL_ATTR_COLD void Vtb_cpu_core::final() {
    Vtb_cpu_core___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_cpu_core::hierName() const { return vlSymsp->name(); }
const char* Vtb_cpu_core::modelName() const { return "Vtb_cpu_core"; }
unsigned Vtb_cpu_core::threads() const { return 1; }
void Vtb_cpu_core::prepareClone() const { contextp()->prepareClone(); }
void Vtb_cpu_core::atClone() const {
    contextp()->threadPoolpOnClone();
}

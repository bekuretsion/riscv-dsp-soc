// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_fir_accelerator__pch.h"

//============================================================
// Constructors

Vtb_fir_accelerator::Vtb_fir_accelerator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_fir_accelerator__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_fir_accelerator::Vtb_fir_accelerator(const char* _vcname__)
    : Vtb_fir_accelerator(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_fir_accelerator::~Vtb_fir_accelerator() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_fir_accelerator___024root___eval_debug_assertions(Vtb_fir_accelerator___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_fir_accelerator___024root___eval_static(Vtb_fir_accelerator___024root* vlSelf);
void Vtb_fir_accelerator___024root___eval_initial(Vtb_fir_accelerator___024root* vlSelf);
void Vtb_fir_accelerator___024root___eval_settle(Vtb_fir_accelerator___024root* vlSelf);
void Vtb_fir_accelerator___024root___eval(Vtb_fir_accelerator___024root* vlSelf);

void Vtb_fir_accelerator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_fir_accelerator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_fir_accelerator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_fir_accelerator___024root___eval_static(&(vlSymsp->TOP));
        Vtb_fir_accelerator___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_fir_accelerator___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_fir_accelerator___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_fir_accelerator::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_fir_accelerator::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_fir_accelerator::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_fir_accelerator___024root___eval_final(Vtb_fir_accelerator___024root* vlSelf);

VL_ATTR_COLD void Vtb_fir_accelerator::final() {
    Vtb_fir_accelerator___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_fir_accelerator::hierName() const { return vlSymsp->name(); }
const char* Vtb_fir_accelerator::modelName() const { return "Vtb_fir_accelerator"; }
unsigned Vtb_fir_accelerator::threads() const { return 1; }
void Vtb_fir_accelerator::prepareClone() const { contextp()->prepareClone(); }
void Vtb_fir_accelerator::atClone() const {
    contextp()->threadPoolpOnClone();
}

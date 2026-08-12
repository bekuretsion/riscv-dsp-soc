// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_mmio_interconnect__pch.h"

//============================================================
// Constructors

Vtb_mmio_interconnect::Vtb_mmio_interconnect(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_mmio_interconnect__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_mmio_interconnect::Vtb_mmio_interconnect(const char* _vcname__)
    : Vtb_mmio_interconnect(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_mmio_interconnect::~Vtb_mmio_interconnect() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_mmio_interconnect___024root___eval_debug_assertions(Vtb_mmio_interconnect___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_mmio_interconnect___024root___eval_static(Vtb_mmio_interconnect___024root* vlSelf);
void Vtb_mmio_interconnect___024root___eval_initial(Vtb_mmio_interconnect___024root* vlSelf);
void Vtb_mmio_interconnect___024root___eval_settle(Vtb_mmio_interconnect___024root* vlSelf);
void Vtb_mmio_interconnect___024root___eval(Vtb_mmio_interconnect___024root* vlSelf);

void Vtb_mmio_interconnect::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_mmio_interconnect::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_mmio_interconnect___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_mmio_interconnect___024root___eval_static(&(vlSymsp->TOP));
        Vtb_mmio_interconnect___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_mmio_interconnect___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_mmio_interconnect___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_mmio_interconnect::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_mmio_interconnect::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_mmio_interconnect::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_mmio_interconnect___024root___eval_final(Vtb_mmio_interconnect___024root* vlSelf);

VL_ATTR_COLD void Vtb_mmio_interconnect::final() {
    Vtb_mmio_interconnect___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_mmio_interconnect::hierName() const { return vlSymsp->name(); }
const char* Vtb_mmio_interconnect::modelName() const { return "Vtb_mmio_interconnect"; }
unsigned Vtb_mmio_interconnect::threads() const { return 1; }
void Vtb_mmio_interconnect::prepareClone() const { contextp()->prepareClone(); }
void Vtb_mmio_interconnect::atClone() const {
    contextp()->threadPoolpOnClone();
}

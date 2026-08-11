// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_datapath__pch.h"

//============================================================
// Constructors

Vtb_datapath::Vtb_datapath(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_datapath__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_datapath::Vtb_datapath(const char* _vcname__)
    : Vtb_datapath(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_datapath::~Vtb_datapath() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_datapath___024root___eval_debug_assertions(Vtb_datapath___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_datapath___024root___eval_static(Vtb_datapath___024root* vlSelf);
void Vtb_datapath___024root___eval_initial(Vtb_datapath___024root* vlSelf);
void Vtb_datapath___024root___eval_settle(Vtb_datapath___024root* vlSelf);
void Vtb_datapath___024root___eval(Vtb_datapath___024root* vlSelf);

void Vtb_datapath::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_datapath::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_datapath___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_datapath___024root___eval_static(&(vlSymsp->TOP));
        Vtb_datapath___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_datapath___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_datapath___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_datapath::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_datapath::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_datapath::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_datapath___024root___eval_final(Vtb_datapath___024root* vlSelf);

VL_ATTR_COLD void Vtb_datapath::final() {
    Vtb_datapath___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_datapath::hierName() const { return vlSymsp->name(); }
const char* Vtb_datapath::modelName() const { return "Vtb_datapath"; }
unsigned Vtb_datapath::threads() const { return 1; }
void Vtb_datapath::prepareClone() const { contextp()->prepareClone(); }
void Vtb_datapath::atClone() const {
    contextp()->threadPoolpOnClone();
}

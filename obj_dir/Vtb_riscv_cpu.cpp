// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_riscv_cpu__pch.h"

//============================================================
// Constructors

Vtb_riscv_cpu::Vtb_riscv_cpu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_riscv_cpu__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_riscv_cpu::Vtb_riscv_cpu(const char* _vcname__)
    : Vtb_riscv_cpu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_riscv_cpu::~Vtb_riscv_cpu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_riscv_cpu___024root___eval_debug_assertions(Vtb_riscv_cpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_riscv_cpu___024root___eval_static(Vtb_riscv_cpu___024root* vlSelf);
void Vtb_riscv_cpu___024root___eval_initial(Vtb_riscv_cpu___024root* vlSelf);
void Vtb_riscv_cpu___024root___eval_settle(Vtb_riscv_cpu___024root* vlSelf);
void Vtb_riscv_cpu___024root___eval(Vtb_riscv_cpu___024root* vlSelf);

void Vtb_riscv_cpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_riscv_cpu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_riscv_cpu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_riscv_cpu___024root___eval_static(&(vlSymsp->TOP));
        Vtb_riscv_cpu___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_riscv_cpu___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_riscv_cpu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_riscv_cpu::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_riscv_cpu::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_riscv_cpu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_riscv_cpu___024root___eval_final(Vtb_riscv_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_riscv_cpu::final() {
    Vtb_riscv_cpu___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_riscv_cpu::hierName() const { return vlSymsp->name(); }
const char* Vtb_riscv_cpu::modelName() const { return "Vtb_riscv_cpu"; }
unsigned Vtb_riscv_cpu::threads() const { return 1; }
void Vtb_riscv_cpu::prepareClone() const { contextp()->prepareClone(); }
void Vtb_riscv_cpu::atClone() const {
    contextp()->threadPoolpOnClone();
}

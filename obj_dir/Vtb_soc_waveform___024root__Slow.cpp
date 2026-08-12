// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_soc_waveform.h for the primary calling header

#include "Vtb_soc_waveform__pch.h"
#include "Vtb_soc_waveform__Syms.h"
#include "Vtb_soc_waveform___024root.h"

void Vtb_soc_waveform___024root___ctor_var_reset(Vtb_soc_waveform___024root* vlSelf);

Vtb_soc_waveform___024root::Vtb_soc_waveform___024root(Vtb_soc_waveform__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_soc_waveform___024root___ctor_var_reset(this);
}

void Vtb_soc_waveform___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_soc_waveform___024root::~Vtb_soc_waveform___024root() {
}

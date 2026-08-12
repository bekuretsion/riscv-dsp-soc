// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fir_scaling_benchmark.h for the primary calling header

#include "Vtb_fir_scaling_benchmark__pch.h"
#include "Vtb_fir_scaling_benchmark__Syms.h"
#include "Vtb_fir_scaling_benchmark___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fir_scaling_benchmark___024root___dump_triggers__stl(Vtb_fir_scaling_benchmark___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fir_scaling_benchmark___024root___eval_triggers__stl(Vtb_fir_scaling_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_scaling_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_scaling_benchmark___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fir_scaling_benchmark___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

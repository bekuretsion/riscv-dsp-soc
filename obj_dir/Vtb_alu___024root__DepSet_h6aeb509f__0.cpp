// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_alu.h for the primary calling header

#include "Vtb_alu__pch.h"
#include "Vtb_alu__Syms.h"
#include "Vtb_alu___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_alu___024root___eval_initial__TOP__Vtiming__0(Vtb_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__0__expected;
    __Vtask_tb_alu__DOT__check__0__expected = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__1__test_a;
    __Vtask_tb_alu__DOT__check__1__test_a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__1__test_b;
    __Vtask_tb_alu__DOT__check__1__test_b = 0;
    CData/*3:0*/ __Vtask_tb_alu__DOT__check__1__operation;
    __Vtask_tb_alu__DOT__check__1__operation = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__1__expected;
    __Vtask_tb_alu__DOT__check__1__expected = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__2__test_a;
    __Vtask_tb_alu__DOT__check__2__test_a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__2__test_b;
    __Vtask_tb_alu__DOT__check__2__test_b = 0;
    CData/*3:0*/ __Vtask_tb_alu__DOT__check__2__operation;
    __Vtask_tb_alu__DOT__check__2__operation = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__2__expected;
    __Vtask_tb_alu__DOT__check__2__expected = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__3__test_a;
    __Vtask_tb_alu__DOT__check__3__test_a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__3__test_b;
    __Vtask_tb_alu__DOT__check__3__test_b = 0;
    CData/*3:0*/ __Vtask_tb_alu__DOT__check__3__operation;
    __Vtask_tb_alu__DOT__check__3__operation = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__3__expected;
    __Vtask_tb_alu__DOT__check__3__expected = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__4__test_a;
    __Vtask_tb_alu__DOT__check__4__test_a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__4__test_b;
    __Vtask_tb_alu__DOT__check__4__test_b = 0;
    CData/*3:0*/ __Vtask_tb_alu__DOT__check__4__operation;
    __Vtask_tb_alu__DOT__check__4__operation = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__4__expected;
    __Vtask_tb_alu__DOT__check__4__expected = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__5__test_a;
    __Vtask_tb_alu__DOT__check__5__test_a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__5__test_b;
    __Vtask_tb_alu__DOT__check__5__test_b = 0;
    CData/*3:0*/ __Vtask_tb_alu__DOT__check__5__operation;
    __Vtask_tb_alu__DOT__check__5__operation = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__5__expected;
    __Vtask_tb_alu__DOT__check__5__expected = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__6__test_a;
    __Vtask_tb_alu__DOT__check__6__test_a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__6__test_b;
    __Vtask_tb_alu__DOT__check__6__test_b = 0;
    CData/*3:0*/ __Vtask_tb_alu__DOT__check__6__operation;
    __Vtask_tb_alu__DOT__check__6__operation = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__6__expected;
    __Vtask_tb_alu__DOT__check__6__expected = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__7__test_a;
    __Vtask_tb_alu__DOT__check__7__test_a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__7__test_b;
    __Vtask_tb_alu__DOT__check__7__test_b = 0;
    CData/*3:0*/ __Vtask_tb_alu__DOT__check__7__operation;
    __Vtask_tb_alu__DOT__check__7__operation = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__7__expected;
    __Vtask_tb_alu__DOT__check__7__expected = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__8__test_a;
    __Vtask_tb_alu__DOT__check__8__test_a = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__8__test_b;
    __Vtask_tb_alu__DOT__check__8__test_b = 0;
    CData/*3:0*/ __Vtask_tb_alu__DOT__check__8__operation;
    __Vtask_tb_alu__DOT__check__8__operation = 0;
    IData/*31:0*/ __Vtask_tb_alu__DOT__check__8__expected;
    __Vtask_tb_alu__DOT__check__8__expected = 0;
    // Body
    VL_WRITEF_NX("==========================\n      RV32I ALU TEST\n==========================\n",0);
    __Vtask_tb_alu__DOT__check__0__expected = 0xcU;
    vlSelfRef.tb_alu__DOT__a = 5U;
    vlSelfRef.tb_alu__DOT__b = 7U;
    vlSelfRef.tb_alu__DOT__alu_ctrl = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_alu.sv", 
                                         28);
    if (VL_UNLIKELY((vlSelfRef.tb_alu__DOT__result 
                     != __Vtask_tb_alu__DOT__check__0__expected))) {
        VL_WRITEF_NX("FAIL: a=%x b=%x ctrl=%b result=%x expected=%x\n[%0t] %%Fatal: tb_alu.sv:35: Assertion failed in %Ntb_alu.check\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result,
                     32,__Vtask_tb_alu__DOT__check__0__expected,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_alu.sv", 35, "", false);
    } else {
        VL_WRITEF_NX("PASS: a=%x b=%x ctrl=%b result=%x\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result);
    }
    __Vtask_tb_alu__DOT__check__1__expected = 7U;
    __Vtask_tb_alu__DOT__check__1__operation = 1U;
    __Vtask_tb_alu__DOT__check__1__test_b = 3U;
    __Vtask_tb_alu__DOT__check__1__test_a = 0xaU;
    vlSelfRef.tb_alu__DOT__a = __Vtask_tb_alu__DOT__check__1__test_a;
    vlSelfRef.tb_alu__DOT__b = __Vtask_tb_alu__DOT__check__1__test_b;
    vlSelfRef.tb_alu__DOT__alu_ctrl = __Vtask_tb_alu__DOT__check__1__operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_alu.sv", 
                                         28);
    if (VL_UNLIKELY((vlSelfRef.tb_alu__DOT__result 
                     != __Vtask_tb_alu__DOT__check__1__expected))) {
        VL_WRITEF_NX("FAIL: a=%x b=%x ctrl=%b result=%x expected=%x\n[%0t] %%Fatal: tb_alu.sv:35: Assertion failed in %Ntb_alu.check\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result,
                     32,__Vtask_tb_alu__DOT__check__1__expected,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_alu.sv", 35, "", false);
    } else {
        VL_WRITEF_NX("PASS: a=%x b=%x ctrl=%b result=%x\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result);
    }
    __Vtask_tb_alu__DOT__check__2__expected = 0xf0U;
    __Vtask_tb_alu__DOT__check__2__operation = 2U;
    __Vtask_tb_alu__DOT__check__2__test_b = 0xff0U;
    __Vtask_tb_alu__DOT__check__2__test_a = 0xf0f0U;
    vlSelfRef.tb_alu__DOT__a = __Vtask_tb_alu__DOT__check__2__test_a;
    vlSelfRef.tb_alu__DOT__b = __Vtask_tb_alu__DOT__check__2__test_b;
    vlSelfRef.tb_alu__DOT__alu_ctrl = __Vtask_tb_alu__DOT__check__2__operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_alu.sv", 
                                         28);
    if (VL_UNLIKELY((vlSelfRef.tb_alu__DOT__result 
                     != __Vtask_tb_alu__DOT__check__2__expected))) {
        VL_WRITEF_NX("FAIL: a=%x b=%x ctrl=%b result=%x expected=%x\n[%0t] %%Fatal: tb_alu.sv:35: Assertion failed in %Ntb_alu.check\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result,
                     32,__Vtask_tb_alu__DOT__check__2__expected,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_alu.sv", 35, "", false);
    } else {
        VL_WRITEF_NX("PASS: a=%x b=%x ctrl=%b result=%x\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result);
    }
    __Vtask_tb_alu__DOT__check__3__expected = 0xff00U;
    __Vtask_tb_alu__DOT__check__3__operation = 3U;
    __Vtask_tb_alu__DOT__check__3__test_b = 0xf00U;
    __Vtask_tb_alu__DOT__check__3__test_a = 0xf000U;
    vlSelfRef.tb_alu__DOT__a = __Vtask_tb_alu__DOT__check__3__test_a;
    vlSelfRef.tb_alu__DOT__b = __Vtask_tb_alu__DOT__check__3__test_b;
    vlSelfRef.tb_alu__DOT__alu_ctrl = __Vtask_tb_alu__DOT__check__3__operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_alu.sv", 
                                         28);
    if (VL_UNLIKELY((vlSelfRef.tb_alu__DOT__result 
                     != __Vtask_tb_alu__DOT__check__3__expected))) {
        VL_WRITEF_NX("FAIL: a=%x b=%x ctrl=%b result=%x expected=%x\n[%0t] %%Fatal: tb_alu.sv:35: Assertion failed in %Ntb_alu.check\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result,
                     32,__Vtask_tb_alu__DOT__check__3__expected,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_alu.sv", 35, "", false);
    } else {
        VL_WRITEF_NX("PASS: a=%x b=%x ctrl=%b result=%x\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result);
    }
    __Vtask_tb_alu__DOT__check__4__expected = 0xffffU;
    __Vtask_tb_alu__DOT__check__4__operation = 4U;
    __Vtask_tb_alu__DOT__check__4__test_b = 0x5555U;
    __Vtask_tb_alu__DOT__check__4__test_a = 0xaaaaU;
    vlSelfRef.tb_alu__DOT__a = __Vtask_tb_alu__DOT__check__4__test_a;
    vlSelfRef.tb_alu__DOT__b = __Vtask_tb_alu__DOT__check__4__test_b;
    vlSelfRef.tb_alu__DOT__alu_ctrl = __Vtask_tb_alu__DOT__check__4__operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_alu.sv", 
                                         28);
    if (VL_UNLIKELY((vlSelfRef.tb_alu__DOT__result 
                     != __Vtask_tb_alu__DOT__check__4__expected))) {
        VL_WRITEF_NX("FAIL: a=%x b=%x ctrl=%b result=%x expected=%x\n[%0t] %%Fatal: tb_alu.sv:35: Assertion failed in %Ntb_alu.check\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result,
                     32,__Vtask_tb_alu__DOT__check__4__expected,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_alu.sv", 35, "", false);
    } else {
        VL_WRITEF_NX("PASS: a=%x b=%x ctrl=%b result=%x\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result);
    }
    __Vtask_tb_alu__DOT__check__5__expected = 0x10U;
    __Vtask_tb_alu__DOT__check__5__operation = 5U;
    __Vtask_tb_alu__DOT__check__5__test_b = 4U;
    __Vtask_tb_alu__DOT__check__5__test_a = 1U;
    vlSelfRef.tb_alu__DOT__a = __Vtask_tb_alu__DOT__check__5__test_a;
    vlSelfRef.tb_alu__DOT__b = __Vtask_tb_alu__DOT__check__5__test_b;
    vlSelfRef.tb_alu__DOT__alu_ctrl = __Vtask_tb_alu__DOT__check__5__operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_alu.sv", 
                                         28);
    if (VL_UNLIKELY((vlSelfRef.tb_alu__DOT__result 
                     != __Vtask_tb_alu__DOT__check__5__expected))) {
        VL_WRITEF_NX("FAIL: a=%x b=%x ctrl=%b result=%x expected=%x\n[%0t] %%Fatal: tb_alu.sv:35: Assertion failed in %Ntb_alu.check\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result,
                     32,__Vtask_tb_alu__DOT__check__5__expected,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_alu.sv", 35, "", false);
    } else {
        VL_WRITEF_NX("PASS: a=%x b=%x ctrl=%b result=%x\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result);
    }
    __Vtask_tb_alu__DOT__check__6__expected = 4U;
    __Vtask_tb_alu__DOT__check__6__operation = 6U;
    __Vtask_tb_alu__DOT__check__6__test_b = 2U;
    __Vtask_tb_alu__DOT__check__6__test_a = 0x10U;
    vlSelfRef.tb_alu__DOT__a = __Vtask_tb_alu__DOT__check__6__test_a;
    vlSelfRef.tb_alu__DOT__b = __Vtask_tb_alu__DOT__check__6__test_b;
    vlSelfRef.tb_alu__DOT__alu_ctrl = __Vtask_tb_alu__DOT__check__6__operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_alu.sv", 
                                         28);
    if (VL_UNLIKELY((vlSelfRef.tb_alu__DOT__result 
                     != __Vtask_tb_alu__DOT__check__6__expected))) {
        VL_WRITEF_NX("FAIL: a=%x b=%x ctrl=%b result=%x expected=%x\n[%0t] %%Fatal: tb_alu.sv:35: Assertion failed in %Ntb_alu.check\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result,
                     32,__Vtask_tb_alu__DOT__check__6__expected,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_alu.sv", 35, "", false);
    } else {
        VL_WRITEF_NX("PASS: a=%x b=%x ctrl=%b result=%x\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result);
    }
    __Vtask_tb_alu__DOT__check__7__expected = 1U;
    __Vtask_tb_alu__DOT__check__7__operation = 8U;
    __Vtask_tb_alu__DOT__check__7__test_b = 2U;
    __Vtask_tb_alu__DOT__check__7__test_a = 0xfffffffbU;
    vlSelfRef.tb_alu__DOT__a = __Vtask_tb_alu__DOT__check__7__test_a;
    vlSelfRef.tb_alu__DOT__b = __Vtask_tb_alu__DOT__check__7__test_b;
    vlSelfRef.tb_alu__DOT__alu_ctrl = __Vtask_tb_alu__DOT__check__7__operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_alu.sv", 
                                         28);
    if (VL_UNLIKELY((vlSelfRef.tb_alu__DOT__result 
                     != __Vtask_tb_alu__DOT__check__7__expected))) {
        VL_WRITEF_NX("FAIL: a=%x b=%x ctrl=%b result=%x expected=%x\n[%0t] %%Fatal: tb_alu.sv:35: Assertion failed in %Ntb_alu.check\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result,
                     32,__Vtask_tb_alu__DOT__check__7__expected,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_alu.sv", 35, "", false);
    } else {
        VL_WRITEF_NX("PASS: a=%x b=%x ctrl=%b result=%x\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result);
    }
    __Vtask_tb_alu__DOT__check__8__expected = 1U;
    __Vtask_tb_alu__DOT__check__8__operation = 9U;
    __Vtask_tb_alu__DOT__check__8__test_b = 0xaU;
    __Vtask_tb_alu__DOT__check__8__test_a = 5U;
    vlSelfRef.tb_alu__DOT__a = __Vtask_tb_alu__DOT__check__8__test_a;
    vlSelfRef.tb_alu__DOT__b = __Vtask_tb_alu__DOT__check__8__test_b;
    vlSelfRef.tb_alu__DOT__alu_ctrl = __Vtask_tb_alu__DOT__check__8__operation;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_alu.sv", 
                                         28);
    if (VL_UNLIKELY((vlSelfRef.tb_alu__DOT__result 
                     != __Vtask_tb_alu__DOT__check__8__expected))) {
        VL_WRITEF_NX("FAIL: a=%x b=%x ctrl=%b result=%x expected=%x\n[%0t] %%Fatal: tb_alu.sv:35: Assertion failed in %Ntb_alu.check\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result,
                     32,__Vtask_tb_alu__DOT__check__8__expected,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_alu.sv", 35, "", false);
    } else {
        VL_WRITEF_NX("PASS: a=%x b=%x ctrl=%b result=%x\n",0,
                     32,vlSelfRef.tb_alu__DOT__a,32,
                     vlSelfRef.tb_alu__DOT__b,4,(IData)(vlSelfRef.tb_alu__DOT__alu_ctrl),
                     32,vlSelfRef.tb_alu__DOT__result);
    }
    VL_WRITEF_NX("==========================\n      ALL TESTS PASS\n==========================\n",0);
    VL_FINISH_MT("tb/tb_alu.sv", 119, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_alu___024root___dump_triggers__act(Vtb_alu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_alu___024root___eval_triggers__act(Vtb_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_alu___024root___dump_triggers__act(vlSelf);
    }
#endif
}

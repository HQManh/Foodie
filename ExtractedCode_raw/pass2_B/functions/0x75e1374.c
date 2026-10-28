// rea decompile_all
// name: System.RuntimeType$$CreateInstanceImpl
// address: 0x75e1374
// body: available
// range: 0x75e1374-0x75e1ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e18a4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e18a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e18ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e18b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e18b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e18b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e18bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e18c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e18cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e1900 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e1908 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e190c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8
System_RuntimeType__CreateInstanceImpl
          (long *param_1,uint param_2,long *param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long local_70;
  long local_68;
  
  local_68 = param_4;
  if ((DAT_09521f5b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_091ae858);
    FUN_03f5c2a4(&DAT_091ae860);
    FUN_03f5c2a4(&DAT_091ae850);
    FUN_03f5c2a4(&DAT_091ae868);
    FUN_03f5c2a4(&DAT_0917c768);
    FUN_03f5c2a4(&DAT_091802d0);
    FUN_03f5c2a4(&DAT_0918a388);
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09521f5b = 1;
  }
  local_70 = 0;
  System_RuntimeType__CreateInstanceCheckThis(param_1);
  lVar2 = DAT_091c0270;
  if (param_4 == 0) {
    lVar10 = *(long *)(DAT_091c0270 + 0x38);
    if (lVar10 == 0) {
      FUN_03f95ac8(DAT_091c0270);
      lVar10 = *(long *)(lVar2 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    param_4 = **(long **)(lVar2 + 0xb8);
    local_68 = param_4;
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  uVar11 = *(ulong *)(param_4 + 0x18);
  if (param_3 == (long *)0x0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_3 = (long *)System_Type__get_DefaultBinder(0);
  }
  if (((((param_2 ^ 0xffffffff) & 0x14) == 0) && ((int)uVar11 == 0)) &&
     (uVar3 = System_Type__get_IsValueType(param_1,0), (uVar3 & 1) != 0)) {
    uVar4 = System_RuntimeType__CreateInstanceDefaultCtor
                      (param_1,(param_2 & 0x20) == 0,0,0,(param_2 & 0x2000000) == 0);
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x6a8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x6b0));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = thunk_FUN_03f9944c(DAT_0917c768);
    FUN_057e0478(lVar10,*(undefined4 *)(lVar2 + 0x18),DAT_091ae850);
    plVar5 = (long *)FUN_03f5c394(DAT_09180748,uVar11 & 0xffffffff);
    if (0 < (int)uVar11) {
      uVar3 = 0;
      lVar12 = 0x20;
      do {
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(local_68 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(long *)(local_68 + lVar12) != 0) {
          lVar6 = System_Object__GetType(*(long *)(local_68 + lVar12),0);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
            uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar4,0);
          }
          if (*(uint *)(plVar5 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(long *)((long)plVar5 + lVar12) = lVar6;
          thunk_FUN_03f5d7b8((long)plVar5 + lVar12,lVar6);
        }
        uVar3 = uVar3 + 1;
        lVar12 = lVar12 + 8;
      } while ((uVar11 & 0xffffffff) != uVar3);
    }
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar11 = 0;
      uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar5 = *(long **)(lVar2 + 0x20 + uVar11 * 8);
        if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (plVar5 != (long *)0x0) {
          if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_0918a388 + 0x130)) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_0918a388 + 0x130) * 8 + -8)
              != DAT_0918a388)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar5);
          }
        }
        uVar3 = System_RuntimeType__FilterApplyConstructorInfo(plVar5,param_2);
        lVar12 = DAT_091ae858;
        if ((uVar3 & 1) != 0) {
          if (*(uint *)(lVar2 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (lVar10 == 0) {
LAB_075e18b4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *(long *)(lVar10 + 0x10);
          uVar4 = *(undefined8 *)(lVar2 + 0x20 + uVar11 * 8);
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar6 == 0) goto LAB_075e18b4;
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar10,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = FUN_03f5c394(DAT_091802d0,*(undefined4 *)(lVar10 + 0x18));
    FUN_057e1130(lVar10,lVar2,DAT_091ae860);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x18) == 0)) {
      uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
      lVar2 = FUN_03f5c394(uVar4,1);
      uVar4 = (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
      if (lVar2 != 0) {
        FUN_039b0da0(lVar2,uVar4);
        FUN_039af17c(lVar2,0,uVar4);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091fef78);
        uVar4 = System_Environment__GetResourceString(uVar4,lVar2,0);
        thunk_FUN_03fc39d4(&DAT_091882d0);
        uVar8 = thunk_FUN_03f9944c();
        System_MissingMethodException___ctor(uVar8,uVar4,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091d8228);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,uVar4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_70 = 0;
    if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar5 = (long *)(**(code **)(*param_3 + 0x188))
                               (param_3,param_2,lVar2,&local_68,0,param_5,0,&local_70,
                                *(undefined8 *)(*param_3 + 400));
    uVar11 = System_Reflection_MethodBase__op_Equality(plVar5,0,0);
    if ((uVar11 & 1) != 0) {
      uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
      lVar2 = FUN_03f5c394(uVar4,1);
      uVar4 = (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
      if (lVar2 != 0) {
        FUN_039b0da0(lVar2,uVar4);
        FUN_039af17c(lVar2,0,uVar4);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091fef78);
        uVar4 = System_Environment__GetResourceString(uVar4,lVar2,0);
        thunk_FUN_03fc39d4(&DAT_091882d0);
        uVar8 = thunk_FUN_03f9944c();
        System_MissingMethodException___ctor(uVar8,uVar4,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091d8228);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,uVar4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = (**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar2 + 0x18) == 0) {
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(local_68 + 0x18) != 0) {
        lVar2 = thunk_FUN_03fc39d4(&DAT_09182ff8);
        if (*(int *)(lVar2 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Globalization_CultureInfo__get_CurrentCulture(0);
        uVar8 = thunk_FUN_03fc39d4(&DAT_09212e10);
        uVar8 = System_Environment__GetResourceString(uVar8,0);
        thunk_FUN_03fc39d4(&DAT_091c0270);
        uVar9 = FUN_03eabcb4();
        uVar4 = System_String__Format(uVar4,uVar8,uVar9,0);
        thunk_FUN_03fc39d4(&DAT_09188920);
        uVar8 = thunk_FUN_03f9944c();
        System_NotSupportedException___ctor(uVar8,uVar4,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091d8228);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,uVar4);
      }
      uVar4 = System_Activator__CreateInstance(param_1,1,(param_2 & 0x2000000) == 0);
    }
    else {
      lVar2 = *plVar5;
      if ((*(byte *)(lVar2 + 0x130) < *(byte *)(DAT_09182ac0 + 0x130)) ||
         (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_09182ac0 + 0x130) * 8 + -8) !=
          DAT_09182ac0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar5);
      }
      uVar4 = (**(code **)(lVar2 + 1000))
                        (plVar5,param_2,param_3,local_68,param_5,*(undefined8 *)(lVar2 + 0x3f0));
      if (local_70 != 0) {
        if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*param_3 + 0x1a8))
                  (param_3,&local_68,local_70,*(undefined8 *)(*param_3 + 0x1b0));
      }
    }
  }
  return uVar4;
}


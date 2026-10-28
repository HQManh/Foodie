// rea decompile_all
// name: System.MonoCustomAttrs$$GetBase
// address: 0x760377c
// body: available
// range: 0x760377c-0x7603ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7603974 to 0x7605e60 System.MonoCustomAttrs$$GetBaseEventDefinition (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76039e0 to 0x7605b64 System.MonoCustomAttrs$$GetBasePropertyDefinition (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7603adc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7603ae0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7603ae4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_MonoCustomAttrs__GetBase(long *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  if ((DAT_09521ff3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188228);
    FUN_03f5c2a4(&DAT_09188378);
    FUN_03f5c2a4(&DAT_0918a398);
    FUN_03f5c2a4(&DAT_0918a3b8);
    FUN_03f5c2a4(&DAT_0918a3c8);
    FUN_03f5c2a4(&DAT_0918a3e0);
    DAT_09521ff3 = 1;
  }
  if (param_1 == (long *)0x0) {
    return 0;
  }
  lVar5 = *param_1;
  bVar1 = *(byte *)(lVar5 + 0x130);
  uVar6 = (uint)bVar1;
  if ((*(byte *)(DAT_095354b8 + 0x130) <= bVar1) &&
     (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_095354b8 + 0x130) * 8 + -8) ==
      DAT_095354b8)) {
                    /* WARNING: Could not recover jumptable at 0x0760398c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar5 + 0x8a8))(param_1,*(undefined8 *)(lVar5 + 0x8b0));
    return uVar2;
  }
  uVar7 = (ulong)*(byte *)(DAT_0918a3e0 + 0x130);
  if ((*(byte *)(DAT_0918a3e0 + 0x130) <= bVar1) &&
     (*(long *)(*(long *)(lVar5 + 200) + uVar7 * 8 + -8) == DAT_0918a3e0)) {
    if (*(int *)(DAT_09188378 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar5 = *param_1;
      uVar6 = (uint)*(byte *)(lVar5 + 0x130);
      uVar7 = (ulong)*(byte *)(DAT_0918a3e0 + 0x130);
    }
    if (((uint)uVar7 <= uVar6) &&
       (*(long *)(*(long *)(lVar5 + 200) + uVar7 * 8 + -8) == DAT_0918a3e0)) {
      uVar2 = System_MonoCustomAttrs__GetBasePropertyDefinition(param_1);
      return uVar2;
    }
LAB_07603ad8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_1);
  }
  if (lVar5 == DAT_0918a398) {
    if ((*(int *)(DAT_09188378 + 0xe4) != 0) || (FUN_03f5c424(), *param_1 == DAT_0918a398)) {
      uVar2 = System_MonoCustomAttrs__GetBaseEventDefinition(param_1);
      return uVar2;
    }
    goto LAB_07603ad8;
  }
  if ((bVar1 < *(byte *)(DAT_0918a3b8 + 0x130)) ||
     (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_0918a3b8 + 0x130) * 8 + -8) !=
      DAT_0918a3b8)) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_039bb5f0(param_1,DAT_09188228);
    lVar5 = *param_1;
    uVar6 = (uint)*(byte *)(lVar5 + 0x130);
  }
  if (((*(byte *)(DAT_0918a3c8 + 0x130) <= uVar6) &&
      (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_0918a3c8 + 0x130) * 8 + -8) ==
       DAT_0918a3c8)) &&
     (plVar4 = (long *)(**(code **)(lVar5 + 0x1c8))(param_1,*(undefined8 *)(lVar5 + 0x1d0)),
     plVar4 != (long *)0x0)) {
    if ((*(byte *)(DAT_09188228 + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) ==
        DAT_09188228)) {
      uVar3 = FUN_039bb5f0();
      lVar5 = FUN_039bb5f0(uVar3,DAT_0918a3b8);
      uVar2 = 0;
      if (lVar5 != 0) {
        uVar2 = FUN_039bb5f0(uVar3,DAT_0918a3b8);
        plVar4 = (long *)System_Reflection_RuntimeMethodInfo__GetBaseMethod(uVar2,0);
        uVar7 = System_Reflection_MethodInfo__op_Equality(plVar4,uVar3,0);
        uVar2 = 0;
        if ((uVar7 & 1) != 0) {
          return 0;
        }
        if (plVar4 != (long *)0x0) {
          lVar5 = (**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(*plVar4 + 0x260));
          uVar2 = (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
          if (lVar5 != 0) {
            if ((uint)uVar2 < *(uint *)(lVar5 + 0x18)) {
              return *(undefined8 *)(lVar5 + (long)(int)(uint)uVar2 * 8 + 0x20);
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
        }
      }
      goto LAB_07603ae0;
    }
  }
  uVar7 = System_Reflection_MethodInfo__op_Equality(lVar8,0,0);
  uVar2 = 0;
  if ((uVar7 & 1) == 0) {
    if (lVar8 == 0) {
LAB_07603ae0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar2);
    }
    uVar7 = System_Reflection_MethodBase__get_IsVirtual(lVar8,0);
    uVar2 = 0;
    if ((uVar7 & 1) != 0) {
      lVar5 = FUN_039bb5f0(lVar8,DAT_0918a3b8);
      uVar2 = 0;
      if (lVar5 == 0) goto LAB_07603ae0;
      uVar2 = FUN_039bb5f0(lVar8,DAT_0918a3b8);
      uVar3 = System_Reflection_RuntimeMethodInfo__GetBaseMethod(uVar2,0);
      uVar7 = System_Reflection_MethodInfo__op_Equality(uVar3,lVar8,0);
      uVar2 = 0;
      if ((uVar7 & 1) == 0) {
        uVar2 = uVar3;
      }
    }
  }
  return uVar2;
}


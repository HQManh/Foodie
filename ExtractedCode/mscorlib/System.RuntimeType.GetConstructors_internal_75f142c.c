// rea decompile_all
// name: System.RuntimeType$$GetConstructors_internal
// address: 0x75f142c
// body: available
// range: 0x75f142c-0x75f15ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f15e8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f15ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f15f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f15fc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_RuntimeType__GetConstructors_internal
                 (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((DAT_09521f66 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180488);
    FUN_03f5c2a4(&DAT_0918a388);
    DAT_09521f66 = 1;
  }
  local_38 = 0;
  local_48 = 0;
  System_RuntimeTypeHandle___ctor(&local_38,param_3,0);
  uVar2 = FUN_03f6c7e0(param_1,param_2);
  Mono_SafeGPtrArrayHandle___ctor(&local_48,uVar2,0);
  uVar1 = Mono_SafeGPtrArrayHandle__get_Length(&local_48,0);
  plVar3 = (long *)FUN_03f5c394(DAT_09180488,(ulong)uVar1);
  if (0 < (int)uVar1) {
    uVar6 = 0;
    lVar7 = 0x20;
    do {
      uVar2 = Mono_RuntimeGPtrArrayHandle__Lookup(&local_48,uVar6 & 0xffffffff,0);
      plVar4 = (long *)System_Reflection_RuntimeMethodInfo__GetMethodFromHandleNoGenericCheck
                                 (uVar2,local_38,0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (plVar4 != (long *)0x0) {
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_0918a388 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918a388 + 0x130) * 8 + -8) !=
            DAT_0918a388)) {
LAB_075f15e4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar4);
        }
        lVar5 = thunk_FUN_03f99350(plVar4,*(undefined8 *)(*plVar3 + 0x40));
        if (lVar5 == 0) {
          uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar2,0);
        }
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_0918a388 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918a388 + 0x130) * 8 + -8) !=
            DAT_0918a388)) goto LAB_075f15e4;
      }
      if (*(uint *)(plVar3 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar3[uVar6 + 4] = (long)plVar4;
      thunk_FUN_03f5d7b8((long)plVar3 + lVar7,plVar4);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar1 != uVar6);
  }
  Mono_SafeGPtrArrayHandle__Dispose(&local_48,0);
  return plVar3;
}


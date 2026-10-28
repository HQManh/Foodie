// rea decompile_all
// name: System.RuntimeType$$GetNestedTypes_internal
// address: 0x75f25e8
// body: available
// range: 0x75f25e8-0x75f28b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f2888 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f288c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f2890 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f289c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f28a4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f28ac to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f28b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x075f28a8) */
/* WARNING: Removing unreachable block (ram,0x075f28a0) */

long * System_RuntimeType__GetNestedTypes_internal
                 (undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_09521f6c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091804c0);
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_0918c248);
    DAT_09521f6c = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    plVar2 = (long *)System_TypeIdentifiers__FromDisplay(param_2,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0918c248) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_075f26c0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0918c248,0);
LAB_075f26c0:
    uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  Mono_SafeStringMarshal___ctor(&local_50,uVar4,0);
  uVar4 = Mono_SafeStringMarshal__get_Value(&local_50,0);
  uVar4 = FUN_03f6dc34(param_1,uVar4,param_3,param_4);
  Mono_SafeGPtrArrayHandle___ctor(&local_58,uVar4,0);
  uVar1 = Mono_SafeGPtrArrayHandle__get_Length(&local_58,0);
  plVar2 = (long *)FUN_03f5c394(DAT_091804c0,(ulong)uVar1);
  if (0 < (int)uVar1) {
    uVar8 = 0;
    lVar7 = 0x20;
    do {
      uVar4 = Mono_RuntimeGPtrArrayHandle__Lookup(&local_58,uVar8 & 0xffffffff,0);
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar5 = (long *)System_Type__GetTypeFromHandle(uVar4,0);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (plVar5 != (long *)0x0) {
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
            DAT_0918a400)) {
LAB_075f2884:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar5);
        }
        lVar6 = thunk_FUN_03f99350(plVar5,*(undefined8 *)(*plVar2 + 0x40));
        if (lVar6 == 0) {
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
            DAT_0918a400)) goto LAB_075f2884;
      }
      if (*(uint *)(plVar2 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar2[uVar8 + 4] = (long)plVar5;
      thunk_FUN_03f5d7b8((long)plVar2 + lVar7,plVar5);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar1 != uVar8);
  }
  Mono_SafeGPtrArrayHandle__Dispose(&local_58,0);
  Mono_SafeStringMarshal__Dispose(&local_50,0);
  return plVar2;
}


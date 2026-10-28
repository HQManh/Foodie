// rea decompile_all
// name: System.Attribute$$Equals
// address: 0x75e3b28
// body: available
// range: 0x75e3b28-0x75e3d5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e3d44 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e3d48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e3d4c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e3d54 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e3d5c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Attribute__Equals(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  if ((DAT_09521ede & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a348);
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521ede = 1;
  }
  if (param_2 != 0) {
    plVar3 = (long *)System_Object__GetType(param_1,0);
    if (plVar3 != (long *)0x0) {
      if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
          DAT_0918a400)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar3);
      }
    }
    plVar4 = (long *)System_Object__GetType(param_2,0);
    if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918a400);
    }
    if (plVar4 != (long *)0x0) {
      if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
          DAT_0918a400)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar4);
      }
    }
    if (plVar4 == plVar3) {
      if ((plVar3 == (long *)0x0) ||
         (lVar5 = (**(code **)(*plVar3 + 0x708))(plVar3,0x34,*(undefined8 *)(*plVar3 + 0x710)),
         lVar5 == 0)) {
LAB_075e3d48:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if ((int)uVar1 < 1) {
        uVar2 = 1;
      }
      else {
        lVar9 = 0;
        do {
          if (uVar1 <= (uint)lVar9) {
LAB_075e3d4c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar3 = *(long **)(lVar5 + 0x20 + lVar9 * 8);
          if (plVar3 == (long *)0x0) goto LAB_075e3d48;
          lVar8 = *plVar3;
          if ((*(byte *)(lVar8 + 0x130) < *(byte *)(DAT_0918a348 + 0x130)) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(DAT_0918a348 + 0x130) * 8 + -8) !=
              DAT_0918a348)) {
LAB_075e3d44:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0();
          }
          uVar6 = (**(code **)(lVar8 + 0x358))(plVar3,param_1,*(undefined8 *)(lVar8 + 0x360));
          if (*(uint *)(lVar5 + 0x18) <= (uint)lVar9) goto LAB_075e3d4c;
          plVar3 = *(long **)(lVar5 + 0x20 + lVar9 * 8);
          if (plVar3 == (long *)0x0) goto LAB_075e3d48;
          lVar8 = *plVar3;
          if ((*(byte *)(lVar8 + 0x130) < *(byte *)(DAT_0918a348 + 0x130)) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(DAT_0918a348 + 0x130) * 8 + -8) !=
              DAT_0918a348)) goto LAB_075e3d44;
          uVar7 = (**(code **)(lVar8 + 0x358))(plVar3,param_2,*(undefined8 *)(lVar8 + 0x360));
          uVar2 = System_Attribute__AreFieldValuesEqual(uVar6,uVar7);
          if ((uVar2 & 1) == 0) break;
          uVar1 = *(uint *)(lVar5 + 0x18);
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < (int)uVar1);
      }
      goto LAB_075e3c20;
    }
  }
  uVar2 = 0;
LAB_075e3c20:
  return uVar2 & 1;
}


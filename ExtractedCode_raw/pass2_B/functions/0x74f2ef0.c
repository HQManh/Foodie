// rea decompile_all
// name: System.Reflection.RuntimePropertyInfo$$GetIndexParameters
// address: 0x74f2ef0
// body: available
// range: 0x74f2ef0-0x74f308f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74f307c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74f3080 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74f308c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Reflection_RuntimePropertyInfo__GetIndexParameters(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  if ((DAT_0952163c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09177318);
    FUN_03f5c2a4(&DAT_09180370);
    DAT_0952163c = 1;
  }
  if (((*(uint *)(param_1 + 0x50) ^ 0xffffffff) & 6) != 0) {
    FUN_03f68098(param_1,param_1 + 0x20,6);
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 6;
  }
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 == (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 == (long *)0x0) {
      if (*(int *)(DAT_09177318 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      return (long *)**(undefined8 **)(DAT_09177318 + 0xb8);
    }
    lVar2 = (**(code **)(*plVar1 + 0x398))(plVar1,*(undefined8 *)(*plVar1 + 0x3a0));
    if (lVar2 != 0) {
      uVar6 = *(int *)(lVar2 + 0x18) - 1;
      goto LAB_074f2fac;
    }
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0x398))(plVar1,*(undefined8 *)(*plVar1 + 0x3a0));
    if (lVar2 != 0) {
      uVar6 = *(uint *)(lVar2 + 0x18);
LAB_074f2fac:
      plVar1 = (long *)FUN_03f5c394(DAT_09180370,uVar6);
      if (0 < (int)uVar6) {
        uVar7 = 0;
        lVar8 = 0x20;
        do {
          if (*(uint *)(lVar2 + 0x18) <= uVar7) {
LAB_074f307c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar3 = System_Reflection_RuntimeParameterInfo__New
                            (*(undefined8 *)(lVar2 + lVar8),param_1);
          if (plVar1 == (long *)0x0) goto LAB_074f3080;
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0)) {
            uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,0);
          }
          if (*(uint *)(plVar1 + 3) <= uVar7) goto LAB_074f307c;
          *(long *)((long)plVar1 + lVar8) = lVar3;
          thunk_FUN_03f5d7b8((long)plVar1 + lVar8,lVar3);
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 8;
        } while (uVar6 != uVar7);
      }
      return plVar1;
    }
  }
LAB_074f3080:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


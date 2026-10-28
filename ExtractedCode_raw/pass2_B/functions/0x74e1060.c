// rea decompile_all
// name: System.Reflection.MethodBase$$GetParameterTypes
// address: 0x74e1060
// body: available
// range: 0x74e1060-0x74e116b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e1158 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e115c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e1168 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Reflection_MethodBase__GetParameterTypes(long *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  
  if ((DAT_09521596 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09521596 = 1;
  }
  lVar2 = (**(code **)(*param_1 + 0x3d8))(param_1,*(undefined8 *)(*param_1 + 0x3e0));
  if (lVar2 != 0) {
    plVar3 = (long *)FUN_03f5c394(DAT_09180748,*(undefined4 *)(lVar2 + 0x18));
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      lVar9 = 0x20;
      do {
        if (uVar1 <= uVar8) {
LAB_074e115c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar4 = *(long **)(lVar2 + lVar9);
        if (plVar4 == (long *)0x0) goto LAB_074e1158;
        lVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
        if (plVar3 == (long *)0x0) goto LAB_074e1158;
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
          uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar7,0);
        }
        if (*(uint *)(plVar3 + 3) <= uVar8) goto LAB_074e115c;
        *(long *)((long)plVar3 + lVar9) = lVar5;
        thunk_FUN_03f5d7b8((long)plVar3 + lVar9,lVar5);
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      } while ((int)uVar8 < (int)uVar1);
    }
    return plVar3;
  }
LAB_074e1158:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


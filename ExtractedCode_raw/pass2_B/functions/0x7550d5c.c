// rea decompile_all
// name: System.Collections.Comparer$$Compare
// address: 0x7550d5c
// body: available
// range: 0x7550d5c-0x7550f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7550f0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7550f54 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Collections_Comparer__Compare(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  
  if ((DAT_09521936 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091857f8);
    DAT_09521936 = 1;
  }
  if (param_2 == param_3) {
    uVar3 = 0;
  }
  else if (param_2 == (long *)0x0) {
    uVar3 = 0xffffffff;
  }
  else if (param_3 == (long *)0x0) {
    uVar3 = 1;
  }
  else {
    plVar4 = param_2;
    if (*param_2 != DAT_09535468) {
      plVar4 = (long *)0x0;
    }
    plVar1 = param_3;
    if (*param_3 != DAT_09535468) {
      plVar1 = (long *)0x0;
    }
    if ((plVar4 != (long *)0x0) && (plVar1 != (long *)0x0)) {
      if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07550dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x198))();
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar4 = (long *)thunk_FUN_03f99350(param_2,DAT_091857f8);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091857f8) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07550ec0;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_091857f8,0);
LAB_07550ec0:
                    /* WARNING: Could not recover jumptable at 0x07550ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
      return uVar3;
    }
    plVar4 = (long *)thunk_FUN_03f99350(param_3);
    if (plVar4 == (long *)0x0) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar6 = thunk_FUN_03f9944c();
      uVar7 = thunk_FUN_03fc39d4(&DAT_091fc148);
      System_ArgumentException___ctor(uVar6,uVar7,0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091c5250);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,uVar7);
    }
    lVar8 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091857f8) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07550ee8;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_091857f8,0);
LAB_07550ee8:
    iVar2 = (*(code *)*puVar5)(plVar4,param_2,puVar5[1]);
    uVar3 = (ulong)(uint)-iVar2;
  }
  return uVar3;
}


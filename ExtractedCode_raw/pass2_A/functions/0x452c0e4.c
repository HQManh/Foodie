// rea decompile_all
// name: Utilities.UINumberCounterAbstract.<IETweenCurrentCount>d__19$$MoveNext
// address: 0x452c0e4
// body: available
// range: 0x452c0e4-0x452c23f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452c23c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Utilities_UINumberCounterAbstract_<IETweenCurrentCount>d__19__MoveNext(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  plVar4 = *(long **)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar4 == (long *)0x0) goto LAB_0452c23c;
    fVar5 = ABS((float)*(int *)(param_1 + 0x28) - *(float *)(plVar4 + 8)) / *(float *)(plVar4 + 7);
    if (*(float *)((long)plVar4 + 0x3c) <= fVar5) {
      fVar5 = *(float *)((long)plVar4 + 0x3c);
    }
    *(float *)(param_1 + 0x38) = fVar5;
    uVar6 = UnityEngine_Time__get_unscaledTime(0);
    lVar3 = plVar4[8];
    *(undefined4 *)(param_1 + 0x3c) = uVar6;
    *(int *)(param_1 + 0x40) = (int)lVar3;
    *(float *)(param_1 + 0x44) = (float)*(int *)(param_1 + 0x28);
  }
  fVar5 = (float)UnityEngine_Time__get_unscaledTime(0);
  if (fVar5 - *(float *)(param_1 + 0x3c) < *(float *)(param_1 + 0x38)) {
    fVar5 = (float)UnityEngine_Time__get_unscaledTime(0);
    if (plVar4 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar4 + 0x1a8);
      uVar2 = *(undefined8 *)(*plVar4 + 0x1b0);
      fVar7 = (fVar5 - *(float *)(param_1 + 0x3c)) / *(float *)(param_1 + 0x38);
      fVar5 = 1.0;
      if (fVar7 <= 1.0) {
        fVar5 = fVar7;
      }
      fVar8 = 0.0;
      if (0.0 <= fVar7) {
        fVar8 = fVar5;
      }
      *(float *)(plVar4 + 8) =
           *(float *)(param_1 + 0x40) +
           (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x40)) * fVar8;
      (*pcVar1)(plVar4,uVar2);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  else if (plVar4 != (long *)0x0) {
    pcVar1 = *(code **)(*plVar4 + 0x1a8);
    uVar2 = *(undefined8 *)(*plVar4 + 0x1b0);
    *(float *)(plVar4 + 8) = (float)*(int *)(param_1 + 0x28);
    (*pcVar1)(plVar4,uVar2);
    plVar4[9] = 0;
    thunk_FUN_03f5d7b8(plVar4 + 9,0);
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    }
    return 0;
  }
LAB_0452c23c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


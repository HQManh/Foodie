// rea decompile_all
// name: Utilities.UIImageFadeCycling.<FadeIn>d__13$$MoveNext
// address: 0x452a640
// body: available
// range: 0x452a640-0x452a78b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452a788 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_UIImageFadeCycling_<FadeIn>d__13__MoveNext
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long param_5)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = *(long *)(param_5 + 0x28);
  if (*(int *)(param_5 + 0x10) == 1) {
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_5 + 0x10) != 0) {
      return 0;
    }
    plVar1 = *(long **)(param_5 + 0x20);
    *(undefined4 *)(param_5 + 0x30) = 0;
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if (plVar1 == (long *)0x0) goto LAB_0452a788;
    uVar3 = (**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*plVar1 + 0x2a0));
    *(undefined4 *)(param_5 + 0x34) = uVar3;
    *(undefined4 *)(param_5 + 0x38) = param_2;
    *(undefined4 *)(param_5 + 0x3c) = param_3;
    *(undefined4 *)(param_5 + 0x40) = param_4;
    *(undefined4 *)(param_5 + 0x44) = param_4;
  }
  if (lVar2 != 0) {
    fVar6 = *(float *)(param_5 + 0x30);
    if (fVar6 < *(float *)(lVar2 + 0x20)) {
      if (*(char *)(lVar2 + 0x48) == '\0') {
        fVar4 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
      }
      else {
        fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
      }
      fVar6 = fVar6 + fVar4;
      plVar1 = *(long **)(param_5 + 0x20);
      fVar4 = fVar6 / *(float *)(lVar2 + 0x20);
      *(float *)(param_5 + 0x30) = fVar6;
      fVar6 = 1.0;
      if (fVar4 <= 1.0) {
        fVar6 = fVar4;
      }
      fVar5 = 0.0;
      if (0.0 <= fVar4) {
        fVar5 = fVar6;
      }
      *(float *)(param_5 + 0x40) =
           *(float *)(param_5 + 0x44) + (1.0 - *(float *)(param_5 + 0x44)) * fVar5;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x2a8))
                  (*(undefined4 *)(param_5 + 0x34),*(undefined4 *)(param_5 + 0x38),
                   *(undefined4 *)(param_5 + 0x3c),plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
        *(undefined8 *)(param_5 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0x18),0);
        *(undefined4 *)(param_5 + 0x10) = 1;
        return 1;
      }
    }
    else {
      plVar1 = *(long **)(param_5 + 0x20);
      *(undefined4 *)(param_5 + 0x40) = 0x3f800000;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x2a8))
                  (*(undefined4 *)(param_5 + 0x34),*(undefined4 *)(param_5 + 0x38),
                   *(undefined4 *)(param_5 + 0x3c),0x3f800000,plVar1,
                   *(undefined8 *)(*plVar1 + 0x2b0));
        return 0;
      }
    }
  }
LAB_0452a788:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: Utilities.LoopAnimRotateSeparatedAxis$$Update
// address: 0x44f49c0
// body: available
// range: 0x44f49c0-0x44f4b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44f4b10 to 0x866cf2c UnityEngine.Transform$$set_localEulerAngles (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44f4b14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_LoopAnimRotateSeparatedAxis__Update(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float __y;
  float fVar4;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar1 = (float)UnityEngine_Time__get_unscaledTime(0);
    fVar2 = *(float *)(param_1 + 0x24);
    fVar1 = fmodf(fVar1 + *(float *)(param_1 + 0x4c),fVar2);
    fVar1 = fVar1 / fVar2;
    fVar2 = (float)UnityEngine_Time__get_unscaledTime(0);
    fVar3 = *(float *)(param_1 + 0x28);
    fVar2 = fmodf(fVar2 + *(float *)(param_1 + 0x50),fVar3);
    fVar2 = fVar2 / fVar3;
    fVar3 = (float)UnityEngine_Time__get_unscaledTime(0);
  }
  else {
    fVar1 = (float)UnityEngine_Time__get_time(0);
    fVar2 = *(float *)(param_1 + 0x24);
    fVar1 = fmodf(fVar1 + *(float *)(param_1 + 0x4c),fVar2);
    fVar1 = fVar1 / fVar2;
    fVar2 = (float)UnityEngine_Time__get_time(0);
    fVar3 = *(float *)(param_1 + 0x28);
    fVar2 = fmodf(fVar2 + *(float *)(param_1 + 0x50),fVar3);
    fVar2 = fVar2 / fVar3;
    fVar3 = (float)UnityEngine_Time__get_time(0);
  }
  __y = *(float *)(param_1 + 0x2c);
  fVar3 = fmodf(fVar3 + *(float *)(param_1 + 0x54),__y);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x68);
  if (*(long *)(param_1 + 0x30) != 0) {
    fVar4 = *(float *)(param_1 + 0x6c);
    fVar1 = (float)UnityEngine_AnimationCurve__Evaluate(fVar1,*(long *)(param_1 + 0x30),0);
    *(float *)(param_1 + 0x6c) = fVar4 + fVar1;
    if (*(long *)(param_1 + 0x38) != 0) {
      fVar4 = *(float *)(param_1 + 0x70);
      fVar1 = (float)UnityEngine_AnimationCurve__Evaluate(fVar2,*(long *)(param_1 + 0x38),0);
      *(float *)(param_1 + 0x70) = fVar4 + fVar1;
      if (*(long *)(param_1 + 0x40) != 0) {
        fVar2 = *(float *)(param_1 + 0x74);
        fVar1 = (float)UnityEngine_AnimationCurve__Evaluate(fVar3 / __y,*(long *)(param_1 + 0x40),0)
        ;
        *(float *)(param_1 + 0x74) = fVar2 + fVar1;
        if (*(long *)(param_1 + 0x58) != 0) {
          UnityEngine_Transform__set_localEulerAngles
                    (*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),
                     *(long *)(param_1 + 0x58),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


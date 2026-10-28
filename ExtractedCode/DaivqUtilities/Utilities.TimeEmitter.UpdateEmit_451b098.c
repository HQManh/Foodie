// rea decompile_all
// name: Utilities.TimeEmitter$$UpdateEmit
// address: 0x451b098
// body: available
// range: 0x451b098-0x451b243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x451b220 to 0x451b010 Utilities.TimeEmitter$$UpdateTimeBurst (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x451b238 to 0x8655d28 UnityEngine.Behaviour$$set_enabled (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x451b23c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451b240 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_TimeEmitter__UpdateEmit(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_1 + 0x50);
  if (*(char *)(param_1 + 0x48) == '\0') {
    fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
  }
  else {
    fVar4 = (float)UnityEngine_Time__get_unscaledDeltaTime();
  }
  fVar6 = fVar6 + fVar4 * *(float *)(param_1 + 0x4c);
  fVar4 = *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x50) = fVar6;
  if (fVar4 < fVar6) {
    if (*(char *)(param_1 + 0x24) == '\0') {
      UnityEngine_Behaviour__set_enabled(param_1,0,0);
      return;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    fVar6 = fVar6 - fVar4 * (float)(int)(fVar6 / fVar4);
    if (fVar6 <= fVar4) {
      fVar4 = fVar6;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar6) {
      fVar5 = fVar4;
    }
    *(float *)(param_1 + 0x50) = fVar5;
    Utilities_TimeEmitter__UpdateTimeBurst(param_1);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    fVar4 = *(float *)(param_1 + 0x28);
    fVar6 = (float)UnityEngine_AnimationCurve__Evaluate
                             (*(float *)(param_1 + 0x50) / *(float *)(param_1 + 0x20),
                              *(long *)(param_1 + 0x30),0);
    fVar4 = fVar4 * fVar6;
    if ((0.0 < fVar4) && (1.0 / fVar4 + *(float *)(param_1 + 0x54) < *(float *)(param_1 + 0x50))) {
      lVar2 = *(long *)(param_1 + 0x60);
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x50);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      }
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      if ((*(int *)(*(long *)(param_1 + 0x38) + 0x18) <= *(int *)(param_1 + 0x58)) ||
         (*(float *)(param_1 + 0x50) < *(float *)(param_1 + 0x5c))) {
        return;
      }
      fVar6 = (float)UnityEngine_Random__get_value(0);
      lVar2 = *(long *)(param_1 + 0x38);
      if (lVar2 != 0) {
        uVar1 = *(uint *)(param_1 + 0x58);
        if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar2 = *(long *)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
        if (lVar2 != 0) {
          if ((fVar6 < *(float *)(lVar2 + 0x18)) && (lVar3 = *(long *)(param_1 + 0x68), lVar3 != 0))
          {
            (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(lVar3 + 0x40),*(undefined4 *)(lVar2 + 0x14),
                       *(undefined8 *)(lVar3 + 0x28));
            uVar1 = *(uint *)(param_1 + 0x58);
          }
          *(uint *)(param_1 + 0x58) = uVar1 + 1;
          Utilities_TimeEmitter__UpdateTimeBurst(param_1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


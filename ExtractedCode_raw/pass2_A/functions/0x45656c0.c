// rea decompile_all
// name: DG.Tweening.Plugins.QuaternionPlugin$$SetChangeValue
// address: 0x45656c0
// body: available
// range: 0x45656c0-0x456584f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456584c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_QuaternionPlugin__SetChangeValue(undefined8 param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float __x;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  fVar5 = *(float *)(param_2 + 0x130);
  __x = *(float *)(param_2 + 0x134);
  fVar4 = *(float *)(param_2 + 0x138);
  if (*(char *)(param_2 + 0x98) == '\0') {
    fVar5 = (float)DG_Tweening_Plugins_QuaternionPlugin__GetEulerValForCalculations
                             (fVar5,__x,fVar4,*(undefined4 *)(param_2 + 0x124),
                              *(undefined4 *)(param_2 + 0x128),*(undefined4 *)(param_2 + 300),
                              param_1,param_2);
  }
  fVar8 = *(float *)(param_2 + 0x124);
  fVar7 = *(float *)(param_2 + 0x128);
  fVar6 = *(float *)(param_2 + 300);
  if (*(int *)(param_2 + 0x148) != 1) {
    if (*(int *)(param_2 + 0x148) == 0) {
      if (*(char *)(param_2 + 0xb0) == '\0') {
        fVar1 = fmodf(fVar5,360.0);
        fVar2 = fVar1;
        if (360.0 <= fVar5) {
          fVar2 = fVar5;
        }
        if (fVar5 <= 360.0) {
          fVar1 = fVar2;
        }
        fVar2 = fmodf(__x,360.0);
        fVar5 = fVar2;
        if (360.0 <= __x) {
          fVar5 = __x;
        }
        if (__x <= 360.0) {
          fVar2 = fVar5;
        }
        fVar3 = fmodf(fVar4,360.0);
        fVar1 = fVar1 - fVar8;
        fVar2 = fVar2 - fVar7;
        fVar5 = fVar3;
        if (360.0 <= fVar4) {
          fVar5 = fVar4;
        }
        if (fVar4 <= 360.0) {
          fVar3 = fVar5;
        }
        fVar4 = fVar1;
        if (fVar1 <= 0.0) {
          fVar4 = -fVar1;
        }
        fVar3 = fVar3 - fVar6;
        fVar5 = -(360.0 - fVar1);
        if (fVar1 <= 0.0) {
          fVar5 = fVar1 + 360.0;
        }
        if (fVar4 <= 180.0) {
          fVar5 = fVar1;
        }
        __x = -(360.0 - fVar2);
        fVar4 = fVar2;
        if (fVar2 <= 0.0) {
          __x = fVar2 + 360.0;
          fVar4 = -fVar2;
        }
        if (fVar4 <= 180.0) {
          __x = fVar2;
        }
        fVar4 = -(360.0 - fVar3);
        fVar6 = fVar3;
        if (fVar3 <= 0.0) {
          fVar4 = fVar3 + 360.0;
          fVar6 = -fVar3;
        }
        if (fVar6 <= 180.0) {
          fVar4 = fVar3;
        }
        goto LAB_04565828;
      }
    }
    else if (*(char *)(param_2 + 0xb0) == '\0') goto LAB_04565828;
  }
  fVar5 = fVar5 - fVar8;
  __x = __x - fVar7;
  fVar4 = fVar4 - fVar6;
LAB_04565828:
  *(float *)(param_2 + 0x13c) = fVar5;
  *(float *)(param_2 + 0x140) = __x;
  *(float *)(param_2 + 0x144) = fVar4;
  return;
}


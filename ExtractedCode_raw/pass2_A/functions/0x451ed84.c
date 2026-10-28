// rea decompile_all
// name: Utilities.SwipeDetectUI$$OnPointerUp
// address: 0x451ed84
// body: available
// range: 0x451ed84-0x451f0df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_SwipeDetectUI__OnPointerUp(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_8c;
  
  fVar2 = (float)UnityEngine_Input__get_mousePosition(0);
  fVar3 = (float)UnityEngine_Screen__get_dpi(0);
  if (fVar3 <= 0.0) {
    local_8c = 96.0;
  }
  else {
    local_8c = (float)UnityEngine_Screen__get_dpi(0);
  }
  fVar3 = *(float *)(param_3 + 0x38);
  fVar5 = *(float *)(param_3 + 0x3c);
  if (DAT_09516ea4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09516ea4 = '\x01';
  }
  fVar2 = fVar2 - fVar3;
  param_2 = param_2 - fVar5;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09516db4 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09516db4 = '\x01';
  }
  fVar3 = fVar2 * fVar2 + param_2 * param_2;
  fVar5 = *(float *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x28);
  fVar9 = *(float *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x2c);
  if (DAT_095185d5 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095185d5 = '\x01';
  }
  fVar8 = 0.0;
  fVar6 = fVar3 * (fVar5 * fVar5 + fVar9 * fVar9);
  if (1e-30 <= fVar6) {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar9 = (fVar2 * fVar5 + param_2 * fVar9) / SQRT(fVar6);
    fVar5 = 1.0;
    if (fVar9 <= 1.0) {
      fVar5 = fVar9;
    }
    fVar8 = -1.0;
    if (-1.0 <= fVar9) {
      fVar8 = fVar5;
    }
    dVar4 = acos((double)fVar8);
    fVar8 = (float)dVar4 * 57.29578;
  }
  if (DAT_09516db3 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09516db3 = '\x01';
  }
  fVar5 = *(float *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x20);
  fVar9 = *(float *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x24);
  if (DAT_095185d5 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095185d5 = '\x01';
  }
  fVar6 = (SQRT(fVar3) / local_8c) * 2.54;
  fVar3 = fVar3 * (fVar5 * fVar5 + fVar9 * fVar9);
  fVar7 = 0.0;
  if (1e-30 <= fVar3) {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar5 = (fVar2 * fVar5 + param_2 * fVar9) / SQRT(fVar3);
    fVar3 = 1.0;
    if (fVar5 <= 1.0) {
      fVar3 = fVar5;
    }
    fVar9 = -1.0;
    if (-1.0 <= fVar5) {
      fVar9 = fVar3;
    }
    dVar4 = acos((double)fVar9);
    fVar7 = (float)dVar4 * 57.29578;
  }
  fVar3 = (float)UnityEngine_Time__get_unscaledTime(0);
  fVar3 = fVar3 - *(float *)(param_3 + 0x34);
  if (*(float *)(param_3 + 0x24) < fVar6) {
    if (fVar7 <= fVar8) {
      fVar8 = fVar7;
    }
    if (((ABS(fVar8) < *(float *)(param_3 + 0x30)) || (*(char *)(param_3 + 0x2c) == '\0')) &&
       (fVar3 < *(float *)(param_3 + 0x20))) {
      lVar1 = *(long *)(param_3 + 0x40);
      if (lVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0451f0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))
                (fVar2,param_2,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  if (((fVar6 < *(float *)(param_3 + 0x28)) && (fVar3 < *(float *)(param_3 + 0x20))) &&
     (lVar1 = *(long *)(param_3 + 0x48), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0451f070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}


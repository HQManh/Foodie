// rea decompile_all
// name: Utilities.SafeAreaNotchFix$$ShouldRefresh
// address: 0x451deb0
// body: available
// range: 0x451deb0-0x451e0ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Utilities_SafeAreaNotchFix__ShouldRefresh
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_095185a4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_095185a4 = 1;
  }
  iVar1 = *(int *)(param_5 + 0x40);
  iVar2 = UnityEngine_Screen__get_width(0);
  if (((iVar1 == iVar2) &&
      (iVar1 = *(int *)(param_5 + 0x44), iVar2 = UnityEngine_Screen__get_height(0), iVar1 == iVar2))
     && (iVar1 = *(int *)(param_5 + 0x48), iVar2 = UnityEngine_Screen__get_orientation(0),
        iVar1 == iVar2)) {
    fVar5 = (float)UnityEngine_Screen__get_safeArea(0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar9 = *(float *)(param_5 + 0x30);
    if (DAT_09515cee == '\0') {
      FUN_03f5c2a4(&DAT_09187e98);
      DAT_09515cee = '\x01';
    }
    fVar6 = ABS(fVar9);
    if (fVar6 <= ABS(fVar5)) {
      fVar6 = ABS(fVar5);
    }
    fVar7 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
    fVar8 = fVar6 * 1e-06;
    if (fVar6 * 1e-06 <= fVar7) {
      fVar8 = fVar7;
    }
    if (ABS(fVar5 - fVar9) < fVar8) {
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
        fVar5 = *(float *)(param_5 + 0x34);
        if (DAT_09515cee == '\0') {
          FUN_03f5c2a4(&DAT_09187e98);
          DAT_09515cee = '\x01';
        }
      }
      else {
        fVar5 = *(float *)(param_5 + 0x34);
      }
      fVar9 = ABS(fVar5);
      if (ABS(fVar5) <= ABS(param_2)) {
        fVar9 = ABS(param_2);
      }
      fVar8 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
      fVar6 = fVar9 * 1e-06;
      if (fVar9 * 1e-06 <= fVar8) {
        fVar6 = fVar8;
      }
      if (ABS(param_2 - fVar5) < fVar6) {
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = FUN_04406560(*(undefined4 *)(param_5 + 0x38),param_3,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = FUN_04406560(*(undefined4 *)(param_5 + 0x3c),param_4,0);
          uVar3 = uVar3 ^ 1;
          goto LAB_0451e08c;
        }
      }
    }
  }
  uVar3 = 1;
LAB_0451e08c:
  return uVar3 & 1;
}


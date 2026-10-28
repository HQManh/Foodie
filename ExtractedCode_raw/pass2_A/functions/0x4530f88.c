// rea decompile_all
// name: Utilities.UI.UICardFlowLayoutControl$$ApplyContentHeight
// address: 0x4530f88
// body: available
// range: 0x4530f88-0x4531163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4531160 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UI_UICardFlowLayoutControl__ApplyContentHeight
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_0951863c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_0951863c = 1;
  }
  fVar7 = ABS(param_1);
  if (*(char *)(param_5 + 0x45) != '\0') {
    uVar3 = *(undefined8 *)(param_5 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_5 + 0x20) == 0) {
LAB_04531160:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x20),0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09515cee == '\0') {
        FUN_03f5c2a4(&DAT_09187e98);
        DAT_09515cee = '\x01';
      }
      fVar4 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
      fVar6 = ABS(param_4);
      if (ABS(param_4) <= fVar7) {
        fVar6 = fVar7;
      }
      fVar5 = fVar6 * 1e-06;
      if (fVar6 * 1e-06 <= fVar4) {
        fVar5 = fVar4;
      }
      if (fVar5 <= ABS(param_1 - param_4)) {
        if (*(long *)(param_5 + 0x20) == 0) goto LAB_04531160;
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors(param_1,*(long *)(param_5 + 0x20),1,0);
      }
    }
  }
  fVar6 = *(float *)(param_5 + 0x50);
  if (DAT_09515cee == '\0') {
    FUN_03f5c2a4(&DAT_09187e98);
    DAT_09515cee = '\x01';
  }
  fVar4 = ABS(fVar6);
  fVar5 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
  if (fVar4 <= fVar7) {
    fVar4 = fVar7;
  }
  fVar7 = fVar4 * 1e-06;
  if (fVar4 * 1e-06 <= fVar5) {
    fVar7 = fVar5;
  }
  if (fVar7 <= ABS(param_1 - fVar6)) {
    lVar2 = *(long *)(param_5 + 0x58);
    *(float *)(param_5 + 0x50) = param_1;
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04531144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))
                (param_1,*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
  return;
}


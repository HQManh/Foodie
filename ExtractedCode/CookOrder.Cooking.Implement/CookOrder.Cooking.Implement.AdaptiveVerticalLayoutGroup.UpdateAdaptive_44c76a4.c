// rea decompile_all
// name: CookOrder.Cooking.Implement.AdaptiveVerticalLayoutGroup$$UpdateAdaptive
// address: 0x44c76a4
// body: available
// range: 0x44c76a4-0x44c775b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c7754 to 0x899fe34 UnityEngine.UI.HorizontalOrVerticalLayoutGroup$$set_spacing (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44c7758 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_AdaptiveVerticalLayoutGroup__UpdateAdaptive(long param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_0951828b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af770);
    DAT_0951828b = 1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    iVar1 = *(int *)(param_1 + 0x7c);
    iVar2 = *(int *)(param_1 + 0x80) - iVar1;
    fVar4 = 0.0;
    if (iVar2 != 0 && iVar1 <= *(int *)(param_1 + 0x80)) {
      fVar3 = (float)(*(int *)(*(long *)(param_1 + 0x58) + 0x18) - iVar1) / (float)iVar2;
      fVar5 = 1.0;
      if (fVar3 <= 1.0) {
        fVar5 = fVar3;
      }
      fVar4 = 0.0;
      if (0.0 <= fVar3) {
        fVar4 = fVar5;
      }
    }
    fVar5 = 0.0;
    if (0.0 <= fVar4) {
      fVar5 = fVar4;
    }
    *(float *)(param_1 + 0x84) =
         *(float *)(param_1 + 0x70) +
         fVar5 * (*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x70));
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
              (*(float *)(param_1 + 0x78) +
               fVar5 * (*(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x78)),param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


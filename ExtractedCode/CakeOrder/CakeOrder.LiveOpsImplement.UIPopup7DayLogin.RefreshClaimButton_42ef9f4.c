// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIPopup7DayLogin$$RefreshClaimButton
// address: 0x42ef9f4
// body: available
// range: 0x42ef9f4-0x42efb17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42efb00 to 0x89aeac4 UnityEngine.UI.Selectable$$set_interactable (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42efb14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIPopup7DayLogin__RefreshClaimButton(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_095174a6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095174a6 = 1;
  }
  uVar1 = CakeOrder_LiveOpsImplement_UIPopup7DayLogin__FindClaimableIndex(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0xf0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0xf0) == 0) goto LAB_042efb14;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0xf0),~uVar1 >> 0x1f,0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0xf8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0xf8) == 0) goto LAB_042efb14;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0xf8),uVar1 >> 0x1f,0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    UnityEngine_UI_Selectable__set_interactable(*(long *)(param_1 + 0xe8),~uVar1 >> 0x1f,0);
    return;
  }
LAB_042efb14:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


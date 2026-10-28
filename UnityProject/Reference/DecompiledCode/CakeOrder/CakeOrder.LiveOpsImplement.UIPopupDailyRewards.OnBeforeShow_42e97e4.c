// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIPopupDailyRewards$$OnBeforeShow
// address: 0x42e97e4
// body: available
// range: 0x42e97e4-0x42e990f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e98f8 to 0x42e963c CakeOrder.LiveOpsImplement.UIPopupDailyRewards$$UpdateSlots (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42e9908 to 0x42e9910 CakeOrder.LiveOpsImplement.UIPopupDailyRewards$$HideAllSlots (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42e990c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIPopupDailyRewards__OnBeforeShow(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((DAT_0951746f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09220680);
    FUN_03f5c2a4(&DAT_0921a128);
    DAT_0951746f = 1;
  }
  CakeOrder_BaseUI_UICakePopup__OnBeforeShow(param_1,0);
  if (*(long *)(param_1 + 0xc0) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x20);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar1 & 1) == 0) {
    puVar3 = &DAT_0921a128;
  }
  else {
    if ((*(long *)(param_1 + 0xc0) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x20), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar3 = (undefined8 *)(lVar2 + 0x18);
  }
  uVar4 = *puVar3;
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  CakeOrder_CakeOrderDataTracking__TrackLiveOpsInteraction(uVar4,DAT_09220680,0xffffffff,0,0,0);
  if (*(char *)(param_1 + 0xf0) != '\0') {
    CakeOrder_LiveOpsImplement_UIPopupDailyRewards__UpdateSlots(param_1,0);
    return;
  }
  CakeOrder_LiveOpsImplement_UIPopupDailyRewards__HideAllSlots(param_1);
  return;
}


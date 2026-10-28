// rea decompile_all
// name: _GAME.GameUI.PopupBaseCtrl$$HideElement
// address: 0x774b4ac
// body: available
// range: 0x774b4ac-0x774b5a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774b548 to 0x42d8418 CakeOrder.BaseUI.UIElementWithAnim$$HideElement (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x774b5a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_PopupBaseCtrl__HideElement(undefined4 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((DAT_09522b6b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09522b6b = 1;
  }
  uVar1 = CakeOrder_BaseUI_UIElementWithAnim__get_AnimShowHide(param_2,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    CakeOrder_BaseUI_UIElementWithAnim__HideElement(param_1,param_2,param_3,0);
    return;
  }
  lVar3 = UnityEngine_Component__get_gameObject(param_2,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  UnityEngine_GameObject__SetActive(lVar3,0,0);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0774b588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x18))(*(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x28));
    return;
  }
  return;
}


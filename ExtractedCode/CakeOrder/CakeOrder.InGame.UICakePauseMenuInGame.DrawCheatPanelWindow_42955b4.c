// rea decompile_all
// name: CakeOrder.InGame.UICakePauseMenuInGame$$DrawCheatPanelWindow
// address: 0x42955b4
// body: available
// range: 0x42955b4-0x429578b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4295750 to 0x429319c CakeOrder.InGame.UICakePauseMenuInGame$$CloseCheatPanel (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4295770 to 0x4295860 CakeOrder.InGame.UICakePauseMenuInGame$$DrawAutoplayConfigPanel (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4295780 to 0x4296564 CakeOrder.InGame.UICakePauseMenuInGame$$DrawLevelSelectPanel (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4295784 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4295788 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UICakePauseMenuInGame__DrawCheatPanelWindow(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((DAT_095171c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c01c8);
    FUN_03f5c2a4(&DAT_0917ff68);
    FUN_03f5c2a4(&DAT_09184ac0);
    FUN_03f5c2a4(&DAT_092134d0);
    DAT_095171c8 = 1;
  }
  lVar1 = DAT_091c01c8;
  lVar5 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar5 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar5 = *(long *)(lVar1 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar1 + 0xb8),0);
  UnityEngine_GUILayout__FlexibleSpace(0);
  if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_GUI__set_backgroundColor(0x3f800000,0x3ef5c28f,0x3ef5c28f,0x3f800000,0);
  uVar2 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelButtonStyle();
  lVar1 = FUN_03f5c394(DAT_0917ff68,1);
  uVar3 = UnityEngine_GUILayout__Width(0x43020000,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  thunk_FUN_03f5d7b8();
  uVar4 = UnityEngine_GUILayout__Button(DAT_092134d0,uVar2,lVar1,0);
  UnityEngine_GUI__set_backgroundColor(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  UnityEngine_GUILayout__EndHorizontal(0);
  if ((uVar4 & 1) != 0) {
    CakeOrder_InGame_UICakePauseMenuInGame__CloseCheatPanel(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x200) == 1) {
    CakeOrder_InGame_UICakePauseMenuInGame__DrawAutoplayConfigPanel();
    return;
  }
  CakeOrder_InGame_UICakePauseMenuInGame__DrawLevelSelectPanel(param_1);
  return;
}


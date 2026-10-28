// rea decompile_all
// name: _GAME.Profile.PopupEditProfileCtrl$$UpdateBtnSaveStatus
// address: 0x77aa27c
// body: available
// range: 0x77aa27c-0x77aa3c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77aa3bc to 0x89aeac4 UnityEngine.UI.Selectable$$set_interactable (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77aa3c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_PopupEditProfileCtrl__UpdateBtnSaveStatus(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  if ((DAT_09522e57 & 1) == 0) {
    auVar9 = FUN_03f5c2a4(&DAT_091896c0);
    DAT_09522e57 = 1;
  }
  uVar5 = auVar9._8_8_;
  if (*(long *)(param_1 + 0x198) == 0) goto LAB_077aa3c0;
  lVar7 = *(long *)(param_1 + 0x108);
  lVar8 = *(long *)(*(long *)(param_1 + 0x198) + 0x10);
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
    uVar5 = extraout_x1;
  }
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = DAT_091896c0;
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = DAT_091896c0;
  if ((**(long **)(DAT_091896c0 + 0xb8) == 0) || (auVar9 = auVar2, lVar8 == 0)) goto LAB_077aa3c0;
  auVar9 = System_String__Equals(lVar8,*(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18),0);
  uVar5 = auVar9._8_8_;
  uVar4 = auVar9._0_8_;
  if ((auVar9._0_8_ & 1) == 0) goto LAB_077aa3a0;
  if (*(long *)(param_1 + 0x198) == 0) goto LAB_077aa3c0;
  iVar1 = *(int *)(*(long *)(param_1 + 0x198) + 0x18);
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
    uVar5 = extraout_x1_00;
  }
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = DAT_091896c0;
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = DAT_091896c0;
  lVar8 = **(long **)(DAT_091896c0 + 0xb8);
  if (lVar8 == 0) goto LAB_077aa3c0;
  uVar4 = DAT_091896c0;
  if (iVar1 == *(int *)(lVar8 + 0x20)) {
    auVar9 = auVar3;
    if (*(long *)(param_1 + 0x198) == 0) goto LAB_077aa3c0;
    iVar1 = *(int *)(*(long *)(param_1 + 0x198) + 0x1c);
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
      auVar9._8_8_ = extraout_x1_01;
      auVar9._0_8_ = DAT_091896c0;
      lVar8 = **(long **)(DAT_091896c0 + 0xb8);
      uVar5 = extraout_x1_01;
      if (lVar8 == 0) goto LAB_077aa3c0;
    }
    auVar9._8_8_ = uVar5;
    auVar9._0_8_ = DAT_091896c0;
    uVar4 = DAT_091896c0;
    if (iVar1 != *(int *)(lVar8 + 0x24)) goto LAB_077aa3a0;
    if (*(long *)(param_1 + 0x198) == 0) goto LAB_077aa3c0;
    iVar1 = *(int *)(*(long *)(param_1 + 0x198) + 0x20);
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      auVar9 = FUN_03f5c424();
      uVar4 = auVar9._0_8_;
      lVar8 = **(long **)(DAT_091896c0 + 0xb8);
      if (lVar8 == 0) goto LAB_077aa3c0;
    }
    uVar6 = (ulong)(iVar1 != *(int *)(lVar8 + 0x28));
  }
  else {
LAB_077aa3a0:
    uVar6 = 1;
  }
  auVar9._8_8_ = uVar6;
  auVar9._0_8_ = uVar4;
  if (lVar7 != 0) {
    UnityEngine_UI_Selectable__set_interactable(lVar7,uVar6,0);
    return;
  }
LAB_077aa3c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar9._0_8_,auVar9._8_8_);
}


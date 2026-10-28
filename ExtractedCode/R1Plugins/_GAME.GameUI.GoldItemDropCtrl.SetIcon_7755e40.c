// rea decompile_all
// name: _GAME.GameUI.GoldItemDropCtrl$$SetIcon
// address: 0x7755e40
// body: available
// range: 0x7755e40-0x7755f87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7755f80 to 0x878cbb4 UnityEngine.UI.Image$$set_preserveAspect (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7755f84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_GoldItemDropCtrl__SetIcon(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_09522bea & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09522bea = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  auVar5 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((auVar5._0_8_ & 1) != 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x5e) == '\0') {
    *(undefined1 *)(param_1 + 0x5e) = 1;
    if (lVar4 == 0) goto LAB_07755f84;
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar4 + 0xd8);
    auVar5 = thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60));
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) goto LAB_07755f84;
    *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(lVar4 + 0xec);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(param_2,0,0);
  uVar3 = param_2;
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar1;
  if (lVar4 != 0) {
    UnityEngine_UI_Image__set_sprite(lVar4,uVar3,0);
    lVar4 = *(long *)(param_1 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(param_2,0,0);
    if ((uVar1 & 1) == 0) {
      uVar2 = (ulong)(*(char *)(param_1 + 0x68) != '\0');
    }
    else {
      uVar2 = 1;
    }
    auVar5._8_8_ = uVar2;
    auVar5._0_8_ = uVar1;
    if (lVar4 != 0) {
      UnityEngine_UI_Image__set_preserveAspect(lVar4,uVar2,0);
      return;
    }
  }
LAB_07755f84:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar5._0_8_,auVar5._8_8_);
}


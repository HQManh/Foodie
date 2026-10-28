// rea decompile_all
// name: _GAME.DreamyTower.DreamyTowerLevelUICtrl$$Init
// address: 0x7801fe0
// body: available
// range: 0x7801fe0-0x78021e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x78021e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyTower_DreamyTowerLevelUICtrl__Init(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_34;
  
  if ((DAT_095231ec & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c88d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba3a8);
    FUN_03f5c2a4(&DAT_091ba3c8);
    FUN_03f5c2a4(&DAT_0917e710);
    FUN_03f5c2a4(&DAT_09226038);
    DAT_095231ec = 1;
  }
  uVar2 = _GAME_DreamyTower_SODreamyTowerConfig__GetLevel(param_2);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_078021e0;
    local_34 = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x10);
    lVar4 = *(long *)(param_1 + 0x20);
    uVar2 = FUN_03f5c42c(DAT_09535420,&local_34);
    uVar2 = System_String__Format(DAT_09226038,uVar2,0);
    if (lVar4 == 0) goto LAB_078021e0;
    TMPro_TMP_Text__SetText(lVar4,uVar2,0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    if ((*(long *)(param_1 + 0x48) == 0) || (*(long *)(param_1 + 0x28) == 0)) {
LAB_078021e0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_GameUI_RwBoxUICtrl__SetData
              (*(long *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x18),0);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  if (*(int *)(DAT_0917e710 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_060df6f8(uVar1,DAT_091ba3c8);
  uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar2,param_1,DAT_091c88d0,0);
  uVar1 = FUN_060df21c(uVar2,1,param_1,DAT_091ba3a8);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  _GAME_DreamyTower_DreamyTowerLevelUICtrl__UpdateRewardStatus(param_1);
  return;
}


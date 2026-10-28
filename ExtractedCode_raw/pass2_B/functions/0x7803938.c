// rea decompile_all
// name: _GAME.DreamyTower.DreamyTowerLevelUICtrl$$CheckAutoClaimReward
// address: 0x7803938
// body: available
// range: 0x7803938-0x7803a4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7803a38 to 0x78069f8 _GAME.DreamyTower.DreamyTowerLevelUICtrl$$UpdateRewardStatus (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7803a48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyTower_DreamyTowerLevelUICtrl__CheckAutoClaimReward(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  if ((DAT_095231ef & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d80);
    auVar5 = FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095231ef = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x10);
    if (*(int *)(DAT_09183d80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = _GAME_DreamyTower_DreamyTowerManager__ClaimRewardCheckPoint(uVar1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    auVar5 = _GAME_Device_AudioController__PlaySound(0x3f800000,7,0);
    if (*(long *)(param_1 + 0x48) != 0) {
      auVar5 = _GAME_GameItem_GameItemManager__ClaimReward
                         (*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x18),0x29,0,0);
      if (*(long *)(param_1 + 0x48) != 0) {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x18);
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
        uVar4 = 0;
        if ((uVar2 & 1) != 0) {
          auVar5 = ZEXT816(0);
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_07803a48;
          uVar4 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x28),0);
        }
        _GAME_GameUI_DropItemController__DropRwItemToBag(uVar3,uVar4,0);
        _GAME_DreamyTower_DreamyTowerLevelUICtrl__UpdateRewardStatus(param_1);
        return;
      }
    }
  }
LAB_07803a48:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar5._0_8_,auVar5._8_8_);
}


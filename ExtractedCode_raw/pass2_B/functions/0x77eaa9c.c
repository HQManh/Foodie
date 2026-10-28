// rea decompile_all
// name: _GAME.TeamTreasure.TeamTreasureRewardStepUICtrl$$CheckAutoClaim
// address: 0x77eaa9c
// body: available
// range: 0x77eaa9c-0x77eac07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77eac00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77eac04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GAME_TeamTreasure_TeamTreasureRewardStepUICtrl__CheckAutoClaim(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((DAT_095230eb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a40b8);
    FUN_03f5c2a4(&DAT_091a40c0);
    FUN_03f5c2a4(&DAT_091a40c8);
    FUN_03f5c2a4(&DAT_091afa58);
    FUN_03f5c2a4(&DAT_0918b998);
    DAT_095230eb = 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar2 = UnityEngine_GameObject__get_activeSelf(*(long *)(param_1 + 0x30),0);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    if ((**(long **)(DAT_0918b998 + 0xb8) != 0) && (lVar4 = *(long *)(param_1 + 0x38), lVar4 != 0))
    {
      if (*(int *)(**(long **)(DAT_0918b998 + 0xb8) + 0x34) < *(int *)(lVar4 + 0x14)) {
        return 0;
      }
      _GAME_TeamTreasure_TeamTreasureManager__ClaimStepReward(*(undefined4 *)(lVar4 + 0x10));
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x18), lVar4 != 0)) {
        FUN_057e185c(&local_38,lVar4,DAT_091afa58);
        while( true ) {
          uVar2 = FUN_071bd28c(&local_38,DAT_091a40c0);
          uVar1 = local_28;
          if ((uVar2 & 1) == 0) {
            FUN_071bd288(&local_38,DAT_091a40b8);
            return 1;
          }
          _GAME_GameItem_GameItemManager__ClaimReward(local_28,0x2d,0,0);
          if (*(long *)(param_1 + 0x28) == 0) break;
          uVar3 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x28),0);
          _GAME_GameUI_DropItemController__DropRwItemToBag(uVar1,uVar3,0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


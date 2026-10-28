// rea decompile_all
// name: _GAME.StageRace.PopupStageRaceFinishCtrl.<ClaimRewardAndClose>d__9$$MoveNext
// address: 0x77f1e64
// body: available
// range: 0x77f1e64-0x77f20db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77f20c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f20c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f20c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f20cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f20d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f20d8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077f20d4) */

void _GAME_StageRace_PopupStageRaceFinishCtrl_<ClaimRewardAndClose>d__9__MoveNext(int *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_88;
  int *piStack_80;
  undefined8 *local_78;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  int local_34;
  
  if ((DAT_095230ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a40d0);
    FUN_03f5c2a4(&DAT_091a40d8);
    FUN_03f5c2a4(&DAT_091a40e0);
    FUN_03f5c2a4(&DAT_091afa88);
    FUN_03f5c2a4(&DAT_091ee858);
    FUN_03f5c2a4(&DAT_09193610);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_095230ff = 1;
  }
  local_34 = *param_1;
  lVar7 = *(long *)(param_1 + 10);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = 0;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  _GAME_Utils_HelperButton__HideScale(0x3f800000,0x3f8ccccd,0,*(undefined8 *)(lVar7 + 0x100),0);
  if (*(long *)(lVar7 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = *(long *)(*(long *)(lVar7 + 0xf0) + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_88,lVar1,DAT_091afa88);
  uStack_58 = piStack_80;
  local_60 = local_88;
  local_50 = (long)local_78;
  piStack_80 = &local_34;
  local_88 = 0;
  local_78 = &local_60;
  while( true ) {
    uVar2 = FUN_071bd28c(&local_60,DAT_091a40d8);
    lVar1 = local_50;
    if ((uVar2 & 1) == 0) {
      if (local_34 < 0) {
        FUN_071bd288(local_78,DAT_091a40d0);
      }
      if (*(int *)(DAT_09193610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar6 = *(undefined8 **)(DAT_09193610 + 0xb8);
      lVar1 = puVar6[1];
      if (lVar1 == 0) {
        if (*(int *)(DAT_09193610 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar6 = *(undefined8 **)(DAT_09193610 + 0xb8);
        }
        uVar4 = *puVar6;
        lVar1 = thunk_FUN_03f9944c(DAT_0918c678);
        UnityEngine_Events_UnityAction___ctor(lVar1,uVar4,DAT_091ee858,0);
        plVar5 = (long *)(*(long *)(DAT_09193610 + 0xb8) + 8);
        *plVar5 = lVar1;
        thunk_FUN_03f5d7b8(plVar5,lVar1);
      }
      _GAME_GameUI_PopupBaseCtrl__Close(lVar7,4,lVar1,0);
      *param_1 = -2;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
      return;
    }
    if (local_50 == 0) break;
    lVar3 = UnityEngine_Component__get_gameObject(local_50,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
    if ((uVar2 & 1) != 0) {
      _GAME_GameItem_GameItemManager__ClaimReward(*(undefined8 *)(lVar1 + 0x38),0x2a,0,0);
      uVar8 = *(undefined8 *)(lVar1 + 0x38);
      uVar4 = UnityEngine_Component__get_transform(lVar1,0);
      _GAME_GameUI_DropItemController__DropRwItemToBag(uVar8,uVar4,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


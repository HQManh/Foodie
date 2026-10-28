// rea decompile_all
// name: _GAME.TeamTreasure.PopupTeamTreasureCtrl$$Open
// address: 0x77e7470
// body: available
// range: 0x77e7470-0x77e77bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e77b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e77b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e77b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e77bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_TeamTreasure_PopupTeamTreasureCtrl__Open(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_68;
  undefined8 *puStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  long local_40;
  
  if ((DAT_09523093 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091a47a8);
    FUN_03f5c2a4(&DAT_091a47b0);
    FUN_03f5c2a4(&DAT_091a47b8);
    FUN_03f5c2a4(&DAT_091b0cf0);
    FUN_03f5c2a4(&DAT_091b0d08);
    FUN_03f5c2a4(&DAT_091d6408);
    FUN_03f5c2a4(&DAT_091d6418);
    FUN_03f5c2a4(&DAT_0918b998);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_0918c678);
    FUN_03f5c2a4(&DAT_09226038);
    DAT_09523093 = 1;
  }
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = 0;
  if ((*(char *)(param_1 + 0x180) != '\0') || (*(char *)(param_1 + 0xd8) != '\0')) {
    return;
  }
  _GAME_TeamTreasure_PopupTeamTreasureCtrl__CancelOpenFlow(param_1);
  *(undefined1 *)(param_1 + 0x181) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  thunk_FUN_03f5d7b8(param_1 + 0x128,0);
  if (*(long *)(param_1 + 0xe8) != 0) {
    _GAME_TeamTreasure_PopupTeamTreasureCheat__Init();
    lVar2 = _GAME_TeamTreasure_SOTeamTreasureConfig__get_ListRwStep();
    if (lVar2 != 0) {
      FUN_057e185c(&local_68,lVar2,DAT_091b0cf0);
      puStack_48 = puStack_60;
      local_50 = local_68;
      local_40 = local_58;
      local_68 = 0;
      puStack_60 = &local_50;
      while (uVar3 = FUN_071bd28c(&local_50,DAT_091a47b0), lVar2 = local_40, (uVar3 & 1) != 0) {
        if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = FUN_057e0998(*(long *)(param_1 + 0x110),*(undefined4 *)(local_40 + 0x10),
                             DAT_091b0d08);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        _GAME_TeamTreasure_TeamTreasureRewardStepUICtrl__Init(lVar4,lVar2);
      }
      FUN_071bd288(&local_50,DAT_091a47a8);
      if (**(long **)(DAT_0918b998 + 0xb8) != 0) {
        lVar2 = *(long *)(param_1 + 0x108);
        local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(**(long **)(DAT_0918b998 + 0xb8) + 0x30))
        ;
        uVar5 = FUN_03f5c42c(DAT_09535420,&local_68);
        uVar5 = System_String__Format(DAT_09226038,uVar5,0);
        if (lVar2 != 0) {
          TMPro_TMP_Text__SetText(lVar2,uVar5,0);
          if (*(long *)(param_1 + 0x100) != 0) {
            UnityEngine_UI_Slider__set_maxValue(0x3f800000,*(long *)(param_1 + 0x100),0);
            if (**(long **)(DAT_0918b998 + 0xb8) != 0) {
              plVar6 = *(long **)(param_1 + 0x100);
              _GAME_TeamTreasure_SOTeamTreasureConfig__GetFillValueRewardStep
                        (*(undefined4 *)(**(long **)(DAT_0918b998 + 0xb8) + 0x30));
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 0x428))(plVar6,*(undefined8 *)(*plVar6 + 0x430));
                if (*(long *)(param_1 + 0x160) != 0) {
                  UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x160),0,0);
                  if (*(long *)(param_1 + 0x168) != 0) {
                    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x168),1,0);
                    if (*(long *)(param_1 + 0x170) != 0) {
                      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x170),0,0);
                      if (*(long *)(param_1 + 0x178) != 0) {
                        UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x178),0,0);
                        _GAME_TeamTreasure_PopupTeamTreasureCtrl__UnregisterTimerCallback(param_1);
                        uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
                        System_Action___ctor(uVar5,param_1,DAT_091d6418,0);
                        if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        uVar1 = _GAME_BaseGame_TimerManager__AddCallbackTick(uVar5,param_1);
                        *(undefined4 *)(param_1 + 400) = uVar1;
                        uVar5 = thunk_FUN_03f9944c(DAT_0918c678);
                        UnityEngine_Events_UnityAction___ctor(uVar5,param_1,DAT_091d6408,0);
                        _GAME_GameUI_PopupBaseCtrl__Open(param_1,3,uVar5,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


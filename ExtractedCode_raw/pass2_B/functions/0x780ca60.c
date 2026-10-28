// rea decompile_all
// name: _GAME.DreamyStreak.DreamyStreakFIconCtrl$$OnUpdateData
// address: 0x780ca60
// body: available
// range: 0x780ca60-0x780cc93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x780cc90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyStreak_DreamyStreakFIconCtrl__OnUpdateData(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_09523237 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d70);
    FUN_03f5c2a4(&DAT_0918a4c0);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_09225c90);
    FUN_03f5c2a4(&DAT_092265b0);
    DAT_09523237 = 1;
  }
  uVar3 = _GAME_DreamyStreak_DreamyStreakFIconCtrl__CheckFeatureActive(param_1);
  if ((uVar3 & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0x50);
    if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_34 = _GAME_DreamyStreak_DreamyStreakManager__GetCurStreakPoint(0);
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_34);
    uVar4 = System_String__Format(DAT_09225c90,uVar4,0);
    if (lVar7 != 0) {
      TMPro_TMP_Text__SetText(lVar7,uVar4,0);
      iVar1 = _GAME_DreamyStreak_DreamyStreakManager__GetCurPointProgress(0);
      if (*(int *)(DAT_0918a4c0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918a4c0);
      }
      iVar2 = _GAME_DreamyStreak_SODreamyStreakConfig__get_MaxLevelPoint();
      if (iVar2 <= iVar1) {
        iVar1 = iVar2;
      }
      if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = _GAME_DreamyStreak_DreamyStreakManager__GetCurTargetLevel(0);
      lVar8 = *(long *)(param_1 + 0x58);
      local_38 = _GAME_DreamyStreak_DreamyStreakManager__GetCurPointProgress(0);
      uVar4 = FUN_03f5c42c(DAT_09535420,&local_38);
      uVar4 = System_String__Format(DAT_092265b0,uVar4,0);
      if (lVar7 != 0) {
        local_44 = *(undefined4 *)(lVar7 + 0x14);
        uVar5 = FUN_03f5c42c(DAT_09535420,&local_44);
        uVar5 = System_String__Format(DAT_09226038,uVar5,0);
        uVar4 = System_String__Concat(uVar4,uVar5,0);
        if (lVar8 != 0) {
          TMPro_TMP_Text__SetText(lVar8,uVar4,0);
          plVar6 = *(long **)(param_1 + 0x60);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x428))
                      ((float)iVar1 / (float)*(int *)(lVar7 + 0x14),plVar6,
                       *(undefined8 *)(*plVar6 + 0x430));
            if (*(long *)(param_1 + 0x68) != 0) {
              _GAME_GameUI_RwItemUICtrl__SetData
                        (*(long *)(param_1 + 0x68),*(undefined8 *)(lVar7 + 0x18),0);
              goto LAB_0780cc6c;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0780cc6c:
  _GAME_GameUI_UIIconFeature__OnUpdateData(param_1,0);
  return;
}


// rea decompile_all
// name: _GAME.DreamyStreak.PopupDreamyStreakCtrl$$UpdateUIData
// address: 0x7809204
// body: available
// range: 0x7809204-0x78097df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7809544 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x78097d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x78097d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x78097dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyStreak_PopupDreamyStreakCtrl__UpdateUIData(long param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09523212 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09183d70);
    FUN_03f5c2a4(&DAT_091a2ab0);
    FUN_03f5c2a4(&DAT_091a4850);
    FUN_03f5c2a4(&DAT_091a2ab8);
    FUN_03f5c2a4(&DAT_091a4858);
    FUN_03f5c2a4(&DAT_091a4860);
    FUN_03f5c2a4(&DAT_091a2ac0);
    FUN_03f5c2a4(&DAT_091ac748);
    FUN_03f5c2a4(&DAT_091b0dd8);
    FUN_03f5c2a4(&DAT_091b0de0);
    FUN_03f5c2a4(&DAT_091ac750);
    FUN_03f5c2a4(&DAT_091ac738);
    FUN_03f5c2a4(&DAT_091ac758);
    FUN_03f5c2a4(&DAT_091b0de8);
    FUN_03f5c2a4(&DAT_0918a4c0);
    FUN_03f5c2a4(&DAT_09213cd0);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_091f6c58);
    FUN_03f5c2a4(&DAT_09225c90);
    FUN_03f5c2a4(&DAT_092265b0);
    DAT_09523212 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  if ((param_2 & 1) == 0) {
LAB_07809548:
    if (*(long *)(param_1 + 0x108) != 0) {
      FUN_057e185c(&local_b8,*(long *)(param_1 + 0x108),DAT_091b0dd8);
      local_70 = local_a8;
      puStack_78 = puStack_b0;
      local_80 = local_b8;
      local_b8 = 0;
      puStack_b0 = &local_80;
      while (uVar8 = FUN_071bd28c(&local_80,DAT_091a4858), lVar4 = local_70, (uVar8 & 1) != 0) {
        if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_9c = _GAME_DreamyStreak_DreamyStreakManager__GetCurStreakPoint();
        uVar5 = FUN_03f5c42c(DAT_09535420,&local_9c);
        uVar5 = System_String__Format(DAT_09225c90,uVar5,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar5,uVar5);
        }
        TMPro_TMP_Text__SetText(lVar4,uVar5,0);
      }
      FUN_071bd288(&local_80,DAT_091a4850);
      if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = _GAME_DreamyStreak_DreamyStreakManager__GetCurPointProgress();
      if (*(int *)(DAT_0918a4c0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918a4c0);
      }
      iVar3 = _GAME_DreamyStreak_SODreamyStreakConfig__get_MaxLevelPoint(0);
      if (iVar3 <= iVar2) {
        iVar2 = iVar3;
      }
      if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = _GAME_DreamyStreak_DreamyStreakManager__GetCurTargetLevel();
      lVar6 = *(long *)(param_1 + 0x110);
      uVar1 = _GAME_DreamyStreak_DreamyStreakManager__GetCurPointProgress();
      local_b8 = CONCAT44(local_b8._4_4_,uVar1);
      uVar5 = FUN_03f5c42c(DAT_09535420,&local_b8);
      uVar5 = System_String__Format(DAT_092265b0,uVar5,0);
      if (lVar4 != 0) {
        local_9c = *(int *)(lVar4 + 0x14);
        uVar7 = FUN_03f5c42c(DAT_09535420,&local_9c);
        uVar7 = System_String__Format(DAT_09226038,uVar7,0);
        uVar5 = System_String__Concat(uVar5,uVar7,0);
        if (lVar6 != 0) {
          TMPro_TMP_Text__SetText(lVar6,uVar5,0);
          plVar9 = *(long **)(param_1 + 0x118);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x428))
                      ((float)iVar2 / (float)*(int *)(lVar4 + 0x14),plVar9,
                       *(undefined8 *)(*plVar9 + 0x430));
            if (*(long *)(param_1 + 0x120) != 0) {
              _GAME_GameUI_RwItemUICtrl__SetData
                        (*(long *)(param_1 + 0x120),*(undefined8 *)(lVar4 + 0x18),0);
              if (*(long *)(param_1 + 0x128) != 0) {
                FUN_057e185c(&local_98,*(long *)(param_1 + 0x128),DAT_091ac748);
                local_b8 = 0;
                puStack_b0 = &local_98;
                while( true ) {
                  uVar8 = FUN_071bd28c(&local_98,DAT_091a2ab8);
                  lVar4 = local_88;
                  if ((uVar8 & 1) == 0) {
                    FUN_071bd288(&local_98,DAT_091a2ab0);
                    return;
                  }
                  if (local_88 == 0) break;
                  lVar6 = UnityEngine_Component__get_gameObject(local_88,0);
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar8 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
                  if ((uVar8 & 1) != 0) {
                    _GAME_DreamyStreak_DreamyStreakLevelUICtrl__UpdateStatus(lVar4,0xffffffff,0);
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
            }
          }
        }
      }
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0xf8);
    if (lVar4 != 0) {
      iVar2 = 0;
      do {
        if (*(int *)(lVar4 + 0x18) <= iVar2) {
          if (*(int *)(DAT_0918a4c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = _GAME_DreamyStreak_SODreamyStreakConfig__get_ListLevel(0);
          if ((lVar4 == 0) || (lVar6 = *(long *)(param_1 + 0x128), lVar6 == 0)) break;
          iVar2 = *(int *)(lVar4 + 0x18);
          if (*(int *)(lVar6 + 0x18) != iVar2) {
            local_b8 = CONCAT44(local_b8._4_4_,*(int *)(lVar6 + 0x18));
            uVar5 = FUN_03f5c42c(DAT_09535420,&local_b8);
            uVar5 = System_String__Format(DAT_09213cd0,uVar5,0);
            local_9c = iVar2;
            uVar7 = FUN_03f5c42c(DAT_09535420,&local_9c);
            uVar7 = System_String__Format(DAT_091f6c58,uVar7,0);
            uVar5 = System_String__Concat(uVar5,uVar7,0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091835d0);
            }
            UnityEngine_Debug__LogError(uVar5,0);
            lVar6 = *(long *)(param_1 + 0x128);
            if (lVar6 == 0) break;
          }
          iVar3 = 0;
          goto LAB_078094e4;
        }
        lVar4 = FUN_057e0998(lVar4,iVar2,DAT_091b0de8);
        if (*(int *)(DAT_0918a4c0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918a4c0);
        }
        uVar1 = _GAME_DreamyStreak_SODreamyStreakConfig__GetPointByStreak(iVar2,0);
        local_b8 = CONCAT44(local_b8._4_4_,uVar1);
        uVar5 = FUN_03f5c42c(DAT_09535420,&local_b8);
        uVar5 = System_String__Format(DAT_09225c90,uVar5,0);
        if (lVar4 == 0) break;
        TMPro_TMP_Text__SetText(lVar4,uVar5,0);
        lVar4 = *(long *)(param_1 + 0xf8);
        iVar2 = iVar2 + 1;
      } while (lVar4 != 0);
    }
  }
  goto LAB_07809544;
  while( true ) {
    lVar6 = *(long *)(param_1 + 0x128);
    iVar3 = iVar3 + 1;
    if (lVar6 == 0) break;
LAB_078094e4:
    if (*(int *)(lVar6 + 0x18) <= iVar3) goto LAB_07809548;
    uVar5 = FUN_057e0998(lVar6,iVar3,DAT_091ac758);
    _GAME_Utils_HelperMonoBehaviour__SetActive(uVar5,iVar3 < iVar2,0);
    if (iVar3 < iVar2) {
      if ((*(long *)(param_1 + 0x128) == 0) ||
         (lVar4 = FUN_057e0998(*(long *)(param_1 + 0x128),iVar3,DAT_091ac758), lVar4 == 0)) break;
      _GAME_DreamyStreak_DreamyStreakLevelUICtrl__UpdateStatus(lVar4,iVar3,0);
    }
  }
LAB_07809544:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


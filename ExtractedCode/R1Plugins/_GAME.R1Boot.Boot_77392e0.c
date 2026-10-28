// rea decompile_all
// name: _GAME.R1Boot$$Boot
// address: 0x77392e0
// body: available
// range: 0x77392e0-0x77398db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77398d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77398d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_R1Boot__Boot(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined4 local_58;
  int local_54;
  
  if ((DAT_09522ab3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09184b50);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189468);
    FUN_03f5c2a4(&DAT_091d6d20);
    FUN_03f5c2a4(&DAT_09189930);
    FUN_03f5c2a4(&DAT_09189938);
    FUN_03f5c2a4(&DAT_091d6d28);
    FUN_03f5c2a4(&DAT_091d6d30);
    FUN_03f5c2a4(&DAT_09189998);
    FUN_03f5c2a4(&DAT_0918a588);
    FUN_03f5c2a4(&DAT_09214028);
    DAT_09522ab3 = 1;
  }
  _GAME_BaseGame_R1Runtime__Ensure(0);
  if (*(int *)(DAT_09189998 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  _GAME_Bridge_R1UserTextSupport__Init(0);
  _GAME_BaseGame_R1ServerConfig__SetCurrent(*(undefined8 *)(param_1 + 0x50),0);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(DAT_09189468 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09522bd6 == '\0') {
    FUN_03f5c2a4(&DAT_09189468);
    DAT_09522bd6 = '\x01';
  }
  if (*(int *)(DAT_09189468 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  **(undefined8 **)(DAT_09189468 + 0xb8) = uVar6;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09189468 + 0xb8),uVar6);
  _GAME_Device_AudioController__SetUnlockFeatureClip(*(undefined8 *)(param_1 + 0x40));
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 == 0) goto LAB_077398d8;
    _GAME_GameItem_SORwItemIconConfig__Load(lVar4,lVar4);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar3 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = UnityEngine_Component__get_transform(param_1,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    FUN_04c35338(uVar7,uVar6,DAT_091d4bc0);
  }
  if (*(int *)(DAT_09184b50 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  _GAME_BaseGame_GameDataManager__StartSaveAction(0);
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    if ((int)*(ulong *)(lVar4 + 0x18) < 1) {
      iVar9 = 0;
    }
    else {
      iVar9 = 0;
      uVar3 = 0;
      uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar3) goto LAB_077398d4;
        uVar6 = *(undefined8 *)(lVar4 + 0x20 + uVar3 * 8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar6,0);
        if ((uVar5 & 1) != 0) {
          uVar7 = UnityEngine_Component__get_transform(param_1,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          FUN_04c35338(uVar6,uVar7,DAT_091d4bc0);
          iVar9 = iVar9 + 1;
        }
        uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        uVar10 = 0;
        do {
          if (uVar1 <= uVar10) {
LAB_077398d4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar8 = *(long *)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_077398d8;
          uVar6 = *(undefined8 *)(lVar8 + 0x18);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = *(undefined4 *)(lVar8 + 0x10);
            if (*(int *)(DAT_09189938 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = _GAME_R1Features__IsEventEnabled(uVar2);
            if ((uVar3 & 1) != 0) {
              uVar7 = *(undefined8 *)(lVar8 + 0x18);
              uVar6 = UnityEngine_Component__get_transform(param_1,0);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188ad0);
              }
              FUN_04c35338(uVar7,uVar6,DAT_091d4bc0);
              iVar9 = iVar9 + 1;
            }
          }
          uVar1 = *(uint *)(lVar4 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar1);
      }
      if (*(int *)(DAT_09189930 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_R1Boot__ReloadData();
      _GAME_Levels_LevelPlayController__Init();
      uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar6,0,DAT_091d6d20,0);
      if (*(int *)(DAT_0918a588 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_Utils_SaveFile__remove_OnDataCleared(uVar6);
      uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar6,0,DAT_091d6d20,0);
      _GAME_Utils_SaveFile__add_OnDataCleared(uVar6);
      uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar6,0,DAT_091d6d28,0);
      _GAME_Bridge_R1LevelWatcher__remove_OnBackHome(uVar6,0);
      uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar6,0,DAT_091d6d28,0);
      _GAME_Bridge_R1LevelWatcher__add_OnBackHome(uVar6,0);
      uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar6,0,DAT_091d6d30,0);
      _GAME_Bridge_R1LevelWatcher__remove_OnArriveHome(uVar6,0);
      uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar6,0,DAT_091d6d30,0);
      _GAME_Bridge_R1LevelWatcher__add_OnArriveHome(uVar6,0);
      if (*(int *)(DAT_09189938 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09522bd7 == '\0') {
        FUN_03f5c2a4(&DAT_09189938);
        DAT_09522bd7 = '\x01';
      }
      if (*(int *)(DAT_09189938 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      *(undefined1 *)(*(long *)(DAT_09189938 + 0xb8) + 8) = 1;
      uVar3 = _GAME_Bridge_CookOrderBridge__get_IsAtHome(0);
      if ((uVar3 & 1) != 0) {
        _GAME_R1HomeFlow__LockTabsIfTabTutorialPending();
      }
      if (*(int *)(DAT_09189930 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_R1Boot__StartNetwork();
      local_54 = iVar9;
      uVar6 = FUN_03f5c42c(DAT_09535420,&local_54);
      local_58 = _GAME_Bridge_CookOrderBridge__get_LevelsCompleted(0);
      uVar7 = FUN_03f5c42c(DAT_09535420,&local_58);
      uVar6 = System_String__Format(DAT_09214028,uVar6,uVar7,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__Log(uVar6,0);
      return;
    }
  }
LAB_077398d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


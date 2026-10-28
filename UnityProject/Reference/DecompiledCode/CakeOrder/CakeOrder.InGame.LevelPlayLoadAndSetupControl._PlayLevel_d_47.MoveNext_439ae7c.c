// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl.<PlayLevel>d__47$$MoveNext
// address: 0x439ae7c
// body: available
// range: 0x439ae7c-0x439b847 inclusive
// range: 0x439b9b8-0x439b9d3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x439b7c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439b7c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439b7c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439b7cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439b7d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439b7d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439b7d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439b7dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439b7e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439b7e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439b7e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439b7ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelPlayLoadAndSetupControl_<PlayLevel>d__47__MoveNext(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  
  if ((DAT_09517a87 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09182250);
    FUN_03f5c2a4(&DAT_0918eaa8);
    FUN_03f5c2a4(&DAT_091d23f0);
    FUN_03f5c2a4(&DAT_091d23f8);
    FUN_03f5c2a4(&DAT_091d2400);
    FUN_03f5c2a4(&DAT_091d2408);
    FUN_03f5c2a4(&DAT_091d2410);
    FUN_03f5c2a4(&DAT_09187828);
    FUN_03f5c2a4(&DAT_091b3948);
    FUN_03f5c2a4(&DAT_091b3940);
    FUN_03f5c2a4(&DAT_0917d6f0);
    FUN_03f5c2a4(&DAT_091941b0);
    FUN_03f5c2a4(&DAT_091941b8);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b80);
    FUN_03f5c2a4(&DAT_091b4b28);
    FUN_03f5c2a4(&DAT_091b4b30);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09203390);
    FUN_03f5c2a4(&DAT_09207e58);
    DAT_09517a87 = 1;
  }
  lVar13 = *(long *)(param_1 + 6);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)(lVar13 + 0x20) == '\0') {
    lVar6 = *(long *)(DAT_091b4b80 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar7 = CakeOrder_CakeOrderSceneLoader__get_IsLoadingInProgress(**(long **)(lVar6 + 0xb8),0);
    if ((uVar7 & 1) == 0) {
      *(undefined8 *)(lVar13 + 0xb0) = 0;
      *(undefined1 *)(lVar13 + 0x20) = 1;
      *(undefined1 *)(lVar13 + 200) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar13 + 0xb0),0);
      CakeOrder_InGame_LevelPlayLoadAndSetupControl__ReleaseLiveHolder(lVar13);
      lVar6 = *(long *)(DAT_091b4a58 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar14 = **(long **)(lVar6 + 0xb8);
      lVar6 = thunk_FUN_03f9944c(DAT_09182250);
      CakeOrder_CakeLevelInitData___ctor(lVar6,0);
      lVar10 = *(long *)(param_1 + 8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = *(undefined4 *)(lVar10 + 0x10);
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined4 *)(lVar6 + 0x20) = uVar5;
      thunk_FUN_03f5d7b8();
      uVar7 = FUN_05a8f088(DAT_091b4b68);
      if ((uVar7 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        lVar10 = *(long *)(DAT_091b4b60 + 0x20);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_03f95a6c();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_03f95a6c();
        }
        if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapIndexById
                          (**(long **)(lVar10 + 0xb8),*(undefined8 *)(*(long *)(param_1 + 8) + 0x18)
                           ,0);
      }
      uVar8 = DAT_091b4b68;
      *(undefined4 *)(lVar6 + 0x18) = uVar5;
      uVar7 = FUN_05a8f088(uVar8);
      if ((uVar7 & 1) == 0) {
        uVar8 = 0;
      }
      else {
        lVar10 = *(long *)(DAT_091b4b60 + 0x20);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_03f95a6c();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_03f95a6c();
        }
        if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar8 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO
                          (**(long **)(lVar10 + 0xb8),*(undefined8 *)(*(long *)(param_1 + 8) + 0x18)
                           ,0);
      }
      *(undefined8 *)(lVar6 + 0x48) = uVar8;
      thunk_FUN_03f5d7b8();
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x20);
      plVar15 = (long *)(lVar13 + 0x30);
      *plVar15 = lVar6;
      *(undefined4 *)(lVar6 + 0x1c) = uVar5;
      thunk_FUN_03f5d7b8(plVar15,lVar6);
      lVar6 = *(long *)(param_1 + 8);
      *(undefined1 *)(lVar13 + 0xc9) = 0;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      bVar4 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__IsLevelWin
                        (lVar14,*(undefined8 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x20),0);
      uVar8 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__RecordLevelPlay
                        (lVar14,*plVar15,0);
      CakeOrder_InGame_LevelPlayLoadAndSetupControl__UpdateAdsProgressCounters(uVar8,1);
      lVar6 = *(long *)(param_1 + 8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *plVar15;
      uVar5 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetLevelPlayCount
                        (lVar14,*(undefined8 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x20),0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar15;
      *(undefined4 *)(lVar10 + 0x38) = uVar5;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(byte *)(lVar6 + 0x3c) = bVar4 & 1;
      uVar7 = FUN_05a8eda4(DAT_091b4b30);
      if ((uVar7 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        lVar10 = *(long *)(DAT_091b4b28 + 0x20);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_03f95a6c();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_03f95a6c();
        }
        if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = CakeOrder_WinStreakControl__get_CurrentWinStreak(**(long **)(lVar10 + 0xb8),0);
      }
      *(undefined4 *)(lVar6 + 0x40) = uVar5;
      CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__SaveData(lVar14,0);
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(lVar13 + 0x48) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x18);
      thunk_FUN_03f5d7b8();
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined4 *)(lVar13 + 0x50) = *(undefined4 *)(*(long *)(param_1 + 8) + 0x20);
      uVar8 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetHighestMapAndLevelIndexPlayable
                        (lVar14,0);
      if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(*plVar15 + 0x30) = uVar8;
      lVar6 = CakeOrderSubsystem_Base_CakeOrderSessionState__get_Instance(0);
      lVar10 = thunk_FUN_03f9944c(DAT_0918eaa8);
      CakeOrderSubsystem_Base_CakeOrderSessionState_LastPlayData___ctor(lVar10,0);
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x18);
      thunk_FUN_03f5d7b8();
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x20);
      *(byte *)(lVar10 + 0x1c) = bVar4 & 1;
      *(undefined4 *)(lVar10 + 0x20) = 1;
      *(undefined4 *)(lVar10 + 0x18) = uVar5;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(long *)(lVar6 + 0x38) = lVar10;
      thunk_FUN_03f5d7b8((long *)(lVar6 + 0x38),lVar10);
      lVar6 = *plVar15;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar6 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar8 = CakeOrder_DataSO_CakeMapSO__GetSceneName
                        (*(long *)(lVar6 + 0x48),*(undefined4 *)(lVar6 + 0x1c),0);
      lVar6 = thunk_FUN_03f9944c(DAT_0917d6f0);
      FUN_057e0400(lVar6,DAT_091b3940);
      lVar10 = thunk_FUN_03f9944c(DAT_091941b0);
      SceneTransitionR1_SceneLoader_LoadSceneRequest___ctor(lVar10,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x10),uVar8);
      uVar8 = thunk_FUN_03f9944c(DAT_091941b8);
      SceneTransitionR1_SceneLoader_LoadedSceneCoroutineDelegate___ctor(uVar8,lVar13,DAT_091d23f8,0)
      ;
      *(undefined8 *)(lVar10 + 0x28) = uVar8;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x28),uVar8);
      lVar14 = DAT_091b3948;
      if (lVar6 != 0) {
        lVar11 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            plVar15 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
            *plVar15 = lVar10;
            thunk_FUN_03f5d7b8(plVar15,lVar10);
          }
          else {
            FUN_057e0c68(lVar6,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          lVar10 = thunk_FUN_03f9944c(DAT_091941b0);
          SceneTransitionR1_SceneLoader_LoadSceneRequest___ctor(lVar10,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined8 *)(lVar10 + 0x10) = DAT_09203390;
          thunk_FUN_03f5d7b8();
          uVar8 = thunk_FUN_03f9944c(DAT_091941b8);
          SceneTransitionR1_SceneLoader_LoadedSceneCoroutineDelegate___ctor
                    (uVar8,lVar13,DAT_091d2410,0);
          *(undefined8 *)(lVar10 + 0x28) = uVar8;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x28),uVar8);
          lVar14 = DAT_091b3948;
          lVar11 = *(long *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            plVar15 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
            *plVar15 = lVar10;
            thunk_FUN_03f5d7b8(plVar15,lVar10);
          }
          else {
            FUN_057e0c68(lVar6,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          if (**(char **)(DAT_09187828 + 0xb8) != '\0') {
            lVar10 = thunk_FUN_03f9944c(DAT_091941b0);
            SceneTransitionR1_SceneLoader_LoadSceneRequest___ctor(lVar10,0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *(undefined8 *)(lVar10 + 0x10) = DAT_09207e58;
            thunk_FUN_03f5d7b8();
            uVar8 = thunk_FUN_03f9944c(DAT_091941b8);
            SceneTransitionR1_SceneLoader_LoadedSceneCoroutineDelegate___ctor
                      (uVar8,0,DAT_091d2408,0);
            *(undefined8 *)(lVar10 + 0x28) = uVar8;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x28),uVar8);
            iVar1 = *(int *)(lVar6 + 0x1c);
            lVar11 = *(long *)(lVar6 + 0x10);
            *(undefined4 *)(lVar10 + 0x30) = 1;
            lVar14 = DAT_091b3948;
            *(int *)(lVar6 + 0x1c) = iVar1 + 1;
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              plVar15 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
              *plVar15 = lVar10;
              thunk_FUN_03f5d7b8(plVar15,lVar10);
            }
            else {
              FUN_057e0c68(lVar6,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar10 = *(long *)(DAT_091b4b80 + 0x20);
          if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_03f95a6c();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_03f95a6c();
          }
          if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar14 = *(long *)(**(long **)(lVar10 + 0xb8) + 0x20);
          lVar10 = thunk_FUN_03f9944c(DAT_091941b0);
          SceneTransitionR1_SceneLoader_LoadSceneRequest___ctor(lVar10,0);
          uVar8 = thunk_FUN_03f9944c(DAT_091941b8);
          SceneTransitionR1_SceneLoader_LoadedSceneCoroutineDelegate___ctor
                    (uVar8,lVar13,DAT_091d23f0,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined8 *)(lVar10 + 0x28) = uVar8;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x28),uVar8);
          uVar8 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar8,lVar13,DAT_091d2400,0);
          if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          SceneTransitionR1_SceneLoader__LoadSequence
                    (lVar14,lVar6,lVar10,uVar8,*(undefined8 *)(*(long *)(param_1 + 8) + 0x28),0);
          goto LAB_0439b714;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_0439b714:
  cVar3 = DAT_095162d8;
  *param_1 = 0xfffffffe;
  if (cVar3 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar15 = *(long **)(param_1 + 2);
  if (plVar15 == (long *)0x0) {
    return;
  }
  lVar13 = *plVar15;
  uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == DAT_091866a8) {
        puVar9 = (undefined8 *)(lVar13 + (long)(*piVar12 + 2) * 0x10 + 0x138);
        goto LAB_0439b79c;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_03f95da8(plVar15,DAT_091866a8,2);
LAB_0439b79c:
                    /* WARNING: Could not recover jumptable at 0x0439b7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar9)(plVar15,puVar9[1]);
  return;
}


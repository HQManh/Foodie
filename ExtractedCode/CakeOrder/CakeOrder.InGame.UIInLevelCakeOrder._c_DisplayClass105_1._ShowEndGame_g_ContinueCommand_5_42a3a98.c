// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder.<>c__DisplayClass105_1$$<ShowEndGame>g__ContinueCommand|5
// address: 0x42a3a98
// body: available
// range: 0x42a3a98-0x42a3f4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a3e94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a3e9c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a3ea0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a3ea4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a3ea8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a3eac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a3eb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a3eb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a3eb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a3ebc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a3ec0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a3ec4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x042a3e98) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CakeOrder_InGame_UIInLevelCakeOrder_<>c__DisplayClass105_1__<ShowEndGame>g__ContinueCommand_5
               (long param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  byte local_3c;
  
  if ((DAT_09517248 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4948);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4950);
    DAT_09517248 = 1;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x10) = 1;
  local_3c = 0;
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *(long *)(lVar6 + 200);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_InGame_LevelPlayLoadAndSetupControl__GoHomeOnEndGame(lVar6,0);
LAB_042a3d70:
    local_3c = 1;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) goto LAB_042a3d9c;
      uVar5 = FUN_05a8eda4(DAT_091b4950);
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)(DAT_091b4948 + 0x20);
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
        if (*(long *)(**(long **)(lVar6 + 0xb8) + 0x30) != 0) {
          lVar6 = *(long *)(DAT_091b4948 + 0x20);
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
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(lVar8 + 0xc0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(lVar8 + 0x38);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x30);
          iVar1 = *(int *)(lVar8 + 0x1c);
          lVar6 = *(long *)(DAT_091b4b60 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03f95a6c();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03f95a6c();
          }
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(lVar8 + 0xc0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(lVar8 + 0x38);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapIndexById
                            (**(long **)(lVar6 + 0xb8),*(undefined8 *)(lVar8 + 0x10),0);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *(long *)(lVar6 + 0xc0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = CakeOrder_InGame_UIInLevelCakeOrder__GetNextMapIdIfLastRequiredLevel
                            (*(undefined8 *)(lVar6 + 0x38));
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(lVar8 + 200);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(lVar8 + 0x48) == 0) {
            uVar4 = 0;
          }
          else {
            lVar8 = FUN_039af8ec(DAT_091b4948);
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *(long *)(lVar7 + 200);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = CakeOrder_CakeOrderSubsystem_GameProgressScenario__IsExtraLevel
                              (lVar8,*(undefined8 *)(lVar7 + 0x48),*(undefined4 *)(lVar7 + 0x50),0);
          }
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar5 = CakeOrder_BaseUI_UIFlowPolicy__GoHomeAfterNext
                            (iVar3 == 0,iVar1 + 1,*(undefined4 *)(lVar9 + 0x10),
                             *(undefined4 *)(lVar9 + 0x18),lVar6 != 0,uVar4 & 1,0);
          if ((uVar5 & 1) != 0) {
            if (lVar6 != 0) {
              lVar6 = CakeOrderSubsystem_Base_CakeOrderSessionState__get_Instance(0);
              if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = *(long *)(lVar8 + 0xc0);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = *(long *)(lVar8 + 0x38);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(lVar8 + 0x10);
              thunk_FUN_03f5d7b8();
            }
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *(long *)(lVar6 + 200);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            CakeOrder_InGame_LevelPlayLoadAndSetupControl__GoHomeOnEndGame(lVar6,0);
            goto LAB_042a3d70;
          }
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *(long *)(lVar6 + 200);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          bVar2 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__CheckLiveAndPlayNextLevel(lVar6,0);
          goto LAB_042a3d10;
        }
      }
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *(long *)(lVar6 + 200);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_InGame_LevelPlayLoadAndSetupControl__GoHomeOnEndGame(lVar6,0);
      goto LAB_042a3d70;
    }
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *(long *)(lVar6 + 200);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    bVar2 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__CheckLiveAndRetryOnEndGame(lVar6,0);
LAB_042a3d10:
    local_3c = bVar2 & 1;
    if ((bVar2 & 1) == 0) goto LAB_042a3d9c;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0x18),0,0);
LAB_042a3d9c:
  if (*(long *)(param_1 + 0x20) != 0) {
    *(byte *)(*(long *)(param_1 + 0x20) + 0x28) = local_3c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


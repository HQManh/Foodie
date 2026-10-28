// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder.<ShowPopupBooster>d__88$$MoveNext
// address: 0x42a7828
// body: available
// range: 0x42a7828-0x42a80db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a7ac4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8030 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8034 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8038 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a803c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8040 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8044 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8048 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a804c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8050 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8054 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8058 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder_<ShowPopupBooster>d__88__MoveNext(int *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  int *piVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  
  if ((DAT_0951725c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09174bc0);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c0490);
    FUN_03f5c2a4(&DAT_091c2c38);
    FUN_03f5c2a4(&DAT_09195790);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919f9c8);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917e218);
    FUN_03f5c2a4(&DAT_091d8540);
    FUN_03f5c2a4(&DAT_091bc4b8);
    FUN_03f5c2a4(&DAT_091bc4c0);
    FUN_03f5c2a4(&DAT_091bcd78);
    FUN_03f5c2a4(&DAT_091f16b8);
    FUN_03f5c2a4(&DAT_091f16c0);
    FUN_03f5c2a4(&DAT_091f16c8);
    FUN_03f5c2a4(&DAT_091956c0);
    FUN_03f5c2a4(&DAT_091dcc58);
    FUN_03f5c2a4(&DAT_092089d0);
    DAT_0951725c = 1;
  }
  lVar12 = *(long *)(param_1 + 0xc);
  local_58 = 0;
  local_5c = 0;
  local_68 = 0;
  if (*param_1 == 0) {
    local_68 = *(undefined8 *)(param_1 + 0x18);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
LAB_042a7adc:
    lVar5 = FUN_06209cec(&local_68,DAT_091bc4b8);
LAB_042a7de0:
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = UnityEngine_Object__op_Equality(lVar5,0,0);
    if ((uVar7 & 1) == 0) {
      lVar9 = *(long *)(param_1 + 0x14);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_InGame_UIPopupCakeConfirmUseBooster__SetBoosterInfo
                (lVar5,*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)(lVar9 + 0x28));
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      piVar15 = param_1 + 0x16;
      uVar17 = *(undefined8 *)piVar15;
      uVar18 = *(undefined8 *)(lVar12 + 0xd8);
      uVar13 = *(undefined8 *)(param_1 + 0x12);
      uVar6 = thunk_FUN_03f9944c(DAT_09174bc0);
      FUN_070a8c30(uVar6,uVar13,DAT_091f16c8,0);
      uVar19 = *(undefined8 *)(param_1 + 0x12);
      uVar13 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar13,uVar19,DAT_091f16c0,0);
      uVar19 = thunk_FUN_03f9944c(DAT_09174980);
      FUN_070a8c30(uVar19,lVar12,DAT_091dcc58,0);
      CakeOrder_InGame_UIPopupBoosterSaveMeBase__SetUpDataAndEventListeners
                (lVar5,uVar18,uVar17,uVar6,uVar13,uVar19);
      CakeOrder_BaseUI_SceneMainUI__ShowPopupInStack(lVar12,lVar5,0,0,0);
      piVar15[0] = 0;
      piVar15[1] = 0;
      thunk_FUN_03f5d7b8(piVar15,0);
      goto LAB_042a7fe0;
    }
    plVar8 = (long *)FUN_03f5c394(DAT_09180318,1);
    if (*(long *)(param_1 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x12) + 0x10);
    if ((lVar5 != 0) &&
       (lVar9 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
      uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,0);
    }
    if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar8[4] = lVar5;
    thunk_FUN_03f5d7b8(plVar8 + 4,lVar5);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogErrorFormat(DAT_092089d0,plVar8,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar12 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x58);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Utilities_BoolModifierWithRegisteredSource__RemoveModifier(lVar12,2000,0);
    CakeOrder_TimeControlCakeOrder__ResumeTime(2000,0);
    lVar12 = *(long *)(param_1 + 0x12);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    lVar5 = thunk_FUN_03f9944c(DAT_091956c0);
    System_Object___ctor(lVar5,0);
    plVar8 = (long *)(param_1 + 0x12);
    *plVar8 = lVar5;
    thunk_FUN_03f5d7b8(plVar8,lVar5);
    if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar8 + 0x10) = *(undefined8 *)(param_1 + 10);
    thunk_FUN_03f5d7b8();
    if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar8 + 0x18) = *(undefined8 *)(param_1 + 0xc);
    thunk_FUN_03f5d7b8();
    if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar8 + 0x20) = *(undefined8 *)(param_1 + 0xe);
    thunk_FUN_03f5d7b8();
    if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar8 + 0x28) = *(undefined8 *)(param_1 + 0x10);
    thunk_FUN_03f5d7b8();
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar13 = *(undefined8 *)(lVar12 + 0x160);
    lVar5 = *plVar8;
    uVar6 = thunk_FUN_03f9944c(DAT_0917e218);
    FUN_05d78cfc(uVar6,lVar5,DAT_091f16b8,0);
    lVar5 = FUN_04ee3a54(uVar13,uVar6,DAT_091c0490);
    plVar14 = (long *)(param_1 + 0x14);
    *plVar14 = lVar5;
    thunk_FUN_03f5d7b8(plVar14);
    if (*(long *)(lVar12 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(*(long *)(lVar12 + 200) + 0x68);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = CakeOrder_InGame_BoosterAndSaveMeRemoteConfig__GetBoosterConfig
                      (lVar5,*(undefined8 *)(*plVar8 + 0x10),0);
    if (lVar5 != 0) {
      lVar9 = *(long *)(lVar12 + 0xc0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar11 = *(long *)(lVar9 + 0x38);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (((0 < *(int *)(lVar11 + 0x30)) || (*(int *)(lVar5 + 0x1c) <= *(int *)(lVar11 + 0x34) + 1))
         && ((0 < *(int *)(lVar5 + 0x20) ||
             ((0 < *(int *)(lVar5 + 0x24) || (0 < *(int *)(lVar5 + 0x28))))))) {
        if (*(long *)(lVar9 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        Utilities_BoolModifierWithRegisteredSource__AddModifier(*(long *)(lVar9 + 0x58),2000,0);
        CakeOrder_TimeControlCakeOrder__StopTime(2000,0);
        if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = CakeOrder_InGame_UIInLevelCakeOrder__GetKeyCountNumFreeBoosterUsed
                          (*(undefined8 *)(*plVar8 + 0x10));
        lVar9 = *(long *)(DAT_091b4b48 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_03f95a6c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_03f95a6c();
        }
        if (**(long **)(lVar9 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar4 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetInt
                          (**(long **)(lVar9 + 0xb8),uVar6,0,0);
        if (*(long *)(lVar12 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x40);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *(long *)(lVar9 + 0x30);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *(long *)(lVar9 + 0x18);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06fcbf70(lVar9,*(undefined8 *)(*plVar8 + 0x10),(long)&local_58 + 4,DAT_0919f9c8);
        lVar9 = thunk_FUN_03f9944c(DAT_09195790);
        System_Object___ctor(lVar9,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar1 = *(int *)(lVar5 + 0x20);
        iVar2 = *(int *)(lVar5 + 0x28);
        *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)(lVar5 + 0x24);
        *(bool *)(lVar9 + 0x1c) = iVar4 < iVar1;
        if (local_58._4_4_ < iVar2) {
          bVar3 = CakeOrder_InGame_UIInLevelCakeOrder__get_CanWatchBoosterOrSaveMeRewardAds(lVar12);
        }
        else {
          bVar3 = 0;
        }
        *(undefined8 *)(lVar9 + 0x58) = *(undefined8 *)(lVar5 + 0x38);
        *(byte *)(lVar9 + 0x24) = bVar3 & 1;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x58));
        if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(*plVar8 + 0x10);
        thunk_FUN_03f5d7b8();
        if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *(long *)(*plVar14 + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedName(lVar5,0);
        *(undefined8 *)(lVar9 + 0x30) = uVar6;
        thunk_FUN_03f5d7b8();
        if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *(long *)(*plVar14 + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedDesc(lVar5,0);
        *(undefined8 *)(lVar9 + 0x38) = uVar6;
        thunk_FUN_03f5d7b8();
        plVar16 = (long *)(param_1 + 0x16);
        *plVar16 = lVar9;
        thunk_FUN_03f5d7b8(plVar16,lVar9);
        if (*(long *)(lVar12 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *(long *)(*(long *)(lVar12 + 200) + 0x68);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar7 = CakeOrder_InGame_BoosterAndSaveMeRemoteConfig__TryGetBoosterPack
                          (lVar5,*(undefined8 *)(*plVar8 + 0x10),&local_58,&local_5c,0);
        if ((uVar7 & 1) != 0) {
          lVar5 = *plVar16;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined4 *)(lVar5 + 0x50) = (undefined4)local_58;
          *(undefined4 *)(lVar5 + 0x20) = local_5c;
        }
        if (*plVar14 != 0) {
          plVar8 = *(long **)(*plVar14 + 0x20);
          if (plVar8 == (long *)0x0) {
LAB_042a7d50:
            puVar10 = (undefined8 *)(lVar12 + 0x170);
          }
          else {
            uVar7 = (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
            lVar5 = *plVar14;
            if ((uVar7 & 1) == 0) {
              if (lVar5 == 0) goto LAB_042a7ddc;
              goto LAB_042a7d50;
            }
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            puVar10 = (undefined8 *)(lVar5 + 0x20);
          }
          lVar5 = FUN_04d44390(lVar12,*puVar10,0,0,DAT_091d8540);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          local_68 = FUN_062ee710(lVar5,DAT_091bcd78);
          uVar7 = FUN_06209cac(&local_68,DAT_091bc4c0);
          if ((uVar7 & 1) == 0) {
            *param_1 = 0;
            *(undefined8 *)(param_1 + 0x18) = local_68;
            thunk_FUN_03f5d7b8(param_1 + 0x18,0);
            FUN_049c2f6c(param_1 + 2,&local_68,param_1,DAT_091c2c38);
            return;
          }
          goto LAB_042a7adc;
        }
LAB_042a7ddc:
        lVar5 = 0;
        goto LAB_042a7de0;
      }
    }
    lVar12 = *plVar8;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  lVar12 = *(long *)(lVar12 + 0x28);
  if (lVar12 != 0) {
    (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
  }
LAB_042a7fe0:
  *param_1 = -2;
  piVar15 = param_1 + 0x12;
  piVar15[0] = 0;
  piVar15[1] = 0;
  thunk_FUN_03f5d7b8(piVar15,0);
  piVar15 = param_1 + 0x14;
  piVar15[0] = 0;
  piVar15[1] = 0;
  thunk_FUN_03f5d7b8(piVar15,0);
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


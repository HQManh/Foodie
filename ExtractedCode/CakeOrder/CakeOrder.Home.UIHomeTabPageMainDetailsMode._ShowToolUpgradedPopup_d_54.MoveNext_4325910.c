// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMainDetailsMode.<ShowToolUpgradedPopup>d__54$$MoveNext
// address: 0x4325910
// body: available
// range: 0x4325910-0x4325e2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4325dd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4325ddc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4325de0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4325de4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4325de8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4325dec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4325df0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4325df4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4325df8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4325dfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4325e00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4325e04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMainDetailsMode_<ShowToolUpgradedPopup>d__54__MoveNext
               (int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 local_58;
  
  if ((DAT_09517674 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_091c27f0);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba270);
    FUN_03f5c2a4(&DAT_091ba250);
    FUN_03f5c2a4(&DAT_091bc2b8);
    FUN_03f5c2a4(&DAT_091bc2c0);
    FUN_03f5c2a4(&DAT_091bcba8);
    FUN_03f5c2a4(&DAT_091f1628);
    FUN_03f5c2a4(&DAT_09195640);
    DAT_09517674 = 1;
  }
  local_58 = 0;
  if (*param_1 == 0) {
    local_58 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    lVar14 = *(long *)(param_1 + 4);
    lVar4 = thunk_FUN_03f9944c(DAT_09195640);
    System_Object___ctor(lVar4,0);
    plVar9 = (long *)(param_1 + 10);
    *plVar9 = lVar4;
    thunk_FUN_03f5d7b8(plVar9,lVar4);
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar9 + 0x10) = *(undefined8 *)(param_1 + 4);
    thunk_FUN_03f5d7b8();
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar9 + 0x18) = *(undefined8 *)(param_1 + 6);
    thunk_FUN_03f5d7b8();
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((*(long *)(lVar14 + 0x48) == 0) ||
       (lVar4 = *(long *)(*(long *)(lVar14 + 0x48) + 0x10), lVar4 == 0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(lVar4 + 0x30);
    }
    lVar10 = *(long *)(lVar14 + 0x50);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Equality(lVar10,0,0);
    if (lVar4 == 0 || (uVar5 & 1) != 0) {
      if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *(long *)(*plVar9 + 0x18);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      }
      goto LAB_04325d58;
    }
    if (*(long *)(lVar14 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *(long *)(*(long *)(lVar14 + 0x48) + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar4 + 0x38) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(*(long *)(lVar4 + 0x38) + 0x60);
    }
    uVar12 = *(undefined8 *)(lVar7 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Inequality(lVar11,0,0);
    if ((uVar5 & 1) == 0) {
LAB_04325b48:
      uVar6 = 0;
    }
    else {
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = CakeOrder_MapToolConfig__GetToolSO
                        (lVar11,*(undefined8 *)(*(long *)(param_1 + 8) + 0x50),0);
      if (lVar7 == 0) goto LAB_04325b48;
      uVar6 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedName(lVar7,0);
    }
    uVar5 = System_String__IsNullOrEmpty(uVar6,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedName(*(long *)(param_1 + 8),0);
    }
    lVar7 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetToolLevel
                      (**(long **)(lVar7 + 0xb8),uVar12,
                       *(undefined8 *)(*(long *)(param_1 + 8) + 0x50),0);
    if (*(long *)(lVar4 + 0x30) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(lVar4 + 0x30) + 0x60);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar5 & 1) == 0) {
LAB_04325c3c:
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Inequality(lVar11,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = CakeOrder_MapToolConfig__GetToolData
                          (lVar11,*(undefined8 *)(*(long *)(param_1 + 8) + 0x50),0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar3 = CakeOrder_MapToolConfig_ToolData__get_MaxLevel(lVar4,0);
        bVar1 = SBORROW4(iVar2 + 1,iVar3);
        iVar2 = (iVar2 + 1) - iVar3;
        goto LAB_04325c90;
      }
      bVar1 = false;
    }
    else {
      if (*(long *)(lVar4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x30) + 0x60);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar3 = CakeOrder_DataSO_MapUpgradeConfig__GetToolUpgradePartCount
                        (lVar4,*(undefined8 *)(*(long *)(param_1 + 8) + 0x50),0);
      if (iVar3 < 1) goto LAB_04325c3c;
      bVar1 = SBORROW4(iVar2,iVar3);
      iVar2 = iVar2 - iVar3;
LAB_04325c90:
      bVar1 = iVar2 < 0 == bVar1;
    }
    lVar4 = *(long *)(param_1 + 8);
    *(undefined1 *)(lVar14 + 0xf8) = 1;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar13 = *(undefined8 *)(lVar4 + 0x38);
    lVar4 = *plVar9;
    uVar12 = thunk_FUN_03f9944c(DAT_09174a48);
    FUN_070a8c30(uVar12,lVar4,DAT_091f1628,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = CakeOrder_Home_HomeControllerCookOrder__ShowPopupToolUpgraded
                      (lVar10,uVar6,uVar13,bVar1,uVar12,0,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_58 = FUN_062e8294(lVar4,DAT_091bcba8);
    uVar5 = FUN_062098a0(&local_58,DAT_091bc2c0);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_58;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_04340258(param_1 + 2,&local_58,param_1,DAT_091c27f0);
      return;
    }
  }
  uVar5 = FUN_062098e0(&local_58,DAT_091bc2b8);
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_Home_UIHomeTabPageMainDetailsMode_<>c__DisplayClass54_0__<ShowToolUpgradedPopup>g__OnClosed_0
              ();
  }
LAB_04325d58:
  piVar8 = param_1 + 10;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *param_1 = -2;
  thunk_FUN_03f5d7b8(piVar8,0);
  FUN_042dada8(param_1 + 2,0);
  return;
}


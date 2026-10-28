// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder.<ShowEndGame>d__105$$MoveNext
// address: 0x42a64dc
// body: available
// range: 0x42a64dc-0x42a6a6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a6a30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6a34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6a38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6a3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6a40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6a44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6a48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6a4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6a50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6a54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6a58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6a5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder_<ShowEndGame>d__105__MoveNext(int *param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined4 local_78;
  long *local_70;
  undefined8 uStack_68;
  ulong local_60;
  long *local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined8 local_38;
  
  if ((DAT_09517256 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a60);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c2b10);
    FUN_03f5c2a4(&DAT_091c2c28);
    FUN_03f5c2a4(&DAT_0919a790);
    FUN_03f5c2a4(&DAT_0919a798);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d8520);
    FUN_03f5c2a4(&DAT_091bc478);
    FUN_03f5c2a4(&DAT_091bc480);
    FUN_03f5c2a4(&DAT_091bcd58);
    FUN_03f5c2a4(&DAT_091f1668);
    FUN_03f5c2a4(&DAT_091f1670);
    FUN_03f5c2a4(&DAT_09195680);
    FUN_03f5c2a4(&DAT_091bdf58);
    DAT_09517256 = 1;
  }
  lVar10 = *(long *)(param_1 + 10);
  local_40 = 0;
  local_38 = 0;
  local_50 = (long *)0x0;
  uStack_48 = 0;
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_78 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_042a6750:
    uVar5 = FUN_06209cec(&local_38,DAT_091bc478);
    if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x20) = uVar5;
    thunk_FUN_03f5d7b8();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar10 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x58);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Utilities_BoolModifierWithRegisteredSource__AddModifier
              (lVar3,*(undefined8 *)(*(long *)(param_1 + 0xe) + 0x20),0);
    if ((char)param_1[0x10] == '\0') {
      uVar5 = 0;
      goto LAB_042a6960;
    }
    CakeOrder_InGame_UIInLevelCakeOrder__LoadWinLogoAsync(&local_a0,lVar10);
    local_60 = local_90;
    uStack_68 = uStack_98;
    uStack_98 = 0;
    local_90 = 0;
    local_70 = local_a0;
    local_a0 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdf58 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_98 = uStack_68;
    local_a0 = local_70;
    local_90 = local_60;
    thunk_FUN_03f5d7b8(&local_a0,0);
    uStack_48 = uStack_98;
    local_50 = local_a0;
    local_40 = local_90;
    uVar12 = FUN_041e5390(&local_50,DAT_0919a798);
    if ((uVar12 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x16) = uStack_48;
      *(long **)(param_1 + 0x14) = local_50;
      *(ulong *)(param_1 + 0x18) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0x14,0);
      FUN_049bdc68(param_1 + 2,&local_50,param_1,DAT_091c2b10);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      lVar3 = thunk_FUN_03f9944c(DAT_09195680);
      System_Object___ctor(lVar3,0);
      plVar11 = (long *)(param_1 + 0xe);
      *plVar11 = lVar3;
      thunk_FUN_03f5d7b8(plVar11,lVar3);
      if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(*plVar11 + 0x10) = *(undefined8 *)(param_1 + 10);
      thunk_FUN_03f5d7b8();
      if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(*plVar11 + 0x18) = *(undefined8 *)(param_1 + 0xc);
      thunk_FUN_03f5d7b8();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_InGame_UIInLevelCakeOrder__HideAllUI(lVar10);
      if (*(long *)(lVar10 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_InGame_UIInLevelHUDPuzzleStyle__SetSpeedUp(*(long *)(lVar10 + 0x100),0);
      lVar3 = *plVar11;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(uint *)(*(long *)(lVar3 + 0x18) + 0x10);
      bVar2 = (uVar1 & 0xfffffffe) == 2;
      *(bool *)(param_1 + 0x10) = bVar2;
      *(bool *)(lVar3 + 0x29) = uVar1 == 2;
      lVar7 = 400;
      if (!bVar2) {
        lVar7 = 0x198;
      }
      *(undefined1 *)(lVar3 + 0x28) = 0;
      uVar6 = *(undefined8 *)(lVar10 + lVar7);
      uVar5 = thunk_FUN_03f9944c(DAT_09174a60);
      FUN_070a8c30(uVar5,lVar3,DAT_091f1670,0);
      lVar3 = FUN_04d44390(lVar10,uVar6,0,uVar5,DAT_091d8520);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_38 = FUN_062ee710(lVar3,DAT_091bcd58);
      uVar12 = FUN_06209cac(&local_38,DAT_091bc480);
      if ((uVar12 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x12) = local_38;
        thunk_FUN_03f5d7b8(param_1 + 0x12,0);
        FUN_049c2a80(param_1 + 2,&local_38,param_1,DAT_091c2c28);
        return;
      }
      goto LAB_042a6750;
    }
    local_40 = *(ulong *)(param_1 + 0x18);
    uStack_48 = *(undefined8 *)(param_1 + 0x16);
    local_50 = *(long **)(param_1 + 0x14);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
  }
  plVar11 = local_50;
  uVar5 = uStack_48;
  if (local_50 != (long *)0x0) {
    uVar12 = local_40 & 0xffff;
    lVar3 = *(long *)(DAT_0919a790 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar7 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_042a694c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar11,lVar3,0);
LAB_042a694c:
    uVar5 = (*(code *)*puVar4)(plVar11,uVar12,puVar4[1]);
  }
LAB_042a6960:
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar12 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  lVar3 = *(long *)(param_1 + 0xe);
  if ((uVar12 & 1) == 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_BaseUI_SceneMainUI__ShowPopupInStack(lVar10,*(undefined8 *)(lVar3 + 0x20),0,0,0);
  }
  else {
    uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar6,lVar3,DAT_091f1668,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_InGame_UIInLevelCakeOrder__ShowWinLogo(lVar10,uVar5,uVar6);
  }
  piVar9 = param_1 + 0xe;
  piVar9[0] = 0;
  piVar9[1] = 0;
  *param_1 = -2;
  thunk_FUN_03f5d7b8(piVar9,0);
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


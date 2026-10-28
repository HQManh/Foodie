// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder.<OnSetUp>d__79$$MoveNext
// address: 0x42a5aa4
// body: available
// range: 0x42a5aa4-0x42a60af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a6078 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a607c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6080 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6084 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6088 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a608c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6090 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6094 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6098 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a609c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a60a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a60a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder_<OnSetUp>d__79__MoveNext(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  long *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined8 local_38;
  
  if ((DAT_09517255 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf658);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197a08);
    FUN_03f5c2a4(&DAT_09197a18);
    FUN_03f5c2a4(&DAT_09197a20);
    FUN_03f5c2a4(&DAT_09197a28);
    FUN_03f5c2a4(&DAT_091c21d8);
    FUN_03f5c2a4(&DAT_091c1f18);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bc418);
    FUN_03f5c2a4(&DAT_091bc420);
    FUN_03f5c2a4(&DAT_091bcce8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09517255 = 1;
  }
  lVar9 = *(long *)(param_1 + 6);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_38 = 0;
  local_58 = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_042a5dc0:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar4 = local_50._0_8_;
    if ((long *)local_50._0_8_ != (long *)0x0) {
      lVar10 = *(long *)local_50._0_8_;
      uVar11 = local_50._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_042a5e44;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,2);
LAB_042a5e44:
      (*(code *)*puVar6)(uVar4,uVar11,puVar6[1]);
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = FUN_0640f598(lVar9 + 0x120,DAT_09197a08);
    if ((uVar5 & 1) == 0) goto LAB_042a5f50;
    lVar10 = FUN_0640f884(lVar9 + 0x120,DAT_09197a28);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_38 = FUN_062ee710(lVar10,DAT_091bcce8);
    uVar5 = FUN_06209cac(&local_38,DAT_091bc420);
    if ((uVar5 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0xc) = local_38;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_042b0a80(param_1 + 2,&local_38,param_1,DAT_091c1f18);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar9 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar10 + 0x58) != 0) {
        if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar8 = (long *)CakeOrder_DataSO_MapAssetPackSO__GetRandomBoosterBgPanelByDifficulty
                                   (*(long *)(lVar10 + 0x58),
                                    *(undefined4 *)(*(long *)(lVar10 + 0x28) + 0x14),0);
        if ((plVar8 != (long *)0x0) &&
           (uVar5 = (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250)),
           (uVar5 & 1) != 0)) {
          if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_04b711d8(&local_98,plVar8,DAT_091bf658);
          local_80._8_8_ = uStack_90;
          local_80._0_8_ = local_98;
          local_70 = local_88;
          *(undefined8 *)(lVar9 + 0x128) = uStack_90;
          *(long **)(lVar9 + 0x120) = local_98;
          *(undefined8 *)(lVar9 + 0x130) = local_88;
          thunk_FUN_03f5d7b8(lVar9 + 0x120,0);
        }
      }
      if (*(long *)(lVar9 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_InGame_UIInLevelGeneralReferences__HideAllCountersImmediate();
      lVar10 = *(long *)(lVar9 + 0xc0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar9 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_InGame_UIInLevelHUDPuzzleStyle__SetUp
                (*(long *)(lVar9 + 0x100),*(undefined8 *)(lVar10 + 0x38),
                 *(undefined8 *)(lVar10 + 0x40));
      plVar8 = *(long **)(lVar9 + 0xc0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (plVar8[7] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *(long *)(plVar8[7] + 0x28);
      if (lVar10 != 0) {
        CakeOrder_BaseUI_SceneMainUI__SetBlurWeather(lVar9,*(undefined4 *)(lVar10 + 0x10),0);
        plVar8 = *(long **)(lVar9 + 0xc0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      auVar12 = (**(code **)(*plVar8 + 0x1b8))(plVar8,lVar9,*(undefined8 *)(*plVar8 + 0x1c0));
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_80 = auVar12;
      thunk_FUN_03f5d7b8(local_80,0);
      uVar2 = local_80._8_8_;
      uVar4 = local_80._0_8_;
      local_50 = local_80;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      if ((long *)uVar4 != (long *)0x0) {
        lVar10 = *(long *)uVar4;
        uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091868c0) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_042a5dac;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(uVar4,DAT_091868c0,0);
LAB_042a5dac:
        iVar3 = (*(code *)*puVar6)(uVar4,uVar2 & 0xffffffff,puVar6[1]);
        if (iVar3 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 8) = local_50;
          thunk_FUN_03f5d7b8(param_1 + 8,0);
          FUN_042b0974(param_1 + 2,local_50,param_1,DAT_091c21d8);
          return;
        }
      }
      goto LAB_042a5dc0;
    }
    local_38 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
    local_50 = ZEXT816(0);
  }
  FUN_06209cec(&local_38,DAT_091bc418);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar3 = FUN_0640f818(lVar9 + 0x120,DAT_09197a20);
  if (iVar3 == 1) {
    uVar4 = FUN_0640f7ac(lVar9 + 0x120,DAT_09197a18);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      lVar10 = *(long *)(lVar9 + 0x108);
      uVar4 = FUN_0640f7ac(lVar9 + 0x120,DAT_09197a18);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar4,uVar4);
      }
      UnityEngine_UI_Image__set_sprite(lVar10,uVar4,0);
    }
  }
LAB_042a5f50:
  CakeOrder_InGame_UIInLevelCakeOrder__HideAllUIImmediate(lVar9);
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar8 = *(long **)(param_1 + 2);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091866a8) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_042a5fe0;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091866a8,2);
LAB_042a5fe0:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
  }
  return;
}


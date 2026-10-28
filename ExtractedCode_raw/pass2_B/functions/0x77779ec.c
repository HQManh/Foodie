// rea decompile_all
// name: _GAME.Team.TeamManager.<FetchTeamInfoSummaryPeriodic>d__15$$MoveNext
// address: 0x77779ec
// body: available
// range: 0x77779ec-0x7778103 inclusive
// range: 0x777812c-0x777814b inclusive
// range: 0x77781f0-0x777832b inclusive
// range: 0x7778344-0x77796e3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77796b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77796b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77796bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77796c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77796c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77796c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77796cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77796d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77796d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77796d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77796dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77796e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager_<FetchTeamInfoSummaryPeriodic>d__15__MoveNext(int *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined1 local_e0 [16];
  ulong local_d0;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  ulong local_a0;
  undefined1 local_90 [16];
  ulong local_80;
  undefined1 local_70 [16];
  
  if ((DAT_09522cf5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091c2b08);
    FUN_03f5c2a4(&DAT_091c2db0);
    FUN_03f5c2a4(&DAT_0919a760);
    FUN_03f5c2a4(&DAT_0919a768);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_09189970);
    FUN_03f5c2a4(&DAT_091ba4f0);
    FUN_03f5c2a4(&DAT_0917e758);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bdf40);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522cf5 = 1;
  }
  local_70 = ZEXT816(0);
  auVar19 = ZEXT816(0);
  local_90._8_8_ = 0;
  local_90._0_8_ = 0;
  auVar8 = ZEXT816(0);
  auVar7 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  iVar9 = *param_1;
  local_80 = 0;
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  auVar6 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  auVar2 = ZEXT816(0);
  auVar1 = ZEXT816(0);
  local_a0 = 0;
  local_b8 = 0;
  if (iVar9 < 4) {
    if (iVar9 < 2) {
      if (iVar9 == 0) {
        local_70 = *(undefined1 (*) [16])(param_1 + 10);
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *param_1 = -1;
        goto LAB_07777f70;
      }
      auVar19 = ZEXT816(0);
      if (iVar9 == 1) {
        local_70 = *(undefined1 (*) [16])(param_1 + 10);
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *param_1 = -1;
        goto LAB_07777c64;
      }
    }
    else {
      if (iVar9 == 2) {
        local_80 = *(ulong *)(param_1 + 0x14);
        local_90 = *(undefined1 (*) [16])(param_1 + 0x10);
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        *param_1 = -1;
        goto LAB_07778524;
      }
      if (iVar9 == 3) {
        local_70 = *(undefined1 (*) [16])(param_1 + 10);
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *param_1 = -1;
        goto LAB_07777cf0;
      }
    }
  }
  else if (iVar9 < 6) {
    if (iVar9 == 4) {
      local_80 = *(ulong *)(param_1 + 0x14);
      local_90 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
      goto LAB_07778c28;
    }
    auVar19 = ZEXT816(0);
    if (iVar9 == 5) {
      local_70 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
      goto LAB_07777d7c;
    }
  }
  else {
    if (iVar9 == 6) {
      local_70 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
      goto LAB_0777921c;
    }
    if (iVar9 == 7) {
      local_70 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
      goto LAB_077793a4;
    }
    auVar19 = ZEXT816(0);
    if (iVar9 == 8) {
      local_70 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
      local_b0 = auVar4;
      local_90 = auVar7;
      goto LAB_07777e08;
    }
  }
  while( true ) {
    local_70 = auVar19;
    if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar13 = DAT_091ba4f0;
    lVar12 = *(long *)(DAT_091ba4f0 + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar13 = *(long *)(lVar13 + 0x20);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f95a6c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f95a6c();
    }
    uVar17 = **(undefined8 **)(lVar13 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar15 = UnityEngine_Object__op_Inequality(uVar17,0,0);
    if ((uVar15 & 1) == 0) break;
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar15 = _GAME_BaseGame_ABIServerAPI__get_IsIdentityReady(0);
    if ((uVar15 & 1) != 0) {
      uVar15 = _GAME_BaseGame_IdentityRecovery__get_CanStartNormalTeamConsumers(0);
      if ((uVar15 & 1) != 0) break;
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar19 = Cysharp_Threading_Tasks_UniTask__Delay(1000,0,8,0,0,0);
    local_e0 = auVar19;
    thunk_FUN_03f5d7b8(local_e0,0);
    local_70 = local_e0;
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
    uVar17 = local_70._0_8_;
    if ((long *)local_70._0_8_ != (long *)0x0) {
      lVar13 = *(long *)local_70._0_8_;
      uVar18 = local_70._8_8_ & 0xffff;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_091868c0) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_07777f5c;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_07777f5c:
      iVar9 = (*(code *)*puVar10)(uVar17,uVar18,puVar10[1]);
      if (iVar9 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049caf8c(param_1 + 2,local_70,param_1,DAT_091c2db0);
        return;
      }
    }
LAB_07777f70:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar17 = local_70._0_8_;
    auVar19 = local_70;
    if ((long *)local_70._0_8_ != (long *)0x0) {
      lVar13 = *(long *)local_70._0_8_;
      uVar18 = local_70._8_8_ & 0xffff;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_091868c0) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_07777fe8;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_07777fe8:
      (*(code *)*puVar10)(uVar17,uVar18,puVar10[1]);
      auVar19 = local_70;
    }
  }
LAB_0777943c:
  if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar13 = DAT_091ba4f0;
  lVar12 = *(long *)(DAT_091ba4f0 + 0x20);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03f95a6c();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03f95a6c();
  }
  if (*(int *)(lVar12 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar13 = *(long *)(lVar13 + 0x20);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_03f95a6c();
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_03f95a6c();
  }
  uVar17 = **(undefined8 **)(lVar13 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar15 = UnityEngine_Object__op_Inequality(uVar17,0,0);
  if ((uVar15 & 1) == 0) goto LAB_077794e4;
  while( true ) {
    if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar13 = DAT_091ba4f0;
    lVar12 = *(long *)(DAT_091ba4f0 + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar13 = *(long *)(lVar13 + 0x20);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f95a6c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f95a6c();
    }
    uVar17 = **(undefined8 **)(lVar13 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar15 = UnityEngine_Object__op_Inequality(uVar17,0,0);
    if ((uVar15 & 1) == 0) break;
    uVar15 = _GAME_BaseGame_SessionManager__get_IsPlayingLevel(0);
    if ((uVar15 & 1) == 0) break;
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar19 = Cysharp_Threading_Tasks_UniTask__Delay(999,0,8,0,0,0);
    local_e0 = auVar19;
    thunk_FUN_03f5d7b8(local_e0,0);
    local_70 = local_e0;
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
    uVar17 = local_70._0_8_;
    auVar6 = local_b0;
    auVar8 = local_90;
    if ((long *)local_70._0_8_ != (long *)0x0) {
      lVar13 = *(long *)local_70._0_8_;
      uVar18 = local_70._8_8_ & 0xffff;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_091868c0) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_077782dc;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_077782dc:
      iVar9 = (*(code *)*puVar10)(uVar17,uVar18,puVar10[1]);
      auVar6 = local_b0;
      auVar8 = local_90;
      if (iVar9 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 10) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049caf8c(param_1 + 2,local_70,param_1,DAT_091c2db0);
        return;
      }
    }
LAB_07777c64:
    local_b0 = auVar6;
    local_90 = auVar8;
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar17 = local_70._0_8_;
    if ((long *)local_70._0_8_ != (long *)0x0) {
      lVar13 = *(long *)local_70._0_8_;
      uVar18 = local_70._8_8_ & 0xffff;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_091868c0) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_07777cdc;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_07777cdc:
      (*(code *)*puVar10)(uVar17,uVar18,puVar10[1]);
    }
  }
  if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar13 = DAT_091ba4f0;
  lVar12 = *(long *)(DAT_091ba4f0 + 0x20);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03f95a6c();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03f95a6c();
  }
  if (*(int *)(lVar12 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar13 = *(long *)(lVar13 + 0x20);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_03f95a6c();
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_03f95a6c();
  }
  uVar17 = **(undefined8 **)(lVar13 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar15 = UnityEngine_Object__op_Equality(uVar17,0,0);
  if ((uVar15 & 1) != 0) goto LAB_077794e4;
  _GAME_Team_TeamServer__GetTeamInfoSummary(local_e0,0);
  local_a0 = local_d0;
  auVar19 = local_e0;
  local_e0._8_8_ = 0;
  local_d0 = 0;
  local_e0._0_8_ = 0;
  local_b0 = auVar19;
  if ((*(byte *)(*(long *)(DAT_091bdf40 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  local_d0 = local_a0;
  local_e0 = local_b0;
  thunk_FUN_03f5d7b8(local_e0,0);
  local_80 = local_d0;
  local_90 = local_e0;
  uVar15 = FUN_041e5390(local_90,DAT_0919a768);
  auVar1 = local_b0;
  if ((uVar15 & 1) == 0) {
    *param_1 = 2;
    *(undefined1 (*) [16])(param_1 + 0x10) = local_90;
    *(ulong *)(param_1 + 0x14) = local_80;
    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
    FUN_049bd038(param_1 + 2,local_90,param_1,DAT_091c2b08);
    return;
  }
LAB_07778524:
  uVar17 = local_90._0_8_;
  lVar13 = local_90._8_8_;
  if ((long *)local_90._0_8_ != (long *)0x0) {
    uVar15 = local_80 & 0xffff;
    lVar13 = *(long *)(DAT_0919a760 + 0x20);
    local_b0 = auVar1;
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f95a6c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f95a6c(lVar13);
    }
    lVar12 = *(long *)uVar17;
    uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar18 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar13) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_077785c0;
        }
        uVar18 = uVar18 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar18 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(uVar17,lVar13,0);
LAB_077785c0:
    lVar13 = (*(code *)*puVar10)(uVar17,uVar15,puVar10[1]);
    auVar1 = local_b0;
  }
  plVar16 = (long *)(param_1 + 0xe);
  *plVar16 = lVar13;
  local_b0 = auVar1;
  thunk_FUN_03f5d7b8(plVar16);
  if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar13 = DAT_091ba4f0;
  lVar12 = *(long *)(DAT_091ba4f0 + 0x20);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03f95a6c();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03f95a6c();
  }
  if (*(int *)(lVar12 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar13 = *(long *)(lVar13 + 0x20);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_03f95a6c();
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_03f95a6c();
  }
  uVar17 = **(undefined8 **)(lVar13 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar15 = UnityEngine_Object__op_Equality(uVar17,0,0);
  if ((uVar15 & 1) != 0) goto LAB_077794e4;
  if (*plVar16 != 0) {
    if (*(long *)(*plVar16 + 0x10) < 1) {
LAB_0777871c:
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      puVar10 = (undefined8 *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
      *puVar10 = 0;
      thunk_FUN_03f5d7b8(puVar10,0);
      if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      puVar10 = (undefined8 *)(**(long **)(DAT_0918b978 + 0xb8) + 0x40);
      *puVar10 = 0;
      thunk_FUN_03f5d7b8(puVar10,0);
    }
    else {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar13 = **(long **)(DAT_0918b978 + 0xb8);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar13 + 0x38) != 0) {
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar13 = **(long **)(DAT_0918b978 + 0xb8);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        if (*(long *)(lVar13 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(*(long *)(lVar13 + 0x38) + 0x10) != *(long *)(*plVar16 + 0x10))
        goto LAB_0777871c;
      }
    }
    if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < *(long *)(*plVar16 + 0x10)) {
      piVar14 = param_1 + 0x16;
      piVar14[0] = 0;
      piVar14[1] = 0;
      thunk_FUN_03f5d7b8(piVar14,0);
      while( true ) {
        if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar13 = DAT_091ba4f0;
        lVar12 = *(long *)(DAT_091ba4f0 + 0x20);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        if (*(int *)(lVar12 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar13 = *(long *)(lVar13 + 0x20);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_03f95a6c();
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_03f95a6c();
        }
        uVar17 = **(undefined8 **)(lVar13 + 0xb8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar15 = UnityEngine_Object__op_Inequality(uVar17,0,0);
        if (((uVar15 & 1) == 0) || (*(long *)(param_1 + 0x16) != 0)) break;
        while( true ) {
          if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar13 = DAT_091ba4f0;
          lVar12 = *(long *)(DAT_091ba4f0 + 0x20);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_03f95a6c();
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_03f95a6c();
          }
          if (*(int *)(lVar12 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar13 = *(long *)(lVar13 + 0x20);
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_03f95a6c();
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_03f95a6c();
          }
          uVar17 = **(undefined8 **)(lVar13 + 0xb8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar15 = UnityEngine_Object__op_Inequality(uVar17,0,0);
          if ((uVar15 & 1) == 0) break;
          uVar15 = _GAME_BaseGame_SessionManager__get_IsPlayingLevel(0);
          if ((uVar15 & 1) == 0) break;
          if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          auVar19 = Cysharp_Threading_Tasks_UniTask__Delay(999,0,8,0,0,0);
          local_e0 = auVar19;
          thunk_FUN_03f5d7b8(local_e0,0);
          local_70 = local_e0;
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
          uVar17 = local_70._0_8_;
          auVar2 = local_b0;
          auVar5 = local_90;
          if ((long *)local_70._0_8_ != (long *)0x0) {
            lVar13 = *(long *)local_70._0_8_;
            uVar18 = local_70._8_8_ & 0xffff;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar15 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == DAT_091868c0) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_07779564;
                }
                uVar15 = uVar15 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_07779564:
            iVar9 = (*(code *)*puVar10)(uVar17,uVar18,puVar10[1]);
            auVar2 = local_b0;
            auVar5 = local_90;
            if (iVar9 == 0) {
              *param_1 = 3;
              *(undefined1 (*) [16])(param_1 + 10) = local_70;
              thunk_FUN_03f5d7b8(param_1 + 10,0);
              FUN_049caf8c(param_1 + 2,local_70,param_1,DAT_091c2db0);
              return;
            }
          }
LAB_07777cf0:
          local_b0 = auVar2;
          local_90 = auVar5;
          if (DAT_095162d6 == '\0') {
            FUN_03f5c2a4(&DAT_091868c0);
            DAT_095162d6 = '\x01';
          }
          uVar17 = local_70._0_8_;
          if ((long *)local_70._0_8_ != (long *)0x0) {
            lVar13 = *(long *)local_70._0_8_;
            uVar18 = local_70._8_8_ & 0xffff;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar15 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == DAT_091868c0) {
                  puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                  goto LAB_07777d68;
                }
                uVar15 = uVar15 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_07777d68:
            (*(code *)*puVar10)(uVar17,uVar18,puVar10[1]);
          }
        }
        if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar13 = DAT_091ba4f0;
        lVar12 = *(long *)(DAT_091ba4f0 + 0x20);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        if (*(int *)(lVar12 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar13 = *(long *)(lVar13 + 0x20);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_03f95a6c();
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_03f95a6c();
        }
        uVar17 = **(undefined8 **)(lVar13 + 0xb8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar15 = UnityEngine_Object__op_Equality(uVar17,0,0);
        if ((uVar15 & 1) != 0) goto LAB_077794e4;
        if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar17 = *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x10);
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        _GAME_Team_TeamManager__GetFullTeamInfo(local_e0,uVar17);
        local_a0 = local_d0;
        auVar19 = local_e0;
        local_e0._8_8_ = 0;
        local_d0 = 0;
        local_e0._0_8_ = 0;
        local_b0 = auVar19;
        if ((*(byte *)(*(long *)(DAT_091bdf40 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        local_d0 = local_a0;
        local_e0 = local_b0;
        thunk_FUN_03f5d7b8(local_e0,0);
        local_80 = local_d0;
        local_90 = local_e0;
        uVar15 = FUN_041e5390(local_90,DAT_0919a768);
        auVar1 = local_b0;
        if ((uVar15 & 1) == 0) {
          *param_1 = 4;
          *(undefined1 (*) [16])(param_1 + 0x10) = local_90;
          *(ulong *)(param_1 + 0x14) = local_80;
          thunk_FUN_03f5d7b8(param_1 + 0x10,0);
          FUN_049bd038(param_1 + 2,local_90,param_1,DAT_091c2b08);
          return;
        }
LAB_07778c28:
        uVar17 = local_90._0_8_;
        uVar11 = local_90._8_8_;
        if ((long *)local_90._0_8_ != (long *)0x0) {
          uVar15 = local_80 & 0xffff;
          lVar13 = *(long *)(DAT_0919a760 + 0x20);
          local_b0 = auVar1;
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_03f95a6c();
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x28);
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_03f95a6c(lVar13);
          }
          lVar12 = *(long *)uVar17;
          uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar18 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar13) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_07778ff8;
              }
              uVar18 = uVar18 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar18 != 0);
          }
          puVar10 = (undefined8 *)FUN_03f95da8(uVar17,lVar13,0);
LAB_07778ff8:
          uVar11 = (*(code *)*puVar10)(uVar17,uVar15,puVar10[1]);
          auVar1 = local_b0;
        }
        *(undefined8 *)(param_1 + 0x16) = uVar11;
        local_b0 = auVar1;
        thunk_FUN_03f5d7b8();
        if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar13 = DAT_091ba4f0;
        lVar12 = *(long *)(DAT_091ba4f0 + 0x20);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        if (*(int *)(lVar12 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar13 = *(long *)(lVar13 + 0x20);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_03f95a6c();
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_03f95a6c();
        }
        uVar17 = **(undefined8 **)(lVar13 + 0xb8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar15 = UnityEngine_Object__op_Equality(uVar17,0,0);
        if ((uVar15 & 1) != 0) goto LAB_077794e4;
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        auVar19 = Cysharp_Threading_Tasks_UniTask__Delay(1000,0,8,0,0,0);
        local_e0 = auVar19;
        thunk_FUN_03f5d7b8(local_e0,0);
        local_70 = local_e0;
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
        uVar17 = local_70._0_8_;
        auVar1 = local_b0;
        auVar3 = local_90;
        if ((long *)local_70._0_8_ != (long *)0x0) {
          lVar13 = *(long *)local_70._0_8_;
          uVar18 = local_70._8_8_ & 0xffff;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == DAT_091868c0) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_077791ac;
              }
              uVar15 = uVar15 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_077791ac:
          iVar9 = (*(code *)*puVar10)(uVar17,uVar18,puVar10[1]);
          auVar1 = local_b0;
          auVar3 = local_90;
          if (iVar9 == 0) {
            *param_1 = 5;
            *(undefined1 (*) [16])(param_1 + 10) = local_70;
            thunk_FUN_03f5d7b8(param_1 + 10,0);
            FUN_049caf8c(param_1 + 2,local_70,param_1,DAT_091c2db0);
            return;
          }
        }
LAB_07777d7c:
        local_b0 = auVar1;
        local_90 = auVar3;
        if (DAT_095162d6 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d6 = '\x01';
        }
        uVar17 = local_70._0_8_;
        if ((long *)local_70._0_8_ != (long *)0x0) {
          lVar13 = *(long *)local_70._0_8_;
          uVar18 = local_70._8_8_ & 0xffff;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == DAT_091868c0) {
                puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                goto LAB_07777df4;
              }
              uVar15 = uVar15 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_07777df4:
          (*(code *)*puVar10)(uVar17,uVar18,puVar10[1]);
        }
      }
      if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar13 = DAT_091ba4f0;
      lVar12 = *(long *)(DAT_091ba4f0 + 0x20);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c();
      }
      if (*(int *)(lVar12 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar13 = *(long *)(lVar13 + 0x20);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03f95a6c();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03f95a6c();
      }
      uVar17 = **(undefined8 **)(lVar13 + 0xb8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar15 = UnityEngine_Object__op_Equality(uVar17,0,0);
      if ((uVar15 & 1) != 0) {
LAB_077794e4:
        *param_1 = -2;
        System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
        return;
      }
      piVar14 = param_1 + 0x16;
      uVar17 = *(undefined8 *)piVar14;
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar15 = _GAME_Team_TeamManager__ApplyOwnRoster(uVar17);
      if ((uVar15 & 1) == 0) goto LAB_07778cb0;
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar19 = _GAME_Team_TeamManager__TryBackfillTeamCountryCode();
      Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar19._0_8_,auVar19._8_8_,0);
      goto LAB_07778cd4;
    }
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *(undefined4 *)(*(long *)(DAT_0918b978 + 0xb8) + 0x20) = 0;
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar13 = *plVar16;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar12 = *(long *)(**(long **)(DAT_091896c0 + 0xb8) + 0x50);
    _GAME_Profile_ProfileManager__SaveTeamInfo
              (*(undefined8 *)(lVar13 + 0x10),*(undefined4 *)(lVar13 + 0x1c),
               *(undefined8 *)(lVar13 + 0x20),0);
    if (0 < lVar12) {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_Team_TeamManager__RefreshTeamUIAfterRemoved(lVar12);
    }
    goto LAB_07778ce4;
  }
  if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  puVar10 = (undefined8 *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
  *puVar10 = 0;
  thunk_FUN_03f5d7b8(puVar10,0);
  if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  puVar10 = (undefined8 *)(**(long **)(DAT_0918b978 + 0xb8) + 0x40);
  *puVar10 = 0;
  thunk_FUN_03f5d7b8(puVar10,0);
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  auVar19 = Cysharp_Threading_Tasks_UniTask__Delay(1000,0,8,0,0,0);
  local_e0 = auVar19;
  thunk_FUN_03f5d7b8(local_e0,0);
  local_70 = local_e0;
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
  uVar17 = local_70._0_8_;
  if ((long *)local_70._0_8_ != (long *)0x0) {
    lVar13 = *(long *)local_70._0_8_;
    uVar18 = local_70._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == DAT_091868c0) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_07779508;
        }
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_07779508:
    iVar9 = (*(code *)*puVar10)(uVar17,uVar18,puVar10[1]);
    if (iVar9 == 0) {
      *param_1 = 8;
      *(undefined1 (*) [16])(param_1 + 10) = local_70;
      thunk_FUN_03f5d7b8(param_1 + 10,0);
      FUN_049caf8c(param_1 + 2,local_70,param_1,DAT_091c2db0);
      return;
    }
  }
LAB_07777e08:
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  plVar16 = (long *)local_70._0_8_;
  if ((long *)local_70._0_8_ != (long *)0x0) {
    lVar13 = *(long *)local_70._0_8_;
    uVar18 = local_70._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == DAT_091868c0) goto LAB_0777940c;
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
    goto LAB_0777941c;
  }
  goto LAB_0777942c;
LAB_07778cb0:
  if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(int *)(*(long *)(DAT_0918b978 + 0xb8) + 0x20) == 1) goto LAB_0777943c;
LAB_07778cd4:
  piVar14[0] = 0;
  piVar14[1] = 0;
  thunk_FUN_03f5d7b8(piVar14,0);
LAB_07778ce4:
  if (*(int *)(DAT_09189970 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar15 = _GAME_Bridge_R1RemoteConfig__get_TeamEnableSendHeart(0);
  if ((uVar15 & 1) != 0) {
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar19 = _GAME_Team_TeamManager__FetchLifeHelp(0x14,0,0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_e0 = auVar19;
    thunk_FUN_03f5d7b8(local_e0,0);
    local_70 = local_e0;
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
    uVar17 = local_70._0_8_;
    auVar4 = local_b0;
    auVar7 = local_90;
    if ((long *)local_70._0_8_ != (long *)0x0) {
      lVar13 = *(long *)local_70._0_8_;
      uVar18 = local_70._8_8_ & 0xffff;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_091868c0) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_07779208;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_07779208:
      iVar9 = (*(code *)*puVar10)(uVar17,uVar18,puVar10[1]);
      auVar4 = local_b0;
      auVar7 = local_90;
      if (iVar9 == 0) {
        *param_1 = 6;
        *(undefined1 (*) [16])(param_1 + 10) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049caf8c(param_1 + 2,local_70,param_1,DAT_091c2db0);
        return;
      }
    }
LAB_0777921c:
    local_b0 = auVar4;
    local_90 = auVar7;
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar17 = local_70._0_8_;
    if ((long *)local_70._0_8_ != (long *)0x0) {
      lVar13 = *(long *)local_70._0_8_;
      uVar18 = local_70._8_8_ & 0xffff;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_091868c0) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_07779294;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_07779294:
      (*(code *)*puVar10)(uVar17,uVar18,puVar10[1]);
    }
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  auVar19 = Cysharp_Threading_Tasks_UniTask__Delay(10000,0,8,0,0,0);
  local_e0 = auVar19;
  thunk_FUN_03f5d7b8(local_e0,0);
  local_70 = local_e0;
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
  uVar17 = local_70._0_8_;
  auVar2 = local_b0;
  auVar5 = local_90;
  if ((long *)local_70._0_8_ != (long *)0x0) {
    lVar13 = *(long *)local_70._0_8_;
    uVar18 = local_70._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == DAT_091868c0) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_07779390;
        }
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_07779390:
    iVar9 = (*(code *)*puVar10)(uVar17,uVar18,puVar10[1]);
    auVar2 = local_b0;
    auVar5 = local_90;
    if (iVar9 == 0) {
      *param_1 = 7;
      *(undefined1 (*) [16])(param_1 + 10) = local_70;
      thunk_FUN_03f5d7b8(param_1 + 10,0);
      FUN_049caf8c(param_1 + 2,local_70,param_1,DAT_091c2db0);
      return;
    }
  }
LAB_077793a4:
  local_b0 = auVar2;
  local_90 = auVar5;
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  plVar16 = (long *)local_70._0_8_;
  if ((long *)local_70._0_8_ == (long *)0x0) goto LAB_0777942c;
  lVar13 = *(long *)local_70._0_8_;
  uVar18 = local_70._8_8_ & 0xffff;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == DAT_091868c0) goto LAB_0777940c;
      uVar15 = uVar15 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_0777941c:
  (*(code *)*puVar10)(plVar16,uVar18,puVar10[1]);
LAB_0777942c:
  piVar14 = param_1 + 0xe;
  piVar14[0] = 0;
  piVar14[1] = 0;
  thunk_FUN_03f5d7b8(piVar14,0);
  goto LAB_0777943c;
LAB_0777940c:
  puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
  plVar16 = (long *)local_70._0_8_;
  goto LAB_0777941c;
}


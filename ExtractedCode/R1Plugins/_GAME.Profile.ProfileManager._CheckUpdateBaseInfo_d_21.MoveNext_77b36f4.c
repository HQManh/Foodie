// rea decompile_all
// name: _GAME.Profile.ProfileManager.<CheckUpdateBaseInfo>d__21$$MoveNext
// address: 0x77b36f4
// body: available
// range: 0x77b36f4-0x77b431f inclusive
// range: 0x77b43a0-0x77b44bb inclusive
// range: 0x77b44c4-0x77b493b inclusive
// range: 0x77b4984-0x77b5a67 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77b4310 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b4314 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b4318 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b431c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b5a48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b5a4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b5a50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b5a54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b5a58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b5a5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b5a60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b5a64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileManager_<CheckUpdateBaseInfo>d__21__MoveNext(int *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined2 uVar28;
  int iVar29;
  undefined8 *puVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  int *piVar34;
  undefined8 uVar35;
  long *plVar36;
  ulong uVar37;
  undefined1 auVar38 [16];
  undefined1 local_130 [16];
  ulong local_120;
  undefined4 local_108;
  undefined1 local_100 [16];
  ulong local_f0;
  undefined1 local_e0 [16];
  ulong local_d0;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  ulong local_a0;
  undefined1 local_90 [16];
  ulong local_80;
  undefined1 local_70 [16];
  
  if ((DAT_09522ea7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091c2af0);
    FUN_03f5c2a4(&DAT_091c2af8);
    FUN_03f5c2a4(&DAT_091c2a58);
    FUN_03f5c2a4(&DAT_091c2d90);
    FUN_03f5c2a4(&DAT_0919a740);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a710);
    FUN_03f5c2a4(&DAT_0919a718);
    FUN_03f5c2a4(&DAT_0919a748);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_091ba480);
    FUN_03f5c2a4(&DAT_091ba490);
    FUN_03f5c2a4(&DAT_0917e740);
    FUN_03f5c2a4(&DAT_0918ae28);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_091bdf18);
    FUN_03f5c2a4(&DAT_091bdf30);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522ea7 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  auVar18 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  auVar27 = ZEXT816(0);
  auVar24 = ZEXT816(0);
  auVar21 = ZEXT816(0);
  auVar16 = ZEXT816(0);
  auVar12 = ZEXT816(0);
  local_80 = 0;
  local_b0._8_8_ = 0;
  local_b0._0_8_ = 0;
  auVar25 = ZEXT816(0);
  auVar19 = ZEXT816(0);
  auVar14 = ZEXT816(0);
  auVar10 = ZEXT816(0);
  auVar8 = ZEXT816(0);
  auVar1 = ZEXT816(0);
  local_a0 = 0;
  local_c0._8_8_ = 0;
  local_c0._0_8_ = 0;
  auVar5 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  auVar38 = ZEXT816(0);
  iVar29 = *param_1;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  auVar26 = ZEXT816(0);
  auVar23 = ZEXT816(0);
  auVar20 = ZEXT816(0);
  auVar15 = ZEXT816(0);
  auVar11 = ZEXT816(0);
  local_d0 = 0;
  local_100._0_8_ = 0;
  local_100._8_8_ = 0;
  auVar22 = ZEXT816(0);
  auVar17 = ZEXT816(0);
  auVar13 = ZEXT816(0);
  auVar9 = ZEXT816(0);
  auVar7 = ZEXT816(0);
  auVar2 = ZEXT816(0);
  local_f0 = 0;
  local_108 = 0;
  if (iVar29 < 6) {
    if (iVar29 < 3) {
      if (iVar29 == 0) {
        local_70 = *(undefined1 (*) [16])(param_1 + 10);
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *param_1 = -1;
        goto LAB_077b45b4;
      }
      if (iVar29 == 1) {
        local_70 = *(undefined1 (*) [16])(param_1 + 10);
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *param_1 = -1;
        goto LAB_077b3a58;
      }
      if (iVar29 != 2) goto LAB_077b3b08;
      local_70 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
LAB_077b38cc:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar35 = local_70._0_8_;
      if ((long *)local_70._0_8_ != (long *)0x0) {
        lVar32 = *(long *)local_70._0_8_;
        uVar37 = local_70._8_8_ & 0xffff;
        uVar33 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar33 != 0) {
          piVar34 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == DAT_091868c0) {
              puVar30 = (undefined8 *)(lVar32 + (long)(*piVar34 + 2) * 0x10 + 0x138);
              goto LAB_077b3dbc;
            }
            uVar33 = uVar33 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar33 != 0);
        }
        puVar30 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_077b3dbc:
        (*(code *)*puVar30)(uVar35,uVar37,puVar30[1]);
      }
      if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar32 = DAT_091ba490;
      lVar31 = *(long *)(DAT_091ba490 + 0x20);
      if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = FUN_03f95a6c();
      }
      lVar31 = *(long *)(*(long *)(lVar31 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = FUN_03f95a6c();
      }
      if (*(int *)(lVar31 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar32 = *(long *)(lVar32 + 0x20);
      if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = FUN_03f95a6c();
      }
      lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = FUN_03f95a6c();
      }
      uVar35 = **(undefined8 **)(lVar32 + 0xb8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar33 = UnityEngine_Object__op_Equality(uVar35,0,0);
      if ((uVar33 & 1) != 0) goto LAB_077b58f4;
      goto LAB_077b3e74;
    }
    if (iVar29 != 3) {
      if (iVar29 == 4) {
        local_70 = *(undefined1 (*) [16])(param_1 + 10);
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *param_1 = -1;
        goto LAB_077b5540;
      }
      if (iVar29 == 5) {
        local_70 = *(undefined1 (*) [16])(param_1 + 10);
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *param_1 = -1;
        goto LAB_077b43a0;
      }
      goto LAB_077b3b08;
    }
    local_80 = *(ulong *)(param_1 + 0x12);
    local_90 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (iVar29 < 9) {
      if (iVar29 == 6) {
        local_c0 = *(undefined1 (*) [16])(param_1 + 0x14);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        *param_1 = -1;
        goto LAB_077b4c34;
      }
      if (iVar29 == 7) {
        local_70 = *(undefined1 (*) [16])(param_1 + 10);
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *param_1 = -1;
        goto LAB_077b56a8;
      }
      if (iVar29 == 8) {
        local_c0 = *(undefined1 (*) [16])(param_1 + 0x14);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        *param_1 = -1;
        local_70 = auVar18;
        local_100 = ZEXT816(0);
        local_b0 = auVar25;
        local_e0 = ZEXT816(0);
        local_90 = auVar27;
        goto LAB_077b4408;
      }
    }
    else {
      if (iVar29 == 9) {
        local_d0 = *(ulong *)(param_1 + 0x1c);
        local_e0 = *(undefined1 (*) [16])(param_1 + 0x18);
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        *param_1 = -1;
        goto LAB_077b5134;
      }
      if (iVar29 == 10) {
        local_70 = *(undefined1 (*) [16])(param_1 + 10);
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *param_1 = -1;
        goto LAB_077b54b8;
      }
      if (iVar29 == 0xb) {
        local_70 = *(undefined1 (*) [16])(param_1 + 10);
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *param_1 = -1;
        goto LAB_077b57c8;
      }
    }
LAB_077b3b08:
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522f05 == '\0') {
      FUN_03f5c2a4(&DAT_091896c0);
      DAT_09522f05 = '\x01';
    }
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *(undefined1 *)(*(long *)(DAT_091896c0 + 0xb8) + 0x1c) = 0;
    _GAME_Profile_ProfileManager__CheckFrameNameFxForEvent();
    while( true ) {
      if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar32 = DAT_091ba490;
      lVar31 = *(long *)(DAT_091ba490 + 0x20);
      if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = FUN_03f95a6c();
      }
      lVar31 = *(long *)(*(long *)(lVar31 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = FUN_03f95a6c();
      }
      if (*(int *)(lVar31 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar32 = *(long *)(lVar32 + 0x20);
      if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = FUN_03f95a6c();
      }
      lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = FUN_03f95a6c();
      }
      uVar35 = **(undefined8 **)(lVar32 + 0xb8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar33 = UnityEngine_Object__op_Inequality(uVar35,0,0);
      if ((uVar33 & 1) == 0) break;
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar33 = _GAME_BaseGame_ABIServerAPI__get_IsIdentityReady(0);
      if ((uVar33 & 1) != 0) break;
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar38 = Cysharp_Threading_Tasks_UniTask__WaitForEndOfFrame(0,0);
      local_130 = auVar38;
      thunk_FUN_03f5d7b8(local_130,0);
      local_70 = local_130;
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
      uVar35 = local_70._0_8_;
      if ((long *)local_70._0_8_ != (long *)0x0) {
        lVar32 = *(long *)local_70._0_8_;
        uVar37 = local_70._8_8_ & 0xffff;
        uVar33 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar33 != 0) {
          piVar34 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == DAT_091868c0) {
              puVar30 = (undefined8 *)(lVar32 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_077b45a0;
            }
            uVar33 = uVar33 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar33 != 0);
        }
        puVar30 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_077b45a0:
        iVar29 = (*(code *)*puVar30)(uVar35,uVar37,puVar30[1]);
        if (iVar29 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 10) = local_70;
          thunk_FUN_03f5d7b8(param_1 + 10,0);
          FUN_049ca5b8(param_1 + 2,local_70,param_1,DAT_091c2d90);
          return;
        }
      }
LAB_077b45b4:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar35 = local_70._0_8_;
      if ((long *)local_70._0_8_ != (long *)0x0) {
        lVar32 = *(long *)local_70._0_8_;
        uVar37 = local_70._8_8_ & 0xffff;
        uVar33 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar33 != 0) {
          piVar34 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == DAT_091868c0) {
              puVar30 = (undefined8 *)(lVar32 + (long)(*piVar34 + 2) * 0x10 + 0x138);
              goto LAB_077b462c;
            }
            uVar33 = uVar33 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar33 != 0);
        }
        puVar30 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_077b462c:
        (*(code *)*puVar30)(uVar35,uVar37,puVar30[1]);
      }
    }
    if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar32 = DAT_091ba490;
    lVar31 = *(long *)(DAT_091ba490 + 0x20);
    if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = FUN_03f95a6c();
    }
    lVar31 = *(long *)(*(long *)(lVar31 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = FUN_03f95a6c();
    }
    if (*(int *)(lVar31 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar32 = *(long *)(lVar32 + 0x20);
    if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = FUN_03f95a6c();
    }
    lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = FUN_03f95a6c();
    }
    uVar35 = **(undefined8 **)(lVar32 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar33 = UnityEngine_Object__op_Equality(uVar35,0,0);
    if ((uVar33 & 1) != 0) goto LAB_077b58f4;
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar33 = _GAME_BaseGame_ABIServerAPI__get_IsIdentityReady(0);
    if ((uVar33 & 1) == 0) goto LAB_077b58f4;
    auVar38 = _GAME_SaveGame_SaveGameManager__WaitForIdentityDataReady(0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_130 = auVar38;
    thunk_FUN_03f5d7b8(local_130,0);
    local_70 = local_130;
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
    uVar35 = local_70._0_8_;
    if ((long *)local_70._0_8_ != (long *)0x0) {
      lVar32 = *(long *)local_70._0_8_;
      uVar37 = local_70._8_8_ & 0xffff;
      uVar33 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar33 != 0) {
        piVar34 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == DAT_091868c0) {
            puVar30 = (undefined8 *)(lVar32 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_077b48ec;
          }
          uVar33 = uVar33 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar33 != 0);
      }
      puVar30 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_077b48ec:
      iVar29 = (*(code *)*puVar30)(uVar35,uVar37,puVar30[1]);
      if (iVar29 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 10) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049ca5b8(param_1 + 2,local_70,param_1,DAT_091c2d90);
        return;
      }
    }
LAB_077b3a58:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar35 = local_70._0_8_;
    if ((long *)local_70._0_8_ != (long *)0x0) {
      lVar32 = *(long *)local_70._0_8_;
      uVar37 = local_70._8_8_ & 0xffff;
      uVar33 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar33 != 0) {
        piVar34 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == DAT_091868c0) {
            puVar30 = (undefined8 *)(lVar32 + (long)(*piVar34 + 2) * 0x10 + 0x138);
            goto LAB_077b3b6c;
          }
          uVar33 = uVar33 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar33 != 0);
      }
      puVar30 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_077b3b6c:
      (*(code *)*puVar30)(uVar35,uVar37,puVar30[1]);
    }
    if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar32 = DAT_091ba490;
    lVar31 = *(long *)(DAT_091ba490 + 0x20);
    if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = FUN_03f95a6c();
    }
    lVar31 = *(long *)(*(long *)(lVar31 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
      lVar31 = FUN_03f95a6c();
    }
    if (*(int *)(lVar31 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar32 = *(long *)(lVar32 + 0x20);
    if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = FUN_03f95a6c();
    }
    lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = FUN_03f95a6c();
    }
    uVar35 = **(undefined8 **)(lVar32 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar33 = UnityEngine_Object__op_Equality(uVar35,0,0);
    if ((uVar33 & 1) != 0) goto LAB_077b58f4;
    if (DAT_09522f06 == '\0') {
      FUN_03f5c2a4(&DAT_0918a598);
      DAT_09522f06 = '\x01';
    }
    if (**(char **)(DAT_0918a598 + 0xb8) == '\0') goto LAB_077b58f4;
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar35 = *(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x10);
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522cb0 == '\0') {
      FUN_03f5c2a4(&DAT_09180dc0);
      DAT_09522cb0 = '\x01';
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar33 = System_String__Equals(uVar35,**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
    if ((uVar33 & 1) == 0) {
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar35 = FUN_077be048(0);
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar38 = _GAME_Profile_ProfileManager__AdoptServerProfile(uVar35);
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_130 = auVar38;
      thunk_FUN_03f5d7b8(local_130,0);
      local_70 = local_130;
      uVar33 = FUN_042c5110(local_70,0);
      if ((uVar33 & 1) == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 10) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049ca5b8(param_1 + 2,local_70,param_1,DAT_091c2d90);
        return;
      }
      goto LAB_077b38cc;
    }
LAB_077b3e74:
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar32 = **(long **)(DAT_091896c0 + 0xb8);
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09180dc0);
    }
    if (DAT_09522cb0 == '\0') {
      FUN_03f5c2a4(&DAT_09180dc0);
      DAT_09522cb0 = '\x01';
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar30 = (undefined8 *)(lVar32 + 0x10);
    *puVar30 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
    thunk_FUN_03f5d7b8(puVar30);
    lVar32 = **(long **)(DAT_091896c0 + 0xb8);
    if (DAT_09522f07 == '\0') {
      FUN_03f5c2a4(&DAT_09180dc0);
      DAT_09522f07 = '\x01';
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar30 = (undefined8 *)(lVar32 + 0xb0);
    *puVar30 = *(undefined8 *)(*(long *)(DAT_09180dc0 + 0xb8) + 8);
    thunk_FUN_03f5d7b8(puVar30);
    if (*(int *)(DAT_0918ae28 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522f08 == '\0') {
      FUN_03f5c2a4(&DAT_0918ae28);
      DAT_09522f08 = '\x01';
    }
    if (*(int *)(DAT_0918ae28 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_Profile_ProfileManager__TrySetSocialName(**(undefined8 **)(DAT_0918ae28 + 0xb8));
    if (DAT_09522f05 == '\0') {
      FUN_03f5c2a4(&DAT_091896c0);
      DAT_09522f05 = '\x01';
    }
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *(undefined1 *)(*(long *)(DAT_091896c0 + 0xb8) + 0x1c) = 1;
    _GAME_Profile_ProfileManager__EnsureCountryCode(local_130);
    local_a0 = local_120;
    local_b0 = local_130;
    local_130._8_8_ = 0;
    local_120 = 0;
    local_130._0_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bdf18 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_120 = local_a0;
    local_130 = local_b0;
    thunk_FUN_03f5d7b8(local_130,0);
    local_80 = local_120;
    local_90 = local_130;
    uVar33 = FUN_041e5390(local_90,DAT_0919a718);
    auVar1 = local_b0;
    auVar4 = local_70;
    if ((uVar33 & 1) == 0) {
      *param_1 = 3;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_90;
      *(ulong *)(param_1 + 0x12) = local_80;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_049bcdc8(param_1 + 2,local_90,param_1,DAT_091c2af0);
      return;
    }
  }
  uVar35 = local_90._0_8_;
  local_b0 = auVar1;
  local_70 = auVar4;
  if ((long *)local_90._0_8_ != (long *)0x0) {
    uVar33 = local_80 & 0xffff;
    lVar32 = *(long *)(DAT_0919a710 + 0x20);
    if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = FUN_03f95a6c();
    }
    lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
      lVar32 = FUN_03f95a6c(lVar32);
    }
    lVar31 = *(long *)uVar35;
    uVar37 = (ulong)*(ushort *)(lVar31 + 0x12e);
    if (uVar37 != 0) {
      piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == lVar32) {
          puVar30 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_077b4160;
        }
        uVar37 = uVar37 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar37 != 0);
    }
    puVar30 = (undefined8 *)FUN_03f95da8(uVar35,lVar32,0);
LAB_077b4160:
    (*(code *)*puVar30)(uVar35,uVar33,puVar30[1]);
  }
  if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar32 = DAT_091ba490;
  lVar31 = *(long *)(DAT_091ba490 + 0x20);
  if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
    lVar31 = FUN_03f95a6c();
  }
  lVar31 = *(long *)(*(long *)(lVar31 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
    lVar31 = FUN_03f95a6c();
  }
  if (*(int *)(lVar31 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar32 = *(long *)(lVar32 + 0x20);
  if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
    lVar32 = FUN_03f95a6c();
  }
  lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
    lVar32 = FUN_03f95a6c();
  }
  uVar35 = **(undefined8 **)(lVar32 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar33 = UnityEngine_Object__op_Equality(uVar35,0,0);
  if ((uVar33 & 1) != 0) {
LAB_077b58f4:
    *param_1 = -2;
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
    return;
  }
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined1 *)(**(long **)(DAT_091896c0 + 0xb8) + 0xc1) = 1;
  _GAME_Profile_ProfileDbModel__AddSaveAction();
  if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar32 = DAT_091ba490;
  lVar31 = *(long *)(DAT_091ba490 + 0x20);
  if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
    lVar31 = FUN_03f95a6c();
  }
  lVar31 = *(long *)(*(long *)(lVar31 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
    lVar31 = FUN_03f95a6c();
  }
  if (*(int *)(lVar31 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar32 = *(long *)(lVar32 + 0x20);
  if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
    lVar32 = FUN_03f95a6c();
  }
  lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
    lVar32 = FUN_03f95a6c();
  }
  uVar35 = **(undefined8 **)(lVar32 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar33 = UnityEngine_Object__op_Inequality(uVar35,0,0);
  if ((uVar33 & 1) != 0) {
    if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_060df854(DAT_091ba480);
  }
LAB_077b5850:
  do {
    while( true ) {
      if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar32 = DAT_091ba490;
      lVar31 = *(long *)(DAT_091ba490 + 0x20);
      if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = FUN_03f95a6c();
      }
      lVar31 = *(long *)(*(long *)(lVar31 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = FUN_03f95a6c();
      }
      if (*(int *)(lVar31 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar32 = *(long *)(lVar32 + 0x20);
      if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = FUN_03f95a6c();
      }
      lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = FUN_03f95a6c();
      }
      uVar35 = **(undefined8 **)(lVar32 + 0xb8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar33 = UnityEngine_Object__op_Inequality(uVar35,0,0);
      if ((uVar33 & 1) == 0) goto LAB_077b58f4;
      uVar33 = _GAME_BaseGame_SessionManager__get_IsPlayingLevel(0);
      if ((uVar33 & 1) == 0) break;
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar38 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(1,0,8,0,0,0);
      local_130 = auVar38;
      thunk_FUN_03f5d7b8(local_130,0);
      local_70 = local_130;
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
      uVar35 = local_70._0_8_;
      auVar3 = local_c0;
      auVar8 = local_b0;
      auVar9 = local_100;
      auVar12 = local_90;
      auVar15 = local_e0;
      if ((long *)local_70._0_8_ != (long *)0x0) {
        lVar32 = *(long *)local_70._0_8_;
        uVar37 = local_70._8_8_ & 0xffff;
        uVar33 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar33 != 0) {
          piVar34 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == DAT_091868c0) {
              puVar30 = (undefined8 *)(lVar32 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_077b552c;
            }
            uVar33 = uVar33 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar33 != 0);
        }
        puVar30 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_077b552c:
        iVar29 = (*(code *)*puVar30)(uVar35,uVar37,puVar30[1]);
        auVar3 = local_c0;
        auVar8 = local_b0;
        auVar9 = local_100;
        auVar12 = local_90;
        auVar15 = local_e0;
        if (iVar29 == 0) {
          *param_1 = 4;
          *(undefined1 (*) [16])(param_1 + 10) = local_70;
          thunk_FUN_03f5d7b8(param_1 + 10,0);
          FUN_049ca5b8(param_1 + 2,local_70,param_1,DAT_091c2d90);
          return;
        }
      }
LAB_077b5540:
      local_c0 = auVar3;
      local_b0 = auVar8;
      local_100 = auVar9;
      local_90 = auVar12;
      local_e0 = auVar15;
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      plVar36 = (long *)local_70._0_8_;
      if ((long *)local_70._0_8_ != (long *)0x0) {
        lVar32 = *(long *)local_70._0_8_;
        uVar37 = local_70._8_8_ & 0xffff;
        uVar33 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar33 != 0) {
          piVar34 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == DAT_091868c0) goto LAB_077b5830;
            uVar33 = uVar33 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar33 != 0);
        }
        puVar30 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
        goto LAB_077b5840;
      }
    }
    uVar33 = _GAME_BaseGame_IdentityRecovery__get_HasAutomaticFinalizationWork(0);
    if ((uVar33 & 1) != 0) goto code_r0x077b4a9c;
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar32 = **(long **)(DAT_091896c0 + 0xb8);
    if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar32 + 0xc1) != '\0') {
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar32 = **(long **)(DAT_091896c0 + 0xb8);
        if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      *(undefined1 *)(lVar32 + 0xc1) = 0;
      _GAME_Profile_ProfileDbModel__AddSaveAction(lVar32);
      auVar38 = _GAME_Profile_ProfileServer__PushProfile(**(undefined8 **)(DAT_091896c0 + 0xb8));
      local_130._0_8_ = 0;
      local_130._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_130 = auVar38;
      thunk_FUN_03f5d7b8(local_130,0);
      local_c0 = local_130;
      uVar33 = FUN_0430cf0c(local_c0,DAT_0919a588);
      auVar6 = local_70;
      auVar14 = local_b0;
      auVar17 = local_100;
      auVar21 = local_90;
      auVar23 = local_e0;
      if ((uVar33 & 1) == 0) {
        *param_1 = 6;
        *(undefined1 (*) [16])(param_1 + 0x14) = local_c0;
        thunk_FUN_03f5d7b8(param_1 + 0x14,0);
        FUN_049ba94c(param_1 + 2,local_c0,param_1,DAT_091c2a58);
        return;
      }
LAB_077b4c34:
      uVar35 = local_c0._0_8_;
      if ((long *)local_c0._0_8_ == (long *)0x0) {
        if (local_c0[8] != '\0') goto LAB_077b4cc4;
      }
      else {
        uVar28 = local_c0._10_2_;
        lVar32 = *(long *)(DAT_0919a580 + 0x20);
        local_70 = auVar6;
        local_b0 = auVar14;
        local_100 = auVar17;
        local_90 = auVar21;
        local_e0 = auVar23;
        if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
          lVar32 = FUN_03f95a6c();
        }
        lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
          lVar32 = FUN_03f95a6c(lVar32);
        }
        lVar31 = *(long *)uVar35;
        uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
        if (uVar33 != 0) {
          piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == lVar32) {
              puVar30 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_077b4e50;
            }
            uVar33 = uVar33 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar33 != 0);
        }
        puVar30 = (undefined8 *)FUN_03f95da8(uVar35,lVar32,0);
LAB_077b4e50:
        uVar33 = (*(code *)*puVar30)(uVar35,uVar28,puVar30[1]);
        auVar6 = local_70;
        auVar14 = local_b0;
        auVar17 = local_100;
        auVar21 = local_90;
        auVar23 = local_e0;
        if ((uVar33 & 1) != 0) {
LAB_077b4cc4:
          local_70 = auVar6;
          local_b0 = auVar14;
          local_100 = auVar17;
          local_90 = auVar21;
          local_e0 = auVar23;
          if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar32 = DAT_091ba490;
          lVar31 = *(long *)(DAT_091ba490 + 0x20);
          if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
            lVar31 = FUN_03f95a6c();
          }
          lVar31 = *(long *)(*(long *)(lVar31 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
            lVar31 = FUN_03f95a6c();
          }
          if (*(int *)(lVar31 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar32 = *(long *)(lVar32 + 0x20);
          if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
            lVar32 = FUN_03f95a6c();
          }
          lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
            lVar32 = FUN_03f95a6c();
          }
          uVar35 = **(undefined8 **)(lVar32 + 0xb8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar33 = UnityEngine_Object__op_Equality(uVar35,0,0);
          if ((uVar33 & 1) != 0) goto LAB_077b58f4;
          if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (0 < *(long *)(**(long **)(DAT_091896c0 + 0xb8) + 0x50)) {
            uVar33 = _GAME_BaseGame_IdentityRecovery__get_CanStartNormalTeamMutations(0);
            if ((uVar33 & 1) == 0) {
              uVar33 = _GAME_BaseGame_IdentityRecovery__get_CanStartNormalTeamConsumers(0);
              if ((uVar33 & 1) != 0) {
                if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if (DAT_09522cb0 == '\0') {
                  FUN_03f5c2a4(&DAT_09180dc0);
                  DAT_09522cb0 = '\x01';
                }
                if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar35 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
                if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_091896c0);
                }
                _GAME_Team_TeamServer__ChangeScoreByServerId
                          (local_130,uVar35,**(undefined8 **)(DAT_091896c0 + 0xb8),0,0);
                local_f0 = local_120;
                auVar38 = local_130;
                local_130._8_8_ = 0;
                local_120 = 0;
                local_130._0_8_ = 0;
                local_100 = auVar38;
                if ((*(byte *)(*(long *)(DAT_091bdf30 + 0x20) + 0x135) & 1) == 0) {
                  FUN_03f95a6c();
                }
                local_120 = local_f0;
                local_130 = local_100;
                thunk_FUN_03f5d7b8(local_130,0);
                local_d0 = local_120;
                local_e0 = local_130;
                uVar33 = FUN_041e5390(local_e0,DAT_0919a748);
                auVar2 = local_100;
                auVar3 = local_c0;
                auVar18 = local_70;
                auVar25 = local_b0;
                auVar27 = local_90;
                if ((uVar33 & 1) == 0) {
                  *param_1 = 9;
                  *(undefined1 (*) [16])(param_1 + 0x18) = local_e0;
                  *(ulong *)(param_1 + 0x1c) = local_d0;
                  thunk_FUN_03f5d7b8(param_1 + 0x18,0);
                  FUN_049bcdc8(param_1 + 2,local_e0,param_1,DAT_091c2af8);
                  return;
                }
LAB_077b5134:
                uVar35 = local_e0._0_8_;
                lVar32 = local_e0._8_8_;
                if ((long *)local_e0._0_8_ != (long *)0x0) {
                  uVar33 = local_d0 & 0xffff;
                  lVar32 = *(long *)(DAT_0919a740 + 0x20);
                  local_100 = auVar2;
                  local_c0 = auVar3;
                  local_70 = auVar18;
                  local_b0 = auVar25;
                  local_90 = auVar27;
                  if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
                    lVar32 = FUN_03f95a6c();
                  }
                  lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x28);
                  if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
                    lVar32 = FUN_03f95a6c(lVar32);
                  }
                  lVar31 = *(long *)uVar35;
                  uVar37 = (ulong)*(ushort *)(lVar31 + 0x12e);
                  if (uVar37 != 0) {
                    piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar34 + -2) == lVar32) {
                        puVar30 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
                        goto LAB_077b51d0;
                      }
                      uVar37 = uVar37 - 1;
                      piVar34 = piVar34 + 4;
                    } while (uVar37 != 0);
                  }
                  puVar30 = (undefined8 *)FUN_03f95da8(uVar35,lVar32,0);
LAB_077b51d0:
                  lVar32 = (*(code *)*puVar30)(uVar35,uVar33,puVar30[1]);
                  auVar2 = local_100;
                  auVar3 = local_c0;
                  auVar18 = local_70;
                  auVar25 = local_b0;
                  auVar27 = local_90;
                }
                local_b0 = auVar25;
                local_70 = auVar18;
                local_c0 = auVar3;
                local_100 = auVar2;
                local_90 = auVar27;
                if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar33 = _GAME_Team_TeamCommandResult__get_IsSuccess(lVar32,0);
                goto LAB_077b51ec;
              }
LAB_077b52e4:
              if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              *(undefined1 *)(**(long **)(DAT_091896c0 + 0xb8) + 0xc1) = 1;
              _GAME_Profile_ProfileDbModel__AddSaveAction();
              if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar32 = DAT_091ba490;
              lVar31 = *(long *)(DAT_091ba490 + 0x20);
              if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
                lVar31 = FUN_03f95a6c();
              }
              lVar31 = *(long *)(*(long *)(lVar31 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
                lVar31 = FUN_03f95a6c();
              }
              if (*(int *)(lVar31 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar32 = *(long *)(lVar32 + 0x20);
              if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
                lVar32 = FUN_03f95a6c();
              }
              lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
                lVar32 = FUN_03f95a6c();
              }
              uVar35 = **(undefined8 **)(lVar32 + 0xb8);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188ad0);
              }
              uVar33 = UnityEngine_Object__op_Equality(uVar35,0,0);
              if ((uVar33 & 1) != 0) goto LAB_077b58f4;
              if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              auVar38 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(1,0,8,0,0,0);
              local_130 = auVar38;
              thunk_FUN_03f5d7b8(local_130,0);
              local_70 = local_130;
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
              uVar35 = local_70._0_8_;
              auVar3 = local_c0;
              auVar7 = local_100;
              auVar11 = local_e0;
              auVar25 = local_b0;
              auVar27 = local_90;
              if ((long *)local_70._0_8_ != (long *)0x0) {
                lVar32 = *(long *)local_70._0_8_;
                uVar37 = local_70._8_8_ & 0xffff;
                uVar33 = (ulong)*(ushort *)(lVar32 + 0x12e);
                if (uVar33 != 0) {
                  piVar34 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar34 + -2) == DAT_091868c0) {
                      puVar30 = (undefined8 *)(lVar32 + (long)*piVar34 * 0x10 + 0x138);
                      goto LAB_077b54a4;
                    }
                    uVar33 = uVar33 - 1;
                    piVar34 = piVar34 + 4;
                  } while (uVar33 != 0);
                }
                puVar30 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_077b54a4:
                iVar29 = (*(code *)*puVar30)(uVar35,uVar37,puVar30[1]);
                auVar3 = local_c0;
                auVar7 = local_100;
                auVar11 = local_e0;
                auVar25 = local_b0;
                auVar27 = local_90;
                if (iVar29 == 0) {
                  *param_1 = 10;
                  *(undefined1 (*) [16])(param_1 + 10) = local_70;
                  thunk_FUN_03f5d7b8(param_1 + 10,0);
                  FUN_049ca5b8(param_1 + 2,local_70,param_1,DAT_091c2d90);
                  return;
                }
              }
LAB_077b54b8:
              local_c0 = auVar3;
              local_100 = auVar7;
              local_e0 = auVar11;
              local_b0 = auVar25;
              local_90 = auVar27;
              if (DAT_095162d6 == '\0') {
                FUN_03f5c2a4(&DAT_091868c0);
                DAT_095162d6 = '\x01';
              }
              plVar36 = (long *)local_70._0_8_;
              if ((long *)local_70._0_8_ != (long *)0x0) {
                lVar32 = *(long *)local_70._0_8_;
                uVar37 = local_70._8_8_ & 0xffff;
                uVar33 = (ulong)*(ushort *)(lVar32 + 0x12e);
                if (uVar33 != 0) {
                  piVar34 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar34 + -2) == DAT_091868c0) goto LAB_077b5830;
                    uVar33 = uVar33 - 1;
                    piVar34 = piVar34 + 4;
                  } while (uVar33 != 0);
                }
                puVar30 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
                goto LAB_077b5840;
              }
              goto LAB_077b5850;
            }
            auVar38 = _GAME_Team_TeamServer__ChangeScore(0,0);
            local_130._0_8_ = 0;
            local_130._8_8_ = 0;
            if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
              FUN_03f95a6c();
            }
            local_130 = auVar38;
            thunk_FUN_03f5d7b8(local_130,0);
            local_c0 = local_130;
            uVar33 = FUN_0430cf0c(local_c0,DAT_0919a588);
            if ((uVar33 & 1) == 0) {
              *param_1 = 8;
              *(undefined1 (*) [16])(param_1 + 0x14) = local_c0;
              thunk_FUN_03f5d7b8(param_1 + 0x14,0);
              FUN_049ba94c(param_1 + 2,local_c0,param_1,DAT_091c2a58);
              return;
            }
LAB_077b4408:
            uVar35 = local_c0._0_8_;
            if ((long *)local_c0._0_8_ == (long *)0x0) {
              if (local_c0[8] == '\0') goto LAB_077b52e4;
            }
            else {
              uVar28 = local_c0._10_2_;
              lVar32 = *(long *)(DAT_0919a580 + 0x20);
              if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
                lVar32 = FUN_03f95a6c();
              }
              lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x28);
              if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
                lVar32 = FUN_03f95a6c(lVar32);
              }
              lVar31 = *(long *)uVar35;
              uVar33 = (ulong)*(ushort *)(lVar31 + 0x12e);
              if (uVar33 != 0) {
                piVar34 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar34 + -2) == lVar32) {
                    puVar30 = (undefined8 *)(lVar31 + (long)*piVar34 * 0x10 + 0x138);
                    goto LAB_077b44a8;
                  }
                  uVar33 = uVar33 - 1;
                  piVar34 = piVar34 + 4;
                } while (uVar33 != 0);
              }
              puVar30 = (undefined8 *)FUN_03f95da8(uVar35,lVar32,0);
LAB_077b44a8:
              uVar33 = (*(code *)*puVar30)(uVar35,uVar28,puVar30[1]);
LAB_077b51ec:
              if ((uVar33 & 1) == 0) goto LAB_077b52e4;
            }
          }
          if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar32 = DAT_091ba490;
          lVar31 = *(long *)(DAT_091ba490 + 0x20);
          if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
            lVar31 = FUN_03f95a6c();
          }
          lVar31 = *(long *)(*(long *)(lVar31 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
            lVar31 = FUN_03f95a6c();
          }
          if (*(int *)(lVar31 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar32 = *(long *)(lVar32 + 0x20);
          if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
            lVar32 = FUN_03f95a6c();
          }
          lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
            lVar32 = FUN_03f95a6c();
          }
          uVar35 = **(undefined8 **)(lVar32 + 0xb8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar33 = UnityEngine_Object__op_Equality(uVar35,0,0);
          if ((uVar33 & 1) != 0) goto LAB_077b58f4;
          if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          _GAME_BaseGame_SocialLeaderboard__PushHighScore
                    (*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x7c),0);
          if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          _GAME_BaseGame_SocialAchievements__PushAchievementLevel
                    (*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x78),0);
          goto LAB_077b5850;
        }
      }
      local_70 = auVar6;
      local_b0 = auVar14;
      local_100 = auVar17;
      local_90 = auVar21;
      local_e0 = auVar23;
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined1 *)(**(long **)(DAT_091896c0 + 0xb8) + 0xc1) = 1;
      _GAME_Profile_ProfileDbModel__AddSaveAction();
      if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar32 = DAT_091ba490;
      lVar31 = *(long *)(DAT_091ba490 + 0x20);
      if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = FUN_03f95a6c();
      }
      lVar31 = *(long *)(*(long *)(lVar31 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar31 + 0x135) & 1) == 0) {
        lVar31 = FUN_03f95a6c();
      }
      if (*(int *)(lVar31 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar32 = *(long *)(lVar32 + 0x20);
      if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = FUN_03f95a6c();
      }
      lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar32 + 0x135) & 1) == 0) {
        lVar32 = FUN_03f95a6c();
      }
      uVar35 = **(undefined8 **)(lVar32 + 0xb8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar33 = UnityEngine_Object__op_Equality(uVar35,0,0);
      if ((uVar33 & 1) != 0) goto LAB_077b58f4;
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar38 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(1,0,8,0,0,0);
      local_130 = auVar38;
      thunk_FUN_03f5d7b8(local_130,0);
      local_70 = local_130;
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
      uVar35 = local_70._0_8_;
      auVar38 = local_c0;
      auVar19 = local_b0;
      auVar22 = local_100;
      auVar24 = local_90;
      auVar26 = local_e0;
      if ((long *)local_70._0_8_ != (long *)0x0) {
        lVar32 = *(long *)local_70._0_8_;
        uVar37 = local_70._8_8_ & 0xffff;
        uVar33 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar33 != 0) {
          piVar34 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == DAT_091868c0) {
              puVar30 = (undefined8 *)(lVar32 + (long)*piVar34 * 0x10 + 0x138);
              goto LAB_077b5694;
            }
            uVar33 = uVar33 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar33 != 0);
        }
        puVar30 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_077b5694:
        iVar29 = (*(code *)*puVar30)(uVar35,uVar37,puVar30[1]);
        auVar38 = local_c0;
        auVar19 = local_b0;
        auVar22 = local_100;
        auVar24 = local_90;
        auVar26 = local_e0;
        if (iVar29 == 0) {
          *param_1 = 7;
          *(undefined1 (*) [16])(param_1 + 10) = local_70;
          thunk_FUN_03f5d7b8(param_1 + 10,0);
          FUN_049ca5b8(param_1 + 2,local_70,param_1,DAT_091c2d90);
          return;
        }
      }
LAB_077b56a8:
      local_c0 = auVar38;
      local_b0 = auVar19;
      local_100 = auVar22;
      local_90 = auVar24;
      local_e0 = auVar26;
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      plVar36 = (long *)local_70._0_8_;
      if ((long *)local_70._0_8_ != (long *)0x0) {
        lVar32 = *(long *)local_70._0_8_;
        uVar37 = local_70._8_8_ & 0xffff;
        uVar33 = (ulong)*(ushort *)(lVar32 + 0x12e);
        if (uVar33 != 0) {
          piVar34 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar34 + -2) == DAT_091868c0) goto LAB_077b5830;
            uVar33 = uVar33 - 1;
            piVar34 = piVar34 + 4;
          } while (uVar33 != 0);
        }
        puVar30 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
        goto LAB_077b5840;
      }
      goto LAB_077b5850;
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar38 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(1,0,8,0,0,0);
    local_130 = auVar38;
    thunk_FUN_03f5d7b8(local_130,0);
    local_70 = local_130;
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
    uVar35 = local_70._0_8_;
    auVar3 = local_c0;
    auVar8 = local_b0;
    auVar9 = local_100;
    auVar12 = local_90;
    auVar15 = local_e0;
    if ((long *)local_70._0_8_ != (long *)0x0) {
      lVar32 = *(long *)local_70._0_8_;
      uVar37 = local_70._8_8_ & 0xffff;
      uVar33 = (ulong)*(ushort *)(lVar32 + 0x12e);
      if (uVar33 != 0) {
        piVar34 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
        do {
          if (*(long *)(piVar34 + -2) == DAT_091868c0) {
            puVar30 = (undefined8 *)(lVar32 + (long)*piVar34 * 0x10 + 0x138);
            goto LAB_077b57b4;
          }
          uVar33 = uVar33 - 1;
          piVar34 = piVar34 + 4;
        } while (uVar33 != 0);
      }
      puVar30 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_077b57b4:
      iVar29 = (*(code *)*puVar30)(uVar35,uVar37,puVar30[1]);
      auVar3 = local_c0;
      auVar8 = local_b0;
      auVar9 = local_100;
      auVar12 = local_90;
      auVar15 = local_e0;
      if (iVar29 == 0) {
        *param_1 = 0xb;
        *(undefined1 (*) [16])(param_1 + 10) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049ca5b8(param_1 + 2,local_70,param_1,DAT_091c2d90);
        return;
      }
    }
LAB_077b57c8:
    local_c0 = auVar3;
    local_b0 = auVar8;
    local_100 = auVar9;
    local_90 = auVar12;
    local_e0 = auVar15;
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    plVar36 = (long *)local_70._0_8_;
  } while ((long *)local_70._0_8_ == (long *)0x0);
  lVar32 = *(long *)local_70._0_8_;
  uVar37 = local_70._8_8_ & 0xffff;
  uVar33 = (ulong)*(ushort *)(lVar32 + 0x12e);
  if (uVar33 != 0) {
    piVar34 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
    do {
      if (*(long *)(piVar34 + -2) == DAT_091868c0) goto LAB_077b5830;
      uVar33 = uVar33 - 1;
      piVar34 = piVar34 + 4;
    } while (uVar33 != 0);
  }
  puVar30 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
  goto LAB_077b5840;
code_r0x077b4a9c:
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  auVar38 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(1,0,8,0,0,0);
  local_130 = auVar38;
  thunk_FUN_03f5d7b8(local_130,0);
  local_70 = local_130;
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
  uVar35 = local_70._0_8_;
  auVar5 = local_c0;
  auVar10 = local_b0;
  auVar13 = local_100;
  auVar16 = local_90;
  auVar20 = local_e0;
  if ((long *)local_70._0_8_ != (long *)0x0) {
    lVar32 = *(long *)local_70._0_8_;
    uVar37 = local_70._8_8_ & 0xffff;
    uVar33 = (ulong)*(ushort *)(lVar32 + 0x12e);
    if (uVar33 != 0) {
      piVar34 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
      do {
        if (*(long *)(piVar34 + -2) == DAT_091868c0) {
          puVar30 = (undefined8 *)(lVar32 + (long)*piVar34 * 0x10 + 0x138);
          goto LAB_077b571c;
        }
        uVar33 = uVar33 - 1;
        piVar34 = piVar34 + 4;
      } while (uVar33 != 0);
    }
    puVar30 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_077b571c:
    iVar29 = (*(code *)*puVar30)(uVar35,uVar37,puVar30[1]);
    auVar5 = local_c0;
    auVar10 = local_b0;
    auVar13 = local_100;
    auVar16 = local_90;
    auVar20 = local_e0;
    if (iVar29 == 0) {
      *param_1 = 5;
      *(undefined1 (*) [16])(param_1 + 10) = local_70;
      thunk_FUN_03f5d7b8(param_1 + 10,0);
      FUN_049ca5b8(param_1 + 2,local_70,param_1,DAT_091c2d90);
      return;
    }
  }
LAB_077b43a0:
  local_c0 = auVar5;
  local_b0 = auVar10;
  local_100 = auVar13;
  local_90 = auVar16;
  local_e0 = auVar20;
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  plVar36 = (long *)local_70._0_8_;
  if ((long *)local_70._0_8_ == (long *)0x0) goto LAB_077b5850;
  lVar32 = *(long *)local_70._0_8_;
  uVar37 = local_70._8_8_ & 0xffff;
  uVar33 = (ulong)*(ushort *)(lVar32 + 0x12e);
  if (uVar33 != 0) {
    piVar34 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
    do {
      if (*(long *)(piVar34 + -2) == DAT_091868c0) goto LAB_077b5830;
      uVar33 = uVar33 - 1;
      piVar34 = piVar34 + 4;
    } while (uVar33 != 0);
  }
  puVar30 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_077b5840:
  (*(code *)*puVar30)(plVar36,uVar37,puVar30[1]);
  goto LAB_077b5850;
LAB_077b5830:
  puVar30 = (undefined8 *)(lVar32 + (long)(*piVar34 + 2) * 0x10 + 0x138);
  plVar36 = (long *)local_70._0_8_;
  goto LAB_077b5840;
}


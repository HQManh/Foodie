// rea decompile_all
// name: _GAME.TeamTreasure.PopupTeamTreasureCtrl.<RunOpenFlow>d__27$$MoveNext
// address: 0x77e9974
// body: available
// range: 0x77e9974-0x77ea0f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77ea0b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ea0b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ea0bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ea0c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ea0c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ea0c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ea0cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ea0d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ea0d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ea0d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ea0dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ea0e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_TeamTreasure_PopupTeamTreasureCtrl_<RunOpenFlow>d__27__MoveNext(uint *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined8 local_98;
  uint *puStack_90;
  long *local_88;
  uint **ppuStack_80;
  undefined4 local_68;
  undefined1 local_60 [16];
  long local_50;
  uint local_44;
  undefined1 local_40 [16];
  uint *local_28;
  
  local_28 = param_1;
  if ((DAT_095230a3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c20f8);
    FUN_03f5c2a4(&DAT_09182368);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b998);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095230a3 = 1;
  }
  local_44 = *param_1;
  local_50 = *(long *)(param_1 + 6);
  local_60._8_8_ = 0;
  local_60._0_8_ = 0;
  local_68 = 0;
  if (1 < local_44) {
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_50 + 0x180) = 1;
    if (**(long **)(DAT_0918b998 + 0xb8) == 0) {
LAB_077e9a6c:
      *(undefined1 *)(local_50 + 0x181) = 1;
    }
    else {
      lVar10 = *(long *)(**(long **)(DAT_0918b998 + 0xb8) + 0x18);
      if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = _GAME_BaseGame_TimerManager__get_UnixTimeSecondsUtc();
      if (lVar10 - lVar3 < 0) {
        if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_077e9a6c;
      }
    }
    uVar4 = thunk_FUN_03f9944c(DAT_09182368);
    System_Threading_CancellationTokenSource___ctor(uVar4,0);
    *(undefined8 *)(local_28 + 8) = uVar4;
    thunk_FUN_03f5d7b8(local_28 + 8,uVar4);
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(local_50 + 0x188) = *(undefined8 *)(local_28 + 8);
    thunk_FUN_03f5d7b8(local_50 + 0x188);
    if (*(long *)(local_28 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = System_Threading_CancellationTokenSource__get_Token(*(long *)(local_28 + 8),0);
    *(undefined8 *)(local_28 + 10) = uVar4;
    thunk_FUN_03f5d7b8(local_28 + 10,0);
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_50 + 0xd8) = 1;
  }
  puStack_90 = &local_44;
  local_88 = &local_50;
  local_98 = 0;
  ppuStack_80 = &local_28;
  if (local_44 == 0) {
    local_44 = 0xffffffff;
    local_60 = *(undefined1 (*) [16])(local_28 + 0xc);
    local_28[0xc] = 0;
    local_28[0xd] = 0;
    local_28[0xe] = 0;
    local_28[0xf] = 0;
    *local_28 = 0xffffffff;
    goto LAB_077e9d04;
  }
  if (local_44 == 1) {
    local_44 = 0xffffffff;
    local_60 = *(undefined1 (*) [16])(local_28 + 0xc);
    local_28[0xc] = 0;
    local_28[0xd] = 0;
    local_28[0xe] = 0;
    local_28[0xf] = 0;
    *local_28 = 0xffffffff;
  }
  else {
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_Utils_HelperMonoBehaviour__SetActive(*(undefined8 *)(local_50 + 0x120),0,0);
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(local_50 + 0x128) = 0;
    thunk_FUN_03f5d7b8(local_50 + 0x128,0);
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_50 + 0x160) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(*(long *)(local_50 + 0x160),0,0);
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_50 + 0x168) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(*(long *)(local_50 + 0x168),1,0);
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_50 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(*(long *)(local_50 + 0x170),0,0);
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_50 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(*(long *)(local_50 + 0x178),0,0);
    auVar12 = _GAME_TeamTreasure_TeamTreasureManager__CheckFirstOpenPopup();
    local_40 = Cysharp_Threading_Tasks_UniTaskExtensions__AttachExternalCancellation
                         (auVar12._0_8_,auVar12._8_8_,*(undefined8 *)(local_28 + 10),0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    thunk_FUN_03f5d7b8(local_40,0);
    local_60 = local_40;
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
    uVar4 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar10 = *(long *)local_60._0_8_;
      uVar11 = local_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_077e9cf0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_077e9cf0:
      iVar2 = (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
      if (iVar2 != 0) goto LAB_077e9d04;
      local_44 = 0;
      *local_28 = 0;
      *(undefined1 (*) [16])(local_28 + 0xc) = local_60;
      thunk_FUN_03f5d7b8(local_28 + 0xc,0);
      FUN_049b2674(local_28 + 2,local_60,local_28,DAT_091c20f8);
LAB_077e9fdc:
      iVar2 = 8;
      goto LAB_077e9fe0;
    }
LAB_077e9d04:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar4 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar10 = *(long *)local_60._0_8_;
      uVar11 = local_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar10 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_077e9d84;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_077e9d84:
      (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
    }
    puVar6 = local_28;
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_CancellationToken__ThrowIfCancellationRequested(puVar6 + 10,0);
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar12 = _GAME_TeamTreasure_PopupTeamTreasureCtrl__FetchNewTreasureRank
                        (local_50,*(undefined8 *)(local_28 + 10));
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = auVar12;
    thunk_FUN_03f5d7b8(local_40,0);
    local_60 = local_40;
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
    uVar4 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar10 = *(long *)local_60._0_8_;
      uVar11 = local_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_077e9eb0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_077e9eb0:
      iVar2 = (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
      if (iVar2 == 0) {
        local_44 = 1;
        *local_28 = 1;
        *(undefined1 (*) [16])(local_28 + 0xc) = local_60;
        thunk_FUN_03f5d7b8(local_28 + 0xc,0);
        FUN_049b2674(local_28 + 2,local_60,local_28,DAT_091c20f8);
        goto LAB_077e9fdc;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar4 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar10 = *(long *)local_60._0_8_;
    uVar11 = local_60._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_077e9f44;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_077e9f44:
    (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
  }
  iVar2 = 0xe;
LAB_077e9fe0:
  FUN_03ebf910(&local_98);
  if ((iVar2 == 0) || (iVar2 == 0xe)) {
    *local_28 = 0xfffffffe;
    puVar6 = local_28 + 8;
    puVar6[0] = 0;
    puVar6[1] = 0;
    thunk_FUN_03f5d7b8(puVar6,0);
    puVar6 = local_28;
    cVar1 = DAT_095162d8;
    local_28[10] = 0;
    local_28[0xb] = 0;
    if (cVar1 == '\0') {
      FUN_03f5c2a4(&DAT_091866a8);
      DAT_095162d8 = '\x01';
    }
    plVar9 = *(long **)(puVar6 + 2);
    if (plVar9 != (long *)0x0) {
      lVar10 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091866a8) {
            puVar5 = (undefined8 *)(lVar10 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_077ea094;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091866a8,2);
LAB_077ea094:
      (*(code *)*puVar5)(plVar9,puVar5[1]);
    }
  }
  return;
}


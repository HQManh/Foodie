// rea decompile_all
// name: _GAME.TeamTreasure.PopupTeamTreasureCtrl.<FetchNewTreasureRank>d__28$$MoveNext
// address: 0x77e8f20
// body: available
// range: 0x77e8f20-0x77e97bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e92e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e97a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e97a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e97ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e97b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e97b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e97b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_TeamTreasure_PopupTeamTreasureCtrl_<FetchNewTreasureRank>d__28__MoveNext(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 *puVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_095230a2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091c1da0);
    FUN_03f5c2a4(&DAT_091c20f0);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_0918b998);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095230a2 = 1;
  }
  iVar4 = *param_1;
  lVar12 = *(long *)(param_1 + 8);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (iVar4 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_077e9434:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar2 = local_50._0_8_;
    if ((long *)local_50._0_8_ != (long *)0x0) {
      lVar7 = *(long *)local_50._0_8_;
      uVar13 = local_50._8_8_ & 0xffff;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_077e94b8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,2);
LAB_077e94b8:
      (*(code *)*puVar5)(uVar2,uVar13,puVar5[1]);
    }
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_CancellationToken__ThrowIfCancellationRequested(param_1 + 6,0);
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = **(long **)(DAT_0918b978 + 0xb8);
    if (lVar7 != 0) {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar7 = **(long **)(DAT_0918b978 + 0xb8);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      if (((*(long *)(lVar7 + 0x38) != 0) && (**(long **)(DAT_0918b998 + 0xb8) != 0)) &&
         (*(long *)(**(long **)(DAT_0918b998 + 0xb8) + 0x38) != 0)) {
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
        uVar9 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
        if ((uVar9 & 1) == 0) {
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar14 = _GAME_TeamTreasure_PopupTeamTreasureCtrl__UpdateListMember
                              (lVar12,*(undefined8 *)(param_1 + 6));
          local_40._0_8_ = 0;
          local_40._8_8_ = 0;
          if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          local_40 = auVar14;
          thunk_FUN_03f5d7b8(local_40,0);
          local_60 = local_40;
          uVar9 = FUN_0430cf0c(local_60,DAT_0919a588);
          if ((uVar9 & 1) == 0) {
            *param_1 = 1;
            *(undefined1 (*) [16])(param_1 + 0xe) = local_60;
            thunk_FUN_03f5d7b8(param_1 + 0xe,0);
            FUN_049ae7a8(param_1 + 2,local_60,param_1,DAT_091c1da0);
            return;
          }
          goto LAB_077e9090;
        }
      }
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_TeamTreasure_PopupTeamTreasureCtrl__ShowNotReadyState(lVar12);
    goto LAB_077e95c4;
  }
  if (iVar4 == 1) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
    local_50 = ZEXT816(0);
LAB_077e9090:
    uVar2 = local_60._0_8_;
    if ((long *)local_60._0_8_ == (long *)0x0) {
      if (local_60[8] == '\0') goto LAB_077e95c4;
    }
    else {
      uVar3 = local_60._10_2_;
      lVar7 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c(lVar7);
      }
      lVar8 = *(long *)uVar2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_077e92f0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(uVar2,lVar7,0);
LAB_077e92f0:
      uVar9 = (*(code *)*puVar5)(uVar2,uVar3,puVar5[1]);
      if ((uVar9 & 1) == 0) goto LAB_077e95c4;
    }
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_CancellationToken__ThrowIfCancellationRequested(param_1 + 6,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar14 = _GAME_TeamTreasure_PopupTeamTreasureCtrl__ShowEffectChangePoint
                        (lVar12,*(undefined8 *)(param_1 + 6));
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = auVar14;
    thunk_FUN_03f5d7b8(local_40,0);
    local_50 = local_40;
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
    uVar2 = local_50._0_8_;
    if ((long *)local_50._0_8_ != (long *)0x0) {
      lVar7 = *(long *)local_50._0_8_;
      uVar13 = local_50._8_8_ & 0xffff;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_077e9754;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,0);
LAB_077e9754:
      iVar4 = (*(code *)*puVar5)(uVar2,uVar13,puVar5[1]);
      if (iVar4 == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 10) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049b2568(param_1 + 2,local_50,param_1,DAT_091c20f0);
        return;
      }
    }
  }
  else {
    if (iVar4 != 2) {
      auVar14 = _GAME_TeamTreasure_TeamTreasureManager__FetchNewTreasureData();
      local_40 = Cysharp_Threading_Tasks_UniTaskExtensions__AttachExternalCancellation
                           (auVar14._0_8_,auVar14._8_8_,*(undefined8 *)(param_1 + 6),0);
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      thunk_FUN_03f5d7b8(local_40,0);
      local_50 = local_40;
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
      uVar2 = local_50._0_8_;
      if ((long *)local_50._0_8_ != (long *)0x0) {
        lVar7 = *(long *)local_50._0_8_;
        uVar13 = local_50._8_8_ & 0xffff;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_077e9420;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,0);
LAB_077e9420:
        iVar4 = (*(code *)*puVar5)(uVar2,uVar13,puVar5[1]);
        if (iVar4 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 10) = local_50;
          thunk_FUN_03f5d7b8(param_1 + 10,0);
          FUN_049b2568(param_1 + 2,local_50,param_1,DAT_091c20f0);
          return;
        }
      }
      goto LAB_077e9434;
    }
    local_50 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
    local_60 = ZEXT816(0);
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar2 = local_50._0_8_;
  if ((long *)local_50._0_8_ != (long *)0x0) {
    lVar7 = *(long *)local_50._0_8_;
    uVar13 = local_50._8_8_ & 0xffff;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_077e9238;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,2);
LAB_077e9238:
    (*(code *)*puVar5)(uVar2,uVar13,puVar5[1]);
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = System_Threading_CancellationToken__ThrowIfCancellationRequested(param_1 + 6,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar12 = *(long *)(lVar12 + 0x178);
  if (**(long **)(DAT_0918b998 + 0xb8) == 0) {
    bVar6 = false;
  }
  else {
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = _GAME_BaseGame_TimerManager__get_UnixTimeSecondsUtc();
    if (**(long **)(DAT_0918b998 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    bVar6 = *(long *)(**(long **)(DAT_0918b998 + 0xb8) + 0x18) < lVar7;
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(lVar7,bVar6);
  }
  UnityEngine_GameObject__SetActive(lVar12,bVar6,0);
LAB_077e95c4:
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar11 = *(long **)(param_1 + 2);
  if (plVar11 != (long *)0x0) {
    lVar12 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar12 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_077e964c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091866a8,2);
LAB_077e964c:
    (*(code *)*puVar5)(plVar11,puVar5[1]);
  }
  return;
}


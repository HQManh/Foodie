// rea decompile_all
// name: _GAME.DreamyTower.PopupDreamyTowerCtrl.<MoveViewToTargetLevelCheckPoint>d__15$$MoveNext
// address: 0x7803f98
// body: available
// range: 0x7803f98-0x7804497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7804468 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780446c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7804470 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7804474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7804478 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780447c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7804480 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7804484 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7804488 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780448c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7804490 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7804494 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_DreamyTower_PopupDreamyTowerCtrl_<MoveViewToTargetLevelCheckPoint>d__15__MoveNext
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
               int *param_5)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  
  if ((DAT_095231c9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c20e8);
    FUN_03f5c2a4(&DAT_091c5430);
    FUN_03f5c2a4(&DAT_091b11a8);
    FUN_03f5c2a4(&DAT_091ac788);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095231c9 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  if (*param_5 != 0) {
    lVar13 = *(long *)(param_5 + 6);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = _GAME_DreamyTower_SODreamyTowerConfig__GetNextLevelCheckPoint
                      (*(undefined4 *)(lVar13 + 0x118));
    if (*(long *)(lVar13 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = FUN_057e0998(*(long *)(lVar13 + 0xf0),0,DAT_091ac788);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = FUN_04a6a14c(lVar5,DAT_091c5430);
    if (*(long *)(lVar13 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = FUN_057e0998(*(long *)(lVar13 + 0xf0),uVar4,DAT_091ac788);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = FUN_04a6a14c(lVar6,DAT_091c5430);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = UnityEngine_Component__get_transform(lVar6,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Transform__get_localPosition(lVar6,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_RectTransform__get_rect(lVar5,0);
    fVar15 = param_4;
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(lVar13 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_RectTransform__get_rect(*(long *)(lVar13 + 0xf8),0);
    if (*(long *)(lVar13 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    fVar16 = fVar15;
    UnityEngine_RectTransform__get_rect(*(long *)(lVar13 + 0x100),0);
    fVar14 = -param_2 - (param_4 + param_4);
    fVar17 = 0.0;
    if ((0.0 <= fVar14) && (fVar17 = fVar14, fVar15 - fVar16 < fVar14)) {
      fVar17 = fVar15 - fVar16;
    }
    _GAME_Utils_HelperDOTween__CompleteAndKill(*(undefined8 *)(lVar13 + 0x120),0);
    if (*(long *)(lVar13 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(lVar13 + 0x120);
    uVar7 = UnityEngine_Component__get_transform(*(long *)(lVar13 + 0xf8),0);
    uVar7 = DG_Tweening_ShortcutExtensions__DOLocalMoveY(fVar17,param_5[8],uVar7,0,0);
    lVar13 = DAT_091b11a8;
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar5,uVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        iVar18 = param_5[8];
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_60 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(iVar18,0,8,0,0,0);
        thunk_FUN_03f5d7b8(local_60,0);
        uVar3 = local_60._8_8_;
        uVar7 = local_60._0_8_;
        local_70 = local_60;
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
        if ((long *)uVar7 != (long *)0x0) {
          lVar13 = *(long *)uVar7;
          uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_091868c0) {
                puVar8 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_078042d4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar8 = (undefined8 *)FUN_03f95da8(uVar7,DAT_091868c0,0);
LAB_078042d4:
          iVar18 = (*(code *)*puVar8)(uVar7,uVar3 & 0xffffffff,puVar8[1]);
          if (iVar18 == 0) {
            *param_5 = 0;
            *(undefined1 (*) [16])(param_5 + 10) = local_70;
            thunk_FUN_03f5d7b8(param_5 + 10,0);
            FUN_049b245c(param_5 + 2,local_70,param_5,DAT_091c20e8);
            return;
          }
        }
        goto LAB_078042e8;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_70 = *(undefined1 (*) [16])(param_5 + 10);
  param_5[10] = 0;
  param_5[0xb] = 0;
  param_5[0xc] = 0;
  param_5[0xd] = 0;
  *param_5 = -1;
LAB_078042e8:
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar7 = local_70._0_8_;
  if ((long *)local_70._0_8_ != (long *)0x0) {
    lVar13 = *(long *)local_70._0_8_;
    uVar12 = local_70._8_8_ & 0xffff;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091868c0) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_0780436c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_0780436c:
    (*(code *)*puVar8)(uVar7,uVar12,puVar8[1]);
  }
  cVar2 = DAT_095162d8;
  *param_5 = -2;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar11 = *(long **)(param_5 + 2);
  if (plVar11 != (long *)0x0) {
    lVar13 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091866a8) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_07804404;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091866a8,2);
LAB_07804404:
    (*(code *)*puVar8)(plVar11,puVar8[1]);
  }
  return;
}


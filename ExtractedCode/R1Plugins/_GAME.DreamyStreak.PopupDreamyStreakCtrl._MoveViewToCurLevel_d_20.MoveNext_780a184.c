// rea decompile_all
// name: _GAME.DreamyStreak.PopupDreamyStreakCtrl.<MoveViewToCurLevel>d__20$$MoveNext
// address: 0x780a184
// body: available
// range: 0x780a184-0x780a63f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x780a610 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780a614 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780a618 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780a61c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780a620 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780a624 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780a628 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780a62c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780a630 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780a634 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780a638 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780a63c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_DreamyStreak_PopupDreamyStreakCtrl_<MoveViewToCurLevel>d__20__MoveNext
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
               int *param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  
  if ((DAT_09523218 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c20d0);
    FUN_03f5c2a4(&DAT_091c5430);
    FUN_03f5c2a4(&DAT_09183d70);
    FUN_03f5c2a4(&DAT_091ac750);
    FUN_03f5c2a4(&DAT_091ac758);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09523218 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  if (*param_5 == 0) {
    local_70 = *(undefined1 (*) [16])(param_5 + 8);
    param_5[8] = 0;
    param_5[9] = 0;
    param_5[10] = 0;
    param_5[0xb] = 0;
    *param_5 = -1;
  }
  else {
    lVar14 = *(long *)(param_5 + 6);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar14 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = FUN_057e0998(*(long *)(lVar14 + 0x128),0,DAT_091ac758);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = FUN_04a6a14c(lVar6,DAT_091c5430);
    if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = _GAME_DreamyStreak_DreamyStreakManager__GetCurTargetLevel();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *(long *)(lVar14 + 0x128);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = *(int *)(lVar7 + 0x10);
    iVar2 = *(int *)(lVar8 + 0x18) + -1;
    iVar5 = iVar1;
    if (iVar2 <= iVar1) {
      iVar5 = iVar2;
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      iVar2 = iVar5;
    }
    lVar7 = FUN_057e0998(lVar8,iVar2,DAT_091ac758);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = FUN_04a6a14c(lVar7,DAT_091c5430);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = UnityEngine_Component__get_transform(lVar7,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Transform__get_localPosition(lVar7,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_RectTransform__get_rect(lVar6,0);
    fVar17 = param_4;
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(lVar14 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_RectTransform__get_rect(*(long *)(lVar14 + 0x130),0);
    if (*(long *)(lVar14 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    fVar18 = fVar17;
    UnityEngine_RectTransform__get_rect(*(long *)(lVar14 + 0x138),0);
    fVar16 = -param_2 - (param_4 + param_4);
    fVar19 = 0.0;
    if ((0.0 <= fVar16) && (fVar19 = fVar16, fVar17 - fVar18 < fVar16)) {
      fVar19 = fVar17 - fVar18;
    }
    if (*(long *)(lVar14 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar9 = UnityEngine_Component__get_transform(*(long *)(lVar14 + 0x130),0);
    DG_Tweening_ShortcutExtensions__DOLocalMoveY(fVar19,0x3f800000,uVar9,0,0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(0x3f800000,0,8,0,0,0);
    thunk_FUN_03f5d7b8(local_60,0);
    uVar4 = local_60._8_8_;
    uVar9 = local_60._0_8_;
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
    if ((long *)uVar9 != (long *)0x0) {
      lVar14 = *(long *)uVar9;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_091868c0) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0780a480;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(uVar9,DAT_091868c0,0);
LAB_0780a480:
      iVar5 = (*(code *)*puVar10)(uVar9,uVar4 & 0xffffffff,puVar10[1]);
      if (iVar5 == 0) {
        *param_5 = 0;
        *(undefined1 (*) [16])(param_5 + 8) = local_70;
        thunk_FUN_03f5d7b8(param_5 + 8,0);
        FUN_049b2138(param_5 + 2,local_70,param_5,DAT_091c20d0);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar9 = local_70._0_8_;
  if ((long *)local_70._0_8_ != (long *)0x0) {
    lVar14 = *(long *)local_70._0_8_;
    uVar15 = local_70._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_091868c0) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_0780a518;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_0780a518:
    (*(code *)*puVar10)(uVar9,uVar15,puVar10[1]);
  }
  cVar3 = DAT_095162d8;
  *param_5 = -2;
  if (cVar3 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar13 = *(long **)(param_5 + 2);
  if (plVar13 != (long *)0x0) {
    lVar14 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_091866a8) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_0780a5b0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(plVar13,DAT_091866a8,2);
LAB_0780a5b0:
    (*(code *)*puVar10)(plVar13,puVar10[1]);
  }
  return;
}


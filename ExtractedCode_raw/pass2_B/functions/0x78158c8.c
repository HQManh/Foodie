// rea decompile_all
// name: _GAME.DreamyPass.PopupDreamyPassListLevel.<MoveListToCurLevel>d__28$$MoveNext
// address: 0x78158c8
// body: available
// range: 0x78158c8-0x7815eaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7815e80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7815e84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7815e88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7815e90 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7815e94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7815e98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7815e9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7815ea0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7815ea4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7815ea8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7815eac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07815a64) */
/* WARNING: Removing unreachable block (ram,0x07815e8c) */

void _GAME_DreamyPass_PopupDreamyPassListLevel_<MoveListToCurLevel>d__28__MoveNext(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  float fVar14;
  float in_s3;
  float fVar15;
  float fVar16;
  undefined1 local_d8 [16];
  long **local_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  long *local_90;
  undefined8 uStack_88;
  long **pplStack_80;
  long local_78;
  undefined8 local_70;
  long local_60;
  int local_54;
  
  if ((DAT_09523287 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c20c8);
    FUN_03f5c2a4(&DAT_0919d6f0);
    FUN_03f5c2a4(&DAT_0919d700);
    FUN_03f5c2a4(&DAT_09183d58);
    FUN_03f5c2a4(&DAT_091a5f90);
    FUN_03f5c2a4(&DAT_091a5f98);
    FUN_03f5c2a4(&DAT_091a5fa0);
    FUN_03f5c2a4(&DAT_091a9498);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09523287 = 1;
  }
  local_54 = *param_1;
  lVar11 = *(long *)(param_1 + 6);
  local_60 = 0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (long *)0x0;
  local_78 = 0;
  pplStack_80 = (long **)0x0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_a8 = 0;
  if (local_54 == 0) {
    local_a0 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    local_54 = -1;
    *param_1 = -1;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar12 = (long *)(lVar11 + 0x50);
    if (*plVar12 != 0) {
      DG_Tweening_TweenExtensions__Kill(*plVar12,0,0);
    }
    *(undefined4 *)(lVar11 + 0x78) = 0xffffffff;
    if (*(long *)(lVar11 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06ef0948(local_d8,*(long *)(lVar11 + 0x68),DAT_0919d6f0);
    uStack_88 = local_d8._8_8_;
    local_90 = (long *)local_d8._0_8_;
    local_78 = lStack_c0;
    pplStack_80 = local_c8;
    local_70 = local_b8;
    local_c8 = &local_90;
    local_d8._0_8_ = 0;
    local_d8._8_8_ = &local_54;
    while (uVar6 = FUN_072556b0(&local_90,DAT_091a5f98), (uVar6 & 1) != 0) {
      if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_DreamyPass_DreamyPassLevelUICtrl__ShowRowActive(local_78,0);
    }
    if (local_54 < 0) {
      FUN_072557d4(local_c8,DAT_091a5f90);
    }
    iVar4 = _GAME_DreamyPass_PopupDreamyPassListLevel__TargetLevel();
    param_1[8] = iVar4;
    if (**(long **)(DAT_09183d58 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = *(int *)(**(long **)(DAT_09183d58 + 0xb8) + 0x40);
    iVar5 = _GAME_DreamyPass_PopupDreamyPassListLevel__get_RowCount();
    fVar14 = (float)iVar4 * 325.0 + 335.0 + 162.5 + -861.25006;
    if (iVar5 <= iVar1) {
      fVar14 = fVar14 + 487.5;
    }
    if (*(long *)(lVar11 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_RectTransform__get_rect(*(long *)(lVar11 + 0x28),0);
    fVar15 = in_s3;
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(lVar11 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_RectTransform__get_rect(*(long *)(lVar11 + 0x30),0);
    fVar16 = 0.0;
    if ((0.0 <= fVar14) && (fVar16 = fVar14, in_s3 - fVar15 < fVar14)) {
      fVar16 = in_s3 - fVar15;
    }
    if (*(long *)(lVar11 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar4 = param_1[8];
    uVar7 = UnityEngine_Component__get_transform(*(long *)(lVar11 + 0x28),0);
    lVar8 = DG_Tweening_ShortcutExtensions__DOLocalMoveY(fVar16,(float)iVar4 / 30.0,uVar7,0,0);
    *plVar12 = lVar8;
    thunk_FUN_03f5d7b8(plVar12);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_d8 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds((float)iVar4 / 30.0,0,8,0,0,0);
    thunk_FUN_03f5d7b8(local_d8,0);
    uVar3 = local_d8._8_8_;
    uVar7 = local_d8._0_8_;
    local_a0 = local_d8;
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
      lVar8 = *(long *)uVar7;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_091868c0) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_07815c94;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(uVar7,DAT_091868c0,0);
LAB_07815c94:
      iVar4 = (*(code *)*puVar9)(uVar7,uVar3 & 0xffffffff,puVar9[1]);
      if (iVar4 == 0) {
        local_54 = 0;
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = local_a0;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049b202c(param_1 + 2,local_a0,param_1,DAT_091c20c8);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar7 = local_a0._0_8_;
  if ((long *)local_a0._0_8_ != (long *)0x0) {
    lVar8 = *(long *)local_a0._0_8_;
    uVar13 = local_a0._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091868c0) {
          puVar9 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_07815d2c;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,2);
LAB_07815d2c:
    (*(code *)*puVar9)(uVar7,uVar13,puVar9[1]);
  }
  iVar4 = _GAME_DreamyPass_PopupDreamyPassListLevel__TargetLevel();
  if (iVar4 == param_1[8]) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(int *)(lVar11 + 0x78) = iVar4;
    _GAME_DreamyPass_PopupDreamyPassListLevel__UpdateWindow(lVar11);
    if (*(long *)(lVar11 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = FUN_06ef1fe8(*(long *)(lVar11 + 0x68),param_1[8],&local_60,DAT_0919d700);
    if ((uVar6 & 1) != 0) {
      if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_DreamyPass_DreamyPassLevelUICtrl__ShowRowActive(local_60,1);
    }
  }
  cVar2 = DAT_095162d8;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar12 = *(long **)(param_1 + 2);
  if (plVar12 != (long *)0x0) {
    lVar11 = *plVar12;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091866a8) {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_07815e18;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar12,DAT_091866a8,2);
LAB_07815e18:
    (*(code *)*puVar9)(plVar12,puVar9[1]);
  }
  return;
}


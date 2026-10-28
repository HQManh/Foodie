// rea decompile_all
// name: _GAME.GameUI.RwItemDropCtrl.<PlayDropAsync>d__7$$MoveNext
// address: 0x775afd0
// body: available
// range: 0x775afd0-0x775bcaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x775bc44 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775bc48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775bc4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775bc50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775bc54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775bc58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775bc5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775bc60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775bc64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775bc68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775bc6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775bc70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0775bc44) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_GameUI_RwItemDropCtrl_<PlayDropAsync>d__7__MoveNext(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined8 local_e0;
  undefined8 auStack_a8 [2];
  int local_98;
  undefined1 local_90 [16];
  long local_78;
  int local_6c;
  int *local_68;
  undefined1 local_60 [16];
  
  local_68 = param_1;
  if ((DAT_09522bf2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199ac0);
    FUN_03f5c2a4(&DAT_09199b28);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbc78);
    FUN_03f5c2a4(&DAT_091dbcc0);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbd48);
    FUN_03f5c2a4(&DAT_091dbe18);
    FUN_03f5c2a4(&DAT_091dc030);
    FUN_03f5c2a4(&DAT_091ef578);
    FUN_03f5c2a4(&DAT_091ef580);
    FUN_03f5c2a4(&DAT_09194028);
    FUN_03f5c2a4(&DAT_091ef588);
    FUN_03f5c2a4(&DAT_091ef590);
    FUN_03f5c2a4(&DAT_09194030);
    FUN_03f5c2a4(&DAT_0918c618);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_0920a8b8);
    DAT_09522bf2 = 1;
  }
  local_6c = *param_1;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_98 = 0;
  local_78 = *(long *)(param_1 + 8);
  if (local_6c == 0) {
LAB_0775b2c0:
    local_6c = -1;
    local_90._8_8_ = *(undefined8 *)(local_68 + 0x1c);
    local_90._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(local_68 + 0x1a);
    auVar21 = *(undefined1 (*) [16])(local_68 + 0x1a);
    local_68[0x1a] = 0;
    local_68[0x1b] = 0;
    local_68[0x1c] = 0;
    local_68[0x1d] = 0;
    *local_68 = -1;
LAB_0775b2dc:
    local_90 = auVar21;
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar2 = local_90._0_8_;
    if ((long *)local_90._0_8_ != (long *)0x0) {
      lVar8 = *(long *)local_90._0_8_;
      uVar11 = local_90._8_8_ & 0xffff;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0775b360;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,2);
LAB_0775b360:
      (*(code *)*puVar5)(uVar2,uVar11,puVar5[1]);
    }
    if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (local_68[0x16] == *(int *)(local_78 + 0x58)) {
      if (*(long *)(local_68 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar10 = 6;
      iVar1 = 3;
      if (*(char *)(*(long *)(local_68 + 0x14) + 0x24) != '\0') {
        iVar1 = 0;
      }
      goto LAB_0775b3b4;
    }
    iVar1 = 2;
  }
  else {
    uVar2 = thunk_FUN_03f9944c(DAT_09194028);
    System_Object___ctor(uVar2,0);
    *(undefined8 *)(local_68 + 0x14) = uVar2;
    thunk_FUN_03f5d7b8(local_68 + 0x14,uVar2);
    if (*(long *)(local_68 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*(long *)(local_68 + 0x14) + 0x10) = *(undefined8 *)(local_68 + 8);
    thunk_FUN_03f5d7b8();
    lVar8 = *(long *)(local_68 + 0x14);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = *(undefined8 *)(local_68 + 10);
    *(int *)(lVar8 + 0x20) = local_68[0xc];
    *(undefined8 *)(lVar8 + 0x18) = uVar2;
    lVar8 = *(long *)(local_68 + 0x14);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = *(undefined8 *)(local_68 + 0xd);
    *(int *)(lVar8 + 0x30) = local_68[0xf];
    *(undefined8 *)(lVar8 + 0x28) = uVar2;
    if (*(long *)(local_68 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*(long *)(local_68 + 0x14) + 0x38) = *(undefined8 *)(local_68 + 0x10);
    thunk_FUN_03f5d7b8();
    if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_68[0x16] = *(int *)(local_78 + 0x58);
    if (*(long *)(local_68 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(*(long *)(local_68 + 0x14) + 0x24) = 0;
    piVar9 = local_68 + 0x18;
    piVar9[0] = 0;
    piVar9[1] = 0;
    thunk_FUN_03f5d7b8(piVar9,0);
    if (local_6c == 0) goto LAB_0775b2c0;
    lVar8 = thunk_FUN_03f9944c(DAT_09194030);
    System_Object___ctor(lVar8,0);
    piVar9 = local_68;
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_CancellationToken__ThrowIfCancellationRequested(piVar9 + 0x12,0);
    lVar6 = local_78;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(lVar6,0,0);
    if ((uVar3 & 1) == 0) {
      if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = UnityEngine_Component__get_transform(local_78,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar2,0,0);
      if ((uVar3 & 1) != 0) goto LAB_0775b2a4;
      if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = *(undefined8 *)(local_78 + 0x48);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
      if ((uVar3 & 1) != 0) {
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(local_78 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_Animator__set_updateMode(*(long *)(local_78 + 0x48),2,0);
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        _GAME_Utils_HelperAnimation__ResetAndSetTrigger
                  (*(undefined8 *)(local_78 + 0x48),DAT_0920a8b8,0);
      }
      if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = UnityEngine_Component__get_transform(local_78,0);
      lVar7 = *(long *)(local_68 + 0x14);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Transform__set_position
                (*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c),
                 *(undefined4 *)(lVar7 + 0x20),lVar6,0);
      lVar6 = *(long *)(local_68 + 0x14);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = *(undefined8 *)(lVar6 + 0x18);
      uVar19 = *(undefined8 *)(lVar6 + 0x28);
      if (DAT_09515fab == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09515fab = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar13 = (float)uVar2 - (float)uVar19;
      fVar15 = (float)((ulong)uVar2 >> 0x20) - (float)((ulong)uVar19 >> 0x20);
      lVar6 = *(long *)(local_68 + 0x14);
      if (SQRT(fVar13 * fVar13 + fVar15 * fVar15) == 0.0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = *(undefined8 *)(lVar6 + 0x18);
        fVar15 = *(float *)(lVar6 + 0x20);
        if (DAT_09515cf1 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf1 = '\x01';
        }
        uVar19 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x30);
        local_e0 = CONCAT44((float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar19 >> 0x20),
                            (float)uVar2 + (float)uVar19);
        fVar15 = fVar15 + *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x38);
      }
      else {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        fVar15 = *(float *)(lVar6 + 0x20);
        uVar2 = *(undefined8 *)(lVar6 + 0x18);
        uVar19 = *(undefined8 *)(lVar6 + 0x28);
        fVar13 = *(float *)(lVar6 + 0x30);
        if (DAT_0951690c == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_0951690c = '\x01';
        }
        if (DAT_0951690d == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_0951690d = '\x01';
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar18 = (float)uVar2;
        fVar14 = (float)uVar19 - fVar18;
        fVar20 = (float)((ulong)uVar2 >> 0x20);
        fVar16 = (float)((ulong)uVar19 >> 0x20) - fVar20;
        fVar13 = fVar13 - fVar15;
        fVar17 = SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar13 * fVar13);
        if (fVar17 <= 1e-05) {
          fVar13 = *(float *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
          uVar2 = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
        }
        else {
          uVar2 = CONCAT44(fVar16 / fVar17,fVar14 / fVar17);
          fVar13 = fVar13 / fVar17;
        }
        fVar15 = fVar15 - fVar13;
        local_e0 = CONCAT44(fVar20 - (float)((ulong)uVar2 >> 0x20),fVar18 - (float)uVar2);
      }
      lVar6 = thunk_FUN_03f9944c(DAT_0918c618);
      Cysharp_Threading_Tasks_UniTaskCompletionSource___ctor(lVar6,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar4 = (long *)(lVar8 + 0x10);
      *plVar4 = lVar6;
      thunk_FUN_03f5d7b8(plVar4,lVar6);
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = DG_Tweening_DOTween__Sequence(0);
      uVar2 = FUN_04d9656c(uVar2,1,DAT_091dc030);
      uVar2 = FUN_04d95c58(uVar2,1,DAT_091dbe18);
      uVar2 = FUN_04d8dc1c(uVar2,DAT_091dbc78);
      *(undefined8 *)(local_68 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8();
      if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(local_78 + 0x50) = *(undefined8 *)(local_68 + 0x18);
      thunk_FUN_03f5d7b8();
      uVar19 = *(undefined8 *)(local_68 + 0x18);
      uVar2 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar2,lVar8,DAT_091ef588,0);
      FUN_04d956bc(uVar19,uVar2,DAT_091dbd18);
      uVar19 = *(undefined8 *)(local_68 + 0x18);
      uVar2 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar2,lVar8,DAT_091ef590,0);
      FUN_04d956e8(uVar19,uVar2,DAT_091dbd48);
      uVar2 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                        (0x3e4ccccd,*(undefined8 *)(local_68 + 0x18),0);
      uVar12 = *(undefined8 *)(local_68 + 0x14);
      uVar19 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar19,uVar12,DAT_091ef578,0);
      uVar2 = DG_Tweening_TweenSettingsExtensions__AppendCallback(uVar2,uVar19,0);
      uVar2 = DG_Tweening_TweenSettingsExtensions__AppendInterval(0x3e99999a,uVar2,0);
      if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar19 = UnityEngine_Component__get_transform(local_78,0);
      uVar19 = DG_Tweening_ShortcutExtensions__DOMove
                         (local_e0,(int)((ulong)local_e0 >> 0x20),fVar15,0x3e800000,uVar19,0,0);
      uVar2 = DG_Tweening_TweenSettingsExtensions__Append(uVar2,uVar19,0);
      if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar19 = UnityEngine_Component__get_transform(local_78,0);
      lVar8 = *(long *)(local_68 + 0x14);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar19 = DG_Tweening_ShortcutExtensions__DOMove
                         (*(undefined4 *)(lVar8 + 0x28),*(undefined4 *)(lVar8 + 0x2c),
                          *(undefined4 *)(lVar8 + 0x30),0x3f266666,uVar19,0,0);
      uVar2 = DG_Tweening_TweenSettingsExtensions__Append(uVar2,uVar19,0);
      uVar12 = *(undefined8 *)(local_68 + 0x14);
      uVar19 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar19,uVar12,DAT_091ef580,0);
      uVar2 = DG_Tweening_TweenSettingsExtensions__AppendCallback(uVar2,uVar19,0);
      DG_Tweening_TweenSettingsExtensions__AppendInterval(0x3dcccccd,uVar2,0);
      FUN_04d8dd74(*(undefined8 *)(local_68 + 0x18),DAT_091dbcc0);
      if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar21 = Cysharp_Threading_Tasks_UniTaskCompletionSource__get_Task(*plVar4,0);
      local_60 = Cysharp_Threading_Tasks_UniTaskExtensions__AttachExternalCancellation
                           (auVar21._0_8_,auVar21._8_8_,*(undefined8 *)(local_68 + 0x12),0);
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      thunk_FUN_03f5d7b8(local_60,0);
      local_90 = local_60;
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
      uVar2 = local_90._0_8_;
      auVar21 = local_90;
      if ((long *)local_90._0_8_ != (long *)0x0) {
        lVar8 = *(long *)local_90._0_8_;
        uVar11 = local_90._8_8_ & 0xffff;
        uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0775bbe8;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,0);
LAB_0775bbe8:
        iVar1 = (*(code *)*puVar5)(uVar2,uVar11,puVar5[1]);
        auVar21 = local_90;
        if (iVar1 == 0) {
          local_6c = 0;
          *local_68 = 0;
          *(undefined1 (*) [16])(local_68 + 0x1a) = local_90;
          thunk_FUN_03f5d7b8(local_68 + 0x1a,0);
          FUN_047921d4(local_68 + 2,local_90,local_68,DAT_09199ac0);
          iVar1 = 0;
          iVar10 = 0xb;
          goto LAB_0775b3b4;
        }
      }
      goto LAB_0775b2dc;
    }
LAB_0775b2a4:
    iVar1 = 3;
  }
  iVar10 = 6;
LAB_0775b3b4:
  if (local_6c < 0) {
    if (*(long *)(local_68 + 0x18) != 0) {
      uVar3 = DG_Tweening_TweenExtensions__IsActive(*(long *)(local_68 + 0x18),0);
      if ((uVar3 & 1) != 0) {
        DG_Tweening_TweenExtensions__Kill(*(undefined8 *)(local_68 + 0x18),0,0);
      }
    }
    if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar4 = (long *)(local_78 + 0x50);
    if (*plVar4 == *(long *)(local_68 + 0x18)) {
      *plVar4 = 0;
      thunk_FUN_03f5d7b8(plVar4,0);
    }
  }
  if (iVar10 == 6) {
    *local_68 = -2;
    piVar9 = local_68 + 0x14;
    piVar9[0] = 0;
    piVar9[1] = 0;
    thunk_FUN_03f5d7b8(piVar9,0);
    piVar9 = local_68 + 0x18;
    piVar9[0] = 0;
    piVar9[1] = 0;
    thunk_FUN_03f5d7b8(piVar9,0);
    plVar4 = *(long **)(local_68 + 2);
    if (plVar4 == (long *)0x0) {
      local_68[6] = iVar1;
    }
    else {
      lVar8 = *(long *)(DAT_09199b28 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c(lVar8);
      }
      lVar6 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0775b750;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,lVar8,2);
LAB_0775b750:
      (*(code *)*puVar5)(plVar4,iVar1,puVar5[1]);
    }
  }
  else if (iVar10 == 0) {
    uVar2 = auStack_a8[local_98 + -1];
    *local_68 = -2;
    piVar9 = local_68 + 0x14;
    piVar9[0] = 0;
    piVar9[1] = 0;
    thunk_FUN_03f5d7b8(piVar9,0);
    piVar9 = local_68 + 0x18;
    piVar9[0] = 0;
    piVar9[1] = 0;
    thunk_FUN_03f5d7b8(piVar9,0);
    piVar9 = local_68;
    lVar8 = thunk_FUN_03fc39d4(&DAT_09199b20);
    plVar4 = *(long **)(piVar9 + 2);
    if (plVar4 == (long *)0x0) {
      piVar9 = piVar9 + 4;
      *(undefined8 *)piVar9 = uVar2;
      thunk_FUN_03f5d7b8(piVar9,uVar2);
    }
    else {
      lVar8 = *(long *)(lVar8 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c(lVar8);
      }
      lVar6 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_0775b728;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,lVar8,3);
LAB_0775b728:
      (*(code *)*puVar5)(plVar4,uVar2,puVar5[1]);
    }
  }
  return;
}


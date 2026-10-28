// rea decompile_all
// name: _GAME.Profile.PopupEditProfileCtrl.<InitListAvatarItem>d__29$$MoveNext
// address: 0x77ac208
// body: available
// range: 0x77ac208-0x77ac417 inclusive
// range: 0x77ac430-0x77ac86f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77ac408 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ac40c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ac410 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ac414 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ac850 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ac854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ac858 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ac85c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ac860 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ac864 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ac868 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ac86c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Profile_PopupEditProfileCtrl_<InitListAvatarItem>d__29__MoveNext(int *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  long local_b0;
  int *piStack_a8;
  int **local_a0;
  undefined4 local_88;
  undefined1 local_80 [16];
  int local_6c;
  int *local_68;
  
  local_68 = param_1;
  if ((DAT_09522e61 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2d60);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091ab298);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091ab2a8);
    FUN_03f5c2a4(&DAT_091ab2b0);
    FUN_03f5c2a4(&DAT_091d4b60);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918a4d8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522e61 = 1;
  }
  local_80._8_8_ = 0;
  local_80._0_8_ = 0;
  local_6c = *param_1;
  local_88 = 0;
  lVar11 = *(long *)(param_1 + 10);
  if (local_6c != 0) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar11 + 0x198) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar3 = *(long **)(lVar11 + 0xf0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar3 + 0x178))
              (plVar3,*(undefined4 *)(*(long *)(lVar11 + 0x198) + 0x18),
               *(undefined8 *)(*plVar3 + 0x180));
    lVar4 = DAT_0918a4d8;
    local_68[0xc] = 0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = _GAME_Profile_SOProfileConfig__get_ListAvatarStt();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_05797d74(local_c8,lVar4,DAT_091adcc0);
    piStack_a8 = (int *)local_c8._8_8_;
    local_b0 = local_c8._0_8_;
    local_a0 = (int **)local_b8;
    *(undefined8 *)(local_68 + 0x10) = local_c8._8_8_;
    *(undefined8 *)(local_68 + 0xe) = local_c8._0_8_;
    *(undefined8 *)(local_68 + 0x12) = local_b8;
    thunk_FUN_03f5d7b8(local_68 + 0xe,0);
    piStack_a8 = &local_6c;
    local_b0 = 0;
    local_a0 = &local_68;
    param_1 = local_68;
    if (local_6c != 0) goto LAB_077ac530;
  }
  local_a0 = &local_68;
  piStack_a8 = &local_6c;
  local_b0 = 0;
  local_80 = *(undefined1 (*) [16])(param_1 + 0x14);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_6c = -1;
  *param_1 = -1;
  do {
    do {
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar12 = local_80._0_8_;
      if ((long *)local_80._0_8_ != (long *)0x0) {
        lVar4 = *(long *)local_80._0_8_;
        uVar13 = local_80._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_077ac4ac;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
LAB_077ac4ac:
        (*(code *)*puVar5)(uVar12,uVar13,puVar5[1]);
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = UnityEngine_Object__op_Equality(lVar11,0,0);
      if ((uVar8 & 1) != 0) {
LAB_077ac7bc:
        iVar2 = 0xd;
        goto LAB_077ac7c8;
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar12 = *(undefined8 *)(lVar11 + 0x130);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar12,0,0);
      if ((uVar8 & 1) != 0) goto LAB_077ac7bc;
      uVar12 = *(undefined8 *)(lVar11 + 0x130);
      if (*(int *)(DAT_09187680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar12,0);
LAB_077ac530:
      uVar8 = FUN_071ad7a4(local_68 + 0xe,DAT_091a34d8);
      if ((uVar8 & 1) == 0) {
        iVar2 = 0xe;
        goto LAB_077ac7c8;
      }
      lVar4 = *(long *)(lVar11 + 0x128);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar2 = local_68[0x12];
      if (local_68[0xc] < *(int *)(lVar4 + 0x18)) {
        plVar3 = (long *)FUN_057e0998(lVar4,local_68[0xc],DAT_091ab2b0);
      }
      else {
        uVar12 = FUN_057e0998(lVar4,0,DAT_091ab2b0);
        uVar14 = *(undefined8 *)(lVar11 + 0x130);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar3 = (long *)FUN_04c35338(uVar12,uVar14,DAT_091d4b60);
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar3 + 0x178))(plVar3,iVar2,*(undefined8 *)(*plVar3 + 0x180));
      if (*(long *)(lVar11 + 0x198) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar3 + 0x188))
                (plVar3,iVar2 == *(int *)(*(long *)(lVar11 + 0x198) + 0x18),
                 *(undefined8 *)(*plVar3 + 400));
      lVar4 = UnityEngine_Component__get_gameObject(plVar3,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_GameObject__SetActive(lVar4,1,0);
      lVar4 = DAT_091ab298;
      lVar6 = *(long *)(lVar11 + 0x128);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(uint *)(lVar6 + 0x18);
      if ((int)uVar1 <= local_68[0xc]) {
        lVar9 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *plVar7 = (long)plVar3;
          thunk_FUN_03f5d7b8(plVar7,plVar3);
        }
        else {
          FUN_057e0c68(lVar6,plVar3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
      lVar4 = DAT_0918c610;
      local_68[0xc] = local_68[0xc] + 1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar15 = Cysharp_Threading_Tasks_UniTask__WaitForEndOfFrame(0,0);
      local_c8 = auVar15;
      thunk_FUN_03f5d7b8(local_c8,0);
      uVar14 = local_c8._8_8_;
      uVar12 = local_c8._0_8_;
      local_80 = local_c8;
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
    } while ((long *)uVar12 == (long *)0x0);
    lVar4 = *(long *)uVar12;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_077ac764;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(uVar12,DAT_091868c0,0);
LAB_077ac764:
    iVar2 = (*(code *)*puVar5)(uVar12,uVar14 & 0xffffffff,puVar5[1]);
  } while (iVar2 != 0);
  local_6c = 0;
  *local_68 = 0;
  *(undefined1 (*) [16])(local_68 + 0x14) = local_80;
  thunk_FUN_03f5d7b8(local_68 + 0x14,0);
  FUN_049c972c(local_68 + 2,local_80,local_68,DAT_091c2d60);
  iVar2 = 10;
LAB_077ac7c8:
  if (*piStack_a8 < 0) {
    FUN_071ad7a0(*local_a0 + 0xe,DAT_091a34d0);
  }
  if (local_b0 == 0) {
    if ((iVar2 == 0) || (iVar2 == 0xe)) {
      local_68[0x10] = 0;
      local_68[0x11] = 0;
      local_68[0x12] = 0;
      local_68[0x13] = 0;
      local_68[0xe] = 0;
      local_68[0xf] = 0;
    }
    else if (iVar2 != 0xd) {
      return;
    }
    *local_68 = -2;
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(local_68 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548();
}


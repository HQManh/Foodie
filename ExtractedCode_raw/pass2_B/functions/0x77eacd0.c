// rea decompile_all
// name: _GAME.TeamTreasure.PopupTeamTreasureCtrl.<UpdateListMember>d__29$$MoveNext
// address: 0x77eacd0
// body: available
// range: 0x77eacd0-0x77eb03b inclusive
// range: 0x77eb0b8-0x77eb6a7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77eb020 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77eb024 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77eb028 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77eb030 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77eb034 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77eb038 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77eb518 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77eb66c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77eb670 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77eb674 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77eb678 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77eb67c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077eaf84) */
/* WARNING: Removing unreachable block (ram,0x077eb02c) */

void _GAME_TeamTreasure_PopupTeamTreasureCtrl_<UpdateListMember>d__29__MoveNext(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined1 uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 local_b8 [16];
  long **local_a8;
  undefined4 local_98;
  undefined1 local_90 [16];
  long *local_80;
  undefined8 uStack_78;
  long **local_70;
  int local_64;
  
  if ((DAT_095230a5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091998c0);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091a4778);
    FUN_03f5c2a4(&DAT_091a4780);
    FUN_03f5c2a4(&DAT_091a4788);
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091b0cc8);
    FUN_03f5c2a4(&DAT_091b0ca8);
    FUN_03f5c2a4(&DAT_091b0cb8);
    FUN_03f5c2a4(&DAT_091b0cd8);
    FUN_03f5c2a4(&DAT_091b0ce0);
    FUN_03f5c2a4(&DAT_091b0cc0);
    FUN_03f5c2a4(&DAT_091d4c78);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b998);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095230a5 = 1;
  }
  local_80 = (long *)0x0;
  uStack_78 = 0;
  local_70 = (long **)0x0;
  local_90._8_8_ = 0;
  local_90._0_8_ = 0;
  local_64 = *param_1;
  local_98 = 0;
  lVar13 = *(long *)(param_1 + 8);
  if (local_64 == 0) {
    local_90 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    local_64 = -1;
    *param_1 = -1;
    goto LAB_077eb410;
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(lVar13 + 0x128) = 0;
  thunk_FUN_03f5d7b8(lVar13 + 0x128,0);
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
  piVar11 = param_1 + 0xc;
  *(undefined8 *)piVar11 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
  thunk_FUN_03f5d7b8(piVar11);
  if (**(long **)(DAT_0918b998 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar15 = (long *)(param_1 + 0xe);
  *plVar15 = *(long *)(**(long **)(DAT_0918b998 + 0xb8) + 0x38);
  thunk_FUN_03f5d7b8(plVar15);
  if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(local_b8,*plVar15,DAT_091b0ca8);
  uStack_78 = local_b8._8_8_;
  local_80 = (long *)local_b8._0_8_;
  local_70 = local_a8;
  local_b8._8_8_ = &local_64;
  local_b8._0_8_ = 0;
  local_a8 = &local_80;
  do {
    uVar4 = FUN_071bd28c(&local_80,DAT_091a4780);
    if ((uVar4 & 1) == 0) break;
  } while ((local_70 == (long **)0x0) ||
          (uVar5 = System_String__Equals(local_70[2],*(undefined8 *)piVar11,4,0), (uVar5 & 1) == 0))
  ;
  if (local_64 < 0) {
    FUN_071bd288(local_a8,DAT_091a4778);
  }
  if ((uVar4 & 1) == 0) {
    _GAME_TeamTreasure_PopupTeamTreasureCtrl__ShowNotReadyState(lVar13);
LAB_077eb0b8:
    uVar12 = 0;
LAB_077eb0bc:
    *param_1 = -2;
    piVar11 = param_1 + 0xc;
    piVar11[0] = 0;
    piVar11[1] = 0;
    thunk_FUN_03f5d7b8(piVar11,0);
    piVar11 = param_1 + 0xe;
    piVar11[0] = 0;
    piVar11[1] = 0;
    thunk_FUN_03f5d7b8(piVar11,0);
    plVar15 = *(long **)(param_1 + 2);
    if (plVar15 == (long *)0x0) {
      *(undefined1 *)(param_1 + 6) = uVar12;
    }
    else {
      lVar13 = *(long *)(DAT_09199a20 + 0x20);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03f95a6c();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03f95a6c(lVar13);
      }
      lVar9 = *plVar15;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_077eb184;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar15,lVar13,2);
LAB_077eb184:
      (*(code *)*puVar6)(plVar15,uVar12,puVar6[1]);
    }
  }
  else {
    if (*(long *)(lVar13 + 0x160) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(*(long *)(lVar13 + 0x160),1,0);
    if (*(long *)(lVar13 + 0x168) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(*(long *)(lVar13 + 0x168),0,0);
    param_1[0x10] = -1;
    _GAME_Utils_Helper__SetActive(*(undefined8 *)(lVar13 + 0x158),0,0);
    uVar14 = *(undefined8 *)(lVar13 + 0x130);
    if (*(int *)(DAT_09187680 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar14,0);
    iVar3 = 0;
    param_1[0x11] = 0;
    while( true ) {
      if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = *(int *)(*(long *)(param_1 + 0xe) + 0x18);
      if (iVar1 <= iVar3) {
        lVar9 = *(long *)(lVar13 + 0x118);
        while( true ) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(int *)(lVar9 + 0x18) <= iVar1) break;
          uVar14 = FUN_057e0998(lVar9,iVar1,DAT_091b0ce0);
          _GAME_Utils_HelperMonoBehaviour__SetActive(uVar14,0,0);
          lVar9 = *(long *)(lVar13 + 0x118);
          iVar1 = iVar1 + 1;
        }
        uVar14 = *(undefined8 *)(lVar13 + 0x128);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Equality(uVar14,0,0);
        if ((uVar4 & 1) != 0) {
          _GAME_TeamTreasure_PopupTeamTreasureCtrl__ShowNotReadyState(lVar13);
          goto LAB_077eb0b8;
        }
        if (*(long *)(lVar13 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = UnityEngine_Component__get_gameObject(*(long *)(lVar13 + 0x120),0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_GameObject__SetActive(lVar9,1,0);
        if (*(long *)(lVar13 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = UnityEngine_Component__get_transform(*(long *)(lVar13 + 0x120),0);
        if (*(long *)(lVar13 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_Transform__get_position(*(long *)(lVar13 + 0x140),0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_Transform__set_position(lVar9,0);
        _GAME_Utils_Helper__SetActive
                  (*(undefined8 *)(lVar13 + 0x158),(uint)~param_1[0x10] >> 0x1f,0);
        if (-1 < param_1[0x10]) {
          if (*(long *)(lVar13 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = UnityEngine_Component__get_transform(*(long *)(lVar13 + 0x158),0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          UnityEngine_Transform__SetSiblingIndex(lVar9,param_1[0x10],0);
        }
        uVar14 = *(undefined8 *)(lVar13 + 0x130);
        if (*(int *)(DAT_09187680 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar14,0);
        uVar12 = 1;
        goto LAB_077eb0bc;
      }
      if (*(int *)(DAT_09182348 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_CancellationToken__ThrowIfCancellationRequested(param_1 + 10,0);
      lVar9 = *(long *)(lVar13 + 0x118);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (param_1[0x11] < *(int *)(lVar9 + 0x18)) {
        lVar9 = FUN_057e0998(lVar9,param_1[0x11],DAT_091b0ce0);
      }
      else {
        uVar14 = FUN_057e0998(lVar9,0,DAT_091b0ce0);
        uVar16 = *(undefined8 *)(lVar13 + 0x130);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = FUN_04c35338(uVar14,uVar16,DAT_091d4c78);
      }
      lVar8 = DAT_091b0cc8;
      lVar7 = *(long *)(lVar13 + 0x118);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = *(uint *)(lVar7 + 0x18);
      if ((int)uVar2 <= param_1[0x11]) {
        lVar10 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          plVar15 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
          *plVar15 = lVar9;
          thunk_FUN_03f5d7b8(plVar15,lVar9);
        }
        else {
          FUN_057e0c68(lVar7,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = FUN_057e0998(*(long *)(param_1 + 0xe),param_1[0x11],DAT_091b0cc0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_TeamTreasure_TeamTreasureMemberUICtrl__SetData(lVar9,param_1[0x11],lVar8);
      if (lVar8 != 0) {
        uVar4 = System_String__Equals
                          (*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(param_1 + 0xc),4,0);
        if ((uVar4 & 1) != 0) {
          *(long *)(lVar13 + 0x128) = lVar9;
          thunk_FUN_03f5d7b8(lVar13 + 0x128,lVar9);
          if (*(long *)(lVar13 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          _GAME_TeamTreasure_TeamTreasureMemberUICtrl__SetData
                    (*(long *)(lVar13 + 0x120),param_1[0x11],lVar8);
        }
        if ((*(int *)(lVar8 + 0x50) == 0) && (param_1[0x10] < 0)) {
          param_1[0x10] = param_1[0x11];
        }
      }
      uVar14 = *(undefined8 *)(param_1 + 10);
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar17 = Cysharp_Threading_Tasks_UniTask__WaitForEndOfFrame(uVar14,0);
      local_b8 = auVar17;
      thunk_FUN_03f5d7b8(local_b8,0);
      uVar16 = local_b8._8_8_;
      uVar14 = local_b8._0_8_;
      local_90 = local_b8;
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
      if ((long *)uVar14 != (long *)0x0) break;
LAB_077eb410:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar14 = local_90._0_8_;
      if ((long *)local_90._0_8_ != (long *)0x0) {
        lVar9 = *(long *)local_90._0_8_;
        uVar5 = local_90._8_8_ & 0xffff;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_091868c0) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_077eb48c;
            }
            uVar4 = uVar4 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,2);
LAB_077eb48c:
        (*(code *)*puVar6)(uVar14,uVar5,puVar6[1]);
      }
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar14 = *(undefined8 *)(lVar13 + 0x130);
      if (*(int *)(DAT_09187680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar14,0);
      iVar3 = param_1[0x11] + 1;
      param_1[0x11] = iVar3;
    }
    lVar9 = *(long *)uVar14;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091868c0) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_077eb3fc;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(uVar14,DAT_091868c0,0);
LAB_077eb3fc:
    iVar3 = (*(code *)*puVar6)(uVar14,uVar16 & 0xffffffff,puVar6[1]);
    if (iVar3 != 0) goto LAB_077eb410;
    local_64 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0x12) = local_90;
    thunk_FUN_03f5d7b8(param_1 + 0x12,0);
    FUN_047906ac(param_1 + 2,local_90,param_1,DAT_091998c0);
  }
  return;
}


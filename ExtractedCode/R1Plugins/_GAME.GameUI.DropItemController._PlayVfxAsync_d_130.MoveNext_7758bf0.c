// rea decompile_all
// name: _GAME.GameUI.DropItemController.<PlayVfxAsync>d__130$$MoveNext
// address: 0x7758bf0
// body: available
// range: 0x7758bf0-0x77591b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x775918c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7759190 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7759194 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7759198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775919c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77591a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77591a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77591a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77591ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77591b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77591b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07759190) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_GameUI_DropItemController_<PlayVfxAsync>d__130__MoveNext(int *param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  int *piVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined1 local_60 [16];
  long local_50;
  int local_44;
  undefined1 local_40 [16];
  
  if ((DAT_09522be7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2838);
    FUN_03f5c2a4(&DAT_091c8908);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522be7 = 1;
  }
  auVar3._8_8_ = local_40._8_8_;
  auVar3._0_8_ = local_40._0_8_;
  local_44 = *param_1;
  local_50 = *(long *)(param_1 + 4);
  local_60._8_8_ = 0;
  local_60._0_8_ = 0;
  if (local_44 == 0) {
LAB_07758de8:
    local_44 = -1;
    local_60 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
LAB_07758e04:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar15 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar11 = *(long *)local_60._0_8_;
      uVar16 = local_60._8_8_ & 0xffff;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_091868c0) {
            puVar12 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_07758e88;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar12 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_07758e88:
      (*(code *)*puVar12)(uVar15,uVar16,puVar12[1]);
    }
LAB_07758e98:
    uVar14 = 0x17;
  }
  else {
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar5 = ZEXT816(0);
    if ((*(char *)(local_50 + 0x70) != '\0') ||
       (local_40 = auVar3, auVar5 = ZEXT816(0),
       (int)(*(uint *)(local_50 + 0x48) & ((int)*(uint *)(local_50 + 0x48) >> 0x1f ^ 0xffffffffU))
       <= *(int *)(local_50 + 0x128))) goto LAB_07758f00;
    bVar7 = (char)param_1[6] != '\0';
    lVar11 = 0x120;
    if (bVar7) {
      lVar11 = 0x110;
    }
    lVar1 = 0x118;
    if (bVar7) {
      lVar1 = 0x108;
    }
    uVar15 = *(undefined8 *)(local_50 + lVar1);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(local_50 + lVar11);
    thunk_FUN_03f5d7b8(param_1 + 10);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar15,0,0);
    auVar6._8_8_ = local_60._8_8_;
    auVar6._0_8_ = local_60._0_8_;
    auVar5._8_8_ = local_60._8_8_;
    auVar5._0_8_ = local_60._0_8_;
    auVar4._8_8_ = local_40._8_8_;
    auVar4._0_8_ = local_40._0_8_;
    if (((uVar9 & 1) != 0) || (local_40 = auVar4, auVar5 = auVar6, *(long *)(param_1 + 10) == 0))
    goto LAB_07758f00;
    piVar13 = param_1 + 0xc;
    piVar13[0] = 0;
    piVar13[1] = 0;
    thunk_FUN_03f5d7b8(piVar13,0);
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(int *)(local_50 + 0x128) = *(int *)(local_50 + 0x128) + 1;
    if (local_44 == 0) goto LAB_07758de8;
    uVar10 = FUN_04a9a1a0(*(undefined8 *)(param_1 + 10),DAT_091c8908);
    *(undefined8 *)(param_1 + 0xc) = uVar10;
    thunk_FUN_03f5d7b8();
    uVar10 = *(undefined8 *)(param_1 + 0xc);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar10,0,0);
    if ((uVar9 & 1) != 0) {
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar10 = *(undefined8 *)(local_50 + 0x100);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar10,0,0);
      if ((uVar9 & 1) == 0) {
        if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        puVar12 = (undefined8 *)(local_50 + 0x20);
      }
      else {
        if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        puVar12 = (undefined8 *)(local_50 + 0x100);
      }
      uVar10 = *puVar12;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar15 = FUN_04c35338(uVar15,uVar10,DAT_091d4bc0);
      *(undefined8 *)(param_1 + 0xc) = uVar15;
      thunk_FUN_03f5d7b8(param_1 + 0xc);
    }
    uVar15 = *(undefined8 *)(param_1 + 0xc);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar15,0,0);
    if ((uVar9 & 1) == 0) {
      _GAME_GameUI_DropItemController__ConfigureVisualForUnscaledTime
                (*(undefined8 *)(param_1 + 0xc),0);
      if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar11 = UnityEngine_GameObject__get_transform(*(long *)(param_1 + 0xc),0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Transform__set_position(param_1[7],param_1[8],param_1[9],lVar11,0);
      if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0xc),1,0);
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(local_50 + 0x78) != 0) {
        uVar15 = System_Threading_CancellationTokenSource__get_Token(*(long *)(local_50 + 0x78),0);
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_40 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(0x40000000,1,8,uVar15,0,0);
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
        uVar15 = local_60._0_8_;
        if ((long *)local_60._0_8_ != (long *)0x0) {
          lVar11 = *(long *)local_60._0_8_;
          uVar16 = local_60._8_8_ & 0xffff;
          uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar9 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_091868c0) {
                puVar12 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_07759134;
              }
              uVar9 = uVar9 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar9 != 0);
          }
          puVar12 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_07759134:
          iVar8 = (*(code *)*puVar12)(uVar15,uVar16,puVar12[1]);
          if (iVar8 == 0) {
            local_44 = 0;
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 0xe) = local_60;
            thunk_FUN_03f5d7b8(param_1 + 0xe,0);
            FUN_049b5d7c(param_1 + 2,local_60,param_1,DAT_091c2838);
            uVar14 = 0x13;
            goto LAB_07758e9c;
          }
        }
        goto LAB_07758e04;
      }
      goto LAB_07758e98;
    }
    uVar14 = 5;
  }
LAB_07758e9c:
  if (local_44 < 0) {
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = *(int *)(local_50 + 0x128) - 1;
    uVar15 = *(undefined8 *)(param_1 + 10);
    uVar10 = *(undefined8 *)(param_1 + 0xc);
    *(uint *)(local_50 + 0x128) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    _GAME_GameUI_DropItemController__ReturnVfx(local_50,uVar10,uVar15,0);
  }
  if (0x17 < uVar14) {
    return;
  }
  auVar5 = local_60;
  if ((1 << (ulong)uVar14 & 0x800021U) == 0) {
    return;
  }
LAB_07758f00:
  *param_1 = -2;
  piVar13 = param_1 + 10;
  piVar13[0] = 0;
  piVar13[1] = 0;
  local_60 = auVar5;
  thunk_FUN_03f5d7b8(piVar13,0);
  piVar13 = param_1 + 0xc;
  piVar13[0] = 0;
  piVar13[1] = 0;
  thunk_FUN_03f5d7b8(piVar13,0);
  FUN_042dada8(param_1 + 2,0);
  return;
}


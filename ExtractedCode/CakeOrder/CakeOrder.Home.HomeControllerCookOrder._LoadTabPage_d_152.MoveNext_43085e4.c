// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder.<LoadTabPage>d__152$$MoveNext
// address: 0x43085e4
// body: available
// range: 0x43085e4-0x4308e03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4308db4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4308db8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4308dbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4308dc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4308dc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4308dc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4308dcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4308dd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4308dd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4308dd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4308ddc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4308de0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder_<LoadTabPage>d__152__MoveNext(int *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  long *local_e8;
  undefined8 uStack_e0;
  ulong local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  long *local_90;
  undefined8 uStack_88;
  ulong local_80;
  long *local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined1 local_50 [16];
  ulong local_40;
  
  if ((DAT_095175a2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf6e8);
    FUN_03f5c2a4(&DAT_091bf638);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09197808);
    FUN_03f5c2a4(&DAT_091c1dd8);
    FUN_03f5c2a4(&DAT_091c1fb8);
    FUN_03f5c2a4(&DAT_0919a5d0);
    FUN_03f5c2a4(&DAT_0919a5d8);
    FUN_03f5c2a4(&DAT_0919cd88);
    FUN_03f5c2a4(&DAT_091cdaa8);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bde30);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095175a2 = 1;
  }
  lVar9 = *(long *)(param_1 + 6);
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_90 = (long *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_a8 = 0;
  if (*param_1 == 0) {
    local_60 = *(ulong *)(param_1 + 0x10);
    uStack_68 = *(undefined8 *)(param_1 + 0xe);
    local_70 = *(long **)(param_1 + 0xc);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_04308724:
    plVar8 = local_70;
    if (local_70 != (long *)0x0) {
      uVar6 = local_60 & 0xffff;
      lVar2 = *(long *)(DAT_0919a5d0 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c(lVar2);
      }
      lVar5 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_043089b8;
          }
          uVar10 = uVar10 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar8,lVar2,0);
LAB_043089b8:
      (*(code *)*puVar4)(plVar8,uVar6,puVar4[1]);
    }
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = FUN_0640f818(*(long *)(param_1 + 10) + 0x38,DAT_09197808);
    if (iVar1 == 1) {
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar11 = FUN_0640f7ac(*(long *)(param_1 + 10) + 0x38,DAT_09197800);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar11 = FUN_0640f7ac(*(long *)(param_1 + 10) + 0x38,DAT_09197800);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar12 = *(undefined8 *)(lVar9 + 0x130);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = FUN_04c35338(uVar11,uVar12,DAT_091d4bc0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *(long *)(param_1 + 10);
        uVar11 = FUN_04b7c324(lVar2,DAT_091cdaa8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        puVar4 = (undefined8 *)(lVar5 + 0x28);
        *puVar4 = uVar11;
        thunk_FUN_03f5d7b8(puVar4);
      }
    }
LAB_04308aac:
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 10) + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = *(long *)(*(long *)(param_1 + 10) + 0x28);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar13 = CakeOrder_Home_UIHomeTabPage__SetUp
                          (lVar2,lVar9,*(undefined8 *)(lVar9 + 0x140),*(undefined8 *)(lVar9 + 0x148)
                           ,0);
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_50 = auVar13;
      thunk_FUN_03f5d7b8(local_50,0);
      uVar12 = local_50._8_8_;
      uVar11 = local_50._0_8_;
      local_a0 = local_50;
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
      if ((long *)uVar11 != (long *)0x0) {
        lVar9 = *(long *)uVar11;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091868c0) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04308bf0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(uVar11,DAT_091868c0,0);
LAB_04308bf0:
        iVar1 = (*(code *)*puVar4)(uVar11,uVar12 & 0xffffffff,puVar4[1]);
        if (iVar1 == 0) {
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 0x12) = local_a0;
          thunk_FUN_03f5d7b8(param_1 + 0x12,0);
          FUN_0430d340(param_1 + 2,local_a0,param_1,DAT_091c1fb8);
          return;
        }
      }
      goto LAB_04308c04;
    }
  }
  else {
    if (*param_1 != 1) {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar9 + 0x150) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = FUN_06f33e4c(*(long *)(lVar9 + 0x150),param_1[8],DAT_0919cd88);
      plVar8 = (long *)(param_1 + 10);
      *plVar8 = lVar2;
      thunk_FUN_03f5d7b8(plVar8);
      lVar2 = *plVar8;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar2 + 0x50) != 0) goto LAB_04308cc0;
      *(undefined4 *)(lVar2 + 0x50) = 1;
      uVar11 = *(undefined8 *)(lVar2 + 0x28);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar11,0,0);
      if ((uVar6 & 1) != 0) {
        if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar3 = *(long **)(*plVar8 + 0x20);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = (**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(*plVar3 + 0x250));
        if ((uVar6 & 1) != 0) {
          lVar2 = *plVar8;
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar11 = *(undefined8 *)(lVar2 + 0x20);
          if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_04b711d8(local_50,uVar11,DAT_091bf638);
          local_c0 = local_40;
          uStack_c8 = local_50._8_8_;
          local_d0 = (long *)local_50._0_8_;
          *(undefined8 *)(lVar2 + 0x40) = local_50._8_8_;
          *(undefined8 *)(lVar2 + 0x38) = local_50._0_8_;
          *(ulong *)(lVar2 + 0x48) = local_40;
          thunk_FUN_03f5d7b8(lVar2 + 0x38,0);
          lVar2 = *plVar8;
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          local_50._8_8_ = *(undefined8 *)(lVar2 + 0x40);
          local_50._0_8_ = *(undefined8 *)(lVar2 + 0x38);
          local_40 = *(undefined8 *)(lVar2 + 0x48);
          FUN_04b722fc(&local_e8,local_50,0,8,0,0,0,DAT_091bf6e8);
          local_50._8_8_ = 0;
          local_40 = 0;
          uStack_88 = uStack_e0;
          local_90 = local_e8;
          local_80 = local_d8;
          local_50._0_8_ = 0;
          if ((*(byte *)(*(long *)(DAT_091bde30 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          local_50._8_8_ = uStack_88;
          local_50._0_8_ = local_90;
          local_40 = local_80;
          thunk_FUN_03f5d7b8(local_50,0);
          uStack_68 = local_50._8_8_;
          local_70 = (long *)local_50._0_8_;
          local_60 = local_40;
          uVar6 = FUN_041e5390(&local_70,DAT_0919a5d8);
          if ((uVar6 & 1) == 0) {
            *param_1 = 0;
            *(undefined8 *)(param_1 + 0xe) = uStack_68;
            *(long **)(param_1 + 0xc) = local_70;
            *(ulong *)(param_1 + 0x10) = local_60;
            thunk_FUN_03f5d7b8(param_1 + 0xc,0);
            FUN_0430d234(param_1 + 2,&local_70,param_1,DAT_091c1dd8);
            return;
          }
          goto LAB_04308724;
        }
      }
      goto LAB_04308aac;
    }
    local_a0 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
LAB_04308c04:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar11 = local_a0._0_8_;
    if ((long *)local_a0._0_8_ != (long *)0x0) {
      lVar9 = *(long *)local_a0._0_8_;
      uVar10 = local_a0._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_04308c88;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,2);
LAB_04308c88:
      (*(code *)*puVar4)(uVar11,uVar10,puVar4[1]);
    }
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = *(long *)(*(long *)(param_1 + 10) + 0x28);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar9,0);
  }
  if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined4 *)(*(long *)(param_1 + 10) + 0x50) = 2;
LAB_04308cc0:
  *param_1 = -2;
  piVar7 = param_1 + 10;
  piVar7[0] = 0;
  piVar7[1] = 0;
  thunk_FUN_03f5d7b8(piVar7,0);
  if (DAT_095162d8 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar8 = *(long **)(param_1 + 2);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091866a8) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_04308d58;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091866a8,2);
LAB_04308d58:
    (*(code *)*puVar4)(plVar8,puVar4[1]);
  }
  return;
}


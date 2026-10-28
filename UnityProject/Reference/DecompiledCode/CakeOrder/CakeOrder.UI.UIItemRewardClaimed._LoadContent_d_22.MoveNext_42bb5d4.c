// rea decompile_all
// name: CakeOrder.UI.UIItemRewardClaimed.<LoadContent>d__22$$MoveNext
// address: 0x42bb5d4
// body: available
// range: 0x42bb5d4-0x42bc25f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42bc1f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bc1fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bc200 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bc204 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bc208 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bc20c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bc210 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bc214 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bc218 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bc21c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bc220 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bc224 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIItemRewardClaimed_<LoadContent>d__22__MoveNext(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  long *local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_98;
  long *local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  
  if ((DAT_095172f4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf6c8);
    FUN_03f5c2a4(&DAT_091bf658);
    FUN_03f5c2a4(&DAT_091bf6b0);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197a08);
    FUN_03f5c2a4(&DAT_09197a20);
    FUN_03f5c2a4(&DAT_091c1e98);
    FUN_03f5c2a4(&DAT_091c21f0);
    FUN_03f5c2a4(&DAT_0919a700);
    FUN_03f5c2a4(&DAT_0919a708);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09186500);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189058);
    FUN_03f5c2a4(&DAT_09189068);
    FUN_03f5c2a4(&DAT_091dbc90);
    FUN_03f5c2a4(&DAT_091dbff0);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_091f9fb0);
    DAT_095172f4 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_90 = (long *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_98 = 0;
  if (*param_1 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_042bb7cc:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar7 = local_70._0_8_;
    if ((long *)local_70._0_8_ != (long *)0x0) {
      lVar12 = *(long *)local_70._0_8_;
      uVar9 = local_70._8_8_ & 0xffff;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_091868c0) {
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_042bb930;
          }
          uVar14 = uVar14 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_042bb930:
      (*(code *)*puVar6)(uVar7,uVar9,puVar6[1]);
    }
    goto LAB_042bbf48;
  }
  lVar12 = *(long *)(param_1 + 6);
  if (*param_1 == 1) {
    local_80 = *(ulong *)(param_1 + 0x10);
    uStack_88 = *(undefined8 *)(param_1 + 0xe);
    local_90 = *(long **)(param_1 + 0xc);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_042bb730:
    plVar11 = local_90;
    uVar7 = uStack_88;
    if (local_90 != (long *)0x0) {
      uVar14 = local_80 & 0xffff;
      lVar5 = *(long *)(DAT_0919a700 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c(lVar5);
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar5) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_042bb8d4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar11,lVar5,0);
LAB_042bb8d4:
      uVar7 = (*(code *)*puVar6)(plVar11,uVar14,puVar6[1]);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar4 = FUN_0640f818(lVar12 + 0x90,DAT_09197a20);
    if (iVar4 == 1) {
      if (*(long *)(lVar12 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_UI_Image__set_sprite(*(long *)(lVar12 + 0x70),uVar7,0);
    }
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar7 = *(undefined8 *)(lVar12 + 0x60);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar14 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar14 & 1) != 0) {
      plVar11 = *(long **)(lVar12 + 0x48);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar11;
      plVar13 = *(long **)(lVar12 + 0x60);
      uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar14 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09186500) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_042bb954;
          }
          uVar14 = uVar14 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186500,3);
LAB_042bb954:
      uVar7 = (*(code *)*puVar6)(plVar11,puVar6[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar7,uVar7);
      }
      (**(code **)(*plVar13 + 0x558))(plVar13,uVar7,*(undefined8 *)(*plVar13 + 0x560));
    }
    plVar11 = *(long **)(lVar12 + 0x48);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar11;
    plVar13 = *(long **)(lVar12 + 0x68);
    uVar1 = *(undefined4 *)(lVar12 + 0x50);
    uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar14 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09186500) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 7) * 0x10 + 0x138);
          goto LAB_042bb9e4;
        }
        uVar14 = uVar14 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186500,7);
LAB_042bb9e4:
    uVar7 = (*(code *)*puVar6)(plVar11,uVar1,puVar6[1]);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar7,uVar7);
    }
    (**(code **)(*plVar13 + 0x558))(plVar13,uVar7,*(undefined8 *)(*plVar13 + 0x560));
    if (*(long *)(lVar12 + 0xa8) != 0) {
      DG_Tweening_TweenExtensions__Kill(*(long *)(lVar12 + 0xa8),0,0);
    }
    Utilities_GraphicExtension__SetA(0,*(undefined8 *)(lVar12 + 0x70),0);
    if (*(long *)(lVar12 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_UI_Image__set_sprite(*(long *)(lVar12 + 0x70),0,0);
    uVar14 = FUN_0640f598(lVar12 + 0x90,DAT_09197a08);
    if ((uVar14 & 1) != 0) {
      uStack_b8 = *(undefined8 *)(lVar12 + 0x98);
      local_c0 = *(undefined8 *)(lVar12 + 0x90);
      local_b0 = *(undefined8 *)(lVar12 + 0xa0);
      if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_60._8_8_ = uStack_b8;
      local_60._0_8_ = local_c0;
      local_50 = local_b0;
      FUN_04b71ee0(local_60,DAT_091bf6b0);
    }
    plVar11 = *(long **)(lVar12 + 0x48);
    if (plVar11 != (long *)0x0) {
      if ((*(byte *)(DAT_09189068 + 0x130) <= *(byte *)(*plVar11 + 0x130)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(DAT_09189068 + 0x130) * 8 + -8) ==
          DAT_09189068)) {
        uVar7 = *(undefined8 *)(lVar12 + 0x78);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar14 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar14 & 1) != 0) {
          if (*(long *)(lVar12 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          UnityEngine_GameObject__SetActive(*(long *)(lVar12 + 0x78),0,0);
        }
        uVar7 = *(undefined8 *)(lVar12 + 0x80);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar14 = UnityEngine_Object__op_Equality(uVar7,0,0);
        if ((uVar14 & 1) != 0) {
          uVar7 = UnityEngine_Object__GetName(lVar12,0);
          uVar7 = System_String__Concat(uVar7,DAT_091f9fb0,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogWarning(uVar7,lVar12,0);
          goto LAB_042bbf48;
        }
        uVar14 = System_String__IsNullOrEmpty(plVar11[3],0);
        lVar5 = *(long *)(lVar12 + 0x80);
        if ((uVar14 & 1) != 0) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar12 = UnityEngine_Component__get_gameObject(lVar5,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          UnityEngine_GameObject__SetActive(lVar12,0,0);
          goto LAB_042bbf48;
        }
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = UnityEngine_Component__get_gameObject(lVar5,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_GameObject__SetActive(lVar5,1,0);
        if (*(long *)(lVar12 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *(long *)(lVar12 + 0x80);
        uVar7 = *(undefined8 *)(*(long *)(lVar12 + 0x88) + 0x10);
        lVar12 = thunk_FUN_03f9944c(DAT_09189058);
        CakeOrder_SaveProfile_PetAssignData___ctor(lVar12,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined8 *)(lVar12 + 0x18) = **(undefined8 **)(DAT_09535468 + 0xb8);
        *(undefined4 *)(lVar12 + 0x20) = 0;
        thunk_FUN_03f5d7b8();
        *(long *)(lVar12 + 0x10) = plVar11[3];
        thunk_FUN_03f5d7b8();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar15 = CakeOrder_Home_UIItemPetAssistant__SetUp(lVar5,uVar7,plVar11,1,lVar12,0);
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_60 = auVar15;
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
          lVar12 = *(long *)uVar7;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_091868c0) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_042bc1ac;
              }
              uVar14 = uVar14 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar14 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(uVar7,DAT_091868c0,0);
LAB_042bc1ac:
          iVar4 = (*(code *)*puVar6)(uVar7,uVar3 & 0xffffffff,puVar6[1]);
          if (iVar4 == 0) {
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 8) = local_70;
            thunk_FUN_03f5d7b8(param_1 + 8,0);
            FUN_042c5870(param_1 + 2,local_70,param_1,DAT_091c21f0);
            return;
          }
        }
        goto LAB_042bb7cc;
      }
    }
    uVar7 = *(undefined8 *)(lVar12 + 0x78);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar14 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar14 & 1) != 0) {
      if (*(long *)(lVar12 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_GameObject__SetActive(*(long *)(lVar12 + 0x78),1,0);
    }
    uVar7 = *(undefined8 *)(lVar12 + 0x80);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar14 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar14 & 1) != 0) {
      if (*(long *)(lVar12 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar12 + 0x80),0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_GameObject__SetActive(lVar5,0,0);
    }
    uVar7 = *(undefined8 *)(lVar12 + 0x58);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar14 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar14 & 1) == 0) {
      plVar11 = *(long **)(lVar12 + 0x48);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar11;
      uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar14 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09186500) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_042bbc04;
          }
          uVar14 = uVar14 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar14 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186500,5);
LAB_042bbc04:
      uVar7 = (*(code *)*puVar6)(plVar11,puVar6[1]);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar14 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar14 & 1) == 0) {
        plVar11 = *(long **)(lVar12 + 0x48);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar11;
        uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar14 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09186500) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 6) * 0x10 + 0x138);
              goto LAB_042bbdc4;
            }
            uVar14 = uVar14 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar14 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186500,6);
LAB_042bbdc4:
        lVar5 = (*(code *)*puVar6)(plVar11,puVar6[1]);
        if (lVar5 != 0) {
          if (*(long *)(lVar12 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar7 = FUN_039afee4(6,DAT_09186500);
          if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_04b711d8(local_60,uVar7,DAT_091bf658);
          uStack_b8 = local_60._8_8_;
          local_c0 = local_60._0_8_;
          local_b0 = local_50;
          *(undefined8 *)(lVar12 + 0x98) = local_60._8_8_;
          *(undefined8 *)(lVar12 + 0x90) = local_60._0_8_;
          *(undefined8 *)(lVar12 + 0xa0) = local_50;
          thunk_FUN_03f5d7b8(lVar12 + 0x90,0);
          local_60._8_8_ = *(undefined8 *)(lVar12 + 0x98);
          local_60._0_8_ = *(undefined8 *)(lVar12 + 0x90);
          local_50 = *(undefined8 *)(lVar12 + 0xa0);
          FUN_04b720b4(&local_d8,local_60,DAT_091bf6c8);
          uStack_88 = uStack_d0;
          local_90 = local_d8;
          local_80 = local_c8;
          uVar14 = FUN_041e5390(&local_90,DAT_0919a708);
          if ((uVar14 & 1) == 0) {
            *param_1 = 1;
            *(undefined8 *)(param_1 + 0xe) = uStack_88;
            *(long **)(param_1 + 0xc) = local_90;
            *(ulong *)(param_1 + 0x10) = local_80;
            thunk_FUN_03f5d7b8(param_1 + 0xc,0);
            FUN_042c597c(param_1 + 2,&local_90,param_1,DAT_091c1e98);
            return;
          }
          goto LAB_042bb730;
        }
      }
      else {
        plVar11 = *(long **)(lVar12 + 0x48);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar11;
        lVar8 = *(long *)(lVar12 + 0x70);
        uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar14 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09186500) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_042bbd90;
            }
            uVar14 = uVar14 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar14 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186500,5);
LAB_042bbd90:
        uVar7 = (*(code *)*puVar6)(plVar11,puVar6[1]);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar7,uVar7);
        }
        UnityEngine_UI_Image__set_sprite(lVar8,uVar7,0);
      }
    }
    else {
      if (*(long *)(lVar12 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_UI_Image__set_sprite(*(long *)(lVar12 + 0x70),*(undefined8 *)(lVar12 + 0x58),0);
    }
  }
  if (*(long *)(lVar12 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar12 + 0x70) + 0xd8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar14 = UnityEngine_Object__op_Implicit(uVar7,0);
  if ((uVar14 & 1) != 0) {
    uVar7 = DG_Tweening_DOTweenModuleUI__DOFade
                      (0x3f800000,0x3e800000,*(undefined8 *)(lVar12 + 0x70),0);
    uVar7 = FUN_04d9656c(uVar7,1,DAT_091dbff0);
    uVar7 = FUN_04d8dd74(uVar7,DAT_091dbc90);
    *(undefined8 *)(lVar12 + 0xa8) = uVar7;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar12 + 0xa8));
  }
LAB_042bbf48:
  cVar2 = DAT_095162d8;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar11 = *(long **)(param_1 + 2);
  if (plVar11 != (long *)0x0) {
    lVar12 = *plVar11;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091866a8) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_042bbfd0;
        }
        uVar14 = uVar14 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091866a8,2);
LAB_042bbfd0:
    (*(code *)*puVar6)(plVar11,puVar6[1]);
  }
  return;
}


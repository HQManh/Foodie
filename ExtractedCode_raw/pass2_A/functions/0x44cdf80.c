// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingCustomerAssets.<LoadOne>d__8$$MoveNext
// address: 0x44cdf80
// body: available
// range: 0x44cdf80-0x44cea8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44cea48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cea50 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cea54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cea58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cea5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cea60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cea64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cea68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cea6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cea70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cea74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cea78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044cea4c) */

void CookOrder_Cooking_Implement_CookingCustomerAssets_<LoadOne>d__8__MoveNext(int *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int **ppiVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 local_e0 [16];
  int **local_d0;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  int local_84;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  int *local_28;
  
  local_28 = param_1;
  if ((DAT_095182bf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf638);
    FUN_03f5c2a4(&DAT_091bf668);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091975f8);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09197610);
    FUN_03f5c2a4(&DAT_09197618);
    FUN_03f5c2a4(&DAT_09197808);
    FUN_03f5c2a4(&DAT_09175060);
    FUN_03f5c2a4(&DAT_09175068);
    FUN_03f5c2a4(&DAT_09199b40);
    FUN_03f5c2a4(&DAT_09199b60);
    FUN_03f5c2a4(&DAT_0919ef58);
    FUN_03f5c2a4(&DAT_0919ef68);
    FUN_03f5c2a4(&DAT_09171908);
    FUN_03f5c2a4(&DAT_0917a090);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095182bf = 1;
  }
  local_84 = *param_1;
  lVar13 = *(long *)(param_1 + 8);
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  local_b8 = 0;
  if (local_84 == 1) {
    local_b0 = *(undefined1 (*) [16])(param_1 + 0x1a);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    local_84 = -1;
    *param_1 = -1;
LAB_044ce164:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar7 = local_b0._0_8_;
    if ((long *)local_b0._0_8_ != (long *)0x0) {
      lVar10 = *(long *)local_b0._0_8_;
      uVar14 = local_b0._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_044ce280;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_b0._0_8_,DAT_091868c0,2);
LAB_044ce280:
      (*(code *)*puVar5)(uVar7,uVar14,puVar5[1]);
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CookOrder_Cooking_Implement_CookingCustomerAssets__CheckLifetime
              (lVar13,*(undefined8 *)(local_28 + 10));
    iVar4 = FUN_0640f818(local_28 + 0x14,DAT_09197808);
    if (iVar4 == 1) {
      uVar7 = FUN_0640f7ac(local_28 + 0x14,DAT_09197800);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar11 = UnityEngine_Object__op_Implicit(uVar7,0);
      if ((uVar11 & 1) != 0) {
        FUN_0640f7ac(local_28 + 0x14,DAT_09197800);
        CookOrder_Cooking_Implement_CookingCustomerHandle__Find();
        uVar7 = FUN_0640f7ac(local_28 + 0x14,DAT_09197800);
        goto LAB_044ce6c0;
      }
    }
  }
  else {
    if (local_84 == 0) {
LAB_044ce0bc:
      local_d0 = &local_28;
      local_e0._8_8_ = &local_84;
      local_e0._0_8_ = 0;
      local_84 = -1;
      local_b0 = *(undefined1 (*) [16])(local_28 + 0x1a);
      local_28[0x1a] = 0;
      local_28[0x1b] = 0;
      local_28[0x1c] = 0;
      local_28[0x1d] = 0;
      *local_28 = -1;
      goto LAB_044ce0d8;
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CookOrder_Cooking_Implement_CookingCustomerAssets__CheckLifetime
              (lVar13,*(undefined8 *)(param_1 + 10));
    auVar2._8_8_ = local_b0._8_8_;
    auVar2._0_8_ = local_b0._0_8_;
    auVar1._8_8_ = local_80._8_8_;
    auVar1._0_8_ = local_80._0_8_;
    auVar15._8_8_ = local_e0._8_8_;
    auVar15._0_8_ = local_e0._0_8_;
    if ((*(long *)(local_28 + 0xc) != 0) &&
       (plVar6 = *(long **)(*(long *)(local_28 + 0xc) + 0x18), local_e0 = auVar15, local_80 = auVar1
       , local_b0 = auVar2, plVar6 != (long *)0x0)) {
      uVar11 = (**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
      if ((uVar11 & 1) != 0) {
        if (*(long *)(local_28 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar6 = *(long **)(*(long *)(local_28 + 0xc) + 0x18);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *(long *)(lVar13 + 0x10);
        uVar7 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar7,uVar7);
        }
        uVar11 = FUN_06f6d800(lVar10,uVar7,&local_a0,DAT_0919ef68);
        if ((uVar11 & 1) != 0) {
          uVar7 = FUN_0640f7ac(&local_a0,DAT_09197800);
          goto LAB_044ce6c0;
        }
        if (*(long *)(local_28 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar6 = *(long **)(*(long *)(local_28 + 0xc) + 0x18);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar8 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
        uVar7 = DAT_09171908;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = System_Type__GetTypeFromHandle(uVar7,0);
        if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_AddressableAssets_Addressables__LoadResourceLocationsAsync
                  (&local_70,uVar8,uVar7,0);
        uStack_48 = uStack_68;
        local_50 = local_70;
        local_40 = local_60;
        *(undefined8 *)(local_28 + 0x10) = uStack_68;
        *(undefined8 *)(local_28 + 0xe) = local_70;
        *(undefined8 *)(local_28 + 0x12) = local_60;
        thunk_FUN_03f5d7b8(local_28 + 0xe,0);
        local_e0._8_8_ = &local_84;
        local_e0._0_8_ = 0;
        local_d0 = &local_28;
        if (local_84 == 0) goto LAB_044ce0bc;
        uStack_48 = *(undefined8 *)(local_28 + 0x10);
        local_50 = *(undefined8 *)(local_28 + 0xe);
        local_40 = *(undefined8 *)(local_28 + 0x12);
        uVar7 = FUN_03f5c42c(DAT_09175060,&local_50);
        local_80 = Cysharp_Threading_Tasks_EnumeratorAsyncExtensions__ToUniTask(uVar7,8,0,0);
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        thunk_FUN_03f5d7b8(local_80,0);
        local_b0 = local_80;
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
        uVar7 = local_b0._0_8_;
        if ((long *)local_b0._0_8_ == (long *)0x0) {
LAB_044ce0d8:
          if (DAT_095162d6 == '\0') {
            FUN_03f5c2a4(&DAT_091868c0);
            DAT_095162d6 = '\x01';
          }
          uVar7 = local_b0._0_8_;
          if ((long *)local_b0._0_8_ != (long *)0x0) {
            lVar10 = *(long *)local_b0._0_8_;
            uVar14 = local_b0._8_8_ & 0xffff;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == DAT_091868c0) {
                  puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                  goto LAB_044ce344;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(local_b0._0_8_,DAT_091868c0,2);
LAB_044ce344:
            (*(code *)*puVar5)(uVar7,uVar14,puVar5[1]);
          }
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          CookOrder_Cooking_Implement_CookingCustomerAssets__CheckLifetime
                    (lVar13,*(undefined8 *)(local_28 + 10));
          iVar4 = FUN_0640f818(local_28 + 0xe,DAT_09197618);
          if (iVar4 == 1) {
            lVar10 = FUN_0640f7ac(local_28 + 0xe,DAT_09197610);
            if (lVar10 != 0) {
              plVar6 = (long *)FUN_0640f7ac(local_28 + 0xe,DAT_09197610);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar10 = *plVar6;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == DAT_0917a090) {
                    puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_044ce41c;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a090,0);
LAB_044ce41c:
              iVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
              iVar9 = 8;
              if (iVar4 != 0) {
                iVar9 = 0xf;
              }
              goto LAB_044ce43c;
            }
          }
          iVar9 = 8;
        }
        else {
          lVar10 = *(long *)local_b0._0_8_;
          uVar14 = local_b0._8_8_ & 0xffff;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_091868c0) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_044ce9ec;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(local_b0._0_8_,DAT_091868c0,0);
LAB_044ce9ec:
          iVar4 = (*(code *)*puVar5)(uVar7,uVar14,puVar5[1]);
          if (iVar4 != 0) goto LAB_044ce0d8;
          local_84 = 0;
          *local_28 = 0;
          *(undefined1 (*) [16])(local_28 + 0x1a) = local_b0;
          thunk_FUN_03f5d7b8(local_28 + 0x1a,0);
          FUN_044d7c50(local_28 + 2,local_b0,local_28,DAT_09199b40);
          iVar9 = 0xc;
        }
LAB_044ce43c:
        ppiVar3 = local_d0;
        if (local_84 < 0) {
          uVar11 = FUN_0640f598(*local_d0 + 0xe,DAT_091975f8);
          if ((uVar11 & 1) != 0) {
            piVar12 = *ppiVar3;
            uStack_68 = *(undefined8 *)(piVar12 + 0x10);
            local_70 = *(undefined8 *)(piVar12 + 0xe);
            local_60 = *(undefined8 *)(piVar12 + 0x12);
            if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_48 = uStack_68;
            local_50 = local_70;
            local_40 = local_60;
            FUN_04b71ee0(&local_50,DAT_091bf668);
          }
        }
        if (iVar9 != 0xf) {
          if (iVar9 == 8) goto LAB_044ce6bc;
          if (iVar9 != 0) {
            return;
          }
        }
        if (*(long *)(local_28 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar6 = *(long **)(*(long *)(local_28 + 0xc) + 0x18);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar7 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
        if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_04b711d8(&local_50,uVar7,DAT_091bf638);
        uStack_68 = uStack_48;
        local_70 = local_50;
        local_60 = local_40;
        *(undefined8 *)(local_28 + 0x16) = uStack_48;
        *(undefined8 *)(local_28 + 0x14) = local_50;
        *(undefined8 *)(local_28 + 0x18) = local_40;
        thunk_FUN_03f5d7b8(local_28 + 0x14,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(local_28 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar6 = *(long **)(*(long *)(local_28 + 0xc) + 0x18);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *(long *)(lVar13 + 0x10);
        uVar7 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar7,uVar7);
        }
        uStack_48 = *(undefined8 *)(local_28 + 0x16);
        local_50 = *(undefined8 *)(local_28 + 0x14);
        local_40 = *(undefined8 *)(local_28 + 0x18);
        FUN_06f6bb44(lVar10,uVar7,&local_50,DAT_0919ef58);
        uStack_48 = *(undefined8 *)(local_28 + 0x16);
        local_50 = *(undefined8 *)(local_28 + 0x14);
        local_40 = *(undefined8 *)(local_28 + 0x18);
        uVar7 = FUN_03f5c42c(DAT_09175068,&local_50);
        auVar15 = Cysharp_Threading_Tasks_EnumeratorAsyncExtensions__ToUniTask(uVar7,8,0,0);
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_e0 = auVar15;
        thunk_FUN_03f5d7b8(local_e0,0);
        local_b0 = local_e0;
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
        uVar7 = local_b0._0_8_;
        if ((long *)local_b0._0_8_ != (long *)0x0) {
          lVar10 = *(long *)local_b0._0_8_;
          uVar14 = local_b0._8_8_ & 0xffff;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_091868c0) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_044ce7b0;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(local_b0._0_8_,DAT_091868c0,0);
LAB_044ce7b0:
          iVar4 = (*(code *)*puVar5)(uVar7,uVar14,puVar5[1]);
          if (iVar4 == 0) {
            local_84 = 1;
            *local_28 = 1;
            *(undefined1 (*) [16])(local_28 + 0x1a) = local_b0;
            thunk_FUN_03f5d7b8(local_28 + 0x1a,0);
            FUN_044d7c50(local_28 + 2,local_b0,local_28,DAT_09199b40);
            return;
          }
        }
        goto LAB_044ce164;
      }
    }
  }
LAB_044ce6bc:
  uVar7 = 0;
LAB_044ce6c0:
  plVar6 = *(long **)(local_28 + 2);
  *local_28 = -2;
  local_28[0x10] = 0;
  local_28[0x11] = 0;
  local_28[0xe] = 0;
  local_28[0xf] = 0;
  local_28[0x14] = 0;
  local_28[0x15] = 0;
  local_28[0x12] = 0;
  local_28[0x13] = 0;
  local_28[0x18] = 0;
  local_28[0x19] = 0;
  local_28[0x16] = 0;
  local_28[0x17] = 0;
  if (plVar6 == (long *)0x0) {
    *(undefined8 *)(local_28 + 6) = uVar7;
    thunk_FUN_03f5d7b8(local_28 + 6,uVar7);
  }
  else {
    lVar13 = *(long *)(DAT_09199b60 + 0x20);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f95a6c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f95a6c(lVar13);
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar13) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_044ce780;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar6,lVar13,2);
LAB_044ce780:
    (*(code *)*puVar5)(plVar6,uVar7,puVar5[1]);
  }
  return;
}


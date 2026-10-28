// rea decompile_all
// name: CakeOrder.Shop.UICookOrderShop.<IESetUp>d__66$$MoveNext
// address: 0x4367cdc
// body: available
// range: 0x4367cdc-0x43682a7 inclusive
// range: 0x4368348-0x4368547 inclusive
// range: 0x4368584-0x43685b7 inclusive
// range: 0x43685bc-0x43688f7 inclusive
// range: 0x4368a18-0x4368a2b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4367eec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4367efc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436821c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4368274 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4368278 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436827c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4368280 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4368284 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4368288 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436828c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4368290 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4368294 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x043688dc) */
/* WARNING: Removing unreachable block (ram,0x043688a8) */
/* WARNING: Removing unreachable block (ram,0x043688e8) */

undefined8 CakeOrder_Shop_UICookOrderShop_<IESetUp>d__66__MoveNext(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_e8;
  undefined8 *puStack_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  long local_c0;
  long local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  long local_68;
  
  local_68 = param_1;
  if ((DAT_09517884 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174e18);
    FUN_03f5c2a4(&DAT_091c5568);
    FUN_03f5c2a4(&DAT_091a4c10);
    FUN_03f5c2a4(&DAT_091a4bf8);
    FUN_03f5c2a4(&DAT_091a4c00);
    FUN_03f5c2a4(&DAT_091a4c18);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091a4c08);
    FUN_03f5c2a4(&DAT_091a4c20);
    FUN_03f5c2a4(&DAT_091b16b0);
    FUN_03f5c2a4(&DAT_091b16c8);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b16d0);
    FUN_03f5c2a4(&DAT_091b16b8);
    FUN_03f5c2a4(&DAT_091b16a8);
    FUN_03f5c2a4(&DAT_091b16c0);
    FUN_03f5c2a4(&DAT_0917cfe0);
    FUN_03f5c2a4(&DAT_0917cfd8);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_091b49d8);
    FUN_03f5c2a4(&DAT_091d4d30);
    FUN_03f5c2a4(&DAT_091d4d38);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dc870);
    DAT_09517884 = 1;
  }
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  plStack_a8 = &local_68;
  local_70 = 0;
  iVar11 = *(int *)(param_1 + 0x10);
  lVar10 = *(long *)(param_1 + 0x20);
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_b0 = 0;
  local_90 = 0;
  if (iVar11 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    if (lVar10 != 0) goto LAB_043685d8;
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (iVar11 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (lVar10 != 0) goto LAB_0436836c;
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (iVar11 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar10 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_Shop_UIShopItemRemoveAdsPackPermanent__SetUp();
    lVar4 = *(long *)(lVar10 + 0x140);
    if (*(char *)(lVar10 + 0x110) == '\0') {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar4,0);
    }
    else {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_BaseUI_UIElementAbstract__ShowImmediate(lVar4,0,0);
    }
    uVar12 = *(undefined8 *)(lVar10 + 0x148);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar12,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = *(long *)(lVar10 + 0x148);
      if (*(char *)(lVar10 + 0x110) == '\0') {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar4,0);
      }
      else {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        CakeOrder_BaseUI_UIElementAbstract__ShowImmediate(lVar4,0,0);
      }
    }
    CakeOrder_Shop_UICookOrderShop__UpdateRemoveAdsCardsVisibility(lVar10);
    uVar5 = FUN_05a8eda4(DAT_091b49d8);
    if ((uVar5 & 1) != 0) {
      lVar4 = *(long *)(DAT_091b49d0 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = **(long **)(lVar4 + 0xb8);
      uVar12 = thunk_FUN_03f9944c(DAT_09174e18);
      FUN_071cd244(uVar12,lVar10,DAT_091dc870,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_Shop_InAppShopDataAccess__remove_onBuyPack(lVar4,uVar12,0);
      lVar4 = *(long *)(DAT_091b49d0 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = **(long **)(lVar4 + 0xb8);
      uVar12 = thunk_FUN_03f9944c(DAT_09174e18);
      FUN_071cd244(uVar12,lVar10,DAT_091dc870,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_Shop_InAppShopDataAccess__add_onBuyPack(lVar4,uVar12,0);
    }
    uVar12 = thunk_FUN_03f9944c(DAT_0917cfe0);
    FUN_057e0400(uVar12,DAT_091b16c0);
    *(undefined8 *)(lVar10 + 0x168) = uVar12;
    thunk_FUN_03f5d7b8(lVar10 + 0x168,uVar12);
    lVar4 = *(long *)(lVar10 + 0xf8);
    if (lVar4 != 0) {
      iVar11 = 0;
      do {
        iVar3 = UnityEngine_Transform__get_childCount(lVar4,0);
        if (iVar3 <= iVar11) {
          if (*(long *)(lVar10 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_057e185c(&local_e8,*(long *)(lVar10 + 0xc0),DAT_091b05a8);
          puStack_c8 = puStack_e0;
          local_d0 = local_e8;
          local_c0 = local_d8;
          *(undefined8 **)(local_68 + 0x30) = puStack_e0;
          *(undefined8 *)(local_68 + 0x28) = local_e8;
          *(long *)(local_68 + 0x38) = local_d8;
          thunk_FUN_03f5d7b8(local_68 + 0x28,0);
          *(undefined4 *)(local_68 + 0x10) = 0xfffffffd;
          goto LAB_0436844c;
        }
        if (*(long *)(lVar10 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = UnityEngine_Transform__GetChild(*(long *)(lVar10 + 0xf8),iVar11,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = FUN_04a6a14c(lVar4,DAT_091c5568);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Equality(lVar4,0,0);
        if ((uVar5 & 1) == 0) {
          uVar12 = *(undefined8 *)(lVar10 + 0x140);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Equality(lVar4,uVar12,0);
          if ((uVar5 & 1) == 0) {
            uVar12 = *(undefined8 *)(lVar10 + 0x148);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = UnityEngine_Object__op_Equality(lVar4,uVar12,0);
            if ((uVar5 & 1) == 0) {
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar4 + 0x48),0);
              if ((uVar5 & 1) == 0) {
                CakeOrder_Shop_UIShopItemPack__SetShopId(lVar4,*(undefined8 *)(lVar4 + 0x48));
              }
              if ((*(char *)(lVar10 + 0x110) == '\0') ||
                 (uVar5 = CakeOrder_Shop_UICookOrderShop__IsSoldOut(lVar4), (uVar5 & 1) != 0)) {
                CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar4,0);
              }
              else {
                CakeOrder_BaseUI_UIElementAbstract__ShowImmediate(lVar4,0,0);
              }
              lVar2 = DAT_091b16c8;
              lVar6 = *(long *)(lVar10 + 0x168);
              if (lVar6 == 0) {
LAB_0436827c:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = *(long *)(lVar6 + 0x10);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_0436827c;
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *plVar9 = lVar4;
                thunk_FUN_03f5d7b8(plVar9,lVar4);
              }
              else {
                FUN_057e0c68(lVar6,lVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        lVar4 = *(long *)(lVar10 + 0xf8);
        iVar11 = iVar11 + 1;
      } while (lVar4 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_04368348;
LAB_0436844c:
  uVar5 = FUN_071bd28c(local_68 + 0x28,DAT_091a45a0);
  if ((uVar5 & 1) == 0) goto code_r0x04368464;
  *(undefined8 *)(local_68 + 0x40) = *(undefined8 *)(local_68 + 0x38);
  thunk_FUN_03f5d7b8();
  if (*(long *)(lVar10 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)(*(long *)(lVar10 + 0x108) + 0x58) != '\0') {
    *(undefined8 *)(local_68 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(local_68 + 0x18),0);
    uVar7 = 1;
    goto LAB_04368584;
  }
LAB_0436836c:
  uVar12 = *(undefined8 *)(lVar10 + 0x150);
  uVar13 = *(undefined8 *)(lVar10 + 0xf8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = FUN_04c35338(uVar12,uVar13,DAT_091d4d38);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_Shop_UIShopItemPack__SetShopId(lVar4,*(undefined8 *)(local_68 + 0x40));
  if (*(char *)(lVar10 + 0x110) == '\0') {
    CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar4,0);
  }
  else {
    CakeOrder_BaseUI_UIElementAbstract__ShowImmediate(lVar4,0,0);
  }
  lVar2 = DAT_091b16c8;
  lVar6 = *(long *)(lVar10 + 0x168);
  if (lVar6 == 0) {
LAB_04368530:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar8 = *(long *)(lVar6 + 0x10);
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  if (lVar8 == 0) goto LAB_04368530;
  uVar1 = *(uint *)(lVar6 + 0x18);
  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
    plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
    *plVar9 = lVar4;
    thunk_FUN_03f5d7b8(plVar9,lVar4);
  }
  else {
    FUN_057e0c68(lVar6,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
  }
  *(undefined8 *)(local_68 + 0x40) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(local_68 + 0x40),0);
  goto LAB_0436844c;
code_r0x04368464:
  CakeOrder_Shop_UICookOrderShop_<IESetUp>d__66__<>m__Finally1();
  *(undefined8 *)(local_68 + 0x30) = 0;
  *(undefined8 *)(local_68 + 0x38) = 0;
  *(undefined8 *)(local_68 + 0x28) = 0;
  if (*(long *)(lVar10 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)(lVar10 + 0x128),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  UnityEngine_Transform__SetAsLastSibling(lVar4,0);
  uVar12 = thunk_FUN_03f9944c(DAT_0917cfd8);
  FUN_057e0400(uVar12,DAT_091b16a8);
  *(undefined8 *)(lVar10 + 0x170) = uVar12;
  thunk_FUN_03f5d7b8(lVar10 + 0x170,uVar12);
  if (*(long *)(lVar10 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_e8,*(long *)(lVar10 + 200),DAT_091b05a8);
  puStack_c8 = puStack_e0;
  local_d0 = local_e8;
  local_c0 = local_d8;
  *(undefined8 **)(local_68 + 0x30) = puStack_e0;
  *(undefined8 *)(local_68 + 0x28) = local_e8;
  *(long *)(local_68 + 0x38) = local_d8;
  thunk_FUN_03f5d7b8(local_68 + 0x28,0);
  *(undefined4 *)(local_68 + 0x10) = 0xfffffffc;
  while (uVar5 = FUN_071bd28c(local_68 + 0x28,DAT_091a45a0), (uVar5 & 1) != 0) {
    *(undefined8 *)(local_68 + 0x40) = *(undefined8 *)(local_68 + 0x38);
    thunk_FUN_03f5d7b8();
    if (*(long *)(lVar10 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(*(long *)(lVar10 + 0x108) + 0x58) != '\0') {
      *(undefined8 *)(local_68 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(local_68 + 0x18),0);
      uVar7 = 2;
LAB_04368584:
      uVar12 = 1;
      *(undefined4 *)(local_68 + 0x10) = uVar7;
      goto LAB_04368590;
    }
LAB_043685d8:
    uVar12 = *(undefined8 *)(lVar10 + 0x158);
    uVar13 = *(undefined8 *)(lVar10 + 0x100);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = FUN_04c35338(uVar12,uVar13,DAT_091d4d30);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_Shop_UIShopItemGoldPack__SetUp
              (lVar4,*(undefined8 *)(lVar10 + 0x160),*(undefined8 *)(local_68 + 0x40));
    if (*(char *)(lVar10 + 0x110) == '\0') {
      CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar4,0);
    }
    else {
      CakeOrder_BaseUI_UIElementAbstract__ShowImmediate(lVar4,0,0);
    }
    lVar2 = DAT_091b16b0;
    lVar6 = *(long *)(lVar10 + 0x170);
    if (lVar6 == 0) {
LAB_043688b8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *(long *)(lVar6 + 0x10);
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_043688b8;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *plVar9 = lVar4;
      thunk_FUN_03f5d7b8(plVar9,lVar4);
    }
    else {
      FUN_057e0c68(lVar6,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    *(undefined8 *)(local_68 + 0x40) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(local_68 + 0x40),0);
  }
  CakeOrder_Shop_UICookOrderShop_<IESetUp>d__66__<>m__Finally2();
  *(undefined8 *)(local_68 + 0x30) = 0;
  *(undefined8 *)(local_68 + 0x38) = 0;
  *(undefined8 *)(local_68 + 0x28) = 0;
  if (*(long *)(lVar10 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  UnityEngine_Transform__SetAsLastSibling(*(long *)(lVar10 + 0x100),0);
  if (*(long *)(lVar10 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)(lVar10 + 0x130),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  UnityEngine_Transform__SetAsLastSibling(lVar4,0);
  *(undefined1 *)(lVar10 + 0x180) = 1;
  if (*(char *)(lVar10 + 0x110) != '\0') {
    uVar5 = CakeOrder_Shop_UICookOrderShop__get_IsRemoveAdsOwned();
    if ((uVar5 & 1) == 0) {
      if (*(long *)(lVar10 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_BaseUI_UIElementAbstract__ShowImmediate(*(long *)(lVar10 + 0x140),0,0);
      uVar12 = *(undefined8 *)(lVar10 + 0x148);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar12,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(lVar10 + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        CakeOrder_BaseUI_UIElementAbstract__ShowImmediate(*(long *)(lVar10 + 0x148),0,0);
      }
    }
    if (*(long *)(lVar10 + 0x168) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_d0,*(long *)(lVar10 + 0x168),DAT_091b16d0);
    puStack_78 = puStack_c8;
    local_80 = local_d0;
    local_70 = local_c0;
    local_d0 = 0;
    puStack_c8 = &local_80;
    while (uVar5 = FUN_071bd28c(&local_80,DAT_091a4c18), lVar4 = local_70, (uVar5 & 1) != 0) {
      uVar5 = CakeOrder_Shop_UICookOrderShop__IsSoldOut(local_70);
      if ((uVar5 & 1) == 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        CakeOrder_BaseUI_UIElementAbstract__ShowImmediate(lVar4,0,0);
      }
    }
    FUN_071bd288(&local_80,DAT_091a4c10);
    if (*(long *)(lVar10 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_d0,*(long *)(lVar10 + 0x170),DAT_091b16b8);
    puStack_98 = puStack_c8;
    local_a0 = local_d0;
    local_90 = local_c0;
    local_d0 = 0;
    puStack_c8 = &local_a0;
    while (uVar5 = FUN_071bd28c(&local_a0,DAT_091a4c00), (uVar5 & 1) != 0) {
      if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_BaseUI_UIElementAbstract__ShowImmediate(local_90,0,0);
    }
    FUN_071bd288(&local_a0,DAT_091a4bf8);
  }
  CakeOrder_Shop_UICookOrderShop__UpdateRemoveAdsCardsVisibility(lVar10);
LAB_04368348:
  uVar12 = 0;
LAB_04368590:
  lVar10 = local_b0;
  if (local_b0 == 0) {
    return uVar12;
  }
  FUN_039b766c(&plStack_a8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548(lVar10);
}


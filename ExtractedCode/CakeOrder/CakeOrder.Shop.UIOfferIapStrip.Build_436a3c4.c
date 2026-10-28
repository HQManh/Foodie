// rea decompile_all
// name: CakeOrder.Shop.UIOfferIapStrip$$Build
// address: 0x436a3c4
// body: available
// range: 0x436a3c4-0x436af2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x436a82c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436aed0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436aed4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436aed8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436aedc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436aee0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436aee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436aee8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436aeec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436aef0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436aef4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436aef8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0436af00) */

void CakeOrder_Shop_UIOfferIapStrip__Build(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  float fVar13;
  long *local_a0;
  long **pplStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80;
  long **pplStack_78;
  undefined8 local_70;
  long *local_68;
  
  if ((DAT_09517892 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091cdac0);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b16c8);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_091b16e0);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_091b49d8);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09172998);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091f7768);
    FUN_03f5c2a4(&DAT_091f9fd0);
    FUN_03f5c2a4(&DAT_091f9fe8);
    FUN_03f5c2a4(&DAT_091fa010);
    FUN_03f5c2a4(&DAT_091fa000);
    FUN_03f5c2a4(&DAT_091f9ff8);
    FUN_03f5c2a4(&DAT_0920a3c0);
    FUN_03f5c2a4(&DAT_091fa008);
    FUN_03f5c2a4(&DAT_091f75a0);
    DAT_09517892 = 1;
  }
  uVar6 = DAT_091b49d8;
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80 = (long *)0x0;
  pplStack_78 = (long **)0x0;
  local_88 = 0;
  *(undefined1 *)(param_1 + 0x50) = 1;
  uVar2 = FUN_05a8eda4(uVar6);
  lVar12 = 0;
  if ((uVar2 & 1) != 0) {
    lVar12 = *(long *)(DAT_091b49d0 + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_0436aedc;
    lVar12 = CakeOrder_Shop_InAppShopDataAccess__CreateOfferRules(**(long **)(lVar12 + 0xb8),0);
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar3,DAT_091b0558);
  if (param_2 != (long *)0x0) {
    lVar9 = *param_2;
    uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar2 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917a768) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0436a68c;
        }
        uVar2 = uVar2 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a768,0);
LAB_0436a68c:
    plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
    pplStack_98 = &local_68;
    local_a0 = (long *)0x0;
    do {
      local_68 = plVar5;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar2 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0436a718;
          }
          uVar2 = uVar2 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_0436a718:
      uVar2 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      plVar5 = local_68;
      if ((uVar2 & 1) == 0) {
        if (local_68 == (long *)0x0) break;
        lVar12 = *local_68;
        uVar2 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar2 == 0) goto LAB_0436a878;
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_0436a860;
      }
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *local_68;
      uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar2 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917ae48) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0436a77c;
          }
          uVar2 = uVar2 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917ae48,0);
LAB_0436a77c:
      uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = FUN_057e1004(lVar3,uVar6,DAT_091b0590);
      plVar5 = local_68;
      if ((((uVar2 & 1) == 0) &&
          (uVar2 = CakeOrder_Shop_UIOfferIapStrip__IsOfferAvailable(param_1,uVar6),
          plVar5 = local_68, (uVar2 & 1) != 0)) &&
         ((lVar12 == 0 ||
          (uVar2 = CakeOrder_Shop_ShopOfferRules__IsVisible(lVar12,uVar6), plVar5 = local_68,
          (uVar2 & 1) != 0)))) {
        lVar9 = DAT_091b0570;
        lVar10 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          puVar4 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
          *puVar4 = uVar6;
          thunk_FUN_03f5d7b8(puVar4,uVar6);
          plVar5 = local_68;
        }
        else {
          FUN_057e0c68(lVar3,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
          plVar5 = local_68;
        }
      }
    } while( true );
  }
  goto LAB_0436a8a4;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar11 = piVar11 + 4;
    if (uVar2 == 0) break;
LAB_0436a860:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0436a894;
    }
  }
LAB_0436a878:
  puVar4 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_0436a894:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_0436a8a4:
  if (lVar3 == 0) goto LAB_0436aedc;
  if (*(int *)(lVar3 + 0x18) == 0) {
    return;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if ((uVar2 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar6,0,0);
    if ((uVar2 & 1) == 0) {
      lVar12 = *(long *)(param_1 + 0x28);
      if (lVar12 == 0) {
LAB_0436aedc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(lVar12 + 0x28) == '\0') {
        uVar6 = UnityEngine_Object__GetName(param_1,0);
        puVar4 = &DAT_091fa000;
      }
      else {
        uVar6 = Utilities_UIScrollSnap__get_Content(lVar12,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar2 = UnityEngine_Object__op_Equality(uVar6,0,0);
        if ((uVar2 & 1) == 0) {
          if (*(long *)(param_1 + 0x28) != 0) {
            *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x8d) = 1;
            lVar12 = CakeOrder_Shop_UIOfferIapStrip__get_Root(param_1);
            if (lVar12 != 0) {
              UnityEngine_GameObject__SetActive(lVar12,1,0);
              FUN_057e185c(&local_a0,lVar3,DAT_091b05a8);
              pplStack_78 = pplStack_98;
              local_80 = local_a0;
              local_70 = local_90;
              pplStack_98 = &local_80;
              local_a0 = (long *)0x0;
LAB_0436aa98:
              uVar2 = FUN_071bd28c(&local_80,DAT_091a45a0);
              uVar6 = local_70;
              if ((uVar2 & 1) != 0) {
                if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar2 = CakeOrder_DataSO_ShopCardCatalogSO__TryGetCardPrefab
                                  (*(long *)(param_1 + 0x38),local_70,&local_88,0);
                if ((uVar2 & 1) == 0) {
                  uVar8 = UnityEngine_Object__GetName(param_1,0);
                  uVar6 = System_String__Concat(uVar8,DAT_091f9ff8,uVar6,DAT_091f7768,0);
                  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  UnityEngine_Debug__LogError(uVar6,param_1,0);
                  goto LAB_0436aa98;
                }
                uVar7 = System_String__Concat(DAT_0920a3c0,uVar6,0);
                plVar5 = (long *)FUN_03f5c394(DAT_09180748,1);
                uVar8 = DAT_09172998;
                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar12 = System_Type__GetTypeFromHandle(uVar8,0);
                if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if ((lVar12 != 0) &&
                   (lVar3 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
                {
                  uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar6,0);
                }
                if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                plVar5[4] = lVar12;
                thunk_FUN_03f5d7b8(plVar5 + 4,lVar12);
                lVar12 = thunk_FUN_03f9944c(DAT_09184b68);
                UnityEngine_GameObject___ctor(lVar12,uVar7,plVar5,0);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                plVar5 = (long *)UnityEngine_GameObject__get_transform(lVar12,0);
                if ((plVar5 != (long *)0x0) && (*plVar5 != DAT_09189c98)) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c8d0(plVar5);
                }
                if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar8 = Utilities_UIScrollSnap__get_Content(*(long *)(param_1 + 0x28),0);
                if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550(uVar8,uVar8);
                }
                UnityEngine_Transform__SetParent(plVar5,uVar8,0,0);
                if (DAT_09515cf3 == '\0') {
                  FUN_03f5c2a4(&DAT_0918cbd0);
                  DAT_09515cf3 = '\x01';
                }
                fVar13 = *(float *)(param_1 + 0x40);
                lVar3 = *(long *)(DAT_0918cbd0 + 0xb8);
                UnityEngine_Transform__set_localScale
                          (*(float *)(lVar3 + 0xc) * fVar13,*(float *)(lVar3 + 0x10) * fVar13,
                           *(float *)(lVar3 + 0x14) * fVar13,plVar5,0);
                uVar8 = local_88;
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar3 = FUN_04c35338(uVar8,plVar5,DAT_091d4bc0);
                if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar9 = FUN_04b7c324(lVar3,DAT_091cdac0);
                uVar2 = UnityEngine_Object__op_Equality(lVar9,0,0);
                if ((uVar2 & 1) == 0) {
                  plVar5 = (long *)UnityEngine_GameObject__get_transform(lVar3,0);
                  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (*plVar5 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c8d0(plVar5);
                  }
                  UnityEngine_RectTransform__set_anchorMin(0x3f000000,0x3f000000,plVar5,0);
                  UnityEngine_RectTransform__set_anchorMax(0x3f000000,0x3f000000,plVar5,0);
                  UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,plVar5,0);
                  if (DAT_09515ce8 == '\0') {
                    FUN_03f5c2a4(&DAT_0918cb68);
                    DAT_09515ce8 = '\x01';
                  }
                  UnityEngine_RectTransform__set_anchoredPosition
                            (**(undefined4 **)(DAT_0918cb68 + 0xb8),
                             (*(undefined4 **)(DAT_0918cb68 + 0xb8))[1],plVar5,0);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  CakeOrder_Shop_UIShopItemPack__SetShopId(lVar9,uVar6);
                  CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar9,0);
                  lVar12 = DAT_091b16c8;
                  lVar3 = *(long *)(param_1 + 0x48);
                  if (lVar3 != 0) {
                    lVar10 = *(long *)(lVar3 + 0x10);
                    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                    if (lVar10 != 0) {
                      uVar1 = *(uint *)(lVar3 + 0x18);
                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                        plVar5 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar5 = lVar9;
                        thunk_FUN_03f5d7b8(plVar5,lVar9);
                      }
                      else {
                        FUN_057e0c68(lVar3,lVar9,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      goto LAB_0436aa98;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar8 = UnityEngine_Object__GetName(param_1,0);
                uVar6 = System_String__Concat(uVar8,DAT_091fa010,uVar6,DAT_091f75a0,0);
                if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                UnityEngine_Debug__LogError(uVar6,lVar3,0);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                UnityEngine_Object__Destroy(lVar12,0);
                goto LAB_0436aa98;
              }
              FUN_071bd288(&local_80,DAT_091a4598);
              if (*(long *)(param_1 + 0x28) != 0) {
                Utilities_UIScrollSnap__RebuildLayout(*(long *)(param_1 + 0x28),0);
                if (*(long *)(param_1 + 0x48) != 0) {
                  if (*(int *)(*(long *)(param_1 + 0x48) + 0x18) == 0) {
                    return;
                  }
                  CakeOrder_Shop_UIOfferIapStrip__SubscribeBuyPack(param_1);
                  if (*(long *)(param_1 + 0x28) != 0) {
                    Utilities_UIScrollSnap__GoToPanelImmediate(*(long *)(param_1 + 0x28),0,0);
                    CakeOrder_Shop_UIOfferIapStrip__UpdateSwipeEnabled(param_1);
                    return;
                  }
                }
              }
            }
          }
          goto LAB_0436aedc;
        }
        uVar6 = UnityEngine_Object__GetName(param_1,0);
        puVar4 = &DAT_091fa008;
      }
      uVar6 = System_String__Concat(uVar6,*puVar4,0);
      param_1 = *(long *)(param_1 + 0x28);
      goto LAB_0436a948;
    }
    uVar6 = UnityEngine_Object__GetName(param_1,0);
    puVar4 = &DAT_091f9fe8;
  }
  else {
    uVar6 = UnityEngine_Object__GetName(param_1,0);
    puVar4 = &DAT_091f9fd0;
  }
  uVar6 = System_String__Concat(uVar6,*puVar4,0);
LAB_0436a948:
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835d0);
  }
  UnityEngine_Debug__LogError(uVar6,param_1,0);
  return;
}


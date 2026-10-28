// rea decompile_all
// name: CakeOrder.Shop.UICookOrderShop$$ShowElementImmediate
// address: 0x4363958
// body: available
// range: 0x4363958-0x4363dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4363db4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4363db8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4363dbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4363dc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UICookOrderShop__ShowElementImmediate(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09517862 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4c10);
    FUN_03f5c2a4(&DAT_091a49d0);
    FUN_03f5c2a4(&DAT_091a4bf8);
    FUN_03f5c2a4(&DAT_091a49d8);
    FUN_03f5c2a4(&DAT_091a4c00);
    FUN_03f5c2a4(&DAT_091a4c18);
    FUN_03f5c2a4(&DAT_091a4c08);
    FUN_03f5c2a4(&DAT_091a4c20);
    FUN_03f5c2a4(&DAT_091a49e0);
    FUN_03f5c2a4(&DAT_091b1130);
    FUN_03f5c2a4(&DAT_091b1138);
    FUN_03f5c2a4(&DAT_091b16d0);
    FUN_03f5c2a4(&DAT_091b16b8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517862 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  lVar2 = UnityEngine_Component__get_gameObject(param_1,0);
  if (lVar2 != 0) {
    UnityEngine_GameObject__SetActive(lVar2,1,0);
    CakeOrder_Shop_UICookOrderShop__UpdateOnShow(param_1);
    if (*(long *)(param_1 + 400) != 0) {
      FUN_057e185c(&local_d0,*(long *)(param_1 + 400),DAT_091b1138);
      local_70 = local_c0;
      puStack_78 = puStack_c8;
      local_80 = local_d0;
      local_d0 = 0;
      puStack_c8 = &local_80;
      while (uVar3 = FUN_071bd28c(&local_80,DAT_091a49d8), (uVar3 & 1) != 0) {
        DG_Tweening_TweenExtensions__Kill(local_70,0,0);
      }
      FUN_071bd288(&local_80,DAT_091a49d0);
      lVar2 = *(long *)(param_1 + 400);
      if (lVar2 != 0) {
        iVar1 = *(int *)(lVar2 + 0x18);
        *(undefined4 *)(lVar2 + 0x18) = 0;
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
        }
        if (*(long *)(param_1 + 0xd0) != 0) {
          UnityEngine_CanvasGroup__set_alpha(0x3f800000,*(long *)(param_1 + 0xd0),0);
          lVar2 = *(long *)(param_1 + 0xd8);
          if (lVar2 != 0) {
            uVar8 = UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
            if (*(long *)(param_1 + 0x108) != 0) {
              UnityEngine_RectTransform__set_anchoredPosition
                        (uVar8,*(undefined4 *)(*(long *)(param_1 + 0x108) + 0x18),lVar2,0);
              lVar2 = *(long *)(param_1 + 0xe8);
              if (lVar2 != 0) {
                uVar4 = *(uint *)(lVar2 + 0x18);
                if (0 < (int)uVar4) {
                  uVar7 = 0;
                  do {
                    if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    lVar6 = *(long *)(lVar2 + (long)(int)uVar7 * 8 + 0x20);
                    if (DAT_09515cf3 == '\0') {
                      FUN_03f5c2a4(&DAT_0918cbd0);
                      DAT_09515cf3 = '\x01';
                    }
                    if (lVar6 == 0) goto LAB_04363db4;
                    lVar5 = *(long *)(DAT_0918cbd0 + 0xb8);
                    UnityEngine_Transform__set_localScale
                              (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                               *(undefined4 *)(lVar5 + 0x14),lVar6,0);
                    uVar4 = *(uint *)(lVar2 + 0x18);
                    uVar7 = uVar7 + 1;
                  } while ((int)uVar7 < (int)uVar4);
                }
                if (*(long *)(param_1 + 0xf0) != 0) {
                  lVar2 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xf0),0);
                  if (DAT_09515cf3 == '\0') {
                    FUN_03f5c2a4(&DAT_0918cbd0);
                    DAT_09515cf3 = '\x01';
                  }
                  if (lVar2 != 0) {
                    lVar6 = *(long *)(DAT_0918cbd0 + 0xb8);
                    UnityEngine_Transform__set_localScale
                              (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                               *(undefined4 *)(lVar6 + 0x14),lVar2,0);
                    if (*(char *)(param_1 + 0x180) == '\0') {
LAB_04363d78:
                      CakeOrder_Shop_UICookOrderShop__SetSectionHeadersAlpha(0x3f800000,param_1);
                      *(undefined1 *)(param_1 + 0x110) = 1;
                      CakeOrder_Shop_UICookOrderShop__OpenOnFocusedSection(param_1);
                      return;
                    }
                    uVar3 = CakeOrder_Shop_UICookOrderShop__get_IsRemoveAdsOwned();
                    if ((uVar3 & 1) == 0) {
                      if (*(long *)(param_1 + 0x140) == 0) goto LAB_04363db4;
                      CakeOrder_BaseUI_UIElementAbstract__ShowImmediate
                                (*(long *)(param_1 + 0x140),0,0);
                      uVar8 = *(undefined8 *)(param_1 + 0x148);
                      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar3 = UnityEngine_Object__op_Implicit(uVar8,0);
                      if ((uVar3 & 1) != 0) {
                        if (*(long *)(param_1 + 0x148) == 0) goto LAB_04363db4;
                        CakeOrder_BaseUI_UIElementAbstract__ShowImmediate
                                  (*(long *)(param_1 + 0x148),0,0);
                      }
                    }
                    if (*(long *)(param_1 + 0x168) != 0) {
                      FUN_057e185c(&local_d0,*(long *)(param_1 + 0x168),DAT_091b16d0);
                      local_90 = local_c0;
                      puStack_98 = puStack_c8;
                      local_a0 = local_d0;
                      local_d0 = 0;
                      puStack_c8 = &local_a0;
                      while (uVar3 = FUN_071bd28c(&local_a0,DAT_091a4c18), lVar2 = local_90,
                            (uVar3 & 1) != 0) {
                        uVar3 = CakeOrder_Shop_UICookOrderShop__IsSoldOut(local_90);
                        if ((uVar3 & 1) == 0) {
                          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          CakeOrder_BaseUI_UIElementAbstract__ShowImmediate(lVar2,0,0);
                        }
                      }
                      FUN_071bd288(&local_a0,DAT_091a4c10);
                      if (*(long *)(param_1 + 0x170) != 0) {
                        FUN_057e185c(&local_b8,*(long *)(param_1 + 0x170),DAT_091b16b8);
                        local_d0 = 0;
                        puStack_c8 = &local_b8;
                        while (uVar3 = FUN_071bd28c(&local_b8,DAT_091a4c00), (uVar3 & 1) != 0) {
                          if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          CakeOrder_BaseUI_UIElementAbstract__ShowImmediate(local_a8,0,0);
                        }
                        FUN_071bd288(&local_b8,DAT_091a4bf8);
                        CakeOrder_Shop_UICookOrderShop__UpdateRemoveAdsCardsVisibility(param_1);
                        goto LAB_04363d78;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_04363db4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


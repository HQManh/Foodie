// rea decompile_all
// name: CakeOrder.Shop.UICookOrderShop$$HideElement
// address: 0x4364820
// body: available
// range: 0x4364820-0x4364e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4364e48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4364e4c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4364e50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4364e54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UICookOrderShop__HideElement(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09517866 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091a4c10);
    FUN_03f5c2a4(&DAT_091a49d0);
    FUN_03f5c2a4(&DAT_091a4bf8);
    FUN_03f5c2a4(&DAT_091a49d8);
    FUN_03f5c2a4(&DAT_091a4c00);
    FUN_03f5c2a4(&DAT_091a4c18);
    FUN_03f5c2a4(&DAT_091a4c08);
    FUN_03f5c2a4(&DAT_091a4c20);
    FUN_03f5c2a4(&DAT_091a49e0);
    FUN_03f5c2a4(&DAT_091b1128);
    FUN_03f5c2a4(&DAT_091b1130);
    FUN_03f5c2a4(&DAT_091b1138);
    FUN_03f5c2a4(&DAT_091b16d0);
    FUN_03f5c2a4(&DAT_091b16b8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbcc0);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbe90);
    FUN_03f5c2a4(&DAT_091dc030);
    FUN_03f5c2a4(&DAT_091f1280);
    FUN_03f5c2a4(&DAT_09195508);
    DAT_09517866 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_09195508);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x10),param_1);
    *(undefined8 *)(lVar3 + 0x18) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x18),param_2);
    if (*(char *)(param_1 + 0x198) == '\0') {
      CakeOrder_TimeControlCakeOrder__ResumeTime(param_1,0);
    }
    if (*(long *)(param_1 + 400) != 0) {
      FUN_057e185c(&local_d8,*(long *)(param_1 + 400),DAT_091b1138);
      local_70 = local_c8;
      puStack_78 = puStack_d0;
      local_80 = local_d8;
      local_d8 = 0;
      puStack_d0 = &local_80;
      while (uVar4 = FUN_071bd28c(&local_80,DAT_091a49d8), (uVar4 & 1) != 0) {
        DG_Tweening_TweenExtensions__Kill(local_70,0,0);
      }
      FUN_071bd288(&local_80,DAT_091a49d0);
      lVar8 = *(long *)(param_1 + 400);
      if (lVar8 != 0) {
        iVar1 = *(int *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
        }
        CakeOrder_Shop_UICookOrderShop__SetColumnLayoutFrozen(param_1,1);
        if (*(char *)(param_1 + 0x180) != '\0') {
          if (*(long *)(param_1 + 0x140) == 0) goto LAB_04364e48;
          CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0x140),0,0);
          uVar12 = *(undefined8 *)(param_1 + 0x148);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar12,0);
          if ((uVar4 & 1) != 0) {
            if (*(long *)(param_1 + 0x148) == 0) goto LAB_04364e48;
            CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0x148),0,0);
          }
          if (*(long *)(param_1 + 0x168) == 0) goto LAB_04364e48;
          FUN_057e185c(&local_d8,*(long *)(param_1 + 0x168),DAT_091b16d0);
          local_90 = local_c8;
          puStack_98 = puStack_d0;
          local_a0 = local_d8;
          local_d8 = 0;
          puStack_d0 = &local_a0;
          while (uVar4 = FUN_071bd28c(&local_a0,DAT_091a4c18), (uVar4 & 1) != 0) {
            if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            CakeOrder_BaseUI_UIElementAbstract__Hide(0,local_90,0,0);
          }
          FUN_071bd288(&local_a0,DAT_091a4c10);
          if (*(long *)(param_1 + 0x170) == 0) goto LAB_04364e48;
          FUN_057e185c(&local_d8,*(long *)(param_1 + 0x170),DAT_091b16b8);
          local_b0 = local_c8;
          puStack_b8 = puStack_d0;
          local_c0 = local_d8;
          local_d8 = 0;
          puStack_d0 = &local_c0;
          while (uVar4 = FUN_071bd28c(&local_c0,DAT_091a4c00), (uVar4 & 1) != 0) {
            if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            CakeOrder_BaseUI_UIElementAbstract__Hide(0,local_b0,0,0);
          }
          FUN_071bd288(&local_c0,DAT_091a4bf8);
        }
        if (*(int *)(DAT_09183190 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar12 = DG_Tweening_DOTween__Sequence(0);
        if (*(long *)(param_1 + 0xf0) != 0) {
          uVar5 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xf0),0);
          if (*(long *)(param_1 + 0x108) != 0) {
            uVar5 = DG_Tweening_ShortcutExtensions__DOScale
                              (0,*(undefined4 *)(*(long *)(param_1 + 0x108) + 0x14),uVar5,0);
            uVar12 = DG_Tweening_TweenSettingsExtensions__Append(uVar12,uVar5,0);
            lVar8 = *(long *)(param_1 + 0xe8);
            if (lVar8 != 0) {
              if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
                uVar4 = 0;
                uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                do {
                  if (uVar9 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  if (*(long *)(param_1 + 0x108) == 0) goto LAB_04364e48;
                  uVar5 = DG_Tweening_ShortcutExtensions__DOScale
                                    (0,*(undefined4 *)(*(long *)(param_1 + 0x108) + 0x2c),
                                     *(undefined8 *)(lVar8 + 0x20 + uVar4 * 8),0);
                  DG_Tweening_TweenSettingsExtensions__Join(uVar12,uVar5,0);
                  uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
                  uVar4 = uVar4 + 1;
                } while ((long)uVar4 < (long)(int)*(uint *)(lVar8 + 0x18));
              }
              lVar8 = *(long *)(param_1 + 0x108);
              if (lVar8 != 0) {
                uVar5 = DG_Tweening_DOTweenModuleUI__DOAnchorPosY
                                  (*(undefined4 *)(lVar8 + 0x1c),*(undefined4 *)(lVar8 + 0x14),
                                   *(undefined8 *)(param_1 + 0xd8),0,0);
                uVar5 = FUN_04d95e8c(uVar5,0x1a,DAT_091dbe90);
                uVar5 = DG_Tweening_TweenSettingsExtensions__Append(uVar12,uVar5,0);
                if (*(long *)(param_1 + 0x108) != 0) {
                  uVar6 = DG_Tweening_DOTweenModuleUI__DOFade
                                    (0,*(undefined4 *)(*(long *)(param_1 + 0x108) + 0x54),
                                     *(undefined8 *)(param_1 + 0xd0),0);
                  uVar5 = DG_Tweening_TweenSettingsExtensions__Join(uVar5,uVar6,0);
                  uVar6 = thunk_FUN_03f9944c(DAT_0918c148);
                  DG_Tweening_TweenCallback___ctor(uVar6,lVar3,DAT_091f1280,0);
                  uVar5 = FUN_04d956bc(uVar5,uVar6,DAT_091dbd18);
                  uVar5 = FUN_04d9656c(uVar5,1,DAT_091dc030);
                  FUN_04d8dd74(uVar5,DAT_091dbcc0);
                  lVar8 = DAT_091b1128;
                  lVar7 = *(long *)(param_1 + 400);
                  if (lVar7 != 0) {
                    lVar10 = *(long *)(lVar7 + 0x10);
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    if (lVar10 != 0) {
                      uVar2 = *(uint *)(lVar7 + 0x18);
                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                        puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
                        *puVar11 = uVar12;
                        thunk_FUN_03f5d7b8(puVar11,uVar12);
                      }
                      else {
                        FUN_057e0c68(lVar7,uVar12,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                      }
                      CakeOrder_Shop_UICookOrderShop_<>c__DisplayClass62_0__<HideElement>g__ShrinkOutBanner_0
                                (lVar3,*(undefined8 *)(param_1 + 0x118));
                      CakeOrder_Shop_UICookOrderShop_<>c__DisplayClass62_0__<HideElement>g__ShrinkOutBanner_0
                                (lVar3,*(undefined8 *)(param_1 + 0x120));
                      CakeOrder_Shop_UICookOrderShop_<>c__DisplayClass62_0__<HideElement>g__ShrinkOutBanner_0
                                (lVar3,*(undefined8 *)(param_1 + 0x128));
                      CakeOrder_Shop_UICookOrderShop_<>c__DisplayClass62_0__<HideElement>g__ShrinkOutBanner_0
                                (lVar3,*(undefined8 *)(param_1 + 0x130));
                      return;
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
LAB_04364e48:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


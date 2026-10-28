// rea decompile_all
// name: CakeOrder.Shop.UICookOrderShop$$GetVisibleCardsTopToBottom
// address: 0x43659b8
// body: available
// range: 0x43659b8-0x4365e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4365e88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4365e8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4365e90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4365e94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4365e98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_Shop_UICookOrderShop__GetVisibleCardsTopToBottom(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_0951786e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175b88);
    FUN_03f5c2a4(&DAT_091a4c10);
    FUN_03f5c2a4(&DAT_091a4bf8);
    FUN_03f5c2a4(&DAT_091a4c00);
    FUN_03f5c2a4(&DAT_091a4c18);
    FUN_03f5c2a4(&DAT_091a4c08);
    FUN_03f5c2a4(&DAT_091a4c20);
    FUN_03f5c2a4(&DAT_091b1370);
    FUN_03f5c2a4(&DAT_091b16d0);
    FUN_03f5c2a4(&DAT_091b16b8);
    FUN_03f5c2a4(&DAT_091b1380);
    FUN_03f5c2a4(&DAT_091b1368);
    FUN_03f5c2a4(&DAT_0917cf28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f1268);
    FUN_03f5c2a4(&DAT_091954f8);
    DAT_0951786e = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0917cf28);
  FUN_057e0400(lVar2,DAT_091b1368);
  uVar3 = CakeOrder_Shop_UICookOrderShop__get_IsRemoveAdsOwned();
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_1 + 0x140) == 0) goto LAB_04365e98;
    uVar3 = CakeOrder_Shop_UICookOrderShop__IsHiddenByOfferRules
                      (param_1,*(undefined8 *)(*(long *)(param_1 + 0x140) + 0x48));
    lVar9 = DAT_091b1370;
    if ((uVar3 & 1) == 0) {
      if (lVar2 == 0) goto LAB_04365e98;
      lVar6 = *(long *)(lVar2 + 0x10);
      uVar5 = *(undefined8 *)(param_1 + 0x140);
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_04365e98;
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar2,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 0x148);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x148) == 0) goto LAB_04365e98;
      uVar3 = CakeOrder_Shop_UICookOrderShop__IsHiddenByOfferRules
                        (param_1,*(undefined8 *)(*(long *)(param_1 + 0x148) + 0x48));
      lVar9 = DAT_091b1370;
      if ((uVar3 & 1) == 0) {
        if (lVar2 == 0) goto LAB_04365e98;
        lVar6 = *(long *)(lVar2 + 0x10);
        uVar5 = *(undefined8 *)(param_1 + 0x148);
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_04365e98;
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar2,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
    }
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    FUN_057e185c(&local_b8,*(long *)(param_1 + 0x168),DAT_091b16d0);
    local_70 = local_a8;
    puStack_78 = puStack_b0;
    local_80 = local_b8;
    local_b8 = 0;
    puStack_b0 = &local_80;
LAB_04365c70:
    uVar3 = FUN_071bd28c(&local_80,DAT_091a4c18);
    lVar9 = local_70;
    if ((uVar3 & 1) != 0) {
      uVar3 = CakeOrder_Shop_UICookOrderShop__IsSoldOut(local_70);
      if ((uVar3 & 1) == 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar3 = CakeOrder_Shop_UICookOrderShop__IsHiddenByOfferRules
                          (param_1,*(undefined8 *)(lVar9 + 0x48));
        lVar6 = DAT_091b1370;
        if ((uVar3 & 1) == 0) {
          if (lVar2 != 0) {
            lVar7 = *(long *)(lVar2 + 0x10);
            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar2 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar2 + 0x18) = uVar1 + 1;
                plVar4 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                *plVar4 = lVar9;
                thunk_FUN_03f5d7b8(plVar4,lVar9);
              }
              else {
                FUN_057e0c68(lVar2,lVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_04365c70;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      goto LAB_04365c70;
    }
    FUN_071bd288(&local_80,DAT_091a4c10);
    if (*(long *)(param_1 + 0x170) != 0) {
      FUN_057e185c(&local_b8,*(long *)(param_1 + 0x170),DAT_091b16b8);
      local_90 = local_a8;
      puStack_98 = puStack_b0;
      local_a0 = local_b8;
      local_b8 = 0;
      puStack_b0 = &local_a0;
LAB_04365d40:
      uVar3 = FUN_071bd28c(&local_a0,DAT_091a4c00);
      lVar9 = local_90;
      if ((uVar3 & 1) != 0) {
        if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar3 = CakeOrder_Shop_UICookOrderShop__IsHiddenByOfferRules
                          (param_1,*(undefined8 *)(local_90 + 0x88));
        lVar6 = DAT_091b1370;
        if ((uVar3 & 1) == 0) {
          if (lVar2 != 0) {
            lVar7 = *(long *)(lVar2 + 0x10);
            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar2 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar2 + 0x18) = uVar1 + 1;
                plVar4 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                *plVar4 = lVar9;
                thunk_FUN_03f5d7b8(plVar4,lVar9);
              }
              else {
                FUN_057e0c68(lVar2,lVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_04365d40;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_04365d40;
      }
      FUN_071bd288(&local_a0,DAT_091a4bf8);
      if (*(int *)(DAT_091954f8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar8 = *(undefined8 **)(DAT_091954f8 + 0xb8);
      lVar9 = puVar8[1];
      if (lVar9 == 0) {
        if (*(int *)(DAT_091954f8 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar8 = *(undefined8 **)(DAT_091954f8 + 0xb8);
        }
        uVar5 = *puVar8;
        lVar9 = thunk_FUN_03f9944c(DAT_09175b88);
        FUN_06d4541c(lVar9,uVar5,DAT_091f1268,0);
        plVar4 = (long *)(*(long *)(DAT_091954f8 + 0xb8) + 8);
        *plVar4 = lVar9;
        thunk_FUN_03f5d7b8(plVar4,lVar9);
      }
      if (lVar2 != 0) {
        FUN_057e280c(lVar2,lVar9,DAT_091b1380);
        return lVar2;
      }
    }
  }
LAB_04365e98:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


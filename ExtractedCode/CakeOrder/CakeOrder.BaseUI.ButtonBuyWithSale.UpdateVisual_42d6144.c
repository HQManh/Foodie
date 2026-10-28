// rea decompile_all
// name: CakeOrder.BaseUI.ButtonBuyWithSale$$UpdateVisual
// address: 0x42d6144
// body: available
// range: 0x42d6144-0x42d649b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d6494 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d6498 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_ButtonBuyWithSale__UpdateVisual(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_095173cc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4458);
    FUN_03f5c2a4(&DAT_091c4460);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_091b49a8);
    FUN_03f5c2a4(&DAT_09191620);
    DAT_095173cc = 1;
  }
  lVar3 = *(long *)(DAT_091b49d0 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    bVar2 = CakeOrder_Shop_InAppShopDataAccess__IsCanPurchasePack
                      (**(long **)(lVar3 + 0xb8),*(undefined8 *)(param_1 + 0x88),0);
    lVar3 = *(long *)(param_1 + 0x48);
    *(byte *)(param_1 + 0x94) = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      if (lVar3 != 0) {
        UnityEngine_UI_Selectable__set_interactable(lVar3,0,0);
        plVar7 = *(long **)(param_1 + 0x50);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x558))
                    (plVar7,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(*plVar7 + 0x560));
          lVar3 = *(long *)(param_1 + 0x68);
          if (lVar3 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (0 < (int)uVar1) {
              lVar8 = 0;
              do {
                if (uVar1 <= (uint)lVar8) goto LAB_042d6498;
                lVar6 = *(long *)(lVar3 + 0x20 + lVar8 * 8);
                if (lVar6 == 0) goto LAB_042d6494;
                UnityEngine_GameObject__SetActive(lVar6,0,0);
                uVar1 = *(uint *)(lVar3 + 0x18);
                lVar8 = lVar8 + 1;
              } while ((int)lVar8 < (int)uVar1);
            }
            return;
          }
        }
      }
    }
    else if (lVar3 != 0) {
      UnityEngine_UI_Selectable__set_interactable(lVar3,1,0);
      lVar3 = *(long *)(DAT_091b49a8 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      uVar9 = *(undefined8 *)(param_1 + 0x88);
      lVar3 = **(long **)(lVar3 + 0xb8);
      uVar4 = thunk_FUN_03f9944c(DAT_09191620);
      IapAdsSystem_InAppManager_SetTextPrice___ctor(uVar4,param_1,DAT_091c4458,0);
      if (lVar3 != 0) {
        IapAdsSystem_InAppManager__LoadPrice(lVar3,uVar9,uVar4,0);
        uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x80),0);
        if (((uVar5 & 1) == 0) || (0 < *(int *)(param_1 + 0x90))) {
          uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x80),0);
          if ((uVar5 & 1) == 0) {
            lVar3 = *(long *)(DAT_091b49a8 + 0x20);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03f95a6c();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03f95a6c();
            }
            uVar9 = *(undefined8 *)(param_1 + 0x80);
            lVar3 = **(long **)(lVar3 + 0xb8);
            uVar4 = thunk_FUN_03f9944c(DAT_09191620);
            IapAdsSystem_InAppManager_SetTextPrice___ctor(uVar4,param_1,DAT_091c4460,0);
            if (lVar3 == 0) goto LAB_042d6494;
            IapAdsSystem_InAppManager__LoadPrice(lVar3,uVar9,uVar4,0);
          }
          else {
            plVar7 = *(long **)(param_1 + 0x58);
            uVar4 = CakeOrder_BaseUI_ButtonBuyWithSale__GetFakeOriginPriceText(param_1);
            if (plVar7 == (long *)0x0) goto LAB_042d6494;
            (**(code **)(*plVar7 + 0x558))(plVar7,uVar4,*(undefined8 *)(*plVar7 + 0x560));
          }
          lVar3 = *(long *)(param_1 + 0x68);
          if (lVar3 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if ((int)uVar1 < 1) {
              return;
            }
            lVar8 = 0;
            while ((uint)lVar8 < uVar1) {
              lVar6 = *(long *)(lVar3 + 0x20 + lVar8 * 8);
              if (lVar6 == 0) goto LAB_042d6494;
              UnityEngine_GameObject__SetActive(lVar6,1,0);
              uVar1 = *(uint *)(lVar3 + 0x18);
              lVar8 = lVar8 + 1;
              if ((int)uVar1 <= (int)lVar8) {
                return;
              }
            }
            goto LAB_042d6498;
          }
        }
        else {
          lVar3 = *(long *)(param_1 + 0x68);
          if (lVar3 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if ((int)uVar1 < 1) {
              return;
            }
            lVar8 = 0;
            while ((uint)lVar8 < uVar1) {
              lVar6 = *(long *)(lVar3 + 0x20 + lVar8 * 8);
              if (lVar6 == 0) goto LAB_042d6494;
              UnityEngine_GameObject__SetActive(lVar6,0,0);
              uVar1 = *(uint *)(lVar3 + 0x18);
              lVar8 = lVar8 + 1;
              if ((int)uVar1 <= (int)lVar8) {
                return;
              }
            }
LAB_042d6498:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
        }
      }
    }
  }
LAB_042d6494:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


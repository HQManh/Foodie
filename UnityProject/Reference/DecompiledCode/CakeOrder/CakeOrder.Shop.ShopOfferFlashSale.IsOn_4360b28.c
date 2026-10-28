// rea decompile_all
// name: CakeOrder.Shop.ShopOfferFlashSale$$IsOn
// address: 0x4360b28
// body: available
// range: 0x4360b28-0x4360def inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4360cc0 to 0x4360eb8 CakeOrder.Shop.ShopOfferFlashSale$$TryOpenWindow (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4360dec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_Shop_ShopOfferFlashSale__IsOn
          (long param_1,undefined8 param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_0951784b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091b4900);
    FUN_03f5c2a4(&DAT_091b4908);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_09222a68);
    DAT_0951784b = 1;
  }
  uVar2 = System_String__IsNullOrEmpty(param_2,0);
  if ((param_3 < 1) || ((uVar2 & 1) != 0)) {
    return 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = CakeOrder_Shop_ShopPlayerFacts__GetPurchaseCount(0,param_2);
    if (0 < iVar1) {
      return 0;
    }
    uVar2 = FUN_05a8eda4(DAT_091b4908);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    lVar3 = *(long *)(DAT_091b4900 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    uVar4 = System_String__Concat(DAT_09222a68,param_2,0);
    if (lVar3 != 0) {
      uVar5 = CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__GetDateTime(lVar3,uVar4,0,0);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183548);
      }
      uVar2 = System_DateTime__op_Equality(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        if ((param_5 & 1) == 0) {
          return 0;
        }
LAB_04360c9c:
        uVar4 = CakeOrder_Shop_ShopOfferFlashSale__TryOpenWindow(param_1,lVar3,uVar4);
        return uVar4;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_DateTime__op_Subtraction(uVar7,uVar5,0);
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918bd60);
        }
        uVar2 = System_TimeSpan__op_LessThan(uVar5,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System_TimeSpan__FromHours((double)param_3,0);
          uVar2 = System_TimeSpan__op_LessThan(uVar5,uVar7,0);
          if ((uVar2 & 1) == 0) {
            if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = System_TimeSpan__FromHours((double)param_3,0);
            uVar6 = System_TimeSpan__FromDays
                              ((double)(int)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)),0);
            uVar7 = System_TimeSpan__op_Addition(uVar7,uVar6,0);
            uVar2 = System_TimeSpan__op_LessThan(uVar5,uVar7,0);
            if ((uVar2 & 1) != 0) {
              return 0;
            }
            if ((param_5 & 1) == 0) {
              return 0;
            }
            goto LAB_04360c9c;
          }
        }
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


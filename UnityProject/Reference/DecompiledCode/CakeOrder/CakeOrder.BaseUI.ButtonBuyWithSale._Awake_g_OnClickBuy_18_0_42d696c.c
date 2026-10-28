// rea decompile_all
// name: CakeOrder.BaseUI.ButtonBuyWithSale$$<Awake>g__OnClickBuy|18_0
// address: 0x42d696c
// body: available
// range: 0x42d696c-0x42d6d27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d6d20 to 0x4257cd0 CakeOrder.AudioManagerCakeOrder$$Play (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42d6d24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_ButtonBuyWithSale__<Awake>g__OnClickBuy_18_0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  if ((DAT_095173cf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c56d0);
    FUN_03f5c2a4(&DAT_091c56e8);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_091b49a8);
    FUN_03f5c2a4(&DAT_091b4928);
    FUN_03f5c2a4(&DAT_091b4930);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189db0);
    FUN_03f5c2a4(&DAT_091f8268);
    FUN_03f5c2a4(&DAT_091f7108);
    FUN_03f5c2a4(&DAT_09222a60);
    FUN_03f5c2a4(&DAT_09211448);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_095173cf = 1;
  }
  fVar7 = (float)UnityEngine_Time__get_unscaledTime(0);
  if (fVar7 < *(float *)(param_1 + 0x7c) + 1.0) {
    return;
  }
  uVar8 = UnityEngine_Time__get_unscaledTime(0);
  uVar3 = DAT_091b4930;
  *(undefined4 *)(param_1 + 0x7c) = uVar8;
  uVar1 = FUN_05a8eda4(uVar3);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(DAT_091b49d0 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_042d6d24;
    uVar3 = CakeOrder_Shop_InAppShopDataAccess__GetPackTitle
                      (**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_1 + 0x88),0,0);
    lVar2 = FUN_04a6a6d8(param_1,DAT_091c56d0);
    lVar4 = FUN_04a6a6d8(param_1,DAT_091c56e8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar1 = UnityEngine_Object__op_Inequality(lVar2,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Inequality(lVar4,0,0);
      uVar6 = DAT_09222a60;
      if ((uVar1 & 1) != 0) {
        if (lVar4 == 0) goto LAB_042d6d24;
        uVar6 = CakeOrder_Shop_UIOfferPackInGame__get_TrackingPlacement(lVar4,0);
      }
    }
    else {
      if (((lVar2 == 0) || (plVar5 = (long *)System_Object__GetType(lVar2,0), plVar5 == (long *)0x0)
          ) || (lVar2 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0)),
               lVar2 == 0)) goto LAB_042d6d24;
      uVar6 = System_String__Replace(lVar2,DAT_09211448,DAT_091f5700,0);
      if (*(int *)(DAT_09189db0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189db0);
      }
      lVar2 = System_Text_RegularExpressions_Regex__Replace(uVar6,DAT_091f8268,DAT_091f7108,0);
      if (lVar2 == 0) goto LAB_042d6d24;
      uVar6 = System_String__ToLowerInvariant(lVar2,0);
    }
    lVar2 = *(long *)(DAT_091b4928 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_042d6d24;
    IapAdsSystem_DataTrackingManager__TrackIapClick
              (**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_1 + 0x88),uVar3,uVar6,0);
  }
  lVar2 = *(long *)(DAT_091b49a8 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    IapAdsSystem_InAppManager__PurchaseProduct
              (**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_1 + 0x88),0,0);
    lVar2 = *(long *)(DAT_091b48d0 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) != 0) {
      CakeOrder_AudioManagerCakeOrder__Play(**(long **)(lVar2 + 0xb8),0,0);
      return;
    }
  }
LAB_042d6d24:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


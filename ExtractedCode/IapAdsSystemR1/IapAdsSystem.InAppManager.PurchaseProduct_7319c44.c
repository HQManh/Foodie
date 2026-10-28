// rea decompile_all
// name: IapAdsSystem.InAppManager$$PurchaseProduct
// address: 0x7319c44
// body: available
// range: 0x7319c44-0x731a027 inclusive
// range: 0x731a1f0-0x731a2e3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7319dbc to 0x731a540 IapAdsSystem.InAppManager$$ShowFakePurchasePopup (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x731a024 to 0x89db288 FUN_089db288 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x731a2dc to 0x80eb22c UnityEngine.Purchasing.StoreController$$PurchaseProduct (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x731a2e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void IapAdsSystem_InAppManager__PurchaseProduct(long param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if ((DAT_09520560 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091748e0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a0398);
    FUN_03f5c2a4(&DAT_091a03a0);
    FUN_03f5c2a4(&DAT_091a03b8);
    FUN_03f5c2a4(&DAT_09189800);
    FUN_03f5c2a4(&DAT_09191618);
    FUN_03f5c2a4(&DAT_091eb490);
    FUN_03f5c2a4(&DAT_091915f0);
    FUN_03f5c2a4(&DAT_0921ffc0);
    FUN_03f5c2a4(&DAT_091fd030);
    FUN_03f5c2a4(&DAT_091f5f30);
    FUN_03f5c2a4(&DAT_091f5f20);
    FUN_03f5c2a4(&DAT_091f6ac0);
    FUN_03f5c2a4(&DAT_091f5f28);
    FUN_03f5c2a4(&DAT_0921ffb8);
    FUN_03f5c2a4(&DAT_0921d840);
    FUN_03f5c2a4(&DAT_0921b508);
    FUN_03f5c2a4(&DAT_09217ef8);
    FUN_03f5c2a4(&DAT_0920b200);
    DAT_09520560 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091915f0);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar8 = (long *)(lVar1 + 0x10);
    *plVar8 = param_3;
    thunk_FUN_03f5d7b8(plVar8,param_3);
    uVar2 = IapAdsSystem_IapAdsGlobalConfig__get_IsFakeIAPNonConsumable();
    if ((uVar2 & 1) != 0) {
      IapAdsSystem_InAppManager__ShowFakePurchasePopup(param_1,param_2,*plVar8);
      return;
    }
    if (*(char *)(param_1 + 0x40) == '\0') {
      uVar3 = System_String__Concat(DAT_091fd030,param_2,DAT_091f5f30,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar3,0);
      lVar1 = *plVar8;
      if (lVar1 != 0) {
        lVar7 = thunk_FUN_03f9944c(DAT_09189800);
        System_Object___ctor(lVar7,0);
        *(undefined8 *)(lVar7 + 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x10) = 1;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x18),0);
        (**(code **)(lVar1 + 0x18))
                  (*(undefined8 *)(lVar1 + 0x40),lVar7,*(undefined8 *)(lVar1 + 0x28));
      }
      lVar1 = *(long *)(param_1 + 0x80);
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x18))
                  (*(undefined8 *)(lVar1 + 0x40),param_2,*(undefined8 *)(lVar1 + 0x28));
      }
      FUN_089db288(&DAT_0921b508);
      return;
    }
    if (param_2 != (long *)0x0) {
      uVar3 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      lVar7 = *(long *)(param_1 + 0x60);
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))
                  (*(undefined8 *)(lVar7 + 0x40),param_2,*(undefined8 *)(lVar7 + 0x28));
      }
      IapAdsSystem_InAppManager__TrackIap(param_2,DAT_09217ef8,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        lVar7 = UnityEngine_Purchasing_StoreController__GetProductById
                          (*(long *)(param_1 + 0x30),uVar3,0);
        if (lVar7 == 0) {
          uVar3 = System_String__Concat(DAT_091fd030,param_2,DAT_091f5f20,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogError(uVar3,0);
          lVar1 = *plVar8;
          if (lVar1 != 0) {
            lVar7 = thunk_FUN_03f9944c(DAT_09189800);
            System_Object___ctor(lVar7,0);
            *(undefined8 *)(lVar7 + 0x18) = 0;
            *(undefined8 *)(lVar7 + 0x10) = 2;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x18),0);
            (**(code **)(lVar1 + 0x18))
                      (*(undefined8 *)(lVar1 + 0x40),lVar7,*(undefined8 *)(lVar1 + 0x28));
          }
          lVar1 = *(long *)(param_1 + 0x80);
          if (lVar1 != 0) {
            (**(code **)(lVar1 + 0x18))
                      (*(undefined8 *)(lVar1 + 0x40),param_2,*(undefined8 *)(lVar1 + 0x28));
          }
          FUN_0731a1d0(&DAT_0921b508);
          return;
        }
        uVar2 = UnityEngine_Purchasing_Product__get_availableToPurchase(lVar7,0);
        if ((uVar2 & 1) == 0) {
          uVar3 = System_String__Concat(DAT_091fd030,param_2,DAT_091f5f28,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogError(uVar3,0);
          lVar1 = *plVar8;
          if (lVar1 != 0) {
            lVar7 = thunk_FUN_03f9944c(DAT_09189800);
            System_Object___ctor(lVar7,0);
            *(undefined8 *)(lVar7 + 0x18) = 0;
            *(undefined8 *)(lVar7 + 0x10) = 3;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x18),0);
            (**(code **)(lVar1 + 0x18))
                      (*(undefined8 *)(lVar1 + 0x40),lVar7,*(undefined8 *)(lVar1 + 0x28));
          }
          lVar1 = *(long *)(param_1 + 0x80);
          if (lVar1 != 0) {
            (**(code **)(lVar1 + 0x18))
                      (*(undefined8 *)(lVar1 + 0x40),param_2,*(undefined8 *)(lVar1 + 0x28));
          }
          IapAdsSystem_InAppManager__TrackIap(param_2,DAT_0921b508,_DAT_0921ffb8);
          return;
        }
        if (*(long *)(param_1 + 0x50) != 0) {
          uVar2 = FUN_06fd8648(*(long *)(param_1 + 0x50),uVar3,DAT_091a03a0);
          if ((uVar2 & 1) == 0) {
            lVar5 = *(long *)(param_1 + 0x50);
            lVar1 = thunk_FUN_03f9944c(DAT_09191618);
            System_Object___ctor(lVar1,0);
            if (lVar1 == 0) goto LAB_0731a2e0;
            *(long *)(lVar1 + 0x10) = (long)param_2;
            thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_2);
            *(long *)(lVar1 + 0x18) = *plVar8;
            thunk_FUN_03f5d7b8();
            if (lVar5 == 0) goto LAB_0731a2e0;
            FUN_06fd8454(lVar5,uVar3,lVar1,DAT_091a0398);
          }
          else {
            uVar4 = System_String__Concat(DAT_091fd030,param_2,DAT_091f6ac0,0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091835d0);
            }
            UnityEngine_Debug__LogWarning(uVar4,0);
            if (*(long *)(param_1 + 0x50) == 0) goto LAB_0731a2e0;
            lVar5 = FUN_06fd83d4(*(long *)(param_1 + 0x50),uVar3,DAT_091a03b8);
            if (lVar5 == 0) goto LAB_0731a2e0;
            lVar6 = *(long *)(param_1 + 0x50);
            if (*(long *)(lVar5 + 0x18) == 0) {
              if ((lVar6 == 0) || (lVar1 = FUN_06fd83d4(lVar6,uVar3,DAT_091a03b8), lVar1 == 0))
              goto LAB_0731a2e0;
              lVar5 = *plVar8;
              plVar8 = (long *)(lVar1 + 0x18);
              *plVar8 = lVar5;
            }
            else {
              if ((lVar6 == 0) || (lVar5 = FUN_06fd83d4(lVar6,uVar3,DAT_091a03b8), lVar5 == 0))
              goto LAB_0731a2e0;
              *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar5 + 0x18);
              thunk_FUN_03f5d7b8();
              if (*(long *)(param_1 + 0x50) == 0) goto LAB_0731a2e0;
              lVar6 = FUN_06fd83d4(*(long *)(param_1 + 0x50),uVar3,DAT_091a03b8);
              lVar5 = thunk_FUN_03f9944c(DAT_091748e0);
              FUN_070a8c30(lVar5,lVar1,DAT_091eb490,0);
              if (lVar6 == 0) goto LAB_0731a2e0;
              plVar8 = (long *)(lVar6 + 0x18);
              *plVar8 = lVar5;
            }
            thunk_FUN_03f5d7b8(plVar8,lVar5);
          }
          uVar3 = System_String__Concat(DAT_0920b200,param_2,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__Log(uVar3,0);
          if (*(long *)(param_1 + 0x30) != 0) {
            UnityEngine_Purchasing_StoreController__PurchaseProduct
                      (*(long *)(param_1 + 0x30),lVar7,0);
            return;
          }
        }
      }
    }
  }
LAB_0731a2e0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


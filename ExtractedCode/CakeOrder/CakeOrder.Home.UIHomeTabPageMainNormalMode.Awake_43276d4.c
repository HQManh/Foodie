// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMainNormalMode$$Awake
// address: 0x43276d4
// body: available
// range: 0x43276d4-0x4327bb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4327bac to 0x4278150 CakeOrder.SaveProfile.CakeItemCurrencyDataAccess$$add_onItemChanged (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4327bb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMainNormalMode__Awake(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((DAT_09517684 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a18);
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09174e30);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918ea68);
    FUN_03f5c2a4(&DAT_091dcb60);
    FUN_03f5c2a4(&DAT_091dcb68);
    FUN_03f5c2a4(&DAT_091dcb70);
    FUN_03f5c2a4(&DAT_091dcb78);
    FUN_03f5c2a4(&DAT_091dcb88);
    FUN_03f5c2a4(&DAT_091dcb80);
    FUN_03f5c2a4(&DAT_091dcb90);
    FUN_03f5c2a4(&DAT_091dcb98);
    FUN_03f5c2a4(&DAT_091dcba0);
    FUN_03f5c2a4(&DAT_091dcbb8);
    DAT_09517684 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x68);
  uVar1 = thunk_FUN_03f9944c(DAT_09174a18);
  FUN_070a8c30(uVar1,param_1,DAT_091dcb70,0);
  if (lVar3 != 0) {
    CakeOrder_InGame_UIButtonHUD__add_onClicked(lVar3,uVar1,0);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x88);
      uVar1 = thunk_FUN_03f9944c(DAT_09174a18);
      FUN_070a8c30(uVar1,param_1,DAT_091dcb68,0);
      if (lVar3 == 0) goto LAB_04327bb0;
      CakeOrder_InGame_UIButtonHUD__add_onClicked(lVar3,uVar1,0);
    }
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0xa0);
      uVar1 = thunk_FUN_03f9944c(DAT_09174a18);
      FUN_070a8c30(uVar1,param_1,DAT_091dcb78,0);
      if (lVar3 == 0) goto LAB_04327bb0;
      CakeOrder_InGame_UIButtonHUD__add_onClicked(lVar3,uVar1,0);
    }
    lVar3 = *(long *)(param_1 + 0xe8);
    uVar1 = thunk_FUN_03f9944c(DAT_09174a18);
    FUN_070a8c30(uVar1,param_1,DAT_091dcb80,0);
    if (lVar3 != 0) {
      CakeOrder_InGame_UIButtonHUD__add_onClicked(lVar3,uVar1,0);
      uVar1 = *(undefined8 *)(param_1 + 0x130);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x130);
        uVar1 = thunk_FUN_03f9944c(DAT_09174a18);
        FUN_070a8c30(uVar1,param_1,DAT_091dcb88,0);
        if (lVar3 == 0) goto LAB_04327bb0;
        CakeOrder_InGame_UIButtonHUD__add_onClicked(lVar3,uVar1,0);
      }
      lVar3 = *(long *)(param_1 + 0x140);
      uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar1,param_1,DAT_091dcbb8,0);
      if (lVar3 != 0) {
        Utilities_SwipeDetectUI__add_onClicked(lVar3,uVar1,0);
        lVar3 = *(long *)(DAT_091b4a58 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        lVar3 = **(long **)(lVar3 + 0xb8);
        uVar1 = thunk_FUN_03f9944c(DAT_09174e30);
        FUN_071cd244(uVar1,param_1,DAT_091dcb98,0);
        if (lVar3 != 0) {
          CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__add_onHomeBuildingItemBought
                    (lVar3,uVar1,0);
          lVar3 = *(long *)(DAT_091b4a58 + 0x20);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03f95a6c();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03f95a6c();
          }
          lVar3 = **(long **)(lVar3 + 0xb8);
          uVar1 = thunk_FUN_03f9944c(DAT_09174980);
          FUN_070a8c30(uVar1,param_1,DAT_091dcba0,0);
          if (lVar3 != 0) {
            CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__add_onMapBuildingUnlocked
                      (lVar3,uVar1,0);
            lVar3 = *(long *)(DAT_091b4a58 + 0x20);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03f95a6c();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03f95a6c();
            }
            lVar3 = **(long **)(lVar3 + 0xb8);
            uVar1 = thunk_FUN_03f9944c(DAT_09174980);
            FUN_070a8c30(uVar1,param_1,DAT_091dcb60,0);
            if (lVar3 != 0) {
              CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__add_onClaimedFullUpgradeMapReward
                        (lVar3,uVar1,0);
              lVar3 = *(long *)(DAT_091b4b48 + 0x20);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03f95a6c();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03f95a6c();
              }
              lVar3 = **(long **)(lVar3 + 0xb8);
              uVar1 = thunk_FUN_03f9944c(DAT_0918ea68);
              CakeOrder_SaveProfile_CakeItemCurrencyDataAccess_OnItemChangedDelegate___ctor
                        (uVar1,param_1,DAT_091dcb90,0);
              if (lVar3 != 0) {
                CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__add_onItemChanged(lVar3,uVar1,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_04327bb0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


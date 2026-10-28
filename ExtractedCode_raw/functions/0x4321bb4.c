// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMainDetailsMode$$OnDestroy
// address: 0x4321bb4
// body: available
// range: 0x4321bb4-0x4321fbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4321fb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4321fb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMainDetailsMode__OnDestroy(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_0951765f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09174e30);
    FUN_03f5c2a4(&DAT_09174c50);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091a0108);
    FUN_03f5c2a4(&DAT_091a6930);
    FUN_03f5c2a4(&DAT_091a6938);
    FUN_03f5c2a4(&DAT_091a6940);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4a60);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dcb18);
    FUN_03f5c2a4(&DAT_091dcb20);
    FUN_03f5c2a4(&DAT_091dcb28);
    FUN_03f5c2a4(&DAT_091dcb30);
    FUN_03f5c2a4(&DAT_091dcb38);
    FUN_03f5c2a4(&DAT_091bea48);
    DAT_0951765f = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if ((*(long *)(param_1 + 0x98) == 0) ||
     (lVar1 = FUN_06fd8278(*(long *)(param_1 + 0x98),DAT_091a0108), lVar1 == 0)) goto LAB_04321fb8;
  FUN_06544014(&local_98,lVar1,DAT_091bea48);
  local_70 = local_88;
  puStack_78 = puStack_90;
  local_80 = local_98;
  local_98 = 0;
  puStack_90 = &local_80;
  while (uVar2 = FUN_072759a8(&local_80,DAT_091a6938), lVar1 = local_70, (uVar2 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(lVar1,0,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = thunk_FUN_03f9944c(DAT_09174980);
      FUN_070a8c30(uVar3,param_1,DAT_091dcb38,0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_UI_UIListUpgradeBuildingOptionCards__remove_onUpgradePresentationCompleted
                (lVar1,uVar3,0);
      uVar3 = thunk_FUN_03f9944c(DAT_09174c50);
      FUN_071cd244(uVar3,param_1,DAT_091dcb30,0);
      CakeOrder_UI_UIListUpgradeBuildingOptionCards__remove_onToolPartUpgradePresented
                (lVar1,uVar3,0);
    }
  }
  FUN_072759a4(&local_80,DAT_091a6930);
  uVar2 = FUN_05a8eda4(DAT_091b4a60);
  if ((uVar2 & 1) != 0) {
    lVar1 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    lVar1 = **(long **)(lVar1 + 0xb8);
    uVar3 = thunk_FUN_03f9944c(DAT_09174980);
    FUN_070a8c30(uVar3,param_1,DAT_091dcb20,0);
    if (lVar1 == 0) goto LAB_04321fb8;
    CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__remove_onMapBuildingUnlocked
              (lVar1,uVar3,0);
    lVar1 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    lVar1 = **(long **)(lVar1 + 0xb8);
    uVar3 = thunk_FUN_03f9944c(DAT_09174e30);
    FUN_071cd244(uVar3,param_1,DAT_091dcb18,0);
    if (lVar1 == 0) goto LAB_04321fb8;
    CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__remove_onHomeBuildingItemBought
              (lVar1,uVar3,0);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) != 0) {
        lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
        uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar3,param_1,DAT_091dcb28,0);
        if (lVar1 != 0) {
          CakeOrder_Home_HomeSelectionControl__remove_onSelectedMapChanged(lVar1,uVar3);
          if (*(long *)(param_1 + 0x48) != 0) {
            lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
            uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
            System_Action___ctor(uVar3,param_1,DAT_091dcb28,0);
            if (lVar1 != 0) {
              CakeOrder_Home_HomeSelectionControl__remove_onSelectedLevelChanged(lVar1,uVar3);
              return;
            }
          }
        }
      }
LAB_04321fb8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}


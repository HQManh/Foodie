// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder$$OnDestroy
// address: 0x4306ea8
// body: available
// range: 0x4306ea8-0x4307337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4307330 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4307334 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder__OnDestroy(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09517597 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174d90);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091bf690);
    FUN_03f5c2a4(&DAT_091bf698);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091978b8);
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_0919ef88);
    FUN_03f5c2a4(&DAT_0919ef98);
    FUN_03f5c2a4(&DAT_091a6510);
    FUN_03f5c2a4(&DAT_091a6518);
    FUN_03f5c2a4(&DAT_091a6520);
    FUN_03f5c2a4(&DAT_091ce9b0);
    FUN_03f5c2a4(&DAT_091ce9b8);
    FUN_03f5c2a4(&DAT_091ce9c8);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4a60);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091be9c8);
    DAT_09517597 = 1;
  }
  local_80 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  CakeOrder_BaseUI_SceneMainUI__OnDestroy(param_1,0);
  lVar5 = *(long *)(param_1 + 0x138);
  if (lVar5 == 0) goto LAB_04307330;
  uVar1 = *(uint *)(lVar5 + 0x18);
  if (0 < (int)uVar1) {
    uVar6 = 0;
    do {
      if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar4 = *(long *)(lVar5 + (long)(int)uVar6 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_04307330;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x28),0);
      uVar2 = FUN_0640f598(lVar4 + 0x38,DAT_091977b8);
      if ((uVar2 & 1) != 0) {
        uVar8 = *(undefined8 *)(lVar4 + 0x40);
        uVar7 = *(undefined8 *)(lVar4 + 0x38);
        uVar3 = *(undefined8 *)(lVar4 + 0x48);
        if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_70 = uVar7;
        uStack_68 = uVar8;
        local_60 = uVar3;
        FUN_04b71ee0(&local_70,DAT_091bf690);
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar1);
  }
  uVar2 = FUN_05a8eda4(DAT_091b4a60);
  if ((uVar2 & 1) != 0) {
    lVar5 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    uVar3 = thunk_FUN_03f9944c(DAT_09174d90);
    FUN_071cd244(uVar3,param_1,DAT_091ce9b0,0);
    if (lVar5 == 0) goto LAB_04307330;
    CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__remove_onUpgradeRewardGranted
              (lVar5,uVar3,0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x118);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar2 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x118);
    uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar3,param_1,DAT_091ce9b8,0);
    if (lVar5 == 0) goto LAB_04307330;
    CakeOrder_Home_HomeSelectionControl__remove_onSelectedMapChanged(lVar5,uVar3,0);
    lVar5 = *(long *)(param_1 + 0x118);
    uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar3,param_1,DAT_091ce9c8,0);
    if (lVar5 == 0) goto LAB_04307330;
    CakeOrder_Home_HomeSelectionControl__remove_onSelectedMapChanged(lVar5,uVar3,0);
    lVar5 = *(long *)(param_1 + 0x118);
    uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar3,param_1,DAT_091ce9c8,0);
    if (lVar5 == 0) goto LAB_04307330;
    CakeOrder_Home_HomeSelectionControl__remove_onSelectedLevelChanged(lVar5,uVar3,0);
  }
  if ((*(long *)(param_1 + 0x198) != 0) &&
     (lVar5 = FUN_06f6b92c(*(long *)(param_1 + 0x198),DAT_0919ef98), lVar5 != 0)) {
    FUN_0653bc44(&local_a0,lVar5,DAT_091be9c8);
    while (uVar2 = FUN_0726aaec(&local_a0,DAT_091a6518), (uVar2 & 1) != 0) {
      uStack_b8 = uStack_88;
      local_c0 = local_90;
      local_b0 = local_80;
      uVar2 = FUN_0640f598(&local_c0,DAT_091978b8);
      uVar8 = local_b0;
      uVar7 = uStack_b8;
      uVar3 = local_c0;
      if ((uVar2 & 1) != 0) {
        if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_68 = uVar7;
        local_70 = uVar3;
        local_60 = uVar8;
        FUN_04b71ee0(&local_70,DAT_091bf698);
      }
    }
    FUN_0726aae8(&local_a0,DAT_091a6510);
    if (*(long *)(param_1 + 0x198) != 0) {
      FUN_06f6bd94(*(long *)(param_1 + 0x198),DAT_0919ef88);
      CakeOrder_Home_HomeControllerCookOrder__CleanUpFloatButtonLogin7Days(param_1);
      CakeOrder_Home_HomeControllerCookOrder__CleanUpFloatButtonDailyReward(param_1);
      CakeOrder_Home_HomeControllerCookOrder__CleanUpFloatButtonRemoveAds(param_1);
      CakeOrder_Home_HomeControllerCookOrder__CleanUpFloatButtonStarterPack(param_1);
      CakeOrder_Home_HomeControllerCookOrder__CleanUpButtonPlayerProfile(param_1);
      return;
    }
  }
LAB_04307330:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder.<>c__DisplayClass89_0$$<ApplyUseBooster>g__OnEndUseBooster|1
// address: 0x429f430
// body: available
// range: 0x429f430-0x429fa4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x429f880 to 0x4278400 CakeOrder.SaveProfile.CakeItemCurrencyDataAccess$$SaveData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x429fa44 to 0x425efac CakeOrder.CakeOrderDataTracking$$TrackBoosterUsed (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x429fa48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder_<>c__DisplayClass89_0__<ApplyUseBooster>g__OnEndUseBooster_1
               (long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_0951724c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_091b6a50);
    FUN_03f5c2a4(&DAT_091b6a60);
    FUN_03f5c2a4(&DAT_0921c978);
    FUN_03f5c2a4(&DAT_09224f00);
    FUN_03f5c2a4(&DAT_0921d858);
    FUN_03f5c2a4(&DAT_09221b80);
    FUN_03f5c2a4(&DAT_09218330);
    FUN_03f5c2a4(&DAT_0921c980);
    FUN_03f5c2a4(&DAT_0921bb30);
    FUN_03f5c2a4(&DAT_092182c0);
    DAT_0951724c = 1;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (CakeOrder_InGame_UIInLevelCakeOrder__SetBlockAllBooster(*(long *)(param_1 + 0x20),0x4f,0),
     param_2 == 0)) goto LAB_0429fa48;
  lVar5 = *(long *)(param_1 + 0x28);
  if ((*(ushort *)(param_2 + 0x10) < 0x100) && ((*(ushort *)(param_2 + 0x10) & 0xff) != 0)) {
    if (lVar5 != 0) {
      uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar5 + 0x20),0);
      if ((uVar3 & 1) == 0) {
        lVar5 = *(long *)(DAT_091b4b48 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        if ((*(long *)(param_1 + 0x28) == 0) || (**(long **)(lVar5 + 0xb8) == 0)) goto LAB_0429fa48;
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                  (**(long **)(lVar5 + 0xb8),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20),1,
                   DAT_092182c0,0,0);
      }
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 != 0) {
        if ((0 < *(int *)(lVar5 + 0x18)) && (*(int *)(lVar5 + 0x30) < 1)) {
          lVar5 = *(long *)(DAT_091b4b48 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c();
          }
          lVar7 = **(long **)(lVar5 + 0xb8);
          lVar5 = *(long *)(DAT_091b4b60 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c(lVar5);
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c();
          }
          if ((((**(long **)(lVar5 + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(lVar5 + 0xb8) + 0x40), lVar5 == 0)) ||
              (*(long *)(param_1 + 0x28) == 0)) || (lVar7 == 0)) goto LAB_0429fa48;
          CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                    (lVar7,*(undefined8 *)(lVar5 + 0x18),
                     *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18),DAT_092182c0,0,0);
          lVar5 = *(long *)(param_1 + 0x28);
          if (lVar5 == 0) goto LAB_0429fa48;
        }
        if (0 < *(int *)(lVar5 + 0x14)) {
          lVar5 = *(long *)(DAT_091b4b48 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c();
          }
          if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_0429fa48;
          CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                    (**(long **)(lVar5 + 0xb8),*(undefined8 *)(param_1 + 0x10),1,DAT_09218330,0,0);
          lVar5 = *(long *)(param_1 + 0x28);
          if (lVar5 == 0) goto LAB_0429fa48;
        }
        if (*(char *)(lVar5 + 0x10) != '\0') {
          uVar4 = CakeOrder_InGame_UIInLevelCakeOrder__GetKeyCountNumFreeBoosterUsed
                            (*(undefined8 *)(param_1 + 0x10));
          lVar5 = *(long *)(DAT_091b4b48 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c(lVar5);
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c();
          }
          lVar7 = *(long *)(DAT_091b4b48 + 0x20);
          lVar5 = **(long **)(lVar5 + 0xb8);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c(lVar7);
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_0429fa48;
          iVar1 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetInt
                            (**(long **)(lVar7 + 0xb8),uVar4,0,0);
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09187e80);
          }
          uVar2 = System_Math__Max(0,iVar1 + -1,0);
          if (lVar5 == 0) goto LAB_0429fa48;
          CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SetInt(lVar5,uVar4,uVar2,0);
        }
        lVar5 = *(long *)(DAT_091b4b48 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        if (**(long **)(lVar5 + 0xb8) != 0) {
          CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar5 + 0xb8),0);
          return;
        }
      }
    }
    goto LAB_0429fa48;
  }
  if (lVar5 == 0) goto LAB_0429fa48;
  if (0 < *(int *)(lVar5 + 0x14)) {
    if ((((*(long *)(param_1 + 0x20) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0xc0), lVar5 == 0)) ||
        (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) ||
       (lVar5 = *(long *)(lVar5 + 0x30), lVar5 == 0)) goto LAB_0429fa48;
    CakeOrder_InGame_BoosterCounter__RecordUseBoosterByAds(lVar5,*(undefined8 *)(param_1 + 0x10),0);
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 == 0) goto LAB_0429fa48;
  }
  if (0 < *(int *)(lVar5 + 0x18)) {
    if (((*(long *)(param_1 + 0x20) == 0) ||
        (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0xc0), lVar7 == 0)) ||
       ((lVar7 = *(long *)(lVar7 + 0x40), lVar7 == 0 ||
        (lVar7 = *(long *)(lVar7 + 0x30), lVar7 == 0)))) goto LAB_0429fa48;
    CakeOrder_InGame_BoosterCounter__RecordUseBoosterByHardCurrency
              (lVar7,*(undefined8 *)(param_1 + 0x10),*(int *)(lVar5 + 0x18),0);
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 == 0) goto LAB_0429fa48;
  }
  uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar5 + 0x20),0);
  lVar5 = *(long *)(param_1 + 0x28);
  if ((uVar3 & 1) == 0) {
    if (lVar5 == 0) goto LAB_0429fa48;
    if (*(int *)(lVar5 + 0x30) < 1) {
      if (((*(long *)(param_1 + 0x20) == 0) ||
          (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0xc0), lVar5 == 0)) ||
         ((lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0 ||
          (lVar5 = *(long *)(lVar5 + 0x30), lVar5 == 0)))) goto LAB_0429fa48;
      CakeOrder_InGame_BoosterCounter__RecordUseBoosterByItem
                (lVar5,*(undefined8 *)(param_1 + 0x10),1,0);
      lVar5 = *(long *)(param_1 + 0x28);
      goto LAB_0429f960;
    }
  }
  else {
LAB_0429f960:
    if (lVar5 == 0) goto LAB_0429fa48;
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    if (*(int *)(lVar5 + 0x14) < 1) {
      if (*(int *)(lVar5 + 0x30) < 1) {
        if (*(int *)(lVar5 + 0x18) < 1) {
          uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar5 + 0x20),0);
          lVar5 = *(long *)(param_1 + 0x28);
          puVar6 = &DAT_09224f00;
          if ((uVar3 & 1) == 0) {
            puVar6 = &DAT_0921d858;
          }
          if (lVar5 == 0) goto LAB_0429fa48;
        }
        else {
          puVar6 = &DAT_0921c978;
        }
      }
      else {
        puVar6 = &DAT_0921c980;
      }
    }
    else {
      puVar6 = &DAT_09221b80;
    }
  }
  else {
    puVar6 = &DAT_0921bb30;
  }
  uVar4 = *puVar6;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0xc0), lVar7 != 0)) {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(lVar5 + 0x18);
    uVar8 = *(undefined8 *)(lVar7 + 0x40);
    if (*(int *)(DAT_09182280 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    CakeOrder_CakeOrderDataTracking__TrackBoosterUsed(uVar9,uVar4,uVar2,uVar8,0);
    return;
  }
LAB_0429fa48:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


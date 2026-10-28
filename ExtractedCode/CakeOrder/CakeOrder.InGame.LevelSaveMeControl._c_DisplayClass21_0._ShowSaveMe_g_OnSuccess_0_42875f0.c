// rea decompile_all
// name: CakeOrder.InGame.LevelSaveMeControl.<>c__DisplayClass21_0$$<ShowSaveMe>g__OnSuccess|0
// address: 0x42875f0
// body: available
// range: 0x42875f0-0x4287bbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4287ad4 to 0x4286e00 CakeOrder.InGame.LevelSaveMeControl$$Lose (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4287bbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelSaveMeControl_<>c__DisplayClass21_0__<ShowSaveMe>g__OnSuccess_0
               (long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if ((DAT_0951714b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_0918a5c0);
    FUN_03f5c2a4(&DAT_0921c978);
    FUN_03f5c2a4(&DAT_09224f00);
    FUN_03f5c2a4(&DAT_0921d858);
    FUN_03f5c2a4(&DAT_0921d090);
    FUN_03f5c2a4(&DAT_09221b80);
    FUN_03f5c2a4(&DAT_0921bb30);
    FUN_03f5c2a4(&DAT_09221ed8);
    DAT_0951714b = 1;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x18) == '\0') {
      return;
    }
    *(undefined1 *)(lVar7 + 0x18) = 0;
    lVar9 = *(long *)(param_1 + 0x18);
    if (lVar9 != 0) {
      (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 == 0) goto LAB_04287bbc;
    }
    if ((*(long *)(lVar7 + 0x10) != 0) &&
       (plVar4 = *(long **)(*(long *)(lVar7 + 0x10) + 0x28), plVar4 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar4 + 0x278))(plVar4,*(undefined8 *)(*plVar4 + 0x280));
      if ((uVar5 & 1) == 0) {
        if (param_2 != 0) {
          uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x20),0);
          if ((uVar5 & 1) == 0) {
            lVar7 = *(long *)(DAT_091b4b48 + 0x20);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c();
            }
            if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_04287bbc;
            CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                      (**(long **)(lVar7 + 0xb8),*(undefined8 *)(param_2 + 0x20),1,DAT_09221ed8,0,0)
            ;
          }
          if (0 < *(int *)(param_2 + 0x18)) {
            lVar7 = *(long *)(DAT_091b4b48 + 0x20);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c();
            }
            lVar9 = **(long **)(lVar7 + 0xb8);
            lVar7 = *(long *)(DAT_091b4b60 + 0x20);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c(lVar7);
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c();
            }
            if (((**(long **)(lVar7 + 0xb8) == 0) ||
                (lVar7 = *(long *)(**(long **)(lVar7 + 0xb8) + 0x40), lVar7 == 0)) || (lVar9 == 0))
            goto LAB_04287bbc;
            CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                      (lVar9,*(undefined8 *)(lVar7 + 0x18),*(undefined4 *)(param_2 + 0x18),
                       DAT_09221ed8,0,0);
          }
          lVar7 = *(long *)(DAT_091b4b48 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          if (**(long **)(lVar7 + 0xb8) != 0) {
            CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar7 + 0xb8),0);
            if (((*(long *)(param_1 + 0x10) != 0) &&
                (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar7 != 0)) &&
               ((lVar7 = *(long *)(lVar7 + 0x28), lVar7 != 0 &&
                ((lVar7 = *(long *)(lVar7 + 0x58), lVar7 != 0 &&
                 (Utilities_BoolModifierWithRegisteredSource__RemoveModifier
                            (lVar7,*(undefined4 *)(param_1 + 0x20),0),
                 *(long *)(param_1 + 0x10) != 0)))))) {
              CakeOrder_InGame_LevelSaveMeControl__Lose();
              return;
            }
          }
        }
      }
      else if ((*(long *)(param_1 + 0x10) != 0) &&
              (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar7 != 0)) {
        lVar7 = *(long *)(lVar7 + 0x38);
        if (lVar7 != 0) {
          *(undefined4 *)(lVar7 + 0x14) = 0;
        }
        if (param_2 != 0) {
          if (*(char *)(param_2 + 0x10) != '\0') {
            uVar6 = CakeOrder_InGame_LevelSaveMeControl__KeyNumFreeShown
                              (*(undefined4 *)(param_1 + 0x24));
            lVar7 = *(long *)(DAT_091b4b48 + 0x20);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c(lVar7);
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c();
            }
            lVar9 = *(long *)(DAT_091b4b48 + 0x20);
            lVar7 = **(long **)(lVar7 + 0xb8);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_03f95a6c(lVar9);
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_03f95a6c();
            }
            if ((**(long **)(lVar9 + 0xb8) == 0) ||
               (iVar3 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetInt
                                  (**(long **)(lVar9 + 0xb8),uVar6,0,0), lVar7 == 0))
            goto LAB_04287bbc;
            CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SetInt(lVar7,uVar6,iVar3 + 1,0);
            lVar7 = *(long *)(DAT_091b4b48 + 0x20);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c();
            }
            if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_04287bbc;
            CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar7 + 0xb8),0);
          }
          if (0 < *(int *)(param_2 + 0x14)) {
            if (((*(long *)(param_1 + 0x10) == 0) ||
                (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar7 == 0)) ||
               (lVar7 = *(long *)(lVar7 + 0x38), lVar7 == 0)) goto LAB_04287bbc;
            local_38 = *(undefined4 *)(param_1 + 0x24);
            lVar7 = *(long *)(lVar7 + 0x30);
            local_48 = DAT_0918a5c0;
            uStack_40 = 0xffffffffffffffff;
            uVar6 = System_Enum__ToString(&local_48,0);
            if (lVar7 == 0) goto LAB_04287bbc;
            CakeOrder_InGame_BoosterCounter__RecordUseBoosterByAds(lVar7,uVar6,0);
          }
          if (0 < *(int *)(param_2 + 0x18)) {
            if (((*(long *)(param_1 + 0x10) == 0) ||
                (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar7 == 0)) ||
               (lVar7 = *(long *)(lVar7 + 0x38), lVar7 == 0)) goto LAB_04287bbc;
            local_38 = *(undefined4 *)(param_1 + 0x24);
            lVar7 = *(long *)(lVar7 + 0x30);
            local_48 = DAT_0918a5c0;
            uStack_40 = 0xffffffffffffffff;
            uVar6 = System_Enum__ToString(&local_48,0);
            if (lVar7 == 0) goto LAB_04287bbc;
            CakeOrder_InGame_BoosterCounter__RecordUseBoosterByHardCurrency
                      (lVar7,uVar6,*(undefined4 *)(param_2 + 0x18),0);
          }
          if (*(char *)(param_2 + 0x10) == '\0') {
            if (*(int *)(param_2 + 0x14) < 1) {
              if (*(int *)(param_2 + 0x18) < 1) {
                uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x20),0);
                if ((uVar5 & 1) == 0) {
                  puVar8 = &DAT_0921d858;
                }
                else {
                  uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x28),0);
                  puVar8 = &DAT_09224f00;
                  if ((uVar5 & 1) == 0) {
                    puVar8 = &DAT_0921d090;
                  }
                }
              }
              else {
                puVar8 = &DAT_0921c978;
              }
            }
            else {
              puVar8 = &DAT_09221b80;
            }
          }
          else {
            puVar8 = &DAT_0921bb30;
          }
          uVar6 = *puVar8;
          uVar1 = *(undefined4 *)(param_1 + 0x24);
          uVar2 = *(undefined4 *)(param_1 + 0x28);
          if (*(int *)(DAT_09182280 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          CakeOrder_CakeOrderDataTracking__TrackReviveOffer(uVar1,uVar6,uVar2,0);
          if (((*(long *)(param_1 + 0x10) != 0) &&
              (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar7 != 0)) &&
             ((lVar7 = *(long *)(lVar7 + 0x28), lVar7 != 0 &&
              (lVar7 = *(long *)(lVar7 + 0x58), lVar7 != 0)))) {
            Utilities_BoolModifierWithRegisteredSource__RemoveModifier
                      (lVar7,*(undefined4 *)(param_1 + 0x20),0);
            return;
          }
        }
      }
    }
  }
LAB_04287bbc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


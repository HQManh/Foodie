// rea decompile_all
// name: CakeOrder.LiveOpsImplement.LiveOpBehavior7DayLogin$$ReceiveRewards
// address: 0x42eb22c
// body: available
// range: 0x42eb22c-0x42eb703 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42eb6fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42eb700 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_LiveOpBehavior7DayLogin__ReceiveRewards(long *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  
  if ((DAT_09517482 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918a290);
    FUN_03f5c2a4(&DAT_0921eba0);
    FUN_03f5c2a4(&DAT_09221b50);
    FUN_03f5c2a4(&DAT_0921ebb0);
    DAT_09517482 = 1;
  }
  if ((int)param_2 < 0) {
    return;
  }
  iVar4 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  if (iVar4 <= (int)param_2) {
    return;
  }
  iVar4 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  if (iVar4 - 1U == param_2) {
    if (param_1[5] == 0) goto LAB_042eb6fc;
    LiveOpsR1_LiveOpsDataAccessWrapper__SetInt(param_1[5],DAT_0921eba0,1,0);
  }
  if ((param_1[7] != 0) && (lVar7 = *(long *)(param_1[7] + 0x10), lVar7 != 0)) {
    if (*(uint *)(lVar7 + 0x18) <= param_2) {
LAB_042eb700:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar9 = *(long *)(lVar7 + (ulong)param_2 * 8 + 0x20);
    lVar7 = thunk_FUN_03f9944c(DAT_0918a290);
    CakeOrder_UI_RewardListData___ctor(lVar7,0);
    if ((lVar9 != 0) &&
       (lVar9 = CakeOrder_LiveOpsImplement_LiveOpBehavior7DayLogin_RewardMilestone__GetRewards
                          (lVar9), lVar9 != 0)) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar1) {
        bVar3 = false;
        uVar13 = 0;
        do {
          if (uVar1 <= uVar13) goto LAB_042eb700;
          lVar11 = *(long *)(lVar9 + (long)(int)uVar13 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_042eb6fc;
          uVar10 = *(undefined8 *)(lVar11 + 0x10);
          lVar5 = *(long *)(DAT_091b4970 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c();
          }
          if ((**(long **)(lVar5 + 0xb8) == 0) || (*(long *)(**(long **)(lVar5 + 0xb8) + 0x40) == 0)
             ) goto LAB_042eb6fc;
          if ((DAT_095174d4 & 1) == 0) {
            FUN_03f5c2a4(&DAT_09224f28);
            DAT_095174d4 = 1;
          }
          uVar6 = System_String__op_Equality(uVar10,DAT_09224f28,0);
          if ((uVar6 & 1) == 0) {
            lVar5 = *(long *)(DAT_091b4b48 + 0x20);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03f95a6c();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03f95a6c();
            }
            if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_042eb6fc;
            CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                      (**(long **)(lVar5 + 0xb8),*(undefined8 *)(lVar11 + 0x10),
                       *(undefined4 *)(lVar11 + 0x18),DAT_0921ebb0,0,0);
            lVar5 = *(long *)(DAT_091b4b60 + 0x20);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03f95a6c();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03f95a6c();
            }
            if ((**(long **)(lVar5 + 0xb8) == 0) ||
               (uVar10 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetCurrencyById
                                   (**(long **)(lVar5 + 0xb8),*(undefined8 *)(lVar11 + 0x10),0),
               lVar7 == 0)) goto LAB_042eb6fc;
            CakeOrder_UI_RewardListData__AddReward(lVar7,uVar10,*(undefined4 *)(lVar11 + 0x18),0,0);
            bVar3 = true;
          }
          else {
            iVar4 = *(int *)(lVar11 + 0x18);
            lVar5 = *(long *)(DAT_091b4970 + 0x20);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03f95a6c();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03f95a6c();
            }
            if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_042eb6fc;
            CakeOrder_HeartSystem_HeartSystemController__ActivateUnlimitedHeart
                      (**(long **)(lVar5 + 0xb8),iVar4 * 0x3c,1,0);
            lVar5 = *(long *)(DAT_091b4970 + 0x20);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03f95a6c();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03f95a6c();
            }
            if ((**(long **)(lVar5 + 0xb8) == 0) || (lVar7 == 0)) goto LAB_042eb6fc;
            CakeOrder_UI_RewardListData__AddReward
                      (lVar7,*(undefined8 *)(**(long **)(lVar5 + 0xb8) + 0x40),
                       *(undefined4 *)(lVar11 + 0x18),0,0);
          }
          uVar10 = LiveOpsR1_LiveOpsBehaviorLoginXDaysAbstract__get_EventSO(param_1,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
          puVar8 = &DAT_0921ebb0;
          if ((uVar6 & 1) != 0) {
            lVar5 = LiveOpsR1_LiveOpsBehaviorLoginXDaysAbstract__get_EventSO(param_1,0);
            if (lVar5 == 0) goto LAB_042eb6fc;
            puVar8 = (undefined8 *)(lVar5 + 0x18);
          }
          uVar12 = *puVar8;
          uVar10 = *(undefined8 *)(lVar11 + 0x10);
          uVar2 = *(undefined4 *)(lVar11 + 0x18);
          if (*(int *)(DAT_09182280 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          CakeOrder_CakeOrderDataTracking__TrackLiveOpsInteraction
                    (uVar12,DAT_09221b50,param_2,uVar10,uVar2,0);
          uVar1 = *(uint *)(lVar9 + 0x18);
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uVar1);
        if (bVar3) {
          lVar9 = *(long *)(DAT_091b4b48 + 0x20);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_03f95a6c();
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_03f95a6c();
          }
          if (**(long **)(lVar9 + 0xb8) == 0) goto LAB_042eb6fc;
          CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar9 + 0xb8),0);
        }
      }
      lVar9 = param_1[8];
      if (lVar9 == 0) {
        return;
      }
      (**(code **)(lVar9 + 0x18))
                (*(undefined8 *)(lVar9 + 0x40),param_2,lVar7,*(undefined8 *)(lVar9 + 0x28));
      return;
    }
  }
LAB_042eb6fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


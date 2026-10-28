// rea decompile_all
// name: CakeOrder.UI.UIMapBuildingProgress$$TriggerClaim
// address: 0x42bfc80
// body: available
// range: 0x42bfc80-0x42c0047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c003c to 0x427f344 CakeOrder.SaveProfile.PlayerMapLevelProgressDataAccess$$SaveData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42c0040 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c0044 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIMapBuildingProgress__TriggerClaim(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  
  if ((DAT_09517316 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0248);
    FUN_03f5c2a4(&DAT_091adf90);
    FUN_03f5c2a4(&DAT_091adf98);
    FUN_03f5c2a4(&DAT_091adf88);
    FUN_03f5c2a4(&DAT_091adfa0);
    FUN_03f5c2a4(&DAT_0917c590);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0921f140);
    FUN_03f5c2a4(&DAT_0921f150);
    DAT_09517316 = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0xa0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar11,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    uVar3 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__IsClaimedFullBuildingUpgradeReward
                      (*(long *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x90),0);
    lVar4 = DAT_091c0248;
    lVar8 = *(long *)(param_1 + 0xa0);
    if ((uVar3 & 1) == 0) {
      if (lVar8 == 0) goto LAB_042c0044;
      plVar6 = (long *)(lVar8 + 0x30);
    }
    else {
      if (lVar8 == 0) goto LAB_042c0044;
      plVar6 = (long *)(lVar8 + 0x38);
    }
    if ((*plVar6 == 0) || (lVar8 = *(long *)(*plVar6 + 0x10), lVar8 == 0)) {
      lVar8 = *(long *)(DAT_091c0248 + 0x38);
      if (lVar8 == 0) {
        FUN_03f95ac8(DAT_091c0248);
        lVar8 = *(long *)(lVar4 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar8 = **(long **)(lVar4 + 0xb8);
    }
    lVar4 = thunk_FUN_03f9944c(DAT_0917c590);
    FUN_057e0400(lVar4,DAT_091adf88);
    if (lVar8 != 0) {
      if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
        uVar13 = 0;
        uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar12 = *(long *)(lVar8 + 0x20 + uVar13 * 8);
          if (((lVar12 != 0) && (0 < *(int *)(lVar12 + 0x18))) &&
             (uVar9 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar12 + 0x10),0),
             (uVar9 & 1) == 0)) {
            lVar5 = *(long *)(DAT_091b4b48 + 0x20);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03f95a6c();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03f95a6c();
            }
            if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_042c0044;
            puVar1 = &DAT_0921f140;
            if ((uVar3 & 1) == 0) {
              puVar1 = &DAT_0921f150;
            }
            CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                      (**(long **)(lVar5 + 0xb8),*(undefined8 *)(lVar12 + 0x10),
                       *(undefined4 *)(lVar12 + 0x18),*puVar1,0,0);
            lVar5 = DAT_091adf90;
            if (lVar4 == 0) goto LAB_042c0044;
            lVar10 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_042c0044;
            uVar2 = *(uint *)(lVar4 + 0x18);
            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar2 + 1;
              plVar6 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
              *plVar6 = lVar12;
              thunk_FUN_03f5d7b8(plVar6,lVar12);
            }
            else {
              FUN_057e0c68(lVar4,lVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar13 = uVar13 + 1;
        } while ((long)uVar13 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
      if (lVar4 != 0) {
        if (0 < *(int *)(lVar4 + 0x18)) {
          lVar8 = *(long *)(DAT_091b4b48 + 0x20);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_03f95a6c();
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_03f95a6c();
          }
          if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_042c0044;
          CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar8 + 0xb8),0);
        }
        uVar11 = *(undefined8 *)(param_1 + 0x90);
        lVar8 = *(long *)(param_1 + 0x98);
        uVar7 = FUN_057e28a4(lVar4,DAT_091adf98);
        if ((uVar3 & 1) == 0) {
          if (lVar8 == 0) goto LAB_042c0044;
          CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__RecordClaimedFullBuildingUpgradeReward
                    (lVar8,uVar11,uVar7,0);
        }
        else {
          if (lVar8 == 0) goto LAB_042c0044;
          CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__RecordClaimedAllItemsUpgradeReward
                    (lVar8,uVar11,uVar7,0);
        }
        if (*(long *)(param_1 + 0x98) != 0) {
          CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__SaveData
                    (*(long *)(param_1 + 0x98),0);
          return;
        }
      }
    }
  }
LAB_042c0044:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


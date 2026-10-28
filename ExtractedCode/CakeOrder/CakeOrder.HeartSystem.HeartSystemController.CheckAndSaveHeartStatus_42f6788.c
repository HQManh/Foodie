// rea decompile_all
// name: CakeOrder.HeartSystem.HeartSystemController$$CheckAndSaveHeartStatus
// address: 0x42f6788
// body: available
// range: 0x42f6788-0x42f6b6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42f6b68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_HeartSystem_HeartSystemController__CheckAndSaveHeartStatus(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  double dVar12;
  undefined8 local_38;
  
  if ((DAT_095174f0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_09210928);
    FUN_03f5c2a4(&DAT_09200ea0);
    FUN_03f5c2a4(&DAT_0921cac8);
    DAT_095174f0 = 1;
  }
  local_38 = 0;
  *(undefined1 *)(param_1 + 0x50) = 1;
  iVar3 = CakeOrder_HeartSystem_HeartSystemController__GetDurationRemainedRecoverHeart(param_1);
  uVar8 = CakeOrder_HeartSystem_HeartSystemController__GetLastTimeUpdateHeart(param_1);
  uVar9 = CakeOrder_HeartSystem_HeartSystemController__GetTimeEndUnlimitedHeart(param_1);
  if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_042f6b68;
  iVar4 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                    (*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),0);
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183548);
  }
  uVar10 = System_DateTime__op_LessThan(uVar8,uVar9,0);
  if ((uVar10 & 1) == 0) {
    if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow(0);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183548);
    }
    local_38 = System_DateTime__op_Subtraction(uVar9,uVar8,0);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    dVar12 = (double)System_TimeSpan__get_TotalSeconds(&local_38,0);
    iVar5 = 0;
    iVar6 = -0x80000000;
    if (dVar12 != INFINITY) {
      iVar6 = (int)dVar12;
    }
  }
  else {
    uVar10 = CakeOrder_HeartSystem_HeartSystemController__IsInUnlimitedHeart(param_1);
    if ((uVar10 & 1) != 0) goto LAB_042f6b4c;
    if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow(0);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183548);
    }
    local_38 = System_DateTime__op_Subtraction(uVar8,uVar9,0);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    dVar12 = (double)System_TimeSpan__get_TotalSeconds(&local_38,0);
    iVar6 = -0x80000000;
    if (dVar12 != INFINITY) {
      iVar6 = (int)dVar12;
    }
    iVar5 = CakeOrder_HeartSystem_HeartSystemController__get_MaxHeartInSaveData(param_1);
  }
  if (iVar6 < iVar3) {
    iVar3 = iVar3 - iVar6;
  }
  else {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_042f6b68;
    iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x14);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = (iVar6 - iVar3) / iVar1;
    }
    iVar5 = iVar5 + iVar2 + 1;
    iVar3 = iVar1 + (iVar2 * iVar1 - (iVar6 - iVar3));
  }
  if ((0 < iVar5) &&
     (iVar6 = CakeOrder_HeartSystem_HeartSystemController__get_MaxHeartInSaveData(param_1),
     iVar4 < iVar6)) {
    iVar6 = CakeOrder_HeartSystem_HeartSystemController__get_MaxHeartInSaveData(param_1);
    if (iVar5 + iVar4 < iVar6) {
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_042f6b68;
      CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SetItemAmount
                (*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),
                 iVar5 + iVar4,DAT_0921cac8,0,0);
      lVar11 = *(long *)(param_1 + 0x20);
      if (lVar11 == 0) goto LAB_042f6b68;
    }
    else {
      iVar5 = CakeOrder_HeartSystem_HeartSystemController__get_MaxHeartInSaveData(param_1);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_042f6b68;
      lVar11 = *(long *)(param_1 + 0x20);
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
      uVar7 = CakeOrder_HeartSystem_HeartSystemController__get_MaxHeartInSaveData(param_1);
      if (lVar11 == 0) goto LAB_042f6b68;
      CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SetItemAmount
                (lVar11,uVar8,uVar7,DAT_0921cac8,0,0);
      if ((*(long *)(param_1 + 0x30) == 0) || (lVar11 = *(long *)(param_1 + 0x20), lVar11 == 0))
      goto LAB_042f6b68;
      iVar5 = iVar5 - iVar4;
      iVar3 = *(int *)(*(long *)(param_1 + 0x30) + 0x14);
    }
    CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SetInt(lVar11,DAT_09200ea0,iVar3,0);
    lVar11 = *(long *)(param_1 + 0x20);
    if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow(0);
    if (lVar11 != 0) {
      CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SetDateTime(lVar11,DAT_09210928,uVar8,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(*(long *)(param_1 + 0x20),0);
        lVar11 = *(long *)(param_1 + 0x60);
        if (lVar11 != 0) {
          (**(code **)(lVar11 + 0x18))
                    (*(undefined8 *)(lVar11 + 0x40),iVar4,iVar5 + iVar4,
                     *(undefined8 *)(lVar11 + 0x28));
        }
        goto LAB_042f6b4c;
      }
    }
LAB_042f6b68:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_042f6b4c:
  *(undefined1 *)(param_1 + 0x50) = 0;
  return;
}


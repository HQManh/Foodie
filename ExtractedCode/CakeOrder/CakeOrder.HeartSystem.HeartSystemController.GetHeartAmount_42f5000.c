// rea decompile_all
// name: CakeOrder.HeartSystem.HeartSystemController$$GetHeartAmount
// address: 0x42f5000
// body: available
// range: 0x42f5000-0x42f5227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42f5224 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int CakeOrder_HeartSystem_HeartSystemController__GetHeartAmount(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 local_38;
  
  if ((DAT_095174ef & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_095174ef = 1;
  }
  local_38 = 0;
  iVar4 = CakeOrder_HeartSystem_HeartSystemController__GetDurationRemainedRecoverHeart(param_1);
  uVar6 = CakeOrder_HeartSystem_HeartSystemController__GetLastTimeUpdateHeart(param_1);
  uVar7 = CakeOrder_HeartSystem_HeartSystemController__GetTimeEndUnlimitedHeart(param_1);
  if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    iVar5 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                      (*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),0
                      );
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183548);
    }
    uVar8 = System_DateTime__op_LessThan(uVar6,uVar7,0);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow(0);
      uVar7 = uVar6;
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183548);
      }
    }
    else {
      uVar8 = CakeOrder_HeartSystem_HeartSystemController__IsInUnlimitedHeart(param_1);
      if ((uVar8 & 1) != 0) {
        iVar4 = CakeOrder_HeartSystem_HeartSystemController__get_MaxHeartInSaveData(param_1);
        if (iVar5 < iVar4) {
          return iVar4;
        }
        return iVar5;
      }
      if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow(0);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183548);
      }
    }
    local_38 = System_DateTime__op_Subtraction(uVar9,uVar7,0);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    dVar10 = (double)System_TimeSpan__get_TotalSeconds(&local_38,0);
    iVar1 = -0x80000000;
    if (dVar10 != INFINITY) {
      iVar1 = (int)dVar10;
    }
    if (iVar4 <= iVar1) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_042f5224;
      iVar2 = *(int *)(*(long *)(param_1 + 0x30) + 0x14);
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = (iVar1 - iVar4) / iVar2;
      }
      if ((uVar3 < 0x7fffffff) &&
         (iVar4 = CakeOrder_HeartSystem_HeartSystemController__get_MaxHeartInSaveData(param_1),
         iVar5 < iVar4)) {
        iVar4 = CakeOrder_HeartSystem_HeartSystemController__get_MaxHeartInSaveData(param_1);
        iVar5 = iVar5 + uVar3 + 1;
        if (iVar4 <= iVar5) {
          iVar5 = CakeOrder_HeartSystem_HeartSystemController__get_MaxHeartInSaveData(param_1);
        }
      }
    }
    return iVar5;
  }
LAB_042f5224:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


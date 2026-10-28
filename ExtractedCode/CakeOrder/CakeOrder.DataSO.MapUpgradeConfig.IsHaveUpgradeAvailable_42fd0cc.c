// rea decompile_all
// name: CakeOrder.DataSO.MapUpgradeConfig$$IsHaveUpgradeAvailable
// address: 0x42fd0cc
// body: available
// range: 0x42fd0cc-0x42fd323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42fd31c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fd320 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CakeOrder_DataSO_MapUpgradeConfig__IsHaveUpgradeAvailable(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long local_28;
  
  if ((DAT_0951752d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1d50);
    FUN_03f5c2a4(&DAT_091a1d58);
    FUN_03f5c2a4(&DAT_091a1d60);
    FUN_03f5c2a4(&DAT_091a9310);
    FUN_03f5c2a4(&DAT_091aa580);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_091b4a60);
    DAT_0951752d = 1;
  }
  uStack_38 = 0;
  local_40 = 0;
  local_28 = 0;
  uStack_30 = 0;
  uVar3 = FUN_05a8eda4(DAT_091b4a60);
  if (((uVar3 & 1) != 0) &&
     (uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x40),0), (uVar3 & 1) == 0)) {
    lVar4 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uVar3 = CakeOrder_DataSO_MapUpgradeConfig__IsUpgradeRewardPending(param_1);
    if ((uVar3 & 1) != 0) {
      uVar2 = 1;
      goto LAB_042fd18c;
    }
    uVar3 = CakeOrder_DataSO_MapUpgradeConfig__IsFullyUpgraded(param_1);
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(DAT_091b4b48 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar5 = **(long **)(lVar4 + 0xb8);
      lVar4 = *(long *)(DAT_091b4b60 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c(lVar4);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      if (((**(long **)(lVar4 + 0xb8) == 0) ||
          (lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x48), lVar4 == 0)) || (lVar5 == 0)) {
LAB_042fd320:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                        (lVar5,*(undefined8 *)(lVar4 + 0x18),0);
      if (0 < iVar1) {
        lVar4 = CakeOrder_DataSO_MapUpgradeConfig__GetUpgradableParts(param_1);
        if (lVar4 != 0) {
          FUN_05668c84(&local_40,lVar4,DAT_091aa580);
          do {
            uVar2 = FUN_07181930(&local_40,DAT_091a1d58);
            if ((uVar2 & 1) == 0) break;
            if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          } while (iVar1 < *(int *)(local_28 + 0x18));
          FUN_0718192c(&local_40,DAT_091a1d50);
          goto LAB_042fd18c;
        }
        goto LAB_042fd320;
      }
    }
  }
  uVar2 = 0;
LAB_042fd18c:
  return uVar2 & 1;
}


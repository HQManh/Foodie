// rea decompile_all
// name: CakeOrder.DataSO.MapUpgradeConfig$$OnHomeBuildingItemBought
// address: 0x42fb2e0
// body: available
// range: 0x42fb2e0-0x42fb55f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42fb4d4 to 0x85f7650 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42fb558 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fb55c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_DataSO_MapUpgradeConfig__OnHomeBuildingItemBought
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_09517520 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a86c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f7940);
    FUN_03f5c2a4(&DAT_09213eb0);
    FUN_03f5c2a4(&DAT_091f78f8);
    DAT_09517520 = 1;
  }
  uVar1 = System_String__op_Inequality(param_2,*(undefined8 *)(param_1 + 0x40),0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = CakeOrder_DataSO_MapUpgradeConfig__GetPartById(param_1,param_3);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar1 = UnityEngine_Object__op_Equality(lVar2,0,0);
  if ((uVar1 & 1) == 0) {
    if (lVar2 != 0) {
      uVar1 = CakeOrder_DataSO_BuildingUpgradePartSO__get_IsToolUpgrade(lVar2,0);
      if ((uVar1 & 1) != 0) {
        CakeOrder_DataSO_MapUpgradeConfig__SyncToolLevels(param_1,*(undefined8 *)(lVar2 + 0x50));
      }
      uVar1 = CakeOrder_DataSO_MapUpgradeConfig__IsRewardMilestonePart(param_1,lVar2);
      if ((uVar1 & 1) != 0) {
        CakeOrder_DataSO_MapUpgradeConfig__SyncRewardMilestone(param_1);
      }
      if (*(long *)(param_1 + 0x70) != 0) {
        uVar1 = FUN_053ebc3c(*(long *)(param_1 + 0x70),param_3,DAT_091a86c8);
        if ((uVar1 & 1) != 0) {
          return;
        }
        lVar4 = *(long *)(param_1 + 0x68);
        if (lVar4 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x042fb554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),lVar2,*(undefined8 *)(lVar4 + 0x28));
        return;
      }
    }
  }
  else {
    lVar2 = FUN_03f5c394(DAT_091805f8,5);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(undefined8 *)(lVar2 + 0x20) = DAT_09213eb0;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x20));
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_1 + 0x40);
          thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x28));
          if (2 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x30) = DAT_091f78f8;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x30));
            if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar2 + 0x38) = param_3;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x38),param_3);
              if (4 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x40) = DAT_091f7940;
                thunk_FUN_03f5d7b8();
                uVar3 = System_String__Concat(lVar2,0);
                if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_091835d0);
                }
                UnityEngine_Debug__LogWarning(uVar3,param_1,0);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


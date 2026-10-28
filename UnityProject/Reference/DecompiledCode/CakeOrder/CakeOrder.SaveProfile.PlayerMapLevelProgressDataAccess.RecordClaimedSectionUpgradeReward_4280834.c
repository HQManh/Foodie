// rea decompile_all
// name: CakeOrder.SaveProfile.PlayerMapLevelProgressDataAccess$$RecordClaimedSectionUpgradeReward
// address: 0x4280834
// body: available
// range: 0x4280834-0x4280927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4280924 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__RecordClaimedSectionUpgradeReward
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((DAT_095170ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_091892f8);
    FUN_03f5c2a4(&DAT_091b9d50);
    FUN_03f5c2a4(&DAT_091b9d80);
    DAT_095170ea = 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x48), lVar1 != 0)) {
    lVar1 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_RuntimeData__GetOrCreateMapData
                      (lVar1,param_2);
    if (*(int *)(DAT_091892f8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091892f8);
    }
    uVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__KeySectionRewardClaimed(param_3)
    ;
    if (lVar1 != 0) {
      uVar3 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_MapData__AddKeyBool
                        (lVar1,uVar2);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_04280924;
        FUN_06077998(*(long *)(param_1 + 0x20),0,DAT_091b9d50);
        lVar1 = *(long *)(param_1 + 0x40);
        if (lVar1 != 0) {
          (**(code **)(lVar1 + 0x18))
                    (*(undefined8 *)(lVar1 + 0x40),param_2,param_3,*(undefined8 *)(lVar1 + 0x28));
        }
      }
      return;
    }
  }
LAB_04280924:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


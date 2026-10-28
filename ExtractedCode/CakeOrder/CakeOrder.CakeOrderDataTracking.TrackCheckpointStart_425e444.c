// rea decompile_all
// name: CakeOrder.CakeOrderDataTracking$$TrackCheckpointStart
// address: 0x425e444
// body: available
// range: 0x425e444-0x425e61f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425e618 to 0x427f344 CakeOrder.SaveProfile.PlayerMapLevelProgressDataAccess$$SaveData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x425e61c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderDataTracking__TrackCheckpointStart(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_09516f6f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_09195c78);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4a60);
    FUN_03f5c2a4(&DAT_091fe890);
    DAT_09516f6f = 1;
  }
  if (param_2 != 0) {
    if ((*(int *)(param_2 + 0x38) != 1) || (uVar2 = FUN_05a8eda4(DAT_091b4a60), (uVar2 & 1) == 0)) {
      return;
    }
    lVar3 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
    lVar3 = **(long **)(lVar3 + 0xb8);
    if (*(int *)(DAT_09182280 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182280);
    }
    uVar4 = CakeOrder_CakeOrderDataTracking__CheckpointKey(DAT_091fe890,uVar1);
    if (lVar3 != 0) {
      uVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__IsHaveKey
                        (lVar3,*(undefined8 *)(param_2 + 0x10),uVar4,0);
      if ((uVar2 & 1) != 0) {
        return;
      }
      lVar5 = thunk_FUN_03f9944c(DAT_09195c78);
      IapAdsSystem_UserAnalyticsState_CheckpointEvent___ctor(lVar5,0);
      if (*(int *)(DAT_09182280 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
      if ((lVar6 != 0) && (lVar5 != 0)) {
        *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar6 + 0x18);
        thunk_FUN_03f5d7b8();
        if (param_1 != 0) {
          uVar1 = IapAdsSystem_DataTrackingManager__get_RetentionDay(param_1,0);
          *(undefined4 *)(lVar5 + 0x20) = uVar1;
          IapAdsSystem_DataTrackingManager__RecordCheckpoint(param_1,lVar5,0);
          CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__SetKey
                    (lVar3,*(undefined8 *)(param_2 + 0x10),uVar4,0);
          CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__SaveData(lVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


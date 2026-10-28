// rea decompile_all
// name: CakeOrder.CakeOrderDataTracking$$CompleteLevel
// address: 0x425f65c
// body: available
// range: 0x425f65c-0x425f967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425f960 to 0x7308978 IapAdsSystem.DataTrackingManager$$RecordLevelEnded (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x425f964 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderDataTracking__CompleteLevel(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_09516f67 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_091b4b28);
    FUN_03f5c2a4(&DAT_091b4928);
    FUN_03f5c2a4(&DAT_091b4930);
    FUN_03f5c2a4(&DAT_091b4b30);
    FUN_03f5c2a4(&DAT_09225818);
    FUN_03f5c2a4(&DAT_0921ec10);
    FUN_03f5c2a4(&DAT_0921e708);
    FUN_03f5c2a4(&DAT_09222dd0);
    DAT_09516f67 = 1;
  }
  uVar4 = FUN_05a8eda4(DAT_091b4930);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
  if (lVar7 == 0) {
    return;
  }
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar7 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
    if (lVar7 == 0) goto LAB_0425f964;
  }
  if (*(char *)(lVar7 + 0x4c) != '\0') {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar7 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
    if (lVar7 == 0) goto LAB_0425f964;
  }
  lVar5 = *(long *)(DAT_091b4928 + 0x20);
  *(undefined1 *)(lVar7 + 0x4c) = 1;
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  lVar7 = **(long **)(lVar7 + 0xb8);
  uVar4 = FUN_05a8eda4(DAT_091b4b30);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    lVar5 = FUN_039af8ec(DAT_091b4b28);
    if (*(int *)(DAT_09182280 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182280);
    }
    lVar8 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
    if (((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x10), lVar8 == 0)) || (lVar5 == 0))
    goto LAB_0425f964;
    uVar3 = CakeOrder_WinStreakControl__RecordLevelResult
                      (lVar5,*(undefined4 *)(lVar8 + 0x40),*(undefined4 *)(param_1 + 0x10),0);
  }
  puVar2 = &DAT_09222dd0;
  if (*(int *)(param_1 + 0x10) != 3) {
    puVar2 = &DAT_09225818;
  }
  puVar1 = &DAT_0921ec10;
  if (*(int *)(param_1 + 0x10) != 1) {
    puVar1 = puVar2;
  }
  uVar9 = *puVar1;
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = CakeOrder_CakeOrderDataTracking__CreateLevelEndParameters(uVar9,param_1,0,uVar3,0);
  if (lVar7 != 0) {
    IapAdsSystem_DataTrackingManager__LogEvent(lVar7,DAT_0921e708,uVar6,0);
    uVar4 = System_String__op_Equality(uVar9,DAT_09225818,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_09182280 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      CakeOrder_CakeOrderDataTracking__TrackCheckpointEnd(lVar7,param_1);
    }
    uVar4 = System_String__op_Equality(uVar9,DAT_09225818,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_09182280 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      CakeOrder_CakeOrderDataTracking__TrackAppsFlyerLevelAchieved(lVar7);
    }
    if (*(int *)(DAT_09182280 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    CakeOrder_CakeOrderDataTracking__RefreshCompletedProgress();
    IapAdsSystem_DataTrackingManager__EndLevelContext(lVar7,0);
    puVar2 = &DAT_0921ec10;
    if (*(int *)(param_1 + 0x10) != 1) {
      puVar2 = &DAT_09225818;
    }
    IapAdsSystem_DataTrackingManager__RecordLevelEnded(lVar7,*puVar2,0);
    return;
  }
LAB_0425f964:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: CakeOrder.CakeOrderDataTracking$$TrackCheckpointEnd
// address: 0x42600a4
// body: available
// range: 0x42600a4-0x42603af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42603a8 to 0x427f344 CakeOrder.SaveProfile.PlayerMapLevelProgressDataAccess$$SaveData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42603ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderDataTracking__TrackCheckpointEnd(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double __x;
  float fVar11;
  double local_58;
  
  if ((DAT_09516f70 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_09195c78);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4a60);
    FUN_03f5c2a4(&DAT_091fe888);
    DAT_09516f70 = 1;
  }
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar8 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
  if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x10), lVar8 == 0)) goto LAB_042603ac;
  if ((*(char *)(lVar8 + 0x3c) != '\0') || (uVar4 = FUN_05a8eda4(DAT_091b4a60), (uVar4 & 1) == 0)) {
    return;
  }
  lVar5 = *(long *)(DAT_091b4a58 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  uVar3 = *(undefined4 *)(lVar8 + 0x1c);
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182280);
  }
  uVar6 = CakeOrder_CakeOrderDataTracking__CheckpointKey(DAT_091fe888,uVar3);
  if (lVar5 == 0) goto LAB_042603ac;
  uVar4 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__IsHaveKey
                    (lVar5,*(undefined8 *)(lVar8 + 0x10),uVar6,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar7 = thunk_FUN_03f9944c(DAT_09195c78);
  IapAdsSystem_UserAnalyticsState_CheckpointEvent___ctor(lVar7,0);
  lVar9 = DAT_09182280;
  if (lVar7 == 0) goto LAB_042603ac;
  *(undefined1 *)(lVar7 + 0x10) = 1;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar9 = DAT_09182280;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
  if (lVar9 == 0) goto LAB_042603ac;
  *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
  thunk_FUN_03f5d7b8();
  if (param_1 == 0) goto LAB_042603ac;
  uVar3 = IapAdsSystem_DataTrackingManager__get_RetentionDay(param_1,0);
  uVar2 = *(int *)(lVar8 + 0x38) - 1;
  *(undefined4 *)(lVar7 + 0x20) = uVar3;
  *(uint *)(lVar7 + 0x24) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  if (param_2 == 0) goto LAB_042603ac;
  fVar11 = *(float *)(param_2 + 0x18);
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  __x = (double)fVar11;
  dVar10 = modf(__x,&local_58);
  if (0.0 <= fVar11) {
    if (dVar10 == 0.5) {
      dVar10 = 1.0;
      goto LAB_04260304;
    }
    local_58 = (double)(long)(__x + 0.5);
  }
  else if (dVar10 == -0.5) {
    dVar10 = -1.0;
LAB_04260304:
    if (((long)local_58 & 1U) != 0) {
      local_58 = local_58 + dVar10;
    }
  }
  else {
    local_58 = (double)(long)(__x + -0.5);
  }
  lVar9 = *(long *)(param_1 + 0x20);
  iVar1 = -0x80000000;
  if (local_58 != INFINITY) {
    iVar1 = (int)local_58;
  }
  *(int *)(lVar7 + 0x28) = iVar1;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar7 + 0x2c) = *(undefined8 *)(lVar9 + 0x48);
    uVar3 = IapAdsSystem_DataTrackingManager_GameStateTrackingDatas__get_AdsInLevelCount(lVar9,0);
    *(undefined4 *)(lVar7 + 0x34) = uVar3;
    IapAdsSystem_DataTrackingManager__RecordCheckpoint(param_1,lVar7,0);
    CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__SetKey
              (lVar5,*(undefined8 *)(lVar8 + 0x10),uVar6,0);
    CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__SaveData(lVar5,0);
    return;
  }
LAB_042603ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


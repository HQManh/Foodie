// rea decompile_all
// name: CakeOrder.CakeOrderDataTracking$$BeginLevel
// address: 0x425d7a4
// body: available
// range: 0x425d7a4-0x425dabf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425dabc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderDataTracking__BeginLevel(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  if ((DAT_09516f5f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ea88);
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_09182c40);
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_091b4928);
    FUN_03f5c2a4(&DAT_091b4930);
    FUN_03f5c2a4(&DAT_0921e750);
    DAT_09516f5f = 1;
  }
  uVar4 = FUN_05a8eda4(DAT_091b4930);
  if ((param_1 == 0) || ((uVar4 & 1) == 0)) {
    return;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_0918ea88);
  CakeOrder_CakeOrderDataTracking_ActiveLevelSession___ctor();
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar5 + 0x10),param_1);
    if (*(int *)(DAT_09182280 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = CakeOrder_CakeOrderDataTracking__LevelIdOf(param_1);
    *(undefined8 *)(lVar5 + 0x18) = uVar6;
    thunk_FUN_03f5d7b8();
    uVar6 = CakeOrder_LevelDataHasher__ComputeHash(param_1,0);
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x20),uVar6);
    uVar3 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__LevelAccumulatedOf(param_1,0);
    *(undefined4 *)(lVar5 + 0x28) = uVar3;
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182cc0);
    }
    if (DAT_09516604 == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09516604 = '\x01';
    }
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = *(long *)(DAT_09182280 + 0xb8);
    *(undefined1 *)(lVar5 + 0x4d) = *(undefined1 *)(*(long *)(DAT_09182cc0 + 0xb8) + 9);
    plVar8 = (long *)(lVar7 + 8);
    *plVar8 = lVar5;
    thunk_FUN_03f5d7b8(plVar8,lVar5);
    lVar5 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
    uVar6 = CakeOrder_CakeOrderDataTracking__CreateInventorySnapshot();
    if (lVar5 != 0) {
      puVar10 = (undefined8 *)(lVar5 + 0x30);
      *puVar10 = uVar6;
      thunk_FUN_03f5d7b8(puVar10,uVar6);
      lVar5 = *(long *)(DAT_091b4928 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
      CakeOrder_CakeOrderDataTracking__RefreshCompletedProgress();
      if (lVar5 != 0) {
        local_58 = *(undefined4 *)(param_1 + 0x20);
        lVar11 = *(long *)(lVar5 + 0x20);
        local_68 = DAT_09182c40;
        uStack_60 = 0xffffffffffffffff;
        lVar7 = System_Enum__ToString(&local_68,0);
        if (lVar7 != 0) {
          uVar6 = System_String__ToLowerInvariant(lVar7,0);
          lVar7 = *(long *)(DAT_09182280 + 0xb8);
          lVar9 = *(long *)(lVar7 + 8);
          if (lVar9 != 0) {
            lVar12 = *(long *)(param_1 + 0x10);
            if (lVar12 == 0) {
              lVar12 = **(long **)(DAT_09535468 + 0xb8);
            }
            uVar1 = *(undefined8 *)(lVar9 + 0x18);
            uVar2 = *(undefined8 *)(lVar9 + 0x20);
            uVar3 = *(undefined4 *)(param_1 + 0x1c);
            if (*(int *)(DAT_09182280 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09182280);
              lVar7 = *(long *)(DAT_09182280 + 0xb8);
            }
            if ((*(long *)(lVar7 + 8) != 0) && (lVar11 != 0)) {
              IapAdsSystem_DataTrackingManager_GameStateTrackingDatas__SetLevelContext
                        (lVar11,uVar6,uVar1,uVar2,lVar12,uVar3,
                         *(undefined4 *)(*(long *)(lVar7 + 8) + 0x28),0);
              IapAdsSystem_DataTrackingManager__RecordLevelStarted
                        (lVar5,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0);
              uVar6 = CakeOrder_CakeOrderDataTracking__CreateLevelContext(param_1);
              IapAdsSystem_DataTrackingManager__LogEvent(lVar5,DAT_0921e750,uVar6,0);
              CakeOrder_CakeOrderDataTracking__TrackCheckpointStart(lVar5,param_1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: CakeOrder.Home.Journey.JourneyProgress$$HasUnlockAvailable
// address: 0x4354648
// body: available
// range: 0x4354648-0x4354927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4354924 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_Home_Journey_JourneyProgress__HasUnlockAvailable(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  if ((DAT_095177d2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4948);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4950);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095177d2 = 1;
  }
  local_48 = 0;
  lVar4 = *(long *)(DAT_091b4a58 + 0x20);
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar5 = UnityEngine_Object__op_Equality(lVar4,0,0);
  if ((uVar5 & 1) == 0) {
    if (lVar4 == 0) {
LAB_04354924:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__get_IsDataAvailable(lVar4,0);
    if ((((uVar5 & 1) != 0) && (uVar5 = FUN_05a8f088(DAT_091b4b68), (uVar5 & 1) != 0)) &&
       (uVar5 = FUN_05a8eda4(DAT_091b4950), (uVar5 & 1) != 0)) {
      lVar6 = *(long *)(DAT_091b4b60 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar8 = **(long **)(lVar6 + 0xb8);
      lVar6 = CakeOrder_Home_Journey_JourneyLevelMap__get_Instance();
      if (lVar8 == 0) goto LAB_04354924;
      iVar1 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(lVar8,0);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          lVar7 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO(lVar8,iVar1,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar5 = UnityEngine_Object__op_Equality(lVar7,0,0);
          if ((uVar5 & 1) == 0) {
            if (lVar7 == 0) goto LAB_04354924;
            if (*(int *)(lVar7 + 0x54) == 3) {
              uVar9 = *(undefined8 *)(lVar7 + 0x18);
              uVar5 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__IsMapUnlocked
                                (lVar4,uVar9,0);
              if ((uVar5 & 1) == 0) {
                uVar5 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__IsMapUnlockable
                                  (lVar4,iVar1,0);
                if ((uVar5 & 1) != 0) {
                  return 1;
                }
              }
              else {
                if (lVar6 == 0) goto LAB_04354924;
                uVar5 = CakeOrder_Home_Journey_JourneyLevelMap__TryGetRange(lVar6,uVar9,&local_70);
                if ((((uVar5 & 1) != 0) && (iVar3 = *(int *)(lVar7 + 0x50), 0 < iVar3)) &&
                   ((iVar3 < uStack_68._4_4_ &&
                    ((iVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetMaxLevelIndexFinishedInMap
                                        (lVar4,uVar9,0), iVar3 <= iVar2 + 1 &&
                     (uVar5 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__IsExtraLevelUnlocked
                                        (lVar4,uVar9,0), (uVar5 & 1) == 0)))))) {
                  lVar7 = FUN_039af8ec(DAT_091b4948);
                  if (lVar7 == 0) goto LAB_04354924;
                  uVar5 = CakeOrder_CakeOrderSubsystem_GameProgressScenario__TryGetExtraLevelLock
                                    (lVar7,uVar9,iVar3,(long)&local_48 + 4,&local_48,0);
                  if ((uVar5 & 1) == 0) {
                    return 1;
                  }
                }
              }
            }
          }
          iVar1 = iVar1 + 1;
          iVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(lVar8,0);
        } while (iVar1 < iVar3);
      }
    }
  }
  return 0;
}


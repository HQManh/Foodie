// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder$$IsAllPlayableMapsDone
// address: 0x43023fc
// body: available
// range: 0x43023fc-0x43025c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43025c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 CakeOrder_Home_HomeControllerCookOrder__IsAllPlayableMapsDone(ulong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined4 uVar9;
  
  if ((DAT_09517558 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517558 = 1;
  }
  lVar4 = *(long *)(DAT_091b4b60 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar7 = *(long *)(DAT_091b4a58 + 0x20);
  lVar4 = **(long **)(lVar4 + 0xb8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if (lVar4 == 0) {
LAB_043025c4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar7 = **(long **)(lVar7 + 0xb8);
  iVar1 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(lVar4,0);
  if (iVar1 < 1) {
LAB_043025a8:
    uVar9 = 0;
  }
  else {
    iVar1 = 0;
    uVar9 = 0;
    do {
      lVar5 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO(lVar4,iVar1,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar6 = UnityEngine_Object__op_Equality(lVar5,0,0);
      if ((uVar6 & 1) == 0) {
        if (lVar5 == 0) goto LAB_043025c4;
        if (*(int *)(lVar5 + 0x54) == 3) {
          if ((param_1 & 1) == 0) {
            piVar8 = (int *)(lVar5 + 0x50);
            if (*(int *)(lVar5 + 0x50) < 1) {
              piVar8 = (int *)(lVar5 + 0x4c);
            }
          }
          else {
            piVar8 = (int *)(lVar5 + 0x4c);
          }
          if (lVar7 == 0) goto LAB_043025c4;
          iVar3 = *piVar8;
          iVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetMaxLevelIndexFinishedInMap
                            (lVar7,*(undefined8 *)(lVar5 + 0x18),0);
          if (iVar2 + 1 < iVar3) goto LAB_043025a8;
          uVar9 = 1;
        }
      }
      iVar1 = iVar1 + 1;
      iVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(lVar4,0);
    } while (iVar1 < iVar3);
  }
  return uVar9;
}


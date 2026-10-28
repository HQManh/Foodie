// rea decompile_all
// name: CakeOrder.Home.Journey.JourneyLevelMap$$ComputeFingerprint
// address: 0x43522e4
// body: available
// range: 0x43522e4-0x4352453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4352450 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int CakeOrder_Home_Journey_JourneyLevelMap__ComputeFingerprint(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_095177c4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095177c4 = 1;
  }
  uVar4 = FUN_05a8f088(DAT_091b4b68);
  if ((uVar4 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    lVar5 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    if (lVar5 == 0) {
LAB_04352450:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(lVar5,0);
    iVar2 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(lVar5,0);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        uVar6 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId(lVar5,iVar2,0);
        lVar7 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO(lVar5,uVar6,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar4 = UnityEngine_Object__op_Inequality(lVar7,0,0);
        if ((uVar4 & 1) == 0) {
          iVar3 = 0;
        }
        else {
          if (lVar7 == 0) goto LAB_04352450;
          iVar3 = *(int *)(lVar7 + 0x4c);
        }
        iVar1 = iVar3 + iVar1 * 0x18d;
        iVar2 = iVar2 + 1;
        iVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(lVar5,0);
      } while (iVar2 < iVar3);
    }
  }
  return iVar1;
}


// rea decompile_all
// name: CakeOrder.Home.HomeSelectionControl$$CanShowMap
// address: 0x430f7c4
// body: available
// range: 0x430f7c4-0x430f8fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x430f8f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CakeOrder_Home_HomeSelectionControl__CanShowMap(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((DAT_095175c5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095175c5 = 1;
  }
  if (param_2 < 0) {
    return false;
  }
  lVar2 = *(long *)(DAT_091b4b60 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    iVar1 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(**(long **)(lVar2 + 0xb8),0);
    if (iVar1 <= param_2) {
      return false;
    }
    lVar2 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) != 0) {
      lVar2 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO(**(long **)(lVar2 + 0xb8),param_2,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Inequality(lVar2,0,0);
      if ((uVar3 & 1) == 0) {
        return false;
      }
      if (lVar2 != 0) {
        return (*(uint *)(lVar2 + 0x54) & 0xfffffffe) == 2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


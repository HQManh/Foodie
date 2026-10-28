// rea decompile_all
// name: CakeOrder.SaveProfile.PlayerMapLevelProgressDataAccess$$GetLevelIndexToShow
// address: 0x428356c
// body: available
// range: 0x428356c-0x42836a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42836a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetLevelIndexToShow
              (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_0951710e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951710e = 1;
  }
  iVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetHighestLevelPlayableData
                    (param_1,param_2);
  lVar4 = *(long *)(DAT_091b4b60 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    lVar4 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO(**(long **)(lVar4 + 0xb8),param_2,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Equality(lVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if (lVar4 == 0) goto LAB_042836a0;
      iVar1 = *(int *)(lVar4 + 0x50);
      if ((((0 < iVar1) && (iVar1 < *(int *)(lVar4 + 0x4c))) && (iVar2 < iVar1)) &&
         ((lVar4 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetLevelData
                             (param_1,param_2,iVar1 + -1), lVar4 != 0 &&
          (2 < *(int *)(lVar4 + 0x14))))) {
        return iVar1;
      }
    }
    return iVar2;
  }
LAB_042836a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


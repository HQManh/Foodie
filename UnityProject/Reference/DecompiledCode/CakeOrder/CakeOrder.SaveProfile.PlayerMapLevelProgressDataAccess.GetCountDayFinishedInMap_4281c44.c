// rea decompile_all
// name: CakeOrder.SaveProfile.PlayerMapLevelProgressDataAccess$$GetCountDayFinishedInMap
// address: 0x4281c44
// body: available
// range: 0x4281c44-0x4281ce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4281ce0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetCountDayFinishedInMap
          (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  
  if ((DAT_095170fd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a04d0);
    FUN_03f5c2a4(&DAT_091b9d80);
    DAT_095170fd = 1;
  }
  local_28 = 0;
  if (((*(long *)(param_1 + 0x20) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x48), lVar3 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)) {
    uVar2 = FUN_06fd9fbc(lVar3,param_2,&local_28,DAT_091a04d0);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      if (local_28 == 0) goto LAB_04281ce0;
      uVar1 = *(undefined4 *)(local_28 + 0x38);
    }
    return uVar1;
  }
LAB_04281ce0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


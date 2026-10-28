// rea decompile_all
// name: CakeOrder.MapLevelMetadataConfig$$GetLevelConfig
// address: 0x426e238
// body: available
// range: 0x426e238-0x426e367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x426e354 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x426e358 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x426e364 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_MapLevelMetadataConfig__GetLevelConfig(long param_1,uint param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint local_24;
  
  if ((DAT_09516fff & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09206cd0);
    DAT_09516fff = 1;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    if ((int)param_2 < (int)*(uint *)(lVar4 + 0x18)) {
      if (*(uint *)(lVar4 + 0x18) <= param_2) {
LAB_0426e358:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar1 = *(undefined8 *)(lVar4 + (long)(int)param_2 * 8 + 0x20);
    }
    else {
      plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
      local_24 = param_2;
      lVar4 = FUN_03f5c42c(DAT_09535420,&local_24);
      if (plVar2 == (long *)0x0) goto LAB_0426e354;
      if ((lVar4 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
        uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar1,0);
      }
      if ((int)plVar2[3] == 0) goto LAB_0426e358;
      plVar2[4] = lVar4;
      thunk_FUN_03f5d7b8(plVar2 + 4,lVar4);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarningFormat(DAT_09206cd0,plVar2,0);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
    }
    return uVar1;
  }
LAB_0426e354:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: IapAdsSystem.MulticallAdsLoader.<<TryPreloadNext>g__IEWaitReload|15_1>d$$MoveNext
// address: 0x7307d30
// body: available
// range: 0x7307d30-0x7307dd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7307dd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
IapAdsSystem_MulticallAdsLoader_<<TryPreloadNext>g__IEWaitReload_15_1>d__MoveNext(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = UnityEngine_Time__get_realtimeSinceStartup(0);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
  }
  fVar3 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  if (lVar1 != 0) {
    if (*(float *)(lVar1 + 0x24) <= fVar3 - *(float *)(param_1 + 0x28)) {
      *(undefined8 *)(lVar1 + 0x30) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30),0);
      IapAdsSystem_MulticallAdsLoader__<TryPreloadNext>g__Load_15_0(lVar1);
      return 0;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


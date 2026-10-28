// rea decompile_all
// name: AppsFlyerSDK.DeepLinkEventsArgs$$isDeferred
// address: 0x4068044
// body: available
// range: 0x4068044-0x406810f inclusive
// range: 0x4068198-0x40681a7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4068104 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4068108 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x406810c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AppsFlyerSDK_DeepLinkEventsArgs__isDeferred(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  char *pcVar4;
  
  if ((DAT_09515c03 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fb80);
    FUN_03f5c2a4(&DAT_0919fbb0);
    FUN_03f5c2a4(&DAT_0921da98);
    DAT_09515c03 = 1;
  }
  bVar1 = false;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = FUN_06fd8648(*(long *)(param_1 + 0x10),DAT_0921da98,DAT_0919fb80);
    if ((uVar2 & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar3 = (long *)FUN_06fd83d4(*(long *)(param_1 + 0x10),DAT_0921da98,DAT_0919fbb0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(*plVar3 + 0x40) != *(long *)(DAT_09535400 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      pcVar4 = (char *)thunk_FUN_03f99594();
      bVar1 = *pcVar4 != '\0';
    }
  }
  return bVar1;
}


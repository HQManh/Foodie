// rea decompile_all
// name: KienUtilities.EventManager$$GetBool
// address: 0x4250b44
// body: available
// range: 0x4250b44-0x4250c43 inclusive
// range: 0x4250c8c-0x4250c9b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4250c34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4250c38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4250c3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4250c40 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool KienUtilities_EventManager__GetBool(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  char *pcVar5;
  
  if ((DAT_09516ed3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fb80);
    FUN_03f5c2a4(&DAT_0919fbb0);
    FUN_03f5c2a4(&DAT_09184240);
    DAT_09516ed3 = 1;
  }
  if (*(int *)(DAT_09184240 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(DAT_09184240 + 0xb8) + 0x18);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = FUN_06fd8648(lVar2,param_1,DAT_0919fb80);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    if (*(int *)(DAT_09184240 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(*(long *)(DAT_09184240 + 0xb8) + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar4 = (long *)FUN_06fd83d4(lVar2,param_1,DAT_0919fbb0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(*plVar4 + 0x40) != *(long *)(DAT_09535400 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
    pcVar5 = (char *)thunk_FUN_03f99594();
    bVar1 = *pcVar5 != '\0';
  }
  return bVar1;
}


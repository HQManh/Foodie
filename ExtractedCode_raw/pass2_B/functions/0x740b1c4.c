// rea decompile_all
// name: Mono.Security.Authenticode.AuthenticodeBase$$GetSecurityEntry
// address: 0x740b1c4
// body: available
// range: 0x740b1c4-0x740b293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740b290 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Security_Authenticode_AuthenticodeBase__GetSecurityEntry(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if ((DAT_09520ee0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09520ee0 = 1;
  }
  if (*(int *)(param_1 + 0x20) < 1) {
    Mono_Security_Authenticode_AuthenticodeBase__ReadFirstBlock(param_1);
  }
  if (*(int *)(param_1 + 0x30) < 9) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_03f5c394(DAT_0917fc88,*(int *)(param_1 + 0x30) + -8);
    plVar2 = *(long **)(param_1 + 0x18);
    if (((plVar2 == (long *)0x0) ||
        ((**(code **)(*plVar2 + 0x218))
                   (plVar2,(long)(*(int *)(param_1 + 0x2c) + 8),*(undefined8 *)(*plVar2 + 0x220)),
        lVar1 == 0)) || (plVar2 = *(long **)(param_1 + 0x18), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar2 + 0x368))
              (plVar2,lVar1,0,*(undefined4 *)(lVar1 + 0x18),*(undefined8 *)(*plVar2 + 0x370));
  }
  return lVar1;
}


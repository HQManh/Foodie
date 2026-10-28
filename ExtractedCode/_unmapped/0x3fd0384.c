// rea decompile_all
// name: FUN_03fd0384
// address: 0x3fd0384
// body: available
// range: 0x3fd0384-0x3fd0407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd0404 to 0x3fcb51c FUN_03fcb51c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd0384(void)

{
  long lVar1;
  long lVar2;
  
  FUN_03fcb51c("%lu finalization entries; %lu/%lu short/long disappearing links alive\n",
               DAT_09748610,DAT_095156b0,DAT_095156c8);
  if (DAT_097486e0 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    lVar2 = DAT_097486e0;
    do {
      lVar2 = *(long *)(lVar2 + 8);
      lVar1 = lVar1 + 1;
    } while (lVar2 != 0);
  }
  FUN_03fcb51c("%lu finalization-ready objects; %ld/%ld short/long links cleared\n",lVar1,
               DAT_09748718 - DAT_095156b0,DAT_09748720 - DAT_095156c8);
  return;
}


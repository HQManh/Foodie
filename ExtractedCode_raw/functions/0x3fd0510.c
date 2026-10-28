// rea decompile_all
// name: FUN_03fd0510
// address: 0x3fd0510
// body: available
// range: 0x3fd0510-0x3fd05f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd0510(void)

{
  int iVar1;
  undefined1 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_097486e0 != 0) {
    if (DAT_097480e0 != 0) {
      iVar1 = FUN_0404be40(1,&DAT_097480e8);
      if (iVar1 != 0) {
        FUN_03fcbfa4();
      }
      if (DAT_097486e0 == 0) {
        if (DAT_097480e0 == 0) {
          return;
        }
        DAT_097480e8 = 0;
        return;
      }
    }
    if (DAT_09748730 == 0) {
      puVar2 = (undefined1 *)FUN_03fd2fac();
      if (DAT_097480e0 != 0) {
        DAT_097480e8 = 0;
      }
      if (puVar2 != (undefined1 *)0x0) {
        FUN_03fd2e70();
        *puVar2 = 0;
      }
    }
    else {
      if (DAT_09748738 == DAT_09748118) {
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
      else {
        DAT_09748738 = DAT_09748118;
        UNRECOVERED_JUMPTABLE = DAT_09748740;
      }
      if (DAT_097480e0 != 0) {
        DAT_097480e8 = 0;
      }
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03fd05d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
  }
  return;
}


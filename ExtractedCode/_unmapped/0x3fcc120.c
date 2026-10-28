// rea decompile_all
// name: FUN_03fcc120
// address: 0x3fcc120
// body: available
// range: 0x3fcc120-0x3fcc173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fcc170 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_03fcc120(undefined *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = DAT_09515690;
  uVar2 = (ulong)DAT_09515690;
  if (DAT_09515690 < 0x10) {
    DAT_09515690 = DAT_09515690 + 1;
    (&PTR_DAT_095156e0)[uVar2 * 4] = param_1;
    (&DAT_095156e8)[uVar2 * 4] = 0;
    (&DAT_095156f0)[uVar2 * 4] = param_2;
    *(undefined4 *)(&DAT_095156f8 + uVar2 * 0x20) = param_3;
    *(undefined4 *)(&DAT_095156fc + uVar2 * 0x20) = param_4;
    return uVar1;
  }
  (*(code *)PTR_FUN_09515620)("Too many kinds");
                    /* WARNING: Subroutine does not return */
  abort();
}


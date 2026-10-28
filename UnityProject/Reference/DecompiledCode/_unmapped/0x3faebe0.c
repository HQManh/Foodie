// rea decompile_all
// name: FUN_03faebe0
// address: 0x3faebe0
// body: available
// range: 0x3faebe0-0x3faec6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3faec68 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03faebe0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_20 [8];
  undefined8 local_18;
  
  local_18 = param_1;
  FUN_03f5d894(auStack_20,&DAT_09535278);
  if (DAT_09535300 != '\x01') {
    FUN_03faf334(DAT_095352f8,&local_18);
    FUN_03f5d7b8(*DAT_095352f8,DAT_095352f8[1] - *DAT_095352f8);
    FUN_03f5d920(auStack_20);
    return;
  }
  uVar1 = __cxa_allocate_exception(1);
  uVar1 = __cxa_throw(uVar1,&PTR_PTR_08fa9500,0);
  FUN_03f5d920(auStack_20);
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar1);
}


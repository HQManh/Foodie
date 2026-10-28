// rea decompile_all
// name: System.Text.UTF8Encoding$$SetDefaultFallbacks
// address: 0x7444f3c
// body: available
// range: 0x7444f3c-0x744501b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7445018 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_UTF8Encoding__SetDefaultFallbacks(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_09521097 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183818);
    FUN_03f5c2a4(&DAT_09183fa8);
    FUN_03f5c2a4(&DAT_092272b8);
    DAT_09521097 = 1;
  }
  if (*(char *)(param_1 + 0x39) == '\0') {
    uVar1 = thunk_FUN_03f9944c(DAT_09183fa8);
    System_Text_EncoderReplacementFallback___ctor(uVar1,DAT_092272b8);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar1);
    uVar1 = thunk_FUN_03f9944c(DAT_09183818);
    System_Text_DecoderReplacementFallback___ctor(uVar1,DAT_092272b8);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  else {
    uVar1 = System_Text_EncoderFallback__get_ExceptionFallback();
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    thunk_FUN_03f5d7b8();
    uVar1 = System_Text_DecoderFallback__get_ExceptionFallback(0);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  thunk_FUN_03f5d7b8(param_1 + 0x30,uVar1);
  return;
}


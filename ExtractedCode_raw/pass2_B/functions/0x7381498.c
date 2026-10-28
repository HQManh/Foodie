// rea decompile_all
// name: Nerdbank.Streams.Requires$$Range
// address: 0x7381498
// body: available
// range: 0x7381498-0x73814af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Nerdbank_Streams_Requires__Range(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((param_1 & 1) != 0) {
    return;
  }
  auVar4 = Nerdbank_Streams_Requires__FailRange(param_2,param_3);
  uVar1 = System_String__IsNullOrEmpty(auVar4._8_8_,0);
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar2 = thunk_FUN_03f9944c();
  if ((uVar1 & 1) == 0) {
    System_ArgumentOutOfRangeException___ctor(uVar2,auVar4._0_8_,auVar4._8_8_,0);
  }
  else {
    System_ArgumentOutOfRangeException___ctor(uVar2,auVar4._0_8_,0);
  }
  uVar3 = thunk_FUN_03fc39d4(&DAT_091d7a50);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}


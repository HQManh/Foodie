// rea decompile_all
// name: System.TimeZoneInfo$$TryLoadTzFile
// address: 0x750e794
// body: available
// range: 0x750e794-0x750e87b inclusive
// range: 0x750e904-0x750e917 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_TimeZoneInfo__TryLoadTzFile(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((DAT_095216d8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_095216d8 = 1;
  }
  uVar1 = System_IO_File__Exists(param_1,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = System_IO_File__ReadAllBytes(param_1,0);
    *param_2 = uVar2;
    thunk_FUN_03f5d7b8(param_2);
    uVar1 = System_String__IsNullOrEmpty(*param_3,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_TimeZoneInfo__FindTimeZoneIdUsingReadLink(param_1);
      *param_3 = uVar2;
      thunk_FUN_03f5d7b8(param_3);
      uVar1 = System_String__IsNullOrEmpty(*param_3,0);
      if ((uVar1 & 1) != 0) {
        uVar2 = *param_2;
        if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_TimeZoneInfo__FindTimeZoneId(uVar2);
        *param_3 = uVar2;
        thunk_FUN_03f5d7b8(param_3);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


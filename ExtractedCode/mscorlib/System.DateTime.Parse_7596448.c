// rea decompile_all
// name: System.DateTime$$Parse
// address: 0x7596448
// body: available
// range: 0x7596448-0x759652b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x759648c to 0x75c7dec System.ThrowHelper$$ThrowArgumentNullException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7596528 to 0x759652c System.DateTimeParse$$Parse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_DateTime__Parse(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if ((DAT_09521ba6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183570);
    FUN_03f5c2a4(&DAT_091835a8);
    DAT_09521ba6 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException(0x30,0);
  }
  if (DAT_09519f66 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09519f66 = '\x01';
  }
  if (param_1 == 0) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    uVar1 = System_String__GetRawStringData(param_1,0);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
  }
  if (*(int *)(DAT_09183570 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Globalization_DateTimeFormatInfo__get_CurrentInfo(0);
  if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835a8);
  }
  System_DateTimeParse__Parse(uVar1,uVar3,uVar2,0);
  return;
}


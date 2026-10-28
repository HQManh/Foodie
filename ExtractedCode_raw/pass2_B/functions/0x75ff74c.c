// rea decompile_all
// name: System.ConsoleDriver$$.cctor
// address: 0x75ff74c
// body: available
// range: 0x75ff74c-0x75ff81b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ff80c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_ConsoleDriver___cctor(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_09521fcc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182a38);
    FUN_03f5c2a4(&DAT_0920e370);
    FUN_03f5c2a4(&DAT_0921aac0);
    DAT_09521fcc = 1;
  }
  uVar2 = System_ConsoleDriver__get_IsConsole();
  if ((uVar2 & 1) != 0) {
    iVar1 = FUN_03f72cfc();
    if (iVar1 < 4) {
      uVar3 = System_ConsoleDriver__CreateWindowsConsoleDriver();
      goto LAB_075ff7ec;
    }
    uVar3 = System_Environment__internalGetEnvironmentVariable(DAT_0920e370);
    uVar2 = System_String__op_Equality(uVar3,DAT_0921aac0,0);
    if ((uVar2 & 1) == 0) {
      uVar3 = System_ConsoleDriver__CreateTermInfoDriver(uVar3);
      goto LAB_075ff7ec;
    }
    *(undefined1 *)(*(long *)(DAT_09182a38 + 0xb8) + 8) = 0;
  }
  uVar3 = System_ConsoleDriver__CreateNullConsoleDriver();
LAB_075ff7ec:
  **(undefined8 **)(DAT_09182a38 + 0xb8) = uVar3;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09182a38 + 0xb8),uVar3);
  return;
}


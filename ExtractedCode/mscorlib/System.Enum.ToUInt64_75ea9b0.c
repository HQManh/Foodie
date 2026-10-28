// rea decompile_all
// name: System.Enum$$ToUInt64
// address: 0x75ea9b0
// body: available
// range: 0x75ea9b0-0x75eab1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75eaa74 to 0x7526638 System.Convert$$ToUInt64 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75eaac8 to 0x752614c System.Convert$$ToInt64 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75eab18 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Enum__ToUInt64(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_09521ef9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    DAT_09521ef9 = 1;
  }
  if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Convert__GetTypeCode(param_1,0);
  if (uVar1 < 0xd) {
    uVar1 = 1 << (ulong)(uVar1 & 0x1f);
    if ((uVar1 & 0x1558) != 0) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      System_Convert__ToUInt64(param_1,uVar2,0);
      return;
    }
    if ((uVar1 & 0xaa0) != 0) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      System_Convert__ToInt64(param_1,uVar2,0);
      return;
    }
  }
  uVar2 = thunk_FUN_03fc39d4(&DAT_092123c8);
  uVar2 = System_Environment__GetResourceString(uVar2,0);
  thunk_FUN_03fc39d4(&DAT_091870e0);
  uVar3 = thunk_FUN_03f9944c();
  System_InvalidOperationException___ctor(uVar3,uVar2,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091c9080);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}


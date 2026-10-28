// rea decompile_all
// name: System.IO.PathInternal$$TrimEndingDirectorySeparator
// address: 0x7566538
// body: available
// range: 0x7566538-0x756661b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75665e4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
System_IO_PathInternal__TrimEndingDirectorySeparator(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_09521a05 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f58);
    FUN_03f5c2a4(&DAT_091b97e8);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521a05 = 1;
  }
  if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_IO_PathInternal__EndsInDirectorySeparator(param_1,param_2);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_IO_PathInternal__IsRoot(param_1,param_2);
    if ((uVar1 & 1) == 0) {
      if ((int)param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      param_2 = param_2 + 0xffffffff & 0xffffffff;
    }
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}


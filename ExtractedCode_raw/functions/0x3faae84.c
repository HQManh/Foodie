// rea decompile_all
// name: FUN_03faae84
// address: 0x3faae84
// body: available
// range: 0x3faae84-0x3faaee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3faaec4 to 0x3faa85c FUN_03faa85c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined ** FUN_03faae84(ulong param_1)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined1 auStack_28 [24];
  
  uVar2 = (uint)(param_1 >> 0x1d) & 7;
  if ((param_1 >> 0x1d & 7) == 0) {
    ppuVar1 = &PTR_LAB_08fa97e0;
    if (((uint)param_1 >> 1 & 0xfffffff) != 1) {
      ppuVar1 = (undefined **)0x0;
    }
    return ppuVar1;
  }
  if (uVar2 != 3) {
    if (uVar2 == 6) {
      FUN_03fac69c(auStack_28);
      ppuVar1 = (undefined **)FUN_03f7b068(auStack_28);
      return ppuVar1;
    }
    return (undefined **)0x0;
  }
  ppuVar1 = (undefined **)FUN_03faa85c();
  return ppuVar1;
}


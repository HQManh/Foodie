// rea decompile_all
// name: FUN_03fa7ba0
// address: 0x3fa7ba0
// body: available
// range: 0x3fa7ba0-0x3fa7be7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fa7be4 to 0x3fb845c FUN_03fb845c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fa7ba0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_03fb84ac(*(undefined8 *)(param_1 + 8));
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    uVar1 = *(uint *)(*(long *)(param_1 + 8) + 8);
    if (((uVar1 >> 6 & 1) == 0) && ((uVar1 & 0xff0000) != 0xe0000)) {
      uVar3 = FUN_03fb845c(*(long *)(param_1 + 8));
      return uVar3;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


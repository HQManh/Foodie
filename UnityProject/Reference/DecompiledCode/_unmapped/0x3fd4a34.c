// rea decompile_all
// name: FUN_03fd4a34
// address: 0x3fd4a34
// body: available
// range: 0x3fd4a34-0x3fd4a9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd4a58 to 0x3fd41bc FUN_03fd41bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fd4a34(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(ulong *)(param_2 + 0x20) < 0x801) {
    uVar4 = FUN_03fd41bc(param_1);
    return uVar4;
  }
  uVar2 = *(ulong *)(param_2 + 0x20) + param_1;
  uVar1 = param_1;
  while( true ) {
    if (uVar2 <= param_1) {
      return 0;
    }
    iVar3 = FUN_03fd41bc(uVar1);
    if (iVar3 != 0) break;
    param_1 = param_1 + 0x1000;
    uVar1 = uVar1 + 0x1000;
  }
  return 1;
}


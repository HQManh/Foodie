// rea decompile_all
// name: System.DecimalDecCalc$$DecDivMod1E9
// address: 0x75d709c
// body: available
// range: 0x75d709c-0x75d710b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_DecimalDecCalc__DecDivMod1E9(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  uVar4 = (uint)((ulong)(uVar1 >> 9) * 0x44b83 >> 0x27);
  *(uint *)(param_1 + 4) = uVar4;
  iVar5 = (int)(CONCAT44(uVar1 + uVar4 * -1000000000,*(int *)(param_1 + 0xc)) / 1000000000);
  iVar3 = (int)(CONCAT44(*(int *)(param_1 + 0xc) + iVar5 * -1000000000,iVar2) / 1000000000);
  *(int *)(param_1 + 8) = iVar3;
  *(int *)(param_1 + 0xc) = iVar5;
  return iVar2 + iVar3 * -1000000000;
}


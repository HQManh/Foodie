// rea decompile_all
// name: FUN_03faaee4
// address: 0x3faaee4
// body: available
// range: 0x3faaee4-0x3faaf3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03faaee4(int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = 0;
  if (*(int *)(DAT_09535220 + 0x118) != 0) {
    iVar1 = *(int *)(DAT_09535220 + 0x114) / *(int *)(DAT_09535220 + 0x118);
  }
  lVar2 = FUN_03f98dac(DAT_09535218 + *(int *)(DAT_09535220 + 0x110) +
                       (ulong)(uint)(iVar1 * param_1),&DAT_0953522c);
  lVar3 = FUN_03faadd0(lVar2,1);
  return *(long *)(lVar3 + 0x80) + (lVar2 >> 0x20) * 0x20;
}


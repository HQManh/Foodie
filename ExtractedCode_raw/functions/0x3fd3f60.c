// rea decompile_all
// name: FUN_03fd3f60
// address: 0x3fd3f60
// body: available
// range: 0x3fd3f60-0x3fd3ff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_03fd3f60(long param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar3 = param_1 + 7U & 0xfffffffffffffff8;
  uVar1 = (param_2 & 0xfffffffffffffff8) - uVar3;
  if (uVar3 <= (param_2 & 0xfffffffffffffff8) && uVar1 != 0) {
    puVar2 = param_3 + 2;
    if (param_4 <= param_3 + 2) {
      DAT_09748728 = 5;
      DAT_09748758 = 1;
      if (DAT_09535be0 != 0) {
        FUN_03fcb51c("Mark stack overflow; current size = %lu entries\n",DAT_09748708);
      }
      puVar2 = param_3 + -0x3fe;
    }
    param_3 = puVar2;
    *param_3 = uVar3;
    param_3[1] = uVar1;
  }
  return param_3;
}


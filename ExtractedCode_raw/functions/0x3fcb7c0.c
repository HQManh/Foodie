// rea decompile_all
// name: FUN_03fcb7c0
// address: 0x3fcb7c0
// body: available
// range: 0x3fcb7c0-0x3fcb893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fcb7c0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1 >> 0xc & 0x1fffff;
  if (DAT_09515628 == 0) {
    uVar2 = 1L << (param_1 >> 0xc & 0x3f);
    if (((*(ulong *)(DAT_09535bb8 + (uVar1 >> 6) * 8) & uVar2) != 0) ||
       ((*(ulong *)(DAT_09535bc0 + (uVar1 >> 6) * 8) & uVar2) != 0)) {
      return param_1 + 0x1000;
    }
  }
  uVar2 = 0;
  do {
    uVar3 = uVar1 >> 6;
    uVar4 = *(ulong *)(DAT_09535bc8 + uVar3 * 8);
    if ((uVar4 == 0) && (*(long *)(DAT_09535bd0 + uVar3 * 8) == 0)) {
      uVar2 = (uVar2 - (uVar1 & 0x3f)) + 0x40;
    }
    else {
      uVar1 = 1L << (uVar1 & 0x3f);
      if (((uVar4 & uVar1) != 0) || ((*(ulong *)(DAT_09535bd0 + uVar3 * 8) & uVar1) != 0)) {
        return param_1 + uVar2 * 0x1000 + 0x1000;
      }
      uVar2 = uVar2 + 1;
    }
    if (param_2 >> 0xc <= uVar2) {
      return 0;
    }
    uVar1 = param_1 + uVar2 * 0x1000 >> 0xc & 0x1fffff;
  } while( true );
}


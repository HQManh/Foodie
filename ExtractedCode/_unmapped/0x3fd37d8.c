// rea decompile_all
// name: FUN_03fd37d8
// address: 0x3fd37d8
// body: available
// range: 0x3fd37d8-0x3fd3853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd37d8(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)(&DAT_097440c8 + (param_1 >> 0x16 & 0x7ff) * 8);
  do {
    lVar3 = *plVar5;
    plVar5 = (long *)(lVar3 + 0x2018);
  } while (*(ulong *)(lVar3 + 0x2010) != param_1 >> 0x16 && lVar3 != DAT_09535c90);
  lVar3 = *(long *)(lVar3 + (param_1 >> 0xc & 0x3ff) * 8);
  uVar4 = 1L << (param_1 >> 4 & 0x3f);
  puVar1 = (ulong *)(lVar3 + (param_1 >> 10 & 3) * 8 + 0x40);
  uVar2 = *puVar1;
  if ((uVar2 & uVar4) != 0) {
    lVar6 = *(long *)(lVar3 + 0x38);
    *puVar1 = uVar2 & (uVar4 ^ 0xffffffffffffffff);
    *(long *)(lVar3 + 0x38) = lVar6 + -1;
  }
  return;
}


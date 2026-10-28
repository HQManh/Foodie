// rea decompile_all
// name: FUN_03fcfab8
// address: 0x3fcfab8
// body: available
// range: 0x3fcfab8-0x3fcfb97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fcfab8(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_1 == (ulong *)0x0) {
    return;
  }
  plVar4 = (long *)(&DAT_097440c8 + ((ulong)param_1 >> 0x16 & 0x7ff) * 8);
  do {
    lVar5 = *plVar4;
    plVar4 = (long *)(lVar5 + 0x2018);
    uVar2 = (ulong)param_1 & 0xfffffffffffff000;
  } while (*(ulong *)(lVar5 + 0x2010) != (ulong)param_1 >> 0x16 && lVar5 != DAT_09535c90);
  do {
    lVar5 = *(long *)(lVar5 + ((ulong)param_1 >> 0xc & 0x3ff) * 8);
    uVar3 = uVar2;
    do {
      uVar3 = (long)param_1 - uVar3 >> 10;
      uVar7 = 1L << ((ulong)param_1 >> 4 & 0x3f);
      uVar6 = *(ulong *)(lVar5 + uVar3 * 8 + 0x40);
      if ((uVar7 & uVar6) == 0) {
        lVar1 = *(long *)(lVar5 + 0x38);
        *(ulong *)(lVar5 + 0x40 + uVar3 * 8) = uVar6 | uVar7;
        *(long *)(lVar5 + 0x38) = lVar1 + 1;
      }
      param_1 = (ulong *)*param_1;
      if (param_1 == (ulong *)0x0) {
        return;
      }
      uVar3 = (ulong)param_1 & 0xfffffffffffff000;
    } while (uVar2 == uVar3);
    plVar4 = (long *)(&DAT_097440c8 + ((ulong)param_1 >> 0x16 & 0x7ff) * 8);
    do {
      lVar5 = *plVar4;
      plVar4 = (long *)(lVar5 + 0x2018);
      uVar2 = uVar3;
    } while (*(ulong *)(lVar5 + 0x2010) != (ulong)param_1 >> 0x16 && lVar5 != DAT_09535c90);
  } while( true );
}


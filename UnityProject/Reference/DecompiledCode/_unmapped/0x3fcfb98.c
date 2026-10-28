// rea decompile_all
// name: FUN_03fcfb98
// address: 0x3fcfb98
// body: available
// range: 0x3fcfb98-0x3fcfc83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fcfb98(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  plVar3 = (long *)(&DAT_097440c8 + ((ulong)param_1 >> 0x16 & 0x7ff) * 8);
  do {
    lVar6 = *plVar3;
    plVar3 = (long *)(lVar6 + 0x2018);
    uVar4 = (ulong)param_1 & 0xfffffffffffff000;
  } while (*(ulong *)(lVar6 + 0x2010) != (ulong)param_1 >> 0x16 && lVar6 != DAT_09535c90);
  do {
    lVar6 = *(long *)(lVar6 + ((ulong)param_1 >> 0xc & 0x3ff) * 8);
    lVar7 = *(long *)(lVar6 + 0x20);
    uVar8 = uVar4;
    do {
      uVar1 = 1L << ((ulong)param_1 >> 4 & 0x3f);
      puVar5 = (ulong *)(lVar6 + ((long)param_1 - uVar8 >> 10) * 8 + 0x40);
      uVar8 = *puVar5;
      if ((uVar1 & uVar8) != 0) {
        lVar2 = *(long *)(lVar6 + 0x38);
        *puVar5 = uVar8 & (uVar1 ^ 0xffffffffffffffff);
        *(long *)(lVar6 + 0x38) = lVar2 + -1;
      }
      param_1 = (ulong *)*param_1;
      DAT_097485b8 = DAT_097485b8 - lVar7;
      if (param_1 == (ulong *)0x0) {
        return;
      }
      uVar8 = (ulong)param_1 & 0xfffffffffffff000;
    } while (uVar4 == uVar8);
    plVar3 = (long *)(&DAT_097440c8 + ((ulong)param_1 >> 0x16 & 0x7ff) * 8);
    do {
      lVar6 = *plVar3;
      plVar3 = (long *)(lVar6 + 0x2018);
      uVar4 = uVar8;
    } while (*(ulong *)(lVar6 + 0x2010) != (ulong)param_1 >> 0x16 && lVar6 != DAT_09535c90);
  } while( true );
}


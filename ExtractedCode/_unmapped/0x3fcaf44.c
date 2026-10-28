// rea decompile_all
// name: FUN_03fcaf44
// address: 0x3fcaf44
// body: available
// range: 0x3fcaf44-0x3fcb047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fcaf44(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  if (DAT_09748120 != 0) {
    uVar2 = param_1 & 0xfffffffffffff000;
    plVar6 = (long *)(&DAT_097440c8 + (param_1 >> 0x16 & 0x7ff) * 8);
    do {
      lVar5 = *plVar6;
      plVar6 = (long *)(lVar5 + 0x2018);
    } while (*(ulong *)(lVar5 + 0x2010) != param_1 >> 0x16 && lVar5 != DAT_09535c90);
    uVar4 = *(ulong *)(lVar5 + (param_1 >> 0xc & 0x3ff) * 8);
    uVar1 = param_1;
    if (uVar4 != 0) {
      while (uVar4 < 0x1000) {
        uVar2 = uVar2 + uVar4 * -0x1000;
        plVar6 = (long *)(&DAT_097440c8 + (uVar2 >> 0x16 & 0x7ff) * 8);
        do {
          lVar5 = *plVar6;
          plVar6 = (long *)(lVar5 + 0x2018);
        } while (*(ulong *)(lVar5 + 0x2010) != uVar2 >> 0x16 && lVar5 != DAT_09535c90);
        uVar1 = uVar2;
        uVar4 = *(ulong *)(lVar5 + (uVar2 >> 0xc & 0x3ff) * 8);
      }
      if ((*(byte *)(uVar4 + 0x19) >> 2 & 1) == 0) {
        uVar3 = *(ulong *)(uVar4 + 0x20);
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = (uVar1 & 0xff8) / uVar3;
        }
        lVar5 = (uVar1 & 0xfffffffffffffff8) + (uVar4 * uVar3 - (uVar1 & 0xff8));
        if ((0x1000 < uVar3) || (lVar5 + uVar3 <= uVar2 + 0x1000)) {
          if (lVar5 + uVar3 <= param_1) {
            lVar5 = 0;
          }
          return lVar5;
        }
      }
    }
  }
  return 0;
}


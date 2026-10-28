// rea decompile_all
// name: FUN_03fcc55c
// address: 0x3fcc55c
// body: available
// range: 0x3fcc55c-0x3fcc667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_03fcc55c(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)(&DAT_097440c8 + (param_1 >> 0x16 & 0x7ff) * 8);
  do {
    lVar3 = *plVar4;
    plVar4 = (long *)(lVar3 + 0x2018);
  } while (*(ulong *)(lVar3 + 0x2010) != param_1 >> 0x16 && lVar3 != DAT_09535c90);
  uVar1 = *(ulong *)(lVar3 + (param_1 >> 0xc & 0x3ff) * 8);
  if (uVar1 < 0x1000) {
    if (DAT_09515628 != 0) {
      if (uVar1 != 0) {
        uVar2 = param_1 & 0xfffffffffffff000;
        do {
          uVar2 = uVar2 + uVar1 * -0x1000;
          plVar4 = (long *)(&DAT_097440c8 + (uVar2 >> 0x16 & 0x7ff) * 8);
          do {
            lVar3 = *plVar4;
            plVar4 = (long *)(lVar3 + 0x2018);
          } while (*(ulong *)(lVar3 + 0x2010) != uVar2 >> 0x16 && lVar3 != DAT_09535c90);
          uVar1 = *(ulong *)(lVar3 + (uVar2 >> 0xc & 0x3ff) * 8);
        } while (uVar1 < 0x1000);
        if ((*(byte *)(uVar1 + 0x19) & 1) != 0) {
          return 0;
        }
        if (((*(byte *)(uVar1 + 0x19) >> 2 & 1) == 0) &&
           ((long)(param_1 - uVar2) < *(long *)(uVar1 + 0x20))) {
          return uVar1;
        }
      }
LAB_03fcc648:
      FUN_03fcb724();
      return 0;
    }
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if ((*(byte *)(uVar1 + 0x19) >> 2 & 1) == 0) {
      *param_2 = param_1 >> 0xc;
      param_2[1] = uVar1;
      return uVar1;
    }
    if (DAT_09515628 != 0) goto LAB_03fcc648;
  }
  FUN_03fcb678();
  return 0;
}


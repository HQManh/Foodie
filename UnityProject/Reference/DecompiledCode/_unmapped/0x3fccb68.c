// rea decompile_all
// name: FUN_03fccb68
// address: 0x3fccb68
// body: available
// range: 0x3fccb68-0x3fccc1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fccb68(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = (long *)(&DAT_097440c8 + (param_1 >> 0x16 & 0x7ff) * 8);
  do {
    lVar1 = *plVar4;
    plVar4 = (long *)(lVar1 + 0x2018);
  } while (*(ulong *)(lVar1 + 0x2010) != param_1 >> 0x16 && lVar1 != DAT_09535c90);
  if (lVar1 == DAT_09535c90) {
    if (DAT_09748100 != 0) {
      uVar2 = 0x3ff;
      lVar1 = DAT_09748100;
      do {
        if (*(ulong *)(lVar1 + 0x2010) <= param_1 >> 0x16) goto LAB_03fccbb0;
        lVar1 = *(long *)(lVar1 + 0x2008);
      } while (lVar1 != 0);
    }
  }
  else {
    uVar2 = param_1 >> 0xc & 0x3ff;
LAB_03fccbb0:
    do {
      do {
        uVar3 = *(ulong *)(lVar1 + uVar2 * 8);
        if (uVar3 == 0) {
          uVar2 = uVar2 - 1;
        }
        else {
          if (0xfff < uVar3) {
            return *(long *)(lVar1 + 0x2010) * 0x400000 + uVar2 * 0x1000;
          }
          uVar2 = uVar2 - uVar3;
        }
      } while (-1 < (long)uVar2);
      lVar1 = *(long *)(lVar1 + 0x2008);
      uVar2 = 0x3ff;
    } while (lVar1 != 0);
  }
  return 0;
}


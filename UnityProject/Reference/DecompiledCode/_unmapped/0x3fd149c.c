// rea decompile_all
// name: FUN_03fd149c
// address: 0x3fd149c
// body: available
// range: 0x3fd149c-0x3fd158b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fd149c(ulong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  iVar2 = FUN_03fd0fb4();
  if (iVar2 < 0) {
    plVar6 = (long *)(&DAT_097440c8 + (param_1 >> 0x16 & 0x7ff) * 8);
    do {
      lVar5 = *plVar6;
      plVar6 = (long *)(lVar5 + 0x2018);
    } while (*(ulong *)(lVar5 + 0x2010) != param_1 >> 0x16 && lVar5 != DAT_09535c90);
    uVar4 = *(long *)(*(long *)(lVar5 + (param_1 >> 0xc & 0x3ff) * 8) + 0x20) - 0x30;
    if (7 < uVar4) {
      uVar4 = uVar4 >> 3;
      plVar6 = (long *)(param_1 + 0x30);
      do {
        if (*plVar6 != -0x1041522121524111) {
          FUN_03fd158c(param_1);
          uVar1 = DAT_097486d0;
          *(long **)(&DAT_09748630 + (ulong)DAT_097486d0 * 8) = plVar6;
          if (uVar1 < 0x13) {
            DAT_097486d0 = uVar1 + 1;
          }
          DAT_097485e8 = 1;
          return 0;
        }
        uVar4 = uVar4 - 1;
        plVar6 = plVar6 + 1;
      } while (uVar4 != 0);
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


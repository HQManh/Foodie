// rea decompile_all
// name: FUN_03fcc6f4
// address: 0x3fcc6f4
// body: available
// range: 0x3fcc6f4-0x3fcc787 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_03fcc6f4(ulong param_1)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  iVar2 = FUN_03fcc788();
  if (iVar2 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    if (DAT_09749350 == (long *)0x0) {
      plVar3 = (long *)FUN_03fcb1c4(0x68);
      if (plVar3 == (long *)0x0) {
        return (long *)0x0;
      }
    }
    else {
      plVar3 = DAT_09749350;
      DAT_09749350 = (long *)*DAT_09749350;
    }
    uVar1 = DAT_09748118;
    plVar5 = (long *)(&DAT_097440c8 + (param_1 >> 0x16 & 0x7ff) * 8);
    do {
      lVar4 = *plVar5;
      plVar5 = (long *)(lVar4 + 0x2018);
    } while (*(ulong *)(lVar4 + 0x2010) != param_1 >> 0x16 && lVar4 != DAT_09535c90);
    *(long **)(lVar4 + (param_1 >> 0xc & 0x3ff) * 8) = plVar3;
    *(short *)((long)plVar3 + 0x1a) = (short)uVar1;
  }
  return plVar3;
}


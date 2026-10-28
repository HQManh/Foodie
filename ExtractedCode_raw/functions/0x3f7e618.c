// rea decompile_all
// name: FUN_03f7e618
// address: 0x3f7e618
// body: available
// range: 0x3f7e618-0x3f7e67f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03f7e618(long param_1)

{
  long lVar1;
  long *plVar2;
  ushort uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar2 = *(long **)(param_1 + 0x18);
  lVar4 = *plVar2;
  uVar3 = *(ushort *)(plVar2 + 1);
  lVar1 = *(long *)(param_1 + 0x20) + 0x20;
  *(long *)(param_1 + 0x20) = lVar1;
  if (lVar1 == lVar4 + (ulong)uVar3 * 0x20) {
    do {
      plVar6 = plVar2 + 2;
      plVar5 = *(long **)(param_1 + 0x10);
      if (plVar6 == *(long **)(param_1 + 0x10)) break;
      lVar1 = plVar2[3];
      *(long *)(param_1 + 0x20) = *plVar6;
      plVar5 = plVar6;
      plVar2 = plVar6;
    } while ((short)lVar1 == 0);
    *(long **)(param_1 + 0x18) = plVar5;
  }
  FUN_03f7c130(param_1);
  return param_1;
}


// rea decompile_all
// name: FUN_03fc2518
// address: 0x3fc2518
// body: available
// range: 0x3fc2518-0x3fc2583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc2518(void)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  if (0 < DAT_09535b94) {
    lVar4 = 0;
    lVar5 = 0;
    lVar2 = DAT_09535ba0;
    iVar1 = DAT_09535b94;
    do {
      pcVar3 = *(code **)(*(long *)(*(long *)(lVar2 + lVar4) + 0x38) + 0x68);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(0);
        lVar2 = DAT_09535ba0;
        iVar1 = DAT_09535b94;
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x58;
    } while (lVar5 < iVar1);
  }
  return;
}


// rea decompile_all
// name: FUN_03fb5a98
// address: 0x3fb5a98
// body: available
// range: 0x3fb5a98-0x3fb5b57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fb5a98(void)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_28 [8];
  
  FUN_03f5d894(auStack_28,&DAT_09535358);
  puVar4 = DAT_095353c0;
  if (DAT_095353c0 != &DAT_095353c8) {
    do {
      FUN_03f9198c(puVar4[5]);
      puVar1 = (undefined8 *)puVar4[1];
      if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
        do {
          puVar3 = (undefined8 *)puVar4[2];
          bVar2 = (undefined8 *)*puVar3 != puVar4;
          puVar4 = puVar3;
        } while (bVar2);
      }
      else {
        do {
          puVar3 = puVar1;
          puVar1 = (undefined8 *)*puVar3;
        } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
      }
      puVar4 = puVar3;
    } while (puVar3 != &DAT_095353c8);
  }
  FUN_03f723d0(&DAT_095353c0,DAT_095353c8);
  DAT_095353c0 = &DAT_095353c8;
  DAT_095353d0 = 0;
  DAT_095353c8 = 0;
  FUN_03fb9f98(&DAT_095353a8,DAT_095353a8);
  FUN_03f5d920(auStack_28);
  return;
}


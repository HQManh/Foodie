// rea decompile_all
// name: FUN_03f8816c
// address: 0x3f8816c
// body: available
// range: 0x3f8816c-0x3f88223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03f8816c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auStack_18 [8];
  
  if (param_1 == -1) {
    lVar4 = 0;
  }
  else {
    FUN_03f5d894(auStack_18,&DAT_09534a40);
    if (DAT_09534a98 == (undefined8 *)0x0) {
      puVar3 = &DAT_09534a98;
    }
    else {
      puVar2 = &DAT_09534a98;
      puVar3 = DAT_09534a98;
      do {
        puVar1 = puVar3 + 1;
        if (param_1 <= (long)puVar3[4]) {
          puVar2 = puVar3;
          puVar1 = puVar3;
        }
        puVar3 = (undefined8 *)*puVar1;
      } while (puVar3 != (undefined8 *)0x0);
      puVar3 = &DAT_09534a98;
      if (((undefined8 **)puVar2 != &DAT_09534a98) && ((long)puVar2[4] <= param_1)) {
        puVar3 = puVar2;
      }
    }
    if ((undefined8 **)puVar3 == &DAT_09534a98) {
      lVar4 = 0;
    }
    else {
      lVar4 = puVar3[5];
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    }
    FUN_03f5d920(auStack_18);
  }
  return lVar4;
}


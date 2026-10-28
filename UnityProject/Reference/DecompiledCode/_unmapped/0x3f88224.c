// rea decompile_all
// name: FUN_03f88224
// address: 0x3f88224
// body: available
// range: 0x3f88224-0x3f88323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f88224(long param_1,void *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_38 [8];
  
  if ((param_1 != -1) && (param_2 != (void *)0x0)) {
    FUN_03f5d894(auStack_38,&DAT_09534a40);
    puVar3 = DAT_09534a98;
    iVar4 = *(int *)((long)param_2 + 8) + -1;
    *(int *)((long)param_2 + 8) = iVar4;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = &DAT_09534a98;
    }
    else {
      puVar2 = &DAT_09534a98;
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
    if (((undefined8 **)puVar3 != &DAT_09534a98) &&
       ((iVar4 == 0 && (void *)puVar3[5] == param_2 || ((param_3 & 1) != 0)))) {
      FUN_03f88658(&DAT_09534a90,puVar3);
      operator_delete(puVar3);
      iVar4 = *(int *)((long)param_2 + 8);
    }
    FUN_03f5d920(auStack_38);
    if (iVar4 == 0) {
      FUN_03f88380(param_2);
      operator_delete(param_2);
    }
  }
  return;
}


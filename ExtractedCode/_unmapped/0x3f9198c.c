// rea decompile_all
// name: FUN_03f9198c
// address: 0x3f9198c
// body: available
// range: 0x3f9198c-0x3f91af7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_03f9198c(ulong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_28 [8];
  
  FUN_03f5d894(auStack_28,&DAT_09534e38);
  if (DAT_09534ea8 == (undefined8 *)0x0) {
    puVar5 = &DAT_09534ea8;
  }
  else {
    puVar4 = &DAT_09534ea8;
    puVar5 = DAT_09534ea8;
    do {
      puVar1 = puVar5 + 1;
      if (param_1 <= (ulong)puVar5[4]) {
        puVar4 = puVar5;
        puVar1 = puVar5;
      }
      puVar5 = (undefined8 *)*puVar1;
    } while (puVar5 != (undefined8 *)0x0);
    puVar5 = &DAT_09534ea8;
    if (((undefined8 **)puVar4 != &DAT_09534ea8) && ((ulong)puVar4[4] <= param_1)) {
      puVar5 = puVar4;
    }
  }
  if ((undefined8 **)puVar5 == &DAT_09534ea8) {
    uVar6 = 0;
  }
  else {
    uVar6 = puVar5[5];
    FUN_03f88658(&DAT_09534ea0,puVar5);
    operator_delete(puVar5);
  }
  uVar3 = FUN_03f8e360(param_1,uVar6);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (DAT_09534e90 == (undefined8 *)0x0) {
      puVar5 = &DAT_09534e90;
    }
    else {
      puVar4 = &DAT_09534e90;
      puVar5 = DAT_09534e90;
      do {
        puVar1 = puVar5 + 1;
        if (param_1 <= (ulong)puVar5[4]) {
          puVar4 = puVar5;
          puVar1 = puVar5;
        }
        puVar5 = (undefined8 *)*puVar1;
      } while (puVar5 != (undefined8 *)0x0);
      puVar5 = &DAT_09534e90;
      if (((undefined8 **)puVar4 != &DAT_09534e90) && ((ulong)puVar4[4] <= param_1)) {
        puVar5 = puVar4;
      }
    }
    if ((undefined8 **)puVar5 == &DAT_09534e90) {
      uVar2 = 1;
    }
    else {
      uVar2 = FUN_03f8e378(puVar5[5]);
      FUN_03f88658(&DAT_09534e88,puVar5);
      operator_delete(puVar5);
    }
  }
  FUN_03f5d920(auStack_28);
  return uVar2 & 1;
}


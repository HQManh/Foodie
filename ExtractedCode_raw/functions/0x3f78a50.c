// rea decompile_all
// name: FUN_03f78a50
// address: 0x3f78a50
// body: available
// range: 0x3f78a50-0x3f78b07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f78a50(undefined8 *param_1,ushort param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  undefined4 *__ptr;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar4 = (undefined4 *)FUN_03f781a4(param_1,*(ushort *)(param_1 + 1) + 1);
  __ptr = (undefined4 *)*param_1;
  puVar5 = __ptr + (ulong)param_2 * 4;
  puVar6 = puVar4;
  puVar7 = __ptr;
  if (param_2 != 0) {
    do {
      uVar9 = *(undefined8 *)(puVar7 + 2);
      puVar1 = puVar7 + 4;
      *puVar6 = *puVar7;
      *(undefined8 *)(puVar6 + 2) = uVar9;
      puVar6 = puVar6 + 4;
      puVar7 = puVar1;
    } while (puVar1 != puVar5);
  }
  uVar3 = *(ushort *)(param_1 + 1);
  if (puVar5 != __ptr + (ulong)uVar3 * 4) {
    puVar8 = (undefined8 *)(puVar4 + (ulong)param_2 * 4 + 6);
    do {
      uVar2 = *puVar5;
      uVar9 = *(undefined8 *)(puVar5 + 2);
      puVar5 = puVar5 + 4;
      *(undefined4 *)(puVar8 + -1) = uVar2;
      *puVar8 = uVar9;
      puVar8 = puVar8 + 2;
    } while (puVar5 != __ptr + (ulong)uVar3 * 4);
  }
  if (__ptr != (undefined4 *)0x0) {
    free(__ptr);
    *param_1 = 0;
  }
  *param_1 = puVar4;
  return;
}


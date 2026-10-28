// rea decompile_all
// name: FUN_03fbdebc
// address: 0x3fbdebc
// body: available
// range: 0x3fbdebc-0x3fbdf63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fbdebc(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *local_58;
  long local_50;
  long local_48;
  
  uVar5 = (ulong)*(byte *)(*(long *)(param_1 + 0x28) + 0x52);
  local_50 = uVar5 + 2;
  local_48 = local_50;
  puVar3 = (undefined8 *)thunk_FUN_03f8f0c8(local_50 * 8,8);
  puVar2 = puVar3;
  for (uVar1 = uVar5; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  puVar3[uVar5] = param_3;
  (puVar3 + uVar5)[1] = param_4;
  local_58 = puVar3;
  uVar4 = FUN_03faa758();
  uVar4 = FUN_03f816e8(uVar4,param_1,*(undefined8 *)(param_1 + 0x28),puVar3);
  FUN_03f6521c(&local_58);
  return uVar4;
}


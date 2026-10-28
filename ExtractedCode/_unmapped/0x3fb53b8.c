// rea decompile_all
// name: FUN_03fb53b8
// address: 0x3fb53b8
// body: available
// range: 0x3fb53b8-0x3fb5457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fb53b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *local_38;
  long *local_30;
  undefined8 local_28;
  
  local_38 = (long *)0x0;
  local_30 = (long *)0x0;
  local_28 = 0;
  FUN_03fb51ac(param_1,param_2,&local_38);
  lVar1 = FUN_03f984c8(DAT_095354c0,(long)local_30 - (long)local_38 >> 3);
  if (local_38 != local_30) {
    puVar4 = (undefined8 *)(lVar1 + 0x20);
    plVar3 = local_38;
    do {
      uVar2 = FUN_03f9ab74(*plVar3 + 0x20);
      *puVar4 = uVar2;
      FUN_03f5d7b8(puVar4);
      plVar3 = plVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (plVar3 != local_30);
  }
  if (local_38 != (long *)0x0) {
    local_30 = local_38;
    operator_delete(local_38);
  }
  return lVar1;
}


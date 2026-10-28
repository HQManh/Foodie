// rea decompile_all
// name: FUN_03fab350
// address: 0x3fab350
// body: available
// range: 0x3fab350-0x3fab40b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fab350(undefined8 param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_a8 [80];
  undefined4 local_58 [2];
  undefined8 local_50;
  int *piStack_48;
  undefined8 local_38;
  
  FUN_03fb2f5c(param_1,(long)*(int *)(DAT_09535208 + 0x20));
  if (0 < *(int *)(DAT_09535208 + 0x20)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      piVar1 = (int *)(*(long *)(DAT_09535208 + 0x28) + lVar2);
      FUN_03f77ae4(&local_38,*(long *)(DAT_09535208 + 0x48) + (long)*piVar1 * 0xc);
      local_58[0] = 0;
      local_50 = local_38;
      piStack_48 = piVar1 + 1;
      FUN_03fb3074(param_1,1);
      FUN_03fb3a48(auStack_a8,param_1,local_58);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (lVar3 < *(int *)(DAT_09535208 + 0x20));
  }
  return;
}


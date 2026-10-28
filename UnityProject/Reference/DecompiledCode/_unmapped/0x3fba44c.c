// rea decompile_all
// name: FUN_03fba44c
// address: 0x3fba44c
// body: available
// range: 0x3fba44c-0x3fba54b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fba44c(undefined8 *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*param_2 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)param_2;
    param_1[2] = *(undefined8 *)(param_2 + 0x10);
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  else {
    FUN_03f5d0a4(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  }
  if ((param_2[0x18] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  else {
    FUN_03f5d0a4(param_1 + 3,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
  }
  FUN_03fba5bc(param_1 + 6,param_2 + 0x30);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_03fba6a4(param_1 + 0x14,*(long *)(param_2 + 0xa0),*(long *)(param_2 + 0xa8),
               *(long *)(param_2 + 0xa8) - *(long *)(param_2 + 0xa0) >> 2);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_03fba750(param_1 + 0x17,*(long *)(param_2 + 0xb8),*(long *)(param_2 + 0xc0),
               (*(long *)(param_2 + 0xc0) - *(long *)(param_2 + 0xb8) >> 3) * 0x34f72c234f72c235);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_03fba904();
  return;
}


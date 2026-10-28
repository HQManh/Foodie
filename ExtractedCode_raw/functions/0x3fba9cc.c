// rea decompile_all
// name: FUN_03fba9cc
// address: 0x3fba9cc
// body: available
// range: 0x3fba9cc-0x3fbaa67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_03fba9cc(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 **ppuStack_48;
  undefined8 **local_40;
  undefined1 local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  ppuStack_48 = &local_30;
  local_40 = &local_28;
  local_38 = 0;
  local_30 = param_4;
  local_50 = param_1;
  for (; local_28 = param_4, param_2 != param_3; param_2 = param_2 + 0x18) {
    if ((*param_2 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar1 = *(undefined8 *)param_2;
      param_4[2] = *(undefined8 *)(param_2 + 0x10);
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    else {
      FUN_03f5d0a4(param_4,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
    }
    param_4 = local_28 + 3;
  }
  local_38 = 1;
  FUN_03fbaa7c(&local_50);
  return param_4;
}


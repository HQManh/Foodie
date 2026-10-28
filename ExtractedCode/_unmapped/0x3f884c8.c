// rea decompile_all
// name: thunk_FUN_03f8c5dc
// address: 0x3f884c8
// body: available
// range: 0x3f884c8-0x3f884cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
thunk_FUN_03f8c5dc(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puStack_38 = (undefined8 *)0x0;
  puStack_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  auVar6 = FUN_03f71f50(&puStack_38,1);
  puVar4 = auVar6._0_8_;
  uVar5 = *param_1;
  puStack_38 = puVar4 + auVar6._8_8_ * 2;
  puVar1 = puVar4 + 2;
  puVar4[1] = param_1[1];
  *puVar4 = uVar5;
  puVar2 = puStack_40;
  for (; puStack_40 != puStack_48; puStack_40 = puStack_40 + -2) {
    uVar5 = puStack_40[-2];
    puVar4[-1] = puStack_40[-1];
    puVar4[-2] = uVar5;
    puVar4 = puVar4 + -2;
    puVar2 = puStack_48;
  }
  puStack_48 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    puStack_40 = puVar1;
    operator_delete(puVar2);
  }
  puStack_40 = puVar1;
  uVar3 = FUN_03f8c4ac(&puStack_48,1,param_2,param_3,param_4);
  if (puStack_48 != (undefined8 *)0x0) {
    puStack_40 = puStack_48;
    operator_delete(puStack_48);
  }
  return uVar3;
}


// rea decompile_all
// name: FUN_03fa977c
// address: 0x3fa977c
// body: available
// range: 0x3fa977c-0x3fa9807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_03fa977c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 local_28;
  
  puVar2 = (undefined8 *)FUN_03fa9808(param_1,&local_28,param_2);
  pvVar4 = (void *)*puVar2;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x40);
    param_4 = (undefined8 *)*param_4;
    uVar5 = *param_4;
    uVar3 = param_4[2];
    *(undefined8 *)((long)pvVar4 + 0x28) = param_4[1];
    *(undefined8 *)((long)pvVar4 + 0x20) = uVar5;
    *(undefined8 *)((long)pvVar4 + 0x30) = uVar3;
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    *(undefined8 *)((long)pvVar4 + 0x38) = 0;
    FUN_03f724b8(param_1,local_28,puVar2,pvVar4);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = pvVar4;
  auVar6._9_7_ = 0;
  return auVar6;
}


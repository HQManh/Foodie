// rea decompile_all
// name: FUN_03f91ff8
// address: 0x3f91ff8
// body: available
// range: 0x3f91ff8-0x3f920a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_03f91ff8(long param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    do {
      while (puVar3 = puVar1, (ulong)puVar3[4] <= *param_2) {
        if (*param_2 <= (ulong)puVar3[4]) {
          uVar2 = 0;
          goto LAB_03f92094;
        }
        puVar1 = (undefined8 *)puVar3[1];
        if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) {
          puVar4 = puVar3 + 1;
          goto LAB_03f92058;
        }
      }
      puVar1 = (undefined8 *)*puVar3;
      puVar4 = puVar3;
    } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
  }
LAB_03f92058:
  puVar1 = operator_new(0x30);
  puVar1[4] = *(undefined8 *)*param_4;
  puVar1[5] = 0;
  FUN_03f724b8(param_1,puVar3,puVar4,puVar1);
  uVar2 = 1;
  puVar3 = puVar1;
LAB_03f92094:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = puVar3;
  return auVar5;
}


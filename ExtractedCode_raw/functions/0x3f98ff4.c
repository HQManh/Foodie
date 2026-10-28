// rea decompile_all
// name: FUN_03f98ff4
// address: 0x3f98ff4
// body: available
// range: 0x3f98ff4-0x3f9903f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_03f98ff4(uint *param_1,long param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  
  if (*(int *)(param_2 + 8) == 2) {
    puVar2 = (uint *)((long)param_1 + 2);
    uVar3 = (uint)(ushort)*param_1;
    bVar1 = (ushort)*param_1 == 0xffff;
  }
  else {
    if (*(int *)(param_2 + 8) != 1) {
      puVar2 = param_1 + 1;
      uVar3 = *param_1;
      goto LAB_03f9902c;
    }
    puVar2 = (uint *)((long)param_1 + 1);
    uVar3 = (uint)(byte)*param_1;
    bVar1 = (byte)*param_1 == 0xff;
  }
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
LAB_03f9902c:
  auVar4._8_8_ = *(undefined8 *)(puVar2 + 1);
  auVar4._4_4_ = *puVar2;
  auVar4._0_4_ = uVar3;
  return auVar4;
}


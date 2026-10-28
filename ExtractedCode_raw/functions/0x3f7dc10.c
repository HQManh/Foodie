// rea decompile_all
// name: FUN_03f7dc10
// address: 0x3f7dc10
// body: available
// range: 0x3f7dc10-0x3f7dcbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03f7dc10(long *param_1,ulong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = (long)param_1 + 10;
  uVar5 = FUN_03f5fe4c(lVar6);
  uVar4 = (uint)param_2 >> 3 & 0x1fff;
  uVar3 = 1 << (param_2 & 7);
  if ((uVar3 & *(byte *)(lVar6 + (ulong)uVar4)) == 0) {
    FUN_03f7dcbc(param_1,uVar5 & 0xffffffff);
    bVar2 = *(byte *)(lVar6 + (ulong)uVar4);
    *(short *)(param_1 + 1) = (short)param_1[1] + 1;
    *(byte *)(lVar6 + (ulong)uVar4) = bVar2 | (byte)uVar3;
  }
  puVar1 = (undefined4 *)(*param_1 + (uVar5 & 0xffff) * 0x20);
  *puVar1 = *param_3;
  uVar7 = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(puVar1 + 2) = uVar7;
  lVar6 = *param_1;
  *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_3 + 6);
  return lVar6 + (uVar5 & 0xffff) * 0x20;
}


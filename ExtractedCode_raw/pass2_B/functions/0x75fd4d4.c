// rea decompile_all
// name: thunk_FUN_03f73234
// address: 0x75fd4d4
// body: available
// range: 0x75fd4d4-0x75fd4d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long thunk_FUN_03f73234(void)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  
  uVar5 = FUN_03f92378();
  plVar6 = (long *)FUN_03f9236c();
  uVar7 = FUN_03fbe820(DAT_09535468,1);
  lVar8 = FUN_03f984e4(uVar7,(long)(int)uVar5);
  if (0 < (int)uVar5) {
    lVar9 = 0;
    puVar10 = (undefined8 *)(lVar8 + 0x20);
    do {
      pbVar1 = (byte *)(*plVar6 + lVar9);
      bVar4 = (*pbVar1 & 1) != 0;
      pbVar3 = pbVar1 + 2;
      if (bVar4) {
        pbVar3 = *(byte **)(pbVar1 + 0x10);
      }
      uVar2 = (uint)(*pbVar1 >> 1);
      if (bVar4) {
        uVar2 = *(uint *)(pbVar1 + 8);
      }
      uVar7 = FUN_03f96864(pbVar3,uVar2);
      *puVar10 = uVar7;
      FUN_03f5d7b8(puVar10);
      lVar9 = lVar9 + 0x18;
      puVar10 = puVar10 + 1;
    } while ((ulong)uVar5 * 0x18 - lVar9 != 0);
  }
  return lVar8;
}


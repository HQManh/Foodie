// rea decompile_all
// name: FUN_03f7f990
// address: 0x3f7f990
// body: available
// range: 0x3f7f990-0x3f7fa8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03f7f990(long *param_1)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar6 = 0;
  do {
    uVar5 = (ulong)(*(uint *)(param_1 + 1) >> 0x10) & 0xff;
    lVar7 = ((ulong)(*(uint *)(param_1 + 1) >> 0x1d) & 1) + uVar5 * 0x1cfaa2db;
    uVar4 = (uint)uVar5;
    if (uVar4 < 0x14) {
      if (uVar4 != 0xf) {
        if (uVar4 - 0x11 < 3) {
LAB_03f7fa48:
          lVar7 = *param_1 + lVar7 * 0x1cfaa2db;
        }
LAB_03f7fa54:
        return lVar7 + lVar6;
      }
    }
    else {
      if (uVar4 < 0x1d) {
        if (uVar4 == 0x14) {
          bVar2 = *(byte *)((undefined8 *)*param_1 + 1);
          lVar3 = FUN_03f7f990(*(undefined8 *)*param_1);
          return lVar3 + lVar6 + ((ulong)bVar2 + lVar7 * 0x1cfaa2db) * 0x1cfaa2db;
        }
        if (uVar4 == 0x15) {
          puVar1 = (uint *)((undefined8 *)*param_1)[1];
          lVar3 = FUN_03f7f990(*(undefined8 *)*param_1);
          lVar7 = lVar3 + lVar7 * 0x1cfaa2db;
          uVar4 = *puVar1;
          uVar5 = (ulong)uVar4;
          if (uVar4 != 0) {
            puVar8 = *(undefined8 **)(puVar1 + 2);
            do {
              lVar3 = FUN_03f7f990(*puVar8);
              lVar7 = lVar3 + lVar7 * 0x1cfaa2db;
              uVar5 = uVar5 - 1;
              puVar8 = puVar8 + 1;
            } while (uVar5 != 0);
          }
        }
        goto LAB_03f7fa54;
      }
      if (uVar4 != 0x1d) {
        if (uVar4 == 0x1e) goto LAB_03f7fa48;
        goto LAB_03f7fa54;
      }
    }
    param_1 = (long *)*param_1;
    lVar6 = lVar6 + lVar7 * 0x1cfaa2db;
  } while( true );
}


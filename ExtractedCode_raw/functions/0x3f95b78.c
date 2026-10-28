// rea decompile_all
// name: FUN_03f95b78
// address: 0x3f95b78
// body: available
// range: 0x3f95b78-0x3f95da7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f95b78(long param_1,long param_2,long param_3)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  ulong uVar16;
  
  puVar11 = *(undefined8 **)(param_2 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    return 0;
  }
  if (*(long *)*puVar11 == *(long *)**(undefined8 **)(param_1 + 0x60)) {
    puVar12 = (uint *)(*(undefined8 **)(param_1 + 0x60))[1];
    lVar13 = puVar11[1];
    lVar6 = FUN_03fb4784();
    FUN_03fbea4c();
    uVar10 = *puVar12;
    puVar11 = *(undefined8 **)(puVar12 + 2);
    puVar14 = *(undefined8 **)(lVar13 + 8);
    if (uVar10 < 2) {
      uVar10 = 1;
    }
    uVar16 = (ulong)uVar10;
    puVar15 = (ushort *)(*(long *)(lVar6 + 0xc0) + 4);
    do {
      uVar3 = *puVar15;
      lVar6 = FUN_03fbe574(*puVar11,1);
      lVar13 = FUN_03fbe574(*puVar14,1);
      uVar1 = 0;
      if (-1 < (int)(*(uint *)(lVar13 + 0x28) | *(uint *)(lVar6 + 0x28))) {
        uVar1 = uVar3 & 3;
      }
      lVar8 = lVar13;
      lVar9 = lVar6;
      if ((uVar1 == 2) || (lVar8 = lVar6, lVar9 = lVar13, uVar1 == 1)) {
        uVar7 = FUN_03fbf4c4(lVar8,lVar9);
        if ((uVar7 & 1) == 0) goto LAB_03f95bb4;
      }
      else {
        if (uVar1 != 0) goto LAB_03f95bb4;
        if (lVar6 != lVar13) {
          if ((*(char *)(param_3 + 0x132) == '\0') && (*(long *)(param_3 + 0x50) != DAT_09535478))
          goto LAB_03f95bb4;
          uVar7 = FUN_03fb85f0(lVar6 + 0x20);
          if ((((uVar7 & 1) == 0) &&
              ((bVar2 = *(byte *)(*(long *)(lVar6 + 0x48) + 0x2a), uVar10 = (uint)bVar2,
               0x19 < bVar2 ||
               (((uVar4 = 1 << (ulong)(uVar10 & 0x1f), lVar8 = DAT_09535420, (uVar4 & 0x300) == 0 &&
                 (lVar8 = DAT_09535440, (uVar4 & 0xc00) == 0)) && ((uVar4 & 0x3000000) == 0)))))) &&
             ((lVar8 = DAT_09535410, 1 < uVar10 - 6 && (lVar8 = lVar6, uVar10 - 4 < 2)))) {
            lVar8 = DAT_09535408;
          }
          uVar7 = FUN_03fb85f0(lVar13 + 0x20);
          lVar6 = lVar13;
          if ((((uVar7 & 1) == 0) &&
              ((bVar2 = *(byte *)(*(long *)(lVar13 + 0x48) + 0x2a), uVar10 = (uint)bVar2,
               0x19 < bVar2 ||
               (((uVar4 = 1 << (ulong)(uVar10 & 0x1f), lVar6 = DAT_09535420, (uVar4 & 0x300) == 0 &&
                 (lVar6 = DAT_09535440, (uVar4 & 0xc00) == 0)) && ((uVar4 & 0x3000000) == 0)))))) &&
             ((lVar6 = DAT_09535410, 1 < uVar10 - 6 && (lVar6 = lVar13, uVar10 - 4 < 2)))) {
            lVar6 = DAT_09535408;
          }
          if (lVar8 != lVar6) goto LAB_03f95bb4;
        }
      }
      uVar16 = uVar16 - 1;
      puVar11 = puVar11 + 1;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    } while (uVar16 != 0);
    uVar5 = 1;
  }
  else {
LAB_03f95bb4:
    uVar5 = 0;
  }
  return uVar5;
}


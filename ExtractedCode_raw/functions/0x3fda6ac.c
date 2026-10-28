// rea decompile_all
// name: FUN_03fda6ac
// address: 0x3fda6ac
// body: available
// range: 0x3fda6ac-0x3fda9f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_03fda6ac(uint param_1,ulong *param_2,ulong param_3)

{
  byte *pbVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uVar23;
  
  if (param_2 == (ulong *)0x0) {
    return 0;
  }
  uVar14 = (ulong)~param_1;
  puVar22 = param_2;
  if (0x2e < param_3) {
    do {
      puVar8 = puVar22;
      if (((ulong)param_2 & 7) == 0) break;
      param_2 = (ulong *)((long)param_2 + 1);
      puVar8 = (ulong *)((long)puVar22 + 1);
      param_3 = param_3 - 1;
      uVar14 = (ulong)*(uint *)(&UNK_023ac678 +
                               ((ulong)((uint)(byte)*puVar22 ^ (uint)uVar14) & 0xff) * 4) ^
               uVar14 >> 8;
      puVar22 = puVar8;
    } while (param_3 != 0);
    uVar21 = param_3 / 0x28;
    param_3 = param_3 % 0x28;
    lVar19 = uVar21 - 1;
    if (lVar19 == 0) {
      uVar17 = 0;
      uVar18 = 0;
      uVar16 = 0;
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      uVar16 = 0;
      uVar18 = 0;
      uVar17 = 0;
      puVar22 = puVar8;
      do {
        uVar13 = 8;
        uVar23 = *puVar22 ^ uVar14;
        uVar7 = puVar22[1] ^ uVar18;
        uVar11 = puVar22[4] ^ uVar15;
        uVar9 = puVar22[2] ^ uVar17;
        uVar10 = puVar22[3] ^ uVar16;
        uVar14 = (ulong)*(uint *)(&UNK_023aca78 + (uVar23 & 0xff) * 4);
        uVar18 = (ulong)*(uint *)(&UNK_023aca78 + (uVar7 & 0xff) * 4);
        uVar17 = (ulong)*(uint *)(&UNK_023aca78 + (uVar9 & 0xff) * 4);
        uVar16 = (ulong)*(uint *)(&UNK_023aca78 + (uVar10 & 0xff) * 4);
        uVar15 = (ulong)*(uint *)(&UNK_023aca78 + (uVar11 & 0xff) * 4);
        puVar12 = &UNK_023ace78;
        do {
          uVar3 = uVar13 & 0x3f;
          uVar4 = uVar13 & 0x3f;
          uVar5 = uVar13 & 0x3f;
          uVar14 = *(uint *)(puVar12 + (uVar23 >> (uVar13 & 0x3f) & 0xff) * 4) ^ uVar14;
          uVar6 = uVar13 & 0x3f;
          uVar13 = uVar13 + 8;
          uVar18 = *(uint *)(puVar12 + (uVar7 >> uVar3 & 0xff) * 4) ^ uVar18;
          uVar17 = *(uint *)(puVar12 + (uVar9 >> uVar4 & 0xff) * 4) ^ uVar17;
          uVar16 = *(uint *)(puVar12 + (uVar10 >> uVar5 & 0xff) * 4) ^ uVar16;
          puVar2 = (uint *)(puVar12 + (uVar11 >> uVar6 & 0xff) * 4);
          puVar12 = puVar12 + 0x400;
          uVar15 = *puVar2 ^ uVar15;
        } while (uVar13 != 0x40);
        lVar19 = lVar19 + -1;
        puVar22 = puVar22 + 5;
      } while (lVar19 != 0);
      puVar8 = puVar8 + uVar21 * 5 + -5;
    }
    iVar20 = 8;
    uVar14 = *puVar8 ^ uVar14;
    do {
      iVar20 = iVar20 + -1;
      uVar14 = (ulong)*(uint *)(&UNK_023ac678 + (uVar14 & 0xff) * 4) ^ uVar14 >> 8;
    } while (iVar20 != 0);
    uVar14 = uVar14 & 0xffffffff ^ uVar18 ^ puVar8[1];
    iVar20 = 8;
    do {
      iVar20 = iVar20 + -1;
      uVar14 = (ulong)*(uint *)(&UNK_023ac678 + (uVar14 & 0xff) * 4) ^ uVar14 >> 8;
    } while (iVar20 != 0);
    uVar14 = uVar14 & 0xffffffff ^ uVar17 ^ puVar8[2];
    iVar20 = 8;
    do {
      iVar20 = iVar20 + -1;
      uVar14 = (ulong)*(uint *)(&UNK_023ac678 + (uVar14 & 0xff) * 4) ^ uVar14 >> 8;
    } while (iVar20 != 0);
    uVar14 = uVar14 & 0xffffffff ^ uVar16 ^ puVar8[3];
    iVar20 = 8;
    do {
      iVar20 = iVar20 + -1;
      uVar14 = (ulong)*(uint *)(&UNK_023ac678 + (uVar14 & 0xff) * 4) ^ uVar14 >> 8;
    } while (iVar20 != 0);
    uVar14 = uVar14 & 0xffffffff ^ uVar15 ^ puVar8[4];
    iVar20 = 8;
    do {
      iVar20 = iVar20 + -1;
      uVar14 = (ulong)*(uint *)(&UNK_023ac678 + (uVar14 & 0xff) * 4) ^ uVar14 >> 8;
    } while (iVar20 != 0);
    param_2 = puVar8 + 5;
    uVar14 = uVar14 & 0xffffffff;
  }
  for (; 7 < param_3; param_3 = param_3 - 8) {
    uVar14 = (ulong)*(uint *)(&UNK_023ac678 +
                             ((ulong)((uint)(byte)*param_2 ^ (uint)uVar14) & 0xff) * 4) ^
             uVar14 >> 8;
    uVar14 = (ulong)*(uint *)(&UNK_023ac678 +
                             ((ulong)((uint)*(byte *)((long)param_2 + 1) ^ (uint)uVar14) & 0xff) * 4
                             ) ^ uVar14 >> 8;
    uVar14 = (ulong)*(uint *)(&UNK_023ac678 +
                             ((ulong)((uint)*(byte *)((long)param_2 + 2) ^ (uint)uVar14) & 0xff) * 4
                             ) ^ uVar14 >> 8;
    uVar14 = (ulong)*(uint *)(&UNK_023ac678 +
                             ((ulong)((uint)*(byte *)((long)param_2 + 3) ^ (uint)uVar14) & 0xff) * 4
                             ) ^ uVar14 >> 8;
    uVar14 = (ulong)*(uint *)(&UNK_023ac678 +
                             ((ulong)((uint)*(byte *)((long)param_2 + 4) ^ (uint)uVar14) & 0xff) * 4
                             ) ^ uVar14 >> 8;
    uVar14 = (ulong)*(uint *)(&UNK_023ac678 +
                             ((ulong)((uint)*(byte *)((long)param_2 + 5) ^ (uint)uVar14) & 0xff) * 4
                             ) ^ uVar14 >> 8;
    uVar14 = (ulong)*(uint *)(&UNK_023ac678 +
                             ((ulong)((uint)*(byte *)((long)param_2 + 6) ^ (uint)uVar14) & 0xff) * 4
                             ) ^ uVar14 >> 8;
    pbVar1 = (byte *)((long)param_2 + 7);
    param_2 = param_2 + 1;
    uVar14 = (ulong)*(uint *)(&UNK_023ac678 + ((ulong)((uint)*pbVar1 ^ (uint)uVar14) & 0xff) * 4) ^
             uVar14 >> 8;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar14 = (ulong)*(uint *)(&UNK_023ac678 +
                             ((ulong)((uint)(byte)*param_2 ^ (uint)uVar14) & 0xff) * 4) ^
             uVar14 >> 8;
    param_2 = (ulong *)((long)param_2 + 1);
  }
  return uVar14 ^ 0xffffffff;
}


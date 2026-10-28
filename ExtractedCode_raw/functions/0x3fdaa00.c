// rea decompile_all
// name: FUN_03fdaa00
// address: 0x3fdaa00
// body: available
// range: 0x3fdaa00-0x3fdad2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_03fdaa00(ulong param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  bool bVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  byte *pbVar22;
  
  uVar19 = param_1 >> 0x10 & 0xffff;
  param_1 = param_1 & 0xffff;
  if (param_3 == 1) {
    param_1 = param_1 + *param_2;
    uVar20 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar20 = param_1;
    }
    uVar19 = uVar20 + uVar19;
    uVar17 = uVar19 * 0x10000 - 0xfff10000;
    if (uVar19 < 0xfff1) {
      uVar17 = uVar19 * 0x10000;
    }
    return uVar17 | uVar20;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      param_1 = param_1 + *param_2;
      uVar19 = param_1 + uVar19;
      param_2 = param_2 + 1;
    }
    uVar19 = uVar19 % 0xfff1;
    uVar20 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar20 = param_1;
    }
  }
  else {
    if (param_3 >> 4 < 0x15b) {
LAB_03fdac00:
      do {
        param_3 = param_3 - 0x10;
        lVar2 = param_1 + *param_2;
        lVar3 = lVar2 + (ulong)param_2[1];
        lVar4 = lVar3 + (ulong)param_2[2];
        lVar5 = lVar4 + (ulong)param_2[3];
        lVar6 = lVar5 + (ulong)param_2[4];
        lVar7 = lVar6 + (ulong)param_2[5];
        lVar8 = lVar7 + (ulong)param_2[6];
        lVar9 = lVar8 + (ulong)param_2[7];
        lVar10 = lVar9 + (ulong)param_2[8];
        lVar11 = lVar10 + (ulong)param_2[9];
        lVar12 = lVar11 + (ulong)param_2[10];
        lVar13 = lVar12 + (ulong)param_2[0xb];
        lVar14 = lVar13 + (ulong)param_2[0xc];
        lVar15 = lVar14 + (ulong)param_2[0xd];
        pbVar22 = param_2 + 0xf;
        lVar16 = lVar15 + (ulong)param_2[0xe];
        param_2 = param_2 + 0x10;
        param_1 = lVar16 + (ulong)*pbVar22;
        uVar19 = lVar2 + uVar19 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 +
                 lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + lVar16 + param_1;
        if (param_3 < 0x10) goto joined_r0x03fdacd0;
      } while( true );
    }
    do {
      param_3 = param_3 - 0x15b0;
      iVar21 = -0x15b;
      pbVar22 = param_2;
      do {
        bVar18 = iVar21 != -1;
        iVar21 = iVar21 + 1;
        lVar2 = param_1 + *pbVar22;
        lVar3 = lVar2 + (ulong)pbVar22[1];
        lVar4 = lVar3 + (ulong)pbVar22[2];
        lVar5 = lVar4 + (ulong)pbVar22[3];
        lVar6 = lVar5 + (ulong)pbVar22[4];
        lVar7 = lVar6 + (ulong)pbVar22[5];
        lVar8 = lVar7 + (ulong)pbVar22[6];
        lVar9 = lVar8 + (ulong)pbVar22[7];
        lVar10 = lVar9 + (ulong)pbVar22[8];
        lVar11 = lVar10 + (ulong)pbVar22[9];
        lVar12 = lVar11 + (ulong)pbVar22[10];
        lVar13 = lVar12 + (ulong)pbVar22[0xb];
        lVar14 = lVar13 + (ulong)pbVar22[0xc];
        lVar15 = lVar14 + (ulong)pbVar22[0xd];
        pbVar1 = pbVar22 + 0xf;
        lVar16 = lVar15 + (ulong)pbVar22[0xe];
        pbVar22 = pbVar22 + 0x10;
        param_1 = lVar16 + (ulong)*pbVar1;
        uVar19 = lVar2 + uVar19 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 +
                 lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + lVar16 + param_1;
      } while (bVar18);
      param_2 = param_2 + 0x15b0;
      param_1 = param_1 % 0xfff1;
      uVar19 = uVar19 % 0xfff1;
    } while (0x15a < param_3 >> 4);
    uVar20 = param_1;
    if (param_3 != 0) {
      if (0xf < param_3) goto LAB_03fdac00;
      do {
        param_3 = param_3 - 1;
        param_1 = param_1 + *param_2;
        uVar19 = param_1 + uVar19;
        param_2 = param_2 + 1;
joined_r0x03fdacd0:
      } while (param_3 != 0);
      uVar19 = uVar19 % 0xfff1;
      uVar20 = param_1 % 0xfff1;
    }
  }
  return uVar20 | uVar19 << 0x10;
}


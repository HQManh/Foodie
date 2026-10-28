// rea decompile_all
// name: FUN_03f90090
// address: 0x3f90090
// body: available
// range: 0x3f90090-0x3f91263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f90090(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar13;
  uint uVar14;
  uint uVar16;
  uint uVar17;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar12;
  uint uVar15;
  uint uVar18;
  
  uVar7 = *param_1;
  uVar9 = param_1[1];
  uVar8 = param_1[2];
  uVar10 = param_1[3];
  uVar11 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uVar12 = uVar11 >> 0x10 | uVar11 << 0x10;
  uVar11 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  uVar13 = uVar11 >> 0x10 | uVar11 << 0x10;
  uVar11 = uVar12 + param_1[4] + (uVar7 >> 0x1b | uVar7 << 5) +
           (uVar8 & uVar9 | uVar10 & (uVar9 ^ 0xffffffff)) + 0x5a827999;
  uVar22 = uVar9 >> 2 | uVar9 << 0x1e;
  uVar1 = uVar13 + uVar10 + (uVar7 & (uVar9 >> 2 | uVar9 << 0x1e) | uVar8 & (uVar7 ^ 0xffffffff)) +
          0x5a827999 + (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar14 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  uVar15 = uVar14 >> 0x10 | uVar14 << 0x10;
  uVar23 = uVar7 >> 2 | uVar7 << 0x1e;
  uVar14 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
  uVar16 = uVar14 >> 0x10 | uVar14 << 0x10;
  uVar24 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar14 = uVar15 + uVar8 + (uVar11 & (uVar7 >> 2 | uVar7 << 0x1e) | uVar22 & (uVar11 ^ 0xffffffff))
           + 0x5a827999 + (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar25 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar17 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
  uVar18 = uVar17 >> 0x10 | uVar17 << 0x10;
  uVar17 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
  uVar19 = uVar17 >> 0x10 | uVar17 << 0x10;
  uVar11 = uVar16 + uVar22 +
           (uVar1 & (uVar11 >> 2 | uVar11 * 0x40000000) | uVar23 & (uVar1 ^ 0xffffffff)) +
           0x5a827999 + (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar22 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar1 = uVar18 + uVar23 +
          (uVar14 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar24 & (uVar14 ^ 0xffffffff)) + 0x5a827999
          + (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar26 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar14 = uVar19 + uVar24 +
           (uVar11 & (uVar14 >> 2 | uVar14 * 0x40000000) | uVar25 & (uVar11 ^ 0xffffffff)) +
           0x5a827999 + (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar17 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
  uVar23 = uVar17 >> 0x10 | uVar17 << 0x10;
  uVar17 = (param_2[7] & 0xff00ff00) >> 8 | (param_2[7] & 0xff00ff) << 8;
  uVar24 = uVar17 >> 0x10 | uVar17 << 0x10;
  uVar27 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar11 = uVar23 + uVar25 +
           (uVar1 & (uVar11 >> 2 | uVar11 * 0x40000000) | uVar22 & (uVar1 ^ 0xffffffff)) +
           0x5a827999 + (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar17 = (param_2[8] & 0xff00ff00) >> 8 | (param_2[8] & 0xff00ff) << 8;
  uVar25 = uVar17 >> 0x10 | uVar17 << 0x10;
  uVar28 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar1 = uVar24 + uVar22 +
          (uVar14 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar26 & (uVar14 ^ 0xffffffff)) + 0x5a827999
          + (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar22 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar14 = uVar25 + uVar26 +
           (uVar11 & (uVar14 >> 2 | uVar14 * 0x40000000) | uVar27 & (uVar11 ^ 0xffffffff)) +
           0x5a827999 + (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar17 = (param_2[9] & 0xff00ff00) >> 8 | (param_2[9] & 0xff00ff) << 8;
  uVar26 = uVar17 >> 0x10 | uVar17 << 0x10;
  uVar29 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar11 = uVar26 + uVar27 +
           (uVar1 & (uVar11 >> 2 | uVar11 * 0x40000000) | uVar28 & (uVar1 ^ 0xffffffff)) +
           0x5a827999 + (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar17 = (param_2[10] & 0xff00ff00) >> 8 | (param_2[10] & 0xff00ff) << 8;
  uVar27 = uVar17 >> 0x10 | uVar17 << 0x10;
  uVar17 = (param_2[0xb] & 0xff00ff00) >> 8 | (param_2[0xb] & 0xff00ff) << 8;
  uVar20 = uVar17 >> 0x10 | uVar17 << 0x10;
  uVar30 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar1 = uVar27 + uVar28 +
          (uVar14 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar22 & (uVar14 ^ 0xffffffff)) + 0x5a827999
          + (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar17 = (param_2[0xc] & 0xff00ff00) >> 8 | (param_2[0xc] & 0xff00ff) << 8;
  uVar28 = uVar17 >> 0x10 | uVar17 << 0x10;
  uVar31 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar14 = uVar20 + uVar22 +
           (uVar11 & (uVar14 >> 2 | uVar14 * 0x40000000) | uVar29 & (uVar11 ^ 0xffffffff)) +
           0x5a827999 + (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar17 = (param_2[0xd] & 0xff00ff00) >> 8 | (param_2[0xd] & 0xff00ff) << 8;
  uVar21 = uVar17 >> 0x10 | uVar17 << 0x10;
  uVar22 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar11 = uVar28 + uVar29 +
           (uVar1 & (uVar11 >> 2 | uVar11 * 0x40000000) | uVar30 & (uVar1 ^ 0xffffffff)) +
           0x5a827999 + (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar32 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar1 = uVar21 + uVar30 +
          (uVar14 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar31 & (uVar14 ^ 0xffffffff)) + 0x5a827999
          + (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar17 = (param_2[0xe] & 0xff00ff00) >> 8 | (param_2[0xe] & 0xff00ff) << 8;
  uVar29 = uVar17 >> 0x10 | uVar17 << 0x10;
  uVar17 = (param_2[0xf] & 0xff00ff00) >> 8 | (param_2[0xf] & 0xff00ff) << 8;
  uVar30 = uVar17 >> 0x10 | uVar17 << 0x10;
  uVar33 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar14 = uVar29 + uVar31 +
           (uVar11 & (uVar14 >> 2 | uVar14 * 0x40000000) | uVar22 & (uVar11 ^ 0xffffffff)) +
           0x5a827999 + (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar31 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar17 = uVar16 ^ uVar13 ^ uVar26 ^ uVar29;
  uVar11 = uVar30 + uVar22 +
           (uVar1 & (uVar11 >> 2 | uVar11 * 0x40000000) | uVar32 & (uVar1 ^ 0xffffffff)) +
           0x5a827999 + (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar22 = uVar15 ^ uVar12 ^ uVar25 ^ uVar21;
  uVar12 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar13 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar1 = (uVar22 >> 0x1f | uVar22 << 1) + uVar32 +
          (uVar14 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar33 & (uVar14 ^ 0xffffffff)) + 0x5a827999
          + (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar15 = uVar18 ^ uVar15 ^ uVar27 ^ uVar30;
  uVar32 = uVar15 >> 0x1f | uVar15 << 1;
  uVar16 = uVar19 ^ uVar16 ^ uVar20 ^ (uVar22 >> 0x1f | uVar22 << 1);
  uVar14 = (uVar17 >> 0x1f | uVar17 << 1) + uVar33 +
           (uVar11 & (uVar14 >> 2 | uVar14 * 0x40000000) | uVar31 & (uVar11 ^ 0xffffffff)) +
           0x5a827999 + (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar33 = uVar16 >> 0x1f | uVar16 << 1;
  uVar11 = uVar32 + uVar31 +
           (uVar1 & (uVar11 >> 2 | uVar11 * 0x40000000) | uVar12 & (uVar1 ^ 0xffffffff)) +
           0x5a827999 + (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar31 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar34 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar18 = uVar23 ^ uVar18 ^ uVar28 ^ (uVar17 >> 0x1f | uVar17 << 1);
  uVar19 = uVar24 ^ uVar19 ^ uVar21 ^ (uVar15 >> 0x1f | uVar15 << 1);
  uVar35 = uVar18 >> 0x1f | uVar18 << 1;
  uVar36 = uVar19 >> 0x1f | uVar19 << 1;
  uVar12 = uVar33 + uVar12 +
           (uVar14 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar13 & (uVar14 ^ 0xffffffff)) +
           0x5a827999 + (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar23 = uVar25 ^ uVar23 ^ uVar29 ^ (uVar16 >> 0x1f | uVar16 << 1);
  uVar37 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar13 = uVar35 + uVar13 + (uVar34 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar11) + 0x6ed9eba1 +
           (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar38 = uVar23 >> 0x1f | uVar23 << 1;
  uVar39 = uVar13 >> 2 | uVar13 * 0x40000000;
  uVar24 = uVar26 ^ uVar24 ^ uVar30 ^ (uVar18 >> 0x1f | uVar18 << 1);
  uVar1 = uVar36 + (uVar1 >> 2 | uVar1 * 0x40000000) +
          (uVar31 ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^ uVar12) + 0x6ed9eba1 +
          (uVar13 >> 0x1b | uVar13 * 0x20);
  uVar40 = uVar24 >> 0x1f | uVar24 << 1;
  uVar25 = uVar27 ^ uVar25 ^ (uVar22 >> 0x1f | uVar22 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1);
  uVar11 = uVar38 + uVar34 + (uVar37 ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar13) + 0x6ed9eba1 +
           (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar34 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar41 = uVar25 >> 0x1f | uVar25 << 1;
  uVar14 = uVar40 + uVar31 + (uVar39 ^ (uVar12 >> 2 | uVar12 * 0x40000000) ^ uVar1) + 0x6ed9eba1 +
           (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar31 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar26 = uVar20 ^ uVar26 ^ (uVar17 >> 0x1f | uVar17 << 1) ^ (uVar23 >> 0x1f | uVar23 << 1);
  uVar42 = uVar26 >> 0x1f | uVar26 << 1;
  uVar43 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar12 = uVar41 + uVar37 + (uVar34 ^ (uVar13 >> 2 | uVar13 * 0x40000000) ^ uVar11) + 0x6ed9eba1 +
           (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar13 = uVar28 ^ uVar27 ^ (uVar15 >> 0x1f | uVar15 << 1) ^ (uVar24 >> 0x1f | uVar24 << 1);
  uVar37 = uVar13 >> 0x1f | uVar13 << 1;
  uVar27 = uVar21 ^ uVar20 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar25 >> 0x1f | uVar25 << 1);
  uVar44 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar1 = uVar42 + uVar39 + (uVar31 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar14) + 0x6ed9eba1 +
          (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar39 = uVar27 >> 0x1f | uVar27 << 1;
  uVar11 = uVar37 + uVar34 + (uVar43 ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar12) + 0x6ed9eba1 +
           (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar20 = uVar29 ^ uVar28 ^ (uVar18 >> 0x1f | uVar18 << 1) ^ (uVar26 >> 0x1f | uVar26 << 1);
  uVar34 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar45 = uVar20 >> 0x1f | uVar20 << 1;
  uVar46 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar28 = uVar30 ^ uVar21 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1);
  uVar14 = uVar39 + uVar31 + (uVar44 ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^ uVar1) + 0x6ed9eba1 +
           (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar31 = uVar28 >> 0x1f | uVar28 << 1;
  uVar12 = uVar45 + uVar43 + (uVar34 ^ (uVar12 >> 2 | uVar12 * 0x40000000) ^ uVar11) + 0x6ed9eba1 +
           (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar43 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar21 = uVar29 ^ (uVar22 >> 0x1f | uVar22 << 1) ^ (uVar23 >> 0x1f | uVar23 << 1) ^
           (uVar27 >> 0x1f | uVar27 << 1);
  uVar47 = uVar21 >> 0x1f | uVar21 << 1;
  uVar1 = uVar31 + uVar44 + (uVar46 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar14) + 0x6ed9eba1 +
          (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar29 = uVar30 ^ (uVar17 >> 0x1f | uVar17 << 1) ^ (uVar24 >> 0x1f | uVar24 << 1) ^
           (uVar20 >> 0x1f | uVar20 << 1);
  uVar30 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar44 = uVar29 >> 0x1f | uVar29 << 1;
  uVar11 = uVar47 + uVar34 + (uVar43 ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar12) + 0x6ed9eba1 +
           (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar34 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar22 = uVar32 ^ (uVar22 >> 0x1f | uVar22 << 1) ^ (uVar25 >> 0x1f | uVar25 << 1) ^
           (uVar28 >> 0x1f | uVar28 << 1);
  uVar32 = uVar22 >> 0x1f | uVar22 << 1;
  uVar17 = uVar33 ^ (uVar17 >> 0x1f | uVar17 << 1) ^ (uVar26 >> 0x1f | uVar26 << 1) ^
           (uVar21 >> 0x1f | uVar21 << 1);
  uVar33 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar14 = uVar44 + uVar46 + (uVar30 ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^ uVar1) + 0x6ed9eba1 +
           (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar46 = uVar17 >> 0x1f | uVar17 << 1;
  uVar12 = uVar32 + uVar43 + (uVar34 ^ (uVar12 >> 2 | uVar12 * 0x40000000) ^ uVar11) + 0x6ed9eba1 +
           (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar15 = uVar35 ^ (uVar15 >> 0x1f | uVar15 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1) ^
           (uVar29 >> 0x1f | uVar29 << 1);
  uVar35 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar1 = uVar46 + uVar30 + (uVar33 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar14) + 0x6ed9eba1 +
          (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar43 = uVar15 >> 0x1f | uVar15 << 1;
  uVar30 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar16 = uVar36 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar27 >> 0x1f | uVar27 << 1) ^
           (uVar22 >> 0x1f | uVar22 << 1);
  uVar36 = uVar16 >> 0x1f | uVar16 << 1;
  uVar11 = uVar43 + uVar34 + (uVar35 ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar12) + 0x6ed9eba1 +
           (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar34 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar18 = uVar38 ^ (uVar18 >> 0x1f | uVar18 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1) ^
           (uVar17 >> 0x1f | uVar17 << 1);
  uVar38 = uVar18 >> 0x1f | uVar18 << 1;
  uVar48 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar14 = uVar36 + uVar33 + (uVar30 ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^ uVar1) + 0x6ed9eba1 +
           (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar19 = uVar40 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar28 >> 0x1f | uVar28 << 1) ^
           (uVar15 >> 0x1f | uVar15 << 1);
  uVar12 = uVar38 + uVar35 + (uVar34 ^ (uVar12 >> 2 | uVar12 * 0x40000000) ^ uVar11) + 0x6ed9eba1 +
           (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar33 = uVar19 >> 0x1f | uVar19 << 1;
  uVar35 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar23 = uVar41 ^ (uVar23 >> 0x1f | uVar23 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1) ^
           (uVar16 >> 0x1f | uVar16 << 1);
  uVar40 = uVar23 >> 0x1f | uVar23 << 1;
  uVar24 = uVar42 ^ (uVar24 >> 0x1f | uVar24 << 1) ^ (uVar29 >> 0x1f | uVar29 << 1) ^
           (uVar18 >> 0x1f | uVar18 << 1);
  uVar41 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar1 = uVar33 + uVar30 + (uVar48 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar14) + 0x6ed9eba1 +
          (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar42 = uVar24 >> 0x1f | uVar24 << 1;
  uVar11 = uVar40 + uVar34 + (uVar35 ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar12) + 0x6ed9eba1 +
           (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar25 = uVar37 ^ (uVar25 >> 0x1f | uVar25 << 1) ^ (uVar22 >> 0x1f | uVar22 << 1) ^
           (uVar19 >> 0x1f | uVar19 << 1);
  uVar14 = uVar42 + uVar48 + (uVar41 ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^ uVar1) + 0x6ed9eba1 +
           (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar34 = uVar25 >> 0x1f | uVar25 << 1;
  uVar26 = uVar39 ^ (uVar26 >> 0x1f | uVar26 << 1) ^ (uVar17 >> 0x1f | uVar17 << 1) ^
           (uVar23 >> 0x1f | uVar23 << 1);
  uVar37 = uVar26 >> 0x1f | uVar26 << 1;
  uVar12 = uVar34 + uVar35 +
           ((uVar11 | uVar1 >> 2 | uVar1 * 0x40000000) & (uVar12 >> 2 | uVar12 * 0x40000000) |
           uVar11 & (uVar1 >> 2 | uVar1 * 0x40000000)) +
           (uVar14 >> 0x1b | uVar14 * 0x20) + 0x8f1bbcdc;
  uVar30 = uVar45 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1) ^
           (uVar24 >> 0x1f | uVar24 << 1);
  iVar2 = uVar37 + uVar41 +
          ((uVar14 | uVar11 >> 2 | uVar11 * 0x40000000) & (uVar1 >> 2 | uVar1 * 0x40000000) |
          uVar14 & (uVar11 >> 2 | uVar11 * 0x40000000)) + (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar35 = uVar30 >> 0x1f | uVar30 << 1;
  uVar13 = iVar2 + 0x8f1bbcdc;
  uVar27 = uVar31 ^ (uVar27 >> 0x1f | uVar27 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1) ^
           (uVar25 >> 0x1f | uVar25 << 1);
  iVar3 = uVar35 + (uVar1 >> 2 | uVar1 * 0x40000000) +
          ((uVar12 | uVar14 >> 2 | uVar14 * 0x40000000) & (uVar11 >> 2 | uVar11 * 0x40000000) |
          uVar12 & (uVar14 >> 2 | uVar14 * 0x40000000)) + (uVar13 >> 0x1b | uVar13 * 0x20);
  uVar31 = uVar27 >> 0x1f | uVar27 << 1;
  uVar1 = iVar3 + 0x8f1bbcdc;
  uVar20 = uVar47 ^ (uVar20 >> 0x1f | uVar20 << 1) ^ (uVar18 >> 0x1f | uVar18 << 1) ^
           (uVar26 >> 0x1f | uVar26 << 1);
  iVar4 = uVar31 + (uVar11 >> 2 | uVar11 * 0x40000000) +
          ((uVar13 | uVar12 >> 2 | uVar12 * 0x40000000) & (uVar14 >> 2 | uVar14 * 0x40000000) |
          uVar13 & (uVar12 >> 2 | uVar12 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar11 = iVar4 + 0x8f1bbcdc;
  uVar39 = uVar20 >> 0x1f | uVar20 << 1;
  uVar28 = uVar44 ^ (uVar28 >> 0x1f | uVar28 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1) ^
           (uVar30 >> 0x1f | uVar30 << 1);
  iVar5 = uVar39 + (uVar14 >> 2 | uVar14 * 0x40000000) +
          ((uVar1 | uVar13 >> 2 | iVar2 * 0x40000000) & (uVar12 >> 2 | uVar12 * 0x40000000) |
          uVar1 & (uVar13 >> 2 | iVar2 * 0x40000000)) + (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar14 = iVar5 + 0x8f1bbcdc;
  uVar41 = uVar28 >> 0x1f | uVar28 << 1;
  uVar21 = uVar32 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar23 >> 0x1f | uVar23 << 1) ^
           (uVar27 >> 0x1f | uVar27 << 1);
  iVar6 = uVar41 + (uVar12 >> 2 | uVar12 * 0x40000000) +
          ((uVar11 | uVar1 >> 2 | iVar3 * 0x40000000) & (uVar13 >> 2 | iVar2 * 0x40000000) |
          uVar11 & (uVar1 >> 2 | iVar3 * 0x40000000)) + (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar32 = uVar21 >> 0x1f | uVar21 << 1;
  uVar12 = iVar6 + 0x8f1bbcdc;
  uVar29 = uVar46 ^ (uVar29 >> 0x1f | uVar29 << 1) ^ (uVar24 >> 0x1f | uVar24 << 1) ^
           (uVar20 >> 0x1f | uVar20 << 1);
  uVar44 = uVar29 >> 0x1f | uVar29 << 1;
  iVar2 = uVar32 + (uVar13 >> 2 | iVar2 * 0x40000000) +
          ((uVar14 | uVar11 >> 2 | iVar4 * 0x40000000) & (uVar1 >> 2 | iVar3 * 0x40000000) |
          uVar14 & (uVar11 >> 2 | iVar4 * 0x40000000)) + (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar13 = iVar2 + 0x8f1bbcdc;
  uVar22 = uVar43 ^ (uVar22 >> 0x1f | uVar22 << 1) ^ (uVar25 >> 0x1f | uVar25 << 1) ^
           (uVar28 >> 0x1f | uVar28 << 1);
  iVar3 = uVar44 + (uVar1 >> 2 | iVar3 * 0x40000000) +
          ((uVar12 | uVar14 >> 2 | iVar5 * 0x40000000) & (uVar11 >> 2 | iVar4 * 0x40000000) |
          uVar12 & (uVar14 >> 2 | iVar5 * 0x40000000)) + (uVar13 >> 0x1b | uVar13 * 0x20);
  uVar43 = uVar22 >> 0x1f | uVar22 << 1;
  uVar1 = iVar3 + 0x8f1bbcdc;
  uVar17 = uVar36 ^ (uVar17 >> 0x1f | uVar17 << 1) ^ (uVar26 >> 0x1f | uVar26 << 1) ^
           (uVar21 >> 0x1f | uVar21 << 1);
  iVar4 = uVar43 + (uVar11 >> 2 | iVar4 * 0x40000000) +
          ((uVar13 | uVar12 >> 2 | iVar6 * 0x40000000) & (uVar14 >> 2 | iVar5 * 0x40000000) |
          uVar13 & (uVar12 >> 2 | iVar6 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar36 = uVar17 >> 0x1f | uVar17 << 1;
  uVar11 = iVar4 + 0x8f1bbcdc;
  uVar15 = uVar38 ^ (uVar15 >> 0x1f | uVar15 << 1) ^ (uVar30 >> 0x1f | uVar30 << 1) ^
           (uVar29 >> 0x1f | uVar29 << 1);
  iVar5 = uVar36 + (uVar14 >> 2 | iVar5 * 0x40000000) +
          ((uVar1 | uVar13 >> 2 | iVar2 * 0x40000000) & (uVar12 >> 2 | iVar6 * 0x40000000) |
          uVar1 & (uVar13 >> 2 | iVar2 * 0x40000000)) + (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar38 = uVar15 >> 0x1f | uVar15 << 1;
  uVar14 = iVar5 + 0x8f1bbcdc;
  uVar16 = uVar33 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar27 >> 0x1f | uVar27 << 1) ^
           (uVar22 >> 0x1f | uVar22 << 1);
  iVar6 = uVar38 + (uVar12 >> 2 | iVar6 * 0x40000000) +
          ((uVar11 | uVar1 >> 2 | iVar3 * 0x40000000) & (uVar13 >> 2 | iVar2 * 0x40000000) |
          uVar11 & (uVar1 >> 2 | iVar3 * 0x40000000)) + (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar33 = uVar16 >> 0x1f | uVar16 << 1;
  uVar12 = iVar6 + 0x8f1bbcdc;
  uVar18 = uVar40 ^ (uVar18 >> 0x1f | uVar18 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1) ^
           (uVar17 >> 0x1f | uVar17 << 1);
  iVar2 = uVar33 + (uVar13 >> 2 | iVar2 * 0x40000000) +
          ((uVar14 | uVar11 >> 2 | iVar4 * 0x40000000) & (uVar1 >> 2 | iVar3 * 0x40000000) |
          uVar14 & (uVar11 >> 2 | iVar4 * 0x40000000)) + (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar13 = iVar2 + 0x8f1bbcdc;
  uVar40 = uVar18 >> 0x1f | uVar18 << 1;
  uVar19 = uVar42 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar28 >> 0x1f | uVar28 << 1) ^
           (uVar15 >> 0x1f | uVar15 << 1);
  iVar3 = uVar40 + (uVar1 >> 2 | iVar3 * 0x40000000) +
          ((uVar12 | uVar14 >> 2 | iVar5 * 0x40000000) & (uVar11 >> 2 | iVar4 * 0x40000000) |
          uVar12 & (uVar14 >> 2 | iVar5 * 0x40000000)) + (uVar13 >> 0x1b | uVar13 * 0x20);
  uVar42 = uVar19 >> 0x1f | uVar19 << 1;
  uVar25 = uVar35 ^ (uVar25 >> 0x1f | uVar25 << 1) ^ (uVar22 >> 0x1f | uVar22 << 1) ^
           (uVar19 >> 0x1f | uVar19 << 1);
  uVar1 = iVar3 + 0x8f1bbcdc;
  uVar23 = uVar34 ^ (uVar23 >> 0x1f | uVar23 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1) ^
           (uVar16 >> 0x1f | uVar16 << 1);
  iVar4 = uVar42 + (uVar11 >> 2 | iVar4 * 0x40000000) +
          ((uVar13 | uVar12 >> 2 | iVar6 * 0x40000000) & (uVar14 >> 2 | iVar5 * 0x40000000) |
          uVar13 & (uVar12 >> 2 | iVar6 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar11 = iVar4 + 0x8f1bbcdc;
  uVar34 = uVar23 >> 0x1f | uVar23 << 1;
  uVar24 = uVar37 ^ (uVar24 >> 0x1f | uVar24 << 1) ^ (uVar29 >> 0x1f | uVar29 << 1) ^
           (uVar18 >> 0x1f | uVar18 << 1);
  iVar5 = uVar34 + (uVar14 >> 2 | iVar5 * 0x40000000) +
          ((uVar1 | uVar13 >> 2 | iVar2 * 0x40000000) & (uVar12 >> 2 | iVar6 * 0x40000000) |
          uVar1 & (uVar13 >> 2 | iVar2 * 0x40000000)) + (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar35 = uVar24 >> 0x1f | uVar24 << 1;
  uVar14 = iVar5 + 0x8f1bbcdc;
  iVar6 = uVar35 + (uVar12 >> 2 | iVar6 * 0x40000000) +
          ((uVar11 | uVar1 >> 2 | iVar3 * 0x40000000) & (uVar13 >> 2 | iVar2 * 0x40000000) |
          uVar11 & (uVar1 >> 2 | iVar3 * 0x40000000)) + (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar37 = uVar25 >> 0x1f | uVar25 << 1;
  uVar12 = iVar6 + 0x8f1bbcdc;
  uVar26 = uVar31 ^ (uVar26 >> 0x1f | uVar26 << 1) ^ (uVar17 >> 0x1f | uVar17 << 1) ^
           (uVar23 >> 0x1f | uVar23 << 1);
  iVar2 = uVar37 + (uVar13 >> 2 | iVar2 * 0x40000000) +
          ((uVar14 | uVar11 >> 2 | iVar4 * 0x40000000) & (uVar1 >> 2 | iVar3 * 0x40000000) |
          uVar14 & (uVar11 >> 2 | iVar4 * 0x40000000)) + (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar31 = uVar26 >> 0x1f | uVar26 << 1;
  uVar13 = iVar2 + 0x8f1bbcdc;
  uVar30 = uVar39 ^ (uVar30 >> 0x1f | uVar30 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1) ^
           (uVar24 >> 0x1f | uVar24 << 1);
  iVar3 = uVar31 + (uVar1 >> 2 | iVar3 * 0x40000000) +
          ((uVar12 | uVar14 >> 2 | iVar5 * 0x40000000) & (uVar11 >> 2 | iVar4 * 0x40000000) |
          uVar12 & (uVar14 >> 2 | iVar5 * 0x40000000)) + (uVar13 >> 0x1b | uVar13 * 0x20);
  uVar39 = uVar30 >> 0x1f | uVar30 << 1;
  uVar1 = iVar3 + 0x8f1bbcdc;
  uVar27 = uVar41 ^ (uVar27 >> 0x1f | uVar27 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1) ^
           (uVar25 >> 0x1f | uVar25 << 1);
  uVar41 = uVar1 >> 2 | iVar3 * 0x40000000;
  iVar4 = uVar39 + (uVar11 >> 2 | iVar4 * 0x40000000) +
          ((uVar13 | uVar12 >> 2 | iVar6 * 0x40000000) & (uVar14 >> 2 | iVar5 * 0x40000000) |
          uVar13 & (uVar12 >> 2 | iVar6 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar45 = uVar27 >> 0x1f | uVar27 << 1;
  uVar11 = iVar4 + 0x8f1bbcdc;
  uVar20 = uVar32 ^ (uVar20 >> 0x1f | uVar20 << 1) ^ (uVar18 >> 0x1f | uVar18 << 1) ^
           (uVar26 >> 0x1f | uVar26 << 1);
  uVar32 = uVar20 >> 0x1f | uVar20 << 1;
  iVar5 = uVar45 + (uVar14 >> 2 | iVar5 * 0x40000000) +
          ((uVar1 | uVar13 >> 2 | iVar2 * 0x40000000) & (uVar12 >> 2 | iVar6 * 0x40000000) |
          uVar1 & (uVar13 >> 2 | iVar2 * 0x40000000)) + (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar14 = iVar5 + 0x8f1bbcdc;
  uVar28 = uVar44 ^ (uVar28 >> 0x1f | uVar28 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1) ^
           (uVar30 >> 0x1f | uVar30 << 1);
  uVar44 = uVar11 >> 2 | iVar4 * 0x40000000;
  uVar46 = uVar28 >> 0x1f | uVar28 << 1;
  uVar47 = uVar14 >> 2 | iVar5 * 0x40000000;
  uVar12 = uVar32 + (uVar12 >> 2 | iVar6 * 0x40000000) +
           (uVar41 ^ (uVar13 >> 2 | iVar2 * 0x40000000) ^ uVar11) + -0x359d3e2a +
           (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar21 = uVar43 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar23 >> 0x1f | uVar23 << 1) ^
           (uVar27 >> 0x1f | uVar27 << 1);
  uVar43 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar48 = uVar21 >> 0x1f | uVar21 << 1;
  uVar1 = uVar46 + (uVar13 >> 2 | iVar2 * 0x40000000) +
          (uVar44 ^ (uVar1 >> 2 | iVar3 * 0x40000000) ^ uVar14) + -0x359d3e2a +
          (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar13 = uVar36 ^ (uVar29 >> 0x1f | uVar29 << 1) ^ (uVar24 >> 0x1f | uVar24 << 1) ^
           (uVar20 >> 0x1f | uVar20 << 1);
  uVar29 = uVar13 >> 0x1f | uVar13 << 1;
  uVar11 = uVar48 + uVar41 + (uVar47 ^ (uVar11 >> 2 | iVar4 * 0x40000000) ^ uVar12) + -0x359d3e2a +
           (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar36 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar22 = uVar38 ^ (uVar22 >> 0x1f | uVar22 << 1) ^ (uVar25 >> 0x1f | uVar25 << 1) ^
           (uVar28 >> 0x1f | uVar28 << 1);
  uVar38 = uVar22 >> 0x1f | uVar22 << 1;
  uVar17 = uVar33 ^ (uVar17 >> 0x1f | uVar17 << 1) ^ (uVar26 >> 0x1f | uVar26 << 1) ^
           (uVar21 >> 0x1f | uVar21 << 1);
  uVar33 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar14 = uVar29 + uVar44 + (uVar43 ^ (uVar14 >> 2 | iVar5 * 0x40000000) ^ uVar1) + -0x359d3e2a +
           (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar41 = uVar17 >> 0x1f | uVar17 << 1;
  uVar15 = uVar40 ^ (uVar15 >> 0x1f | uVar15 << 1) ^ (uVar30 >> 0x1f | uVar30 << 1) ^
           (uVar13 >> 0x1f | uVar13 << 1);
  uVar40 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar12 = uVar38 + uVar47 + (uVar36 ^ (uVar12 >> 2 | uVar12 * 0x40000000) ^ uVar11) + -0x359d3e2a +
           (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar16 = uVar42 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar27 >> 0x1f | uVar27 << 1) ^
           (uVar22 >> 0x1f | uVar22 << 1);
  uVar42 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar1 = uVar41 + uVar43 + (uVar33 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar14) + -0x359d3e2a +
          (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar18 = uVar34 ^ (uVar18 >> 0x1f | uVar18 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1) ^
           (uVar17 >> 0x1f | uVar17 << 1);
  uVar34 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar11 = (uVar15 >> 0x1f | uVar15 << 1) + uVar36 +
           (uVar40 ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar12) + -0x359d3e2a +
           (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar36 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar19 = uVar35 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar28 >> 0x1f | uVar28 << 1) ^
           (uVar15 >> 0x1f | uVar15 << 1);
  uVar14 = (uVar16 >> 0x1f | uVar16 << 1) + uVar33 +
           (uVar42 ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^ uVar1) + -0x359d3e2a +
           (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar23 = uVar37 ^ (uVar23 >> 0x1f | uVar23 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1) ^
           (uVar16 >> 0x1f | uVar16 << 1);
  uVar33 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar12 = (uVar18 >> 0x1f | uVar18 << 1) + uVar40 +
           (uVar34 ^ (uVar12 >> 2 | uVar12 * 0x40000000) ^ uVar11) + -0x359d3e2a +
           (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar24 = uVar31 ^ (uVar24 >> 0x1f | uVar24 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1) ^
           (uVar18 >> 0x1f | uVar18 << 1);
  uVar31 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar1 = (uVar19 >> 0x1f | uVar19 << 1) + uVar42 +
          (uVar36 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar14) + -0x359d3e2a +
          (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar22 = uVar39 ^ (uVar25 >> 0x1f | uVar25 << 1) ^ (uVar22 >> 0x1f | uVar22 << 1) ^
           (uVar19 >> 0x1f | uVar19 << 1);
  uVar25 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar11 = (uVar23 >> 0x1f | uVar23 << 1) + uVar34 +
           (uVar33 ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar12) + -0x359d3e2a +
           (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar14 = (uVar24 >> 0x1f | uVar24 << 1) + uVar36 +
           (uVar31 ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^ uVar1) + -0x359d3e2a +
           (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar34 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar17 = uVar45 ^ (uVar26 >> 0x1f | uVar26 << 1) ^ (uVar17 >> 0x1f | uVar17 << 1) ^
           (uVar23 >> 0x1f | uVar23 << 1);
  uVar15 = uVar32 ^ (uVar30 >> 0x1f | uVar30 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1) ^
           (uVar24 >> 0x1f | uVar24 << 1);
  uVar12 = (uVar22 >> 0x1f | uVar22 << 1) + uVar33 +
           (uVar25 ^ (uVar12 >> 2 | uVar12 * 0x40000000) ^ uVar11) + -0x359d3e2a +
           (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar26 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar22 = uVar46 ^ (uVar27 >> 0x1f | uVar27 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1) ^
           (uVar22 >> 0x1f | uVar22 << 1);
  uVar16 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar1 = (uVar17 >> 0x1f | uVar17 << 1) + uVar31 +
          (uVar34 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar14) + -0x359d3e2a +
          (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar27 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar11 = (uVar15 >> 0x1f | uVar15 << 1) + uVar25 +
           (uVar26 ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar12) + -0x359d3e2a +
           (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar17 = uVar48 ^ (uVar20 >> 0x1f | uVar20 << 1) ^ (uVar18 >> 0x1f | uVar18 << 1) ^
           (uVar17 >> 0x1f | uVar17 << 1);
  uVar14 = (uVar22 >> 0x1f | uVar22 << 1) + uVar34 +
           (uVar16 ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^ uVar1) + -0x359d3e2a +
           (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar13 = uVar41 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar24 >> 0x1f | uVar24 << 1) ^
           (uVar17 >> 0x1f | uVar17 << 1);
  uVar15 = uVar29 ^ (uVar28 >> 0x1f | uVar28 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1) ^
           (uVar15 >> 0x1f | uVar15 << 1);
  uVar18 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar12 = (uVar17 >> 0x1f | uVar17 << 1) + uVar26 +
           (uVar27 ^ (uVar12 >> 2 | uVar12 * 0x40000000) ^ uVar11) + -0x359d3e2a +
           (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar17 = uVar38 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar23 >> 0x1f | uVar23 << 1) ^
           (uVar22 >> 0x1f | uVar22 << 1);
  uVar22 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar1 = (uVar15 >> 0x1f | uVar15 << 1) + uVar16 +
          (uVar18 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar14) + -0x359d3e2a +
          (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar15 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar11 = (uVar17 >> 0x1f | uVar17 << 1) + uVar27 +
           (uVar22 ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^ uVar12) + -0x359d3e2a +
           (uVar1 >> 0x1b | uVar1 * 0x20);
  *param_1 = uVar7 + (uVar13 >> 0x1f | uVar13 << 1) + uVar18 +
             (uVar15 ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^ uVar1) + -0x359d3e2a +
             (uVar11 >> 0x1b | uVar11 * 0x20);
  param_1[1] = uVar11 + uVar9;
  param_1[2] = (uVar1 >> 2 | uVar1 * 0x40000000) + uVar8;
  param_1[3] = uVar15 + uVar10;
  param_1[4] = uVar22 + param_1[4];
  return;
}


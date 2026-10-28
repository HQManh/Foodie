// rea decompile_all
// name: System.Security.Cryptography.RIPEMD160Managed$$MDTransform
// address: 0x74666b4
// body: available
// range: 0x74666b4-0x7467d33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_RIPEMD160Managed__MDTransform
               (int *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  
  iVar6 = *param_2;
  uVar14 = param_2[1];
  uVar7 = param_2[2];
  uVar15 = param_2[3];
  iVar24 = param_2[4];
  System_Security_Cryptography_Utils__DWORDFromLittleEndian(param_1,0x10,param_3,0);
  iVar8 = *param_1;
  iVar16 = param_1[1];
  uVar25 = uVar7 >> 0x16 | uVar7 << 10;
  uVar1 = (uVar7 ^ uVar14 ^ uVar15) + iVar6 + iVar8;
  iVar9 = param_1[4];
  iVar17 = param_1[5];
  uVar26 = uVar14 >> 0x16 | uVar14 << 10;
  iVar10 = param_1[2];
  iVar18 = param_1[3];
  uVar1 = (uVar1 >> 0x15 | uVar1 * 0x800) + iVar24;
  uVar2 = iVar16 + iVar24 + (uVar14 ^ (uVar7 >> 0x16 | uVar7 << 10) ^ uVar1);
  uVar3 = iVar6 + iVar17 + 0x50a28be6 + ((uVar7 | uVar15 ^ 0xffffffff) ^ uVar14);
  iVar6 = param_1[0xe];
  iVar19 = param_1[0xf];
  uVar2 = (uVar2 >> 0x12 | uVar2 * 0x4000) + uVar15;
  uVar3 = (uVar3 >> 0x18 | uVar3 * 0x100) + iVar24;
  uVar4 = iVar10 + uVar15 + (uVar1 ^ (uVar14 >> 0x16 | uVar14 << 10) ^ uVar2);
  iVar11 = param_1[6];
  iVar20 = param_1[7];
  uVar7 = iVar24 + iVar6 + 0x50a28be6 +
          (uVar3 ^ (uVar14 | (uVar7 >> 0x16 | uVar7 << 10) ^ 0xffffffff));
  uVar4 = (uVar4 >> 0x11 | uVar4 * 0x8000) + uVar25;
  uVar7 = (uVar7 >> 0x17 | uVar7 * 0x200) + uVar15;
  uVar5 = iVar18 + uVar25 + (uVar2 ^ (uVar1 >> 0x16 | uVar1 * 0x400) ^ uVar4);
  iVar24 = param_1[8];
  iVar21 = param_1[9];
  iVar12 = param_1[10];
  iVar22 = param_1[0xb];
  iVar13 = param_1[0xc];
  iVar23 = param_1[0xd];
  uVar14 = uVar15 + iVar20 + 0x50a28be6 +
           (uVar7 ^ (uVar3 | (uVar14 >> 0x16 | uVar14 << 10) ^ 0xffffffff));
  uVar5 = (uVar5 >> 0x14 | uVar5 * 0x1000) + uVar26;
  uVar14 = (uVar14 >> 0x17 | uVar14 * 0x200) + uVar25;
  uVar15 = iVar9 + uVar26 + (uVar4 ^ (uVar2 >> 0x16 | uVar2 * 0x400) ^ uVar5);
  uVar27 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = uVar25 + iVar8 + 0x50a28be6 +
          (uVar14 ^ (uVar7 | (uVar3 >> 0x16 | uVar3 * 0x400) ^ 0xffffffff));
  uVar15 = (uVar15 >> 0x1b | uVar15 * 0x20) + uVar27;
  uVar1 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar26;
  uVar25 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = uVar27 + iVar17 + (uVar5 ^ (uVar4 >> 0x16 | uVar4 * 0x400) ^ uVar15);
  uVar27 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = uVar26 + iVar21 + 0x50a28be6 +
          (uVar1 ^ (uVar14 | (uVar7 >> 0x16 | uVar7 * 0x400) ^ 0xffffffff));
  uVar3 = (uVar3 >> 0x18 | uVar3 * 0x100) + uVar27;
  uVar26 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar2 = (uVar2 >> 0x13 | uVar2 * 0x2000) + uVar25;
  uVar28 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar4 = uVar27 + iVar11 + (uVar15 ^ (uVar5 >> 0x16 | uVar5 * 0x400) ^ uVar3);
  uVar7 = iVar10 + uVar25 + 0x50a28be6 +
          (uVar2 ^ (uVar1 | (uVar14 >> 0x16 | uVar14 * 0x400) ^ 0xffffffff));
  uVar4 = (uVar4 >> 0x19 | uVar4 * 0x80) + uVar26;
  uVar7 = (uVar7 >> 0x11 | uVar7 * 0x8000) + uVar28;
  uVar25 = uVar26 + iVar20 + (uVar3 ^ (uVar15 >> 0x16 | uVar15 * 0x400) ^ uVar4);
  uVar26 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = iVar22 + uVar28 + 0x50a28be6 +
          (uVar7 ^ (uVar2 | (uVar1 >> 0x16 | uVar1 * 0x400) ^ 0xffffffff));
  uVar27 = uVar14 >> 0x16 | uVar14 * 0x400;
  uVar14 = (uVar25 >> 0x17 | uVar25 * 0x200) + uVar26;
  uVar25 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar5 >> 0x11 | uVar5 * 0x8000) + uVar27;
  uVar5 = uVar26 + iVar24 + (uVar4 ^ (uVar3 >> 0x16 | uVar3 * 0x400) ^ uVar14);
  uVar26 = uVar15 >> 0x16 | uVar15 * 0x400;
  uVar15 = iVar9 + uVar27 + 0x50a28be6 +
           (uVar1 ^ (uVar7 | (uVar2 >> 0x16 | uVar2 * 0x400) ^ 0xffffffff));
  uVar27 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar5 >> 0x15 | uVar5 * 0x800) + uVar26;
  uVar5 = (uVar15 >> 0x1b | uVar15 * 0x20) + uVar25;
  uVar15 = uVar26 + iVar21 + (uVar14 ^ (uVar4 >> 0x16 | uVar4 * 0x400) ^ uVar2);
  uVar26 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = iVar23 + uVar25 + 0x50a28be6 +
          (uVar5 ^ (uVar1 | (uVar7 >> 0x16 | uVar7 * 0x400) ^ 0xffffffff));
  uVar15 = (uVar15 >> 0x13 | uVar15 * 0x2000) + uVar26;
  uVar3 = (uVar3 >> 0x19 | uVar3 * 0x80) + uVar27;
  uVar25 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar7 = uVar26 + iVar12 + (uVar2 ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^ uVar15);
  uVar26 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = iVar11 + uVar27 + 0x50a28be6 +
          (uVar3 ^ (uVar5 | (uVar1 >> 0x16 | uVar1 * 0x400) ^ 0xffffffff));
  uVar7 = (uVar7 >> 0x12 | uVar7 * 0x4000) + uVar26;
  uVar4 = (uVar4 >> 0x19 | uVar4 * 0x80) + uVar25;
  uVar27 = uVar14 >> 0x16 | uVar14 * 0x400;
  uVar14 = uVar26 + iVar22 + (uVar15 ^ (uVar2 >> 0x16 | uVar2 * 0x400) ^ uVar7);
  uVar26 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = iVar19 + uVar25 + 0x50a28be6 +
          (uVar4 ^ (uVar3 | (uVar5 >> 0x16 | uVar5 * 0x400) ^ 0xffffffff));
  uVar25 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = (uVar14 >> 0x11 | uVar14 * 0x8000) + uVar27;
  uVar1 = (uVar1 >> 0x18 | uVar1 * 0x100) + uVar26;
  uVar14 = uVar27 + iVar13 + (uVar7 ^ (uVar15 >> 0x16 | uVar15 * 0x400) ^ uVar5);
  uVar27 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = iVar24 + uVar26 + 0x50a28be6 +
          (uVar1 ^ (uVar4 | (uVar3 >> 0x16 | uVar3 * 0x400) ^ 0xffffffff));
  uVar14 = (uVar14 >> 0x1a | uVar14 * 0x40) + uVar27;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar25;
  uVar26 = uVar15 >> 0x16 | uVar15 * 0x400;
  uVar15 = uVar27 + iVar23 + (uVar5 ^ (uVar7 >> 0x16 | uVar7 * 0x400) ^ uVar14);
  uVar27 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = iVar16 + uVar25 + 0x50a28be6 +
          (uVar2 ^ (uVar1 | (uVar4 >> 0x16 | uVar4 * 0x400) ^ 0xffffffff));
  uVar15 = (uVar15 >> 0x19 | uVar15 * 0x80) + uVar26;
  uVar25 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar27;
  uVar4 = uVar26 + iVar6 + (uVar14 ^ (uVar5 >> 0x16 | uVar5 * 0x400) ^ uVar15);
  uVar26 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar7 = iVar12 + uVar27 + 0x50a28be6 +
          (uVar3 ^ (uVar2 | (uVar1 >> 0x16 | uVar1 * 0x400) ^ 0xffffffff));
  uVar4 = (uVar4 >> 0x17 | uVar4 * 0x200) + uVar26;
  uVar7 = (uVar7 >> 0x12 | uVar7 * 0x4000) + uVar25;
  uVar27 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = uVar26 + iVar19 + (uVar15 ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^ uVar4);
  uVar26 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = iVar18 + uVar25 + 0x50a28be6 +
          (uVar7 ^ (uVar3 | (uVar2 >> 0x16 | uVar2 * 0x400) ^ 0xffffffff));
  uVar25 = uVar15 >> 0x16 | uVar15 * 0x400;
  uVar5 = (uVar5 >> 0x18 | uVar5 * 0x100) + uVar27;
  uVar1 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar26;
  uVar28 = uVar14 >> 0x16 | uVar14 * 0x400;
  uVar14 = iVar20 + uVar27 + (uVar5 & uVar4) + (uVar25 & (uVar5 ^ 0xffffffff)) + 0x5a827999;
  uVar15 = iVar13 + uVar26 + 0x50a28be6 +
           (uVar1 ^ (uVar7 | (uVar3 >> 0x16 | uVar3 * 0x400) ^ 0xffffffff));
  uVar26 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar27 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar2 = (uVar14 >> 0x19 | uVar14 * 0x80) + uVar28;
  uVar4 = (uVar15 >> 0x1a | uVar15 * 0x40) + uVar26;
  uVar14 = iVar9 + uVar28 + (uVar2 & uVar5) + (uVar27 & (uVar2 ^ 0xffffffff)) + 0x5a827999;
  uVar15 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = iVar11 + uVar26 + (uVar1 & ((uVar7 >> 0x16 | uVar7 * 0x400) ^ 0xffffffff)) + 0x5c4dd124 +
          (uVar4 & (uVar7 >> 0x16 | uVar7 * 0x400));
  uVar26 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = (uVar14 >> 0x1a | uVar14 * 0x40) + uVar25;
  uVar3 = (uVar3 >> 0x17 | uVar3 * 0x200) + uVar15;
  uVar14 = iVar23 + uVar25 + (uVar5 & uVar2) + (uVar26 & (uVar5 ^ 0xffffffff)) + 0x5a827999;
  uVar15 = iVar22 + uVar15 + (uVar4 & ((uVar1 >> 0x16 | uVar1 * 0x400) ^ 0xffffffff)) + 0x5c4dd124 +
           (uVar3 & (uVar1 >> 0x16 | uVar1 * 0x400));
  uVar25 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar28 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar15 >> 0x13 | uVar15 * 0x2000) + uVar25;
  uVar7 = (uVar14 >> 0x18 | uVar14 * 0x100) + uVar27;
  uVar15 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = iVar16 + uVar27 + (uVar7 & uVar5) + (uVar28 & (uVar7 ^ 0xffffffff)) + 0x5a827999;
  uVar14 = iVar18 + uVar25 + (uVar3 & ((uVar4 >> 0x16 | uVar4 * 0x400) ^ 0xffffffff)) + 0x5c4dd124 +
           (uVar2 & (uVar4 >> 0x16 | uVar4 * 0x400));
  uVar25 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar14 >> 0x11 | uVar14 * 0x8000) + uVar25;
  uVar5 = (uVar5 >> 0x13 | uVar5 * 0x2000) + uVar26;
  uVar27 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar7 = iVar12 + uVar26 + (uVar5 & uVar7) + (uVar15 & (uVar5 ^ 0xffffffff)) + 0x5a827999;
  uVar14 = iVar20 + uVar25 + (uVar2 & ((uVar3 >> 0x16 | uVar3 * 0x400) ^ 0xffffffff)) + 0x5c4dd124 +
           (uVar1 & (uVar3 >> 0x16 | uVar3 * 0x400));
  uVar25 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = (uVar14 >> 0x19 | uVar14 * 0x80) + uVar25;
  uVar7 = (uVar7 >> 0x15 | uVar7 * 0x800) + uVar28;
  uVar26 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = iVar11 + uVar28 + (uVar7 & uVar5) + (uVar27 & (uVar7 ^ 0xffffffff)) + 0x5a827999;
  uVar14 = iVar8 + uVar25 + (uVar1 & ((uVar2 >> 0x16 | uVar2 * 0x400) ^ 0xffffffff)) + 0x5c4dd124 +
           (uVar4 & (uVar2 >> 0x16 | uVar2 * 0x400));
  uVar25 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = (uVar14 >> 0x14 | uVar14 * 0x1000) + uVar25;
  uVar5 = (uVar5 >> 0x17 | uVar5 * 0x200) + uVar15;
  uVar28 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar7 = iVar19 + uVar15 + (uVar5 & uVar7) + (uVar26 & (uVar5 ^ 0xffffffff)) + 0x5a827999;
  uVar14 = iVar23 + uVar25 + (uVar4 & ((uVar1 >> 0x16 | uVar1 * 0x400) ^ 0xffffffff)) + 0x5c4dd124 +
           (uVar3 & (uVar1 >> 0x16 | uVar1 * 0x400));
  uVar15 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar14 >> 0x18 | uVar14 * 0x100) + uVar15;
  uVar7 = (uVar7 >> 0x19 | uVar7 * 0x80) + uVar27;
  uVar25 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = iVar18 + uVar27 + (uVar7 & uVar5) + (uVar28 & (uVar7 ^ 0xffffffff)) + 0x5a827999;
  uVar14 = iVar17 + uVar15 + (uVar3 & ((uVar4 >> 0x16 | uVar4 * 0x400) ^ 0xffffffff)) + 0x5c4dd124 +
           (uVar2 & (uVar4 >> 0x16 | uVar4 * 0x400));
  uVar15 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar14 >> 0x17 | uVar14 * 0x200) + uVar15;
  uVar5 = (uVar5 >> 0x11 | uVar5 * 0x8000) + uVar26;
  uVar27 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar7 = iVar13 + uVar26 + (uVar5 & uVar7) + (uVar25 & (uVar5 ^ 0xffffffff)) + 0x5a827999;
  uVar14 = iVar12 + uVar15 + (uVar2 & ((uVar3 >> 0x16 | uVar3 * 0x400) ^ 0xffffffff)) + 0x5c4dd124 +
           (uVar1 & (uVar3 >> 0x16 | uVar3 * 0x400));
  uVar15 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = (uVar14 >> 0x15 | uVar14 * 0x800) + uVar15;
  uVar7 = (uVar7 >> 0x19 | uVar7 * 0x80) + uVar28;
  uVar26 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = iVar8 + uVar28 + (uVar7 & uVar5) + (uVar27 & (uVar7 ^ 0xffffffff)) + 0x5a827999;
  uVar14 = iVar6 + uVar15 + (uVar1 & ((uVar2 >> 0x16 | uVar2 * 0x400) ^ 0xffffffff)) + 0x5c4dd124 +
           (uVar4 & (uVar2 >> 0x16 | uVar2 * 0x400));
  uVar15 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = (uVar14 >> 0x19 | uVar14 * 0x80) + uVar15;
  uVar5 = (uVar5 >> 0x14 | uVar5 * 0x1000) + uVar25;
  uVar28 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar7 = iVar21 + uVar25 + (uVar5 & uVar7) + (uVar26 & (uVar5 ^ 0xffffffff)) + 0x5a827999;
  uVar14 = iVar19 + uVar15 + (uVar4 & ((uVar1 >> 0x16 | uVar1 * 0x400) ^ 0xffffffff)) + 0x5c4dd124 +
           (uVar3 & (uVar1 >> 0x16 | uVar1 * 0x400));
  uVar15 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar14 >> 0x19 | uVar14 * 0x80) + uVar15;
  uVar7 = (uVar7 >> 0x11 | uVar7 * 0x8000) + uVar27;
  uVar14 = iVar17 + uVar27 + (uVar7 & uVar5) + (uVar28 & (uVar7 ^ 0xffffffff)) + 0x5a827999;
  uVar15 = iVar24 + uVar15 + (uVar3 & ((uVar4 >> 0x16 | uVar4 * 0x400) ^ 0xffffffff)) + 0x5c4dd124 +
           (uVar2 & (uVar4 >> 0x16 | uVar4 * 0x400));
  uVar25 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar27 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar1 = (uVar15 >> 0x14 | uVar15 * 0x1000) + uVar25;
  uVar5 = (uVar14 >> 0x17 | uVar14 * 0x200) + uVar26;
  uVar14 = iVar10 + uVar26 + (uVar5 & uVar7) + (uVar27 & (uVar5 ^ 0xffffffff)) + 0x5a827999;
  uVar15 = iVar13 + uVar25 + (uVar2 & ((uVar3 >> 0x16 | uVar3 * 0x400) ^ 0xffffffff)) + 0x5c4dd124 +
           (uVar1 & (uVar3 >> 0x16 | uVar3 * 0x400));
  uVar25 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar26 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar4 = (uVar15 >> 0x19 | uVar15 * 0x80) + uVar25;
  uVar7 = (uVar14 >> 0x15 | uVar14 * 0x800) + uVar28;
  uVar15 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = iVar6 + uVar28 + (uVar7 & uVar5) + (uVar26 & (uVar7 ^ 0xffffffff)) + 0x5a827999;
  uVar14 = iVar9 + uVar25 + (uVar1 & ((uVar2 >> 0x16 | uVar2 * 0x400) ^ 0xffffffff)) + 0x5c4dd124 +
           (uVar4 & (uVar2 >> 0x16 | uVar2 * 0x400));
  uVar25 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar28 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar14 >> 0x1a | uVar14 * 0x40) + uVar25;
  uVar3 = (uVar5 >> 0x19 | uVar5 * 0x80) + uVar27;
  uVar5 = iVar21 + uVar25 + (uVar4 & ((uVar1 >> 0x16 | uVar1 * 0x400) ^ 0xffffffff)) + 0x5c4dd124 +
          (uVar2 & (uVar1 >> 0x16 | uVar1 * 0x400));
  uVar14 = iVar22 + uVar27 + (uVar3 & uVar7) + (uVar15 & (uVar3 ^ 0xffffffff)) + 0x5a827999;
  uVar25 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar27 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar5 >> 0x11 | uVar5 * 0x8000) + uVar28;
  uVar7 = (uVar14 >> 0x13 | uVar14 * 0x2000) + uVar26;
  uVar5 = iVar16 + uVar28 + (uVar2 & ((uVar4 >> 0x16 | uVar4 * 0x400) ^ 0xffffffff)) + 0x5c4dd124 +
          (uVar1 & (uVar4 >> 0x16 | uVar4 * 0x400));
  uVar14 = iVar24 + uVar26 + (uVar7 & uVar3) + (uVar25 & (uVar7 ^ 0xffffffff)) + 0x5a827999;
  uVar5 = (uVar5 >> 0x13 | uVar5 * 0x2000) + uVar27;
  uVar14 = (uVar14 >> 0x14 | uVar14 * 0x1000) + uVar15;
  uVar26 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = iVar10 + uVar27 + (uVar1 & ((uVar2 >> 0x16 | uVar2 * 0x400) ^ 0xffffffff)) + 0x5c4dd124 +
          (uVar5 & (uVar2 >> 0x16 | uVar2 * 0x400));
  uVar27 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar4 = (uVar4 >> 0x15 | uVar4 * 0x800) + uVar26;
  uVar3 = iVar18 + uVar15 + 0x6ed9eba1 +
          ((uVar14 | uVar7 ^ 0xffffffff) ^ (uVar3 >> 0x16 | uVar3 * 0x400));
  uVar15 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = iVar19 + uVar26 + 0x6d703ef3 +
          ((uVar4 | uVar5 ^ 0xffffffff) ^ (uVar1 >> 0x16 | uVar1 * 0x400));
  uVar3 = (uVar3 >> 0x15 | uVar3 * 0x800) + uVar25;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar15;
  uVar26 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar28 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar7 = iVar12 + uVar25 + 0x6ed9eba1 +
          ((uVar3 | uVar14 ^ 0xffffffff) ^ (uVar7 >> 0x16 | uVar7 * 0x400));
  uVar5 = iVar17 + uVar15 + 0x6d703ef3 +
          ((uVar2 | uVar4 ^ 0xffffffff) ^ (uVar5 >> 0x16 | uVar5 * 0x400));
  uVar15 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar7 >> 0x13 | uVar7 * 0x2000) + uVar27;
  uVar7 = (uVar5 >> 0x19 | uVar5 * 0x80) + uVar15;
  uVar25 = uVar14 >> 0x16 | uVar14 * 0x400;
  uVar5 = iVar6 + uVar27 + 0x6ed9eba1 +
          ((uVar1 | uVar3 ^ 0xffffffff) ^ (uVar14 >> 0x16 | uVar14 * 0x400));
  uVar27 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar14 = iVar16 + uVar15 + 0x6d703ef3 +
           ((uVar7 | uVar2 ^ 0xffffffff) ^ (uVar4 >> 0x16 | uVar4 * 0x400));
  uVar5 = (uVar5 >> 0x1a | uVar5 * 0x40) + uVar26;
  uVar14 = (uVar14 >> 0x11 | uVar14 * 0x8000) + uVar28;
  uVar29 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = iVar9 + uVar26 + 0x6ed9eba1 +
          ((uVar5 | uVar1 ^ 0xffffffff) ^ (uVar3 >> 0x16 | uVar3 * 0x400));
  uVar15 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = iVar18 + uVar28 + 0x6d703ef3 +
          ((uVar14 | uVar7 ^ 0xffffffff) ^ (uVar2 >> 0x16 | uVar2 * 0x400));
  uVar3 = (uVar3 >> 0x19 | uVar3 * 0x80) + uVar25;
  uVar4 = (uVar4 >> 0x15 | uVar4 * 0x800) + uVar15;
  uVar1 = iVar21 + uVar25 + 0x6ed9eba1 +
          ((uVar3 | uVar5 ^ 0xffffffff) ^ (uVar1 >> 0x16 | uVar1 * 0x400));
  uVar15 = iVar20 + uVar15 + 0x6d703ef3 +
           ((uVar4 | uVar14 ^ 0xffffffff) ^ (uVar7 >> 0x16 | uVar7 * 0x400));
  uVar25 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar1 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar29;
  uVar2 = (uVar15 >> 0x18 | uVar15 * 0x100) + uVar25;
  uVar15 = iVar19 + uVar29 + 0x6ed9eba1 +
           ((uVar1 | uVar3 ^ 0xffffffff) ^ (uVar5 >> 0x16 | uVar5 * 0x400));
  uVar25 = iVar6 + uVar25 + 0x6d703ef3 +
           ((uVar2 | uVar4 ^ 0xffffffff) ^ (uVar14 >> 0x16 | uVar14 * 0x400));
  uVar26 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar7 = (uVar15 >> 0x17 | uVar15 * 0x200) + uVar27;
  uVar28 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = (uVar25 >> 0x1a | uVar25 * 0x40) + uVar26;
  uVar15 = iVar24 + uVar27 + 0x6ed9eba1 +
           ((uVar7 | uVar1 ^ 0xffffffff) ^ (uVar3 >> 0x16 | uVar3 * 0x400));
  uVar25 = iVar11 + uVar26 + 0x6d703ef3 +
           ((uVar5 | uVar2 ^ 0xffffffff) ^ (uVar4 >> 0x16 | uVar4 * 0x400));
  uVar26 = uVar14 >> 0x16 | uVar14 * 0x400;
  uVar14 = (uVar15 >> 0x13 | uVar15 * 0x2000) + uVar28;
  uVar27 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = (uVar25 >> 0x1a | uVar25 * 0x40) + uVar26;
  uVar15 = iVar16 + uVar28 + 0x6ed9eba1 +
           ((uVar14 | uVar7 ^ 0xffffffff) ^ (uVar1 >> 0x16 | uVar1 * 0x400));
  uVar25 = iVar21 + uVar26 + 0x6d703ef3 +
           ((uVar3 | uVar5 ^ 0xffffffff) ^ (uVar2 >> 0x16 | uVar2 * 0x400));
  uVar26 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = (uVar15 >> 0x11 | uVar15 * 0x8000) + uVar27;
  uVar28 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar25 >> 0x12 | uVar25 * 0x4000) + uVar26;
  uVar15 = iVar10 + uVar27 + 0x6ed9eba1 +
           ((uVar4 | uVar14 ^ 0xffffffff) ^ (uVar7 >> 0x16 | uVar7 * 0x400));
  uVar25 = iVar22 + uVar26 + 0x6d703ef3 +
           ((uVar1 | uVar3 ^ 0xffffffff) ^ (uVar5 >> 0x16 | uVar5 * 0x400));
  uVar26 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar15 >> 0x12 | uVar15 * 0x4000) + uVar28;
  uVar27 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar7 = (uVar25 >> 0x14 | uVar25 * 0x1000) + uVar26;
  uVar15 = iVar20 + uVar28 + 0x6ed9eba1 +
           ((uVar2 | uVar4 ^ 0xffffffff) ^ (uVar14 >> 0x16 | uVar14 * 0x400));
  uVar25 = iVar24 + uVar26 + 0x6d703ef3 +
           ((uVar7 | uVar1 ^ 0xffffffff) ^ (uVar3 >> 0x16 | uVar3 * 0x400));
  uVar26 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = (uVar15 >> 0x18 | uVar15 * 0x100) + uVar27;
  uVar28 = uVar14 >> 0x16 | uVar14 * 0x400;
  uVar14 = (uVar25 >> 0x13 | uVar25 * 0x2000) + uVar26;
  uVar15 = iVar8 + uVar27 + 0x6ed9eba1 +
           ((uVar5 | uVar2 ^ 0xffffffff) ^ (uVar4 >> 0x16 | uVar4 * 0x400));
  uVar25 = iVar13 + uVar26 + 0x6d703ef3 +
           ((uVar14 | uVar7 ^ 0xffffffff) ^ (uVar1 >> 0x16 | uVar1 * 0x400));
  uVar26 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = (uVar15 >> 0x13 | uVar15 * 0x2000) + uVar28;
  uVar27 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = (uVar25 >> 0x1b | uVar25 * 0x20) + uVar26;
  uVar15 = iVar11 + uVar28 + 0x6ed9eba1 +
           ((uVar3 | uVar5 ^ 0xffffffff) ^ (uVar2 >> 0x16 | uVar2 * 0x400));
  uVar25 = iVar10 + uVar26 + 0x6d703ef3 +
           ((uVar4 | uVar14 ^ 0xffffffff) ^ (uVar7 >> 0x16 | uVar7 * 0x400));
  uVar26 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar28 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar1 = (uVar15 >> 0x1a | uVar15 * 0x40) + uVar27;
  uVar2 = (uVar25 >> 0x12 | uVar25 * 0x4000) + uVar26;
  uVar15 = iVar23 + uVar27 + 0x6ed9eba1 +
           ((uVar1 | uVar3 ^ 0xffffffff) ^ (uVar5 >> 0x16 | uVar5 * 0x400));
  uVar25 = iVar12 + uVar26 + 0x6d703ef3 +
           ((uVar2 | uVar4 ^ 0xffffffff) ^ (uVar14 >> 0x16 | uVar14 * 0x400));
  uVar26 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar7 = (uVar15 >> 0x1b | uVar15 * 0x20) + uVar28;
  uVar15 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = (uVar25 >> 0x13 | uVar25 * 0x2000) + uVar26;
  uVar25 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = iVar22 + uVar28 + 0x6ed9eba1 +
          ((uVar7 | uVar1 ^ 0xffffffff) ^ (uVar3 >> 0x16 | uVar3 * 0x400));
  uVar27 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = iVar8 + uVar26 + 0x6d703ef3 +
          ((uVar5 | uVar2 ^ 0xffffffff) ^ (uVar4 >> 0x16 | uVar4 * 0x400));
  uVar26 = uVar14 >> 0x16 | uVar14 * 0x400;
  uVar3 = (uVar3 >> 0x14 | uVar3 * 0x1000) + uVar15;
  uVar4 = (uVar4 >> 0x13 | uVar4 * 0x2000) + uVar26;
  uVar14 = iVar17 + uVar15 + 0x6ed9eba1 +
           ((uVar3 | uVar7 ^ 0xffffffff) ^ (uVar1 >> 0x16 | uVar1 * 0x400));
  uVar15 = iVar9 + uVar26 + 0x6d703ef3 +
           ((uVar4 | uVar5 ^ 0xffffffff) ^ (uVar2 >> 0x16 | uVar2 * 0x400));
  uVar14 = (uVar14 >> 0x19 | uVar14 * 0x80) + uVar25;
  uVar15 = (uVar15 >> 0x19 | uVar15 * 0x80) + uVar27;
  uVar26 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar28 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar29 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar1 = iVar13 + uVar25 + 0x6ed9eba1 +
          ((uVar14 | uVar3 ^ 0xffffffff) ^ (uVar7 >> 0x16 | uVar7 * 0x400));
  uVar2 = iVar23 + uVar27 + 0x6d703ef3 +
          ((uVar15 | uVar4 ^ 0xffffffff) ^ (uVar5 >> 0x16 | uVar5 * 0x400));
  uVar7 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar28;
  uVar5 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar2 = (uVar2 >> 0x1b | uVar2 * 0x20) + uVar26;
  uVar25 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = iVar16 + uVar28 + (uVar14 & ((uVar3 >> 0x16 | uVar3 * 0x400) ^ 0xffffffff)) + -0x70e44324
          + (uVar1 & (uVar3 >> 0x16 | uVar3 * 0x400));
  uVar4 = iVar24 + uVar26 + (uVar2 & uVar15) + (uVar29 & (uVar2 ^ 0xffffffff)) + 0x7a6d76e9;
  uVar15 = uVar15 >> 0x16 | uVar15 * 0x400;
  uVar3 = (uVar3 >> 0x15 | uVar3 * 0x800) + uVar7;
  uVar4 = (uVar4 >> 0x11 | uVar4 * 0x8000) + uVar5;
  uVar26 = uVar14 >> 0x16 | uVar14 * 0x400;
  uVar7 = iVar21 + uVar7 + (uVar1 & ((uVar14 >> 0x16 | uVar14 * 0x400) ^ 0xffffffff)) + -0x70e44324
          + (uVar3 & (uVar14 >> 0x16 | uVar14 * 0x400));
  uVar5 = iVar11 + uVar5 + (uVar4 & uVar2) + (uVar15 & (uVar4 ^ 0xffffffff)) + 0x7a6d76e9;
  uVar27 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar7 >> 0x14 | uVar7 * 0x1000) + uVar25;
  uVar7 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar29;
  uVar28 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = iVar22 + uVar25 + (uVar3 & ((uVar1 >> 0x16 | uVar1 * 0x400) ^ 0xffffffff)) + -0x70e44324 +
          (uVar2 & (uVar1 >> 0x16 | uVar1 * 0x400));
  uVar5 = iVar9 + uVar29 + (uVar7 & uVar4) + (uVar27 & (uVar7 ^ 0xffffffff)) + 0x7a6d76e9;
  uVar25 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar1 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar26;
  uVar4 = (uVar5 >> 0x18 | uVar5 * 0x100) + uVar15;
  uVar5 = iVar12 + uVar26 + (uVar2 & ((uVar3 >> 0x16 | uVar3 * 0x400) ^ 0xffffffff)) + -0x70e44324 +
          (uVar1 & (uVar3 >> 0x16 | uVar3 * 0x400));
  uVar14 = iVar16 + uVar15 + (uVar4 & uVar7) + (uVar25 & (uVar4 ^ 0xffffffff)) + 0x7a6d76e9;
  uVar15 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar26 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar3 = (uVar5 >> 0x11 | uVar5 * 0x8000) + uVar28;
  uVar7 = (uVar14 >> 0x15 | uVar14 * 0x800) + uVar27;
  uVar5 = iVar8 + uVar28 + (uVar1 & ((uVar2 >> 0x16 | uVar2 * 0x400) ^ 0xffffffff)) + -0x70e44324 +
          (uVar3 & (uVar2 >> 0x16 | uVar2 * 0x400));
  uVar14 = iVar18 + uVar27 + (uVar7 & uVar4) + (uVar26 & (uVar7 ^ 0xffffffff)) + 0x7a6d76e9;
  uVar27 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar28 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar2 = (uVar5 >> 0x12 | uVar5 * 0x4000) + uVar15;
  uVar4 = (uVar14 >> 0x12 | uVar14 * 0x4000) + uVar25;
  uVar5 = iVar24 + uVar15 + (uVar3 & ((uVar1 >> 0x16 | uVar1 * 0x400) ^ 0xffffffff)) + -0x70e44324 +
          (uVar2 & (uVar1 >> 0x16 | uVar1 * 0x400));
  uVar14 = iVar22 + uVar25 + (uVar4 & uVar7) + (uVar28 & (uVar4 ^ 0xffffffff)) + 0x7a6d76e9;
  uVar15 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar25 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar1 = (uVar5 >> 0x11 | uVar5 * 0x8000) + uVar27;
  uVar7 = (uVar14 >> 0x12 | uVar14 * 0x4000) + uVar26;
  uVar14 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = iVar13 + uVar27 + (uVar2 & ((uVar3 >> 0x16 | uVar3 * 0x400) ^ 0xffffffff)) + -0x70e44324 +
          (uVar1 & (uVar3 >> 0x16 | uVar3 * 0x400));
  uVar5 = iVar19 + uVar26 + (uVar7 & uVar4) + (uVar25 & (uVar7 ^ 0xffffffff)) + 0x7a6d76e9;
  uVar26 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar3 = (uVar3 >> 0x17 | uVar3 * 0x200) + uVar15;
  uVar4 = (uVar5 >> 0x1a | uVar5 * 0x40) + uVar28;
  uVar27 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = iVar9 + uVar15 + (uVar1 & ((uVar2 >> 0x16 | uVar2 * 0x400) ^ 0xffffffff)) + -0x70e44324 +
          (uVar3 & (uVar2 >> 0x16 | uVar2 * 0x400));
  uVar5 = iVar8 + uVar28 + (uVar4 & uVar7) + (uVar26 & (uVar4 ^ 0xffffffff)) + 0x7a6d76e9;
  uVar15 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar2 = (uVar2 >> 0x18 | uVar2 * 0x100) + uVar14;
  uVar7 = (uVar5 >> 0x12 | uVar5 * 0x4000) + uVar25;
  uVar28 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = iVar23 + uVar14 + (uVar3 & ((uVar1 >> 0x16 | uVar1 * 0x400) ^ 0xffffffff)) + -0x70e44324 +
          (uVar2 & (uVar1 >> 0x16 | uVar1 * 0x400));
  uVar5 = iVar17 + uVar25 + (uVar7 & uVar4) + (uVar15 & (uVar7 ^ 0xffffffff)) + 0x7a6d76e9;
  uVar14 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar1 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar27;
  uVar4 = (uVar5 >> 0x1a | uVar5 * 0x40) + uVar26;
  uVar25 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = iVar18 + uVar27 + (uVar2 & ((uVar3 >> 0x16 | uVar3 * 0x400) ^ 0xffffffff)) + -0x70e44324 +
          (uVar1 & (uVar3 >> 0x16 | uVar3 * 0x400));
  uVar5 = iVar13 + uVar26 + (uVar4 & uVar7) + (uVar14 & (uVar4 ^ 0xffffffff)) + 0x7a6d76e9;
  uVar26 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar28;
  uVar7 = (uVar5 >> 0x17 | uVar5 * 0x200) + uVar15;
  uVar27 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = iVar20 + uVar28 + (uVar1 & ((uVar2 >> 0x16 | uVar2 * 0x400) ^ 0xffffffff)) + -0x70e44324 +
          (uVar3 & (uVar2 >> 0x16 | uVar2 * 0x400));
  uVar5 = iVar10 + uVar15 + (uVar7 & uVar4) + (uVar26 & (uVar7 ^ 0xffffffff)) + 0x7a6d76e9;
  uVar15 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar2 = (uVar2 >> 0x1b | uVar2 * 0x20) + uVar25;
  uVar4 = (uVar5 >> 0x14 | uVar5 * 0x1000) + uVar14;
  uVar5 = iVar19 + uVar25 + (uVar3 & ((uVar1 >> 0x16 | uVar1 * 0x400) ^ 0xffffffff)) + -0x70e44324 +
          (uVar2 & (uVar1 >> 0x16 | uVar1 * 0x400));
  uVar14 = iVar23 + uVar14 + (uVar4 & uVar7) + (uVar15 & (uVar4 ^ 0xffffffff)) + 0x7a6d76e9;
  uVar25 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar28 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar1 = (uVar5 >> 0x1a | uVar5 * 0x40) + uVar27;
  uVar7 = (uVar14 >> 0x17 | uVar14 * 0x200) + uVar26;
  uVar5 = iVar6 + uVar27 + (uVar2 & ((uVar3 >> 0x16 | uVar3 * 0x400) ^ 0xffffffff)) + -0x70e44324 +
          (uVar1 & (uVar3 >> 0x16 | uVar3 * 0x400));
  uVar14 = iVar21 + uVar26 + (uVar7 & uVar4) + (uVar28 & (uVar7 ^ 0xffffffff)) + 0x7a6d76e9;
  uVar26 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar27 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar3 = (uVar5 >> 0x18 | uVar5 * 0x100) + uVar25;
  uVar4 = (uVar14 >> 0x14 | uVar14 * 0x1000) + uVar15;
  uVar5 = iVar17 + uVar25 + (uVar1 & ((uVar2 >> 0x16 | uVar2 * 0x400) ^ 0xffffffff)) + -0x70e44324 +
          (uVar3 & (uVar2 >> 0x16 | uVar2 * 0x400));
  uVar14 = iVar20 + uVar15 + (uVar4 & uVar7) + (uVar27 & (uVar4 ^ 0xffffffff)) + 0x7a6d76e9;
  uVar15 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar25 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar2 = (uVar5 >> 0x1a | uVar5 * 0x40) + uVar26;
  uVar7 = (uVar14 >> 0x1b | uVar14 * 0x20) + uVar28;
  uVar5 = iVar11 + uVar26 + (uVar3 & ((uVar1 >> 0x16 | uVar1 * 0x400) ^ 0xffffffff)) + -0x70e44324 +
          (uVar2 & (uVar1 >> 0x16 | uVar1 * 0x400));
  uVar14 = iVar12 + uVar28 + (uVar7 & uVar4) + (uVar25 & (uVar7 ^ 0xffffffff)) + 0x7a6d76e9;
  uVar26 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar15;
  uVar5 = (uVar14 >> 0x11 | uVar14 * 0x8000) + uVar27;
  uVar28 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = iVar10 + uVar15 + (uVar2 & ((uVar3 >> 0x16 | uVar3 * 0x400) ^ 0xffffffff)) + -0x70e44324 +
          (uVar4 & (uVar3 >> 0x16 | uVar3 * 0x400));
  uVar14 = iVar6 + uVar27 + (uVar5 & uVar7) + (uVar26 & (uVar5 ^ 0xffffffff)) + 0x7a6d76e9;
  uVar1 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar28;
  uVar27 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = (uVar14 >> 0x18 | uVar14 * 0x100) + uVar25;
  uVar14 = iVar9 + uVar28 + -0x56ac02b2 +
           (uVar1 ^ (uVar4 | (uVar2 >> 0x16 | uVar2 * 0x400) ^ 0xffffffff));
  uVar15 = uVar25 + iVar13 + (uVar5 ^ (uVar7 >> 0x16 | uVar7 * 0x400) ^ uVar3);
  uVar14 = (uVar14 >> 0x17 | uVar14 * 0x200) + uVar27;
  uVar25 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar15 >> 0x18 | uVar15 * 0x100) + uVar26;
  uVar28 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar7 = iVar8 + uVar27 + -0x56ac02b2 +
          (uVar14 ^ (uVar1 | (uVar4 >> 0x16 | uVar4 * 0x400) ^ 0xffffffff));
  uVar15 = uVar26 + iVar19 + (uVar3 ^ (uVar5 >> 0x16 | uVar5 * 0x400) ^ uVar2);
  uVar7 = (uVar7 >> 0x11 | uVar7 * 0x8000) + uVar25;
  uVar26 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = (uVar15 >> 0x1b | uVar15 * 0x20) + uVar28;
  uVar27 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = iVar17 + uVar25 + -0x56ac02b2 +
          (uVar7 ^ (uVar14 | (uVar1 >> 0x16 | uVar1 * 0x400) ^ 0xffffffff));
  uVar15 = uVar28 + iVar12 + (uVar2 ^ (uVar3 >> 0x16 | uVar3 * 0x400) ^ uVar4);
  uVar5 = (uVar5 >> 0x1b | uVar5 * 0x20) + uVar26;
  uVar25 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar28 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar1 = (uVar15 >> 0x14 | uVar15 * 0x1000) + uVar27;
  uVar3 = iVar21 + uVar26 + -0x56ac02b2 +
          (uVar5 ^ (uVar7 | (uVar14 >> 0x16 | uVar14 * 0x400) ^ 0xffffffff));
  uVar15 = uVar27 + iVar9 + (uVar4 ^ (uVar2 >> 0x16 | uVar2 * 0x400) ^ uVar1);
  uVar26 = uVar14 >> 0x16 | uVar14 * 0x400;
  uVar3 = (uVar3 >> 0x15 | uVar3 * 0x800) + uVar25;
  uVar14 = (uVar15 >> 0x17 | uVar15 * 0x200) + uVar28;
  uVar15 = iVar20 + uVar25 + -0x56ac02b2 +
           (uVar3 ^ (uVar5 | (uVar7 >> 0x16 | uVar7 * 0x400) ^ 0xffffffff));
  uVar25 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = uVar28 + iVar16 + (uVar1 ^ (uVar4 >> 0x16 | uVar4 * 0x400) ^ uVar14);
  uVar15 = (uVar15 >> 0x1a | uVar15 * 0x40) + uVar26;
  uVar27 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar25;
  uVar28 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar29 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar4 = iVar13 + uVar26 + -0x56ac02b2 +
          (uVar15 ^ (uVar3 | (uVar5 >> 0x16 | uVar5 * 0x400) ^ 0xffffffff));
  uVar7 = uVar25 + iVar17 + (uVar14 ^ (uVar1 >> 0x16 | uVar1 * 0x400) ^ uVar2);
  uVar4 = (uVar4 >> 0x18 | uVar4 * 0x100) + uVar27;
  uVar7 = (uVar7 >> 0x1b | uVar7 * 0x20) + uVar28;
  uVar25 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = iVar10 + uVar27 + -0x56ac02b2 +
          (uVar4 ^ (uVar15 | (uVar3 >> 0x16 | uVar3 * 0x400) ^ 0xffffffff));
  uVar5 = uVar28 + iVar24 + (uVar2 ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^ uVar7);
  uVar26 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar27 = uVar14 >> 0x16 | uVar14 * 0x400;
  uVar1 = (uVar1 >> 0x13 | uVar1 * 0x2000) + uVar29;
  uVar3 = (uVar5 >> 0x12 | uVar5 * 0x4000) + uVar25;
  uVar5 = iVar12 + uVar29 + -0x56ac02b2 +
          (uVar1 ^ (uVar4 | (uVar15 >> 0x16 | uVar15 * 0x400) ^ 0xffffffff));
  uVar14 = uVar25 + iVar20 + (uVar7 ^ (uVar2 >> 0x16 | uVar2 * 0x400) ^ uVar3);
  uVar25 = uVar15 >> 0x16 | uVar15 * 0x400;
  uVar5 = (uVar5 >> 0x14 | uVar5 * 0x1000) + uVar26;
  uVar28 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar14 >> 0x1a | uVar14 * 0x40) + uVar27;
  uVar14 = iVar6 + uVar26 + -0x56ac02b2 +
           (uVar5 ^ (uVar1 | (uVar4 >> 0x16 | uVar4 * 0x400) ^ 0xffffffff));
  uVar15 = uVar27 + iVar11 + (uVar3 ^ (uVar7 >> 0x16 | uVar7 * 0x400) ^ uVar2);
  uVar26 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = (uVar14 >> 0x1b | uVar14 * 0x20) + uVar25;
  uVar14 = (uVar15 >> 0x18 | uVar15 * 0x100) + uVar28;
  uVar27 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar7 = iVar16 + uVar25 + -0x56ac02b2 +
          (uVar4 ^ (uVar5 | (uVar1 >> 0x16 | uVar1 * 0x400) ^ 0xffffffff));
  uVar15 = uVar28 + iVar10 + (uVar2 ^ (uVar3 >> 0x16 | uVar3 * 0x400) ^ uVar14);
  uVar7 = (uVar7 >> 0x14 | uVar7 * 0x1000) + uVar26;
  uVar25 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = (uVar15 >> 0x13 | uVar15 * 0x2000) + uVar27;
  uVar28 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = iVar18 + uVar26 + -0x56ac02b2 +
          (uVar7 ^ (uVar4 | (uVar5 >> 0x16 | uVar5 * 0x400) ^ 0xffffffff));
  uVar15 = uVar27 + iVar23 + (uVar14 ^ (uVar2 >> 0x16 | uVar2 * 0x400) ^ uVar1);
  uVar3 = (uVar3 >> 0x13 | uVar3 * 0x2000) + uVar25;
  uVar26 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar5 = (uVar15 >> 0x1a | uVar15 * 0x40) + uVar28;
  uVar15 = iVar24 + uVar25 + -0x56ac02b2 +
           (uVar3 ^ (uVar7 | (uVar4 >> 0x16 | uVar4 * 0x400) ^ 0xffffffff));
  uVar27 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = uVar28 + iVar6 + (uVar1 ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^ uVar5);
  uVar25 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar15 >> 0x12 | uVar15 * 0x4000) + uVar26;
  uVar4 = (uVar4 >> 0x1b | uVar4 * 0x20) + uVar25;
  uVar15 = iVar22 + uVar26 + -0x56ac02b2 +
           (uVar2 ^ (uVar3 | (uVar7 >> 0x16 | uVar7 * 0x400) ^ 0xffffffff));
  uVar25 = uVar25 + iVar8 + (uVar5 ^ (uVar1 >> 0x16 | uVar1 * 0x400) ^ uVar4);
  uVar26 = uVar14 >> 0x16 | uVar14 * 0x400;
  uVar28 = uVar7 >> 0x16 | uVar7 * 0x400;
  uVar7 = (uVar15 >> 0x15 | uVar15 * 0x800) + uVar27;
  uVar14 = (uVar25 >> 0x11 | uVar25 * 0x8000) + uVar26;
  uVar25 = uVar1 >> 0x16 | uVar1 * 0x400;
  uVar1 = iVar11 + uVar27 + -0x56ac02b2 +
          (uVar7 ^ (uVar2 | (uVar3 >> 0x16 | uVar3 * 0x400) ^ 0xffffffff));
  uVar15 = uVar26 + iVar18 + (uVar4 ^ (uVar5 >> 0x16 | uVar5 * 0x400) ^ uVar14);
  uVar1 = (uVar1 >> 0x18 | uVar1 * 0x100) + uVar28;
  uVar15 = (uVar15 >> 0x13 | uVar15 * 0x2000) + uVar25;
  uVar26 = uVar3 >> 0x16 | uVar3 * 0x400;
  uVar3 = iVar19 + uVar28 + -0x56ac02b2 +
          (uVar1 ^ (uVar7 | (uVar2 >> 0x16 | uVar2 * 0x400) ^ 0xffffffff));
  uVar25 = uVar25 + iVar21 + (uVar14 ^ (uVar4 >> 0x16 | uVar4 * 0x400) ^ uVar15);
  uVar27 = uVar5 >> 0x16 | uVar5 * 0x400;
  uVar3 = (uVar3 >> 0x1b | uVar3 * 0x20) + uVar26;
  iVar8 = param_2[4];
  uVar28 = uVar2 >> 0x16 | uVar2 * 0x400;
  uVar2 = (uVar25 >> 0x15 | uVar25 * 0x800) + uVar27;
  uVar5 = iVar23 + uVar26 + -0x56ac02b2 +
          (uVar3 ^ (uVar1 | (uVar7 >> 0x16 | uVar7 * 0x400) ^ 0xffffffff));
  iVar6 = param_2[2];
  uVar25 = uVar4 >> 0x16 | uVar4 * 0x400;
  uVar4 = uVar27 + iVar22 + (uVar15 ^ (uVar14 >> 0x16 | uVar14 * 0x400) ^ uVar2);
  param_2[4] = uVar28 + *param_2 + uVar2 + (uVar5 >> 0x1a | uVar5 * 0x40);
  param_2[2] = (uVar7 >> 0x16 | uVar7 * 0x400) + param_2[3] + uVar25;
  param_2[3] = uVar28 + iVar8 + uVar25 + (uVar4 >> 0x15 | uVar4 * 0x800);
  *param_2 = uVar3 + param_2[1] + (uVar15 >> 0x16 | uVar15 * 0x400);
  param_2[1] = (uVar1 >> 0x16 | uVar1 * 0x400) + iVar6 + (uVar14 >> 0x16 | uVar14 * 0x400);
  return;
}


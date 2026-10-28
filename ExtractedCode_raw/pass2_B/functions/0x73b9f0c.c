// rea decompile_all
// name: MessagePack.Internal.FarmHash$$Hash64UO
// address: 0x73b9f0c
// body: available
// range: 0x73b9f0c-0x73ba3e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long MessagePack_Internal_FarmHash__Hash64UO(long *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  
  plVar1 = (long *)((long)param_1 + (long)(int)(param_2 - 1U & 0xffffffc0));
  uVar11 = (ulong)(param_2 - 1U & 0x3f);
  uVar14 = 0;
  lVar15 = 0;
  uVar25 = 0;
  lVar24 = 0x1529cba0ca458ff;
  lVar19 = -0x7cb371d23f5eb18f;
  uVar23 = 0x7cb371d23f5eb1e0;
  uVar3 = 0x51;
  lVar2 = 0x71;
  bVar9 = DAT_09520c20;
  bVar10 = DAT_09520c20;
  do {
    lVar8 = *param_1;
    lVar18 = param_1[1];
    lVar5 = param_1[2];
    lVar7 = param_1[3];
    lVar4 = param_1[4];
    lVar20 = param_1[5];
    lVar6 = param_1[6];
    lVar16 = param_1[7];
    if ((bVar10 & 1) == 0) {
      FUN_03f5c2a4(&DAT_091cc160);
      bVar9 = 1;
      DAT_09520c20 = 1;
    }
    uVar3 = lVar4 + uVar3;
    uVar13 = (lVar7 + uVar23) * -0x651e95c4d06fbfb1;
    uVar23 = lVar8 + lVar24 + lVar18;
    uVar17 = lVar5 + lVar2;
    lVar24 = lVar16 + uVar25;
    uVar25 = (uVar23 >> 0x1a | uVar23 << 0x26) * 9;
    lVar5 = (uVar3 >> 0x21 | uVar3 * 0x80000000) + lVar5;
    uVar14 = lVar18 + uVar14 + lVar20;
    uVar23 = uVar17 >> 0x1d | uVar17 << 0x23;
    lVar2 = lVar16 + lVar19 + lVar5;
    lVar18 = uVar25 + lVar18;
    lVar19 = lVar24 + (uVar13 >> 0x20 | uVar13 << 0x20);
    lVar16 = lVar18 - lVar2;
    uVar3 = lVar16 + lVar5;
    lVar4 = (lVar6 + lVar15 ^ uVar25) * 9 + lVar4;
    uVar17 = lVar6 + lVar20 + lVar24 + lVar16 + lVar19;
    param_1 = param_1 + 8;
    uVar14 = (uVar14 >> 0x1e | uVar14 << 0x22) + lVar7 + lVar4;
    lVar19 = lVar6 + lVar8 + lVar19 * 9;
    uVar25 = uVar17 >> 0x22 | uVar17 * 0x40000000;
    lVar15 = uVar14 + lVar4;
    lVar24 = uVar17 + lVar18;
    bVar10 = 1;
  } while (param_1 != plVar1);
  if ((bVar9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cc160);
    DAT_09520c20 = 1;
  }
  lVar18 = *(long *)((long)plVar1 + (uVar11 - 0x37));
  uVar17 = *(ulong *)((long)plVar1 + (uVar11 - 0xf));
  lVar5 = *(long *)((long)plVar1 + (uVar11 - 0x17));
  if (DAT_09520c12 == '\0') {
    FUN_03f5c2a4(&DAT_091cc168);
    DAT_09520c12 = '\x01';
    lVar4 = *(long *)((long)plVar1 + (uVar11 - 0x37));
    lVar7 = *(long *)((long)plVar1 + (uVar11 - 0x3f));
    lVar20 = *(long *)((long)plVar1 + (uVar11 - 0x2f));
    lVar6 = *(long *)((long)plVar1 + (uVar11 - 0x27));
    lVar8 = lVar20;
    if (DAT_09520c20 != 1) {
      FUN_03f5c2a4(&DAT_091cc160);
      DAT_09520c20 = 1;
      lVar8 = *(long *)((long)plVar1 + (uVar11 - 0x2f));
      if (DAT_09520c12 == '\0') {
        FUN_03f5c2a4(&DAT_091cc168);
        lVar26 = *(long *)((long)plVar1 + (uVar11 - 0x1f));
        lVar16 = *(long *)((long)plVar1 + (uVar11 - 0x17));
        lVar22 = *(long *)((long)plVar1 + (uVar11 - 0xf));
        lVar21 = *(long *)((long)plVar1 + (uVar11 - 7));
        DAT_09520c12 = '\x01';
        if ((DAT_09520c20 & 1) == 0) {
          FUN_03f5c2a4(&DAT_091cc160);
          DAT_09520c20 = 1;
        }
        goto LAB_073ba1cc;
      }
    }
  }
  else {
    lVar7 = *(long *)((long)plVar1 + (uVar11 - 0x3f));
    lVar20 = *(long *)((long)plVar1 + (uVar11 - 0x2f));
    lVar6 = *(long *)((long)plVar1 + (uVar11 - 0x27));
    lVar4 = lVar18;
    lVar8 = lVar20;
  }
  lVar26 = *(long *)((long)plVar1 + (uVar11 - 0x1f));
  lVar16 = *(long *)((long)plVar1 + (uVar11 - 0x17));
  lVar22 = *(long *)((long)plVar1 + (uVar11 - 0xf));
  lVar21 = *(long *)((long)plVar1 + (uVar11 - 7));
LAB_073ba1cc:
  uVar13 = uVar3 >> 0x14 | uVar3 << 0x2c;
  lVar19 = lVar19 * 9 + lVar2;
  uVar23 = lVar15 + uVar11 + uVar23;
  uVar3 = lVar19 + lVar2;
  uVar12 = uVar23 >> 0x21 | uVar23 * 0x80000000;
  uVar17 = uVar17 ^ (uVar14 >> 0x1c | uVar14 << 0x24) ^ uVar3;
  uVar3 = (uVar13 - lVar24) + lVar18 + uVar3;
  lVar7 = lVar7 + (uVar14 >> 0x1c | uVar14 << 0x24) * -0x651e95c4d06fbfb1;
  lVar24 = uVar12 * -0x651e95c4d06fbfb1;
  uVar14 = lVar7 + lVar4 + lVar20;
  lVar2 = lVar24 + uVar25 + lVar26;
  uVar23 = lVar2 + lVar16 + lVar22;
  uVar17 = uVar13 + (uVar17 >> 0x2a | uVar17 << 0x16) * -0x651e95c4d06fbfb1 + lVar5;
  uVar13 = lVar8 + lVar2 + lVar21 + uVar17;
  uVar25 = (uVar3 >> 0x25 | uVar3 * 0x8000000) * -0x651e95c4d06fbfb1 ^ uVar25 * 9;
  uVar3 = uVar25 + lVar15 + uVar11 + lVar7 + lVar6;
  uVar11 = uVar23 + lVar21 ^ uVar17;
  uVar23 = lVar2 + lVar24 + (uVar23 >> 0x2c | uVar23 * 0x100000) + (uVar13 >> 0x15 | uVar13 << 0x2b)
  ;
  uVar3 = (uVar23 ^ lVar7 + (uVar14 >> 0x2c | uVar14 * 0x100000) + uVar17 +
                    (uVar3 >> 0x15 | uVar3 << 0x2b)) * -0x651e95c4d06fbfb1;
  uVar14 = (uVar11 ^ lVar6 + uVar14 + uVar25) * -0x651e95c4d06fbfb1;
  uVar3 = (uVar23 ^ uVar3 >> 0x2f ^ uVar3) * -0x651e95c4d06fbfb1;
  uVar14 = (uVar11 ^ uVar14 >> 0x2f ^ uVar14) * -0x651e95c4d06fbfb1;
  uVar25 = (uVar3 >> 0x1e | uVar3 << 0x22) * -0x651e95c4d06fbfb1 ^ uVar25;
  uVar3 = (uVar25 ^ ((uVar14 ^ uVar14 >> 0x2f) + uVar12) * -0x651e95c4d06fbfb1 - lVar19) *
          -0x651e95c4d06fbfb1;
  uVar3 = (uVar25 ^ uVar3 >> 0x2f ^ uVar3) * -0x651e95c4d06fbfb1;
  return (uVar3 >> 0x1f | uVar3 << 0x21) * -0x651e95c4d06fbfb1;
}


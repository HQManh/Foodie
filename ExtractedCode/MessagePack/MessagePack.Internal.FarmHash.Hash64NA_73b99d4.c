// rea decompile_all
// name: MessagePack.Internal.FarmHash$$Hash64NA
// address: 0x73b99d4
// body: available
// range: 0x73b99d4-0x73b9edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long MessagePack_Internal_FarmHash__Hash64NA(long *param_1,int param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  ulong local_68;
  
  plVar1 = (long *)((long)param_1 + (long)(int)(param_2 - 1U & 0xffffffc0));
  uVar9 = (ulong)(param_2 - 1U & 0x3f);
  local_78 = *param_1 + 0x1529cba0ca458ff;
  lVar25 = 0x226bb95b4e64b6d4;
  uVar21 = 0x134a747f856d0526;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  bVar6 = DAT_09520c20;
  bVar8 = DAT_09520c20;
  do {
    lVar10 = param_1[1];
    if ((bVar8 & 1) == 0) {
      FUN_03f5c2a4(&DAT_091cc160);
      bVar6 = 1;
      DAT_09520c20 = 1;
    }
    lVar16 = param_1[5];
    lVar19 = param_1[6];
    if (DAT_09520c12 == '\0') {
      FUN_03f5c2a4(&DAT_091cc168);
      lVar13 = *param_1;
      lVar7 = param_1[1];
      lVar15 = param_1[2];
      lVar17 = param_1[3];
      DAT_09520c12 = '\x01';
      if ((DAT_09520c20 & 1) != 0) {
        bVar6 = 1;
        lVar18 = lVar15;
        goto LAB_073b9ad8;
      }
      FUN_03f5c2a4(&DAT_091cc160);
      DAT_09520c20 = 1;
      lVar18 = param_1[2];
      bVar6 = 1;
      if (DAT_09520c12 != '\0') goto LAB_073b9ad8;
      FUN_03f5c2a4(&DAT_091cc168);
      lVar23 = param_1[4];
      lVar22 = param_1[5];
      lVar20 = param_1[6];
      lVar24 = param_1[7];
      DAT_09520c12 = '\x01';
      if ((DAT_09520c20 & 1) == 0) {
        FUN_03f5c2a4(&DAT_091cc160);
        DAT_09520c20 = 1;
      }
      bVar6 = 1;
    }
    else {
      lVar7 = param_1[1];
      lVar15 = param_1[2];
      lVar13 = *param_1;
      lVar17 = param_1[3];
      lVar18 = lVar15;
LAB_073b9ad8:
      lVar23 = param_1[4];
      lVar22 = param_1[5];
      lVar20 = param_1[6];
      lVar24 = param_1[7];
    }
    param_1 = param_1 + 8;
    uVar2 = lVar25 + local_80 + lVar19;
    uVar3 = local_88 + local_78 + lVar25 + lVar10;
    lVar13 = lVar13 + local_80 * -0x4b6d499041670d8d;
    local_78 = (local_70 + uVar21 >> 0x21 | (local_70 + uVar21) * 0x80000000) * -0x4b6d499041670d8d;
    uVar4 = lVar13 + lVar7 + lVar15;
    lVar25 = local_88 + (uVar2 >> 0x2a | uVar2 * 0x400000) * -0x4b6d499041670d8d + lVar16;
    local_88 = uVar4 + lVar17;
    uVar21 = (uVar3 >> 0x25 | uVar3 * 0x8000000) * -0x4b6d499041670d8d ^ local_68;
    lVar23 = local_78 + local_68 + lVar23;
    uVar2 = lVar23 + lVar22 + lVar20;
    uVar3 = uVar21 + local_70 + lVar13 + lVar17;
    uVar11 = lVar18 + lVar25 + lVar23 + lVar24;
    local_80 = (uVar4 >> 0x2c | uVar4 * 0x100000) + lVar13 + (uVar3 >> 0x15 | uVar3 << 0x2b);
    local_70 = uVar2 + lVar24;
    local_68 = (uVar2 >> 0x2c | uVar2 * 0x100000) + lVar23 + (uVar11 >> 0x15 | uVar11 << 0x2b);
    bVar8 = 1;
  } while (param_1 != plVar1);
  lVar10 = *(long *)((long)plVar1 + (uVar9 - 0x37));
  if ((bVar6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cc160);
    DAT_09520c20 = 1;
  }
  lVar19 = *(long *)((long)plVar1 + (uVar9 - 0xf));
  lVar16 = *(long *)((long)plVar1 + (uVar9 - 0x17));
  if (DAT_09520c12 == '\0') {
    FUN_03f5c2a4(&DAT_091cc168);
    lVar15 = *(long *)((long)plVar1 + (uVar9 - 0x3f));
    lVar7 = *(long *)((long)plVar1 + (uVar9 - 0x37));
    lVar18 = *(long *)((long)plVar1 + (uVar9 - 0x2f));
    lVar17 = *(long *)((long)plVar1 + (uVar9 - 0x27));
    DAT_09520c12 = '\x01';
    lVar13 = lVar18;
    if (DAT_09520c20 != 1) {
      FUN_03f5c2a4(&DAT_091cc160);
      lVar13 = *(long *)((long)plVar1 + (uVar9 - 0x2f));
      DAT_09520c20 = 1;
      if (DAT_09520c12 == '\0') {
        FUN_03f5c2a4(&DAT_091cc168);
        lVar23 = *(long *)((long)plVar1 + (uVar9 - 0x1f));
        lVar22 = *(long *)((long)plVar1 + (uVar9 - 0x17));
        lVar24 = *(long *)((long)plVar1 + (uVar9 - 0xf));
        lVar20 = *(long *)((long)plVar1 + (uVar9 - 7));
        DAT_09520c12 = '\x01';
        if ((DAT_09520c20 & 1) == 0) {
          FUN_03f5c2a4(&DAT_091cc160);
          DAT_09520c20 = 1;
        }
        goto LAB_073b9cec;
      }
    }
  }
  else {
    lVar15 = *(long *)((long)plVar1 + (uVar9 - 0x3f));
    lVar7 = *(long *)((long)plVar1 + (uVar9 - 0x37));
    lVar18 = *(long *)((long)plVar1 + (uVar9 - 0x2f));
    lVar17 = *(long *)((long)plVar1 + (uVar9 - 0x27));
    lVar13 = lVar18;
  }
  lVar23 = *(long *)((long)plVar1 + (uVar9 - 0x1f));
  lVar22 = *(long *)((long)plVar1 + (uVar9 - 0x17));
  lVar24 = *(long *)((long)plVar1 + (uVar9 - 0xf));
  lVar20 = *(long *)((long)plVar1 + (uVar9 - 7));
LAB_073b9cec:
  uVar2 = local_80 + lVar25 + lVar19;
  local_88 = local_70 + uVar9 + local_88;
  lVar19 = (uVar21 & 0xff) * 2 + -0x4b6d499041670d8d;
  lVar5 = local_88 + local_70 + uVar9;
  lVar15 = lVar15 + local_80 * lVar19;
  uVar21 = lVar5 + uVar21;
  uVar11 = uVar21 >> 0x21 | uVar21 * 0x80000000;
  uVar21 = lVar25 + local_78 + lVar10 + local_88;
  uVar9 = lVar15 + lVar7 + lVar18;
  uVar2 = local_88 * 9 + (uVar2 >> 0x2a | uVar2 * 0x400000) * lVar19 + lVar16;
  lVar23 = local_68 + uVar11 * lVar19 + lVar23;
  uVar3 = lVar23 + lVar22 + lVar24;
  uVar12 = (uVar21 >> 0x25 | uVar21 * 0x8000000) * lVar19 ^ local_68 * 9;
  uVar21 = uVar12 + lVar5 + lVar15 + lVar17;
  uVar4 = lVar13 + lVar23 + lVar20 + uVar2;
  uVar14 = (uVar3 + lVar20 ^ uVar9 + lVar17) * lVar19;
  uVar4 = (uVar3 >> 0x2c | uVar3 * 0x100000) + lVar23 + (uVar4 >> 0x15 | uVar4 << 0x2b);
  uVar21 = (uVar4 ^ (uVar9 >> 0x2c | uVar9 * 0x100000) + lVar15 + (uVar21 >> 0x15 | uVar21 << 0x2b))
           * lVar19;
  uVar9 = (uVar3 + lVar20 ^ uVar14 >> 0x2f ^ uVar14) * lVar19;
  uVar21 = (uVar4 ^ uVar21 >> 0x2f ^ uVar21) * lVar19;
  uVar21 = ((uVar21 ^ uVar21 >> 0x2f) + uVar11) * lVar19;
  uVar9 = (uVar21 ^ uVar12 + (uVar2 ^ uVar2 >> 0x2f) * -0x3c5a37a36834ced9 +
                    (uVar9 ^ uVar9 >> 0x2f) * lVar19) * lVar19;
  uVar21 = (uVar21 ^ uVar9 >> 0x2f ^ uVar9) * lVar19;
  return (uVar21 ^ uVar21 >> 0x2f) * lVar19;
}


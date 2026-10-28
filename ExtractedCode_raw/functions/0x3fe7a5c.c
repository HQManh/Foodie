// rea decompile_all
// name: std::__ndk1::to_wstring
// address: 0x3fe7a5c
// body: available
// range: 0x3fe7a5c-0x3fe7c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe7c38 to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::to_wstring(int) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,int param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte *pbVar5;
  uint uVar6;
  ulong *in_x8;
  long lVar7;
  byte *pbVar8;
  uint *puVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  byte local_3c [11];
  byte bStack_31;
  byte *pbVar9;
  
  uVar6 = (uint)this;
  pbVar5 = &bStack_31;
  if ((int)uVar6 < 0) {
    uVar6 = -uVar6;
    local_3c[0] = 0x2d;
    lVar7 = (long)pbVar5 - ((ulong)local_3c | 1);
    if (lVar7 < 10) goto LAB_03fe7ab4;
LAB_03fe7af4:
    pbVar5 = (byte *)FUN_03fe9808();
  }
  else {
    lVar7 = (long)pbVar5 - (long)local_3c;
    if (9 < lVar7) goto LAB_03fe7af4;
LAB_03fe7ab4:
    uVar1 = (uint)((0x20 - (int)LZCOUNT(uVar6 | 1)) * 0x4d1) >> 0xc;
    if ((long)(ulong)((uVar1 - (uVar6 < *(uint *)(&UNK_023af5d0 + (ulong)uVar1 * 4))) + 1) <= lVar7)
    goto LAB_03fe7af4;
  }
  uVar15 = (long)pbVar5 - (long)local_3c;
  if (0x3fffffffffffffef < uVar15) {
    FUN_03fe3950();
LAB_03fe7c38:
                    /* WARNING: Subroutine does not return */
    FUN_03f650f4();
  }
  if (uVar15 < 5) {
    puVar14 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar15 << 1);
    auVar2 = _UNK_01a8d690;
    auVar3 = _UNK_01a8e410;
    auVar4 = _UNK_01a8f150;
  }
  else {
    if (0x3ffffffffffffffe < (uVar15 | 3)) goto LAB_03fe7c38;
    uVar13 = (uVar15 | 3) + 1;
    puVar14 = operator_new(uVar13 * 4);
    in_x8[1] = uVar15;
    in_x8[2] = (ulong)puVar14;
    *in_x8 = uVar13 | 1;
    auVar2 = _UNK_01a8d690;
    auVar3 = _UNK_01a8e410;
    auVar4 = _UNK_01a8f150;
  }
  _UNK_01a8d690 = auVar2;
  _UNK_01a8e410 = auVar3;
  _UNK_01a8f150 = auVar4;
  if (local_3c != pbVar5) {
    pbVar9 = local_3c;
                    /* WARNING: Read-only address (ram,0x01a8d690) is written */
                    /* WARNING: Read-only address (ram,0x01a8e410) is written */
                    /* WARNING: Read-only address (ram,0x01a8f150) is written */
    uVar15 = (long)pbVar5 - (long)pbVar9;
    if (0x1f < uVar15) {
      uVar11 = uVar15 & 0xffffffffffffffe0;
      puVar10 = puVar14 + uVar11;
      pbVar9 = local_3c + uVar11;
      pauVar12 = (undefined1 (*) [16])&stack0xffffffffffffffd4;
      puVar14 = puVar14 + 0x10;
      uVar13 = uVar11;
      do {
        auVar18 = pauVar12[-1];
        auVar20 = *pauVar12;
        uVar13 = uVar13 - 0x20;
        pauVar12 = pauVar12 + 2;
        auVar16._8_8_ = 0xffffff0fffffff0e;
        auVar16._0_8_ = 0xffffff0dffffff0c;
        auVar17 = a64_TBL(ZEXT816(0),auVar18,auVar16);
        auVar19 = a64_TBL(ZEXT816(0),auVar18,auVar3);
        auVar21 = a64_TBL(ZEXT816(0),auVar18,auVar4);
        auVar16 = a64_TBL(ZEXT816(0),auVar18,auVar2);
        auVar18._8_8_ = 0xffffff0fffffff0e;
        auVar18._0_8_ = 0xffffff0dffffff0c;
        auVar22 = a64_TBL(ZEXT816(0),auVar20,auVar18);
        *(long *)(puVar14 + -6) = auVar19._8_8_;
        *(long *)(puVar14 + -8) = auVar19._0_8_;
        *(long *)(puVar14 + -2) = auVar17._8_8_;
        *(long *)(puVar14 + -4) = auVar17._0_8_;
        auVar18 = a64_TBL(ZEXT816(0),auVar20,auVar3);
        auVar17 = a64_TBL(ZEXT816(0),auVar20,auVar4);
        auVar20 = a64_TBL(ZEXT816(0),auVar20,auVar2);
        *(long *)(puVar14 + -0xe) = auVar16._8_8_;
        *(long *)(puVar14 + -0x10) = auVar16._0_8_;
        *(long *)(puVar14 + -10) = auVar21._8_8_;
        *(long *)(puVar14 + -0xc) = auVar21._0_8_;
        *(long *)(puVar14 + 10) = auVar18._8_8_;
        *(long *)(puVar14 + 8) = auVar18._0_8_;
        *(long *)(puVar14 + 0xe) = auVar22._8_8_;
        *(long *)(puVar14 + 0xc) = auVar22._0_8_;
        *(long *)(puVar14 + 2) = auVar20._8_8_;
        *(long *)puVar14 = auVar20._0_8_;
        *(long *)(puVar14 + 6) = auVar17._8_8_;
        *(long *)(puVar14 + 4) = auVar17._0_8_;
        puVar14 = puVar14 + 0x20;
      } while (uVar13 != 0);
      puVar14 = puVar10;
      if (uVar15 == uVar11) goto LAB_03fe7c14;
    }
    do {
      pbVar8 = pbVar9 + 1;
      puVar10 = puVar14 + 1;
      *puVar14 = (uint)*pbVar9;
      pbVar9 = pbVar8;
      puVar14 = puVar10;
    } while (pbVar8 != pbVar5);
  }
LAB_03fe7c14:
  *puVar14 = 0;
  return;
}


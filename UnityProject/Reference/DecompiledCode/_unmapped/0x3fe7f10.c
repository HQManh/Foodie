// rea decompile_all
// name: std::__ndk1::to_wstring
// address: 0x3fe7f10
// body: available
// range: 0x3fe7f10-0x3fe81e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe81e0 to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::to_wstring(long long) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte *pbVar7;
  byte *pbVar8;
  ulong *in_x8;
  long lVar9;
  byte *pbVar10;
  uint *puVar11;
  ulong uVar12;
  undefined1 (*pauVar13) [16];
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  byte local_44 [16];
  undefined1 auStack_34 [4];
  
  pbVar8 = local_44;
  pbVar7 = &stack0xffffffffffffffd0;
  if ((long)this < 0) {
    pbVar8 = (byte *)((ulong)pbVar8 | 1);
    this = (__ndk1 *)-(long)this;
    local_44[0] = 0x2d;
    lVar9 = (long)pbVar7 - (long)pbVar8;
    if (lVar9 < 0x14) goto LAB_03fe7f68;
LAB_03fe7fa8:
    if ((ulong)this >> 0x20 == 0) {
      pbVar7 = (byte *)FUN_03fe9808(pbVar8,(ulong)this & 0xffffffff);
    }
    else {
      if ((__ndk1 *)0x2540be3ff < this) {
        pbVar8 = (byte *)FUN_03fe9808(pbVar8,(ulong)this / 10000000000);
        this = (__ndk1 *)((ulong)this % 10000000000);
      }
      pbVar7 = pbVar8 + 10;
      uVar1 = (int)this + (int)((ulong)this / 100000000) * -100000000;
      uVar2 = uVar1 % 1000000;
      uVar3 = uVar2 % 10000;
      *(undefined2 *)pbVar8 = *(undefined2 *)(&UNK_023af5f8 + ((ulong)this / 100000000) * 2);
      *(undefined2 *)(pbVar8 + 2) = *(undefined2 *)(&UNK_023af5f8 + ((ulong)uVar1 / 1000000) * 2);
      *(undefined2 *)(pbVar8 + 4) = *(undefined2 *)(&UNK_023af5f8 + ((ulong)uVar2 / 10000) * 2);
      *(undefined2 *)(pbVar8 + 6) = *(undefined2 *)(&UNK_023af5f8 + (ulong)(uVar3 / 100) * 2);
      *(undefined2 *)(pbVar8 + 8) = *(undefined2 *)(&UNK_023af5f8 + (ulong)(uVar3 % 100) * 2);
    }
  }
  else {
    lVar9 = (long)pbVar7 - (long)pbVar8;
    if (0x13 < lVar9) goto LAB_03fe7fa8;
LAB_03fe7f68:
    uVar1 = (uint)((0x40 - (int)LZCOUNT((ulong)this | 1)) * 0x4d1) >> 0xc;
    if ((long)(ulong)((uVar1 - (this < *(__ndk1 **)(&UNK_023af6c0 + (ulong)uVar1 * 8))) + 1) <=
        lVar9) goto LAB_03fe7fa8;
  }
  uVar16 = (long)pbVar7 - (long)local_44;
  if (0x3fffffffffffffef < uVar16) {
    FUN_03fe3950();
LAB_03fe81e0:
                    /* WARNING: Subroutine does not return */
    FUN_03f650f4();
  }
  if (uVar16 < 5) {
    puVar15 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar16 << 1);
    auVar4 = _UNK_01a8d690;
    auVar5 = _UNK_01a8e410;
    auVar6 = _UNK_01a8f150;
  }
  else {
    if (0x3ffffffffffffffe < (uVar16 | 3)) goto LAB_03fe81e0;
    uVar14 = (uVar16 | 3) + 1;
    puVar15 = operator_new(uVar14 * 4);
    in_x8[1] = uVar16;
    in_x8[2] = (ulong)puVar15;
    *in_x8 = uVar14 | 1;
    auVar4 = _UNK_01a8d690;
    auVar5 = _UNK_01a8e410;
    auVar6 = _UNK_01a8f150;
  }
  _UNK_01a8d690 = auVar4;
  _UNK_01a8e410 = auVar5;
  _UNK_01a8f150 = auVar6;
  if (local_44 != pbVar7) {
    pbVar8 = local_44;
                    /* WARNING: Read-only address (ram,0x01a8d690) is written */
                    /* WARNING: Read-only address (ram,0x01a8e410) is written */
                    /* WARNING: Read-only address (ram,0x01a8f150) is written */
    uVar16 = (long)pbVar7 - (long)pbVar8;
    if (0x1f < uVar16) {
      uVar12 = uVar16 & 0xffffffffffffffe0;
      puVar11 = puVar15 + uVar12;
      pbVar8 = local_44 + uVar12;
      pauVar13 = (undefined1 (*) [16])auStack_34;
      puVar15 = puVar15 + 0x10;
      uVar14 = uVar12;
      do {
        auVar19 = pauVar13[-1];
        auVar21 = *pauVar13;
        uVar14 = uVar14 - 0x20;
        pauVar13 = pauVar13 + 2;
        auVar17._8_8_ = 0xffffff0fffffff0e;
        auVar17._0_8_ = 0xffffff0dffffff0c;
        auVar18 = a64_TBL(ZEXT816(0),auVar19,auVar17);
        auVar20 = a64_TBL(ZEXT816(0),auVar19,auVar5);
        auVar22 = a64_TBL(ZEXT816(0),auVar19,auVar6);
        auVar17 = a64_TBL(ZEXT816(0),auVar19,auVar4);
        auVar19._8_8_ = 0xffffff0fffffff0e;
        auVar19._0_8_ = 0xffffff0dffffff0c;
        auVar23 = a64_TBL(ZEXT816(0),auVar21,auVar19);
        *(long *)(puVar15 + -6) = auVar20._8_8_;
        *(long *)(puVar15 + -8) = auVar20._0_8_;
        *(long *)(puVar15 + -2) = auVar18._8_8_;
        *(long *)(puVar15 + -4) = auVar18._0_8_;
        auVar19 = a64_TBL(ZEXT816(0),auVar21,auVar5);
        auVar18 = a64_TBL(ZEXT816(0),auVar21,auVar6);
        auVar21 = a64_TBL(ZEXT816(0),auVar21,auVar4);
        *(long *)(puVar15 + -0xe) = auVar17._8_8_;
        *(long *)(puVar15 + -0x10) = auVar17._0_8_;
        *(long *)(puVar15 + -10) = auVar22._8_8_;
        *(long *)(puVar15 + -0xc) = auVar22._0_8_;
        *(long *)(puVar15 + 10) = auVar19._8_8_;
        *(long *)(puVar15 + 8) = auVar19._0_8_;
        *(long *)(puVar15 + 0xe) = auVar23._8_8_;
        *(long *)(puVar15 + 0xc) = auVar23._0_8_;
        *(long *)(puVar15 + 2) = auVar21._8_8_;
        *(long *)puVar15 = auVar21._0_8_;
        *(long *)(puVar15 + 6) = auVar18._8_8_;
        *(long *)(puVar15 + 4) = auVar18._0_8_;
        puVar15 = puVar15 + 0x20;
      } while (uVar14 != 0);
      puVar15 = puVar11;
      if (uVar16 == uVar12) goto LAB_03fe81bc;
    }
    do {
      pbVar10 = pbVar8 + 1;
      puVar11 = puVar15 + 1;
      *puVar15 = (uint)*pbVar8;
      pbVar8 = pbVar10;
      puVar15 = puVar11;
    } while (pbVar10 != pbVar7);
  }
LAB_03fe81bc:
  *puVar15 = 0;
  return;
}


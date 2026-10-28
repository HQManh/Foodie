// rea decompile_all
// name: std::__ndk1::to_wstring
// address: 0x3fe8350
// body: available
// range: 0x3fe8350-0x3fe85c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe85c0 to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::to_wstring(unsigned long) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,ulong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte *pbVar6;
  byte *pbVar7;
  ulong *in_x8;
  byte *pbVar8;
  uint *puVar9;
  ulong uVar10;
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  byte local_45 [10];
  byte abStack_3b [6];
  undefined1 auStack_35 [5];
  
  if ((ulong)this >> 0x20 == 0) {
    pbVar6 = (byte *)FUN_03fe9808(local_45,(ulong)this & 0xffffffff);
  }
  else {
    if (this < (__ndk1 *)0x2540be400) {
      pbVar7 = local_45;
      pbVar6 = abStack_3b;
    }
    else {
      pbVar7 = (byte *)FUN_03fe9808(local_45,(ulong)this / 10000000000);
      pbVar6 = pbVar7 + 10;
      this = (__ndk1 *)((ulong)this % 10000000000);
    }
    uVar14 = (ulong)this % 100000000;
    uVar1 = (int)uVar14 + (int)(uVar14 / 1000000) * -1000000;
    uVar2 = uVar1 % 10000;
    *(undefined2 *)pbVar7 = *(undefined2 *)(&UNK_023af5f8 + ((ulong)this / 100000000) * 2);
    *(undefined2 *)(pbVar7 + 2) = *(undefined2 *)(&UNK_023af5f8 + (uVar14 / 1000000) * 2);
    *(undefined2 *)(pbVar7 + 4) = *(undefined2 *)(&UNK_023af5f8 + ((ulong)uVar1 / 10000) * 2);
    *(undefined2 *)(pbVar7 + 6) = *(undefined2 *)(&UNK_023af5f8 + (ulong)(uVar2 / 100) * 2);
    *(undefined2 *)(pbVar7 + 8) = *(undefined2 *)(&UNK_023af5f8 + (ulong)(uVar2 % 100) * 2);
  }
  uVar14 = (long)pbVar6 - (long)local_45;
  if (0x3fffffffffffffef < uVar14) {
    FUN_03fe3950();
LAB_03fe85c0:
                    /* WARNING: Subroutine does not return */
    FUN_03f650f4();
  }
  if (uVar14 < 5) {
    puVar13 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar14 << 1);
    auVar3 = _UNK_01a8d690;
    auVar4 = _UNK_01a8e410;
    auVar5 = _UNK_01a8f150;
  }
  else {
    if (0x3ffffffffffffffe < (uVar14 | 3)) goto LAB_03fe85c0;
    uVar12 = (uVar14 | 3) + 1;
    puVar13 = operator_new(uVar12 * 4);
    in_x8[1] = uVar14;
    in_x8[2] = (ulong)puVar13;
    *in_x8 = uVar12 | 1;
    auVar3 = _UNK_01a8d690;
    auVar4 = _UNK_01a8e410;
    auVar5 = _UNK_01a8f150;
  }
  _UNK_01a8d690 = auVar3;
  _UNK_01a8e410 = auVar4;
  _UNK_01a8f150 = auVar5;
  if (local_45 != pbVar6) {
    pbVar7 = local_45;
                    /* WARNING: Read-only address (ram,0x01a8d690) is written */
                    /* WARNING: Read-only address (ram,0x01a8e410) is written */
                    /* WARNING: Read-only address (ram,0x01a8f150) is written */
    uVar14 = (long)pbVar6 - (long)pbVar7;
    if (0x1f < uVar14) {
      uVar10 = uVar14 & 0xffffffffffffffe0;
      puVar9 = puVar13 + uVar10;
      pbVar7 = local_45 + uVar10;
      pauVar11 = (undefined1 (*) [16])auStack_35;
      puVar13 = puVar13 + 0x10;
      uVar12 = uVar10;
      do {
        auVar17 = pauVar11[-1];
        auVar19 = *pauVar11;
        uVar12 = uVar12 - 0x20;
        pauVar11 = pauVar11 + 2;
        auVar15._8_8_ = 0xffffff0fffffff0e;
        auVar15._0_8_ = 0xffffff0dffffff0c;
        auVar16 = a64_TBL(ZEXT816(0),auVar17,auVar15);
        auVar18 = a64_TBL(ZEXT816(0),auVar17,auVar4);
        auVar20 = a64_TBL(ZEXT816(0),auVar17,auVar5);
        auVar15 = a64_TBL(ZEXT816(0),auVar17,auVar3);
        auVar17._8_8_ = 0xffffff0fffffff0e;
        auVar17._0_8_ = 0xffffff0dffffff0c;
        auVar21 = a64_TBL(ZEXT816(0),auVar19,auVar17);
        *(long *)(puVar13 + -6) = auVar18._8_8_;
        *(long *)(puVar13 + -8) = auVar18._0_8_;
        *(long *)(puVar13 + -2) = auVar16._8_8_;
        *(long *)(puVar13 + -4) = auVar16._0_8_;
        auVar17 = a64_TBL(ZEXT816(0),auVar19,auVar4);
        auVar16 = a64_TBL(ZEXT816(0),auVar19,auVar5);
        auVar19 = a64_TBL(ZEXT816(0),auVar19,auVar3);
        *(long *)(puVar13 + -0xe) = auVar15._8_8_;
        *(long *)(puVar13 + -0x10) = auVar15._0_8_;
        *(long *)(puVar13 + -10) = auVar20._8_8_;
        *(long *)(puVar13 + -0xc) = auVar20._0_8_;
        *(long *)(puVar13 + 10) = auVar17._8_8_;
        *(long *)(puVar13 + 8) = auVar17._0_8_;
        *(long *)(puVar13 + 0xe) = auVar21._8_8_;
        *(long *)(puVar13 + 0xc) = auVar21._0_8_;
        *(long *)(puVar13 + 2) = auVar19._8_8_;
        *(long *)puVar13 = auVar19._0_8_;
        *(long *)(puVar13 + 6) = auVar16._8_8_;
        *(long *)(puVar13 + 4) = auVar16._0_8_;
        puVar13 = puVar13 + 0x20;
      } while (uVar12 != 0);
      puVar13 = puVar9;
      if (uVar14 == uVar10) goto LAB_03fe859c;
    }
    do {
      pbVar8 = pbVar7 + 1;
      puVar9 = puVar13 + 1;
      *puVar13 = (uint)*pbVar7;
      pbVar7 = pbVar8;
      puVar13 = puVar9;
    } while (pbVar8 != pbVar6);
  }
LAB_03fe859c:
  *puVar13 = 0;
  return;
}


// rea decompile_all
// name: std::__ndk1::to_wstring
// address: 0x3fe81e4
// body: available
// range: 0x3fe81e4-0x3fe834f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe834c to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::to_wstring(unsigned int) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,uint param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte *pbVar4;
  ulong *in_x8;
  byte *pbVar5;
  uint *puVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte local_3b [11];
  byte *pbVar6;
  
  pbVar4 = (byte *)FUN_03fe9808(local_3b,(ulong)this & 0xffffffff);
  uVar12 = (long)pbVar4 - (long)local_3b;
  if (0x3fffffffffffffef < uVar12) {
    FUN_03fe3950();
LAB_03fe834c:
                    /* WARNING: Subroutine does not return */
    FUN_03f650f4();
  }
  if (uVar12 < 5) {
    puVar11 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar12 << 1);
    auVar1 = _UNK_01a8d690;
    auVar2 = _UNK_01a8e410;
    auVar3 = _UNK_01a8f150;
  }
  else {
    if (0x3ffffffffffffffe < (uVar12 | 3)) goto LAB_03fe834c;
    uVar10 = (uVar12 | 3) + 1;
    puVar11 = operator_new(uVar10 * 4);
    in_x8[1] = uVar12;
    in_x8[2] = (ulong)puVar11;
    *in_x8 = uVar10 | 1;
    auVar1 = _UNK_01a8d690;
    auVar2 = _UNK_01a8e410;
    auVar3 = _UNK_01a8f150;
  }
  _UNK_01a8d690 = auVar1;
  _UNK_01a8e410 = auVar2;
  _UNK_01a8f150 = auVar3;
  if (local_3b != pbVar4) {
    pbVar6 = local_3b;
                    /* WARNING: Read-only address (ram,0x01a8d690) is written */
                    /* WARNING: Read-only address (ram,0x01a8e410) is written */
                    /* WARNING: Read-only address (ram,0x01a8f150) is written */
    uVar12 = (long)pbVar4 - (long)pbVar6;
    if (0x1f < uVar12) {
      uVar8 = uVar12 & 0xffffffffffffffe0;
      puVar7 = puVar11 + uVar8;
      pbVar6 = local_3b + uVar8;
      pauVar9 = (undefined1 (*) [16])&stack0xffffffffffffffd5;
      puVar11 = puVar11 + 0x10;
      uVar10 = uVar8;
      do {
        auVar15 = pauVar9[-1];
        auVar17 = *pauVar9;
        uVar10 = uVar10 - 0x20;
        pauVar9 = pauVar9 + 2;
        auVar13._8_8_ = 0xffffff0fffffff0e;
        auVar13._0_8_ = 0xffffff0dffffff0c;
        auVar14 = a64_TBL(ZEXT816(0),auVar15,auVar13);
        auVar16 = a64_TBL(ZEXT816(0),auVar15,auVar2);
        auVar18 = a64_TBL(ZEXT816(0),auVar15,auVar3);
        auVar13 = a64_TBL(ZEXT816(0),auVar15,auVar1);
        auVar15._8_8_ = 0xffffff0fffffff0e;
        auVar15._0_8_ = 0xffffff0dffffff0c;
        auVar19 = a64_TBL(ZEXT816(0),auVar17,auVar15);
        *(long *)(puVar11 + -6) = auVar16._8_8_;
        *(long *)(puVar11 + -8) = auVar16._0_8_;
        *(long *)(puVar11 + -2) = auVar14._8_8_;
        *(long *)(puVar11 + -4) = auVar14._0_8_;
        auVar15 = a64_TBL(ZEXT816(0),auVar17,auVar2);
        auVar14 = a64_TBL(ZEXT816(0),auVar17,auVar3);
        auVar17 = a64_TBL(ZEXT816(0),auVar17,auVar1);
        *(long *)(puVar11 + -0xe) = auVar13._8_8_;
        *(long *)(puVar11 + -0x10) = auVar13._0_8_;
        *(long *)(puVar11 + -10) = auVar18._8_8_;
        *(long *)(puVar11 + -0xc) = auVar18._0_8_;
        *(long *)(puVar11 + 10) = auVar15._8_8_;
        *(long *)(puVar11 + 8) = auVar15._0_8_;
        *(long *)(puVar11 + 0xe) = auVar19._8_8_;
        *(long *)(puVar11 + 0xc) = auVar19._0_8_;
        *(long *)(puVar11 + 2) = auVar17._8_8_;
        *(long *)puVar11 = auVar17._0_8_;
        *(long *)(puVar11 + 6) = auVar14._8_8_;
        *(long *)(puVar11 + 4) = auVar14._0_8_;
        puVar11 = puVar11 + 0x20;
      } while (uVar10 != 0);
      puVar11 = puVar7;
      if (uVar12 == uVar8) goto LAB_03fe8328;
    }
    do {
      pbVar5 = pbVar6 + 1;
      puVar7 = puVar11 + 1;
      *puVar11 = (uint)*pbVar6;
      pbVar6 = pbVar5;
      puVar11 = puVar7;
    } while (pbVar5 != pbVar4);
  }
LAB_03fe8328:
  *puVar11 = 0;
  return;
}


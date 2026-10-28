// rea decompile_all
// name: std::__ndk1::ctype_byname<char>::do_tolower
// address: 0x401e6cc
// body: available
// range: 0x401e6cc-0x401e877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::ctype_byname<char>::do_tolower(char*, char const*) const */

char * __thiscall
std::__ndk1::ctype_byname<char>::do_tolower(ctype_byname<char> *this,char *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  ulong uVar6;
  byte *pbVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  auVar13 = _UNK_01a8e410;
  auVar4 = _UNK_01a8d690;
  if (param_1 == param_2) {
    _UNK_01a8f15c = 0xffffff07;
    return param_1;
  }
  uVar6 = (long)param_2 - (long)param_1;
  if (7 < uVar6) {
    if (uVar6 < 0x20) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar6 & 0xffffffffffffffe0;
      auVar3._12_4_ = 0xffffff07;
      auVar3._0_12_ = _UNK_01a8f150;
      auVar15._12_4_ = 0xffffff07;
      auVar15._0_12_ = _UNK_01a8f150;
      pauVar11 = (undefined1 (*) [16])(param_1 + 0x10);
      uVar12 = uVar9;
      do {
        auVar14 = pauVar11[-1];
        auVar16 = *pauVar11;
        uVar12 = uVar12 - 0x20;
        auVar17._8_4_ = 0xffffff0e;
        auVar17._0_8_ = 0xffffff0dffffff0c;
        auVar17._12_4_ = 0xffffff0f;
        auVar17 = a64_TBL(ZEXT816(0),auVar14,auVar17);
        auVar19 = a64_TBL(ZEXT816(0),auVar14,auVar13);
        auVar20 = a64_TBL(ZEXT816(0),auVar14,auVar15);
        auVar21 = a64_TBL(ZEXT816(0),auVar14,auVar4);
        auVar22._8_4_ = 0xffffff0e;
        auVar22._0_8_ = 0xffffff0dffffff0c;
        auVar22._12_4_ = 0xffffff0f;
        auVar22 = a64_TBL(ZEXT816(0),auVar16,auVar22);
        auVar23 = a64_TBL(ZEXT816(0),auVar16,auVar13);
        auVar24 = a64_TBL(ZEXT816(0),auVar16,auVar3);
        auVar25 = a64_TBL(ZEXT816(0),auVar16,auVar4);
        auVar18[1] = -(auVar21._4_4_ - 0x41U < 0x1a);
        auVar18[0] = -(auVar21._0_4_ - 0x41U < 0x1a);
        auVar18[2] = -(auVar21._8_4_ - 0x41U < 0x1a);
        auVar18[3] = -(auVar21._12_4_ - 0x41U < 0x1a);
        auVar18[4] = -(auVar20._0_4_ - 0x41U < 0x1a);
        auVar18[5] = -(auVar20._4_4_ - 0x41U < 0x1a);
        auVar18[6] = -(auVar20._8_4_ - 0x41U < 0x1a);
        auVar18[7] = -(auVar20._12_4_ - 0x41U < 0x1a);
        auVar18[8] = -(auVar19._0_4_ - 0x41U < 0x1a);
        auVar18[9] = -(auVar19._4_4_ - 0x41U < 0x1a);
        auVar18[10] = -(auVar19._8_4_ - 0x41U < 0x1a);
        auVar18[0xb] = -(auVar19._12_4_ - 0x41U < 0x1a);
        auVar18[0xc] = -(auVar17._0_4_ - 0x41U < 0x1a);
        auVar18[0xd] = -(auVar17._4_4_ - 0x41U < 0x1a);
        auVar18[0xe] = -(auVar17._8_4_ - 0x41U < 0x1a);
        auVar18[0xf] = -(auVar17._12_4_ - 0x41U < 0x1a);
        auVar19._0_8_ = auVar14._0_8_ | 0x2020202020202020;
        auVar19[8] = auVar14[8] | 0x20;
        auVar19[9] = auVar14[9] | 0x20;
        auVar19[10] = auVar14[10] | 0x20;
        auVar19[0xb] = auVar14[0xb] | 0x20;
        auVar19[0xc] = auVar14[0xc] | 0x20;
        auVar19[0xd] = auVar14[0xd] | 0x20;
        auVar19[0xe] = auVar14[0xe] | 0x20;
        auVar19[0xf] = auVar14[0xf] | 0x20;
        auVar20[1] = -(auVar25._4_4_ - 0x41U < 0x1a);
        auVar20[0] = -(auVar25._0_4_ - 0x41U < 0x1a);
        auVar20[2] = -(auVar25._8_4_ - 0x41U < 0x1a);
        auVar20[3] = -(auVar25._12_4_ - 0x41U < 0x1a);
        auVar20[4] = -(auVar24._0_4_ - 0x41U < 0x1a);
        auVar20[5] = -(auVar24._4_4_ - 0x41U < 0x1a);
        auVar20[6] = -(auVar24._8_4_ - 0x41U < 0x1a);
        auVar20[7] = -(auVar24._12_4_ - 0x41U < 0x1a);
        auVar20[8] = -(auVar23._0_4_ - 0x41U < 0x1a);
        auVar20[9] = -(auVar23._4_4_ - 0x41U < 0x1a);
        auVar20[10] = -(auVar23._8_4_ - 0x41U < 0x1a);
        auVar20[0xb] = -(auVar23._12_4_ - 0x41U < 0x1a);
        auVar20[0xc] = -(auVar22._0_4_ - 0x41U < 0x1a);
        auVar20[0xd] = -(auVar22._4_4_ - 0x41U < 0x1a);
        auVar20[0xe] = -(auVar22._8_4_ - 0x41U < 0x1a);
        auVar20[0xf] = -(auVar22._12_4_ - 0x41U < 0x1a);
        auVar21._0_8_ = auVar16._0_8_ | 0x2020202020202020;
        auVar21[8] = auVar16[8] | 0x20;
        auVar21[9] = auVar16[9] | 0x20;
        auVar21[10] = auVar16[10] | 0x20;
        auVar21[0xb] = auVar16[0xb] | 0x20;
        auVar21[0xc] = auVar16[0xc] | 0x20;
        auVar21[0xd] = auVar16[0xd] | 0x20;
        auVar21[0xe] = auVar16[0xe] | 0x20;
        auVar21[0xf] = auVar16[0xf] | 0x20;
        auVar14 = auVar14 ^ (auVar14 ^ auVar19) & auVar18;
        auVar16 = auVar16 ^ (auVar16 ^ auVar21) & auVar20;
        *(long *)(pauVar11[-1] + 8) = auVar14._8_8_;
        *(long *)pauVar11[-1] = auVar14._0_8_;
        *(long *)(*pauVar11 + 8) = auVar16._8_8_;
        *(long *)*pauVar11 = auVar16._0_8_;
        pauVar11 = pauVar11 + 2;
      } while (uVar12 != 0);
      if (uVar6 == uVar9) {
        return param_2;
      }
      if ((uVar6 & 0x18) == 0) {
        param_1 = param_1 + uVar9;
        goto LAB_0401e850;
      }
    }
    auVar5 = _UNK_01a8f150;
    auVar4 = _UNK_01a8d690;
    uVar12 = uVar6 & 0xfffffffffffffff8;
    lVar10 = uVar9 - uVar12;
    puVar8 = (ulong *)(param_1 + uVar9);
    do {
      uVar9 = *puVar8;
      lVar10 = lVar10 + 8;
      auVar13._12_4_ = 0xffffff07;
      auVar13._0_12_ = auVar5;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar9;
      auVar13 = a64_TBL(ZEXT816(0),auVar14,auVar13);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar9;
      auVar15 = a64_TBL(ZEXT816(0),auVar16,auVar4);
      *puVar8 = uVar9 ^ (uVar9 ^ (uVar9 | 0x2020202020202020)) &
                        CONCAT17(-(auVar13._12_4_ - 0x41U < 0x1a),
                                 CONCAT16(-(auVar13._8_4_ - 0x41U < 0x1a),
                                          CONCAT15(-(auVar13._4_4_ - 0x41U < 0x1a),
                                                   CONCAT14(-(auVar13._0_4_ - 0x41U < 0x1a),
                                                            CONCAT13(-(auVar15._12_4_ - 0x41U < 0x1a
                                                                      ),CONCAT12(-(auVar15._8_4_ -
                                                                                   0x41U < 0x1a),
                                                                                 CONCAT11(-(auVar15.
                                                  _4_4_ - 0x41U < 0x1a),
                                                  -(auVar15._0_4_ - 0x41U < 0x1a))))))));
      puVar8 = puVar8 + 1;
    } while (lVar10 != 0);
    param_1 = param_1 + uVar12;
    if (uVar6 == uVar12) {
      return param_2;
    }
  }
LAB_0401e850:
  do {
    bVar2 = *param_1;
    bVar1 = bVar2 | 0x20;
    if (0x19 < bVar2 - 0x41) {
      bVar1 = bVar2;
    }
    pbVar7 = (byte *)(param_1 + 1);
    *param_1 = bVar1;
    param_1 = (char *)pbVar7;
  } while (pbVar7 != (byte *)param_2);
                    /* WARNING: Read-only address (ram,0x01a8d690) is written */
                    /* WARNING: Read-only address (ram,0x01a8e410) is written */
                    /* WARNING: Read-only address (ram,0x01a8f150) is written */
                    /* WARNING: Read-only address (ram,0x01a8f15c) is written */
  return param_2;
}


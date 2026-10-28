// rea decompile_all
// name: std::__ndk1::ctype<wchar_t>::do_narrow
// address: 0x401db84
// body: available
// range: 0x401db84-0x401dd0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::ctype<wchar_t>::do_narrow(wchar_t const*, wchar_t const*, char, char*) const */

wchar_t * __thiscall
std::__ndk1::ctype<wchar_t>::do_narrow
          (ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,char param_3,char *param_4)

{
  ulong uVar1;
  wchar_t wVar2;
  undefined1 (*pauVar3) [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 (*pauVar16) [12];
  undefined1 (*pauVar17) [12];
  undefined1 auVar18 [16];
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  wchar_t *pwVar22;
  undefined1 (*pauVar23) [12];
  char *pcVar24;
  undefined1 (*pauVar25) [16];
  ulong *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  
  auVar18 = _UNK_01a8e240;
  if (param_1 == param_2) {
    return param_1;
  }
  uVar19 = (long)param_2 + (-4 - (long)param_1);
  if ((0x1b < uVar19) &&
     (((char *)((long)param_1 + (uVar19 & 0xfffffffffffffffc) + 4) <= param_4 ||
      (param_4 + (uVar19 >> 2) + 1 <= param_1)))) {
    uVar1 = (uVar19 >> 2) + 1;
    if (uVar19 < 0x7c) {
      uVar20 = 0;
    }
    else {
      uVar20 = uVar1 & 0x7fffffffffffffe0;
      pauVar23 = (undefined1 (*) [12])(param_1 + 0x10);
      pcVar24 = param_4 + 0x10;
      uVar19 = uVar20;
      do {
        auVar4 = *(undefined1 (*) [16])(pauVar23[-6] + 8);
        auVar5 = *(undefined1 (*) [16])(pauVar23 + -4);
        uVar19 = uVar19 - 0x20;
        puVar15 = *pauVar23;
        uVar31 = (uint)((ulong)*(undefined8 *)(puVar15 + 8) >> 0x20);
        puVar14 = *pauVar23;
        pauVar3 = pauVar23 + 2;
        uVar32 = (uint)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
        uVar9 = *(undefined8 *)*(undefined1 (*) [12])(pauVar23[1] + 4);
        auVar29 = *(undefined1 (*) [16])(pauVar23[-3] + 4);
        uVar7 = *(undefined8 *)(pauVar23[-1] + 4);
        uVar6 = *(undefined8 *)(pauVar23[-2] + 8);
        pauVar16 = pauVar23 + 3;
        uVar33 = (uint)((ulong)*(undefined8 *)(*pauVar16 + 4) >> 0x20);
        uVar11 = *(undefined8 *)*(undefined1 (*) [12])(pauVar23[2] + 8);
        pauVar17 = pauVar23 + 4;
        uVar34 = (uint)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
        uVar13 = *(undefined8 *)pauVar23[4];
        auVar27[9] = (char)((ulong)uVar7 >> 8);
        auVar27._0_9_ = *(unkbyte9 *)(pauVar23[-2] + 8);
        auVar27[10] = (char)((ulong)uVar7 >> 0x10);
        auVar27[0xb] = (char)((ulong)uVar7 >> 0x18);
        auVar27[0xc] = (char)((ulong)uVar7 >> 0x20);
        auVar27[0xd] = (char)((ulong)uVar7 >> 0x28);
        auVar27[0xe] = (char)((ulong)uVar7 >> 0x30);
        auVar27[0xf] = (char)((ulong)uVar7 >> 0x38);
        auVar27 = a64_TBL(ZEXT816(0),auVar4,auVar5,auVar29,auVar27,auVar18);
        auVar30._12_4_ = uVar31;
        auVar30._0_12_ = *pauVar23;
        auVar8._12_4_ = uVar32;
        auVar8._0_12_ = *(undefined1 (*) [12])(pauVar23[1] + 4);
        auVar10._12_4_ = uVar33;
        auVar10._0_12_ = *(undefined1 (*) [12])(pauVar23[2] + 8);
        auVar12._12_4_ = uVar34;
        auVar12._0_12_ = pauVar23[4];
        auVar30 = a64_TBL(ZEXT816(0),auVar30,auVar8,auVar10,auVar12,auVar18);
        pauVar23 = (undefined1 (*) [12])(pauVar23[10] + 8);
        auVar28[1] = -(0x7f < auVar4._4_4_);
        auVar28[0] = -(0x7f < auVar4._0_4_);
        auVar28[2] = -(0x7f < auVar4._8_4_);
        auVar28[3] = -(0x7f < auVar4._12_4_);
        auVar28[4] = -(0x7f < auVar5._0_4_);
        auVar28[5] = -(0x7f < auVar5._4_4_);
        auVar28[6] = -(0x7f < auVar5._8_4_);
        auVar28[7] = -(0x7f < auVar5._12_4_);
        auVar28[8] = -(0x7f < auVar29._0_4_);
        auVar28[9] = -(0x7f < auVar29._4_4_);
        auVar28[10] = -(0x7f < auVar29._8_4_);
        auVar28[0xb] = -(0x7f < auVar29._12_4_);
        auVar28[0xc] = -(0x7f < (uint)uVar6);
        auVar28[0xd] = -(0x7f < (uint)((ulong)uVar6 >> 0x20));
        auVar28[0xe] = -(0x7f < (uint)uVar7);
        auVar28[0xf] = -(0x7f < (uint)((ulong)uVar7 >> 0x20));
        auVar4[1] = param_3;
        auVar4[0] = param_3;
        auVar4[2] = param_3;
        auVar4[3] = param_3;
        auVar4[4] = param_3;
        auVar4[5] = param_3;
        auVar4[6] = param_3;
        auVar4[7] = param_3;
        auVar4[8] = param_3;
        auVar4[9] = param_3;
        auVar4[10] = param_3;
        auVar4[0xb] = param_3;
        auVar4[0xc] = param_3;
        auVar4[0xd] = param_3;
        auVar4[0xe] = param_3;
        auVar4[0xf] = param_3;
        auVar27 = auVar27 ^ (auVar27 ^ auVar4) & auVar28;
        auVar29[9] = -(0x7f < (uint)((ulong)uVar11 >> 0x20));
        auVar29[8] = -(0x7f < (uint)uVar11);
        auVar29[10] = -(0x7f < (uint)*(undefined8 *)(*pauVar16 + 4));
        auVar29[0xb] = -(0x7f < uVar33);
        auVar29[0xc] = -(0x7f < (uint)uVar13);
        auVar29[0xd] = -(0x7f < (uint)((ulong)uVar13 >> 0x20));
        auVar29[0xe] = -(0x7f < (uint)*(undefined8 *)(*pauVar17 + 8));
        auVar29[0xf] = -(0x7f < uVar34);
        auVar29[1] = -(0x7f < (uint)((ulong)*(undefined8 *)puVar14 >> 0x20));
        auVar29[0] = -(0x7f < (uint)*(undefined8 *)puVar14);
        auVar29[2] = -(0x7f < (uint)*(undefined8 *)(puVar15 + 8));
        auVar29[3] = -(0x7f < uVar31);
        auVar29[4] = -(0x7f < (uint)uVar9);
        auVar29[5] = -(0x7f < (uint)((ulong)uVar9 >> 0x20));
        auVar29[6] = -(0x7f < (uint)*(undefined8 *)*pauVar3);
        auVar29[7] = -(0x7f < uVar32);
        auVar5[1] = param_3;
        auVar5[0] = param_3;
        auVar5[2] = param_3;
        auVar5[3] = param_3;
        auVar5[4] = param_3;
        auVar5[5] = param_3;
        auVar5[6] = param_3;
        auVar5[7] = param_3;
        auVar5[8] = param_3;
        auVar5[9] = param_3;
        auVar5[10] = param_3;
        auVar5[0xb] = param_3;
        auVar5[0xc] = param_3;
        auVar5[0xd] = param_3;
        auVar5[0xe] = param_3;
        auVar5[0xf] = param_3;
        auVar30 = auVar30 ^ (auVar30 ^ auVar5) & auVar29;
        *(long *)(pcVar24 + -8) = auVar27._8_8_;
        *(long *)(pcVar24 + -0x10) = auVar27._0_8_;
        *(long *)(pcVar24 + 8) = auVar30._8_8_;
        *(long *)pcVar24 = auVar30._0_8_;
        pcVar24 = pcVar24 + 0x20;
      } while (uVar19 != 0);
      if (uVar1 == uVar20) {
        return param_2;
      }
      if ((uVar1 & 0x18) == 0) {
        param_1 = param_1 + uVar20;
        param_4 = param_4 + uVar20;
        goto LAB_0401dbd0;
      }
    }
    auVar18 = _UNK_01a8caf0;
    uVar19 = uVar1 & 0x7ffffffffffffff8;
    lVar21 = uVar20 - uVar19;
    pauVar25 = (undefined1 (*) [16])(param_1 + uVar20);
    puVar26 = (ulong *)(param_4 + uVar20);
    do {
      auVar4 = *pauVar25;
      auVar5 = pauVar25[1];
      lVar21 = lVar21 + 8;
      auVar27 = a64_TBL(ZEXT816(0),auVar4,auVar5,auVar18);
      *puVar26 = auVar27._0_8_ ^
                 (auVar27._0_8_ ^
                 CONCAT17(param_3,CONCAT16(param_3,CONCAT15(param_3,CONCAT14(param_3,CONCAT13(
                                                  param_3,CONCAT12(param_3,CONCAT11(param_3,param_3)
                                                                  ))))))) &
                 CONCAT17(-(0x7f < auVar5._12_4_),
                          CONCAT16(-(0x7f < auVar5._8_4_),
                                   CONCAT15(-(0x7f < auVar5._4_4_),
                                            CONCAT14(-(0x7f < auVar5._0_4_),
                                                     CONCAT13(-(0x7f < auVar4._12_4_),
                                                              CONCAT12(-(0x7f < auVar4._8_4_),
                                                                       CONCAT11(-(0x7f < auVar4.
                                                  _4_4_),-(0x7f < auVar4._0_4_))))))));
      pauVar25 = pauVar25 + 2;
      puVar26 = puVar26 + 1;
    } while (lVar21 != 0);
    param_1 = param_1 + uVar19;
    param_4 = param_4 + uVar19;
    if (uVar1 == uVar19) {
      return param_2;
    }
  }
LAB_0401dbd0:
  do {
    pwVar22 = param_1 + 1;
    wVar2 = (uint)(byte)param_3;
    if ((uint)*param_1 < 0x80) {
      wVar2 = *param_1;
    }
    *param_4 = (char)wVar2;
    param_1 = pwVar22;
    param_4 = param_4 + 1;
  } while (pwVar22 != param_2);
                    /* WARNING: Read-only address (ram,0x01a8caf0) is written */
                    /* WARNING: Read-only address (ram,0x01a8e240) is written */
  return param_2;
}


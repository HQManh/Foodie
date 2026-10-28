// rea decompile_all
// name: std::__ndk1::ctype<wchar_t>::do_widen
// address: 0x401da44
// body: available
// range: 0x401da44-0x401db73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::ctype<wchar_t>::do_widen(char const*, char const*, wchar_t*) const */

char * __thiscall
std::__ndk1::ctype<wchar_t>::do_widen
          (ctype<wchar_t> *this,char *param_1,char *param_2,wchar_t *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  ulong *puVar7;
  undefined1 (*pauVar8) [16];
  wchar_t *pwVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar11 = _UNK_01a8f150;
  auVar2 = _UNK_01a8e410;
  auVar1 = _UNK_01a8d690;
  if (param_1 == param_2) {
    return param_1;
  }
  uVar3 = (long)param_2 - (long)param_1;
  if ((7 < uVar3) && ((param_2 <= param_3 || (param_3 + uVar3 <= param_1)))) {
    if (uVar3 < 0x20) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar3 & 0xffffffffffffffe0;
      auVar12._8_8_ = 0xffffff0fffffff0e;
      auVar12._0_8_ = 0xffffff0dffffff0c;
      pauVar8 = (undefined1 (*) [16])(param_1 + 0x10);
      pwVar9 = param_3 + 0x10;
      uVar10 = uVar4;
      do {
        auVar13 = pauVar8[-1];
        auVar16 = *pauVar8;
        uVar10 = uVar10 - 0x20;
        pauVar8 = pauVar8 + 2;
        auVar14 = a64_TBL(ZEXT816(0),auVar13,auVar12);
        auVar15 = a64_TBL(ZEXT816(0),auVar13,auVar2);
        auVar17 = a64_TBL(ZEXT816(0),auVar13,auVar11);
        auVar13 = a64_TBL(ZEXT816(0),auVar13,auVar1);
        auVar18 = a64_TBL(ZEXT816(0),auVar16,auVar12);
        *(long *)(pwVar9 + -6) = auVar15._8_8_;
        *(long *)(pwVar9 + -8) = auVar15._0_8_;
        *(long *)(pwVar9 + -2) = auVar14._8_8_;
        *(long *)(pwVar9 + -4) = auVar14._0_8_;
        auVar14 = a64_TBL(ZEXT816(0),auVar16,auVar2);
        auVar15 = a64_TBL(ZEXT816(0),auVar16,auVar11);
        auVar16 = a64_TBL(ZEXT816(0),auVar16,auVar1);
        *(long *)(pwVar9 + -0xe) = auVar13._8_8_;
        *(long *)(pwVar9 + -0x10) = auVar13._0_8_;
        *(long *)(pwVar9 + -10) = auVar17._8_8_;
        *(long *)(pwVar9 + -0xc) = auVar17._0_8_;
        *(long *)(pwVar9 + 10) = auVar14._8_8_;
        *(long *)(pwVar9 + 8) = auVar14._0_8_;
        *(long *)(pwVar9 + 0xe) = auVar18._8_8_;
        *(long *)(pwVar9 + 0xc) = auVar18._0_8_;
        *(long *)(pwVar9 + 2) = auVar16._8_8_;
        *(long *)pwVar9 = auVar16._0_8_;
        *(long *)(pwVar9 + 6) = auVar15._8_8_;
        *(long *)(pwVar9 + 4) = auVar15._0_8_;
        pwVar9 = pwVar9 + 0x20;
      } while (uVar10 != 0);
      if (uVar3 == uVar4) {
        return param_2;
      }
      if ((uVar3 & 0x18) == 0) {
        param_3 = param_3 + uVar4;
        param_1 = param_1 + uVar4;
        goto LAB_0401da7c;
      }
    }
    auVar2 = _UNK_01a8f150;
    auVar1 = _UNK_01a8d690;
    uVar10 = uVar3 & 0xfffffffffffffff8;
    pwVar9 = param_3 + uVar4;
    param_3 = param_3 + uVar10;
    lVar5 = uVar4 - uVar10;
    puVar7 = (ulong *)(param_1 + uVar4);
    do {
      auVar11._0_8_ = *puVar7;
      auVar11._8_8_ = 0;
      lVar5 = lVar5 + 8;
      auVar12 = a64_TBL(ZEXT816(0),auVar11,auVar2);
      auVar11 = a64_TBL(ZEXT816(0),auVar11,auVar1);
      *(long *)(pwVar9 + 2) = auVar11._8_8_;
      *(long *)pwVar9 = auVar11._0_8_;
      *(long *)(pwVar9 + 6) = auVar12._8_8_;
      *(long *)(pwVar9 + 4) = auVar12._0_8_;
      puVar7 = puVar7 + 1;
      pwVar9 = pwVar9 + 8;
    } while (lVar5 != 0);
    param_1 = param_1 + uVar10;
    if (uVar3 == uVar10) {
      return param_2;
    }
  }
LAB_0401da7c:
  do {
    pbVar6 = (byte *)(param_1 + 1);
    *param_3 = (uint)(byte)*param_1;
    param_1 = (char *)pbVar6;
    param_3 = param_3 + 1;
  } while (pbVar6 != (byte *)param_2);
                    /* WARNING: Read-only address (ram,0x01a8d690) is written */
                    /* WARNING: Read-only address (ram,0x01a8e410) is written */
                    /* WARNING: Read-only address (ram,0x01a8f150) is written */
  return param_2;
}


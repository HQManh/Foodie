// rea decompile_all
// name: std::__ndk1::ctype<char>::do_narrow
// address: 0x401e1b8
// body: available
// range: 0x401e1b8-0x401e2af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::ctype<char>::do_narrow(char const*, char const*, char, char*) const */

char * __thiscall
std::__ndk1::ctype<char>::do_narrow
          (ctype<char> *this,char *param_1,char *param_2,char param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  ulong uVar34;
  byte *pbVar35;
  byte *pbVar36;
  char *pcVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  ulong *puVar41;
  ulong *puVar42;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar34 = (long)param_2 - (long)param_1;
  if ((7 < uVar34) && (0x1f < (ulong)((long)param_4 - (long)param_1))) {
    if (uVar34 < 0x20) {
      uVar38 = 0;
    }
    else {
      uVar38 = uVar34 & 0xffffffffffffffe0;
      pbVar35 = (byte *)(param_1 + 0x10);
      pbVar36 = (byte *)(param_4 + 0x10);
      uVar40 = uVar38;
      do {
        bVar2 = pbVar35[-0x10];
        bVar3 = pbVar35[-0xf];
        bVar4 = pbVar35[-0xe];
        bVar5 = pbVar35[-0xd];
        bVar6 = pbVar35[-0xc];
        bVar7 = pbVar35[-0xb];
        bVar8 = pbVar35[-10];
        bVar9 = pbVar35[-9];
        bVar10 = pbVar35[-8];
        bVar11 = pbVar35[-7];
        bVar12 = pbVar35[-6];
        bVar13 = pbVar35[-5];
        bVar14 = pbVar35[-4];
        bVar15 = pbVar35[-3];
        bVar16 = pbVar35[-2];
        bVar17 = pbVar35[-1];
        bVar18 = *pbVar35;
        bVar19 = pbVar35[1];
        bVar20 = pbVar35[2];
        bVar21 = pbVar35[3];
        bVar22 = pbVar35[4];
        bVar23 = pbVar35[5];
        bVar24 = pbVar35[6];
        bVar25 = pbVar35[7];
        bVar26 = pbVar35[8];
        bVar27 = pbVar35[9];
        bVar28 = pbVar35[10];
        bVar29 = pbVar35[0xb];
        bVar30 = pbVar35[0xc];
        bVar31 = pbVar35[0xd];
        bVar32 = pbVar35[0xe];
        bVar33 = pbVar35[0xf];
        uVar40 = uVar40 - 0x20;
        pbVar35 = pbVar35 + 0x20;
        pbVar36[-8] = bVar10 ^ (bVar10 ^ param_3) & -((char)bVar10 < '\0');
        pbVar36[-7] = bVar11 ^ (bVar11 ^ param_3) & -((char)bVar11 < '\0');
        pbVar36[-6] = bVar12 ^ (bVar12 ^ param_3) & -((char)bVar12 < '\0');
        pbVar36[-5] = bVar13 ^ (bVar13 ^ param_3) & -((char)bVar13 < '\0');
        pbVar36[-4] = bVar14 ^ (bVar14 ^ param_3) & -((char)bVar14 < '\0');
        pbVar36[-3] = bVar15 ^ (bVar15 ^ param_3) & -((char)bVar15 < '\0');
        pbVar36[-2] = bVar16 ^ (bVar16 ^ param_3) & -((char)bVar16 < '\0');
        pbVar36[-1] = bVar17 ^ (bVar17 ^ param_3) & -((char)bVar17 < '\0');
        pbVar36[-0x10] = bVar2 ^ (bVar2 ^ param_3) & -((char)bVar2 < '\0');
        pbVar36[-0xf] = bVar3 ^ (bVar3 ^ param_3) & -((char)bVar3 < '\0');
        pbVar36[-0xe] = bVar4 ^ (bVar4 ^ param_3) & -((char)bVar4 < '\0');
        pbVar36[-0xd] = bVar5 ^ (bVar5 ^ param_3) & -((char)bVar5 < '\0');
        pbVar36[-0xc] = bVar6 ^ (bVar6 ^ param_3) & -((char)bVar6 < '\0');
        pbVar36[-0xb] = bVar7 ^ (bVar7 ^ param_3) & -((char)bVar7 < '\0');
        pbVar36[-10] = bVar8 ^ (bVar8 ^ param_3) & -((char)bVar8 < '\0');
        pbVar36[-9] = bVar9 ^ (bVar9 ^ param_3) & -((char)bVar9 < '\0');
        pbVar36[8] = bVar26 ^ (bVar26 ^ param_3) & -((char)bVar26 < '\0');
        pbVar36[9] = bVar27 ^ (bVar27 ^ param_3) & -((char)bVar27 < '\0');
        pbVar36[10] = bVar28 ^ (bVar28 ^ param_3) & -((char)bVar28 < '\0');
        pbVar36[0xb] = bVar29 ^ (bVar29 ^ param_3) & -((char)bVar29 < '\0');
        pbVar36[0xc] = bVar30 ^ (bVar30 ^ param_3) & -((char)bVar30 < '\0');
        pbVar36[0xd] = bVar31 ^ (bVar31 ^ param_3) & -((char)bVar31 < '\0');
        pbVar36[0xe] = bVar32 ^ (bVar32 ^ param_3) & -((char)bVar32 < '\0');
        pbVar36[0xf] = bVar33 ^ (bVar33 ^ param_3) & -((char)bVar33 < '\0');
        *pbVar36 = bVar18 ^ (bVar18 ^ param_3) & -((char)bVar18 < '\0');
        pbVar36[1] = bVar19 ^ (bVar19 ^ param_3) & -((char)bVar19 < '\0');
        pbVar36[2] = bVar20 ^ (bVar20 ^ param_3) & -((char)bVar20 < '\0');
        pbVar36[3] = bVar21 ^ (bVar21 ^ param_3) & -((char)bVar21 < '\0');
        pbVar36[4] = bVar22 ^ (bVar22 ^ param_3) & -((char)bVar22 < '\0');
        pbVar36[5] = bVar23 ^ (bVar23 ^ param_3) & -((char)bVar23 < '\0');
        pbVar36[6] = bVar24 ^ (bVar24 ^ param_3) & -((char)bVar24 < '\0');
        pbVar36[7] = bVar25 ^ (bVar25 ^ param_3) & -((char)bVar25 < '\0');
        pbVar36 = pbVar36 + 0x20;
      } while (uVar40 != 0);
      if (uVar34 == uVar38) {
        return param_2;
      }
      if ((uVar34 & 0x18) == 0) {
        param_1 = param_1 + uVar38;
        param_4 = param_4 + uVar38;
        goto LAB_0401e290;
      }
    }
    uVar40 = uVar34 & 0xfffffffffffffff8;
    lVar39 = uVar38 - uVar40;
    puVar41 = (ulong *)(param_1 + uVar38);
    puVar42 = (ulong *)(param_4 + uVar38);
    do {
      uVar38 = *puVar41;
      lVar39 = lVar39 + 8;
      *puVar42 = uVar38 ^ (uVar38 ^ CONCAT17(param_3,CONCAT16(param_3,CONCAT15(param_3,CONCAT14(
                                                  param_3,CONCAT13(param_3,CONCAT12(param_3,CONCAT11
                                                  (param_3,param_3)))))))) &
                          CONCAT17(-((long)uVar38 < 0),
                                   CONCAT16(-((char)(uVar38 >> 0x30) < '\0'),
                                            CONCAT15(-((char)(uVar38 >> 0x28) < '\0'),
                                                     CONCAT14(-((char)(uVar38 >> 0x20) < '\0'),
                                                              CONCAT13(-((char)(uVar38 >> 0x18) <
                                                                        '\0'),CONCAT12(-((char)(
                                                  uVar38 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)(uVar38 >> 8) < '\0'),
                                                           -((char)uVar38 < '\0'))))))));
      puVar41 = puVar41 + 1;
      puVar42 = puVar42 + 1;
    } while (lVar39 != 0);
    param_4 = param_4 + uVar40;
    param_1 = param_1 + uVar40;
    if (uVar34 == uVar40) {
      return param_2;
    }
  }
LAB_0401e290:
  do {
    pcVar37 = param_1 + 1;
    cVar1 = param_3;
    if (-1 < *param_1) {
      cVar1 = *param_1;
    }
    *param_4 = cVar1;
    param_4 = param_4 + 1;
    param_1 = pcVar37;
  } while (pcVar37 != param_2);
  return param_2;
}


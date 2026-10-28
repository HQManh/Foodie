// rea decompile_all
// name: FUN_03ffd344
// address: 0x3ffd344
// body: available
// range: 0x3ffd344-0x3ffd953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_03ffd344(undefined8 param_1,long *param_2,long *param_3,__num_get<char> *param_4,
                   uint *param_5,undefined8 *param_6)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  byte *pbVar17;
  byte bVar18;
  ulong uVar19;
  uint uVar20;
  char *pcVar21;
  char *pcVar22;
  uint *puVar23;
  uint uVar24;
  uint local_158 [40];
  ulong local_b8;
  ulong local_b0;
  char *local_a8;
  byte local_a0 [8];
  ulong local_98;
  byte *local_90;
  ios_base aiStack_86 [24];
  byte local_6e;
  byte local_6d;
  byte local_6c [12];
  
  uVar20 = *(uint *)(param_4 + 8) & 0x4a;
  if (uVar20 == 0) {
    uVar20 = 0;
  }
  else if (uVar20 == 0x40) {
    uVar20 = 8;
  }
  else if (uVar20 == 8) {
    uVar20 = 0x10;
  }
  else {
    uVar20 = 10;
  }
  std::__ndk1::__num_get<char>::__stage2_int_prep
            (param_4,aiStack_86,(char *)local_6c,(char *)param_4);
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (char *)0x0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_b8
         ,0x16,'\0');
  pcVar12 = (char *)((ulong)&local_b8 | 1);
  uVar24 = 0;
  puVar23 = local_158;
  pcVar9 = pcVar12;
  pcVar22 = pcVar12;
  if ((local_b8 & 1) != 0) {
    pcVar9 = local_a8;
    pcVar22 = local_a8;
  }
LAB_03ffd418:
  if (param_2 == (long *)0x0) {
    bVar2 = true;
  }
  else if (param_2[3] == param_2[4]) {
    iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
    bVar2 = iVar3 == -1;
    if (bVar2) {
      param_2 = (long *)0x0;
    }
  }
  else {
    bVar2 = false;
  }
  if (param_3 == (long *)0x0) {
    if (bVar2 != false) goto LAB_03ffd724;
LAB_03ffd4a4:
    uVar19 = local_b8 >> 1 & 0x7f;
    if ((local_b8 & 1) != 0) {
      uVar19 = local_b0;
    }
    if (pcVar9 == pcVar22 + uVar19) {
      if ((long)uVar19 < 1) {
        uVar11 = uVar19 * 2;
        pcVar9 = local_a8;
        uVar13 = uVar11;
        if ((local_b8 & 1) == 0) {
          local_b8 = CONCAT71(local_b8._1_7_,(char)((int)uVar11 << 1));
          pcVar9 = pcVar12;
          uVar13 = local_b0;
        }
        local_b0 = uVar13;
        pcVar9[uVar11] = '\0';
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,uVar19,'\0');
      }
      uVar13 = 0x16;
      if ((local_b8 & 1) != 0) {
        uVar13 = (local_b8 & 0xfffffffffffffffe) - 1;
      }
      uVar11 = local_b8 >> 1 & 0x7f;
      if ((local_b8 & 1) != 0) {
        uVar11 = local_b0;
      }
      if (uVar13 < uVar11 || uVar13 - uVar11 == 0) {
        if ((local_b8 & 1) != 0) {
          local_a8[uVar13] = '\0';
          local_b0 = uVar13;
          goto joined_r0x03ffd6a0;
        }
        local_b8 = CONCAT71(local_b8._1_7_,(char)((int)uVar13 << 1));
        pcVar12[uVar13] = '\0';
        pcVar22 = pcVar12;
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,uVar13 - uVar11,'\0');
joined_r0x03ffd6a0:
        pcVar22 = pcVar12;
        if ((local_b8 & 1) != 0) {
          pcVar22 = local_a8;
        }
      }
      pcVar9 = pcVar22 + uVar19;
      pbVar4 = (byte *)param_2[3];
      if (pbVar4 != (byte *)param_2[4]) goto LAB_03ffd4d0;
LAB_03ffd580:
      uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
      uVar6 = uVar6 & 0xff;
      uVar8 = (uint)local_6c[0];
      if (pcVar9 != pcVar22) goto LAB_03ffd5f4;
LAB_03ffd5a0:
      uVar8 = (uint)local_6c[0];
      if (local_6e == uVar6) {
        cVar7 = '+';
      }
      else {
        if (local_6d != uVar6) goto LAB_03ffd5f4;
        cVar7 = '-';
      }
LAB_03ffd700:
      uVar24 = 0;
      *pcVar9 = cVar7;
      lVar10 = param_2[3];
      pcVar21 = pcVar9 + 1;
      uVar6 = uVar24;
      if (lVar10 != param_2[4]) goto LAB_03ffd410;
LAB_03ffd710:
      uVar24 = uVar6;
      (**(code **)(*param_2 + 0x50))(param_2);
      pcVar9 = pcVar21;
    }
    else {
      pbVar4 = (byte *)param_2[3];
      if (pbVar4 == (byte *)param_2[4]) goto LAB_03ffd580;
LAB_03ffd4d0:
      uVar6 = (uint)*pbVar4;
      uVar8 = (uint)local_6c[0];
      if (pcVar9 == pcVar22) goto LAB_03ffd5a0;
LAB_03ffd5f4:
      uVar13 = local_98;
      uVar19 = (ulong)(local_a0[0] >> 1);
      bVar18 = local_a0[0] & 1;
      uVar11 = uVar19;
      if ((local_a0[0] & 1) != 0) {
        uVar11 = local_98;
      }
      if ((uVar6 == uVar8) && (uVar11 != 0)) {
        pcVar21 = pcVar9;
        if ((long)puVar23 - (long)local_158 < 0xa0) {
          puVar14 = puVar23 + 1;
          *puVar23 = uVar24;
          uVar24 = 0;
          lVar10 = param_2[3];
          puVar23 = puVar14;
          uVar6 = 0;
          if (lVar10 != param_2[4]) goto LAB_03ffd410;
          goto LAB_03ffd710;
        }
      }
      else {
        pbVar4 = memchr(aiStack_86,uVar6,0x1a);
        if (pbVar4 == (byte *)0x0) {
          pbVar4 = local_6c;
        }
        lVar10 = (long)pbVar4 - (long)aiStack_86;
        if (0x17 < lVar10) goto LAB_03ffd734;
        if (uVar20 == 8) {
LAB_03ffd67c:
          if ((long)(ulong)uVar20 <= lVar10) goto LAB_03ffd734;
        }
        else if (uVar20 == 0x10) {
          if (0x15 < lVar10) {
            if (((pcVar9 != pcVar22) && ((long)pcVar9 - (long)pcVar22 < 3)) && (pcVar9[-1] == '0'))
            {
              cVar7 = "0123456789abcdefABCDEFxX+-pPiInN"[lVar10];
              goto LAB_03ffd700;
            }
            goto LAB_03ffd734;
          }
        }
        else if (uVar20 == 10) goto LAB_03ffd67c;
        uVar24 = uVar24 + 1;
        pcVar21 = pcVar9 + 1;
        *pcVar9 = "0123456789abcdefABCDEFxX+-pPiInN"[lVar10];
      }
      lVar10 = param_2[3];
      uVar6 = uVar24;
      if (lVar10 == param_2[4]) goto LAB_03ffd710;
LAB_03ffd410:
      param_2[3] = lVar10 + 1;
      pcVar9 = pcVar21;
    }
    goto LAB_03ffd418;
  }
  if (param_3[3] == param_3[4]) {
    iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    if (iVar3 == -1) {
      param_3 = (long *)0x0;
    }
    if (bVar2 == (iVar3 == -1)) goto LAB_03ffd724;
    goto LAB_03ffd4a4;
  }
  if (bVar2 != false) goto LAB_03ffd4a4;
LAB_03ffd724:
  uVar19 = (ulong)(local_a0[0] >> 1);
  bVar18 = local_a0[0] & 1;
  uVar13 = local_98;
LAB_03ffd734:
  if (bVar18 != 0) {
    uVar19 = uVar13;
  }
  puVar14 = puVar23;
  if ((uVar19 != 0) && ((long)puVar23 - (long)local_158 < 0xa0)) {
    puVar14 = puVar23 + 1;
    *puVar23 = uVar24;
  }
  uVar5 = FUN_0402db50(pcVar22,pcVar9,param_5,uVar20);
  uVar13 = (ulong)local_a0[0];
  bVar18 = local_a0[0] & 1;
  uVar19 = (ulong)(local_a0[0] >> 1);
  if ((local_a0[0] & 1) != 0) {
    uVar19 = local_98;
  }
  *param_6 = uVar5;
  if ((4 < (long)puVar14 - (long)local_158) && (uVar19 != 0)) {
    puVar23 = puVar14 + -1;
    if ((local_158 != puVar14) && (local_158 < puVar23)) {
      puVar14 = local_158;
      puVar15 = puVar23;
      do {
        puVar14 = puVar14 + 1;
        uVar20 = puVar14[-1];
        puVar14[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar20;
        puVar15 = puVar16;
      } while (puVar14 < puVar16);
      uVar13 = (ulong)local_a0[0];
      bVar18 = local_a0[0] & 1;
    }
    pbVar4 = (byte *)((ulong)local_a0 | 1);
    if (bVar18 != 0) {
      pbVar4 = local_90;
    }
    pbVar17 = pbVar4;
    if (local_158 < puVar23) {
      uVar19 = uVar13 >> 1;
      if (bVar18 != 0) {
        uVar19 = local_98;
      }
      puVar14 = local_158;
      do {
        bVar18 = *pbVar17;
        if (((bVar18 != 0) && (bVar18 != 0xff)) && (*puVar14 != (uint)bVar18)) goto LAB_03ffd878;
        puVar14 = puVar14 + 1;
        if (1 < (long)(pbVar4 + (uVar19 - (long)pbVar17))) {
          pbVar17 = pbVar17 + 1;
        }
      } while (puVar14 < puVar23);
    }
    bVar18 = *pbVar17;
    if (((bVar18 != 0) && (bVar18 != 0xff)) && ((uint)bVar18 <= *puVar23 - 1)) {
LAB_03ffd878:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar2 = true;
    plVar1 = param_2;
joined_r0x03ffd8a0:
    param_2 = plVar1;
    if (param_3 != (long *)0x0) goto LAB_03ffd8a4;
LAB_03ffd928:
    if (bVar2 == false) goto LAB_03ffd8c0;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar2 = iVar3 == -1;
      plVar1 = (long *)0x0;
      if (!bVar2) {
        plVar1 = param_2;
      }
      goto joined_r0x03ffd8a0;
    }
    bVar2 = false;
    if (param_3 == (long *)0x0) goto LAB_03ffd928;
LAB_03ffd8a4:
    if (param_3[3] == param_3[4]) {
      iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar2 != (iVar3 == -1)) goto LAB_03ffd8c0;
    }
    else if (bVar2 != false) goto LAB_03ffd8c0;
  }
  *param_5 = *param_5 | 2;
LAB_03ffd8c0:
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  return param_2;
}


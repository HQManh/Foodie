// rea decompile_all
// name: FUN_0400126c
// address: 0x400126c
// body: available
// range: 0x400126c-0x4001863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_0400126c(undefined8 param_1,long *param_2,long *param_3,__num_get<wchar_t> *param_4,
                   uint *param_5,undefined4 *param_6)

{
  byte *pbVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  bool bVar5;
  wchar_t __c;
  undefined4 uVar6;
  int iVar7;
  wchar_t *pwVar8;
  char cVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  byte *pbVar17;
  byte bVar18;
  char *pcVar19;
  uint uVar20;
  char *pcVar21;
  char *pcVar22;
  uint *puVar23;
  uint uVar24;
  uint local_1a8 [40];
  ulong local_108;
  ulong local_100;
  char *local_f8;
  byte local_f0 [8];
  ulong local_e8;
  byte *local_e0;
  ios_base aiStack_d4 [96];
  wchar_t local_74;
  wchar_t local_70;
  wchar_t local_6c [3];
  
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
  std::__ndk1::__num_get<wchar_t>::__stage2_int_prep(param_4,aiStack_d4,local_6c,(wchar_t *)param_4)
  ;
  local_108 = 0;
  local_100 = 0;
  local_f8 = (char *)0x0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         &local_108,0x16,'\0');
  pcVar19 = (char *)((ulong)&local_108 | 1);
  uVar24 = 0;
  puVar23 = local_1a8;
  pcVar10 = pcVar19;
  pcVar22 = pcVar19;
  if ((local_108 & 1) != 0) {
    pcVar10 = local_f8;
    pcVar22 = local_f8;
  }
LAB_04001340:
  if (param_2 == (long *)0x0) {
    bVar5 = true;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar5 = iVar7 == -1;
    if (bVar5) {
      param_2 = (long *)0x0;
    }
  }
  if (param_3 == (long *)0x0) {
    if (bVar5 != false) goto LAB_0400163c;
  }
  else {
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (iVar7 == -1) {
      param_3 = (long *)0x0;
    }
    if (bVar5 == (iVar7 == -1)) goto LAB_0400163c;
  }
  uVar2 = local_108 >> 1 & 0x7f;
  if ((local_108 & 1) != 0) {
    uVar2 = local_100;
  }
  if (pcVar10 == pcVar22 + uVar2) {
    if ((long)uVar2 < 1) {
      uVar12 = uVar2 * 2;
      pcVar10 = local_f8;
      uVar13 = uVar12;
      if ((local_108 & 1) == 0) {
        local_108 = CONCAT71(local_108._1_7_,(char)((int)uVar12 << 1));
        pcVar10 = pcVar19;
        uVar13 = local_100;
      }
      local_100 = uVar13;
      pcVar10[uVar12] = '\0';
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_108,uVar2,'\0');
    }
    uVar13 = 0x16;
    if ((local_108 & 1) != 0) {
      uVar13 = (local_108 & 0xfffffffffffffffe) - 1;
    }
    uVar12 = local_108 >> 1 & 0x7f;
    if ((local_108 & 1) != 0) {
      uVar12 = local_100;
    }
    if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
      if ((local_108 & 1) != 0) {
        local_f8[uVar13] = '\0';
        local_100 = uVar13;
        goto joined_r0x040015b8;
      }
      local_108 = CONCAT71(local_108._1_7_,(char)((int)uVar13 << 1));
      pcVar19[uVar13] = '\0';
      pcVar22 = pcVar19;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_108,uVar13 - uVar12,'\0');
joined_r0x040015b8:
      pcVar22 = pcVar19;
      if ((local_108 & 1) != 0) {
        pcVar22 = local_f8;
      }
    }
    pcVar10 = pcVar22 + uVar2;
    pwVar8 = (wchar_t *)param_2[3];
    if (pwVar8 != (wchar_t *)param_2[4]) goto LAB_040013f8;
LAB_0400149c:
    __c = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    pwVar8 = (wchar_t *)param_2[3];
    if (pwVar8 == (wchar_t *)param_2[4]) goto LAB_0400149c;
LAB_040013f8:
    __c = *pwVar8;
  }
  if (pcVar10 == pcVar22) {
    if (local_74 == __c) {
      cVar9 = '+';
    }
    else {
      if (local_70 != __c) goto LAB_040014bc;
      cVar9 = '-';
    }
LAB_04001618:
    uVar24 = 0;
    pcVar21 = pcVar10 + 1;
    *pcVar10 = cVar9;
    lVar11 = param_2[3];
    uVar4 = uVar24;
    if (lVar11 == param_2[4]) goto LAB_04001628;
LAB_04001338:
    param_2[3] = lVar11 + 4;
    pcVar10 = pcVar21;
  }
  else {
LAB_040014bc:
    uVar2 = (ulong)(local_f0[0] >> 1);
    if ((local_f0[0] & 1) != 0) {
      uVar2 = local_e8;
    }
    if ((__c == local_6c[0]) && (uVar2 != 0)) {
      pcVar21 = pcVar10;
      if ((long)puVar23 - (long)local_1a8 < 0xa0) {
        puVar14 = puVar23 + 1;
        *puVar23 = uVar24;
        uVar24 = 0;
        lVar11 = param_2[3];
        puVar23 = puVar14;
        uVar4 = 0;
        if (lVar11 == param_2[4]) goto LAB_04001628;
        goto LAB_04001338;
      }
    }
    else {
      pwVar8 = wmemchr((wchar_t *)aiStack_d4,__c,0x1a);
      if (pwVar8 == (wchar_t *)0x0) {
        pwVar8 = local_6c;
      }
      lVar11 = (long)pwVar8 - (long)aiStack_d4 >> 2;
      if (0x17 < lVar11) goto LAB_0400163c;
      if (uVar20 == 8) {
LAB_04001558:
        if ((long)(ulong)uVar20 <= lVar11) goto LAB_0400163c;
      }
      else if (uVar20 == 0x10) {
        if (0x15 < lVar11) {
          if (((pcVar10 != pcVar22) && ((long)pcVar10 - (long)pcVar22 < 3)) && (pcVar10[-1] == '0'))
          {
            cVar9 = "0123456789abcdefABCDEFxX+-pPiInN"[lVar11];
            goto LAB_04001618;
          }
          goto LAB_0400163c;
        }
      }
      else if (uVar20 == 10) goto LAB_04001558;
      uVar24 = uVar24 + 1;
      pcVar21 = pcVar10 + 1;
      *pcVar10 = "0123456789abcdefABCDEFxX+-pPiInN"[lVar11];
    }
    lVar11 = param_2[3];
    uVar4 = uVar24;
    if (lVar11 != param_2[4]) goto LAB_04001338;
LAB_04001628:
    uVar24 = uVar4;
    (**(code **)(*param_2 + 0x50))(param_2);
    pcVar10 = pcVar21;
  }
  goto LAB_04001340;
LAB_0400163c:
  uVar2 = (ulong)(local_f0[0] >> 1);
  if ((local_f0[0] & 1) != 0) {
    uVar2 = local_e8;
  }
  puVar14 = puVar23;
  if ((uVar2 != 0) && ((long)puVar23 - (long)local_1a8 < 0xa0)) {
    puVar14 = puVar23 + 1;
    *puVar23 = uVar24;
  }
  uVar6 = FUN_0402da00(pcVar22,pcVar10,param_5,uVar20);
  uVar13 = (ulong)local_f0[0];
  bVar18 = local_f0[0] & 1;
  uVar2 = (ulong)(local_f0[0] >> 1);
  if ((local_f0[0] & 1) != 0) {
    uVar2 = local_e8;
  }
  *param_6 = uVar6;
  if ((4 < (long)puVar14 - (long)local_1a8) && (uVar2 != 0)) {
    puVar23 = puVar14 + -1;
    if ((local_1a8 != puVar14) && (local_1a8 < puVar23)) {
      puVar14 = local_1a8;
      puVar15 = puVar23;
      do {
        puVar14 = puVar14 + 1;
        uVar20 = puVar14[-1];
        puVar14[-1] = *puVar15;
        puVar16 = puVar15 + -1;
        *puVar15 = uVar20;
        puVar15 = puVar16;
      } while (puVar14 < puVar16);
      uVar13 = (ulong)local_f0[0];
      bVar18 = local_f0[0] & 1;
    }
    pbVar1 = (byte *)((ulong)local_f0 | 1);
    if (bVar18 != 0) {
      pbVar1 = local_e0;
    }
    pbVar17 = pbVar1;
    if (local_1a8 < puVar23) {
      uVar2 = uVar13 >> 1;
      if (bVar18 != 0) {
        uVar2 = local_e8;
      }
      puVar14 = local_1a8;
      do {
        bVar18 = *pbVar17;
        if (((bVar18 != 0) && (bVar18 != 0xff)) && (*puVar14 != (uint)bVar18)) goto LAB_0400178c;
        puVar14 = puVar14 + 1;
        if (1 < (long)(pbVar1 + (uVar2 - (long)pbVar17))) {
          pbVar17 = pbVar17 + 1;
        }
      } while (puVar14 < puVar23);
    }
    bVar18 = *pbVar17;
    if (((bVar18 != 0) && (bVar18 != 0xff)) && ((uint)bVar18 <= *puVar23 - 1)) {
LAB_0400178c:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_040017dc;
LAB_040017b4:
    if (!bVar5) goto LAB_0400181c;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    bVar5 = iVar7 == -1;
    plVar3 = (long *)0x0;
    if (!bVar5) {
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if (param_3 == (long *)0x0) goto LAB_040017b4;
LAB_040017dc:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar5 != (iVar7 == -1)) goto LAB_0400181c;
  }
  *param_5 = *param_5 | 2;
LAB_0400181c:
  if ((local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  if ((local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  return param_2;
}


// rea decompile_all
// name: FUN_04002544
// address: 0x4002544
// body: available
// range: 0x4002544-0x4002a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_04002544(undefined8 param_1,long *param_2,long *param_3,__num_get<wchar_t> *param_4,
                   wchar_t *param_5,undefined4 *param_6)

{
  byte *pbVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  bool bVar5;
  wchar_t wVar6;
  int iVar7;
  wchar_t *pwVar8;
  char *pcVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  byte *pbVar16;
  byte bVar17;
  char *pcVar18;
  undefined4 uVar19;
  char local_1dc [4];
  bool local_1d8 [4];
  uint local_1d4;
  uint *local_1d0;
  uint local_1c8 [40];
  char *local_128;
  ulong local_120;
  ulong local_118;
  char *local_110;
  basic_string local_108 [8];
  ulong local_100;
  byte *local_f8;
  wchar_t local_f0;
  wchar_t wStack_ec;
  ios_base aiStack_e8 [136];
  
  std::__ndk1::__num_get<wchar_t>::__stage2_float_prep
            (param_4,aiStack_e8,&wStack_ec,&local_f0,param_5);
  local_120 = 0;
  local_118 = 0;
  local_110 = (char *)0x0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         &local_120,0x16,'\0');
  pcVar18 = (char *)((ulong)&local_120 | 1);
  pcVar9 = pcVar18;
  if ((local_120 & 1) != 0) {
    pcVar9 = local_110;
  }
  local_1d4 = 0;
  local_1d8[0] = true;
  local_1dc[0] = 'E';
  local_1d0 = local_1c8;
  local_128 = pcVar9;
LAB_040025f8:
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
    if (bVar5 != false) goto LAB_040027f4;
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
    if (bVar5 == (iVar7 == -1)) goto LAB_040027f4;
  }
  uVar2 = local_120 >> 1 & 0x7f;
  if ((local_120 & 1) != 0) {
    uVar2 = local_118;
  }
  if (local_128 == pcVar9 + uVar2) {
    if ((long)uVar2 < 1) {
      uVar11 = uVar2 * 2;
      pcVar9 = local_110;
      uVar12 = uVar11;
      if ((local_120 & 1) == 0) {
        local_120 = CONCAT71(local_120._1_7_,(char)((int)uVar11 << 1));
        pcVar9 = pcVar18;
        uVar12 = local_118;
      }
      local_118 = uVar12;
      pcVar9[uVar11] = '\0';
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_120,uVar2,'\0');
    }
    uVar12 = 0x16;
    if ((local_120 & 1) != 0) {
      uVar12 = (local_120 & 0xfffffffffffffffe) - 1;
    }
    uVar11 = local_120 >> 1 & 0x7f;
    if ((local_120 & 1) != 0) {
      uVar11 = local_118;
    }
    if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
      if ((local_120 & 1) != 0) {
        local_110[uVar12] = '\0';
        local_118 = uVar12;
        goto joined_r0x040027ec;
      }
      local_120 = CONCAT71(local_120._1_7_,(char)((int)uVar12 << 1));
      pcVar18[uVar12] = '\0';
      pcVar9 = pcVar18;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_120,uVar12 - uVar11,'\0');
joined_r0x040027ec:
      pcVar9 = pcVar18;
      if ((local_120 & 1) != 0) {
        pcVar9 = local_110;
      }
    }
    local_128 = pcVar9 + uVar2;
    pwVar8 = (wchar_t *)param_2[3];
    if (pwVar8 != (wchar_t *)param_2[4]) goto LAB_040026b4;
LAB_0400275c:
    wVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    pwVar8 = (wchar_t *)param_2[3];
    if (pwVar8 == (wchar_t *)param_2[4]) goto LAB_0400275c;
LAB_040026b4:
    wVar6 = *pwVar8;
  }
  iVar7 = std::__ndk1::__num_get<wchar_t>::__stage2_float_loop
                    (wVar6,local_1d8,local_1dc,pcVar9,&local_128,wStack_ec,local_f0,local_108,
                     local_1c8,&local_1d0,&local_1d4,(wchar_t *)aiStack_e8);
  if (iVar7 != 0) goto LAB_040027f4;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 4;
  }
  goto LAB_040025f8;
LAB_040027f4:
  uVar2 = (ulong)((byte)local_108[0] >> 1);
  if (((byte)local_108[0] & 1) != 0) {
    uVar2 = local_100;
  }
  if (((uVar2 != 0) && (local_1d8[0] != false)) && ((long)local_1d0 - (long)local_1c8 < 0xa0)) {
    *local_1d0 = local_1d4;
    local_1d0 = local_1d0 + 1;
  }
  uVar19 = FUN_0402ddd8(pcVar9,local_128,param_5);
  uVar12 = (ulong)(byte)local_108[0];
  bVar17 = (byte)local_108[0] & 1;
  uVar2 = (ulong)((byte)local_108[0] >> 1);
  if (((byte)local_108[0] & 1) != 0) {
    uVar2 = local_100;
  }
  *param_6 = uVar19;
  if ((4 < (long)local_1d0 - (long)local_1c8) && (uVar2 != 0)) {
    puVar10 = local_1d0 + -1;
    if ((local_1c8 != local_1d0) && (local_1c8 < puVar10)) {
      puVar13 = local_1c8;
      puVar14 = puVar10;
      do {
        puVar13 = puVar13 + 1;
        uVar4 = puVar13[-1];
        puVar13[-1] = *puVar14;
        puVar15 = puVar14 + -1;
        *puVar14 = uVar4;
        puVar14 = puVar15;
      } while (puVar13 < puVar15);
      uVar12 = (ulong)(byte)local_108[0];
      bVar17 = (byte)local_108[0] & 1;
    }
    pbVar1 = (byte *)((ulong)local_108 | 1);
    if (bVar17 != 0) {
      pbVar1 = local_f8;
    }
    pbVar16 = pbVar1;
    if (local_1c8 < puVar10) {
      uVar2 = uVar12 >> 1;
      if (bVar17 != 0) {
        uVar2 = local_100;
      }
      puVar13 = local_1c8;
      do {
        bVar17 = *pbVar16;
        if (((bVar17 != 0) && (bVar17 != 0xff)) && (*puVar13 != (uint)bVar17)) goto LAB_04002958;
        puVar13 = puVar13 + 1;
        if (1 < (long)(pbVar1 + (uVar2 - (long)pbVar16))) {
          pbVar16 = pbVar16 + 1;
        }
      } while (puVar13 < puVar10);
    }
    bVar17 = *pbVar16;
    if (((bVar17 != 0) && (bVar17 != 0xff)) && ((uint)bVar17 <= *puVar10 - 1)) {
LAB_04002958:
      *param_5 = L'\x04';
    }
  }
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_040029a8;
LAB_04002980:
    if (!bVar5) goto LAB_040029e8;
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
    if (param_3 == (long *)0x0) goto LAB_04002980;
LAB_040029a8:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar5 != (iVar7 == -1)) goto LAB_040029e8;
  }
  *param_5 = *param_5 | 2;
LAB_040029e8:
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if (((byte)local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  return param_2;
}


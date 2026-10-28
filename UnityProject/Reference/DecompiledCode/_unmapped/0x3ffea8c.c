// rea decompile_all
// name: FUN_03ffea8c
// address: 0x3ffea8c
// body: available
// range: 0x3ffea8c-0x3ffef7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_03ffea8c(undefined8 param_1,long *param_2,long *param_3,__num_get<char> *param_4,
                   uint *param_5,undefined1 (*param_6) [16])

{
  byte *pbVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
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
  undefined1 auVar19 [16];
  char local_17c [4];
  bool local_178 [4];
  uint local_174;
  uint *local_170;
  uint local_168 [40];
  char *local_c8;
  ulong local_c0;
  ulong local_b8;
  char *local_b0;
  basic_string local_a8 [8];
  ulong local_a0;
  byte *local_98;
  char local_90 [4];
  char local_8c [4];
  ios_base aiStack_88 [40];
  
  std::__ndk1::__num_get<char>::__stage2_float_prep
            (param_4,aiStack_88,local_8c,local_90,(char *)param_5);
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = (char *)0x0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_c0
         ,0x16,'\0');
  pcVar18 = (char *)((ulong)&local_c0 | 1);
  pcVar9 = pcVar18;
  if ((local_c0 & 1) != 0) {
    pcVar9 = local_b0;
  }
  local_174 = 0;
  local_178[0] = true;
  local_17c[0] = 'E';
  local_170 = local_168;
  local_c8 = pcVar9;
LAB_03ffeb40:
  if (param_2 == (long *)0x0) {
    bVar5 = true;
  }
  else if (param_2[3] == param_2[4]) {
    iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    bVar5 = iVar7 == -1;
    if (bVar5) {
      param_2 = (long *)0x0;
    }
  }
  else {
    bVar5 = false;
  }
  if (param_3 == (long *)0x0) {
    if (bVar5 != false) goto LAB_03ffed40;
  }
  else if (param_3[3] == param_3[4]) {
    iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    if (iVar7 == -1) {
      param_3 = (long *)0x0;
    }
    if (bVar5 == (iVar7 == -1)) goto LAB_03ffed40;
  }
  else if (bVar5 == false) goto LAB_03ffed40;
  uVar2 = local_c0 >> 1 & 0x7f;
  if ((local_c0 & 1) != 0) {
    uVar2 = local_b8;
  }
  if (local_c8 == pcVar9 + uVar2) {
    if ((long)uVar2 < 1) {
      uVar11 = uVar2 * 2;
      pcVar9 = local_b0;
      uVar12 = uVar11;
      if ((local_c0 & 1) == 0) {
        local_c0 = CONCAT71(local_c0._1_7_,(char)((int)uVar11 << 1));
        pcVar9 = pcVar18;
        uVar12 = local_b8;
      }
      local_b8 = uVar12;
      pcVar9[uVar11] = '\0';
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_c0,uVar2,'\0');
    }
    uVar12 = 0x16;
    if ((local_c0 & 1) != 0) {
      uVar12 = (local_c0 & 0xfffffffffffffffe) - 1;
    }
    uVar11 = local_c0 >> 1 & 0x7f;
    if ((local_c0 & 1) != 0) {
      uVar11 = local_b8;
    }
    if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
      if ((local_c0 & 1) != 0) {
        local_b0[uVar12] = '\0';
        local_b8 = uVar12;
        goto joined_r0x03ffed38;
      }
      local_c0 = CONCAT71(local_c0._1_7_,(char)((int)uVar12 << 1));
      pcVar18[uVar12] = '\0';
      pcVar9 = pcVar18;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_c0,uVar12 - uVar11,'\0');
joined_r0x03ffed38:
      pcVar9 = pcVar18;
      if ((local_c0 & 1) != 0) {
        pcVar9 = local_b0;
      }
    }
    local_c8 = pcVar9 + uVar2;
    pcVar8 = (char *)param_2[3];
    if (pcVar8 != (char *)param_2[4]) goto LAB_03ffebfc;
LAB_03ffeca4:
    cVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    pcVar8 = (char *)param_2[3];
    if (pcVar8 == (char *)param_2[4]) goto LAB_03ffeca4;
LAB_03ffebfc:
    cVar6 = *pcVar8;
  }
  iVar7 = std::__ndk1::__num_get<char>::__stage2_float_loop
                    (cVar6,local_178,local_17c,pcVar9,&local_c8,local_8c[0],local_90[0],local_a8,
                     local_168,&local_170,&local_174,(char *)aiStack_88);
  if (iVar7 != 0) goto LAB_03ffed40;
  if (param_2[3] == param_2[4]) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    param_2[3] = param_2[3] + 1;
  }
  goto LAB_03ffeb40;
LAB_03ffed40:
  uVar2 = (ulong)((byte)local_a8[0] >> 1);
  if (((byte)local_a8[0] & 1) != 0) {
    uVar2 = local_a0;
  }
  if (((uVar2 != 0) && (local_178[0] != false)) && ((long)local_170 - (long)local_168 < 0xa0)) {
    *local_170 = local_174;
    local_170 = local_170 + 1;
  }
  auVar19 = FUN_0402e030(pcVar9,local_c8,param_5);
  uVar12 = (ulong)(byte)local_a8[0];
  bVar17 = (byte)local_a8[0] & 1;
  uVar2 = (ulong)((byte)local_a8[0] >> 1);
  if (((byte)local_a8[0] & 1) != 0) {
    uVar2 = local_a0;
  }
  *param_6 = auVar19;
  if ((4 < (long)local_170 - (long)local_168) && (uVar2 != 0)) {
    puVar10 = local_170 + -1;
    if ((local_168 != local_170) && (local_168 < puVar10)) {
      puVar13 = local_168;
      puVar14 = puVar10;
      do {
        puVar13 = puVar13 + 1;
        uVar3 = puVar13[-1];
        puVar13[-1] = *puVar14;
        puVar15 = puVar14 + -1;
        *puVar14 = uVar3;
        puVar14 = puVar15;
      } while (puVar13 < puVar15);
      uVar12 = (ulong)(byte)local_a8[0];
      bVar17 = (byte)local_a8[0] & 1;
    }
    pbVar1 = (byte *)((ulong)local_a8 | 1);
    if (bVar17 != 0) {
      pbVar1 = local_98;
    }
    pbVar16 = pbVar1;
    if (local_168 < puVar10) {
      uVar2 = uVar12 >> 1;
      if (bVar17 != 0) {
        uVar2 = local_a0;
      }
      puVar13 = local_168;
      do {
        bVar17 = *pbVar16;
        if (((bVar17 != 0) && (bVar17 != 0xff)) && (*puVar13 != (uint)bVar17)) goto LAB_03ffeea4;
        puVar13 = puVar13 + 1;
        if (1 < (long)(pbVar1 + (uVar2 - (long)pbVar16))) {
          pbVar16 = pbVar16 + 1;
        }
      } while (puVar13 < puVar10);
    }
    bVar17 = *pbVar16;
    if (((bVar17 != 0) && (bVar17 != 0xff)) && ((uint)bVar17 <= *puVar10 - 1)) {
LAB_03ffeea4:
      *param_5 = 4;
    }
  }
  if (param_2 == (long *)0x0) {
    bVar5 = true;
    plVar4 = param_2;
joined_r0x03ffeecc:
    param_2 = plVar4;
    if (param_3 != (long *)0x0) goto LAB_03ffeed0;
LAB_03ffef54:
    if (bVar5 == false) goto LAB_03ffeeec;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar5 = iVar7 == -1;
      plVar4 = (long *)0x0;
      if (!bVar5) {
        plVar4 = param_2;
      }
      goto joined_r0x03ffeecc;
    }
    bVar5 = false;
    if (param_3 == (long *)0x0) goto LAB_03ffef54;
LAB_03ffeed0:
    if (param_3[3] == param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar5 != (iVar7 == -1)) goto LAB_03ffeeec;
    }
    else if (bVar5 != false) goto LAB_03ffeeec;
  }
  *param_5 = *param_5 | 2;
LAB_03ffeeec:
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  return param_2;
}


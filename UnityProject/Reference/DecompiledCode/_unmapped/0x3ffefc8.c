// rea decompile_all
// name: std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get
// address: 0x3ffefc8
// body: available
// range: 0x3ffefc8-0x3fff4ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, void*&) const */

long * __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get(undefined8 param_1,long *param_2,long *param_3,uint *param_4,uint *param_5,uint *param_6)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined1 **ppuVar5;
  uint uVar6;
  char cVar7;
  byte *pbVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  char *pcVar15;
  uint *local_b8;
  undefined1 **local_b0;
  ulong local_a8;
  char *local_a0;
  long local_98;
  undefined1 auStack_8a [24];
  byte local_72;
  byte local_71;
  undefined1 *local_70;
  undefined1 ***local_68;
  
  ios_base::getloc();
  puVar14 = ctype<char>::id;
  local_70 = ctype<char>::id;
  if (ctype<char>::id._0_8_ != -1) {
    local_b0 = &local_70;
    local_68 = &local_b0;
    __call_once((ulong *)ctype<char>::id,&local_68,FUN_0402d4a0);
  }
  if (((long)(int)ctype<char>::id._8_4_ - 1U <
       (ulong)(*(long *)(local_98 + 0x18) - *(long *)(local_98 + 0x10) >> 3)) &&
     (plVar4 = *(long **)(*(long *)(local_98 + 0x10) + ((long)(int)ctype<char>::id._8_4_ - 1U) * 8),
     plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x40))(plVar4,"0123456789abcdefABCDEFxX+-pPiInN","pPiInN",auStack_8a);
    locale::~locale((locale *)&local_98);
    local_b0 = (undefined1 **)0x0;
    local_a8 = 0;
    local_a0 = (char *)0x0;
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,0x16,'\0');
    puVar14 = (undefined1 *)((ulong)&local_b0 | 1);
    pcVar15 = puVar14;
    pcVar9 = puVar14;
    if (((ulong)local_b0 & 1) != 0) {
      pcVar15 = local_a0;
      pcVar9 = local_a0;
    }
LAB_03fff0e4:
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
      if (bVar2 != false) goto LAB_03fff334;
    }
    else if (param_3[3] == param_3[4]) {
      iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
      if (iVar3 == -1) {
        param_3 = (long *)0x0;
      }
      if (bVar2 == (iVar3 == -1)) goto LAB_03fff334;
    }
    else if (bVar2 == false) goto LAB_03fff334;
    uVar1 = (ulong)local_b0 >> 1 & 0x7f;
    if (((ulong)local_b0 & 1) != 0) {
      uVar1 = local_a8;
    }
    if (pcVar9 == pcVar15 + uVar1) {
      if ((long)uVar1 < 1) {
        uVar12 = uVar1 * 2;
        pcVar9 = local_a0;
        uVar11 = uVar12;
        if (((ulong)local_b0 & 1) == 0) {
          local_b0 = (undefined1 **)CONCAT71(local_b0._1_7_,(char)((int)uVar12 << 1));
          pcVar9 = puVar14;
          uVar11 = local_a8;
        }
        local_a8 = uVar11;
        pcVar9[uVar12] = '\0';
      }
      else {
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_b0,uVar1,'\0');
      }
      uVar11 = 0x16;
      if (((ulong)local_b0 & 1) != 0) {
        uVar11 = ((ulong)local_b0 & 0xfffffffffffffffe) - 1;
      }
      uVar12 = (ulong)local_b0 >> 1 & 0x7f;
      if (((ulong)local_b0 & 1) != 0) {
        uVar12 = local_a8;
      }
      if (uVar11 < uVar12 || uVar11 - uVar12 == 0) {
        if (((ulong)local_b0 & 1) != 0) {
          local_a0[uVar11] = '\0';
          local_a8 = uVar11;
          goto joined_r0x03fff32c;
        }
        local_b0 = (undefined1 **)CONCAT71(local_b0._1_7_,(char)((int)uVar11 << 1));
        puVar14[uVar11] = '\0';
        pcVar15 = puVar14;
      }
      else {
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_b0,uVar11 - uVar12,'\0');
joined_r0x03fff32c:
        pcVar15 = puVar14;
        if (((ulong)local_b0 & 1) != 0) {
          pcVar15 = local_a0;
        }
      }
      pcVar9 = pcVar15 + uVar1;
      pbVar8 = (byte *)param_2[3];
      if (pbVar8 != (byte *)param_2[4]) goto LAB_03fff19c;
LAB_03fff244:
      uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
      uVar6 = uVar6 & 0xff;
      if (pcVar9 != pcVar15) goto LAB_03fff2ac;
LAB_03fff260:
      if (local_72 == uVar6) {
        cVar7 = '+';
      }
      else {
        if (local_71 != uVar6) goto LAB_03fff2ac;
        cVar7 = '-';
      }
    }
    else {
      pbVar8 = (byte *)param_2[3];
      if (pbVar8 == (byte *)param_2[4]) goto LAB_03fff244;
LAB_03fff19c:
      uVar6 = (uint)*pbVar8;
      if (pcVar9 == pcVar15) goto LAB_03fff260;
LAB_03fff2ac:
      ppuVar5 = memchr(auStack_8a,uVar6,0x1a);
      if (ppuVar5 == (undefined1 **)0x0) {
        ppuVar5 = &local_70;
      }
      lVar10 = (long)ppuVar5 - (long)auStack_8a;
      if ((0x17 < lVar10) ||
         ((0x15 < lVar10 &&
          (((pcVar9 == pcVar15 || (2 < (long)pcVar9 - (long)pcVar15)) || (pcVar9[-1] != '0'))))))
      goto LAB_03fff334;
      cVar7 = "0123456789abcdefABCDEFxX+-pPiInN"[lVar10];
    }
    *pcVar9 = cVar7;
    if (param_2[3] == param_2[4]) {
      (**(code **)(*param_2 + 0x50))(param_2);
      pcVar9 = pcVar9 + 1;
    }
    else {
      param_2[3] = param_2[3] + 1;
      pcVar9 = pcVar9 + 1;
    }
    goto LAB_03fff0e4;
  }
  FUN_03ff9c28();
  puVar13 = param_5;
LAB_03fff4a4:
  iVar3 = __cxa_guard_acquire(0x974a4b8);
  if (iVar3 != 0) {
    p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(0x974a4b8);
    param_4 = puVar13;
    param_6 = local_b8;
  }
LAB_03fff3b4:
  iVar3 = FUN_03fff704(puVar14,p_Ram000000000974a4b0,&UNK_01a42776,param_4);
  if (iVar3 != 1) {
    *param_6 = 4;
  }
  if (param_2 == (long *)0x0) {
    bVar2 = true;
    plVar4 = param_2;
joined_r0x03fff3fc:
    param_2 = plVar4;
    if (param_3 != (long *)0x0) goto LAB_03fff400;
LAB_03fff474:
    if (bVar2 == false) goto LAB_03fff41c;
  }
  else {
    if (param_2[3] == param_2[4]) {
      iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
      bVar2 = iVar3 == -1;
      plVar4 = (long *)0x0;
      if (!bVar2) {
        plVar4 = param_2;
      }
      goto joined_r0x03fff3fc;
    }
    bVar2 = false;
    if (param_3 == (long *)0x0) goto LAB_03fff474;
LAB_03fff400:
    if (param_3[3] == param_3[4]) {
      iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar2 != (iVar3 == -1)) goto LAB_03fff41c;
    }
    else if (bVar2 != false) goto LAB_03fff41c;
  }
  *param_6 = *param_6 | 2;
LAB_03fff41c:
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  return param_2;
LAB_03fff334:
  uVar11 = (long)pcVar9 - (long)pcVar15;
  uVar1 = (ulong)local_b0 >> 1 & 0x7f;
  if (((ulong)local_b0 & 1) != 0) {
    uVar1 = local_a8;
  }
  if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
    pcVar9 = local_a0;
    uVar1 = uVar11;
    if (((ulong)local_b0 & 1) == 0) {
      local_b0 = (undefined1 **)CONCAT71(local_b0._1_7_,(char)((int)uVar11 << 1));
      pcVar9 = puVar14;
      uVar1 = local_a8;
    }
    local_a8 = uVar1;
    pcVar9[uVar11] = '\0';
  }
  else {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,uVar11 - uVar1,'\0');
  }
  if (((ulong)local_b0 & 1) != 0) {
    puVar14 = local_a0;
  }
  param_4 = param_6;
  puVar13 = param_6;
  param_6 = param_5;
  local_b8 = param_5;
  if ((bRam000000000974a4b8 & 1) == 0) goto LAB_03fff4a4;
  goto LAB_03fff3b4;
}


// rea decompile_all
// name: std::__ndk1::num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get
// address: 0x40034f0
// body: available
// range: 0x40034f0-0x4003a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, void*&) const */

long * __thiscall
std::__ndk1::
num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get
          (undefined8 param_1,long *param_2,long *param_3,uint *param_4,uint *param_5,uint *param_6)

{
  ulong uVar1;
  bool bVar2;
  wchar_t __c;
  int iVar3;
  long *plVar4;
  undefined1 **ppuVar5;
  wchar_t *pwVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  uint *local_100;
  undefined1 **local_f8;
  ulong local_f0;
  char *local_e8;
  long local_e0;
  wchar_t awStack_d8 [24];
  wchar_t local_78;
  wchar_t local_74;
  undefined1 *local_70;
  undefined1 ***local_68;
  
  ios_base::getloc();
  puVar12 = ctype<wchar_t>::id;
  local_70 = ctype<wchar_t>::id;
  if (ctype<wchar_t>::id._0_8_ != -1) {
    local_f8 = &local_70;
    local_68 = &local_f8;
    __call_once((ulong *)ctype<wchar_t>::id,&local_68,FUN_0402d4a0);
  }
  if (((long)(int)ctype<wchar_t>::id._8_4_ - 1U <
       (ulong)(*(long *)(local_e0 + 0x18) - *(long *)(local_e0 + 0x10) >> 3)) &&
     (plVar4 = *(long **)(*(long *)(local_e0 + 0x10) +
                         ((long)(int)ctype<wchar_t>::id._8_4_ - 1U) * 8), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x60))(plVar4,"0123456789abcdefABCDEFxX+-pPiInN","pPiInN",awStack_d8);
    locale::~locale((locale *)&local_e0);
    local_f8 = (undefined1 **)0x0;
    local_f0 = 0;
    local_e8 = (char *)0x0;
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_f8,0x16,'\0');
    puVar12 = (undefined1 *)((ulong)&local_f8 | 1);
    pcVar13 = puVar12;
    pcVar7 = puVar12;
    if (((ulong)local_f8 & 1) != 0) {
      pcVar13 = local_e8;
      pcVar7 = local_e8;
    }
LAB_0400360c:
    if (param_2 == (long *)0x0) {
      bVar2 = true;
    }
    else {
      if ((int *)param_2[3] == (int *)param_2[4]) {
        iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        iVar3 = *(int *)param_2[3];
      }
      bVar2 = iVar3 == -1;
      if (bVar2) {
        param_2 = (long *)0x0;
      }
    }
    if (param_3 == (long *)0x0) {
      if (bVar2 != false) goto LAB_04003878;
    }
    else {
      if ((int *)param_3[3] == (int *)param_3[4]) {
        iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
      }
      else {
        iVar3 = *(int *)param_3[3];
      }
      if (iVar3 == -1) {
        param_3 = (long *)0x0;
      }
      if (bVar2 == (iVar3 == -1)) goto LAB_04003878;
    }
    uVar1 = (ulong)local_f8 >> 1 & 0x7f;
    if (((ulong)local_f8 & 1) != 0) {
      uVar1 = local_f0;
    }
    if (pcVar7 == pcVar13 + uVar1) {
      if ((long)uVar1 < 1) {
        uVar10 = uVar1 * 2;
        pcVar7 = local_e8;
        uVar9 = uVar10;
        if (((ulong)local_f8 & 1) == 0) {
          local_f8 = (undefined1 **)CONCAT71(local_f8._1_7_,(char)((int)uVar10 << 1));
          pcVar7 = puVar12;
          uVar9 = local_f0;
        }
        local_f0 = uVar9;
        pcVar7[uVar10] = '\0';
      }
      else {
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_f8,uVar1,'\0');
      }
      uVar9 = 0x16;
      if (((ulong)local_f8 & 1) != 0) {
        uVar9 = ((ulong)local_f8 & 0xfffffffffffffffe) - 1;
      }
      uVar10 = (ulong)local_f8 >> 1 & 0x7f;
      if (((ulong)local_f8 & 1) != 0) {
        uVar10 = local_f0;
      }
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (((ulong)local_f8 & 1) != 0) {
          local_e8[uVar9] = '\0';
          local_f0 = uVar9;
          goto joined_r0x04003870;
        }
        local_f8 = (undefined1 **)CONCAT71(local_f8._1_7_,(char)((int)uVar9 << 1));
        puVar12[uVar9] = '\0';
        pcVar13 = puVar12;
      }
      else {
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_f8,uVar9 - uVar10,'\0');
joined_r0x04003870:
        pcVar13 = puVar12;
        if (((ulong)local_f8 & 1) != 0) {
          pcVar13 = local_e8;
        }
      }
      pcVar7 = pcVar13 + uVar1;
      pwVar6 = (wchar_t *)param_2[3];
      if (pwVar6 != (wchar_t *)param_2[4]) goto LAB_040036c4;
LAB_04003764:
      __c = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      pwVar6 = (wchar_t *)param_2[3];
      if (pwVar6 == (wchar_t *)param_2[4]) goto LAB_04003764;
LAB_040036c4:
      __c = *pwVar6;
    }
    if (pcVar7 == pcVar13) {
      if (local_78 == __c) {
        *pcVar7 = '+';
        lVar8 = param_2[3];
        if (lVar8 == param_2[4]) goto LAB_04003848;
      }
      else {
        if (local_74 != __c) goto LAB_04003780;
        *pcVar7 = '-';
        lVar8 = param_2[3];
        if (lVar8 == param_2[4]) goto LAB_04003848;
      }
LAB_04003604:
      param_2[3] = lVar8 + 4;
      pcVar7 = pcVar7 + 1;
    }
    else {
LAB_04003780:
      ppuVar5 = (undefined1 **)wmemchr(awStack_d8,__c,0x1a);
      if (ppuVar5 == (undefined1 **)0x0) {
        ppuVar5 = &local_70;
      }
      lVar8 = (long)ppuVar5 - (long)awStack_d8 >> 2;
      if ((0x17 < lVar8) ||
         ((0x15 < lVar8 &&
          (((pcVar7 == pcVar13 || (2 < (long)pcVar7 - (long)pcVar13)) || (pcVar7[-1] != '0'))))))
      goto LAB_04003878;
      *pcVar7 = "0123456789abcdefABCDEFxX+-pPiInN"[lVar8];
      lVar8 = param_2[3];
      if (lVar8 != param_2[4]) goto LAB_04003604;
LAB_04003848:
      (**(code **)(*param_2 + 0x50))(param_2);
      pcVar7 = pcVar7 + 1;
    }
    goto LAB_0400360c;
  }
  FUN_03ff9c28();
  puVar11 = param_5;
LAB_040039e4:
  iVar3 = __cxa_guard_acquire(0x974a4b8);
  if (iVar3 != 0) {
    p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(0x974a4b8);
    param_4 = puVar11;
    param_6 = local_100;
  }
LAB_040038f8:
  iVar3 = FUN_03fff704(puVar12,p_Ram000000000974a4b0,&UNK_01a42776,param_4);
  if (iVar3 != 1) {
    *param_6 = 4;
  }
  if (param_2 == (long *)0x0) {
    bVar2 = true;
    if (param_3 != (long *)0x0) goto LAB_04003968;
LAB_04003940:
    if (!bVar2) goto LAB_040039a8;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar3 = *(int *)param_2[3];
    }
    bVar2 = iVar3 == -1;
    plVar4 = (long *)0x0;
    if (!bVar2) {
      plVar4 = param_2;
    }
    param_2 = plVar4;
    if (param_3 == (long *)0x0) goto LAB_04003940;
LAB_04003968:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar3 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar3 = *(int *)param_3[3];
    }
    if (bVar2 != (iVar3 == -1)) goto LAB_040039a8;
  }
  *param_6 = *param_6 | 2;
LAB_040039a8:
  if (((ulong)local_f8 & 1) != 0) {
    operator_delete(local_e8);
  }
  return param_2;
LAB_04003878:
  uVar9 = (long)pcVar7 - (long)pcVar13;
  uVar1 = (ulong)local_f8 >> 1 & 0x7f;
  if (((ulong)local_f8 & 1) != 0) {
    uVar1 = local_f0;
  }
  if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
    pcVar7 = local_e8;
    uVar1 = uVar9;
    if (((ulong)local_f8 & 1) == 0) {
      local_f8 = (undefined1 **)CONCAT71(local_f8._1_7_,(char)((int)uVar9 << 1));
      pcVar7 = puVar12;
      uVar1 = local_f0;
    }
    local_f0 = uVar1;
    pcVar7[uVar9] = '\0';
  }
  else {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_f8,uVar9 - uVar1,'\0');
  }
  if (((ulong)local_f8 & 1) != 0) {
    puVar12 = local_e8;
  }
  param_4 = param_6;
  puVar11 = param_6;
  param_6 = param_5;
  local_100 = param_5;
  if ((bRam000000000974a4b8 & 1) == 0) goto LAB_040039e4;
  goto LAB_040038f8;
}


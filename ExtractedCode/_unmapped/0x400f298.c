// rea decompile_all
// name: FUN_0400f298
// address: 0x400f298
// body: available
// range: 0x400f298-0x400f543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x400f538 to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x400f540 to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
FUN_0400f298(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1
            ,basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_2
            ,basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_3
            )

{
  size_t __n;
  size_t sVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  ulong __n_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  bool bVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong local_78;
  ulong local_70;
  char *local_68;
  
  uVar9 = *(ulong *)param_1;
  sVar1 = *(size_t *)(param_1 + 8);
  bVar2 = *param_1;
  bVar4 = ((byte)bVar2 & 1) != 0;
  __n = (ulong)((byte)bVar2 >> 1);
  if (bVar4) {
    __n = sVar1;
  }
  uVar8 = 0x16;
  if (bVar4) {
    uVar8 = (uVar9 & 0xfffffffffffffffe) - 1;
  }
  __n_00 = (long)param_3 - (long)param_2;
  if (__n_00 == 0) {
    return param_1;
  }
  pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (param_1 + 0x10);
  if ((uVar9 & 1) == 0) {
    sVar1 = uVar9 >> 1 & 0x7f;
    pbVar6 = param_1 + 1;
  }
  if ((pbVar6 <= param_2) && (param_2 < pbVar6 + sVar1 + 1)) {
    if (0xffffffffffffffef < __n_00) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5d118(&local_78);
    }
    if (__n_00 < 0x17) {
      pcVar10 = (char *)((ulong)&local_78 | 1);
      local_78 = CONCAT71(local_78._1_7_,(char)((int)__n_00 << 1));
    }
    else {
      pcVar10 = operator_new((__n_00 | 0xf) + 1);
      local_78 = (__n_00 | 0xf) + 2;
      local_70 = __n_00;
      local_68 = pcVar10;
    }
    memcpy(pcVar10,param_2,__n_00);
    pcVar10[__n_00] = '\0';
    uVar9 = local_78 >> 1 & 0x7f;
    pcVar10 = (char *)((ulong)&local_78 | 1);
    if ((local_78 & 1) != 0) {
      uVar9 = local_70;
      pcVar10 = local_68;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(param_1,pcVar10,uVar9);
    if ((local_78 & 1) == 0) {
      return param_1;
    }
    operator_delete(local_68);
    return param_1;
  }
  if (uVar8 - __n < __n_00) {
    uVar9 = __n + __n_00;
    if (-uVar8 - 0x11 < uVar9 - uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5d118(param_1);
    }
    if (uVar8 < 0x7fffffffffffffe7) {
      if (uVar9 <= uVar8 * 2) {
        uVar9 = uVar8 * 2;
      }
      uVar8 = 0x17;
      if (0x16 < uVar9) {
        uVar8 = (uVar9 | 0xf) + 1;
      }
      pbVar5 = operator_new(uVar8);
    }
    else {
      uVar8 = 0xffffffffffffffef;
      pbVar5 = operator_new(0xffffffffffffffef);
    }
    if (__n != 0) {
      memmove(pbVar5,pbVar6,__n);
    }
    if (((byte)bVar2 & 1) != 0) {
      operator_delete(pbVar6);
    }
    *(size_t *)(param_1 + 8) = __n;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (param_1 + 0x10) = pbVar5;
    *(ulong *)param_1 = uVar8 | 1;
  }
  else {
    pbVar5 = param_1 + 1;
    if ((uVar9 & 1) != 0) {
      pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (param_1 + 0x10);
    }
  }
  pbVar6 = pbVar5 + __n;
  if ((0x1f < __n_00) &&
     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x1f <
      pbVar5 + (__n - (long)param_2))) {
    uVar8 = __n_00 & 0xffffffffffffffe0;
    pbVar5 = pbVar5 + __n + 0x10;
    pbVar7 = param_2 + 0x10;
    param_2 = param_2 + uVar8;
    pbVar6 = pbVar6 + uVar8;
    uVar9 = uVar8;
    do {
      pbVar3 = pbVar7 + -8;
      uVar11 = *(undefined8 *)(pbVar7 + -0x10);
      uVar13 = *(undefined8 *)(pbVar7 + 8);
      uVar12 = *(undefined8 *)pbVar7;
      uVar9 = uVar9 - 0x20;
      pbVar7 = pbVar7 + 0x20;
      *(undefined8 *)(pbVar5 + -8) = *(undefined8 *)pbVar3;
      *(undefined8 *)(pbVar5 + -0x10) = uVar11;
      *(undefined8 *)(pbVar5 + 8) = uVar13;
      *(undefined8 *)pbVar5 = uVar12;
      pbVar5 = pbVar5 + 0x20;
    } while (uVar9 != 0);
    if (__n_00 == uVar8) goto LAB_0400f4ec;
  }
  do {
    pbVar7 = param_2 + 1;
    pbVar5 = pbVar6 + 1;
    *pbVar6 = *param_2;
    pbVar6 = pbVar5;
    param_2 = pbVar7;
  } while (pbVar7 != param_3);
LAB_0400f4ec:
  *pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (((byte)*param_1 & 1) == 0) {
    *param_1 = SUB41((int)(__n + __n_00) << 1,0);
  }
  else {
    *(size_t *)(param_1 + 8) = __n + __n_00;
  }
  return param_1;
}


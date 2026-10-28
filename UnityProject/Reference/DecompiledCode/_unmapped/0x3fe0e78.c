// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
// address: 0x3fe0e78
// body: available
// range: 0x3fe0e78-0x3fe114f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe114c to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  void *__dest_00;
  ulong uVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  ulong __n;
  size_t sVar8;
  ulong local_68;
  
  bVar4 = *this;
  uVar2 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  uVar5 = uVar2 - param_1;
  if (uVar2 < param_1) {
    FUN_03f695e8(this);
LAB_03fe1148:
                    /* WARNING: Subroutine does not return */
    FUN_03f5d118(this);
  }
  uVar6 = *(ulong *)this;
  __n = uVar5;
  if (param_2 <= uVar5) {
    __n = param_2;
  }
  uVar3 = 0x16;
  if (((byte)bVar4 & 1) != 0) {
    uVar3 = (uVar6 & 0xfffffffffffffffe) - 1;
  }
  if ((__n - uVar2) + uVar3 < param_4) {
    uVar5 = ((uVar2 + param_4) - uVar3) - __n;
    if (-uVar3 - 0x12 < uVar5) goto LAB_03fe1148;
    pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if ((uVar6 & 1) == 0) {
      pbVar7 = this + 1;
    }
    if (uVar3 < 0x7fffffffffffffe7) {
      uVar5 = uVar5 + uVar3;
      if (uVar5 <= uVar3 * 2) {
        uVar5 = uVar3 * 2;
      }
      local_68 = 0x17;
      if (0x16 < uVar5) {
        local_68 = (uVar5 | 0xf) + 1;
      }
      __dest_00 = operator_new(local_68);
    }
    else {
      local_68 = 0xffffffffffffffef;
      __dest_00 = operator_new(0xffffffffffffffef);
    }
    if (param_1 != 0) {
      memmove(__dest_00,pbVar7,param_1);
    }
    memcpy((void *)((long)__dest_00 + param_1),param_3,param_4);
    sVar8 = uVar2 - (__n + param_1);
    if (sVar8 != 0) {
      memmove((void *)((long)((long)__dest_00 + param_1) + param_4),pbVar7 + __n + param_1,sVar8);
    }
    if (((byte)bVar4 & 1) != 0) {
      operator_delete(pbVar7);
    }
    lVar1 = param_4 + param_1 + sVar8;
    *(long *)(this + 8) = lVar1;
    *(void **)(this + 0x10) = __dest_00;
    *(ulong *)this = local_68 | 1;
    pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             ((long)__dest_00 + lVar1);
    goto LAB_03fe1114;
  }
  pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  if ((uVar6 & 1) == 0) {
    pbVar7 = this + 1;
  }
  uVar6 = param_4;
  if ((param_4 == __n) || (uVar6 = __n, uVar5 <= param_2)) {
LAB_03fe10e4:
    if (param_4 != 0) {
      memmove(pbVar7 + param_1,param_3,param_4);
    }
    bVar4 = *this;
    uVar6 = param_4 - uVar6;
  }
  else {
    uVar6 = param_4 - __n;
    sVar8 = uVar5 - __n;
    __dest = pbVar7 + param_1;
    if (__n <= param_4) {
      if ((param_3 < pbVar7 + uVar2) && (__dest + 1 <= param_3)) {
        if (param_3 < __dest + __n) {
          if (param_2 != 0) {
            memmove(__dest,param_3,__n);
          }
          param_1 = __n + param_1;
          param_3 = param_3 + param_4;
          __n = 0;
          param_4 = uVar6;
        }
        else {
          param_3 = param_3 + uVar6;
        }
      }
      memmove(pbVar7 + param_4 + param_1,pbVar7 + __n + param_1,sVar8);
      uVar6 = __n;
      goto LAB_03fe10e4;
    }
    if (param_4 != 0) {
      memmove(__dest,param_3,param_4);
    }
    memmove(__dest + param_4,__dest + __n,sVar8);
    bVar4 = *this;
  }
  lVar1 = uVar6 + uVar2;
  if (((byte)bVar4 & 1) == 0) {
    pbVar7 = pbVar7 + lVar1;
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
    pbVar7 = pbVar7 + lVar1;
  }
LAB_03fe1114:
  *pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return this;
}


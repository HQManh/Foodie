// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
// address: 0x3fe18d8
// body: available
// range: 0x3fe18d8-0x3fe1acb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe1ac8 to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(unsigned long, char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  void *__dest;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  ulong local_68;
  
  bVar5 = *this;
  uVar3 = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    uVar3 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar3) {
    uVar6 = *(ulong *)this;
    uVar4 = 0x16;
    if (((byte)bVar5 & 1) != 0) {
      uVar4 = (uVar6 & 0xfffffffffffffffe) - 1;
    }
    if (uVar4 - uVar3 < param_3) {
      uVar1 = uVar3 + param_3;
      if (-uVar4 - 0x12 < uVar1 - uVar4) goto LAB_03fe1ac4;
      pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      if ((uVar6 & 1) == 0) {
        pbVar7 = this + 1;
      }
      if (uVar4 < 0x7fffffffffffffe7) {
        uVar6 = uVar1;
        if (uVar1 <= uVar4 * 2) {
          uVar6 = uVar4 * 2;
        }
        local_68 = 0x17;
        if (0x16 < uVar6) {
          local_68 = (uVar6 | 0xf) + 1;
        }
        __dest = operator_new(local_68);
      }
      else {
        local_68 = 0xffffffffffffffef;
        __dest = operator_new(0xffffffffffffffef);
      }
      if (param_1 != 0) {
        memmove(__dest,pbVar7,param_1);
      }
      memcpy((void *)((long)__dest + param_1),param_2,param_3);
      if (uVar3 - param_1 != 0) {
        memmove((void *)((long)((long)__dest + param_1) + param_3),pbVar7 + param_1,uVar3 - param_1)
        ;
      }
      if (((byte)bVar5 & 1) != 0) {
        operator_delete(pbVar7);
      }
      *(ulong *)(this + 8) = uVar1;
      *(void **)(this + 0x10) = __dest;
      *(ulong *)this = local_68 | 1;
      pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               ((long)__dest + uVar1);
    }
    else {
      if (param_3 == 0) {
        return this;
      }
      pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      if ((uVar6 & 1) == 0) {
        pbVar7 = this + 1;
      }
      if (uVar3 - param_1 != 0) {
        __src = pbVar7 + param_1;
        uVar4 = param_3;
        if (pbVar7 + uVar3 <= param_2 || param_2 < __src) {
          uVar4 = 0;
        }
        param_2 = param_2 + uVar4;
        memmove(__src + param_3,__src,uVar3 - param_1);
      }
      memmove(pbVar7 + param_1,param_2,param_3);
      lVar2 = uVar3 + param_3;
      if (((byte)*this & 1) == 0) {
        pbVar7 = pbVar7 + lVar2;
        *this = SUB41((int)lVar2 << 1,0);
      }
      else {
        *(long *)(this + 8) = lVar2;
        pbVar7 = pbVar7 + lVar2;
      }
    }
    *pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    return this;
  }
  FUN_03f695e8(this);
LAB_03fe1ac4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5d118(this);
}


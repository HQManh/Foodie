// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::copy
// address: 0x3fe21c8
// body: available
// range: 0x3fe21c8-0x3fe2237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::copy(char*, unsigned long, unsigned long) const */

long * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::copy
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  byte bVar3;
  long *plVar4;
  byte *pbVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  byte *pbVar7;
  void *__dest;
  undefined1 auVar8 [16];
  
  bVar2 = *this;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (param_3 <= uVar1) {
    plVar4 = (long *)(uVar1 - param_3);
    if (param_2 <= (long *)(uVar1 - param_3)) {
      plVar4 = (long *)param_2;
    }
    if (plVar4 != (long *)0x0) {
      pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      if (((byte)bVar2 & 1) == 0) {
        pbVar6 = this + 1;
      }
      memmove(param_1,pbVar6 + param_3,(size_t)plVar4);
    }
    return plVar4;
  }
  auVar8 = FUN_03f695e8();
  pbVar5 = auVar8._8_8_;
  plVar4 = auVar8._0_8_;
  bVar3 = *pbVar5;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar5 + 8);
  }
  if (uVar1 < param_2) {
    FUN_03f695e8(plVar4);
LAB_03fe22f8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5d118(plVar4);
  }
  pbVar7 = *(byte **)(pbVar5 + 0x10);
  if ((bVar3 & 1) == 0) {
    pbVar7 = pbVar5 + 1;
  }
  __n = uVar1 - param_2;
  if (param_3 <= uVar1 - param_2) {
    __n = param_3;
  }
  if (0xffffffffffffffef < __n) goto LAB_03fe22f8;
  if (__n < 0x17) {
    __dest = (void *)((long)plVar4 + 1);
    *(char *)plVar4 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_03fe22d4;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    plVar4[1] = __n;
    plVar4[2] = (long)__dest;
    *plVar4 = (__n | 0xf) + 2;
  }
  plVar4 = memmove(__dest,pbVar7 + param_2,__n);
LAB_03fe22d4:
  *(undefined1 *)((long)__dest + __n) = 0;
  return plVar4;
}


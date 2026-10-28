// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
// address: 0x3fe2238
// body: available
// range: 0x3fe2238-0x3fe22ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe22fc to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long, unsigned long, std::__ndk1::allocator<char>
   const&) */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     basic_string(basic_string *param_1,ulong param_2,ulong param_3,allocator *param_4)

{
  ulong uVar1;
  allocator *__n;
  byte bVar2;
  long lVar3;
  basic_string *__dest;
  
  bVar2 = *(byte *)param_2;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 < param_3) {
    FUN_03f695e8(param_1);
LAB_03fe22f8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5d118(param_1);
  }
  lVar3 = *(long *)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    lVar3 = param_2 + 1;
  }
  __n = (allocator *)(uVar1 - param_3);
  if (param_4 <= (allocator *)(uVar1 - param_3)) {
    __n = param_4;
  }
  if ((allocator *)0xffffffffffffffef < __n) goto LAB_03fe22f8;
  if (__n < (allocator *)0x17) {
    __dest = param_1 + 1;
    *param_1 = SUB41((int)__n << 1,0);
    if (__n == (allocator *)0x0) goto LAB_03fe22d4;
  }
  else {
    __dest = operator_new(((ulong)__n | 0xf) + 1);
    *(allocator **)(param_1 + 8) = __n;
    *(basic_string **)(param_1 + 0x10) = __dest;
    *(ulong *)param_1 = ((ulong)__n | 0xf) + 2;
  }
  memmove(__dest,(void *)(lVar3 + param_3),(size_t)__n);
LAB_03fe22d4:
  __dest[(long)__n] = (basic_string)0x0;
  return;
}


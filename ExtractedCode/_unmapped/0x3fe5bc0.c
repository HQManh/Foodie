// rea decompile_all
// name: std::__ndk1::operator+
// address: 0x3fe5bc0
// body: available
// range: 0x3fe5bc0-0x3fe5cbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe5cbc to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   std::__ndk1::TEMPNAMEPLACEHOLDERVALUE(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall std::__ndk1::operator+(__ndk1 *this,char *param_1,basic_string *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  size_t __n_00;
  void *__dest;
  ulong *in_x8;
  char *__src;
  
  __n_00 = strlen((char *)this);
  bVar3 = *param_1;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  uVar2 = __n + __n_00;
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5d118();
  }
  if (uVar2 < 0x17) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    *(char *)in_x8 = (char)(((uint)uVar2 & 0xff) << 1);
    __dest = (void *)((long)in_x8 + 1);
  }
  else {
    __dest = operator_new((uVar2 | 0xf) + 1);
    uVar1 = (uVar2 | 0xf) + 2;
    in_x8[1] = uVar2;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar1;
    if ((uVar1 & 1) == 0) {
      __dest = (void *)((long)in_x8 + 1);
    }
  }
  if (__n_00 != 0) {
    memcpy(__dest,this,__n_00);
  }
  if (__n != 0) {
    __src = *(char **)(param_1 + 0x10);
    if ((bVar3 & 1) == 0) {
      __src = param_1 + 1;
    }
    memmove((void *)((long)__dest + __n_00),__src,__n);
  }
  *(undefined1 *)((long)((long)__dest + __n_00) + __n) = 0;
  return;
}


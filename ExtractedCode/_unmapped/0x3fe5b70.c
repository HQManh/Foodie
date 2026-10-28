// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert
// address: 0x3fe5b70
// body: available
// range: 0x3fe5b70-0x3fe5bbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe5bac to 0x89dcd30 std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(unsigned long, std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long,
   unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,basic_string *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  basic_string *pbVar3;
  size_t __n;
  basic_string bVar4;
  byte bVar5;
  size_t __n_00;
  void *__dest;
  byte *pbVar6;
  ulong *extraout_x8;
  byte *__src;
  undefined1 auVar7 [16];
  
  bVar4 = *param_2;
  uVar2 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
  if (param_3 <= uVar2) {
    pbVar3 = param_2 + 4;
    if (((byte)bVar4 & 1) != 0) {
      pbVar3 = *(basic_string **)(param_2 + 0x10);
    }
    uVar1 = uVar2 - param_3;
    if (param_4 <= uVar2 - param_3) {
      uVar1 = param_4;
    }
    insert(this,param_1,(wchar_t *)(pbVar3 + param_3 * 4),uVar1);
    return;
  }
  auVar7 = FUN_03fe365c();
  pbVar6 = auVar7._8_8_;
  __n_00 = strlen(auVar7._0_8_);
  bVar5 = *pbVar6;
  __n = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    __n = *(size_t *)(pbVar6 + 8);
  }
  uVar2 = __n + __n_00;
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5d118(extraout_x8);
  }
  if (uVar2 < 0x17) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    *(char *)extraout_x8 = (char)(((uint)uVar2 & 0xff) << 1);
    __dest = (void *)((long)extraout_x8 + 1);
  }
  else {
    __dest = operator_new((uVar2 | 0xf) + 1);
    uVar1 = (uVar2 | 0xf) + 2;
    extraout_x8[1] = uVar2;
    extraout_x8[2] = (ulong)__dest;
    *extraout_x8 = uVar1;
    if ((uVar1 & 1) == 0) {
      __dest = (void *)((long)extraout_x8 + 1);
    }
  }
  if (__n_00 != 0) {
    memcpy(__dest,auVar7._0_8_,__n_00);
  }
  if (__n != 0) {
    __src = *(byte **)(pbVar6 + 0x10);
    if ((bVar5 & 1) == 0) {
      __src = pbVar6 + 1;
    }
    memmove((void *)((long)__dest + __n_00),__src,__n);
  }
  *(undefined1 *)((long)((long)__dest + __n_00) + __n) = 0;
  return;
}


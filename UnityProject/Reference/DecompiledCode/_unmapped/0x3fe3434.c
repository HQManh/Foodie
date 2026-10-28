// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
// address: 0x3fe3434
// body: available
// range: 0x3fe3434-0x3fe3483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe3470 to 0x89dcce0 std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(unsigned long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long, unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,basic_string *param_2,ulong param_3,ulong param_4)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__dest;
  basic_string *pbVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  basic_string bVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar6;
  basic_string *pbVar7;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar8;
  basic_string *pbVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  bVar5 = *param_2;
  uVar3 = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    uVar3 = *(ulong *)(param_2 + 8);
  }
  if (param_3 <= uVar3) {
    pbVar9 = *(basic_string **)(param_2 + 0x10);
    if (((byte)bVar5 & 1) == 0) {
      pbVar9 = param_2 + 1;
    }
    uVar2 = uVar3 - param_3;
    if (param_4 <= uVar3 - param_3) {
      uVar2 = param_4;
    }
    pbVar8 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)insert(this,param_1,(char *)(pbVar9 + param_3),uVar2);
    return pbVar8;
  }
  auVar13 = FUN_03f695e8();
  pbVar9 = auVar13._8_8_;
  pbVar8 = auVar13._0_8_;
  bVar6 = *pbVar8;
  pbVar1 = (basic_string *)(ulong)((byte)bVar6 >> 1);
  if (((byte)bVar6 & 1) != 0) {
    pbVar1 = *(basic_string **)(pbVar8 + 8);
  }
  pbVar7 = pbVar1 + -(long)pbVar9;
  if (pbVar1 < pbVar9) {
    FUN_03fe365c(pbVar8);
                    /* WARNING: Subroutine does not return */
    FUN_03f695f8("basic_string");
  }
  pbVar10 = pbVar7;
  if (param_2 <= pbVar7) {
    pbVar10 = param_2;
  }
  uVar3 = 4;
  if (((byte)bVar6 & 1) != 0) {
    uVar3 = (*(ulong *)pbVar8 & 0xfffffffffffffffe) - 1;
  }
  if (pbVar10 + (uVar3 - (long)pbVar1) < param_4) {
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    __grow_by_and_replace
              (pbVar8,uVar3,(ulong)(pbVar1 + param_4 + (-(long)pbVar10 - uVar3)),(ulong)pbVar1,
               (ulong)pbVar9,(ulong)pbVar10,param_4,(wchar_t *)param_3);
    return pbVar8;
  }
  pbVar4 = pbVar8 + 4;
  if ((*(ulong *)pbVar8 & 1) != 0) {
    pbVar4 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(pbVar8 + 0x10);
  }
  pbVar11 = (basic_string *)param_4;
  if (((basic_string *)param_4 != pbVar10) && (pbVar11 = pbVar10, param_2 < pbVar7)) {
    __dest = pbVar4 + (long)pbVar9 * 4;
    pbVar11 = (basic_string *)(param_4 + -(long)pbVar10);
    lVar12 = (long)pbVar7 - (long)pbVar10;
    if (param_4 < pbVar10) {
      if ((basic_string *)param_4 != (basic_string *)0x0) {
        memmove(__dest,(void *)param_3,param_4 << 2);
      }
      memmove(__dest + param_4 * 4,__dest + (long)pbVar10 * 4,lVar12 * 4);
      bVar6 = *pbVar8;
      pbVar1 = pbVar11 + (long)pbVar1;
      goto joined_r0x03fe3620;
    }
    if ((param_3 < pbVar4 + (long)pbVar1 * 4) && (__dest + 4 <= param_3)) {
      if (param_3 < __dest + (long)pbVar10 * 4) {
        if (param_2 != (basic_string *)0x0) {
          memmove(__dest,(void *)param_3,(long)pbVar10 << 2);
        }
        param_3 = param_3 + param_4 * 4;
        pbVar9 = pbVar10 + (long)pbVar9;
        pbVar10 = (basic_string *)0x0;
        param_4 = (ulong)pbVar11;
      }
      else {
        param_3 = param_3 + (long)pbVar11 * 4;
      }
    }
    memmove(pbVar4 + param_4 * 4 + (long)pbVar9 * 4,pbVar4 + (long)pbVar10 * 4 + (long)pbVar9 * 4,
            lVar12 * 4);
    pbVar11 = pbVar10;
  }
  if ((basic_string *)param_4 != (basic_string *)0x0) {
    memmove(pbVar4 + (long)pbVar9 * 4,(void *)param_3,param_4 << 2);
  }
  bVar6 = *pbVar8;
  pbVar1 = pbVar1 + (param_4 - (long)pbVar11);
joined_r0x03fe3620:
  if (((byte)bVar6 & 1) == 0) {
    *pbVar8 = SUB41((int)pbVar1 << 1,0);
  }
  else {
    *(basic_string **)(pbVar8 + 8) = pbVar1;
  }
  *(undefined4 *)(pbVar4 + (long)pbVar1 * 4) = 0;
  return pbVar8;
}


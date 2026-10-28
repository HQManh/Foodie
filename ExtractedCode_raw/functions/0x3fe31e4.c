// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
// address: 0x3fe31e4
// body: available
// range: 0x3fe31e4-0x3fe3233 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe3220 to 0x89dccc0 std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned
   long) */

long __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,basic_string *param_3,ulong param_4,ulong param_5)

{
  void *pvVar1;
  void *__src;
  void *pvVar2;
  ulong uVar3;
  basic_string bVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  ulong *puVar8;
  void *pvVar9;
  ulong uVar10;
  basic_string *pbVar11;
  size_t __n;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  bVar4 = *param_3;
  uVar3 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar3 = *(ulong *)(param_3 + 8);
  }
  if (param_4 <= uVar3) {
    pbVar11 = *(basic_string **)(param_3 + 0x10);
    if (((byte)bVar4 & 1) == 0) {
      pbVar11 = param_3 + 1;
    }
    uVar12 = uVar3 - param_4;
    if (param_5 <= uVar3 - param_4) {
      uVar12 = param_5;
    }
    lVar7 = replace(this,param_1,param_2,(char *)(pbVar11 + param_4),uVar12);
    return lVar7;
  }
  auVar13 = FUN_03f695e8();
  puVar8 = auVar13._0_8_;
  uVar12 = *puVar8;
  uVar3 = puVar8[1];
  bVar5 = (byte)*puVar8;
  pvVar9 = (void *)puVar8[2];
  pvVar1 = (void *)((long)puVar8 + 1);
  bVar6 = (bVar5 & 1) == 0;
  pvVar2 = pvVar9;
  if (bVar6) {
    uVar3 = (ulong)(bVar5 >> 1);
    pvVar2 = (void *)((long)puVar8 + 1);
  }
  uVar10 = 0x16;
  if (!bVar6) {
    uVar10 = (uVar12 & 0xfffffffffffffffe) - 1;
  }
  __n = (long)auVar13._8_8_ - (long)pvVar2;
  if (uVar10 == uVar3) {
    if (uVar3 == 0xffffffffffffffef) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5d118(puVar8);
    }
    __src = pvVar1;
    if ((uVar12 & 1) != 0) {
      __src = pvVar9;
    }
    if (uVar3 < 0x7fffffffffffffe7) {
      uVar10 = uVar3 * 2;
      if (uVar10 < uVar3 + 1) {
        uVar10 = uVar3 + 1;
      }
      uVar12 = 0x17;
      if (0x16 < uVar10) {
        uVar12 = (uVar10 | 0xf) + 1;
      }
      pvVar9 = operator_new(uVar12);
    }
    else {
      uVar12 = 0xffffffffffffffef;
      pvVar9 = operator_new(0xffffffffffffffef);
    }
    if (pvVar2 != auVar13._8_8_) {
      memmove(pvVar9,__src,__n);
    }
    if (uVar3 - __n != 0) {
      memmove((void *)((long)pvVar9 + __n + 1),(void *)((long)__src + __n),uVar3 - __n);
    }
    if ((bVar5 & 1) != 0) {
      operator_delete(__src);
    }
    *puVar8 = uVar12 | 1;
    puVar8[1] = uVar3 + 1;
    puVar8[2] = (ulong)pvVar9;
    *(char *)((long)pvVar9 + __n) = (char)param_2;
    *(undefined1 *)((long)pvVar9 + uVar3 + 1) = 0;
    bVar5 = (byte)*puVar8;
  }
  else {
    pvVar2 = pvVar1;
    if ((uVar12 & 1) != 0) {
      pvVar2 = pvVar9;
    }
    if (uVar3 - __n != 0) {
      memmove((void *)((long)((long)pvVar2 + __n) + 1),(void *)((long)pvVar2 + __n),uVar3 - __n);
    }
    *(char *)((long)pvVar2 + __n) = (char)param_2;
    *(undefined1 *)((long)pvVar2 + uVar3 + 1) = 0;
    bVar5 = (byte)*puVar8;
  }
  if ((bVar5 & 1) == 0) {
    *(char *)puVar8 = ((char)uVar3 + '\x01') * '\x02';
  }
  else {
    puVar8[1] = uVar3 + 1;
  }
  if ((bVar5 & 1) != 0) {
    pvVar1 = (void *)puVar8[2];
  }
  return (long)pvVar1 + __n;
}


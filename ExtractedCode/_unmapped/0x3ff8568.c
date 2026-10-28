// rea decompile_all
// name: std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
// address: 0x3ff8568
// body: available
// range: 0x3ff8568-0x3ff875f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::str(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
          (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  basic_string bVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar5;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  ulong uVar7;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pbVar6 = this + 0x40;
  if (pbVar6 != (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                )param_1) {
    bVar4 = *param_1;
    if (((byte)*pbVar6 & 1) == 0) {
      if (((byte)bVar4 & 1) == 0) {
        uVar11 = *(undefined8 *)(param_1 + 8);
        uVar10 = *(undefined8 *)param_1;
        *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(this + 0x48) = uVar11;
        *(undefined8 *)pbVar6 = uVar10;
      }
      else {
        FUN_03fe2fdc(pbVar6,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
      }
    }
    else {
      uVar9 = *(ulong *)(param_1 + 8);
      pbVar2 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar4 & 1) == 0) {
        pbVar2 = param_1 + 1;
        uVar9 = (ulong)((byte)bVar4 >> 1);
      }
      FUN_03fe3090(pbVar6,pbVar2,uVar9);
    }
  }
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x40);
  bVar3 = *this_00;
  pbVar6 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x50);
  *(undefined8 *)(this + 0x58) = 0;
  uVar9 = *(ulong *)(this + 0x48);
  pbVar8 = pbVar6;
  if (((byte)bVar3 & 1) == 0) {
    uVar9 = (ulong)((byte)bVar3 >> 1);
    pbVar8 = this + 0x41;
  }
  if ((*(uint *)(this + 0x60) >> 3 & 1) != 0) {
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = pbVar8;
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x18) = pbVar8;
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x58) = pbVar8 + uVar9;
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x20) = pbVar8 + uVar9;
  }
  if ((*(uint *)(this + 0x60) >> 4 & 1) != 0) {
    uVar7 = *(ulong *)(this + 0x40);
    uVar5 = 0x16;
    if (((byte)bVar3 & 1) != 0) {
      uVar5 = (uVar7 & 0xfffffffffffffffe) - 1;
    }
    uVar1 = uVar7 >> 1 & 0x7f;
    if ((uVar7 & 1) != 0) {
      uVar1 = *(ulong *)(this + 0x48);
    }
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x58) = pbVar8 + uVar9;
    if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
      if ((uVar7 & 1) == 0) {
        pbVar6 = this + 0x41;
        *this_00 = SUB41((int)uVar5 << 1,0);
      }
      else {
        *(ulong *)(this + 0x48) = uVar5;
      }
      pbVar6[uVar5] =
           (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    }
    else {
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                (this_00,uVar5 - uVar1,'\0');
    }
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x28) = pbVar8;
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x30) = pbVar8;
    uVar5 = (ulong)((byte)this[0x40] >> 1);
    if (((byte)this[0x40] & 1) != 0) {
      uVar5 = *(ulong *)(this + 0x48);
    }
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x38) = pbVar8 + uVar5;
    if (((byte)this[0x60] & 3) != 0) {
      if (uVar9 >> 0x1f != 0) {
        uVar5 = (uVar9 - 0x80000000) / 0x7fffffff;
        pbVar8 = pbVar8 + uVar5 * 0x7fffffff + 0x7fffffff;
        uVar9 = (uVar9 + uVar5 * -0x7fffffff) - 0x7fffffff;
        *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x30) = pbVar8;
      }
      if (uVar9 != 0) {
        *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x30) = pbVar8 + uVar9;
      }
    }
  }
  return;
}


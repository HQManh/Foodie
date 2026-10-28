// rea decompile_all
// name: std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
// address: 0x3ff7e78
// body: available
// range: 0x3ff7e78-0x3ff8067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&&) */

basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
operator=(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         basic_stringbuf *param_1)

{
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  undefined4 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  basic_stringbuf *pbVar8;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  long lVar10;
  basic_stringbuf *pbVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  locale alStack_70 [8];
  locale alStack_68 [8];
  
  pbVar11 = param_1 + 0x40;
  pbVar8 = *(basic_stringbuf **)(param_1 + 0x50);
  if (((byte)*pbVar11 & 1) == 0) {
    pbVar8 = param_1 + 0x41;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar13 = -1;
    lVar10 = -1;
    lVar14 = -1;
    lVar6 = *(long *)(param_1 + 0x28);
  }
  else {
    lVar14 = *(long *)(param_1 + 0x10) - (long)pbVar8;
    lVar10 = *(long *)(param_1 + 0x18) - (long)pbVar8;
    lVar13 = *(long *)(param_1 + 0x20) - (long)pbVar8;
    lVar6 = *(long *)(param_1 + 0x28);
  }
  if (lVar6 == 0) {
    lVar6 = -1;
    lVar12 = -1;
    lVar4 = -1;
  }
  else {
    lVar6 = lVar6 - (long)pbVar8;
    lVar12 = *(long *)(param_1 + 0x30) - (long)pbVar8;
    lVar4 = *(long *)(param_1 + 0x38) - (long)pbVar8;
  }
  lVar5 = *(long *)(param_1 + 0x58) - (long)pbVar8;
  if (*(long *)(param_1 + 0x58) == 0) {
    lVar5 = -1;
  }
  if (((byte)this[0x40] & 1) != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
  uVar16 = *(undefined8 *)(param_1 + 0x48);
  uVar15 = *(undefined8 *)pbVar11;
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x48) = uVar16;
  *(undefined8 *)(this + 0x40) = uVar15;
  *pbVar11 = (basic_stringbuf)0x0;
  param_1[0x41] = (basic_stringbuf)0x0;
  pbVar1 = this + 0x41;
  if (((byte)this[0x40] & 1) != 0) {
    pbVar1 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x50);
  }
  bVar3 = lVar14 != -1;
  pbVar7 = (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0;
  if (bVar3) {
    pbVar7 = pbVar1 + lVar14;
  }
  pbVar9 = (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0;
  if (bVar3) {
    pbVar9 = pbVar1 + lVar10;
  }
  *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
   (this + 0x10) = pbVar7;
  *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
   (this + 0x18) = pbVar9;
  pbVar7 = (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0;
  if (bVar3) {
    pbVar7 = pbVar1 + lVar13;
  }
  *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
   (this + 0x20) = pbVar7;
  if (lVar6 == -1) {
    pbVar7 = (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             0x0;
    pbVar9 = (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             0x0;
    *(undefined8 *)(this + 0x30) = 0;
  }
  else {
    pbVar7 = pbVar1 + lVar6;
    pbVar9 = pbVar1 + lVar4;
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x30) = pbVar7 + lVar12;
  }
  *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
   (this + 0x28) = pbVar7;
  *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
   (this + 0x38) = pbVar9;
  pbVar7 = (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0;
  if (lVar5 != -1) {
    pbVar7 = pbVar1 + lVar5;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x60);
  *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
   (this + 0x58) = pbVar7;
  *(undefined4 *)(this + 0x60) = uVar2;
  pbVar8 = param_1 + 0x41;
  if (((byte)param_1[0x40] & 1) != 0) {
    pbVar8 = *(basic_stringbuf **)(param_1 + 0x50);
  }
  *(basic_stringbuf **)(param_1 + 0x10) = pbVar8;
  *(basic_stringbuf **)(param_1 + 0x18) = pbVar8;
  *(basic_stringbuf **)(param_1 + 0x20) = pbVar8;
  *(basic_stringbuf **)(param_1 + 0x28) = pbVar8;
  *(basic_stringbuf **)(param_1 + 0x30) = pbVar8;
  *(basic_stringbuf **)(param_1 + 0x38) = pbVar8;
  *(basic_stringbuf **)(param_1 + 0x58) = pbVar8;
  locale::locale(alStack_70,(locale *)(param_1 + 8));
  (**(code **)(*(long *)this + 0x10))(this,alStack_70);
  locale::locale(alStack_68,(locale *)(this + 8));
  locale::operator=((locale *)(this + 8),alStack_70);
  locale::~locale(alStack_68);
  locale::~locale(alStack_70);
  return this;
}


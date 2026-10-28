// rea decompile_all
// name: std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::overflow
// address: 0x3ff8828
// body: available
// range: 0x3ff8828-0x3ff89e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::overflow(int) */

ulong __thiscall
std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
overflow(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
        int param_1)

{
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  ulong uVar2;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar7;
  ulong uVar8;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  long lVar11;
  long lVar12;
  
  if (param_1 == -1) {
    uVar8 = 0;
  }
  else {
    pbVar3 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x30);
    pbVar9 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x38);
    lVar4 = *(long *)(this + 0x10);
    lVar6 = *(long *)(this + 0x18);
    if (pbVar3 == pbVar9) {
      if (((byte)this[0x60] >> 4 & 1) == 0) {
        return 0xffffffff;
      }
      lVar11 = *(long *)(this + 0x28);
      lVar12 = *(long *)(this + 0x58);
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x40),'\0');
      uVar5 = *(ulong *)(this + 0x40);
      uVar8 = 0x16;
      if (((byte)this[0x40] & 1) != 0) {
        uVar8 = (uVar5 & 0xfffffffffffffffe) - 1;
      }
      uVar2 = uVar5 >> 1 & 0x7f;
      if ((uVar5 & 1) != 0) {
        uVar2 = *(ulong *)(this + 0x48);
      }
      if (uVar8 < uVar2 || uVar8 - uVar2 == 0) {
        if ((uVar5 & 1) == 0) {
          pbVar9 = this + 0x41;
          this[0x40] = SUB41((int)uVar8 << 1,0);
        }
        else {
          pbVar9 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(this + 0x50);
          *(ulong *)(this + 0x48) = uVar8;
        }
        pbVar9[uVar8] =
             (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
      }
      else {
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(this + 0x40),uVar8 - uVar2,'\0');
      }
      uVar8 = (ulong)((byte)this[0x40] >> 1);
      pbVar1 = this + 0x41;
      if (((byte)this[0x40] & 1) != 0) {
        uVar8 = *(ulong *)(this + 0x48);
        pbVar1 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                   **)(this + 0x50);
      }
      pbVar9 = pbVar1 + uVar8;
      pbVar3 = pbVar1 + ((long)pbVar3 - lVar11);
      pbVar10 = pbVar1 + (lVar12 - lVar11);
      *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x28) = pbVar1;
      *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x30) = pbVar3;
      *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x38) = pbVar9;
      pbVar1 = pbVar3 + 1;
      bVar7 = this[0x60];
      if (pbVar10 <= pbVar1) {
        pbVar10 = pbVar3 + 1;
      }
      *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x58) = pbVar10;
    }
    else {
      pbVar10 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  **)(this + 0x58);
      pbVar1 = pbVar3 + 1;
      bVar7 = this[0x60];
      if (pbVar10 <= pbVar1) {
        pbVar10 = pbVar3 + 1;
      }
      *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x58) = pbVar10;
    }
    if (((byte)bVar7 >> 3 & 1) != 0) {
      *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x20) = pbVar10;
      pbVar10 = this + 0x41;
      if (((byte)this[0x40] & 1) != 0) {
        pbVar10 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)(this + 0x50);
      }
      *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x10) = pbVar10;
      *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x18) = pbVar10 + (lVar6 - lVar4);
    }
    if (pbVar3 == pbVar9) {
                    /* WARNING: Could not recover jumptable at 0x03ff8908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)(*(long *)this + 0x68))(this,param_1 & 0xff);
      return uVar8;
    }
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x30) = pbVar1;
    uVar8 = (ulong)(param_1 & 0xff);
    *pbVar3 = SUB41(param_1,0);
  }
  return uVar8;
}


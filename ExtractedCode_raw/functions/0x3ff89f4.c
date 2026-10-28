// rea decompile_all
// name: std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::seekoff
// address: 0x3ff89f4
// body: available
// range: 0x3ff89f4-0x3ff8b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::seekoff(long long, std::__ndk1::ios_base::seekdir, unsigned int) */

undefined1  [16] __thiscall
std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
seekoff(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
       long param_1,int param_3,uint param_4)

{
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar6 = *(ulong *)(this + 0x30);
  uVar5 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x58) < uVar6) {
    *(ulong *)(this + 0x58) = uVar6;
    uVar5 = uVar6;
  }
  if (((param_4 & 0x18) != 0) && ((param_3 != 1 || ((param_4 & 0x18) != 0x18)))) {
    if (uVar5 == 0) {
      lVar7 = 0;
    }
    else {
      pbVar1 = this + 0x41;
      if (((byte)this[0x40] & 1) != 0) {
        pbVar1 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                   **)(this + 0x50);
      }
      lVar7 = uVar5 - (long)pbVar1;
    }
    if (param_3 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7;
      if (param_3 != 2) {
        if (param_3 != 1) goto LAB_03ff8a28;
        if ((param_4 >> 3 & 1) == 0) {
          lVar8 = uVar6 - *(long *)(this + 0x28);
        }
        else {
          lVar8 = *(long *)(this + 0x18) - *(long *)(this + 0x10);
        }
      }
    }
    uVar3 = lVar8 + param_1;
    uVar4 = 0xffffffffffffffff;
    if (((-1 < (long)uVar3) && (uVar4 = 0xffffffffffffffff, (long)uVar3 <= lVar7)) &&
       ((uVar3 == 0 ||
        ((((param_4 >> 3 & 1) == 0 || (*(long *)(this + 0x18) != 0)) &&
         (((param_4 >> 4 & 1) == 0 || (uVar6 != 0)))))))) {
      if ((param_4 >> 3 & 1) != 0) {
        *(ulong *)(this + 0x18) = *(long *)(this + 0x10) + uVar3;
        *(ulong *)(this + 0x20) = uVar5;
      }
      uVar4 = uVar3;
      if ((param_4 >> 4 & 1) != 0) {
        *(ulong *)(this + 0x30) = *(long *)(this + 0x28) + uVar3;
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar4;
    return auVar2 << 0x40;
  }
LAB_03ff8a28:
  return ZEXT816(0xffffffffffffffff) << 0x40;
}


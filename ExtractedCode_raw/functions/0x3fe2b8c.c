// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
// address: 0x3fe2b8c
// body: available
// range: 0x3fe2b8c-0x3fe2bdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe2bc8 to 0x89dbfc0 std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::append(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long, unsigned long) */

ulong __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          basic_string *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  size_t __n;
  byte *__s1;
  basic_string bVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  size_t sVar6;
  uint uVar7;
  basic_string *pbVar8;
  undefined1 auVar9 [16];
  
  bVar2 = *param_1;
  uVar4 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if (param_2 <= uVar4) {
    pbVar8 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    uVar1 = uVar4 - param_2;
    if (param_3 <= uVar4 - param_2) {
      uVar1 = param_3;
    }
    uVar4 = append(this,(char *)(pbVar8 + param_2),uVar1);
    return uVar4;
  }
  auVar9 = FUN_03f695e8();
  pbVar5 = auVar9._0_8_;
  sVar6 = strlen(auVar9._8_8_);
  if (sVar6 != 0xffffffffffffffff) {
    uVar4 = *(ulong *)(pbVar5 + 8);
    __s1 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      __s1 = pbVar5 + 1;
      uVar4 = (ulong)(*pbVar5 >> 1);
    }
    __n = uVar4;
    if (sVar6 <= uVar4) {
      __n = sVar6;
    }
    uVar7 = (uint)(sVar6 < uVar4);
    if (sVar6 > uVar4) {
      uVar7 = 0xffffffff;
    }
    uVar3 = memcmp(__s1,auVar9._8_8_,__n);
    if (uVar3 != 0) {
      uVar7 = uVar3;
    }
    return (ulong)uVar7;
  }
  FUN_03f695e8(pbVar5);
                    /* WARNING: Subroutine does not return */
  FUN_039aee10();
}


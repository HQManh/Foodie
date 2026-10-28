// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
// address: 0x3fe2c5c
// body: available
// range: 0x3fe2c5c-0x3fe2cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(unsigned long, unsigned long, char const*, unsigned long) const */

byte * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  byte bVar4;
  uint uVar5;
  size_t sVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  byte *pbVar11;
  undefined1 auVar12 [16];
  
  bVar3 = *this;
  uVar2 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  if ((param_4 != 0xffffffffffffffff) && (param_1 <= uVar2)) {
    pbVar10 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0x10);
    uVar8 = uVar2 - param_1;
    if (param_2 <= uVar2 - param_1) {
      uVar8 = param_2;
    }
    if (((byte)bVar3 & 1) == 0) {
      pbVar10 = this + 1;
    }
    sVar6 = uVar8;
    if (param_4 <= uVar8) {
      sVar6 = param_4;
    }
    uVar9 = (uint)(param_4 < uVar8);
    if (param_4 > uVar8) {
      uVar9 = 0xffffffff;
    }
    uVar5 = memcmp(pbVar10 + param_1,param_3,sVar6);
    if (uVar5 != 0) {
      uVar9 = uVar5;
    }
    return (byte *)(ulong)uVar9;
  }
  auVar12 = FUN_03f695e8();
  uVar8 = auVar12._8_8_;
  pbVar7 = auVar12._0_8_;
  sVar6 = strlen(param_3);
  bVar4 = *pbVar7;
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(pbVar7 + 8);
  }
  if ((sVar6 != 0xffffffffffffffff) && (uVar8 <= uVar2)) {
    pbVar11 = *(byte **)(pbVar7 + 0x10);
    uVar1 = uVar2 - uVar8;
    if (param_2 <= uVar2 - uVar8) {
      uVar1 = param_2;
    }
    if ((bVar4 & 1) == 0) {
      pbVar11 = pbVar7 + 1;
    }
    __n = uVar1;
    if (sVar6 <= uVar1) {
      __n = sVar6;
    }
    uVar9 = (uint)(sVar6 < uVar1);
    if (sVar6 > uVar1) {
      uVar9 = 0xffffffff;
    }
    uVar5 = memcmp(pbVar11 + uVar8,param_3,__n);
    if (uVar5 != 0) {
      uVar9 = uVar5;
    }
    return (byte *)(ulong)uVar9;
  }
  auVar12 = FUN_03f695e8(pbVar7);
  pbVar7 = auVar12._0_8_;
  bVar4 = *pbVar7;
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(pbVar7 + 8);
  }
  if (auVar12._8_8_ < uVar2) {
    pbVar11 = *(byte **)(pbVar7 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar11 = pbVar7 + 1;
    }
    return pbVar11 + auVar12._8_8_;
  }
  FUN_03f695e8();
  pbVar7 = (byte *)FUN_03fe2dcc();
  return pbVar7;
}


// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
// address: 0x3fe2f88
// body: available
// range: 0x3fe2f88-0x3fe2fdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe2fcc to 0x3fe3090 FUN_03fe3090 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fe2fd8 to 0x3fe2fdc FUN_03fe2fdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
operator=(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  basic_string bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (this != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_1) {
    bVar3 = *param_1;
    if (((byte)*this & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
      pbVar2 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar3 & 1) == 0) {
        pbVar2 = param_1 + 1;
        uVar1 = (ulong)((byte)bVar3 >> 1);
      }
      FUN_03fe3090(this,pbVar2,uVar1);
      return;
    }
    if (((byte)bVar3 & 1) != 0) {
      FUN_03fe2fdc(this,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
      return;
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar5;
    *(undefined8 *)this = uVar4;
  }
  return;
}


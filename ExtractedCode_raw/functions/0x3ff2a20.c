// rea decompile_all
// name: std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::swap
// address: 0x3ff2a20
// body: available
// range: 0x3ff2a20-0x3ff2a8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char>
   >::swap(std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >&) */

void __thiscall
std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::swap
          (basic_iostream<char,std::__ndk1::char_traits<char>> *this,basic_iostream *param_1)

{
  ios_base *this_00;
  ios_base *piVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)param_1;
  lVar3 = *(long *)this;
  uVar6 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar6;
  this_00 = (ios_base *)(this + *(long *)(lVar3 + -0x18));
  piVar1 = (ios_base *)(param_1 + *(long *)(lVar2 + -0x18));
  ios_base::swap(this_00,piVar1);
  uVar6 = *(undefined8 *)(this_00 + 0x88);
  uVar4 = *(undefined4 *)(piVar1 + 0x90);
  *(undefined8 *)(this_00 + 0x88) = *(undefined8 *)(piVar1 + 0x88);
  uVar5 = *(undefined4 *)(this_00 + 0x90);
  *(undefined8 *)(piVar1 + 0x88) = uVar6;
  *(undefined4 *)(this_00 + 0x90) = uVar4;
  *(undefined4 *)(piVar1 + 0x90) = uVar5;
  return;
}


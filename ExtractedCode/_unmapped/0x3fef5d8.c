// rea decompile_all
// name: std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
// address: 0x3fef5d8
// body: available
// range: 0x3fef5d8-0x3fef6af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get() */

uint __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  byte *pbVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  sentry local_24 [4];
  
  *(undefined8 *)(this + 8) = 0;
  sentry::sentry(local_24,(basic_istream *)this,true);
  if (local_24[0] == (sentry)0x0) {
    return 0xffffffff;
  }
  plVar2 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
  pbVar1 = (byte *)plVar2[3];
  if (pbVar1 == (byte *)plVar2[4]) {
    uVar4 = (**(code **)(*plVar2 + 0x50))();
    if (uVar4 == 0xffffffff) {
      uVar3 = 6;
      goto LAB_03fef678;
    }
  }
  else {
    plVar2[3] = (long)(pbVar1 + 1);
    uVar4 = (uint)*pbVar1;
  }
  uVar3 = 0;
  *(undefined8 *)(this + 8) = 1;
LAB_03fef678:
  ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | uVar3);
  return uVar4;
}


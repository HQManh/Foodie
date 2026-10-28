// rea decompile_all
// name: std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::readsome
// address: 0x3ff0278
// body: available
// range: 0x3ff0278-0x3ff0377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::readsome(char*, long) */

undefined8 __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::readsome
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  sentry local_14 [4];
  
  *(undefined8 *)(this + 8) = 0;
  sentry::sentry(local_14,(basic_istream *)this,true);
  if (local_14[0] == (sentry)0x0) {
    uVar4 = 4;
  }
  else {
    plVar1 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
    if ((ulong)plVar1[3] < (ulong)plVar1[4]) {
      lVar2 = plVar1[4] - plVar1[3];
    }
    else {
      lVar2 = (**(code **)(*plVar1 + 0x38))();
    }
    if (lVar2 == -1) {
      uVar4 = 2;
    }
    else if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      if (param_2 <= lVar2) {
        lVar2 = param_2;
      }
      lVar3 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28) + 0x40))
                        (*(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28),param_1,lVar2);
      *(long *)(this + 8) = lVar3;
      uVar4 = 0;
      if (lVar3 != lVar2) {
        uVar4 = 6;
      }
    }
  }
  ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | uVar4);
  return *(undefined8 *)(this + 8);
}


// rea decompile_all
// name: std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::ignore
// address: 0x3ff5250
// body: available
// range: 0x3ff5250-0x3ff53af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::ignore(long, unsigned
   int) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::ignore
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,long param_1,uint param_2)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  sentry local_24 [4];
  
  *(undefined8 *)(this + 8) = 0;
  sentry::sentry(local_24,(basic_istream *)this,true);
  if (local_24[0] == (sentry)0x0) {
    return this;
  }
  if (param_1 == 0x7fffffffffffffff) {
    do {
      plVar4 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
      puVar2 = (uint *)plVar4[3];
      if (puVar2 == (uint *)plVar4[4]) {
        uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4);
      }
      else {
        uVar3 = *puVar2;
        plVar4[3] = (long)(puVar2 + 1);
      }
      if (uVar3 == 0xffffffff) goto LAB_03ff5378;
      if (*(long *)(this + 8) != 0x7fffffffffffffff) {
        *(long *)(this + 8) = *(long *)(this + 8) + 1;
      }
    } while (uVar3 != param_2);
  }
  else if (*(long *)(this + 8) < param_1) {
    do {
      plVar4 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
      puVar2 = (uint *)plVar4[3];
      if (puVar2 == (uint *)plVar4[4]) {
        uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4);
      }
      else {
        uVar3 = *puVar2;
        plVar4[3] = (long)(puVar2 + 1);
      }
      if (uVar3 == 0xffffffff) goto LAB_03ff5378;
    } while ((*(long *)(this + 8) != 0x7fffffffffffffff) &&
            (lVar1 = *(long *)(this + 8) + 1, *(long *)(this + 8) = lVar1,
            uVar3 != param_2 && lVar1 < param_1));
  }
  uVar3 = 0;
LAB_03ff537c:
  ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | uVar3);
  return this;
LAB_03ff5378:
  uVar3 = 2;
  goto LAB_03ff537c;
}


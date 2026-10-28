// rea decompile_all
// name: std::__ndk1::ctype_byname<wchar_t>::do_scan_is
// address: 0x401ed94
// body: available
// range: 0x401ed94-0x401eec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::ctype_byname<wchar_t>::do_scan_is(unsigned long, wchar_t const*, wchar_t const*)
   const */

wchar_t * __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_scan_is
          (ctype_byname<wchar_t> *this,ulong param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t __wc;
  int iVar1;
  uint uVar2;
  
  if (param_2 != param_3) {
    while( true ) {
      __wc = *param_2;
      uVar2 = (uint)param_1;
      if ((((((param_1 & 1) != 0) &&
            (iVar1 = iswspace_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)) ||
           (((uVar2 >> 1 & 1) != 0 &&
            (iVar1 = iswprint_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)))) ||
          (((uVar2 >> 2 & 1) != 0 &&
           (iVar1 = iswcntrl_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)))) ||
         (((uVar2 >> 3 & 1) != 0 &&
          (iVar1 = iswupper_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)))) break;
      if (((uVar2 >> 4 & 1) != 0) &&
         (iVar1 = iswlower_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)) {
        return param_2;
      }
      if (((uVar2 >> 5 & 1) != 0) &&
         (iVar1 = iswalpha_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)) {
        return param_2;
      }
      if (((uVar2 >> 6 & 1) != 0) &&
         (iVar1 = iswdigit_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)) {
        return param_2;
      }
      if (((uVar2 >> 7 & 1) != 0) &&
         (iVar1 = iswpunct_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)) {
        return param_2;
      }
      if (((uVar2 >> 8 & 1) != 0) &&
         (iVar1 = iswxdigit_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)) {
        return param_2;
      }
      if (((uVar2 >> 9 & 1) != 0) &&
         (iVar1 = iswblank_l(__wc,*(__locale_t *)(this + 0x10)), iVar1 != 0)) {
        return param_2;
      }
      param_2 = param_2 + 1;
      if (param_2 == param_3) {
        return param_3;
      }
    }
  }
  return param_2;
}


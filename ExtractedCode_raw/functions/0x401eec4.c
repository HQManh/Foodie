// rea decompile_all
// name: std::__ndk1::ctype_byname<wchar_t>::do_scan_not
// address: 0x401eec4
// body: available
// range: 0x401eec4-0x401eff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::ctype_byname<wchar_t>::do_scan_not(unsigned long, wchar_t const*, wchar_t const*)
   const */

wchar_t * __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_scan_not
          (ctype_byname<wchar_t> *this,ulong param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t __wc;
  wchar_t *pwVar1;
  int iVar2;
  uint uVar3;
  
  pwVar1 = param_2;
  do {
    if (param_2 == param_3) {
      return pwVar1;
    }
    __wc = *param_2;
    uVar3 = (uint)param_1;
    if (((((((param_1 & 1) == 0) ||
           (iVar2 = iswspace_l(__wc,*(__locale_t *)(this + 0x10)), iVar2 == 0)) &&
          (((uVar3 >> 1 & 1) == 0 ||
           (iVar2 = iswprint_l(__wc,*(__locale_t *)(this + 0x10)), iVar2 == 0)))) &&
         (((uVar3 >> 2 & 1) == 0 ||
          (iVar2 = iswcntrl_l(__wc,*(__locale_t *)(this + 0x10)), iVar2 == 0)))) &&
        (((uVar3 >> 3 & 1) == 0 ||
         (iVar2 = iswupper_l(__wc,*(__locale_t *)(this + 0x10)), iVar2 == 0)))) &&
       ((((((uVar3 >> 4 & 1) == 0 ||
           (iVar2 = iswlower_l(__wc,*(__locale_t *)(this + 0x10)), iVar2 == 0)) &&
          (((uVar3 >> 5 & 1) == 0 ||
           (iVar2 = iswalpha_l(__wc,*(__locale_t *)(this + 0x10)), iVar2 == 0)))) &&
         (((uVar3 >> 6 & 1) == 0 ||
          (iVar2 = iswdigit_l(__wc,*(__locale_t *)(this + 0x10)), iVar2 == 0)))) &&
        ((((uVar3 >> 7 & 1) == 0 ||
          (iVar2 = iswpunct_l(__wc,*(__locale_t *)(this + 0x10)), iVar2 == 0)) &&
         (((uVar3 >> 8 & 1) == 0 ||
          (iVar2 = iswxdigit_l(__wc,*(__locale_t *)(this + 0x10)), iVar2 == 0)))))))) {
      if ((uVar3 >> 9 & 1) == 0) {
        return param_2;
      }
      iVar2 = iswblank_l(__wc,*(__locale_t *)(this + 0x10));
      if (iVar2 == 0) {
        return param_2;
      }
    }
    param_2 = param_2 + 1;
    pwVar1 = param_3;
  } while( true );
}


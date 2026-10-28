// rea decompile_all
// name: std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
// address: 0x3ff4ba8
// body: available
// range: 0x3ff4ba8-0x3ff4d1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::get(wchar_t*, long,
   wchar_t) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2,wchar_t param_3)

{
  wchar_t wVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  wchar_t *pwVar7;
  sentry local_44 [4];
  
  *(undefined8 *)(this + 8) = 0;
  sentry::sentry(local_44,(basic_istream *)this,true);
  if (local_44[0] != (sentry)0x0) {
    if (param_2 < 1) {
      uVar3 = 4;
    }
    else {
      lVar4 = *(long *)(this + 8);
      pwVar7 = param_1;
      while (param_1 = pwVar7, lVar4 < param_2 + -1) {
        while( true ) {
          plVar2 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
          if ((wchar_t *)plVar2[3] == (wchar_t *)plVar2[4]) {
            wVar1 = (**(code **)(*plVar2 + 0x48))();
          }
          else {
            wVar1 = *(wchar_t *)plVar2[3];
          }
          if (wVar1 == L'\xffffffff') {
            lVar6 = *(long *)(this + 8);
            uVar5 = 2;
            goto LAB_03ff4ccc;
          }
          lVar6 = *(long *)(this + 8);
          if (wVar1 == param_3) {
            uVar5 = 0;
            goto LAB_03ff4ccc;
          }
          lVar4 = 0x7fffffffffffffff;
          pwVar7 = param_1 + 1;
          *param_1 = wVar1;
          if (lVar6 != 0x7fffffffffffffff) {
            lVar4 = lVar6 + 1;
            *(long *)(this + 8) = lVar4;
          }
          plVar2 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
          if (plVar2[3] == plVar2[4]) break;
          plVar2[3] = plVar2[3] + 4;
          param_1 = pwVar7;
          if (param_2 + -1 <= lVar4) goto LAB_03ff4ca8;
        }
        (**(code **)(*plVar2 + 0x50))();
        lVar4 = *(long *)(this + 8);
      }
LAB_03ff4ca8:
      uVar5 = 0;
      lVar6 = lVar4;
      param_1 = pwVar7;
LAB_03ff4ccc:
      uVar3 = uVar5 | 4;
      if (lVar6 != 0) {
        uVar3 = uVar5;
      }
      *param_1 = L'\0';
    }
    ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                    *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | uVar3)
    ;
  }
  if (0 < param_2) {
    *param_1 = L'\0';
  }
  return this;
}


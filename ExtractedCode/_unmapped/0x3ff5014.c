// rea decompile_all
// name: std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::getline
// address: 0x3ff5014
// body: available
// range: 0x3ff5014-0x3ff51df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::getline(wchar_t*, long,
   wchar_t) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::getline
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2,wchar_t param_3)

{
  uint uVar1;
  wchar_t wVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  wchar_t *pwVar7;
  sentry local_54 [4];
  
  *(undefined8 *)(this + 8) = 0;
  sentry::sentry(local_54,(basic_istream *)this,true);
  uVar4 = (uint)(byte)local_54[0];
  if (local_54[0] == (sentry)0x0) {
joined_r0x03ff5178:
    if (0 < param_2) {
      *param_1 = L'\0';
    }
    uVar1 = uVar4 | 4;
    if (*(long *)(this + 8) != 0) {
      uVar1 = uVar4;
    }
    ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                    *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | uVar1)
    ;
    return this;
  }
LAB_03ff5084:
  plVar3 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
  if ((wchar_t *)plVar3[3] == (wchar_t *)plVar3[4]) {
    wVar2 = (**(code **)(*plVar3 + 0x48))();
  }
  else {
    wVar2 = *(wchar_t *)plVar3[3];
  }
  if (wVar2 == L'\xffffffff') {
    uVar4 = 2;
  }
  else if (wVar2 == param_3) {
    plVar3 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
    if (plVar3[3] == plVar3[4]) {
      (**(code **)(*plVar3 + 0x50))();
    }
    else {
      plVar3[3] = plVar3[3] + 4;
    }
    if (*(long *)(this + 8) == 0x7fffffffffffffff) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
    }
  }
  else {
    lVar5 = *(long *)(this + 8);
    if (lVar5 < param_2 + -1) {
      lVar6 = *(long *)this;
      pwVar7 = param_1 + 1;
      *param_1 = wVar2;
      plVar3 = *(long **)(this + *(long *)(lVar6 + -0x18) + 0x28);
      param_1 = pwVar7;
      if (plVar3[3] == plVar3[4]) goto code_r0x03ff50ec;
      plVar3[3] = plVar3[3] + 4;
      goto LAB_03ff5078;
    }
    uVar4 = 4;
  }
  goto joined_r0x03ff5178;
code_r0x03ff50ec:
  (**(code **)(*plVar3 + 0x50))();
  lVar5 = *(long *)(this + 8);
  if (lVar5 != 0x7fffffffffffffff) {
LAB_03ff5078:
    *(long *)(this + 8) = lVar5 + 1;
  }
  goto LAB_03ff5084;
}


// rea decompile_all
// name: std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_out
// address: 0x401f5c0
// body: available
// range: 0x401f5c0-0x401f867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_out(mbstate_t&, wchar_t const*, wchar_t
   const*, wchar_t const*&, char*, char*, char*&) const */

undefined1 __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_out
          (codecvt<wchar_t,char,mbstate_t> *this,mbstate_t *param_1,wchar_t *param_2,
          wchar_t *param_3,wchar_t **param_4,char *param_5,char *param_6,char **param_7)

{
  wchar_t __wc;
  char cVar1;
  __locale_t p_Var2;
  size_t sVar3;
  char *pcVar4;
  wchar_t *pwVar5;
  char *pcVar6;
  wchar_t *pwVar7;
  char acStack_74 [4];
  mbstate_t local_70;
  __locale_t local_68;
  
  pwVar7 = param_2;
  for (pwVar5 = param_2; (pwVar5 != param_3 && (pwVar7 = pwVar5, *pwVar5 != L'\0'));
      pwVar5 = pwVar5 + 1) {
    pwVar7 = param_3;
  }
  *param_7 = param_5;
  *param_4 = param_2;
  while( true ) {
    if ((param_2 == param_3) || (param_5 == param_6)) goto LAB_0401f834;
    local_70 = *param_1;
    p_Var2 = uselocale(*(__locale_t *)(this + 0x10));
    local_68 = p_Var2;
    sVar3 = wcsnrtombs(param_5,param_4,(long)pwVar7 - (long)param_2 >> 2,
                       (long)param_6 - (long)param_5,param_1);
    if (p_Var2 != (__locale_t)0x0) {
      uselocale(p_Var2);
    }
    if (sVar3 == 0) {
      return true;
    }
    if (sVar3 == 0xffffffffffffffff) {
      *param_7 = param_5;
      if (param_2 == *param_4) goto LAB_0401f81c;
      goto LAB_0401f7bc;
    }
    param_5 = *param_7 + sVar3;
    *param_7 = param_5;
    if (param_5 == param_6) break;
    if (pwVar7 == param_3) {
      param_2 = *param_4;
      pwVar7 = param_3;
    }
    else {
      p_Var2 = uselocale(*(__locale_t *)(this + 0x10));
      local_68 = p_Var2;
      sVar3 = wcrtomb(acStack_74,L'\0',param_1);
      if (p_Var2 != (__locale_t)0x0) {
        uselocale(p_Var2);
      }
      if (sVar3 == 0xffffffffffffffff) {
        return 2;
      }
      if ((ulong)((long)param_6 - (long)*param_7) < sVar3) {
        return true;
      }
      if (sVar3 != 0) {
        pcVar4 = acStack_74;
        do {
          pcVar6 = *param_7;
          cVar1 = *pcVar4;
          sVar3 = sVar3 - 1;
          *param_7 = pcVar6 + 1;
          *pcVar6 = cVar1;
          pcVar4 = pcVar4 + 1;
        } while (sVar3 != 0);
      }
      param_2 = *param_4 + 1;
      *param_4 = param_2;
      pwVar5 = param_2;
      pwVar7 = param_3;
      if (param_2 == param_3) {
LAB_0401f644:
        param_5 = *param_7;
      }
      else {
        do {
          pwVar7 = pwVar5;
          if (*pwVar5 == L'\0') goto LAB_0401f644;
          pwVar5 = pwVar5 + 1;
        } while (pwVar5 != param_3);
        param_5 = *param_7;
        pwVar7 = param_3;
      }
    }
  }
  param_2 = *param_4;
LAB_0401f834:
  return param_2 != param_3;
  while( true ) {
    param_2 = param_2 + 1;
    param_5 = *param_7 + sVar3;
    *param_7 = param_5;
    if (param_2 == *param_4) break;
LAB_0401f7bc:
    __wc = *param_2;
    p_Var2 = uselocale(*(__locale_t *)(this + 0x10));
    local_68 = p_Var2;
    sVar3 = wcrtomb(param_5,__wc,&local_70);
    if (p_Var2 != (__locale_t)0x0) {
      uselocale(p_Var2);
    }
    if (sVar3 == 0xffffffffffffffff) break;
  }
LAB_0401f81c:
  *param_4 = param_2;
  return 2;
}


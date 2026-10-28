// rea decompile_all
// name: std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_in
// address: 0x401f8b0
// body: available
// range: 0x401f8b0-0x401fb3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_in(mbstate_t&, char const*, char const*, char
   const*&, wchar_t*, wchar_t*, wchar_t*&) const */

bool __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_in
          (codecvt<wchar_t,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar_t *param_5,wchar_t *param_6,wchar_t **param_7)

{
  wchar_t *__pwc;
  bool bVar1;
  __locale_t p_Var2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  mbstate_t local_70;
  __locale_t local_68;
  
  for (pcVar4 = param_2; (pcVar6 = param_3, pcVar4 != param_3 && (pcVar6 = pcVar4, *pcVar4 != '\0'))
      ; pcVar4 = pcVar4 + 1) {
  }
  *param_7 = param_5;
  *param_4 = param_2;
  pcVar4 = param_2;
  if ((param_2 != param_3) && (param_5 != param_6)) {
    while( true ) {
      local_70 = *param_1;
      p_Var2 = uselocale(*(__locale_t *)(this + 0x10));
      local_68 = p_Var2;
      sVar3 = mbsnrtowcs(param_5,param_4,(long)pcVar6 - (long)param_2,
                         (long)param_6 - (long)param_5 >> 2,param_1);
      if (p_Var2 != (__locale_t)0x0) {
        uselocale(p_Var2);
      }
      if (sVar3 == 0xffffffffffffffff) {
        *param_7 = param_5;
        pcVar4 = *param_4;
        for (; param_2 != pcVar4; param_2 = param_2 + sVar3) {
          p_Var2 = uselocale(*(__locale_t *)(this + 0x10));
          local_68 = p_Var2;
          sVar3 = mbrtowc(param_5,param_2,(long)pcVar6 - (long)param_2,&local_70);
          if (p_Var2 != (__locale_t)0x0) {
            uselocale(p_Var2);
          }
          if (sVar3 == 0) {
            sVar3 = 1;
          }
          else {
            if (sVar3 == 0xfffffffffffffffe) {
              *param_4 = param_2;
              return true;
            }
            if (sVar3 == 0xffffffffffffffff) {
              *param_4 = param_2;
              return (bool)2;
            }
          }
          param_5 = *param_7 + 1;
          *param_7 = param_5;
          pcVar4 = *param_4;
        }
        *param_4 = param_2;
        pcVar4 = param_2;
        goto LAB_0401fb04;
      }
      __pwc = *param_7 + sVar3;
      *param_7 = __pwc;
      if (__pwc == param_6) break;
      bVar1 = pcVar6 != param_3;
      param_2 = *param_4;
      pcVar6 = param_3;
      if (bVar1) {
        p_Var2 = uselocale(*(__locale_t *)(this + 0x10));
        local_68 = p_Var2;
        sVar3 = mbrtowc(__pwc,param_2,1,param_1);
        if (p_Var2 != (__locale_t)0x0) {
          uselocale(p_Var2);
        }
        if (sVar3 != 0) {
          return (bool)2;
        }
        *param_7 = *param_7 + 1;
        param_2 = *param_4 + 1;
        *param_4 = param_2;
        pcVar5 = param_2;
        pcVar4 = param_3;
        if (param_2 == param_3) goto LAB_0401fb04;
        do {
          pcVar6 = pcVar5;
          if (*pcVar5 == '\0') break;
          pcVar5 = pcVar5 + 1;
          pcVar6 = param_3;
        } while (pcVar5 != param_3);
      }
      pcVar4 = param_2;
      if ((param_2 == param_3) || (param_5 = *param_7, param_5 == param_6)) goto LAB_0401fb04;
    }
    pcVar4 = *param_4;
  }
LAB_0401fb04:
  return pcVar4 != param_3;
}


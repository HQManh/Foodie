// rea decompile_all
// name: std::__ndk1::__num_get<wchar_t>::__stage2_int_loop
// address: 0x4003a84
// body: available
// range: 0x4003a84-0x4003ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__num_get<wchar_t>::__stage2_int_loop(wchar_t, int, char*, char*&, unsigned int&,
   wchar_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned int*, unsigned int*&, wchar_t*) */

undefined8
std::__ndk1::__num_get<wchar_t>::__stage2_int_loop
          (wchar_t param_1,int param_2,char *param_3,char **param_4,uint *param_5,wchar_t param_6,
          basic_string *param_7,uint *param_8,uint **param_9,wchar_t *param_10)

{
  ulong uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  long lVar5;
  uint *puVar6;
  char *pcVar7;
  
  if (*param_4 == param_3) {
    if (param_10[0x18] == param_1) {
      cVar4 = '+';
LAB_04003b88:
      *param_4 = param_3 + 1;
      *param_3 = cVar4;
      *param_5 = 0;
      return 0;
    }
    if (param_10[0x19] == param_1) {
      cVar4 = '-';
      goto LAB_04003b88;
    }
  }
  uVar1 = (ulong)((byte)*param_7 >> 1);
  if (((byte)*param_7 & 1) != 0) {
    uVar1 = *(ulong *)(param_7 + 8);
  }
  if ((param_1 == param_6) && (uVar1 != 0)) {
    puVar6 = *param_9;
    if ((long)puVar6 - (long)param_8 < 0xa0) {
      *puVar6 = *param_5;
      *param_9 = puVar6 + 1;
      *param_5 = 0;
      return 0;
    }
    return 0;
  }
  pwVar3 = wmemchr(param_10,param_1,0x1a);
  pwVar2 = param_10 + 0x1a;
  if (pwVar3 != (wchar_t *)0x0) {
    pwVar2 = pwVar3;
  }
  lVar5 = (long)pwVar2 - (long)param_10 >> 2;
  if (lVar5 < 0x18) {
    if (param_2 != 8) {
      if (param_2 == 0x10) {
        if (0x15 < lVar5) {
          pcVar7 = *param_4;
          if (pcVar7 == param_3) {
            return 0xffffffff;
          }
          if (2 < (long)pcVar7 - (long)param_3) {
            return 0xffffffff;
          }
          if (pcVar7[-1] != '0') {
            return 0xffffffff;
          }
          *param_5 = 0;
          cVar4 = "0123456789abcdefABCDEFxX+-pPiInN"[lVar5];
          *param_4 = pcVar7 + 1;
          *pcVar7 = cVar4;
          return 0;
        }
        goto LAB_04003c04;
      }
      if (param_2 != 10) goto LAB_04003c04;
    }
    if (lVar5 < (long)(ulong)(uint)param_2) {
LAB_04003c04:
      pcVar7 = *param_4;
      cVar4 = "0123456789abcdefABCDEFxX+-pPiInN"[lVar5];
      *param_4 = pcVar7 + 1;
      *pcVar7 = cVar4;
      *param_5 = *param_5 + 1;
      return 0;
    }
  }
  return 0xffffffff;
}


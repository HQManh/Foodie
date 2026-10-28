// rea decompile_all
// name: std::__ndk1::__num_get<char>::__stage2_int_loop
// address: 0x3fff544
// body: available
// range: 0x3fff544-0x3fff703 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__num_get<char>::__stage2_int_loop(char, int, char*, char*&, unsigned int&, char,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned int*, unsigned int*&, char*) */

undefined8
std::__ndk1::__num_get<char>::__stage2_int_loop
          (char param_1,int param_2,char *param_3,char **param_4,uint *param_5,char param_6,
          basic_string *param_7,uint *param_8,uint **param_9,char *param_10)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  uint *puVar7;
  char *pcVar8;
  
  pcVar8 = *param_4;
  if (pcVar8 == param_3) {
    if (param_10[0x18] == param_1) {
      cVar5 = '+';
LAB_03fff628:
      *param_4 = param_3 + 1;
      *param_3 = cVar5;
      *param_5 = 0;
      return 0;
    }
    if (param_10[0x19] == param_1) {
      cVar5 = '-';
      goto LAB_03fff628;
    }
  }
  uVar1 = (ulong)((byte)*param_7 >> 1);
  if (((byte)*param_7 & 1) != 0) {
    uVar1 = *(ulong *)(param_7 + 8);
  }
  if ((param_1 == param_6) && (uVar1 != 0)) {
    puVar7 = *param_9;
    if ((long)puVar7 - (long)param_8 < 0xa0) {
      *puVar7 = *param_5;
      *param_9 = puVar7 + 1;
      *param_5 = 0;
      return 0;
    }
    return 0;
  }
  pcVar3 = memchr(param_10,(uint)(byte)param_1,0x1a);
  pcVar2 = param_10 + 0x1a;
  if (pcVar3 != (char *)0x0) {
    pcVar2 = pcVar3;
  }
  lVar6 = (long)pcVar2 - (long)param_10;
  if (lVar6 < 0x18) {
    if (param_2 == 8) {
LAB_03fff660:
      if ((long)(ulong)(uint)param_2 <= lVar6) goto LAB_03fff610;
    }
    else if (param_2 == 0x10) {
      if (0x15 < lVar6) {
        if (pcVar8 == param_3) {
          return 0xffffffff;
        }
        if (2 < (long)pcVar8 - (long)param_3) {
          return 0xffffffff;
        }
        if (pcVar8[-1] != '0') {
          return 0xffffffff;
        }
        *param_5 = 0;
        cVar5 = "0123456789abcdefABCDEFxX+-pPiInN"[lVar6];
        *param_4 = pcVar8 + 1;
        *pcVar8 = cVar5;
        return 0;
      }
    }
    else if (param_2 == 10) goto LAB_03fff660;
    uVar4 = 0;
    cVar5 = "0123456789abcdefABCDEFxX+-pPiInN"[lVar6];
    *param_4 = pcVar8 + 1;
    *pcVar8 = cVar5;
    *param_5 = *param_5 + 1;
  }
  else {
LAB_03fff610:
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


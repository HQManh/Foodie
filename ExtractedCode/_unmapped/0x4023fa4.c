// rea decompile_all
// name: std::__ndk1::__num_put_base::__format_int
// address: 0x4023fa4
// body: available
// range: 0x4023fa4-0x4024047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__num_put_base::__format_int(char*, char const*, bool, unsigned int) */

void std::__ndk1::__num_put_base::__format_int
               (char *param_1,char *param_2,bool param_3,uint param_4)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  
  pcVar1 = param_1;
  if (((((param_4 >> 0xb & 1) != 0) && ((param_4 & 0x4a) != 8)) && ((param_4 & 0x4a) != 0x40)) &&
     (param_3)) {
    pcVar1 = param_1 + 1;
    *param_1 = '+';
  }
  pcVar2 = pcVar1;
  if ((param_4 >> 9 & 1) != 0) {
    pcVar2 = pcVar1 + 1;
    *pcVar1 = '#';
  }
  cVar3 = *param_2;
  while (cVar3 != '\0') {
    param_2 = param_2 + 1;
    *pcVar2 = cVar3;
    pcVar2 = pcVar2 + 1;
    cVar3 = *param_2;
  }
  if ((param_4 & 0x4a) != 0x40) {
    if ((param_4 & 0x4a) == 8) {
      cVar3 = 'x';
      if ((param_4 & 0x4000) != 0) {
        cVar3 = 'X';
      }
      *pcVar2 = cVar3;
      return;
    }
    cVar3 = 'd';
    if (!param_3) {
      cVar3 = 'u';
    }
    *pcVar2 = cVar3;
    return;
  }
  *pcVar2 = 'o';
  return;
}


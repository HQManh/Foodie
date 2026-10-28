// rea decompile_all
// name: std::__ndk1::__num_put_base::__format_float
// address: 0x4024048
// body: available
// range: 0x4024048-0x402414f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__num_put_base::__format_float(char*, char const*, unsigned int) */

bool std::__ndk1::__num_put_base::__format_float(char *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  
  if ((param_3 >> 0xb & 1) != 0) {
    *param_1 = '+';
    param_1 = param_1 + 1;
  }
  if ((param_3 >> 10 & 1) != 0) {
    *param_1 = '#';
    param_1 = param_1 + 1;
  }
  if ((param_3 & 0x104) == 0x104) {
    cVar2 = *param_2;
  }
  else {
    param_1[0] = '.';
    param_1[1] = '*';
    cVar2 = *param_2;
    param_1 = param_1 + 2;
  }
  while (cVar2 != '\0') {
    param_2 = param_2 + 1;
    *param_1 = cVar2;
    param_1 = param_1 + 1;
    cVar2 = *param_2;
  }
  uVar1 = param_3 & 0x104;
  if (uVar1 == 0x100) {
    cVar2 = 'e';
    if ((param_3 & 0x4000) != 0) {
      cVar2 = 'E';
    }
    *param_1 = cVar2;
    return true;
  }
  if (uVar1 == 4) {
    cVar2 = 'f';
    if ((param_3 & 0x4000) != 0) {
      cVar2 = 'F';
    }
    *param_1 = cVar2;
    return true;
  }
  if (uVar1 == 0x104) {
    cVar2 = 'a';
    if ((param_3 & 0x4000) != 0) {
      cVar2 = 'A';
    }
    *param_1 = cVar2;
    return false;
  }
  cVar2 = 'g';
  if ((param_3 & 0x4000) != 0) {
    cVar2 = 'G';
  }
  *param_1 = cVar2;
  return uVar1 != 0x104;
}


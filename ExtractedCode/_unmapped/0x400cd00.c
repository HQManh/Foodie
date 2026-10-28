// rea decompile_all
// name: std::__ndk1::time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put
// address: 0x400cd00
// body: available
// range: 0x400cd00-0x400cdcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, tm const*, char, char) const */

long * __thiscall
std::__ndk1::time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>> *this,
      long *param_2,undefined8 param_3,undefined8 param_4,tm *param_5,char param_6,char param_7)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  char local_94 [100];
  char local_14;
  char local_13;
  char local_12;
  undefined1 local_11;
  
  local_14 = '%';
  local_11 = 0;
  local_13 = param_6;
  local_12 = param_7;
  if (param_7 != '\0') {
    local_13 = param_7;
    local_12 = param_6;
  }
  sVar4 = strftime_l(local_94,100,&local_14,param_5,*(__locale_t *)(this + 0x10));
  if (sVar4 != 0) {
    pcVar5 = local_94;
    do {
      if (param_2 != (long *)0x0) {
        pcVar1 = (char *)param_2[6];
        cVar2 = *pcVar5;
        if (pcVar1 == (char *)param_2[7]) {
          iVar3 = (**(code **)(*param_2 + 0x68))(param_2);
          if (iVar3 == -1) {
            param_2 = (long *)0x0;
          }
        }
        else {
          param_2[6] = (long)(pcVar1 + 1);
          *pcVar1 = cVar2;
        }
      }
      sVar4 = sVar4 - 1;
      pcVar5 = pcVar5 + 1;
    } while (sVar4 != 0);
  }
  return param_2;
}


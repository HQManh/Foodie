// rea decompile_all
// name: std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_out
// address: 0x40208d8
// body: available
// range: 0x40208d8-0x4020a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::codecvt<char32_t, char, mbstate_t>::do_out(mbstate_t&, char32_t const*, char32_t
   const*, char32_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_out
          (codecvt<char32_t,char,mbstate_t> *this,mbstate_t *param_1,wchar32 *param_2,
          wchar32 *param_3,wchar32 **param_4,char *param_5,char *param_6,char **param_7)

{
  wchar32 wVar1;
  byte bVar2;
  byte *pbVar3;
  
  while( true ) {
    while( true ) {
      if (param_3 <= param_2) {
        *param_4 = param_2;
        *param_7 = param_5;
        return 0;
      }
      wVar1 = *param_2;
      if (0x10 < (uint)wVar1 >> 0x10 || (wVar1 & 0xfffff800U) == 0xd800) {
        *param_4 = param_2;
        *param_7 = param_5;
        return 2;
      }
      bVar2 = (byte)wVar1;
      if ((uint)wVar1 < 0x80) break;
      if ((uint)wVar1 < 0x800) {
        if ((long)param_6 - (long)param_5 < 2) goto LAB_04020a0c;
        pbVar3 = (byte *)(param_5 + 2);
        *param_5 = (byte)((uint)wVar1 >> 6) | 0xc0;
        param_5[1] = bVar2 & 0x3f | 0x80;
      }
      else if ((uint)wVar1 >> 0x10 == 0) {
        if ((long)param_6 - (long)param_5 < 3) goto LAB_04020a0c;
        pbVar3 = (byte *)(param_5 + 3);
        *param_5 = (byte)((uint)wVar1 >> 0xc) | 0xe0;
        param_5[1] = (byte)((uint)wVar1 >> 6) & 0x3f | 0x80;
        param_5[2] = bVar2 & 0x3f | 0x80;
      }
      else {
        if ((long)param_6 - (long)param_5 < 4) goto LAB_04020a0c;
        pbVar3 = (byte *)(param_5 + 4);
        *param_5 = (byte)((uint)wVar1 >> 0x12) | 0xf0;
        param_5[1] = (byte)((uint)wVar1 >> 0xc) & 0x3f | 0x80;
        param_5[2] = (byte)((uint)wVar1 >> 6) & 0x3f | 0x80;
        param_5[3] = bVar2 & 0x3f | 0x80;
      }
      param_2 = param_2 + 1;
      param_5 = (char *)pbVar3;
    }
    if ((long)param_6 - (long)param_5 < 1) break;
    *param_5 = bVar2;
    param_2 = param_2 + 1;
    param_5 = param_5 + 1;
  }
LAB_04020a0c:
  *param_4 = param_2;
  *param_7 = param_5;
  return 1;
}


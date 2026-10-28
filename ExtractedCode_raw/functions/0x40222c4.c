// rea decompile_all
// name: std::__ndk1::__codecvt_utf16<char16_t,true>::do_out
// address: 0x40222c4
// body: available
// range: 0x40222c4-0x4022373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__codecvt_utf16<char16_t, true>::do_out(mbstate_t&, char16_t const*, char16_t
   const*, char16_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<char16_t,true>::do_out
          (__codecvt_utf16<char16_t,true> *this,mbstate_t *param_1,wchar16 *param_2,wchar16 *param_3
          ,wchar16 **param_4,char *param_5,char *param_6,char **param_7)

{
  wchar16 wVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(this + 0x10);
  pcVar2 = param_5;
  if (((byte)this[0x18] >> 1 & 1) != 0) {
    if ((long)param_6 - (long)param_5 < 2) goto LAB_040222e0;
    pcVar2 = param_5 + 2;
    param_5[0] = -1;
    param_5[1] = -2;
  }
  if (param_3 <= param_2) {
    *param_4 = param_2;
    *param_7 = pcVar2;
    return 0;
  }
  param_5 = pcVar2;
  lVar4 = (long)param_6 - (long)pcVar2;
  while( true ) {
    wVar1 = *param_2;
    if ((wVar1 & 0xf800U) == 0xd800 || uVar3 < (ushort)wVar1) {
      *param_4 = param_2;
      *param_7 = param_5;
      return 2;
    }
    if (lVar4 < 2) break;
    param_2 = param_2 + 1;
    *param_5 = (char)wVar1;
    pcVar2 = param_5 + 2;
    param_5[1] = (char)((ushort)wVar1 >> 8);
    param_5 = pcVar2;
    lVar4 = lVar4 + -2;
    if (param_3 <= param_2) {
      *param_4 = param_2;
      *param_7 = pcVar2;
      return 0;
    }
  }
LAB_040222e0:
  *param_4 = param_2;
  *param_7 = param_5;
  return 1;
}


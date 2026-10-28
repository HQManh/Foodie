// rea decompile_all
// name: std::__ndk1::__codecvt_utf16<char16_t,false>::do_in
// address: 0x4022134
// body: available
// range: 0x4022134-0x40221c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__codecvt_utf16<char16_t, false>::do_in(mbstate_t&, char const*, char const*, char
   const*&, char16_t*, char16_t*, char16_t*&) const */

undefined1 __thiscall
std::__ndk1::__codecvt_utf16<char16_t,false>::do_in
          (__codecvt_utf16<char16_t,false> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar16 *param_5,wchar16 *param_6,wchar16 **param_7)

{
  wchar16 wVar1;
  undefined1 uVar2;
  wchar16 *pwVar3;
  ulong uVar4;
  
  if (((1 < (long)param_3 - (long)param_2) && ((*(uint *)(this + 0x18) >> 2 & 1) != 0)) &&
     (*param_2 == -2)) {
    param_2 = param_2 + (ulong)(param_2[1] == -1) * 2;
  }
  if (param_2 < param_3 + -1) {
    uVar4 = *(ulong *)(this + 0x10);
    uVar2 = 2;
    pwVar3 = param_5;
    while (param_5 = pwVar3, pwVar3 < param_6) {
      if (((*param_2 & 0xf8U) == 0xd8) ||
         (wVar1 = CONCAT11(*param_2,param_2[1]), uVar4 < (ushort)wVar1)) goto LAB_040221bc;
      param_2 = param_2 + 2;
      param_5 = pwVar3 + 1;
      *pwVar3 = wVar1;
      pwVar3 = param_5;
      if (param_3 + -1 <= param_2) break;
    }
  }
  uVar2 = param_2 < param_3;
LAB_040221bc:
  *param_4 = param_2;
  *param_7 = param_5;
  return uVar2;
}


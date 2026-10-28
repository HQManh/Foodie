// rea decompile_all
// name: std::__ndk1::__codecvt_utf16<char32_t,true>::do_in
// address: 0x4022944
// body: available
// range: 0x4022944-0x4022a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__codecvt_utf16<char32_t, true>::do_in(mbstate_t&, char const*, char const*, char
   const*&, char32_t*, char32_t*, char32_t*&) const */

ulong __thiscall
std::__ndk1::__codecvt_utf16<char32_t,true>::do_in
          (__codecvt_utf16<char32_t,true> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar32 *param_5,wchar32 *param_6,wchar32 **param_7)

{
  byte bVar1;
  ulong uVar2;
  wchar32 *pwVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((((long)param_3 - (long)param_2 < 2) || ((*(uint *)(this + 0x18) >> 2 & 1) == 0)) ||
     (*param_2 != -1)) {
    if (param_3 + -1 <= param_2) goto LAB_04022a28;
  }
  else {
    param_2 = param_2 + (ulong)(param_2[1] == -2) * 2;
    if (param_3 + -1 <= param_2) goto LAB_04022a28;
  }
  uVar4 = *(ulong *)(this + 0x10);
  pwVar3 = param_5;
  do {
    param_5 = pwVar3;
    if (param_6 <= pwVar3) break;
    uVar5 = (ulong)*(ushort *)param_2;
    bVar1 = *(byte *)((long)param_2 + 1) & 0xfc;
    if (bVar1 == 0xd8) {
      if ((long)param_3 - (long)param_2 < 4) {
        *param_4 = param_2;
        *param_7 = pwVar3;
        return 1;
      }
      if (((*(byte *)((long)param_2 + 3) & 0xfc) != 0xdc) ||
         (uVar5 = ((ulong)(byte)*(ushort *)((long)param_2 + 2) |
                   ((ulong)*(byte *)((long)param_2 + 3) & 3) << 8 | (uVar5 & 0x3ff) << 10) + 0x10000
         , uVar4 < uVar5)) goto LAB_04022a3c;
      uVar2 = 4;
    }
    else {
      if (bVar1 == 0xdc) {
LAB_04022a3c:
        *param_4 = param_2;
        *param_7 = pwVar3;
        return 2;
      }
      uVar2 = 2;
      if (uVar4 < uVar5) goto LAB_04022a30;
    }
    param_2 = (char *)((long)param_2 + uVar2);
    param_5 = pwVar3 + 1;
    *pwVar3 = (wchar32)uVar5;
    pwVar3 = param_5;
  } while (param_2 < param_3 + -1);
LAB_04022a28:
  uVar2 = (ulong)(param_2 < param_3);
  pwVar3 = param_5;
LAB_04022a30:
  *param_4 = param_2;
  *param_7 = pwVar3;
  return uVar2;
}


// rea decompile_all
// name: std::__ndk1::__codecvt_utf16<char16_t,false>::do_length
// address: 0x40221f0
// body: available
// range: 0x40221f0-0x40222a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__codecvt_utf16<char16_t, false>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

int __thiscall
std::__ndk1::__codecvt_utf16<char16_t,false>::do_length
          (__codecvt_utf16<char16_t,false> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = (int)param_2;
  if (((1 < (long)param_3 - (long)param_2) && ((*(uint *)(this + 0x18) >> 2 & 1) != 0)) &&
     (*param_2 == -2)) {
    param_2 = param_2 + (ulong)(param_2[1] == -1) * 2;
  }
  if ((param_4 != 0) && (param_2 < param_3 + -1)) {
    uVar3 = 1;
    while (((*param_2 & 0xf8U) != 0xd8 &&
           ((ulong)CONCAT11(*param_2,param_2[1]) <= *(ulong *)(this + 0x10)))) {
      param_2 = param_2 + 2;
      if ((param_3 + -1 <= param_2) || (bVar1 = param_4 <= uVar3, uVar3 = uVar3 + 1, bVar1)) break;
    }
  }
  return (int)param_2 - iVar2;
}


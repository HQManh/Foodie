// rea decompile_all
// name: std::__ndk1::codecvt<char16_t,char8_t,mbstate_t>::do_in
// address: 0x40207f4
// body: available
// range: 0x40207f4-0x402085b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::codecvt<char16_t, char8_t, mbstate_t>::do_in(mbstate_t&, char8_t const*, char8_t
   const*, char8_t const*&, char16_t*, char16_t*, char16_t*&) const */

void __thiscall
std::__ndk1::codecvt<char16_t,char8_t,mbstate_t>::do_in
          (codecvt<char16_t,char8_t,mbstate_t> *this,mbstate_t *param_1,uchar *param_2,
          uchar *param_3,uchar **param_4,wchar16 *param_5,wchar16 *param_6,wchar16 **param_7)

{
  wchar16 *local_30;
  uchar *puStack_28;
  
  local_30 = param_5;
  puStack_28 = param_2;
  FUN_04020274(param_2,param_3,&puStack_28,param_5,param_6,&local_30,0x10ffff,0);
  *param_4 = puStack_28;
  *param_7 = local_30;
  return;
}


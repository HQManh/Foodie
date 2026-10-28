// rea decompile_all
// name: std::__ndk1::messages<wchar_t>::do_get
// address: 0x40137ac
// body: available
// range: 0x40137ac-0x40137d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40137d4 to 0x3fe3994 FUN_03fe3994 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::messages<wchar_t>::do_get(long, int, int, std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&) const */

void std::__ndk1::messages<wchar_t>::do_get
               (long param_1,int param_2,int param_3,basic_string *param_4)

{
  byte *in_x4;
  undefined8 *in_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*in_x4 & 1) == 0) {
    uVar2 = *(undefined8 *)in_x4;
    uVar1 = *(undefined8 *)(in_x4 + 0x10);
    in_x8[1] = *(undefined8 *)(in_x4 + 8);
    *in_x8 = uVar2;
    in_x8[2] = uVar1;
    return;
  }
  FUN_03fe3994();
  return;
}


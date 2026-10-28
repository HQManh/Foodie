// rea decompile_all
// name: CW.Common.CwHelper$$Acos
// address: 0x44ee580
// body: available
// range: 0x44ee580-0x44ee5f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ee5f4 to 0x89db9b0 <EXTERNAL>::acos (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] CW_Common_CwHelper__Acos(double param_1)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined8 extraout_var;
  
  if ((DAT_095183fc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095183fc = 1;
  }
  bVar1 = false;
  bVar2 = true;
  if (-1.0 <= param_1) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(param_1)) {
      bVar1 = param_1 == 1.0;
      bVar2 = 1.0 <= param_1;
    }
  }
  if (bVar2 && !bVar1) {
    return ZEXT816(0);
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  auVar3._0_8_ = acos(param_1);
  auVar3._8_8_ = extraout_var;
  return auVar3;
}


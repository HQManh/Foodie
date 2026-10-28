// rea decompile_all
// name: Datpt.ObserverPattern.EventManager$$EmitEventData
// address: 0x419d294
// body: available
// range: 0x419d294-0x419d30f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x419d30c to 0x419c3f0 Datpt.ObserverPattern.EventManager$$EmitEvent (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_ObserverPattern_EventManager__EmitEventData
               (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  if ((DAT_09516814 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184238);
    DAT_09516814 = 1;
  }
  if (*(int *)(DAT_09184238 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Datpt_ObserverPattern_EventManager__SetData(param_2,param_3);
  Datpt_ObserverPattern_EventManager__EmitEvent(param_1,param_2);
  return;
}


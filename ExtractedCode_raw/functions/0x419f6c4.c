// rea decompile_all
// name: Datpt.ObserverPattern.EventManager.IndexedDataGroup$$ToGameObject
// address: 0x419f6c4
// body: available
// range: 0x419f6c4-0x419f73f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x419f73c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_ObserverPattern_EventManager_IndexedDataGroup__ToGameObject
               (long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((DAT_09516832 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184b68);
    DAT_09516832 = 1;
  }
  lVar1 = Datpt_ObserverPattern_EventManager_IndexedDataGroup__Find(param_1,param_2);
  plVar2 = (long *)(param_1 + 8);
  *plVar2 = lVar1;
  thunk_FUN_03f5d7b8(plVar2,lVar1);
  if ((long *)*plVar2 != (long *)0x0) {
    if (*(long *)*plVar2 != DAT_09184b68) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
  }
  return;
}


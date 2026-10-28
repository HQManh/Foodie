// rea decompile_all
// name: UniRx.Triggers.ObservableTriggerExtensions$$OnBecameVisibleAsObservable
// address: 0x4185458
// body: available
// range: 0x4185458-0x418552b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4185500 to 0x4c3cd88 FUN_04c3cd88 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4185524 to 0x4182614 UniRx.Triggers.ObservableVisibleTrigger$$OnBecameVisibleAsObservable (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4185528 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Triggers_ObservableTriggerExtensions__OnBecameVisibleAsObservable(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((DAT_09516713 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d5518);
    FUN_03f5c2a4(&DAT_091d5198);
    FUN_03f5c2a4(&DAT_09188b78);
    DAT_09516713 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(param_1,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04c3cd88(DAT_091d5198);
    return;
  }
  lVar2 = FUN_04c4e1c8(param_1,DAT_091d5518);
  if (lVar2 != 0) {
    UniRx_Triggers_ObservableVisibleTrigger__OnBecameVisibleAsObservable();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: DG.Tweening.TweenExtensions$$ManualUpdate
// address: 0x453c714
// body: available
// range: 0x453c714-0x453c8a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x453c7b0 to 0x456fe90 DG.Tweening.Core.Debugger$$LogNestedTween (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x453c804 to 0x456fed8 DG.Tweening.Core.Debugger$$LogNullTween (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x453c88c to 0x4574ff4 DG.Tweening.Core.TweenManager$$Update (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x453c8a4 to 0x456fe4c DG.Tweening.Core.Debugger$$LogInvalidTween (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_TweenExtensions__ManualUpdate(undefined4 param_1,undefined4 param_2,long param_3)

{
  if ((DAT_095186ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c158);
    DAT_095186ea = 1;
  }
  if (param_3 == 0) {
    if (DAT_0951877d == '\0') {
      FUN_03f5c2a4(&DAT_091836f8);
      DAT_0951877d = '\x01';
    }
    if (1 < **(int **)(DAT_091836f8 + 0xb8)) {
      DG_Tweening_Core_Debugger__LogNullTween(0,0);
      return;
    }
  }
  else if (*(char *)(param_3 + 0xe8) == '\0') {
    if (DAT_0951877d == '\0') {
      FUN_03f5c2a4(&DAT_091836f8);
      DAT_0951877d = '\x01';
    }
    if (1 < **(int **)(DAT_091836f8 + 0xb8)) {
      DG_Tweening_Core_Debugger__LogInvalidTween(param_3,0);
      return;
    }
  }
  else {
    if (*(char *)(param_3 + 0xe9) == '\0') {
      if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      DG_Tweening_Core_TweenManager__Update(param_1,param_2,param_3,1,0);
      return;
    }
    if (DAT_0951877d == '\0') {
      FUN_03f5c2a4(&DAT_091836f8);
      DAT_0951877d = '\x01';
    }
    if (1 < **(int **)(DAT_091836f8 + 0xb8)) {
      DG_Tweening_Core_Debugger__LogNestedTween(param_3,0);
      return;
    }
  }
  return;
}


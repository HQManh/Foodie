// rea decompile_all
// name: Coffee.UIEffects.UIEffectTweener$$OnEnable
// address: 0x43f57c0
// body: available
// range: 0x43f57c0-0x43f57ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f57e8 to 0x43f5800 Coffee.UIEffects.UIEffectTweener$$Play (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f57f0 to 0x43f584c Coffee.UIEffects.UIEffectTweener$$PlayReverse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f57f8 to 0x43f5824 Coffee.UIEffects.UIEffectTweener$$PlayForward (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffectTweener__OnEnable(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  *(undefined1 *)(param_1 + 0x70) = 1;
  if (iVar1 == 1) {
    Coffee_UIEffects_UIEffectTweener__PlayForward(param_1,*(undefined1 *)(param_1 + 0x50));
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      Coffee_UIEffects_UIEffectTweener__Play(param_1,*(undefined1 *)(param_1 + 0x50));
      return;
    }
    return;
  }
  Coffee_UIEffects_UIEffectTweener__PlayReverse(param_1,*(undefined1 *)(param_1 + 0x50));
  return;
}


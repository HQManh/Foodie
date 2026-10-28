// rea decompile_all
// name: Utilities.UI.UICardFlowLayoutControl$$SetLayoutVertical
// address: 0x4531520
// body: available
// range: 0x4531520-0x45315ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45315d0 to 0x45309f0 Utilities.UI.UICardFlowLayoutControl$$CalculateDesiredAnchoredPositions (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x45315ec to 0x4530834 Utilities.UI.UICardFlowLayoutControl$$UpdateVisualImmediate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UI_UICardFlowLayoutControl__SetLayoutVertical(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((DAT_09518641 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518641 = 1;
  }
  if (*(char *)(param_1 + 0x4c) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
    if ((((uVar1 & 1) == 0) && (*(long *)(param_1 + 0x28) != 0)) &&
       (*(long *)(*(long *)(param_1 + 0x28) + 0x18) != 0)) {
      if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Application__get_isPlaying(0);
      if ((uVar1 & 1) != 0) {
        Utilities_UI_UICardFlowLayoutControl__CalculateDesiredAnchoredPositions(param_1);
        return;
      }
      Utilities_UI_UICardFlowLayoutControl__UpdateVisualImmediate(param_1);
      return;
    }
  }
  return;
}


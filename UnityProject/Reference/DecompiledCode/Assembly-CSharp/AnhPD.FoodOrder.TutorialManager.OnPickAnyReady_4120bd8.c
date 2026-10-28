// rea decompile_all
// name: AnhPD.FoodOrder.TutorialManager$$OnPickAnyReady
// address: 0x4120bd8
// body: available
// range: 0x4120bd8-0x4120cd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4120cd0 to 0x4120a78 AnhPD.FoodOrder.TutorialManager$$TryPlayEventTut (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialManager__OnPickAnyReady(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((DAT_0951628f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c130);
    DAT_0951628f = 1;
  }
  if (*(int *)(DAT_0918c130 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((**(char **)(DAT_0918c130 + 0xb8) != '\0') && (*(char *)(param_1 + 0x60) == '\0')) {
    uVar1 = AnhPD_FoodOrder_TutorialManager__FindSequence(param_1,*(undefined8 *)(param_1 + 0x38));
    if (*(int *)(DAT_0918c130 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918c130);
    }
    lVar2 = AnhPD_FoodOrder_TutorialManager__FindFirstTarget(uVar1,6);
    if (lVar2 != 0) {
      uVar1 = AnhPD_FoodOrder_TutorialTargetResolver__FindBeltItemBehindFront
                        (*(undefined8 *)(lVar2 + 0x18));
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar1,0);
      if ((uVar3 & 1) != 0) {
        AnhPD_FoodOrder_TutorialManager__TryPlayEventTut
                  (param_1,3,*(undefined8 *)(param_1 + 0x38),2);
        return;
      }
    }
  }
  return;
}


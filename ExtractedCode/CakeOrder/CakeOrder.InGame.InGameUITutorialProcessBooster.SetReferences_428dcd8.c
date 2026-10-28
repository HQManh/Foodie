// rea decompile_all
// name: CakeOrder.InGame.InGameUITutorialProcessBooster$$SetReferences
// address: 0x428dcd8
// body: available
// range: 0x428dcd8-0x428dd83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428dd7c to 0x4502f74 Utilities.BoolModifierWithRegisteredSource$$AddModifier (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x428dd80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_InGameUITutorialProcessBooster__SetReferences
               (long param_1,long param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0xd0);
  *plVar3 = param_2;
  thunk_FUN_03f5d7b8(plVar3);
  plVar2 = (long *)(param_1 + 0xe0);
  *plVar2 = param_5;
  *(undefined4 *)(param_1 + 0xd8) = param_3;
  thunk_FUN_03f5d7b8(plVar2,param_5);
  *(undefined4 *)(param_1 + 0xdc) = param_4;
  if ((((*plVar3 != 0) && (*plVar2 != 0)) && (lVar1 = *(long *)(*plVar3 + 0x18), lVar1 != 0)) &&
     ((lVar1 = CakeOrder_InGame_UIInLevelCakeOrder__GetBoosterPlacement
                         (lVar1,*(undefined8 *)(*plVar2 + 0x18),0), lVar1 != 0 &&
      (lVar1 = *(long *)(lVar1 + 0x18), lVar1 != 0)))) {
    CakeOrder_InGame_UIButtonHUD__Lock(lVar1);
    if (*(long *)(lVar1 + 0x70) != 0) {
      Utilities_BoolModifierWithRegisteredSource__AddModifier(*(long *)(lVar1 + 0x70),param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: CakeOrder.InGame.UIInLevelHUDHeartStyle$$ShowElementImmediate
// address: 0x42a9f98
// body: available
// range: 0x42a9f98-0x42aa067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42aa054 to 0x42d7830 CakeOrder.BaseUI.UIElementAbstract$$ShowImmediate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42aa064 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelHUDHeartStyle__ShowElementImmediate(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_09517268 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517268 = 1;
  }
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
    if (*(char *)(param_1 + 0x62) != '\0') {
      plVar1 = *(long **)(param_1 + 0x48);
      if (plVar1 == (long *)0x0) goto LAB_042aa064;
      (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
    }
    if (*(char *)(param_1 + 0x60) != '\0') {
      plVar1 = *(long **)(param_1 + 0x38);
      if (plVar1 == (long *)0x0) goto LAB_042aa064;
      (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
    }
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      CakeOrder_BaseUI_UIElementAbstract__ShowImmediate(*(long *)(param_1 + 0x50),0,0);
      return;
    }
  }
LAB_042aa064:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


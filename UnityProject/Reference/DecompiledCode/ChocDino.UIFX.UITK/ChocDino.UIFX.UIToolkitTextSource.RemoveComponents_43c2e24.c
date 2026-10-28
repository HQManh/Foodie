// rea decompile_all
// name: ChocDino.UIFX.UIToolkitTextSource$$RemoveComponents
// address: 0x43c2e24
// body: available
// range: 0x43c2e24-0x43c2f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c2f68 to 0x4c37370 FUN_04c37370 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43c2f78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_UIToolkitTextSource__RemoveComponents(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((DAT_09517b89 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d4eb0);
    FUN_03f5c2a4(&DAT_091d4ec8);
    FUN_03f5c2a4(&DAT_091d4ed8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517b89 = 1;
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  thunk_FUN_03f5d7b8(param_1 + 0x188,0);
  uVar2 = *(undefined8 *)(param_1 + 400);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 400) == 0) goto LAB_043c2f78;
    UnityEngine_UIElements_PanelSettings__set_themeStyleSheet(*(long *)(param_1 + 400),0,0);
    FUN_04c37370(param_1 + 400,DAT_091d4ec8);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x180) == 0) {
LAB_043c2f78:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_UIElements_UIDocument__set_panelSettings(*(long *)(param_1 + 0x180),0,0);
    FUN_04c37370(param_1 + 0x180,DAT_091d4ed8);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x168);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    FUN_04c37370(param_1 + 0x168,DAT_091d4eb0);
    return;
  }
  return;
}


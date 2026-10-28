// rea decompile_all
// name: IngameDebugConsole.DebugLogManager$$HideLogWindow
// address: 0x7339870
// body: available
// range: 0x7339870-0x73399a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73399a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogManager__HideLogWindow(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((DAT_09520656 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184280);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09520656 = 1;
  }
  if (*(long *)(param_1 + 0x1a0) != 0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts(*(long *)(param_1 + 0x1a0),0,0);
    if (*(long *)(param_1 + 0x1a0) != 0) {
      UnityEngine_CanvasGroup__set_alpha(0,*(long *)(param_1 + 0x1a0),0);
      lVar1 = *(long *)(param_1 + 0x128);
      if (lVar1 != 0) {
        if (*(char *)(lVar1 + 0x1d0) != '\0') {
          UnityEngine_UI_InputField__DeactivateInputField(lVar1,0);
        }
        if (*(long *)(param_1 + 0x1a8) != 0) {
          IngameDebugConsole_DebugLogPopup__Show();
          lVar1 = DAT_09184280;
          *(undefined1 *)(param_1 + 0x1d0) = 0;
          if (*(int *)(lVar1 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_EventSystems_EventSystem__get_current(0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
          if ((uVar3 & 1) != 0) {
            if (*(int *)(DAT_09184280 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar1 = UnityEngine_EventSystems_EventSystem__get_current(0);
            if (lVar1 == 0) goto LAB_073399a0;
            UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar1,0,0);
          }
          lVar1 = *(long *)(param_1 + 0x350);
          if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07339990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28))
            ;
            return;
          }
          return;
        }
      }
    }
  }
LAB_073399a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


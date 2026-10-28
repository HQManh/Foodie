// rea decompile_all
// name: Utilities.UIAnimShowHideControlFull$$ApplyState
// address: 0x4522904
// body: available
// range: 0x4522904-0x4522a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4522a40 to 0x898b15c UnityEngine.CanvasGroup$$set_alpha (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4522a58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIAnimShowHideControlFull__ApplyState(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((DAT_095185d1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095185d1 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) != 0) {
    uVar4 = Utilities_UIAnimShowHideControlFull__AnchoredPosOf(param_1,param_2);
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_04522a58;
    uVar5 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(param_1 + 0x60),0);
    if (((param_3 & 1) != 0) && (*(char *)(param_1 + 0x80) != '\0')) {
      uVar5 = uVar4;
    }
    if (((*(long *)(param_1 + 0x60) == 0) ||
        (UnityEngine_RectTransform__set_anchoredPosition(uVar5,*(long *)(param_1 + 0x60),0),
        param_2 == 0)) || (*(long *)(param_1 + 0x60) == 0)) goto LAB_04522a58;
    UnityEngine_Transform__set_localEulerAngles
              (*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
               *(undefined4 *)(param_2 + 0x20),*(long *)(param_1 + 0x60),0);
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_04522a58;
    UnityEngine_Transform__set_localScale
              (*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),
               *(undefined4 *)(param_2 + 0x2c),*(long *)(param_1 + 0x60),0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x68);
  Utilities_UIAnimShowHideControlFull__AlphaOf(param_1,param_2);
  if (lVar2 != 0) {
    UnityEngine_CanvasGroup__set_alpha(lVar2,0);
    return;
  }
LAB_04522a58:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


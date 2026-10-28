// rea decompile_all
// name: IngameDebugConsole.DebugLogManager$$OnValidateCommand
// address: 0x733bde8
// body: available
// range: 0x733bde8-0x733bfe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733bfe4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint IngameDebugConsole_DebugLogManager__OnValidateCommand
               (long param_1,long param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_09520657 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b138);
    FUN_03f5c2a4(&DAT_0919b140);
    FUN_03f5c2a4(&DAT_0919b148);
    FUN_03f5c2a4(&DAT_09183668);
    DAT_09520657 = 1;
  }
  if ((param_4 & 0xffff) != 10) {
    if ((param_4 & 0xffff) != 9) {
      return param_4;
    }
    uVar2 = System_String__IsNullOrEmpty(param_2,0);
    if ((uVar2 & 1) == 0) {
      plVar1 = (long *)(param_1 + 0x2b0);
      uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x2b0),0);
      if ((uVar2 & 1) != 0) {
        *plVar1 = param_2;
        thunk_FUN_03f5d7b8(plVar1,param_2);
      }
      lVar4 = *plVar1;
      if (*(int *)(DAT_09183668 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = IngameDebugConsole_DebugLogConsole__GetAutoCompleteCommand(lVar4,param_2);
      uVar2 = System_String__IsNullOrEmpty(uVar3,0);
      if (((uVar2 & 1) == 0) &&
         (uVar2 = System_String__op_Inequality(uVar3,param_2,0), (uVar2 & 1) != 0)) {
        *(undefined1 *)(param_1 + 0x2b8) = 1;
        if (*(long *)(param_1 + 0x128) == 0) goto LAB_0733bfe4;
        UnityEngine_UI_InputField__set_text(*(long *)(param_1 + 0x128),uVar3,0);
      }
    }
    return 0;
  }
  if (*(char *)(param_1 + 0x5c) != '\0') {
    if (*(long *)(param_1 + 0x128) == 0) goto LAB_0733bfe4;
    UnityEngine_UI_InputField__set_text
              (*(long *)(param_1 + 0x128),**(undefined8 **)(DAT_09535468 + 0xb8),0);
  }
  if (param_2 == 0) {
LAB_0733bfe4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(param_2 + 0x10) < 1) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x2d8);
  if (lVar4 == 0) goto LAB_0733bfe4;
  if (*(int *)(lVar4 + 0x1c) != 0) {
    uVar3 = FUN_06c66654(lVar4,*(int *)(lVar4 + 0x1c) + -1,DAT_0919b148);
    uVar2 = System_String__op_Inequality(uVar3,param_2,0);
    if ((uVar2 & 1) == 0) goto LAB_0733bf84;
    lVar4 = *(long *)(param_1 + 0x2d8);
    if (lVar4 == 0) goto LAB_0733bfe4;
  }
  FUN_06c666ec(lVar4,param_2,DAT_0919b138);
LAB_0733bf84:
  *(undefined4 *)(param_1 + 0x2e0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  thunk_FUN_03f5d7b8(param_1 + 0x2e8,0);
  if (*(int *)(DAT_09183668 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  IngameDebugConsole_DebugLogConsole__ExecuteCommand(param_2);
  *(undefined1 *)(param_1 + 0x209) = 1;
  return 0;
}


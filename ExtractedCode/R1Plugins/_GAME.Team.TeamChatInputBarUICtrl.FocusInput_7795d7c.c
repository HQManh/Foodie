// rea decompile_all
// name: _GAME.Team.TeamChatInputBarUICtrl$$FocusInput
// address: 0x7795d7c
// body: available
// range: 0x7795d7c-0x7795e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7795e18 to 0x84457ac TMPro.TMP_InputField$$ActivateInputField (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7795e1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamChatInputBarUICtrl__FocusInput(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((DAT_09522dc1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09522dc1 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  plVar3 = *(long **)(param_1 + 0x48);
  if (plVar3 != (long *)0x0) {
    lVar1 = plVar3[0x4c];
    (**(code **)(*plVar3 + 0x398))(plVar3,*(undefined8 *)(*plVar3 + 0x3a0));
    if ((char)lVar1 != '\0') {
      return;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      TMPro_TMP_InputField__ActivateInputField(*(long *)(param_1 + 0x48),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: _GAME.Team.PopupTeamEditCtrl$$UpdateBtnSaveStatus
// address: 0x776d568
// body: available
// range: 0x776d568-0x776d68f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x776d688 to 0x89aeac4 UnityEngine.UI.Selectable$$set_interactable (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x776d68c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_PopupTeamEditCtrl__UpdateBtnSaveStatus(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  if ((DAT_09522c95 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b978);
    DAT_09522c95 = 1;
  }
  if (*(char *)(param_1 + 0x140) == '\0') {
    iVar1 = *(int *)(param_1 + 0x130);
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = **(long **)(DAT_0918b978 + 0xb8);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x38) == 0)) goto LAB_0776d68c;
    if (iVar1 == *(int *)(*(long *)(lVar3 + 0x38) + 0x1c)) {
      iVar1 = *(int *)(param_1 + 0x134);
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar3 = **(long **)(DAT_0918b978 + 0xb8);
        if (lVar3 == 0) goto LAB_0776d68c;
      }
      if (*(long *)(lVar3 + 0x38) == 0) goto LAB_0776d68c;
      if (iVar1 == *(int *)(*(long *)(lVar3 + 0x38) + 0x38)) {
        if ((*(long *)(param_1 + 0x100) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x100) + 0x210), lVar3 == 0)) goto LAB_0776d68c;
        uVar2 = System_String__Equals(lVar3,*(undefined8 *)(param_1 + 0x138),0);
        uVar2 = uVar2 ^ 1;
        goto joined_r0x0776d650;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
joined_r0x0776d650:
  if ((param_2 & 1) != 0) {
    if (*(long *)(param_1 + 0x128) == 0) goto LAB_0776d68c;
    UnityEngine_UI_Selectable__set_interactable
              (*(long *)(param_1 + 0x128),(uVar2 ^ 0xffffffff) & 1,0);
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    UnityEngine_UI_Selectable__set_interactable(*(long *)(param_1 + 0x128),uVar2 & 1,0);
    return;
  }
LAB_0776d68c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


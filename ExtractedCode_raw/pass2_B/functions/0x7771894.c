// rea decompile_all
// name: _GAME.Team.PopupTeamInfoCtrl$$UpdateEditInfo
// address: 0x7771894
// body: available
// range: 0x7771894-0x777198b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7771984 to 0x776e454 _GAME.Team.PopupTeamInfoBaseInfo$$UpdateBaseInfo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7771988 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_PopupTeamInfoCtrl__UpdateEditInfo(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_09522cb4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b978);
    DAT_09522cb4 = 1;
  }
  lVar4 = *(long *)(param_1 + 0xf8);
  if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (((**(long **)(DAT_0918b978 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38), lVar3 != 0)) && (lVar4 != 0)) {
    lVar2 = *(long *)(param_1 + 0xf8);
    *(undefined4 *)(lVar4 + 0x1c) = *(undefined4 *)(lVar3 + 0x1c);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
      thunk_FUN_03f5d7b8();
      if (((**(long **)(DAT_0918b978 + 0xb8) != 0) &&
          (lVar4 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38), lVar4 != 0)) &&
         (*(long *)(param_1 + 0xf8) != 0)) {
        *(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x40) = *(undefined8 *)(lVar4 + 0x40);
        thunk_FUN_03f5d7b8();
        if (((**(long **)(DAT_0918b978 + 0xb8) != 0) &&
            (lVar4 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38), lVar4 != 0)) &&
           (lVar3 = *(long *)(param_1 + 0xf8), lVar3 != 0)) {
          uVar1 = *(undefined4 *)(lVar4 + 0x38);
          lVar2 = *(long *)(param_1 + 0xe8);
          *(undefined4 *)(lVar3 + 0x48) = *(undefined4 *)(lVar4 + 0x48);
          *(undefined4 *)(lVar3 + 0x38) = uVar1;
          if (lVar2 != 0) {
            _GAME_Team_PopupTeamInfoBaseInfo__UpdateBaseInfo(lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


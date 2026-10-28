// rea decompile_all
// name: _GAME.Team.UITabTeamCtrl$$Init
// address: 0x7797908
// body: available
// range: 0x7797908-0x7797aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7797aa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7797aa4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_UITabTeamCtrl__Init(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_34;
  
  if ((DAT_09522dd4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189970);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_09207240);
    DAT_09522dd4 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = FUN_03f5c394(DAT_091805f8,1);
  local_34 = _GAME_Team_SOTeamConfig__get_LevelUnlock(0);
  uVar2 = FUN_03f5c42c(DAT_09535420,&local_34);
  uVar2 = System_String__Format(DAT_09226038,uVar2,0);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    thunk_FUN_03f5d7b8();
    _GAME_Localize_LocalizeHelper__SetTextLocalizedByKey(uVar4,DAT_09207240,lVar1,0);
    if (*(int *)(DAT_09189970 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = _GAME_Bridge_R1RemoteConfig__get_TeamEnableSendHeart(0);
    if ((uVar3 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
      if ((uVar3 & 1) != 0) {
        if ((*(long *)(param_1 + 0x30) == 0) ||
           (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x30),0), lVar1 == 0))
        goto LAB_07797aa0;
        UnityEngine_GameObject__SetActive(lVar1,0,0);
      }
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      _GAME_Team_UITabTeamTabListTeamCtrl__Init();
      if (*(long *)(param_1 + 0x40) != 0) {
        _GAME_Team_UITabTeamTabMyTeamCtrl__Init();
        return;
      }
    }
  }
LAB_07797aa0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


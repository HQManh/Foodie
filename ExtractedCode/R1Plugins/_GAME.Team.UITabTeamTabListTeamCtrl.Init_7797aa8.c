// rea decompile_all
// name: _GAME.Team.UITabTeamTabListTeamCtrl$$Init
// address: 0x7797aa8
// body: available
// range: 0x7797aa8-0x7797c13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7797c0c to 0x8674db4 UnityEngine.Events.UnityEvent$$AddListener (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7797c10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_UITabTeamTabListTeamCtrl__Init(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((DAT_09522de4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dd170);
    FUN_03f5c2a4(&DAT_091dd178);
    FUN_03f5c2a4(&DAT_091dd180);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_09522de4 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    _GAME_Team_TeamHomeTabListTeamMenuCheat__Init();
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(long *)(param_1 + 0x60) != 0) {
      _GAME_Team_UITabTeamTabJoinCtrl__Init();
      if (*(long *)(param_1 + 0x68) != 0) {
        _GAME_Team_UITabTeamTabSearchCtrl__Init();
        if (*(long *)(param_1 + 0x70) != 0) {
          _GAME_Team_UITabTeamTabCreateCtrl__Init();
          if (*(long *)(param_1 + 0x48) != 0) {
            lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 0x100);
            uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
            UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dd178,0);
            if (lVar2 != 0) {
              UnityEngine_Events_UnityEvent__AddListener(lVar2,uVar1,0);
              if (*(long *)(param_1 + 0x50) != 0) {
                lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 0x100);
                uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dd180,0);
                if (lVar2 != 0) {
                  UnityEngine_Events_UnityEvent__AddListener(lVar2,uVar1,0);
                  if (*(long *)(param_1 + 0x58) != 0) {
                    lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 0x100);
                    uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                    UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dd170,0);
                    if (lVar2 != 0) {
                      UnityEngine_Events_UnityEvent__AddListener(lVar2,uVar1,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


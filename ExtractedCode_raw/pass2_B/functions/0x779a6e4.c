// rea decompile_all
// name: _GAME.Team.TeamHomeTabMyTeamChatContent$$Init
// address: 0x779a6e4
// body: available
// range: 0x779a6e4-0x779a907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x779a900 to 0x773f3b4 _GAME.Utils.Helper$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x779a904 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamHomeTabMyTeamChatContent__Init(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_09522dee & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091db088);
    FUN_03f5c2a4(&DAT_091db090);
    FUN_03f5c2a4(&DAT_091db098);
    FUN_03f5c2a4(&DAT_091db080);
    FUN_03f5c2a4(&DAT_0917f6f0);
    FUN_03f5c2a4(&DAT_0918c678);
    FUN_03f5c2a4(&DAT_091be128);
    DAT_09522dee = 1;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x100);
    uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
    UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091db080,0);
    if (lVar4 != 0) {
      UnityEngine_Events_UnityEvent__AddListener(lVar4,uVar1,0);
      if (*(long *)(param_1 + 0x68) != 0) {
        TMPro_TMP_InputField__set_characterLimit(*(long *)(param_1 + 0x68),0x96,0);
        lVar4 = *(long *)(param_1 + 0x68);
        if (lVar4 != 0) {
          lVar5 = *(long *)(lVar4 + 0x1a8);
          *(undefined1 *)(lVar4 + 0x2d1) = 0;
          uVar1 = thunk_FUN_03f9944c(DAT_0917f6f0);
          FUN_06478c04(uVar1,param_1,DAT_091db098,0);
          if (lVar5 != 0) {
            FUN_0647f878(lVar5,uVar1,DAT_091be128);
            uVar1 = *(undefined8 *)(param_1 + 0x70);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
            if ((uVar2 & 1) != 0) {
              uVar1 = *(undefined8 *)(param_1 + 0x68);
              lVar4 = *(long *)(param_1 + 0x70);
              uVar3 = thunk_FUN_03f9944c(DAT_09174980);
              FUN_070a8c30(uVar3,param_1,DAT_091db088,0);
              if (lVar4 == 0) goto LAB_0779a904;
              _GAME_Team_TeamChatInputBarUICtrl__Bind
                        (lVar4,uVar1,uVar3,*(undefined8 *)(param_1 + 0x40));
            }
            if (*(long *)(param_1 + 0x78) != 0) {
              lVar4 = *(long *)(*(long *)(param_1 + 0x78) + 0x100);
              uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
              UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091db090,0);
              if (lVar4 != 0) {
                UnityEngine_Events_UnityEvent__AddListener(lVar4,uVar1,0);
                _GAME_Utils_Helper__SetActive(*(undefined8 *)(param_1 + 0x38),0,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0779a904:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


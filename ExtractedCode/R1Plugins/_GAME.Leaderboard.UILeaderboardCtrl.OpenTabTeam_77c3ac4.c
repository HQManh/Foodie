// rea decompile_all
// name: _GAME.Leaderboard.UILeaderboardCtrl$$OpenTabTeam
// address: 0x77c3ac4
// body: available
// range: 0x77c3ac4-0x77c3d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77c3d78 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77c3d98 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77c3d9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Leaderboard_UILeaderboardCtrl__OpenTabTeam(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_09522f3e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b11a8);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbcf8);
    FUN_03f5c2a4(&DAT_091dcd78);
    FUN_03f5c2a4(&DAT_091dcd80);
    FUN_03f5c2a4(&DAT_09209dc0);
    FUN_03f5c2a4(&DAT_091fea90);
    DAT_09522f3e = 1;
  }
  if (*(int *)(param_1 + 0x88) == 2) {
    return;
  }
  _GAME_Utils_HelperDOTween__CompleteAndKill(*(undefined8 *)(param_1 + 0x80),0);
  if (*(int *)(param_1 + 0x88) == 1) {
    _GAME_Utils_HelperAnimation__ResetAndSetTrigger(*(undefined8 *)(param_1 + 0x40),DAT_091fea90,0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_077c3d9c;
    lVar7 = *(long *)(param_1 + 0x80);
    uVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                      (0,0x3e4ccccd,*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x20),0);
    uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
    puVar4 = &DAT_091dcd80;
LAB_077c3c2c:
    DG_Tweening_TweenCallback___ctor(uVar3,param_1,*puVar4,0);
    uVar2 = FUN_04d956bc(uVar2,uVar3,DAT_091dbcf8);
    lVar6 = DAT_091b11a8;
    if (lVar7 == 0) goto LAB_077c3d9c;
    lVar5 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_077c3d9c;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar7,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
  }
  else if (*(int *)(param_1 + 0x88) == 0) {
    _GAME_Utils_HelperAnimation__ResetAndSetTrigger(*(undefined8 *)(param_1 + 0x38),DAT_091fea90,0);
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_077c3d9c;
    lVar7 = *(long *)(param_1 + 0x80);
    uVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                      (0,0x3e4ccccd,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x20),0);
    uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
    puVar4 = &DAT_091dcd78;
    goto LAB_077c3c2c;
  }
  *(undefined4 *)(param_1 + 0x88) = 2;
  if (*(long *)(param_1 + 0x78) != 0) {
    _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x20),1,0);
    if (*(long *)(param_1 + 0x78) != 0) {
      _GAME_Leaderboard_UILeaderboardTabTeamCtrl__UpdateUIActive();
      _GAME_Utils_HelperAnimation__ResetAndSetTrigger
                (*(undefined8 *)(param_1 + 0x48),DAT_09209dc0,0);
      if (*(long *)(param_1 + 0x78) != 0) {
        lVar6 = *(long *)(param_1 + 0x80);
        uVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                          (0x3f800000,0x3e4ccccd,*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x20),0
                          );
        lVar7 = DAT_091b11a8;
        if (lVar6 != 0) {
          lVar5 = *(long *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
              thunk_FUN_03f5d7b8();
              return;
            }
            FUN_057e0c68(lVar6,uVar2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
LAB_077c3d9c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


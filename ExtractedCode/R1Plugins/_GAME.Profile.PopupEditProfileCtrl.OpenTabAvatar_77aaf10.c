// rea decompile_all
// name: _GAME.Profile.PopupEditProfileCtrl$$OpenTabAvatar
// address: 0x77aaf10
// body: available
// range: 0x77aaf10-0x77ab26b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77ab234 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77ab264 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77ab268 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_PopupEditProfileCtrl__OpenTabAvatar(long *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_09522e58 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b11a8);
    FUN_03f5c2a4(&DAT_091d61b0);
    FUN_03f5c2a4(&DAT_091d61b8);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbcf8);
    FUN_03f5c2a4(&DAT_09209dc0);
    FUN_03f5c2a4(&DAT_091fea90);
    DAT_09522e58 = 1;
  }
  uVar3 = (**(code **)(*param_1 + 0x348))(param_1,*(undefined8 *)(*param_1 + 0x350));
  if (((uVar3 & 1) != 0) || ((int)param_1[0x31] == 0)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x31) = 0;
  _GAME_Profile_PopupEditProfileCtrl__ApplyTabButtonVisuals(param_1);
  _GAME_Utils_HelperDOTween__CompleteAndKill(param_1[0x32],0);
  _GAME_Utils_HelperAnimation__ResetAndSetTrigger(param_1[0x23],DAT_09209dc0,0);
  _GAME_Utils_Helper__SetActive(0x3f800000,param_1[0x24],1,0);
  _GAME_Profile_PopupEditProfileCtrl__ScrollToTopAfterLateUpdate(param_1,param_1[0x26]);
  lVar7 = param_1[0x32];
  uVar4 = DG_Tweening_DOTweenModuleUI__DOFade(0x3f800000,0x3e800000,param_1[0x24],0);
  lVar2 = DAT_091b11a8;
  if (lVar7 != 0) {
    lVar6 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar7,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      uVar3 = _GAME_Utils_Helper__ActiveSelf(param_1[0x29],0);
      if ((uVar3 & 1) != 0) {
        _GAME_Utils_HelperAnimation__ResetAndSetTrigger(param_1[0x28],DAT_091fea90,0);
        lVar7 = param_1[0x32];
        uVar4 = DG_Tweening_DOTweenModuleUI__DOFade(0,0x3e800000,param_1[0x29],0);
        uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar5,param_1,DAT_091d61b0,0);
        uVar4 = FUN_04d956bc(uVar4,uVar5,DAT_091dbcf8);
        lVar2 = DAT_091b11a8;
        if (lVar7 == 0) goto LAB_077ab268;
        lVar6 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_077ab268;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar7,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      uVar3 = _GAME_Utils_Helper__ActiveSelf(param_1[0x2e],0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      _GAME_Utils_HelperAnimation__ResetAndSetTrigger(param_1[0x2d],DAT_091fea90,0);
      lVar7 = param_1[0x32];
      uVar4 = DG_Tweening_DOTweenModuleUI__DOFade(0,0x3e800000,param_1[0x2e],0);
      uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar5,param_1,DAT_091d61b8,0);
      uVar4 = FUN_04d956bc(uVar4,uVar5,DAT_091dbcf8);
      lVar2 = DAT_091b11a8;
      if (lVar7 != 0) {
        lVar6 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (*(uint *)(lVar6 + 0x18) <= uVar1) {
            FUN_057e0c68(lVar7,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            return;
          }
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
          thunk_FUN_03f5d7b8();
          return;
        }
      }
    }
  }
LAB_077ab268:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: _GAME.Profile.PopupEditProfileCtrl$$Open
// address: 0x77a9434
// body: available
// range: 0x77a9434-0x77a987f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a9878 to 0x77aa40c _GAME.Profile.PopupEditProfileCtrl$$ApplyTabButtonState (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77a987c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_PopupEditProfileCtrl__Open(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_09522e4d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09193740);
    FUN_03f5c2a4(&DAT_091d61e0);
    FUN_03f5c2a4(&DAT_091d61e8);
    FUN_03f5c2a4(&DAT_091d61f0);
    FUN_03f5c2a4(&DAT_091d61f8);
    FUN_03f5c2a4(&DAT_091d6200);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0917f6f0);
    FUN_03f5c2a4(&DAT_0918c678);
    FUN_03f5c2a4(&DAT_091be128);
    FUN_03f5c2a4(&DAT_091be138);
    DAT_09522e4d = 1;
  }
  lVar4 = DAT_091896c0;
  iVar1 = *(int *)(DAT_091896c0 + 0xe4);
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (iVar1 == 0) {
    FUN_03f5c424();
    lVar4 = DAT_091896c0;
  }
  uVar3 = **(undefined8 **)(lVar4 + 0xb8);
  uVar2 = thunk_FUN_03f9944c(DAT_09193740);
  _GAME_Profile_ProfileDbModel_EditModel___ctor(uVar2,uVar3);
  *(undefined8 *)(param_1 + 0x198) = uVar2;
  thunk_FUN_03f5d7b8(param_1 + 0x198,uVar2);
  if (*(long *)(param_1 + 0xe8) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0xe8) + 0x1d0);
    uVar2 = thunk_FUN_03f9944c(DAT_0917f6f0);
    FUN_06478c04(uVar2,param_1,DAT_091d61e0,0);
    if (lVar4 != 0) {
      FUN_0647f8b4(lVar4,uVar2,DAT_091be138);
      if ((*(long *)(param_1 + 0x198) != 0) && (*(long *)(param_1 + 0xe8) != 0)) {
        TMPro_TMP_InputField__set_text
                  (*(long *)(param_1 + 0xe8),*(undefined8 *)(*(long *)(param_1 + 0x198) + 0x10),0);
        if (*(long *)(param_1 + 0xe8) != 0) {
          lVar4 = *(long *)(*(long *)(param_1 + 0xe8) + 0x1d0);
          uVar2 = thunk_FUN_03f9944c(DAT_0917f6f0);
          FUN_06478c04(uVar2,param_1,DAT_091d61e0,0);
          if (lVar4 != 0) {
            FUN_0647f878(lVar4,uVar2,DAT_091be128);
            if (*(long *)(param_1 + 0x108) != 0) {
              lVar4 = *(long *)(*(long *)(param_1 + 0x108) + 0x100);
              uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
              UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091d6200,0);
              if (lVar4 != 0) {
                UnityEngine_Events_UnityEvent__RemoveListener(lVar4,uVar2,0);
                if (*(long *)(param_1 + 0x108) != 0) {
                  lVar4 = *(long *)(*(long *)(param_1 + 0x108) + 0x100);
                  uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
                  UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091d6200,0);
                  if (lVar4 != 0) {
                    UnityEngine_Events_UnityEvent__AddListener(lVar4,uVar2,0);
                    if (*(long *)(param_1 + 0x110) != 0) {
                      lVar4 = *(long *)(*(long *)(param_1 + 0x110) + 0x100);
                      uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
                      UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091d61e8,0);
                      if (lVar4 != 0) {
                        UnityEngine_Events_UnityEvent__RemoveListener(lVar4,uVar2,0);
                        if (*(long *)(param_1 + 0x110) != 0) {
                          lVar4 = *(long *)(*(long *)(param_1 + 0x110) + 0x100);
                          uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
                          UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091d61e8,0);
                          if (lVar4 != 0) {
                            UnityEngine_Events_UnityEvent__AddListener(lVar4,uVar2,0);
                            _GAME_Utils_Helper__SetActive
                                      (0x3f800000,*(undefined8 *)(param_1 + 0x120),1,0);
                            _GAME_Profile_PopupEditProfileCtrl__InitListAvatarItem(param_1);
                            _GAME_Profile_PopupEditProfileCtrl__ScrollToTopAfterLateUpdate
                                      (param_1,*(undefined8 *)(param_1 + 0x130));
                            if (*(long *)(param_1 + 0x138) != 0) {
                              lVar4 = *(long *)(*(long *)(param_1 + 0x138) + 0x100);
                              uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
                              UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091d61f0,0);
                              if (lVar4 != 0) {
                                UnityEngine_Events_UnityEvent__RemoveListener(lVar4,uVar2,0);
                                if (*(long *)(param_1 + 0x138) != 0) {
                                  lVar4 = *(long *)(*(long *)(param_1 + 0x138) + 0x100);
                                  uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
                                  UnityEngine_Events_UnityAction___ctor
                                            (uVar2,param_1,DAT_091d61f0,0);
                                  if (lVar4 != 0) {
                                    UnityEngine_Events_UnityEvent__AddListener(lVar4,uVar2,0);
                                    _GAME_Utils_Helper__SetActive
                                              (0,*(undefined8 *)(param_1 + 0x148),0,0);
                                    _GAME_Profile_PopupEditProfileCtrl__InitListFrameItem(param_1);
                                    if (*(long *)(param_1 + 0x160) != 0) {
                                      lVar4 = *(long *)(*(long *)(param_1 + 0x160) + 0x100);
                                      uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
                                      UnityEngine_Events_UnityAction___ctor
                                                (uVar2,param_1,DAT_091d61f8,0);
                                      if (lVar4 != 0) {
                                        UnityEngine_Events_UnityEvent__RemoveListener(lVar4,uVar2,0)
                                        ;
                                        if (*(long *)(param_1 + 0x160) != 0) {
                                          lVar4 = *(long *)(*(long *)(param_1 + 0x160) + 0x100);
                                          uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
                                          UnityEngine_Events_UnityAction___ctor
                                                    (uVar2,param_1,DAT_091d61f8,0);
                                          if (lVar4 != 0) {
                                            UnityEngine_Events_UnityEvent__AddListener
                                                      (lVar4,uVar2,0);
                                            _GAME_Utils_Helper__SetActive
                                                      (0,*(undefined8 *)(param_1 + 0x170),0,0);
                                            _GAME_Profile_PopupEditProfileCtrl__InitListNameFxItem
                                                      (param_1);
                                            _GAME_Profile_PopupEditProfileCtrl__UpdateBtnSaveStatus
                                                      (param_1);
                                            _GAME_Profile_PopupEditProfileCtrl__ApplyTabButtonVisuals
                                                      (param_1);
                                            _GAME_GameUI_PopupBaseCtrl__Open(param_1,0);
                                            _GAME_Profile_PopupEditProfileCtrl__ApplyTabButtonState
                                                      (param_1);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


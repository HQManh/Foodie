// rea decompile_all
// name: _GAME.Profile.PopupProfilePreviewCtrl$$LoadPreviewUIData
// address: 0x77ad454
// body: available
// range: 0x77ad454-0x77adb6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77adb68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_PopupProfilePreviewCtrl__LoadPreviewUIData(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_38;
  
  if ((DAT_09522e6b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09185080);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189970);
    FUN_03f5c2a4(&DAT_09189998);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_09208d18);
    FUN_03f5c2a4(&DAT_092043c0);
    FUN_03f5c2a4(&DAT_0921a310);
    DAT_09522e6b = 1;
  }
  local_38 = 0;
  if ((*(long *)(param_1 + 400) == 0) ||
     (plVar3 = *(long **)(param_1 + 0xe8), plVar3 == (long *)0x0)) goto LAB_077adb68;
  (**(code **)(*plVar3 + 0x178))
            (plVar3,*(undefined4 *)(*(long *)(param_1 + 400) + 0x20),
             *(undefined8 *)(*plVar3 + 0x180));
  if ((*(long *)(param_1 + 400) == 0) ||
     (plVar3 = *(long **)(param_1 + 0xf0), plVar3 == (long *)0x0)) goto LAB_077adb68;
  (**(code **)(*plVar3 + 0x178))
            (plVar3,*(undefined4 *)(*(long *)(param_1 + 400) + 0x24),
             *(undefined8 *)(*plVar3 + 0x180));
  lVar7 = *(long *)(param_1 + 400);
  if (lVar7 == 0) goto LAB_077adb68;
  if (*(int *)(lVar7 + 0x28) == 1) {
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = _GAME_BaseGame_TimerManager__get_Now(0);
    if (*(int *)(DAT_09185080 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09185080);
    }
    lVar5 = _GAME_Utils_HelperTime__ToUnixTimeSeconds(uVar4,0);
    lVar7 = *(long *)(param_1 + 400);
    if (lVar7 == 0) goto LAB_077adb68;
    if (lVar5 <= *(long *)(lVar7 + 0x70)) goto LAB_077ad5d0;
    plVar3 = *(long **)(param_1 + 0xf8);
    if (plVar3 == (long *)0x0) goto LAB_077adb68;
    lVar5 = *plVar3;
    uVar1 = *(undefined4 *)(lVar7 + 0x30);
  }
  else {
LAB_077ad5d0:
    plVar3 = *(long **)(param_1 + 0xf8);
    if (plVar3 == (long *)0x0) goto LAB_077adb68;
    lVar5 = *plVar3;
    uVar1 = *(undefined4 *)(lVar7 + 0x28);
  }
  (**(code **)(lVar5 + 0x178))(plVar3,uVar1,*(undefined8 *)(lVar5 + 0x180));
  if ((*(long *)(param_1 + 400) != 0) &&
     (plVar3 = *(long **)(param_1 + 0xf8), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x188))
              (plVar3,*(undefined8 *)(*(long *)(param_1 + 400) + 0x18),0,
               *(undefined8 *)(*plVar3 + 400));
    lVar7 = *(long *)(param_1 + 400);
    if (lVar7 != 0) {
      lVar5 = *(long *)(param_1 + 0x108);
      if (*(long *)(lVar7 + 0x50) < 1) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = *(undefined4 *)(lVar7 + 0x58);
      }
      uVar4 = _GAME_Team_SOTeamConfig__GetTeamFlag(uVar1,0);
      if (lVar5 != 0) {
        UnityEngine_UI_Image__set_sprite(lVar5,uVar4,0);
        lVar7 = DAT_091c0310;
        lVar5 = *(long *)(param_1 + 400);
        if (lVar5 != 0) {
          lVar8 = *(long *)(param_1 + 0x110);
          if (*(long *)(lVar5 + 0x50) < 1) {
            lVar5 = *(long *)(DAT_091c0310 + 0x38);
            if (lVar5 == 0) {
              FUN_03f95ac8(DAT_091c0310);
              lVar5 = *(long *)(lVar7 + 0x38);
            }
            lVar5 = *(long *)(lVar5 + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03f95a6c();
            }
            if (*(int *)(lVar5 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c();
            }
            _GAME_Localize_LocalizeHelper__SetTextLocalizedByKey
                      (lVar8,DAT_09208d18,**(undefined8 **)(lVar7 + 0xb8),0);
          }
          else {
            uVar4 = _GAME_Localize_LocalizeHelper__OrNoTeam(*(undefined8 *)(lVar5 + 0x60),0);
            if (*(int *)(DAT_09189998 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09189998);
            }
            uVar4 = _GAME_Bridge_R1UserTextSupport__ForDisplay(uVar4,0);
            if (lVar8 == 0) goto LAB_077adb68;
            TMPro_TMP_Text__SetText(lVar8,uVar4,0);
          }
          if (*(long *)(param_1 + 400) != 0) {
            local_44 = *(undefined4 *)(*(long *)(param_1 + 400) + 0x78);
            lVar7 = *(long *)(param_1 + 0x118);
            uVar4 = FUN_03f5c42c(DAT_09535420,&local_44);
            uVar4 = System_String__Format(DAT_09226038,uVar4,0);
            if (lVar7 != 0) {
              TMPro_TMP_Text__SetText(lVar7,uVar4,0);
              uVar4 = *(undefined8 *)(param_1 + 0x128);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = UnityEngine_Object__op_Inequality(uVar4,0,0);
              if ((uVar6 & 1) != 0) {
                if ((*(long *)(param_1 + 0x128) == 0) ||
                   (lVar7 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x128),0),
                   lVar7 == 0)) goto LAB_077adb68;
                UnityEngine_GameObject__SetActive(lVar7,0,0);
              }
              if (*(long *)(param_1 + 400) != 0) {
                local_44 = *(undefined4 *)(*(long *)(param_1 + 400) + 0x80);
                lVar7 = *(long *)(param_1 + 0x138);
                uVar4 = FUN_03f5c42c(DAT_09535420,&local_44);
                uVar4 = System_String__Format(DAT_09226038,uVar4,0);
                if (lVar7 != 0) {
                  TMPro_TMP_Text__SetText(lVar7,uVar4,0);
                  if (*(long *)(param_1 + 400) != 0) {
                    local_48 = *(undefined4 *)(*(long *)(param_1 + 400) + 0x8c);
                    lVar7 = *(long *)(param_1 + 0x140);
                    uVar4 = FUN_03f5c42c(DAT_09535420,&local_48);
                    uVar4 = System_String__Format(DAT_09226038,uVar4,0);
                    if (lVar7 != 0) {
                      TMPro_TMP_Text__SetText(lVar7,uVar4,0);
                      if (*(long *)(param_1 + 400) != 0) {
                        local_4c = *(undefined4 *)(*(long *)(param_1 + 400) + 0x90);
                        lVar7 = *(long *)(param_1 + 0x148);
                        uVar4 = FUN_03f5c42c(DAT_09535420,&local_4c);
                        uVar4 = System_String__Format(DAT_09226038,uVar4,0);
                        if (lVar7 != 0) {
                          TMPro_TMP_Text__SetText(lVar7,uVar4,0);
                          if (*(long *)(param_1 + 400) != 0) {
                            local_50 = *(undefined4 *)(*(long *)(param_1 + 400) + 0x84);
                            lVar7 = *(long *)(param_1 + 0x150);
                            uVar4 = FUN_03f5c42c(DAT_09535420,&local_50);
                            uVar4 = System_String__Format(DAT_09226038,uVar4,0);
                            if (lVar7 != 0) {
                              TMPro_TMP_Text__SetText(lVar7,uVar4,0);
                              if (*(long *)(param_1 + 400) != 0) {
                                local_54 = *(undefined4 *)(*(long *)(param_1 + 400) + 0x88);
                                lVar7 = *(long *)(param_1 + 0x158);
                                uVar4 = FUN_03f5c42c(DAT_09535420,&local_54);
                                uVar4 = System_String__Format(DAT_09226038,uVar4,0);
                                if (lVar7 != 0) {
                                  TMPro_TMP_Text__SetText(lVar7,uVar4,0);
                                  uVar4 = *(undefined8 *)(param_1 + 0x160);
                                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                                    FUN_03f5c424();
                                  }
                                  uVar6 = UnityEngine_Object__op_Inequality(uVar4,0,0);
                                  if ((uVar6 & 1) != 0) {
                                    if (*(long *)(param_1 + 400) == 0) goto LAB_077adb68;
                                    local_44 = *(undefined4 *)(*(long *)(param_1 + 400) + 0x94);
                                    lVar7 = *(long *)(param_1 + 0x160);
                                    uVar4 = FUN_03f5c42c(DAT_09535420,&local_44);
                                    uVar4 = System_String__Format(DAT_09226038,uVar4,0);
                                    if (lVar7 == 0) goto LAB_077adb68;
                                    TMPro_TMP_Text__SetText(lVar7,uVar4,0);
                                  }
                                  uVar4 = *(undefined8 *)(param_1 + 0x168);
                                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                                    FUN_03f5c424();
                                  }
                                  uVar6 = UnityEngine_Object__op_Inequality(uVar4,0,0);
                                  if ((uVar6 & 1) != 0) {
                                    if (*(long *)(param_1 + 400) == 0) goto LAB_077adb68;
                                    local_44 = *(undefined4 *)(*(long *)(param_1 + 400) + 0x98);
                                    lVar7 = *(long *)(param_1 + 0x168);
                                    uVar4 = FUN_03f5c42c(DAT_09535420,&local_44);
                                    uVar4 = System_String__Format(DAT_09226038,uVar4,0);
                                    if (lVar7 == 0) goto LAB_077adb68;
                                    TMPro_TMP_Text__SetText(lVar7,uVar4,0);
                                  }
                                  if (*(int *)(DAT_09189970 + 0xe4) == 0) {
                                    FUN_03f5c424();
                                  }
                                  uVar2 = _GAME_Bridge_R1RemoteConfig__get_TeamEnableSendHeart(0);
                                  _GAME_Profile_PopupProfilePreviewCtrl__SetStatCellActive
                                            (*(undefined8 *)(param_1 + 0x150),uVar2 & 1);
                                  _GAME_Profile_PopupProfilePreviewCtrl__SetStatCellActive
                                            (*(undefined8 *)(param_1 + 0x158),uVar2 & 1);
                                  _GAME_Profile_PopupProfilePreviewCtrl__SetStatCellActive
                                            (*(undefined8 *)(param_1 + 0x160),
                                             (uVar2 ^ 0xffffffff) & 1);
                                  if ((*(long *)(param_1 + 400) != 0) &&
                                     (*(long *)(param_1 + 0x170) != 0)) {
                                    UnityEngine_GameObject__SetActive
                                              (*(long *)(param_1 + 0x170),
                                               0 < *(long *)(*(long *)(param_1 + 400) + 0x68),0);
                                    if (*(long *)(param_1 + 400) != 0) {
                                      lVar7 = *(long *)(param_1 + 0x178);
                                      uVar4 = *(undefined8 *)(*(long *)(param_1 + 400) + 0x68);
                                      if (*(int *)(DAT_09185080 + 0xe4) == 0) {
                                        FUN_03f5c424();
                                      }
                                      local_38 = _GAME_Utils_HelperTime__UnixTimeSecondToDateTime
                                                           (uVar4,0);
                                      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
                                        FUN_03f5c424(DAT_09183548);
                                      }
                                      local_38 = System_DateTime__ToLocalTime(&local_38,0);
                                      uVar4 = System_DateTime__ToString(&local_38,DAT_0921a310,0);
                                      if (lVar7 != 0) {
                                        TMPro_TMP_Text__SetText(lVar7,uVar4,0);
                                        if (*(long *)(param_1 + 400) != 0) {
                                          lVar7 = *(long *)(param_1 + 0x180);
                                          uVar4 = System_String__Concat
                                                            (DAT_092043c0,
                                                             *(undefined8 *)
                                                              (*(long *)(param_1 + 400) + 0x10),0);
                                          if (lVar7 != 0) {
                                            TMPro_TMP_Text__SetText(lVar7,uVar4,0);
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
LAB_077adb68:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


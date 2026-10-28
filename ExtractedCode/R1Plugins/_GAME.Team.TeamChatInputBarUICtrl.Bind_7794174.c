// rea decompile_all
// name: _GAME.Team.TeamChatInputBarUICtrl$$Bind
// address: 0x7794174
// body: available
// range: 0x7794174-0x77945d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77945cc to 0x7794800 _GAME.Team.TeamChatInputBarUICtrl$$FitChatPadding (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77945d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamChatInputBarUICtrl__Bind
               (undefined1 param_1 [16],undefined4 param_2,long param_3,long param_4,
               undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  if ((DAT_09522db9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c56f0);
    FUN_03f5c2a4(&DAT_091c53c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091db050);
    FUN_03f5c2a4(&DAT_091db058);
    FUN_03f5c2a4(&DAT_091db060);
    FUN_03f5c2a4(&DAT_0918b938);
    FUN_03f5c2a4(&DAT_0917f6f0);
    FUN_03f5c2a4(&DAT_0918c678);
    FUN_03f5c2a4(&DAT_091be128);
    FUN_03f5c2a4(&DAT_091be138);
    DAT_09522db9 = 1;
  }
  plVar4 = (long *)(param_3 + 0x48);
  *plVar4 = param_4;
  thunk_FUN_03f5d7b8(plVar4,param_4);
  *(undefined8 *)(param_3 + 0x50) = param_5;
  thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0x50),param_5);
  plVar3 = (long *)*plVar4;
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(DAT_0918b938 + 0x130) <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_0918b938 + 0x130) * 8 + -8) ==
        DAT_0918b938)) {
      plVar3[0x5f] = param_3;
      thunk_FUN_03f5d7b8(plVar3 + 0x5f,param_3);
    }
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(param_6,0,0);
  lVar5 = 0;
  if ((uVar1 & 1) != 0) {
    if (param_6 == 0) goto LAB_077945d0;
    lVar5 = FUN_04a6a8a8(param_6,1,DAT_091c56f0);
  }
  plVar3 = (long *)(param_3 + 0x78);
  lVar6 = *plVar3;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(lVar6,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(lVar5,0,0);
    if ((uVar1 & 1) != 0) {
      if (lVar5 == 0) goto LAB_077945d0;
      *plVar3 = *(long *)(lVar5 + 0x40);
      thunk_FUN_03f5d7b8(plVar3);
      lVar5 = *plVar3;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Inequality(lVar5,0,0);
      if ((uVar1 & 1) != 0) {
        if (*plVar3 == 0) goto LAB_077945d0;
        uVar7 = UnityEngine_RectTransform__get_offsetMin(*plVar3,0);
        *(undefined4 *)(param_3 + 0x80) = uVar7;
        *(undefined4 *)(param_3 + 0x84) = param_2;
      }
      if (param_6 == 0) goto LAB_077945d0;
      lVar5 = FUN_04a6a14c(param_6,DAT_091c53c8);
      plVar3 = (long *)(param_3 + 0x88);
      *plVar3 = lVar5;
      thunk_FUN_03f5d7b8(plVar3,lVar5);
      lVar5 = *plVar3;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Inequality(lVar5,0,0);
      if ((uVar1 & 1) != 0) {
        if ((*plVar3 == 0) || (lVar5 = *(long *)(*plVar3 + 0x20), lVar5 == 0)) goto LAB_077945d0;
        uVar7 = UnityEngine_RectOffset__get_bottom(lVar5,0);
        *(undefined4 *)(param_3 + 0x90) = uVar7;
      }
    }
  }
  if (*plVar4 != 0) {
    lVar5 = *(long *)(*plVar4 + 0x1d0);
    uVar2 = thunk_FUN_03f9944c(DAT_0917f6f0);
    FUN_06478c04(uVar2,param_3,DAT_091db058,0);
    if (lVar5 != 0) {
      FUN_0647f8b4(lVar5,uVar2,DAT_091be138);
      if (*plVar4 != 0) {
        lVar5 = *(long *)(*plVar4 + 0x1d0);
        uVar2 = thunk_FUN_03f9944c(DAT_0917f6f0);
        FUN_06478c04(uVar2,param_3,DAT_091db058,0);
        if (lVar5 != 0) {
          FUN_0647f878(lVar5,uVar2,DAT_091be128);
          if (*(long *)(param_3 + 0x38) != 0) {
            lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x100);
            uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
            UnityEngine_Events_UnityAction___ctor(uVar2,param_3,DAT_091db050,0);
            if (lVar5 != 0) {
              UnityEngine_Events_UnityEvent__RemoveListener(lVar5,uVar2,0);
              if (*(long *)(param_3 + 0x38) != 0) {
                lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x100);
                uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
                UnityEngine_Events_UnityAction___ctor(uVar2,param_3,DAT_091db050,0);
                if (lVar5 != 0) {
                  UnityEngine_Events_UnityEvent__AddListener(lVar5,uVar2,0);
                  if (*(long *)(param_3 + 0x40) != 0) {
                    lVar5 = *(long *)(*(long *)(param_3 + 0x40) + 0x100);
                    uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
                    UnityEngine_Events_UnityAction___ctor(uVar2,param_3,DAT_091db060,0);
                    if (lVar5 != 0) {
                      UnityEngine_Events_UnityEvent__RemoveListener(lVar5,uVar2,0);
                      if (*(long *)(param_3 + 0x40) != 0) {
                        lVar5 = *(long *)(*(long *)(param_3 + 0x40) + 0x100);
                        uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
                        UnityEngine_Events_UnityAction___ctor(uVar2,param_3,DAT_091db060,0);
                        if (lVar5 != 0) {
                          UnityEngine_Events_UnityEvent__AddListener(lVar5,uVar2,0);
                          if (*plVar4 != 0) {
                            _GAME_Team_TeamChatInputBarUICtrl__OnInputChanged
                                      (param_3,*(undefined8 *)(*plVar4 + 0x210));
                            _GAME_Team_TeamChatInputBarUICtrl__UpdateVisible(param_3);
                            _GAME_Team_TeamChatInputBarUICtrl__FitChatPadding(param_3);
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
LAB_077945d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: CakeOrder.Home.UICakeSettingHome$$EnsureLevelListStyles
// address: 0x433f4a4
// body: available
// range: 0x433f4a4-0x433f81f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433f818 to 0x86ccf80 UnityEngine.GUIStyleState$$set_textColor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x433f81c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UICakeSettingHome__EnsureLevelListStyles(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_09517742 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184b20);
    FUN_03f5c2a4(&DAT_09184ac0);
    DAT_09517742 = 1;
  }
  if (*(long *)(param_1 + 0x238) != 0) {
    return;
  }
  if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = UnityEngine_GUI__get_skin(0);
  if (lVar2 != 0) {
    plVar1 = (long *)(param_1 + 0x238);
    uVar3 = UnityEngine_GUISkin__get_box(lVar2,0);
    lVar2 = thunk_FUN_03f9944c(DAT_09184b20);
    UnityEngine_GUIStyle___ctor(lVar2,uVar3,0);
    *plVar1 = lVar2;
    thunk_FUN_03f5d7b8(plVar1,lVar2);
    if (*plVar1 != 0) {
      lVar2 = UnityEngine_GUIStyle__get_normal(*plVar1,0);
      uVar3 = CakeOrder_Home_UICakeSettingHome__CreateGuiTexture
                        (0x3df5c28f,0x3df5c28f,0x3df5c28f,0x3f733333);
      if (lVar2 != 0) {
        UnityEngine_GUIStyleState__set_background(lVar2,uVar3,0);
        lVar2 = UnityEngine_GUI__get_skin(0);
        if (lVar2 != 0) {
          uVar3 = UnityEngine_GUISkin__get_button(lVar2,0);
          uVar4 = thunk_FUN_03f9944c(DAT_09184b20);
          UnityEngine_GUIStyle___ctor(uVar4,uVar3,0);
          *(undefined8 *)(param_1 + 0x240) = uVar4;
          thunk_FUN_03f5d7b8(param_1 + 0x240,uVar4);
          lVar2 = UnityEngine_GUI__get_skin(0);
          if (lVar2 != 0) {
            uVar3 = UnityEngine_GUISkin__get_button(lVar2,0);
            lVar2 = thunk_FUN_03f9944c(DAT_09184b20);
            UnityEngine_GUIStyle___ctor(lVar2,uVar3,0);
            if (lVar2 != 0) {
              UnityEngine_GUIStyle__set_fontStyle(lVar2,1,0);
              plVar1 = (long *)(param_1 + 0x248);
              *(long *)(param_1 + 0x248) = lVar2;
              thunk_FUN_03f5d7b8(plVar1,lVar2);
              if (*(long *)(param_1 + 0x248) != 0) {
                lVar2 = UnityEngine_GUIStyle__get_normal(*(long *)(param_1 + 0x248),0);
                uVar3 = CakeOrder_Home_UICakeSettingHome__CreateGuiTexture
                                  (0x3f800000,0x3f47ae14,0x3e3851ec,0x3f800000);
                if (lVar2 != 0) {
                  UnityEngine_GUIStyleState__set_background(lVar2,uVar3,0);
                  if (*plVar1 != 0) {
                    lVar2 = UnityEngine_GUIStyle__get_hover(*plVar1,0);
                    if (((*plVar1 != 0) &&
                        (lVar5 = UnityEngine_GUIStyle__get_normal(*plVar1,0), lVar5 != 0)) &&
                       (uVar3 = UnityEngine_GUIStyleState__get_background(lVar5,0), lVar2 != 0)) {
                      UnityEngine_GUIStyleState__set_background(lVar2,uVar3,0);
                      if (*plVar1 != 0) {
                        lVar2 = UnityEngine_GUIStyle__get_active(*plVar1,0);
                        if (((*plVar1 != 0) &&
                            (lVar5 = UnityEngine_GUIStyle__get_normal(*plVar1,0), lVar5 != 0)) &&
                           (uVar3 = UnityEngine_GUIStyleState__get_background(lVar5,0), lVar2 != 0))
                        {
                          UnityEngine_GUIStyleState__set_background(lVar2,uVar3,0);
                          if (*plVar1 != 0) {
                            lVar2 = UnityEngine_GUIStyle__get_focused(*plVar1,0);
                            if (((*plVar1 != 0) &&
                                (lVar5 = UnityEngine_GUIStyle__get_normal(*plVar1,0), lVar5 != 0))
                               && (uVar3 = UnityEngine_GUIStyleState__get_background(lVar5,0),
                                  lVar2 != 0)) {
                              UnityEngine_GUIStyleState__set_background(lVar2,uVar3,0);
                              if ((*plVar1 != 0) &&
                                 (lVar2 = UnityEngine_GUIStyle__get_normal(*plVar1,0), lVar2 != 0))
                              {
                                UnityEngine_GUIStyleState__set_textColor(0,0,0,0x3f800000,lVar2,0);
                                if ((*plVar1 != 0) &&
                                   (lVar2 = UnityEngine_GUIStyle__get_hover(*plVar1,0), lVar2 != 0))
                                {
                                  UnityEngine_GUIStyleState__set_textColor(0,0,0,0x3f800000,lVar2,0)
                                  ;
                                  if ((*plVar1 != 0) &&
                                     (lVar2 = UnityEngine_GUIStyle__get_active(*plVar1,0),
                                     lVar2 != 0)) {
                                    UnityEngine_GUIStyleState__set_textColor
                                              (0,0,0,0x3f800000,lVar2,0);
                                    if ((*plVar1 != 0) &&
                                       (lVar2 = UnityEngine_GUIStyle__get_focused(*plVar1,0),
                                       lVar2 != 0)) {
                                      UnityEngine_GUIStyleState__set_textColor
                                                (0,0,0,0x3f800000,lVar2,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


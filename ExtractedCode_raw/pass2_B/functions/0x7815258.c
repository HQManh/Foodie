// rea decompile_all
// name: _GAME.DreamyPass.DreamyPassLevelUICtrl$$Init
// address: 0x7815258
// body: available
// range: 0x7815258-0x781550f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x781550c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_DreamyPassLevelUICtrl__Init(long param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_24;
  
  if ((DAT_095232c0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9a88);
    FUN_03f5c2a4(&DAT_091afa60);
    FUN_03f5c2a4(&DAT_091ac720);
    FUN_03f5c2a4(&DAT_09226038);
    DAT_095232c0 = 1;
  }
  lVar1 = _GAME_DreamyPass_SODreamyPassConfig__get_ListLevel();
  if (lVar1 != 0) {
    lVar1 = FUN_057e0998(lVar1,param_2,DAT_091ac720);
    plVar4 = (long *)(param_1 + 0x98);
    *plVar4 = lVar1;
    thunk_FUN_03f5d7b8(plVar4,lVar1);
    plVar2 = *(long **)(param_1 + 0x30);
    if (plVar2 != (long *)0x0) {
      plVar5 = *(long **)(param_1 + 0x28);
      (**(code **)(*plVar2 + 0x428))(0,plVar2,*(undefined8 *)(*plVar2 + 0x430));
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x428))(0,plVar5,*(undefined8 *)(*plVar5 + 0x430));
        if (*(long *)(param_1 + 0x98) != 0) {
          local_24 = *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x10);
          lVar1 = *(long *)(param_1 + 0x80);
          uVar3 = FUN_03f5c42c(DAT_09535420,&local_24);
          uVar3 = System_String__Format(DAT_09226038,uVar3,0);
          if (lVar1 != 0) {
            TMPro_TMP_Text__SetText(lVar1,uVar3,0);
            if ((*(long *)(param_1 + 0x98) != 0) &&
               (lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x18), lVar1 != 0)) {
              _GAME_Utils_HelperMonoBehaviour__SetActive
                        (*(undefined8 *)(param_1 + 0x38),*(int *)(lVar1 + 0x18) == 1,0);
              if ((*(long *)(param_1 + 0x98) != 0) &&
                 (lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x18), lVar1 != 0)) {
                _GAME_Utils_HelperMonoBehaviour__SetActive
                          (*(undefined8 *)(param_1 + 0x40),1 < *(int *)(lVar1 + 0x18),0);
                if ((*plVar4 != 0) && (lVar1 = *(long *)(*plVar4 + 0x18), lVar1 != 0)) {
                  if (*(int *)(lVar1 + 0x18) == 1) {
                    lVar6 = *(long *)(param_1 + 0x38);
                    uVar3 = FUN_04ae1388(lVar1,DAT_091c9a88);
                    if (lVar6 == 0) goto LAB_0781550c;
                    _GAME_GameUI_RwItemUICtrl__SetData(lVar6,uVar3,0);
                  }
                  else {
                    if (*(long *)(param_1 + 0x40) == 0) goto LAB_0781550c;
                    _GAME_GameUI_RwBoxUICtrl__SetData(*(long *)(param_1 + 0x40),lVar1,0);
                  }
                  lVar1 = *plVar4;
                  if (lVar1 != 0) {
                    if (0 < *(int *)(lVar1 + 0x10)) {
                      if (*(long *)(lVar1 + 0x20) == 0) goto LAB_0781550c;
                      _GAME_Utils_HelperMonoBehaviour__SetActive
                                (*(undefined8 *)(param_1 + 0x58),
                                 *(int *)(*(long *)(lVar1 + 0x20) + 0x18) == 1,0);
                      if ((*(long *)(param_1 + 0x98) == 0) ||
                         (lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x20), lVar1 == 0))
                      goto LAB_0781550c;
                      _GAME_Utils_HelperMonoBehaviour__SetActive
                                (*(undefined8 *)(param_1 + 0x60),1 < *(int *)(lVar1 + 0x18),0);
                      if ((*plVar4 == 0) || (lVar1 = *(long *)(*plVar4 + 0x20), lVar1 == 0))
                      goto LAB_0781550c;
                      if (*(int *)(lVar1 + 0x18) == 1) {
                        lVar6 = *(long *)(param_1 + 0x58);
                        uVar3 = FUN_04ae1388(lVar1,DAT_091c9a88);
                        if (lVar6 == 0) goto LAB_0781550c;
                        _GAME_GameUI_RwItemUICtrl__SetData(lVar6,uVar3,0);
                      }
                      else {
                        if (*(long *)(param_1 + 0x60) == 0) goto LAB_0781550c;
                        _GAME_GameUI_RwBoxUICtrl__SetData(*(long *)(param_1 + 0x60),lVar1,0);
                      }
                    }
                    if (*(long *)(param_1 + 0x20) != 0) {
                      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x20),1,0);
                      _GAME_DreamyPass_DreamyPassLevelUICtrl__UpdateUIData(param_1);
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
LAB_0781550c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


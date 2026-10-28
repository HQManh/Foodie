// rea decompile_all
// name: _GAME.Inbox.PopupInboxDetailCtrl$$InitUIData
// address: 0x77cb6f4
// body: available
// range: 0x77cb6f4-0x77cbba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77cbb94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cbb98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cbb9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cbba0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cbba4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Inbox_PopupInboxDetailCtrl__InitUIData(long param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  long local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_58;
  
  lVar3 = param_1;
  if ((DAT_09522f8e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091a40b8);
    FUN_03f5c2a4(&DAT_091a40c0);
    FUN_03f5c2a4(&DAT_091a40c8);
    FUN_03f5c2a4(&DAT_09185080);
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091afa78);
    FUN_03f5c2a4(&DAT_091afa58);
    FUN_03f5c2a4(&DAT_091afa60);
    FUN_03f5c2a4(&DAT_091d4c48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189998);
    lVar3 = FUN_03f5c2a4(&DAT_092265d0);
    DAT_09522f8e = 1;
  }
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  if ((*(long *)(param_1 + 0x160) != 0) &&
     (plVar4 = *(long **)(param_1 + 0xe8), lVar3 = 0, plVar4 != (long *)0x0)) {
    lVar3 = (**(code **)(*plVar4 + 0x558))
                      (plVar4,*(undefined8 *)(*(long *)(param_1 + 0x160) + 0x38),
                       *(undefined8 *)(*plVar4 + 0x560));
    if (*(long *)(param_1 + 0x160) != 0) {
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x160) + 0x68);
      if (*(int *)(DAT_09185080 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_68 = _GAME_Utils_HelperTime__UnixTimeMillisecondsToDateTime(uVar11,0);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183548);
      }
      local_58 = System_DateTime__ToLocalTime(&local_68,0);
      plVar4 = *(long **)(param_1 + 0xf0);
      local_84 = System_DateTime__get_Day(&local_58,0);
      uVar11 = FUN_03f5c42c(DAT_09535420,&local_84);
      local_88 = System_DateTime__get_Month(&local_58,0);
      uVar5 = FUN_03f5c42c(DAT_09535420,&local_88);
      local_8c = System_DateTime__get_Year(&local_58,0);
      uVar6 = FUN_03f5c42c(DAT_09535420,&local_8c);
      lVar3 = System_String__Format(DAT_092265d0,uVar11,uVar5,uVar6,0);
      if (plVar4 != (long *)0x0) {
        lVar3 = (**(code **)(*plVar4 + 0x558))(plVar4,lVar3,*(undefined8 *)(*plVar4 + 0x560));
        if (*(long *)(param_1 + 0x160) != 0) {
          plVar4 = *(long **)(param_1 + 0xf8);
          uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x160) + 0x28);
          if (*(int *)(DAT_09189998 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar3 = _GAME_Bridge_R1UserTextSupport__ForDisplay(uVar11,0);
          if (plVar4 != (long *)0x0) {
            lVar3 = (**(code **)(*plVar4 + 0x558))(plVar4,lVar3,*(undefined8 *)(*plVar4 + 0x560));
            if ((*(long *)(param_1 + 0x160) != 0) &&
               (plVar4 = *(long **)(param_1 + 0x100), lVar3 = 0, plVar4 != (long *)0x0)) {
              (**(code **)(*plVar4 + 0x558))
                        (plVar4,*(undefined8 *)(*(long *)(param_1 + 0x160) + 0x40),
                         *(undefined8 *)(*plVar4 + 0x560));
              _GAME_Utils_Helper__SetActive(*(undefined8 *)(param_1 + 0x118),0,0);
              _GAME_Utils_Helper__SetActive(*(undefined8 *)(param_1 + 0x130),1,0);
              _GAME_Inbox_PopupInboxDetailCtrl__ClearRewardCells(param_1);
              lVar3 = 0;
              if (*(long *)(param_1 + 0x168) != 0) {
                FUN_057e185c(&local_a8,*(long *)(param_1 + 0x168),DAT_091afa58);
                local_70 = local_98;
                puStack_78 = puStack_a0;
                local_80 = local_a8;
                local_a8 = 0;
                puStack_a0 = &local_80;
                while (uVar7 = FUN_071bd28c(&local_80,DAT_091a40c0), lVar3 = local_70,
                      (uVar7 & 1) != 0) {
                  uVar11 = *(undefined8 *)(param_1 + 0x120);
                  uVar5 = *(undefined8 *)(param_1 + 0x130);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar8 = FUN_04c35338(uVar11,uVar5,DAT_091d4c48);
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar9 = UnityEngine_Component__get_gameObject(lVar8,0);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  UnityEngine_GameObject__SetActive(lVar9,1,0);
                  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  _GAME_GameUI_RwItemUICtrl__SetData
                            (lVar8,*(undefined4 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x14),0);
                  lVar3 = DAT_091afa78;
                  lVar9 = *(long *)(param_1 + 0x128);
                  if (lVar9 == 0) {
LAB_077cbb94:
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar10 = *(long *)(lVar9 + 0x10);
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  if (lVar10 == 0) goto LAB_077cbb94;
                  uVar2 = *(uint *)(lVar9 + 0x18);
                  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                    plVar4 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar4 = lVar8;
                    thunk_FUN_03f5d7b8(plVar4,lVar8);
                  }
                  else {
                    FUN_057e0c68(lVar9,lVar8,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                  }
                }
                FUN_071bd288(&local_80,DAT_091a40b8);
                uVar11 = *(undefined8 *)(param_1 + 0x130);
                if (*(int *)(DAT_09187680 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar3 = UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar11,0);
                if (*(long *)(param_1 + 0x168) != 0) {
                  lVar3 = *(long *)(param_1 + 0x150);
                  if (*(int *)(*(long *)(param_1 + 0x168) + 0x18) < 1) {
                    bVar1 = false;
                  }
                  else {
                    if (*(long *)(param_1 + 0x160) == 0) goto LAB_077cbba4;
                    bVar1 = *(char *)(*(long *)(param_1 + 0x160) + 0x61) == '\0';
                  }
                  _GAME_Utils_HelperButton__SetActive(lVar3,bVar1,0);
                  uVar11 = *(undefined8 *)(param_1 + 0x158);
                  uVar2 = _GAME_Utils_HelperButton__ActiveSelf(*(undefined8 *)(param_1 + 0x150),0);
                  _GAME_Utils_HelperButton__SetActive(uVar11,(uVar2 ^ 0xffffffff) & 1,0);
                  _GAME_Inbox_PopupInboxDetailCtrl__UpdateUILayoutClaimed(param_1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_077cbba4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(lVar3);
}


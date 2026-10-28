// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder.<ConfirmLoseHeartThen>d__86$$MoveNext
// address: 0x42a51b8
// body: available
// range: 0x42a51b8-0x42a5567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a5540 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a5544 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a5548 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a554c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a5550 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a5554 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a5558 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a555c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a5560 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a5564 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder_<ConfirmLoseHeartThen>d__86__MoveNext(int *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_28;
  
  if ((DAT_09517252 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_091c2c30);
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_091b4978);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d8538);
    FUN_03f5c2a4(&DAT_091bc4a8);
    FUN_03f5c2a4(&DAT_091bc4b0);
    FUN_03f5c2a4(&DAT_091bcd70);
    FUN_03f5c2a4(&DAT_091dcbf0);
    DAT_09517252 = 1;
  }
  lVar5 = *(long *)(param_1 + 10);
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
LAB_042a53b8:
    lVar4 = FUN_06209cec(&local_28,DAT_091bc4a8);
  }
  else {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar5 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(*(long *)(lVar5 + 200) + 0x30);
    if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0xe0), lVar4 != 0)) &&
       (0 < *(int *)(lVar4 + 0x20))) {
      uVar1 = FUN_05a8eda4(DAT_091b4978);
      if ((uVar1 & 1) != 0) {
        lVar4 = *(long *)(DAT_091b4970 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = CakeOrder_HeartSystem_HeartSystemController__IsInUnlimitedHeart
                          (**(long **)(lVar4 + 0xb8),0);
        if ((uVar1 & 1) != 0) goto LAB_042a539c;
      }
      plVar2 = *(long **)(lVar5 + 0xf0);
      if ((plVar2 != (long *)0x0) &&
         (uVar1 = (**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(*plVar2 + 0x250)),
         (uVar1 & 1) != 0)) {
        lVar4 = FUN_04d44390(lVar5,*(undefined8 *)(lVar5 + 0xf0),0,0,DAT_091d8538);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_28 = FUN_062ee710(lVar4,DAT_091bcd70);
        uVar1 = FUN_06209cac(&local_28,DAT_091bc4b0);
        if ((uVar1 & 1) == 0) {
          *param_1 = 0;
          *(undefined8 *)(param_1 + 0x10) = local_28;
          thunk_FUN_03f5d7b8(param_1 + 0x10,0);
          FUN_049c2810(param_1 + 2,&local_28,param_1,DAT_091c2c30);
          return;
        }
        goto LAB_042a53b8;
      }
    }
LAB_042a539c:
    lVar4 = 0;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(lVar4,0,0);
  if ((uVar1 & 1) == 0) {
    CakeOrder_TimeControlCakeOrder__StopTime(lVar4,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar5 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x58);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Utilities_BoolModifierWithRegisteredSource__AddModifier(lVar3,lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_BaseUI_UIPopupCakeConfirmDialog__SetCallbacks
              (lVar4,*(undefined8 *)(param_1 + 0xc),0,0);
    uVar6 = *(undefined8 *)(param_1 + 0xe);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0xe),0,0);
    }
    uVar6 = thunk_FUN_03f9944c(DAT_09174a48);
    FUN_070a8c30(uVar6,lVar5,DAT_091dcbf0,0);
    CakeOrder_BaseUI_SceneMainUI__ShowPopupInStack(lVar5,lVar4,uVar6,0,0);
  }
  else {
    lVar5 = *(long *)(param_1 + 0xc);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
    }
    uVar6 = *(undefined8 *)(param_1 + 0xe);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0xe),0,0);
    }
  }
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


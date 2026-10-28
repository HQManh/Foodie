// rea decompile_all
// name: CakeOrder.UI.UIItemUpgradeBuildingOptionCard.<LoadThumbnailAsync>d__37$$MoveNext
// address: 0x42c6cd4
// body: available
// range: 0x42c6cd4-0x42c719b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c7164 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c7168 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c716c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c7170 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c7174 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c7178 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c717c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c7180 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c7184 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c7188 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c718c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c7190 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIItemUpgradeBuildingOptionCard_<LoadThumbnailAsync>d__37__MoveNext(int *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_28;
  
  if ((DAT_09517351 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf658);
    FUN_03f5c2a4(&DAT_091bf6b0);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197a08);
    FUN_03f5c2a4(&DAT_09197a18);
    FUN_03f5c2a4(&DAT_09197a20);
    FUN_03f5c2a4(&DAT_09197a28);
    FUN_03f5c2a4(&DAT_091c2bf8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bc418);
    FUN_03f5c2a4(&DAT_091bc420);
    FUN_03f5c2a4(&DAT_091bcce8);
    FUN_03f5c2a4(&DAT_091dc008);
    DAT_09517351 = 1;
  }
  lVar6 = *(long *)(param_1 + 10);
  local_28 = 0;
  local_58 = 0;
  if (*param_1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar6 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0x58) + 0x38);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_0640f598(lVar6 + 200,DAT_09197a08);
      if ((uVar2 & 1) != 0) {
        uStack_78 = *(undefined8 *)(lVar6 + 0xd0);
        local_80 = *(undefined8 *)(lVar6 + 200);
        local_70 = *(undefined8 *)(lVar6 + 0xd8);
        if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_48 = uStack_78;
        local_50 = local_80;
        local_40 = local_70;
        FUN_04b71ee0(&local_50,DAT_091bf6b0);
      }
      *(undefined8 *)(lVar6 + 0xc0) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0xc0),0);
      if (*(long *)(lVar6 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar6 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_UI_Image__set_sprite
                (*(long *)(lVar6 + 0x90),*(undefined8 *)(*(long *)(lVar6 + 0x58) + 0x38),0);
      if (*(long *)(lVar6 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar6 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_UI_Image__set_sprite
                (*(long *)(lVar6 + 0x98),*(undefined8 *)(*(long *)(lVar6 + 0x58) + 0x38),0);
      uVar5 = DG_Tweening_DOTweenModuleUI__DOFade
                        (0x3f800000,0x3eb33333,*(undefined8 *)(lVar6 + 0xa0),0);
      FUN_04d9656c(uVar5,1,DAT_091dc008);
      goto LAB_042c713c;
    }
    if (*(long *)(lVar6 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar6 + 0xc0) == *(long *)(*(long *)(lVar6 + 0x58) + 0x40)) goto LAB_042c713c;
    uVar2 = FUN_0640f598(lVar6 + 200,DAT_09197a08);
    if ((uVar2 & 1) != 0) {
      uStack_78 = *(undefined8 *)(lVar6 + 0xd0);
      local_80 = *(undefined8 *)(lVar6 + 200);
      local_70 = *(undefined8 *)(lVar6 + 0xd8);
      if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_48 = uStack_78;
      local_50 = local_80;
      local_40 = local_70;
      FUN_04b71ee0(&local_50,DAT_091bf6b0);
    }
    *(undefined8 *)(lVar6 + 0xc0) = 0;
    thunk_FUN_03f5d7b8(lVar6 + 0xc0,0);
    if (*(long *)(lVar6 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_CanvasGroup__set_alpha(0,*(long *)(lVar6 + 0xa0),0);
    if (*(long *)(lVar6 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(lVar6 + 0xc0) = *(undefined8 *)(*(long *)(lVar6 + 0x58) + 0x40);
    thunk_FUN_03f5d7b8(lVar6 + 0xc0);
    plVar3 = *(long **)(lVar6 + 0xc0);
    if ((plVar3 == (long *)0x0) ||
       (uVar2 = (**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(*plVar3 + 0x250)),
       (uVar2 & 1) == 0)) goto LAB_042c713c;
    if (*(long *)(lVar6 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0x58) + 0x40);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04b711d8(&local_80,uVar5,DAT_091bf658);
    uStack_48 = uStack_78;
    local_50 = local_80;
    local_40 = local_70;
    *(undefined8 *)(lVar6 + 0xd0) = uStack_78;
    *(undefined8 *)(lVar6 + 200) = local_80;
    *(undefined8 *)(lVar6 + 0xd8) = local_70;
    thunk_FUN_03f5d7b8(lVar6 + 200,0);
    lVar4 = FUN_0640f884(lVar6 + 200,DAT_09197a28);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_28 = FUN_062ee710(lVar4,DAT_091bcce8);
    uVar2 = FUN_06209cac(&local_28,DAT_091bc420);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_28;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049c31dc(param_1 + 2,&local_28,param_1,DAT_091c2bf8);
      return;
    }
  }
  FUN_06209cec(&local_28,DAT_091bc418);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = FUN_0640f818(lVar6 + 200,DAT_09197a20);
  if (iVar1 == 1) {
    lVar4 = *(long *)(lVar6 + 0x90);
    uVar5 = FUN_0640f7ac(lVar6 + 200,DAT_09197a18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar5,uVar5);
    }
    UnityEngine_UI_Image__set_sprite(lVar4,uVar5,0);
    lVar4 = *(long *)(lVar6 + 0x98);
    uVar5 = FUN_0640f7ac(lVar6 + 200,DAT_09197a18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar5,uVar5);
    }
    UnityEngine_UI_Image__set_sprite(lVar4,uVar5,0);
    uVar5 = DG_Tweening_DOTweenModuleUI__DOFade
                      (0x3f800000,0x3eb33333,*(undefined8 *)(lVar6 + 0xa0),0);
    FUN_04d9656c(uVar5,1,DAT_091dc008);
  }
LAB_042c713c:
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


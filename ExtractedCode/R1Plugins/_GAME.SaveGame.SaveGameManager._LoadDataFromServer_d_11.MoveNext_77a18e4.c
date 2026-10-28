// rea decompile_all
// name: _GAME.SaveGame.SaveGameManager.<LoadDataFromServer>d__11$$MoveNext
// address: 0x77a18e4
// body: available
// range: 0x77a18e4-0x77a1b2f inclusive
// range: 0x77a1b3c-0x77a1c33 inclusive
// range: 0x77a1c68-0x77a2143 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a1b2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a1c28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a1c2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a1c30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a2118 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a2120 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a2124 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a2128 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a212c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a2130 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a2134 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a2138 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077a211c) */

void _GAME_SaveGame_SaveGameManager_<LoadDataFromServer>d__11__MoveNext(uint *param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 local_70 [16];
  undefined4 local_58;
  uint uStack_54;
  undefined1 local_50 [16];
  
  if ((DAT_09522e29 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c2298);
    FUN_03f5c2a4(&DAT_091c1da8);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_09182c50);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b4b80);
    FUN_03f5c2a4(&DAT_0918a598);
    FUN_03f5c2a4(&DAT_0918a5a8);
    FUN_03f5c2a4(&DAT_091ef7b8);
    FUN_03f5c2a4(&DAT_09194160);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_092212e8);
    FUN_03f5c2a4(&DAT_09214280);
    FUN_03f5c2a4(&DAT_09214290);
    FUN_03f5c2a4(&DAT_09214288);
    FUN_03f5c2a4(&DAT_092212f0);
    FUN_03f5c2a4(&DAT_092212f8);
    DAT_09522e29 = 1;
  }
  local_58 = 0;
  uVar3 = local_58;
  uStack_54 = 0;
  uVar13 = *param_1;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  if (2 < uVar13) {
    auVar16 = ZEXT816(0);
    if (*(char *)(*(long *)(DAT_0918a598 + 0xb8) + 1) != '\0') goto LAB_077a206c;
    *(undefined1 *)(*(long *)(DAT_0918a598 + 0xb8) + 1) = 1;
  }
  local_58 = 0;
  if (uVar13 == 0) {
    uStack_54 = param_1[0xd];
    uVar13 = 0xffffffff;
    param_1[0xd] = 0;
    *param_1 = 0xffffffff;
    local_58 = 0;
    goto LAB_077a1b78;
  }
  if (uVar13 == 1) {
    uStack_54 = param_1[0xd];
    uVar13 = 0xffffffff;
    param_1[0xd] = 0;
    *param_1 = 0xffffffff;
    goto LAB_077a1ca4;
  }
  local_58 = uVar3;
  if (uVar13 == 2) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0xe);
    uVar13 = 0xffffffff;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = 0xffffffff;
LAB_077a1e00:
    uVar11 = local_70._0_8_;
    if ((long *)local_70._0_8_ == (long *)0x0) {
      if (local_70[8] != '\0') goto LAB_077a1e90;
LAB_077a1f38:
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(DAT_09214288,0);
      puVar5 = &DAT_092212e8;
    }
    else {
      uVar2 = local_70._10_2_;
      lVar4 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c(lVar4);
      }
      lVar7 = *(long *)uVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar4) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_077a1f24;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(uVar11,lVar4,0);
LAB_077a1f24:
      uVar8 = (*(code *)*puVar5)(uVar11,uVar2,puVar5[1]);
      if ((uVar8 & 1) == 0) goto LAB_077a1f38;
LAB_077a1e90:
      puVar5 = &DAT_092212f8;
    }
    _GAME_SaveGame_SaveGameManager__Track(*puVar5);
  }
  else {
    uVar11 = thunk_FUN_03f9944c(DAT_09194160);
    System_Object___ctor(uVar11,0);
    *(undefined8 *)(param_1 + 6) = uVar11;
    thunk_FUN_03f5d7b8(param_1 + 6,uVar11);
    lVar4 = *(long *)(DAT_091b4b80 + 0x20);
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
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(**(long **)(lVar4 + 0xb8) + 0x20);
    thunk_FUN_03f5d7b8();
    while( true ) {
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar8 = SceneTransitionR1_SceneLoader__get_IsLoadingInProgress(*(long *)(param_1 + 10),0);
      if ((uVar8 & 1) == 0) break;
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = Cysharp_Threading_Tasks_UniTask__Yield(0);
      _local_58 = CONCAT44(uStack_54,uVar3);
      uVar14 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_58,0);
      uStack_54 = uVar14;
      uVar8 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted(&uStack_54,0);
      if ((uVar8 & 1) == 0) {
        *param_1 = 0;
        uVar11 = DAT_091c2298;
        param_1[0xd] = uStack_54;
        FUN_049b3c70(param_1 + 2,&uStack_54,param_1,uVar11);
        return;
      }
LAB_077a1b78:
      Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult(&uStack_54,0);
    }
    lVar4 = *(long *)(param_1 + 6);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *(long *)(param_1 + 10);
    *(undefined1 *)(lVar4 + 0x10) = 0;
    uVar11 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar11,lVar4,DAT_091ef7b8,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    SceneTransitionR1_SceneLoader__ShowTransitionWithoutLoadScene(lVar7,0,uVar11,0);
    uVar14 = UnityEngine_Time__get_realtimeSinceStartup(0);
    param_1[0xc] = uVar14;
    while( true ) {
      if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((*(char *)(*(long *)(param_1 + 6) + 0x10) != '\0') ||
         (fVar15 = (float)UnityEngine_Time__get_realtimeSinceStartup(0),
         5.0 <= fVar15 - (float)param_1[0xc])) break;
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = Cysharp_Threading_Tasks_UniTask__Yield(0);
      _local_58 = CONCAT44(uStack_54,uVar3);
      uVar14 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_58,0);
      uStack_54 = uVar14;
      uVar8 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted(&uStack_54,0);
      if ((uVar8 & 1) == 0) {
        *param_1 = 1;
        uVar11 = DAT_091c2298;
        param_1[0xd] = uStack_54;
        FUN_049b3c70(param_1 + 2,&uStack_54,param_1,uVar11);
        return;
      }
LAB_077a1ca4:
      Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult(&uStack_54,0);
    }
    lVar4 = *(long *)(param_1 + 8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar4 + 0x19) == '\0') {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarning(DAT_09214290,0);
    }
    else {
      if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_SaveGame_SaveGameManager__ApplyR1(*(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x40));
    }
    lVar4 = *(long *)(param_1 + 8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar4 + 0x18) != '\0') {
      if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(*(long *)(lVar4 + 0x10) + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar11 = _GAME_SaveGame_CoreSaveBlock__ToSnapshot();
      if (*(int *)(DAT_09182c50 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar16 = CakeOrder_SaveProfile_CookOrderSaveSync__Set(uVar11,0);
      local_50._0_8_ = 0;
      local_50._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_50 = auVar16;
      thunk_FUN_03f5d7b8(local_50,0);
      local_70 = local_50;
      uVar8 = FUN_0430cf0c(local_70,DAT_0919a588);
      if ((uVar8 & 1) == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 0xe) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        FUN_049ae8b4(param_1 + 2,local_70,param_1,DAT_091c1da8);
        return;
      }
      goto LAB_077a1e00;
    }
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(DAT_09214280,0);
    _GAME_SaveGame_SaveGameManager__Track(DAT_092212f0);
  }
  if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar11 = *(undefined8 *)(lVar4 + 0x48);
  if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09522cb0 == '\0') {
    FUN_03f5c2a4(&DAT_09180dc0);
    DAT_09522cb0 = '\x01';
  }
  if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar12 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
  if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918a5a8);
  }
  _GAME_SaveGame_SaveGameStats__ApplyOnDownload(uVar11,uVar12,0);
  lVar4 = CakeOrderSubsystem_Base_CakeOrderSessionState__get_Instance(0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrderSubsystem_Base_CakeOrderSessionState__ClearAll(lVar4,0);
  CakeOrder_Boot_BootGameCookOrder__LastSetupBeforePlay(0);
  puVar6 = param_1 + 6;
  puVar6[0] = 0;
  puVar6[1] = 0;
  thunk_FUN_03f5d7b8(puVar6,0);
  puVar6 = param_1 + 10;
  puVar6[0] = 0;
  puVar6[1] = 0;
  thunk_FUN_03f5d7b8(puVar6,0);
  auVar16 = local_70;
  if ((int)uVar13 < 0) {
    *(undefined1 *)(*(long *)(DAT_0918a598 + 0xb8) + 1) = 0;
  }
LAB_077a206c:
  cVar1 = DAT_095162d8;
  *param_1 = 0xfffffffe;
  local_70 = auVar16;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar4 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_077a20f4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091866a8,2);
LAB_077a20f4:
    (*(code *)*puVar5)(plVar10,puVar5[1]);
  }
  return;
}


// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder.<CheckShowTut>d__130$$MoveNext
// address: 0x4307f58
// body: available
// range: 0x4307f58-0x43081a3 inclusive
// range: 0x43081c8-0x43084d7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x430815c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4308198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430819c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43081a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43084bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43084c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43084c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43084c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43084cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43084d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43084d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder_<CheckShowTut>d__130__MoveNext(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  
  if ((DAT_095175a1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c1d90);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091c91b8);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_09180a60);
    FUN_03f5c2a4(&DAT_09173a48);
    FUN_03f5c2a4(&DAT_091eb1b0);
    FUN_03f5c2a4(&DAT_09191310);
    FUN_03f5c2a4(&DAT_091bddd8);
    DAT_095175a1 = 1;
  }
  lVar11 = *(long *)(param_1 + 6);
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  if (*param_1 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
    goto LAB_04308288;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09191310);
  System_Object___ctor(lVar3,0);
  plVar10 = (long *)(param_1 + 8);
  *plVar10 = lVar3;
  thunk_FUN_03f5d7b8(plVar10,lVar3);
  if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(*plVar10 + 0x10) = *(undefined8 *)(param_1 + 6);
  thunk_FUN_03f5d7b8();
  lVar3 = *(long *)(DAT_091b4a58 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetHighestMapAndLevelIndexPlayable
                    (**(long **)(lVar3 + 0xb8),0);
  if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(*plVar10 + 0x18) = uVar4;
  uVar4 = DAT_09173a48;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = System_Enum__GetValues(uVar4,0);
  uVar4 = DAT_09180a60;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = thunk_FUN_03f99350(lVar3,DAT_09180a60);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar3,uVar4);
    }
  }
  *(long *)(param_1 + 0xc) = lVar5;
  param_1[10] = 0;
  thunk_FUN_03f5d7b8();
  uVar8 = 0;
  param_1[0xe] = 0;
  while( true ) {
    uVar4 = DAT_09180a60;
    lVar3 = *(long *)(param_1 + 0xc);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar8) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    iVar1 = *(int *)(lVar3 + (long)(int)uVar8 * 4 + 0x20);
    param_1[0xf] = iVar1;
    lVar3 = FUN_03f5c394(uVar4,1);
    uVar4 = DAT_091c91b8;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined4 *)(lVar3 + 0x20) = 2;
    uVar6 = FUN_04aafa18(iVar1,lVar3,uVar4);
    if ((uVar6 & 1) == 0) {
      uVar6 = CakeOrder_UI_HomeUITutorialControl__IsDoneTut(param_1[0xf],0);
      if ((uVar6 & 1) == 0) {
        if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar13 = CakeOrder_Home_HomeControllerCookOrder_<>c__DisplayClass130_0__<CheckShowTut>g__IsCanTriggerTut_1
                            (*(long *)(param_1 + 8),param_1[0xf]);
        local_60._0_8_ = 0;
        local_60._8_8_ = 0;
        if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        local_60 = auVar13;
        thunk_FUN_03f5d7b8(local_60,0);
        local_70 = local_60;
        uVar6 = FUN_0430cf0c(local_70,DAT_0919a588);
        if ((uVar6 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x10) = local_70;
          thunk_FUN_03f5d7b8(param_1 + 0x10,0);
          FUN_0430cff4(param_1 + 2,local_70,param_1,DAT_091c1d90);
          return;
        }
LAB_04308288:
        uVar4 = local_70._0_8_;
        if ((long *)local_70._0_8_ == (long *)0x0) {
          if (local_70[8] != '\0') goto LAB_04308310;
        }
        else {
          uVar2 = local_70._10_2_;
          lVar3 = *(long *)(DAT_0919a580 + 0x20);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03f95a6c();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03f95a6c(lVar3);
          }
          lVar5 = *(long *)uVar4;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar3) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0430838c;
              }
              uVar6 = uVar6 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(uVar4,lVar3,0);
LAB_0430838c:
          uVar6 = (*(code *)*puVar7)(uVar4,uVar2,puVar7[1]);
          if ((uVar6 & 1) != 0) {
LAB_04308310:
            param_1[10] = param_1[0xf];
            break;
          }
        }
      }
    }
    uVar8 = param_1[0xe] + 1;
    param_1[0xe] = uVar8;
  }
  piVar9 = param_1 + 0xc;
  piVar9[0] = 0;
  piVar9[1] = 0;
  thunk_FUN_03f5d7b8(piVar9,0);
  iVar1 = param_1[10];
  if (iVar1 == 0) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar13 = CakeOrder_Home_HomeControllerCookOrder__ShowEntryPopupAfterDelay(lVar11);
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar13._0_8_,auVar13._8_8_,0);
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + 8);
    uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar4,uVar12,DAT_091eb1b0,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar13 = CakeOrder_Home_HomeControllerCookOrder__ShowTutorialUpgrade(lVar11,iVar1,uVar4);
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar13._0_8_,auVar13._8_8_,0);
  }
  *param_1 = -2;
  piVar9 = param_1 + 8;
  piVar9[0] = 0;
  piVar9[1] = 0;
  thunk_FUN_03f5d7b8(piVar9,0);
  if (DAT_095162d8 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091866a8) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0430845c;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091866a8,2);
LAB_0430845c:
    (*(code *)*puVar7)(plVar10,puVar7[1]);
  }
  return;
}


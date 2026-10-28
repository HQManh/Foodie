// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder.<ShowPopUpSaveMe>d__107$$MoveNext
// address: 0x42a6eac
// body: available
// range: 0x42a6eac-0x42a729f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a7210 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a7214 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a7218 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a721c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a7220 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a7224 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a7228 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a722c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a7230 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a729c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder_<ShowPopUpSaveMe>d__107__MoveNext(int *param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int local_74 [3];
  undefined4 local_68;
  undefined8 local_58;
  
  if ((DAT_09517258 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09174bc0);
    FUN_03f5c2a4(&DAT_091c1370);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091d8530);
    FUN_03f5c2a4(&DAT_091bc498);
    FUN_03f5c2a4(&DAT_091bc4a0);
    FUN_03f5c2a4(&DAT_091bcd68);
    FUN_03f5c2a4(&DAT_091f1688);
    FUN_03f5c2a4(&DAT_09195690);
    FUN_03f5c2a4(&DAT_091dcc58);
    DAT_09517258 = 1;
  }
  lVar7 = *(long *)(param_1 + 8);
  local_58 = 0;
  local_68 = 0;
  if (*param_1 == 0) {
    local_58 = *(undefined8 *)(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
  }
  else {
    lVar3 = thunk_FUN_03f9944c(DAT_09195690);
    System_Object___ctor(lVar3,0);
    plVar8 = (long *)(param_1 + 0x10);
    *plVar8 = lVar3;
    thunk_FUN_03f5d7b8(plVar8,lVar3);
    if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar8 + 0x10) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_03f5d7b8();
    if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar8 + 0x20) = *(undefined8 *)(param_1 + 10);
    thunk_FUN_03f5d7b8();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *(long *)(lVar7 + 0x100);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(*plVar8 + 0x18) = *(undefined1 *)(lVar3 + 0x98);
    CakeOrder_InGame_UIInLevelHUDPuzzleStyle__SetSpeedUp(lVar3,0);
    lVar3 = *(long *)(param_1 + 0xc);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    cVar1 = *(char *)(lVar3 + 0x24);
    bVar2 = CakeOrder_InGame_UIInLevelCakeOrder__get_CanWatchBoosterOrSaveMeRewardAds(lVar7);
    local_74[0] = param_1[0xe];
    *(byte *)(lVar3 + 0x24) = bVar2 & cVar1 != '\0';
    if (local_74[0] == 0) {
      puVar6 = (undefined8 *)(lVar7 + 0x148);
    }
    else if (local_74[0] == 1) {
      puVar6 = (undefined8 *)(lVar7 + 0x150);
    }
    else {
      if (local_74[0] != 2) {
        uVar5 = thunk_FUN_03fc39d4(&DAT_0918a5c0);
        uVar5 = FUN_03f5c42c(uVar5,local_74);
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar11 = thunk_FUN_03f9944c();
        uVar9 = thunk_FUN_03fc39d4(&DAT_09221ec0);
        System_ArgumentOutOfRangeException___ctor(uVar11,uVar9,uVar5,0,0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091f1720);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar11,uVar5);
      }
      puVar6 = (undefined8 *)(lVar7 + 0x158);
    }
    lVar3 = FUN_04d44390(lVar7,*puVar6,0,0,DAT_091d8530);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_58 = FUN_062ee710(lVar3,DAT_091bcd68);
    uVar4 = FUN_06209cac(&local_58,DAT_091bc4a0);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x14) = local_58;
      thunk_FUN_03f5d7b8(param_1 + 0x14,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04991bac(param_1 + 2,&local_58,param_1,DAT_091c1370);
      return;
    }
  }
  lVar3 = FUN_06209cec(&local_58,DAT_091bc498);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(lVar7 + 0xd8);
  uVar10 = *(undefined8 *)(param_1 + 0xc);
  uVar5 = thunk_FUN_03f9944c(DAT_09174bc0);
  FUN_070a8c30(uVar5,uVar11,DAT_091f1688,0);
  uVar12 = *(undefined8 *)(param_1 + 0x12);
  uVar11 = thunk_FUN_03f9944c(DAT_09174980);
  FUN_070a8c30(uVar11,lVar7,DAT_091dcc58,0);
  if (lVar3 != 0) {
    CakeOrder_InGame_UIPopupBoosterSaveMeBase__SetUpDataAndEventListeners
              (lVar3,uVar9,uVar10,uVar5,uVar12,uVar11);
    CakeOrder_BaseUI_SceneMainUI__ShowPopupInStack(lVar7,lVar3,0,0,0);
    *param_1 = -2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder.<ShowPopupNewBooster>d__94$$MoveNext
// address: 0x42a8714
// body: available
// range: 0x42a8714-0x42a892f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a8918 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a891c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8920 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8924 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8928 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a892c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder_<ShowPopupNewBooster>d__94__MoveNext(int *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_38;
  
  if ((DAT_0951725d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1390);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091d8560);
    FUN_03f5c2a4(&DAT_091bc4f8);
    FUN_03f5c2a4(&DAT_091bc500);
    FUN_03f5c2a4(&DAT_091bcd98);
    DAT_0951725d = 1;
  }
  lVar5 = *(long *)(param_1 + 8);
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = CakeOrder_InGame_UIInLevelCakeOrder__GetBoosterPlacement
                      (lVar5,*(undefined8 *)(*(long *)(param_1 + 10) + 0x18));
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    thunk_FUN_03f5d7b8();
    lVar2 = FUN_04d44390(lVar5,*(undefined8 *)(lVar5 + 0x178),0,0,DAT_091d8560);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_38 = FUN_062ee710(lVar2,DAT_091bcd98);
    uVar3 = FUN_06209cac(&local_38,DAT_091bc500);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x12) = local_38;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04991ca4(param_1 + 2,&local_38,param_1,DAT_091c1390);
      return;
    }
  }
  lVar2 = FUN_06209cec(&local_38,DAT_091bc4f8);
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (lVar2 != 0) {
    CakeOrder_InGame_UIPopupNewBooster__SetData
              (lVar2,*(undefined8 *)(param_1 + 10),param_1[0xc],*(undefined8 *)(lVar4 + 0x28),0);
    if (lVar5 != 0) {
      CakeOrder_BaseUI_SceneMainUI__ShowPopupInStack(lVar5,lVar2,*(undefined8 *)(param_1 + 0xe),0,0)
      ;
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
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


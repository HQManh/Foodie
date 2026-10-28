// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder.<ShowPauseMenu>d__85$$MoveNext
// address: 0x42a6ba0
// body: available
// range: 0x42a6ba0-0x42a6dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a6dbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6dc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6dc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6dc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a6dcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder_<ShowPauseMenu>d__85__MoveNext(int *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_28;
  
  if ((DAT_09517257 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a28);
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_091c2c18);
    FUN_03f5c2a4(&DAT_091d8508);
    FUN_03f5c2a4(&DAT_091bc448);
    FUN_03f5c2a4(&DAT_091bc450);
    FUN_03f5c2a4(&DAT_091bcd40);
    FUN_03f5c2a4(&DAT_091dcc00);
    FUN_03f5c2a4(&DAT_091dcc08);
    DAT_09517257 = 1;
  }
  lVar4 = *(long *)(param_1 + 10);
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = *(undefined8 *)(lVar4 + 0xe8);
    uVar1 = thunk_FUN_03f9944c(DAT_09174a28);
    FUN_070a8c30(uVar1,lVar4,DAT_091dcc08,0);
    lVar2 = FUN_04d44390(lVar4,uVar5,0,uVar1,DAT_091d8508);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_28 = FUN_062ee710(lVar2,DAT_091bcd40);
    uVar3 = FUN_06209cac(&local_28,DAT_091bc450);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_28;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049c2cf0(param_1 + 2,&local_28,param_1,DAT_091c2c18);
      return;
    }
  }
  uVar1 = FUN_06209cec(&local_28,DAT_091bc448);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar4 + 0xc0) != 0) {
    lVar2 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x58);
    if (lVar2 != 0) {
      Utilities_BoolModifierWithRegisteredSource__AddModifier(lVar2,uVar1,0);
      uVar5 = thunk_FUN_03f9944c(DAT_09174a48);
      FUN_070a8c30(uVar5,lVar4,DAT_091dcc00,0);
      CakeOrder_BaseUI_SceneMainUI__ShowPopupInStack(lVar4,uVar1,uVar5,0,0);
      *param_1 = -2;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


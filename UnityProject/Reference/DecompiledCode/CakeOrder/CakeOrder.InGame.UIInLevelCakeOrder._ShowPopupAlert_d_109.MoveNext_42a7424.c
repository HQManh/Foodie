// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder.<ShowPopupAlert>d__109$$MoveNext
// address: 0x42a7424
// body: available
// range: 0x42a7424-0x42a76c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a76b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a76b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a76bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a76c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a76c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder_<ShowPopupAlert>d__109__MoveNext(int *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 local_48;
  
  if ((DAT_0951725a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_091c1368);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091d8528);
    FUN_03f5c2a4(&DAT_091bc488);
    FUN_03f5c2a4(&DAT_091bc490);
    FUN_03f5c2a4(&DAT_091bcd60);
    FUN_03f5c2a4(&DAT_091f1698);
    FUN_03f5c2a4(&DAT_091956a0);
    DAT_0951725a = 1;
  }
  lVar5 = *(long *)(param_1 + 10);
  local_48 = 0;
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    lVar1 = thunk_FUN_03f9944c(DAT_091956a0);
    System_Object___ctor(lVar1,0);
    plVar6 = (long *)(param_1 + 0x10);
    *plVar6 = lVar1;
    thunk_FUN_03f5d7b8(plVar6,lVar1);
    if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar6 + 0x10) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_03f5d7b8();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = FUN_04d44390(lVar5,*(undefined8 *)(lVar5 + 0x208),0,0,DAT_091d8528);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_48 = FUN_062ee710(lVar1,DAT_091bcd60);
    uVar2 = FUN_06209cac(&local_48,DAT_091bc490);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x12) = local_48;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04991c28(param_1 + 2,&local_48,param_1,DAT_091c1368);
      return;
    }
  }
  lVar1 = FUN_06209cec(&local_48,DAT_091bc488);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  AnhPD_FoodOrder_UIPopupAlert__SetData(lVar1,param_1[0xc],(char)param_1[0xd],0);
  lVar4 = *(long *)(param_1 + 0xe);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),lVar1,*(undefined8 *)(lVar4 + 0x28));
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = thunk_FUN_03f9944c(DAT_09174a48);
  FUN_070a8c30(uVar3,uVar7,DAT_091f1698,0);
  if (lVar5 != 0) {
    CakeOrder_BaseUI_SceneMainUI__ShowPopupInStack(lVar5,lVar1,uVar3,0,0);
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


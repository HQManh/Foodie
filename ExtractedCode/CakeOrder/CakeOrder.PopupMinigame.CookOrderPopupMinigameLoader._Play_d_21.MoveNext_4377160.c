// rea decompile_all
// name: CakeOrder.PopupMinigame.CookOrderPopupMinigameLoader.<Play>d__21$$MoveNext
// address: 0x4377160
// body: available
// range: 0x4377160-0x4377347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4377330 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4377334 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4377338 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437733c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4377340 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4377344 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_CookOrderPopupMinigameLoader_<Play>d__21__MoveNext(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_38;
  
  if ((DAT_09517911 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c13a8);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091c62c0);
    DAT_09517911 = 1;
  }
  lVar6 = *(long *)(param_1 + 8);
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar7 = *(long **)(lVar6 + 0x88);
    uVar1 = *(undefined8 *)(lVar6 + 0x90);
    uVar3 = CakeOrder_PopupMinigame_MinigameRuntimeData__get_NewData();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = (**(code **)(*plVar7 + 0x198))(plVar7,uVar1,uVar3,*(undefined8 *)(*plVar7 + 0x1a0));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_38 = System_Threading_Tasks_Task__GetAwaiter(lVar4,0);
    uVar5 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_38,0);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = local_38;
      thunk_FUN_03f5d7b8(param_1 + 10,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04992008(param_1 + 2,&local_38,param_1,DAT_091c13a8);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_38,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar6 + 0x78) != 0) {
    CakeOrder_PopupMinigame_UIPopupMinigameCookOrder__HideViewCover();
    plVar7 = *(long **)(lVar6 + 0x88);
    lVar4 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(lVar4,lVar6,DAT_091c62c0,0);
    if (plVar7 != (long *)0x0) {
      plVar7[0xe] = lVar4;
      thunk_FUN_03f5d7b8(plVar7 + 0xe,lVar4);
      *(undefined4 *)((long)plVar7 + 0x54) = 2;
      (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
      lVar4 = DAT_09181780;
      *(undefined1 *)(lVar6 + 0x80) = 1;
      iVar2 = *(int *)(lVar4 + 0xe4);
      *param_1 = -2;
      if (iVar2 == 0) {
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


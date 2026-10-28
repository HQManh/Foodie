// rea decompile_all
// name: CakeOrder.Shop.UIOfferPackInGame.<ShowRewardsThenNotify>d__33$$MoveNext
// address: 0x436d154
// body: available
// range: 0x436d154-0x436d3c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x436d3a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436d3a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436d3a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436d3ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436d3b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436d3b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436d3b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436d3bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436d3c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UIOfferPackInGame_<ShowRewardsThenNotify>d__33__MoveNext(int *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_48;
  
  if ((DAT_095178ad & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_091c1428);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091d84e0);
    FUN_03f5c2a4(&DAT_091f17b0);
    FUN_03f5c2a4(&DAT_09195758);
    DAT_095178ad = 1;
  }
  lVar8 = *(long *)(param_1 + 8);
  local_48 = 0;
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    lVar1 = thunk_FUN_03f9944c(DAT_09195758);
    System_Object___ctor(lVar1,0);
    plVar5 = (long *)(param_1 + 0xe);
    *plVar5 = lVar1;
    thunk_FUN_03f5d7b8(plVar5,lVar1);
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar5 + 0x18) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_03f5d7b8();
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar5 + 0x20) = *(undefined8 *)(param_1 + 10);
    thunk_FUN_03f5d7b8();
    lVar1 = *plVar5;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(lVar1 + 0x10) = 0;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *(long *)(lVar8 + 0x48);
    uVar7 = *(undefined8 *)(param_1 + 0xc);
    uVar2 = thunk_FUN_03f9944c(DAT_09174a48);
    FUN_070a8c30(uVar2,lVar1,DAT_091f17b0,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = CakeOrder_BaseUI_SceneMainUI__ShowPopupRewards(lVar6,uVar7,uVar2,0,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_48 = System_Threading_Tasks_Task__GetAwaiter(lVar1,0);
    uVar3 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_48,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = local_48;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_049927c8(param_1 + 2,&local_48,param_1,DAT_091c1428);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_48,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar8 + 0x48) != 0) {
    uVar3 = FUN_04d441ec(*(long *)(lVar8 + 0x48),DAT_091d84e0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_Shop_UIOfferPackInGame_<>c__DisplayClass33_0__<ShowRewardsThenNotify>g__Notify_1();
    }
    piVar4 = param_1 + 0xe;
    piVar4[0] = 0;
    piVar4[1] = 0;
    *param_1 = -2;
    thunk_FUN_03f5d7b8(piVar4,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


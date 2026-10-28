// rea decompile_all
// name: CakeOrder.PopupMinigame.CookOrderPopupMinigameLoader.<<PlayMinigameFromPrefab>g__OnDoneShowPopup|20_1>d$$MoveNext
// address: 0x4376d74
// body: available
// range: 0x4376d74-0x4376e77 inclusive
// range: 0x4376e88-0x4376ff7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4376e6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4376e70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4376e74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4376fe8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4376fec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4376ff0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4376ff4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_CookOrderPopupMinigameLoader_<<PlayMinigameFromPrefab>g__OnDoneShowPopup_20_1>d__MoveNext
               (int *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_40;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  
  if ((DAT_09517910 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2c48);
    FUN_03f5c2a4(&DAT_091c2de0);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_09196218);
    DAT_09517910 = 1;
  }
  lVar4 = *(long *)(param_1 + 10);
  local_34[0] = 0;
  local_38[0] = 0;
  local_40 = 0;
  if (*param_1 == 0) {
    local_34[0] = (undefined1)param_1[0xc];
    *(undefined1 *)(param_1 + 0xc) = 0;
    *param_1 = -1;
    goto LAB_04376ed8;
  }
  if (*param_1 == 1) {
    local_40 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar4 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(lVar4 + 0x68);
    uVar1 = CakeOrder_PopupMinigame_UIPopupMinigameCookOrder__get_ViewSize();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar1,uVar1);
    }
    *(undefined1 *)(lVar5 + 0x54) = 0;
    uVar1 = CakeOrder_PopupMinigame_MinisceneControlCookOrder__IECreateRenderTexture(lVar5);
    UnityEngine_MonoBehaviour__StartCoroutine(lVar5,uVar1,0);
    while( true ) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *(long *)(lVar4 + 0x68);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(lVar5 + 0x54) != '\0') break;
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_38[0] = System_Threading_Tasks_Task__Yield(0);
      local_34[0] = System_Runtime_CompilerServices_YieldAwaitable__GetAwaiter(local_38,0);
      if (*(int *)(DAT_09196218 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__get_IsCompleted
                        (local_34,0);
      if ((uVar3 & 1) == 0) {
        *param_1 = 0;
        uVar1 = DAT_091c2de0;
        *(undefined1 *)(param_1 + 0xc) = local_34[0];
        FUN_049cbe2c(param_1 + 2,local_34,param_1,uVar1);
        return;
      }
LAB_04376ed8:
      if (*(int *)(DAT_09196218 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__GetResult(local_34,0);
    }
    if ((*(long *)(lVar4 + 0x78) == 0) ||
       (lVar2 = *(long *)(*(long *)(lVar4 + 0x78) + 0xe0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_UI_RawImage__set_texture(lVar2,*(undefined8 *)(lVar5 + 0x38),0);
    lVar4 = CakeOrder_PopupMinigame_CookOrderPopupMinigameLoader__Play(lVar4);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_40 = System_Threading_Tasks_Task__GetAwaiter(lVar4,0);
    uVar3 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_40,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0xe) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_049c3e20(param_1 + 2,&local_40,param_1,DAT_091c2c48);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_40,0);
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


// rea decompile_all
// name: _GAME.StageRace.PopupStageRaceUnlockCtrl.<PlayAnimUnlock>d__5$$MoveNext
// address: 0x77f6218
// body: available
// range: 0x77f6218-0x77f64eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77f64c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f64cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f64d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f64d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f64d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f64dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f64e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f64e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f64e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_StageRace_PopupStageRaceUnlockCtrl_<PlayAnimUnlock>d__5__MoveNext(int *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_28;
  
  if ((DAT_0952311f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2ca8);
    FUN_03f5c2a4(&DAT_091ba320);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_092124b8);
    DAT_0952311f = 1;
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
    if (*param_1 == 1) {
      local_28 = *(undefined8 *)(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
      goto LAB_077f63fc;
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_Utils_HelperAnimation__ResetAndSetTrigger(*(undefined8 *)(lVar4 + 0xe8),DAT_092124b8,0);
    _GAME_Device_AudioController__PlaySound(0x3f800000,7,0);
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = System_Threading_Tasks_Task__Delay(0x2ee,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_28 = System_Threading_Tasks_Task__GetAwaiter(lVar1,0);
    uVar2 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_28,0);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_28;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049c5b90(param_1 + 2,&local_28,param_1,DAT_091c2ca8);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_28,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar4 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = UnityEngine_Component__get_transform(*(long *)(lVar4 + 0xf8),0);
  lVar1 = *(long *)(DAT_091ba320 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  if (**(long **)(lVar1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = UnityEngine_Component__get_transform(**(long **)(lVar1 + 0xb8),0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  UnityEngine_Transform__get_position(lVar1,0);
  DG_Tweening_ShortcutExtensions__DOMove(uVar3,0,0);
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = System_Threading_Tasks_Task__Delay(1000,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_28 = System_Threading_Tasks_Task__GetAwaiter(lVar1,0);
  uVar2 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_28,0);
  if ((uVar2 & 1) == 0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0xc) = local_28;
    thunk_FUN_03f5d7b8(param_1 + 0xc,0);
    FUN_049c5b90(param_1 + 2,&local_28,param_1,DAT_091c2ca8);
    return;
  }
LAB_077f63fc:
  System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_28,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  _GAME_Utils_HelperAnimation__SetActive(*(undefined8 *)(lVar4 + 0xf0),1,0);
  if (*(long *)(lVar4 + 0xf8) != 0) {
    UnityEngine_UI_Selectable__set_interactable(*(long *)(lVar4 + 0xf8),1,0);
    *param_1 = -2;
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


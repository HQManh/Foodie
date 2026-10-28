// rea decompile_all
// name: _GAME.WeeklyContest.PopupWeeklyContestUnlockCtrl.<PlayAnimUnlock>d__9$$MoveNext
// address: 0x77dfbfc
// body: available
// range: 0x77dfbfc-0x77dff73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77dff54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77dff58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77dff5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77dff60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77dff64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77dff68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77dff6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77dff70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_WeeklyContest_PopupWeeklyContestUnlockCtrl_<PlayAnimUnlock>d__9__MoveNext(int *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_70;
  int *piStack_68;
  long *local_60;
  undefined4 local_48;
  undefined8 local_40;
  long local_38;
  int local_24;
  
  if ((DAT_0952304e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2cc0);
    FUN_03f5c2a4(&DAT_091b76a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_0918c3f0);
    FUN_03f5c2a4(&DAT_092124b8);
    DAT_0952304e = 1;
  }
  local_24 = *param_1;
  local_38 = *(long *)(param_1 + 10);
  piStack_68 = &local_24;
  local_70 = 0;
  local_60 = &local_38;
  local_40 = 0;
  local_48 = 0;
  if (local_24 == 0) {
    local_40 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    local_24 = -1;
    *param_1 = -1;
LAB_077dfd4c:
    System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_40,0);
    lVar1 = local_38;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(lVar1,0,0);
    if ((uVar2 & 1) != 0) {
      uVar4 = 7;
      goto LAB_077dff08;
    }
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_38 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = UnityEngine_Component__get_transform(*(long *)(local_38 + 0xf8),0);
    if (*(int *)(DAT_0918c3f0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522caf == '\0') {
      FUN_03f5c2a4(&DAT_0918c3f0);
      DAT_09522caf = '\x01';
    }
    if (*(int *)(DAT_0918c3f0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_0918c3f0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = *(long *)(**(long **)(DAT_0918c3f0 + 0xb8) + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = _GAME_GameUI_HomeMenuButtonRef__get_transform(lVar1,0);
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
    local_40 = System_Threading_Tasks_Task__GetAwaiter(lVar1,0);
    uVar2 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_40,0);
    if ((uVar2 & 1) == 0) {
      local_24 = 1;
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0xc) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049c6304(param_1 + 2,&local_40,param_1,DAT_091c2cc0);
      goto LAB_077dff04;
    }
  }
  else {
    if (local_24 != 1) {
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Utils_HelperAnimation__ResetAndSetTrigger
                (*(undefined8 *)(local_38 + 0xe8),DAT_092124b8,0);
      _GAME_Device_AudioController__PlaySound(0x3f800000,7,0);
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar1 = System_Threading_Tasks_Task__Delay(0x2ee,0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_40 = System_Threading_Tasks_Task__GetAwaiter(lVar1,0);
      uVar2 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_40,0);
      if ((uVar2 & 1) != 0) goto LAB_077dfd4c;
      local_24 = 0;
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049c6304(param_1 + 2,&local_40,param_1,DAT_091c2cc0);
LAB_077dff04:
      uVar4 = 5;
      goto LAB_077dff08;
    }
    local_40 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    local_24 = -1;
    *param_1 = -1;
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_40,0);
  uVar4 = 0xb;
LAB_077dff08:
  FUN_03ebf0e8(&local_70);
  if ((uVar4 < 0xc) && ((1 << (ulong)uVar4 & 0x881U) != 0)) {
    *param_1 = -2;
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  }
  return;
}


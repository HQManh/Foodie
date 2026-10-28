// rea decompile_all
// name: CakeOrder.PopupMinigame.CookOrderPopupMinigameLoader.<ShowMinigame>d__18$$MoveNext
// address: 0x4378320
// body: available
// range: 0x4378320-0x43785c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43785b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43785b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43785bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43785c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_CookOrderPopupMinigameLoader_<ShowMinigame>d__18__MoveNext
               (int *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_28;
  
  if ((DAT_09517917 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c13c0);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091b8e18);
    FUN_03f5c2a4(&DAT_0918ee40);
    FUN_03f5c2a4(&DAT_092059b8);
    DAT_09517917 = 1;
  }
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    lVar3 = *(long *)(param_1 + 0xc);
    uVar5 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      uVar5 = System_String__Format(DAT_092059b8,*(undefined8 *)(param_1 + 8),0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(uVar5,0);
      lVar3 = *(long *)(param_1 + 10);
      if (lVar3 != 0) {
        uVar5 = CakeOrder_PopupMinigame_MinigameRuntimeData__get_NewData();
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),uVar5,*(undefined8 *)(lVar3 + 0x28));
      }
      goto LAB_043784b0;
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar3 + 0x38) == '\0') {
      lVar4 = *(long *)(lVar3 + 0x20);
      lVar3 = thunk_FUN_03f9944c(DAT_0918ee40);
      System_Object___ctor(lVar3,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_1 + 8);
      thunk_FUN_03f5d7b8();
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_1 + 10);
      thunk_FUN_03f5d7b8();
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_1 + 0xe);
      thunk_FUN_03f5d7b8();
      *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(param_1 + 0x10);
      thunk_FUN_03f5d7b8();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_05e2cfd8(lVar4,lVar3,DAT_091b8e18);
      goto LAB_043784b0;
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 10);
    *(undefined1 *)(lVar3 + 0x38) = 0;
    lVar3 = CakeOrder_PopupMinigame_CookOrderPopupMinigameLoader__PlayMinigameFromPrefab
                      (lVar3,uVar5,uVar1,*(undefined8 *)(param_1 + 0xe),
                       *(undefined8 *)(param_1 + 0x10));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_28 = System_Threading_Tasks_Task__GetAwaiter(lVar3,0);
    uVar2 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_28,0);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x12) = local_28;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_0499217c(param_1 + 2,&local_28,param_1,DAT_091c13c0);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_28,0);
LAB_043784b0:
  lVar3 = DAT_09181780;
  *param_1 = -2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


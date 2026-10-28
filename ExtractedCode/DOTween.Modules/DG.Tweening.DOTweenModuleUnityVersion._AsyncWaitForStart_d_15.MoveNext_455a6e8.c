// rea decompile_all
// name: DG.Tweening.DOTweenModuleUnityVersion.<AsyncWaitForStart>d__15$$MoveNext
// address: 0x455a6e8
// body: available
// range: 0x455a6e8-0x455a7e3 inclusive
// range: 0x455a7f0-0x455a8ef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x455a7e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x455a8ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTweenModuleUnityVersion_<AsyncWaitForStart>d__15__MoveNext(int *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  if ((DAT_095187f1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c16d8);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_09196218);
    DAT_095187f1 = 1;
  }
  local_24[0] = 0;
  local_28[0] = 0;
  if (*param_1 == 0) {
    local_24[0] = (undefined1)param_1[10];
    *(undefined1 *)(param_1 + 10) = 0;
    *param_1 = -1;
    goto LAB_0455a868;
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)(lVar2 + 0xe8) == '\0') {
    if (DAT_0951877d == '\0') {
      FUN_03f5c2a4(&DAT_091836f8);
      DAT_0951877d = '\x01';
    }
    if (0 < **(int **)(DAT_091836f8 + 0xb8)) {
      DG_Tweening_Core_Debugger__LogInvalidTween(*(undefined8 *)(param_1 + 8),0);
    }
LAB_0455a7f0:
    lVar2 = DAT_09181780;
    *param_1 = -2;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  }
  else {
    while( true ) {
      if ((*(char *)(lVar2 + 0xe8) == '\0') || (*(char *)(lVar2 + 0x102) != '\0'))
      goto LAB_0455a7f0;
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_28[0] = System_Threading_Tasks_Task__Yield(0);
      local_24[0] = System_Runtime_CompilerServices_YieldAwaitable__GetAwaiter(local_28,0);
      if (*(int *)(DAT_09196218 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__get_IsCompleted
                        (local_24,0);
      lVar2 = DAT_09181780;
      if ((uVar1 & 1) == 0) break;
LAB_0455a868:
      if (*(int *)(DAT_09196218 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__GetResult(local_24,0);
      lVar2 = *(long *)(param_1 + 8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 10) = local_24[0];
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_049952e8(param_1 + 2,local_24,param_1,DAT_091c16d8);
  }
  return;
}


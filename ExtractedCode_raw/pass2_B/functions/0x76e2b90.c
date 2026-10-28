// rea decompile_all
// name: Newtonsoft.Json.Linq.JObject.<<WriteToAsync>g__AwaitProperties|0_0>d$$MoveNext
// address: 0x76e2b90
// body: available
// range: 0x76e2b90-0x76e2cf7 inclusive
// range: 0x76e2d10-0x76e2d23 inclusive
// range: 0x76e2d28-0x76e2ee7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76e2ca0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e2cf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e2ed0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e2ed4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e2ed8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e2edc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e2ee0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e2ee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JObject_<<WriteToAsync>g__AwaitProperties_0_0>d__MoveNext(int *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 local_40 [16];
  
  if ((DAT_095227fc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c14c0);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0919b488);
    FUN_03f5c2a4(&DAT_0919b490);
    DAT_095227fc = 1;
  }
  iVar1 = *param_1;
  lVar6 = *(long *)(param_1 + 10);
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (iVar1 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
  }
  else {
    if (iVar1 == 1) {
      local_40 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
      goto LAB_076e2d78;
    }
    if (iVar1 == 2) {
      local_40 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
      goto LAB_076e2dec;
    }
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_40 = System_Threading_Tasks_Task__ConfigureAwait(*(long *)(param_1 + 8),0,0);
    uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_40,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x14) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0x14,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_0499317c(param_1 + 2,local_40,param_1,DAT_091c14c0);
      return;
    }
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_40,0);
  iVar1 = param_1[0xc];
  while( true ) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar6 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar2 = FUN_06c773c8(*(long *)(lVar6 + 0x58),DAT_0919b488);
    if (iVar2 <= iVar1) break;
    if (*(long *)(lVar6 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar5 = (long *)FUN_06c7745c(*(long *)(lVar6 + 0x58),param_1[0xc],DAT_0919b490);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = (**(code **)(*plVar5 + 0x1f8))
                      (plVar5,*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(param_1 + 0x10),
                       *(undefined8 *)(param_1 + 0x12),*(undefined8 *)(*plVar5 + 0x200));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar7 = System_Threading_Tasks_Task__ConfigureAwait(lVar4,0,0);
    local_40 = auVar7;
    uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_40,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x14) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0x14,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_0499317c(param_1 + 2,local_40,param_1,DAT_091c14c0);
      return;
    }
LAB_076e2d78:
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_40,0);
    iVar1 = param_1[0xc] + 1;
    param_1[0xc] = iVar1;
  }
  plVar5 = *(long **)(param_1 + 0xe);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = (**(code **)(*plVar5 + 0x228))
                    (plVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*plVar5 + 0x230));
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  auVar7 = System_Threading_Tasks_Task__ConfigureAwait(lVar6,0,0);
  local_40 = auVar7;
  uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                    (local_40,0);
  if ((uVar3 & 1) == 0) {
    *param_1 = 2;
    *(undefined1 (*) [16])(param_1 + 0x14) = local_40;
    thunk_FUN_03f5d7b8(param_1 + 0x14,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_0499317c(param_1 + 2,local_40,param_1,DAT_091c14c0);
    return;
  }
LAB_076e2dec:
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_40,0);
  *param_1 = -2;
  if (*(int *)(DAT_09181780 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


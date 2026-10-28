// rea decompile_all
// name: Newtonsoft.Json.Linq.JConstructor.<WriteToAsync>d__0$$MoveNext
// address: 0x76d913c
// body: available
// range: 0x76d913c-0x76d92db inclusive
// range: 0x76d92fc-0x76d930b inclusive
// range: 0x76d9310-0x76d94bb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d927c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d92d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d92d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d92d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d94a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d94ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d94b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d94b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d94b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JConstructor_<WriteToAsync>d__0__MoveNext(int *param_1)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 local_30 [16];
  
  if ((DAT_09522797 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c14a8);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091adfb0);
    FUN_03f5c2a4(&DAT_091adfb8);
    DAT_09522797 = 1;
  }
  iVar3 = *param_1;
  lVar5 = *(long *)(param_1 + 10);
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  if (iVar3 == 0) {
    local_30 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    if (iVar3 == 1) {
      local_30 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
      goto LAB_076d9354;
    }
    if (iVar3 == 2) {
      local_30 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
      goto LAB_076d93c4;
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(lVar5 + 0x58);
    plVar1 = *(long **)(param_1 + 8);
    if (lVar4 == 0) {
      lVar4 = **(long **)(DAT_09535468 + 0xb8);
    }
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(0,lVar4);
    }
    lVar4 = (**(code **)(*plVar1 + 0x298))
                      (plVar1,lVar4,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(*plVar1 + 0x2a0))
    ;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_30 = System_Threading_Tasks_Task__ConfigureAwait(lVar4,0,0);
    uVar2 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_30,0);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04993008(param_1 + 2,local_30,param_1,DAT_091c14a8);
      return;
    }
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_30,0);
  iVar3 = 0;
  param_1[0x14] = 0;
  while( true ) {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(lVar5 + 0x60);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar4 + 0x18) <= iVar3) break;
    plVar1 = (long *)FUN_057e0998(lVar4,iVar3,DAT_091adfb8);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = (**(code **)(*plVar1 + 0x1f8))
                      (plVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xc),
                       *(undefined8 *)(param_1 + 0xe),*(undefined8 *)(*plVar1 + 0x200));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar6 = System_Threading_Tasks_Task__ConfigureAwait(lVar4,0,0);
    local_30 = auVar6;
    uVar2 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_30,0);
    if ((uVar2 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04993008(param_1 + 2,local_30,param_1,DAT_091c14a8);
      return;
    }
LAB_076d9354:
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_30,0);
    iVar3 = param_1[0x14] + 1;
    param_1[0x14] = iVar3;
  }
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = (**(code **)(*plVar1 + 0x218))
                    (plVar1,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(*plVar1 + 0x220));
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  auVar6 = System_Threading_Tasks_Task__ConfigureAwait(lVar5,0,0);
  local_30 = auVar6;
  uVar2 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                    (local_30,0);
  if ((uVar2 & 1) == 0) {
    *param_1 = 2;
    *(undefined1 (*) [16])(param_1 + 0x10) = local_30;
    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04993008(param_1 + 2,local_30,param_1,DAT_091c14a8);
    return;
  }
LAB_076d93c4:
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_30,0);
  *param_1 = -2;
  if (*(int *)(DAT_09181780 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


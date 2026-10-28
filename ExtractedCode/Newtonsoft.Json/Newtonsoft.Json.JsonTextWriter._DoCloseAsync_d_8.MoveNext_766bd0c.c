// rea decompile_all
// name: Newtonsoft.Json.JsonTextWriter.<DoCloseAsync>d__8$$MoveNext
// address: 0x766bd0c
// body: available
// range: 0x766bd0c-0x766bde3 inclusive
// range: 0x766bdf0-0x766bf57 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x766bde0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766bf4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766bf50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766bf54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextWriter_<DoCloseAsync>d__8__MoveNext(int *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 local_30 [16];
  
  if ((DAT_0952246e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1538);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_09182348);
    DAT_0952246e = 1;
  }
  plVar4 = *(long **)(param_1 + 8);
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  if (*param_1 == 0) {
    local_30 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
    goto LAB_0766be28;
  }
  if (*param_1 == 1) {
    local_30 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = Newtonsoft_Json_JsonWriter__get_Top(plVar4);
    if (iVar1 == 0) {
      if (*(int *)(DAT_09182348 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_CancellationToken__ThrowIfCancellationRequested(param_1 + 10,0);
    }
    while( true ) {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = Newtonsoft_Json_JsonWriter__get_Top(plVar4);
      if (iVar1 < 1) break;
      lVar2 = (**(code **)(*plVar4 + 0x1f8))
                        (plVar4,*(undefined8 *)(param_1 + 10),*(undefined8 *)(*plVar4 + 0x200));
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar5 = System_Threading_Tasks_Task__ConfigureAwait(lVar2,0,0);
      local_30 = auVar5;
      uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_30,0);
      if ((uVar3 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_30;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_049938c0(param_1 + 2,local_30,param_1,DAT_091c1538);
        return;
      }
LAB_0766be28:
      System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                (local_30,0);
    }
    lVar2 = Newtonsoft_Json_JsonTextWriter__CloseBufferAndWriterAsync(plVar4,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar5 = System_Threading_Tasks_Task__ConfigureAwait(lVar2,0,0);
    local_30 = auVar5;
    uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_30,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_049938c0(param_1 + 2,local_30,param_1,DAT_091c1538);
      return;
    }
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_30,0);
  lVar2 = DAT_09181780;
  *param_1 = -2;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


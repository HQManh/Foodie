// rea decompile_all
// name: Newtonsoft.Json.JsonTextWriter.<CloseBufferAndWriterAsync>d__9$$MoveNext
// address: 0x766ba2c
// body: available
// range: 0x766ba2c-0x766bbbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x766bbb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766bbb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766bbb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766bbbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextWriter_<CloseBufferAndWriterAsync>d__9__MoveNext(int *param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined1 local_40 [16];
  
  if ((DAT_0952246c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1530);
    FUN_03f5c2a4(&DAT_09181780);
    DAT_0952246c = 1;
  }
  lVar5 = *(long *)(param_1 + 8);
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (*param_1 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar4 = (long *)(lVar5 + 0x90);
    if (*plVar4 != 0) {
      Newtonsoft_Json_Utilities_BufferUtils__ReturnBuffer(*(undefined8 *)(lVar5 + 0x98),*plVar4,0);
      *plVar4 = 0;
      thunk_FUN_03f5d7b8(plVar4,0);
    }
    auVar1._8_8_ = local_40._8_8_;
    auVar1._0_8_ = local_40._0_8_;
    if ((*(char *)(lVar5 + 0x38) == '\0') ||
       (plVar4 = *(long **)(lVar5 + 0x68), local_40 = auVar1, plVar4 == (long *)0x0))
    goto LAB_0766bb78;
    lVar2 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_40 = System_Threading_Tasks_Task__ConfigureAwait(lVar2,0,0);
    uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_40,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 10) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 10,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04993844(param_1 + 2,local_40,param_1,DAT_091c1530);
      return;
    }
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_40,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar4 = *(long **)(lVar5 + 0x68);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
LAB_0766bb78:
  lVar5 = DAT_09181780;
  *param_1 = -2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


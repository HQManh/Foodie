// rea decompile_all
// name: Newtonsoft.Json.JsonTextWriter.<DoWriteUndefinedAsync>d__43$$MoveNext
// address: 0x766e394
// body: available
// range: 0x766e394-0x766e5db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x766e5d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766e5d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766e5d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextWriter_<DoWriteUndefinedAsync>d__43__MoveNext(int *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 local_40 [16];
  
  if ((DAT_0952247e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1578);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091817a0);
    FUN_03f5c2a4(&DAT_09187300);
    DAT_0952247e = 1;
  }
  lVar2 = *(long *)(param_1 + 10);
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (*param_1 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
      goto LAB_0766e4f8;
    }
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_40 = System_Threading_Tasks_Task__ConfigureAwait(*(long *)(param_1 + 8),0,0);
    uVar1 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_40,0);
    if ((uVar1 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04993ca0(param_1 + 2,local_40,param_1,DAT_091c1578);
      return;
    }
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_40,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x68);
  if (*(int *)(DAT_09187300 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = *(undefined8 *)(param_1 + 0xc);
  uVar4 = *(undefined8 *)(*(long *)(DAT_09187300 + 0xb8) + 0x20);
  if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091817a0);
  }
  lVar2 = Newtonsoft_Json_Utilities_AsyncUtils__WriteAsync(uVar3,uVar4,uVar5,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  auVar6 = System_Threading_Tasks_Task__ConfigureAwait(lVar2,0,0);
  local_40 = auVar6;
  uVar1 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                    (local_40,0);
  if ((uVar1 & 1) == 0) {
    *param_1 = 1;
    *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
    thunk_FUN_03f5d7b8(param_1 + 0xe,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04993ca0(param_1 + 2,local_40,param_1,DAT_091c1578);
    return;
  }
LAB_0766e4f8:
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_40,0);
  lVar2 = DAT_09181780;
  *param_1 = -2;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


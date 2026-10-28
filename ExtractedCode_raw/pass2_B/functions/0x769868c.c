// rea decompile_all
// name: Newtonsoft.Json.Utilities.JavaScriptUtils.<WriteEscapedJavaScriptStringWithDelimitersAsync>d__13$$MoveNext
// address: 0x769868c
// body: available
// range: 0x769868c-0x769898f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7698980 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7698984 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7698988 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769898c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_JavaScriptUtils_<WriteEscapedJavaScriptStringWithDelimitersAsync>d__13__MoveNext
               (int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 local_60 [16];
  
  if ((DAT_095225cc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c14e0);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_09187288);
    DAT_095225cc = 1;
  }
  local_60._8_8_ = 0;
  iVar5 = *param_1;
  local_60._0_8_ = 0;
  if (iVar5 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0x1a);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *param_1 = -1;
LAB_0769877c:
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_60,0);
    uVar6 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(*(undefined8 *)(param_1 + 10),0);
    if ((uVar6 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 10);
      uVar3 = *(undefined8 *)(param_1 + 0xc);
      uVar2 = *(undefined8 *)(param_1 + 0x12);
      uVar4 = *(undefined8 *)(param_1 + 0x14);
      uVar9 = *(undefined8 *)(param_1 + 0xe);
      iVar5 = param_1[0x10];
      uVar10 = *(undefined8 *)(param_1 + 0x16);
      if (*(int *)(DAT_09187288 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = Newtonsoft_Json_Utilities_JavaScriptUtils__WriteEscapedJavaScriptStringWithoutDelimitersAsync
                        (uVar3,uVar1,uVar9,iVar5,uVar2,uVar4,uVar10);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar11 = System_Threading_Tasks_Task__ConfigureAwait(lVar7,0,0);
      local_60 = auVar11;
      uVar6 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_60,0);
      if ((uVar6 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x1a) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_0499336c(param_1 + 2,local_60,param_1,DAT_091c14e0);
        return;
      }
      goto LAB_07698808;
    }
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        local_60 = *(undefined1 (*) [16])(param_1 + 0x1a);
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        *param_1 = -1;
        goto LAB_07698854;
      }
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_60 = System_Threading_Tasks_Task__ConfigureAwait(*(long *)(param_1 + 8),0,0);
      uVar6 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_60,0);
      if ((uVar6 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x1a) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_0499336c(param_1 + 2,local_60,param_1,DAT_091c14e0);
        return;
      }
      goto LAB_0769877c;
    }
    local_60 = *(undefined1 (*) [16])(param_1 + 0x1a);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *param_1 = -1;
LAB_07698808:
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_60,0);
  }
  plVar8 = *(long **)(param_1 + 0xc);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar7 = (**(code **)(*plVar8 + 0x2c8))
                    (plVar8,(short)param_1[0x18],*(undefined8 *)(*plVar8 + 0x2d0));
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  auVar11 = System_Threading_Tasks_Task__ConfigureAwait(lVar7,0,0);
  local_60 = auVar11;
  uVar6 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                    (local_60,0);
  if ((uVar6 & 1) == 0) {
    *param_1 = 2;
    *(undefined1 (*) [16])(param_1 + 0x1a) = local_60;
    thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_0499336c(param_1 + 2,local_60,param_1,DAT_091c14e0);
    return;
  }
LAB_07698854:
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_60,0);
  lVar7 = DAT_09181780;
  *param_1 = -2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


// rea decompile_all
// name: Newtonsoft.Json.JsonTextWriter.<WriteIndentAsync>d__13$$MoveNext
// address: 0x76705ac
// body: available
// range: 0x76705ac-0x7670877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7670868 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x767086c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7670870 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7670874 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextWriter_<WriteIndentAsync>d__13__MoveNext(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 local_60 [16];
  
  if ((DAT_0952248a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c15a8);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091817a0);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0952248a = 1;
  }
  lVar10 = *(long *)(param_1 + 8);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*param_1 < 2) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = 0xffffffff;
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar7 = *(undefined8 *)(lVar10 + 0x68);
    uVar8 = *(undefined8 *)(lVar10 + 0xa0);
    uVar2 = param_1[10];
    uVar1 = param_1[0xb];
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar3 = System_Math__Min(uVar1,0xc,0);
    uVar9 = *(undefined8 *)(param_1 + 0xc);
    if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = Newtonsoft_Json_Utilities_AsyncUtils__WriteAsync(uVar7,uVar8,0,iVar3 + uVar2,uVar9,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_60 = System_Threading_Tasks_Task__ConfigureAwait(lVar5,0,0);
    uVar6 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_60,0);
    if ((uVar6 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04993f88(param_1 + 2,local_60,param_1,DAT_091c15a8);
      return;
    }
  }
  while( true ) {
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_60,0);
    uVar2 = param_1[0xb] - 0xc;
    param_1[0xb] = uVar2;
    if ((int)uVar2 < 1) {
      *param_1 = 0xfffffffe;
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
      return;
    }
    if (lVar10 == 0) break;
    uVar7 = *(undefined8 *)(lVar10 + 0x68);
    uVar8 = *(undefined8 *)(lVar10 + 0xa0);
    uVar1 = param_1[10];
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Math__Min(uVar2,0xc,0);
    uVar9 = *(undefined8 *)(param_1 + 0xc);
    if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = Newtonsoft_Json_Utilities_AsyncUtils__WriteAsync(uVar7,uVar8,uVar1,uVar4,uVar9,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar11 = System_Threading_Tasks_Task__ConfigureAwait(lVar5,0,0);
    local_60 = auVar11;
    uVar6 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_60,0);
    if ((uVar6 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04993f88(param_1 + 2,local_60,param_1,DAT_091c15a8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: System.Security.Cryptography.CryptoStream.<WriteAsyncInternal>d__46$$MoveNext
// address: 0x745c1ec
// body: available
// range: 0x745c1ec-0x745c4df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x745c4c8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745c4cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745c4d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745c4d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745c4d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745c4dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0745c4c4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Security_Cryptography_CryptoStream_<WriteAsyncInternal>d__46__MoveNext(int *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 in_x7;
  long lVar4;
  uint uVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  int *local_28;
  
  local_28 = param_1;
  if ((DAT_09521153 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c13a0);
    FUN_03f5c2a4(&DAT_091c13d8);
    FUN_03f5c2a4(&DAT_09181780);
    DAT_09521153 = 1;
  }
  local_38 = 0;
  local_2c = *param_1;
  lVar4 = *(long *)(param_1 + 8);
  local_48 = 0;
  local_40 = 0;
  if (local_2c == 0) {
    local_38 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    local_2c = -1;
    *param_1 = -1;
LAB_0745c2f8:
    System_Threading_Tasks_ForceAsyncAwaiter__GetResult(&local_38,0);
    if (local_2c == 1) goto LAB_0745c320;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = System_Security_Cryptography_CryptoStream__WriteAsyncCore
                      (lVar4,*(undefined8 *)(local_28 + 10),local_28[0xc],local_28[0xd],
                       *(undefined8 *)(local_28 + 0xe),1,0,in_x7,0,&local_2c);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_48 = System_Threading_Tasks_Task__GetAwaiter(lVar4,0);
    uVar2 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_48,0);
    if ((uVar2 & 1) == 0) {
      local_2c = 1;
      *local_28 = 1;
      *(undefined8 *)(local_28 + 0x14) = local_48;
      thunk_FUN_03f5d7b8(local_28 + 0x14,0);
      piVar3 = local_28;
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09181780,extraout_x1,local_28);
      }
      FUN_049922f0(piVar3 + 2,&local_48,local_28,DAT_091c13d8);
      uVar5 = 5;
      goto LAB_0745c350;
    }
  }
  else {
    if (local_2c != 1) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = System_Security_Cryptography_CryptoStream__get_AsyncActiveSemaphore(lVar4,0);
      *(undefined8 *)(local_28 + 0x10) = uVar1;
      thunk_FUN_03f5d7b8();
      if (*(long *)(local_28 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = System_Threading_SemaphoreSlim__WaitAsync(*(long *)(local_28 + 0x10),0);
      local_40 = System_Threading_Tasks_TaskAwaiters__ForceAsync(uVar1,0);
      local_38 = System_Threading_Tasks_ForceAsyncAwaiter__GetAwaiter(&local_40,0);
      uVar2 = System_Threading_Tasks_ForceAsyncAwaiter__get_IsCompleted(&local_38,0);
      if ((uVar2 & 1) == 0) {
        local_2c = 0;
        *local_28 = 0;
        *(undefined8 *)(local_28 + 0x12) = local_38;
        thunk_FUN_03f5d7b8(local_28 + 0x12,0);
        piVar3 = local_28;
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09181780,extraout_x1_00,local_28);
        }
        FUN_04991f8c(piVar3 + 2,&local_38,local_28,DAT_091c13a0);
        return;
      }
      goto LAB_0745c2f8;
    }
LAB_0745c320:
    local_2c = -1;
    local_48 = *(undefined8 *)(local_28 + 0x14);
    local_28[0x14] = 0;
    local_28[0x15] = 0;
    *local_28 = -1;
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_48,0);
  uVar5 = 8;
LAB_0745c350:
  if (local_2c < 0) {
    if (*(long *)(local_28 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Threading_SemaphoreSlim__Release(*(long *)(local_28 + 0x10),0);
  }
  if ((uVar5 | 8) == 8) {
    *local_28 = -2;
    piVar3 = local_28 + 0x10;
    piVar3[0] = 0;
    piVar3[1] = 0;
    thunk_FUN_03f5d7b8(piVar3,0);
    piVar3 = local_28;
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(piVar3 + 2,0);
  }
  return;
}


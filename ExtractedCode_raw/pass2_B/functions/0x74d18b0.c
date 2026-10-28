// rea decompile_all
// name: System.Runtime.CompilerServices.TaskAwaiter.<>c__DisplayClass11_0$$<OutputWaitEtwEvents>b__0
// address: 0x74d18b0
// body: available
// range: 0x74d18b0-0x74d1a23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d1a20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_CompilerServices_TaskAwaiter_<>c__DisplayClass11_0__<OutputWaitEtwEvents>b__0
               (long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  if ((DAT_09521528 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b908);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_09521528 = 1;
  }
  uVar4 = Internal_Threading_Tasks_Tracing_TaskTrace__get_Enabled(0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09521581 == '\0') {
      FUN_03f5c2a4(&DAT_0918b8c8);
      DAT_09521581 = '\x01';
    }
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar5 = (long *)FUN_03f5c2c0(DAT_0918b8c8);
    lVar6 = *plVar5;
    if (lVar6 == 0) {
      if (*(int *)(DAT_0918b908 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_0951988b == '\0') {
        FUN_03f5c2a4(&DAT_0918b908);
        DAT_0951988b = '\x01';
      }
      if (*(int *)(DAT_0918b908 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_0918b908 + 0xb8) == 0) goto LAB_074d1a20;
      uVar1 = System_Threading_Tasks_TaskScheduler__get_Id(**(long **)(DAT_0918b908 + 0xb8),0);
      uVar2 = 0;
    }
    else {
      if (*(long *)(lVar6 + 0x28) == 0) goto LAB_074d1a20;
      uVar1 = System_Threading_Tasks_TaskScheduler__get_Id(*(long *)(lVar6 + 0x28),0);
      uVar2 = System_Threading_Tasks_Task__get_Id(lVar6,0);
    }
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_074d1a20;
    uVar3 = System_Threading_Tasks_Task__get_Id(*(long *)(param_1 + 0x10),0);
    Internal_Threading_Tasks_Tracing_TaskTrace__TaskWaitEnd(uVar1,uVar2,uVar3,0);
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x074d1a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
    return;
  }
LAB_074d1a20:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


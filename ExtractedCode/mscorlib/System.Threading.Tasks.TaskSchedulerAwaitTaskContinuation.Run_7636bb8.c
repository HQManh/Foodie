// rea decompile_all
// name: System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation$$Run
// address: 0x7636bb8
// body: available
// range: 0x7636bb8-0x7636d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7636cb8 to 0x7636dfc System.Threading.Tasks.AwaitTaskContinuation$$Run (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7636d7c to 0x7636214 System.Threading.Tasks.TaskContinuation$$InlineIfPossibleOrElseQueue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7636d80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation__Run
               (long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_09522226 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174850);
    FUN_03f5c2a4(&DAT_0918b908);
    FUN_03f5c2a4(&DAT_091f0c40);
    FUN_03f5c2a4(&DAT_09194f10);
    DAT_09522226 = 1;
    param_2 = extraout_x1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if (*(int *)(DAT_0918b908 + 0xe4) == 0) {
    FUN_03f5c424();
    param_2 = extraout_x1_00;
  }
  if (DAT_0951988b == '\0') {
    FUN_03f5c2a4(&DAT_0918b908);
    DAT_0951988b = '\x01';
    param_2 = extraout_x1_01;
  }
  if (*(int *)(DAT_0918b908 + 0xe4) == 0) {
    FUN_03f5c424();
    param_2 = extraout_x1_02;
  }
  if (lVar6 == **(long **)(DAT_0918b908 + 0xb8)) {
    System_Threading_Tasks_AwaitTaskContinuation__Run(param_1,param_2,param_3 & 1);
    return;
  }
  if ((param_3 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    if (*(int *)(DAT_0918b908 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = System_Threading_Tasks_TaskScheduler__get_InternalCurrent();
    if (lVar6 == *(long *)(param_1 + 0x20)) {
      uVar1 = 0;
    }
    else {
      uVar1 = System_Threading_ThreadPool__get_IsThreadPoolThread();
      uVar1 = uVar1 ^ 1;
    }
  }
  if (*(int *)(DAT_09194f10 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = *(undefined8 **)(DAT_09194f10 + 0xb8);
  lVar4 = puVar3[1];
  lVar6 = DAT_09194f10;
  if (lVar4 == 0) {
    if (*(int *)(DAT_09194f10 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar3 = *(undefined8 **)(DAT_09194f10 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = thunk_FUN_03f9944c(DAT_09174850);
    FUN_070a8c30(lVar4,uVar5,DAT_091f0c40,0);
    plVar2 = (long *)(*(long *)(DAT_09194f10 + 0xb8) + 8);
    *plVar2 = lVar4;
    lVar6 = thunk_FUN_03f5d7b8(plVar2,lVar4);
  }
  lVar6 = System_Threading_Tasks_AwaitTaskContinuation__CreateTask
                    (lVar6,lVar4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  if ((uVar1 & 1) != 0) {
    if (lVar6 != 0) {
      System_Threading_Tasks_Task__ScheduleAndStart(lVar6,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  System_Threading_Tasks_TaskContinuation__InlineIfPossibleOrElseQueue(lVar6,0);
  return;
}


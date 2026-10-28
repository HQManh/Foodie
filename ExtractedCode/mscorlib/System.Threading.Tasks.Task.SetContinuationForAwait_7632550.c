// rea decompile_all
// name: System.Threading.Tasks.Task$$SetContinuationForAwait
// address: 0x7632550
// body: available
// range: 0x7632550-0x7632747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7632744 to 0x76328e8 System.Threading.Tasks.AwaitTaskContinuation$$UnsafeScheduleAction (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_Tasks_Task__SetContinuationForAwait
               (undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  if ((DAT_095221f4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b6c0);
    FUN_03f5c2a4(&DAT_09173058);
    FUN_03f5c2a4(&DAT_0918b910);
    FUN_03f5c2a4(&DAT_0918b908);
    DAT_095221f4 = 1;
  }
  if ((param_3 & 1) != 0) {
    lVar1 = System_Threading_SynchronizationContext__get_Current();
    if (lVar1 != 0) {
      uVar2 = System_Object__GetType(lVar1,0);
      uVar3 = DAT_09173058;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      uVar4 = System_Type__op_Inequality(uVar2,uVar3,0);
      if ((uVar4 & 1) != 0) {
        puVar6 = &DAT_0918b6c0;
        goto LAB_076326a4;
      }
    }
    if (*(int *)(DAT_0918b908 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = System_Threading_Tasks_TaskScheduler__get_InternalCurrent();
    if (lVar1 != 0) {
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
      if (lVar1 != **(long **)(DAT_0918b908 + 0xb8)) {
        puVar6 = &DAT_0918b910;
LAB_076326a4:
        plVar5 = (long *)thunk_FUN_03f9944c(*puVar6);
        System_Threading_Tasks_AwaitTaskContinuation___ctor(plVar5,param_2,param_4 & 1);
        plVar5[4] = lVar1;
        thunk_FUN_03f5d7b8(plVar5 + 4,lVar1);
        uVar4 = System_Threading_Tasks_Task__AddTaskContinuation(param_1,plVar5,0);
        if ((uVar4 & 1) != 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x07632704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x178))(plVar5,param_1,0,*(undefined8 *)(*plVar5 + 0x180));
        return;
      }
    }
  }
  uVar4 = System_Threading_Tasks_Task__AddTaskContinuation(param_1,param_2,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  System_Threading_Tasks_AwaitTaskContinuation__UnsafeScheduleAction(param_2);
  return;
}


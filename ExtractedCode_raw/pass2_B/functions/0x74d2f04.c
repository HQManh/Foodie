// rea decompile_all
// name: System.Runtime.CompilerServices.YieldAwaitable.YieldAwaiter$$QueueContinuation
// address: 0x74d2f04
// body: available
// range: 0x74d2f04-0x74d31a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d30e8 to 0x76380ac System.Threading.Tasks.TaskFactory$$StartNew (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74d3128 to 0x7623f0c System.Threading.ThreadPool$$QueueUserWorkItem (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74d3154 to 0x7628744 System.Threading.ThreadPool$$UnsafeQueueUserWorkItem (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74d319c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d31a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__QueueContinuation
               (long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_09521548 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09173058);
    FUN_03f5c2a4(&DAT_0918b908);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_09196218);
    DAT_09521548 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_09219900);
    System_ArgumentNullException___ctor(uVar3,uVar2,0);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091f2780);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar2);
  }
  plVar1 = (long *)System_Threading_SynchronizationContext__get_CurrentNoFlow(0);
  if (plVar1 != (long *)0x0) {
    uVar2 = System_Object__GetType(plVar1,0);
    uVar3 = DAT_09173058;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
    uVar4 = System_Type__op_Inequality(uVar2,uVar3,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_09196218 + 0xe4) == 0) {
        FUN_03f5c424();
      }
                    /* WARNING: Could not recover jumptable at 0x074d3004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x188))
                (plVar1,*(undefined8 *)(*(long *)(DAT_09196218 + 0xb8) + 8),param_1,
                 *(undefined8 *)(*plVar1 + 400));
      return;
    }
  }
  if (*(int *)(DAT_0918b908 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = System_Threading_Tasks_TaskScheduler__get_Current(0);
  if (DAT_0951988b == '\0') {
    FUN_03f5c2a4(&DAT_0918b908);
    DAT_0951988b = '\x01';
  }
  if (*(int *)(DAT_0918b908 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar5 != **(long **)(DAT_0918b908 + 0xb8)) {
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_0951988a == '\0') {
      FUN_03f5c2a4(&DAT_0918b8c8);
      DAT_0951988a = '\x01';
    }
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x28);
    if (lVar6 != 0) {
      System_Threading_Tasks_TaskFactory__StartNew(lVar6,param_1,0,1,lVar5,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((param_2 & 1) != 0) {
    if (*(int *)(DAT_09196218 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_ThreadPool__QueueUserWorkItem(**(undefined8 **)(DAT_09196218 + 0xb8),param_1,0)
    ;
    return;
  }
  if (*(int *)(DAT_09196218 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Threading_ThreadPool__UnsafeQueueUserWorkItem
            (**(undefined8 **)(DAT_09196218 + 0xb8),param_1,0);
  return;
}


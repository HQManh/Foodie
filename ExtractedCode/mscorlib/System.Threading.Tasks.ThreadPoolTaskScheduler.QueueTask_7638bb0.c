// rea decompile_all
// name: System.Threading.Tasks.ThreadPoolTaskScheduler$$QueueTask
// address: 0x7638bb0
// body: available
// range: 0x7638bb0-0x7638d7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7638cf4 to 0x7628af4 System.Threading.ThreadPool$$UnsafeQueueCustomWorkItem (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7638d74 to 0x742cb3c Internal.Runtime.Augments.RuntimeThread$$Start (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7638d78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_Tasks_ThreadPoolTaskScheduler__QueueTask(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  if ((DAT_0952224e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a3f8);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_0918bcf8);
    DAT_0952224e = 1;
  }
  uVar7 = Internal_Threading_Tasks_Tracing_TaskTrace__get_Enabled(0);
  if ((uVar7 & 1) == 0) {
    if (param_2 == 0) goto LAB_07638d78;
  }
  else {
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
    plVar8 = (long *)FUN_03f5c2c0(DAT_0918b8c8);
    if (param_2 == 0) goto LAB_07638d78;
    lVar10 = *plVar8;
    lVar11 = *(long *)(param_2 + 0x30);
    uVar1 = System_Threading_Tasks_TaskScheduler__get_Id(param_1);
    uVar2 = 0;
    if (lVar10 != 0) {
      uVar2 = System_Threading_Tasks_Task__get_Id(lVar10);
    }
    uVar3 = System_Threading_Tasks_Task__get_Id(param_2);
    uVar4 = 0;
    if (lVar11 != 0) {
      uVar4 = System_Threading_Tasks_Task__get_Id(lVar11);
    }
    uVar5 = System_Threading_Tasks_Task__get_Options(param_2);
    Internal_Threading_Tasks_Tracing_TaskTrace__TaskScheduled(uVar1,uVar2,uVar3,uVar4,uVar5,0);
  }
  uVar6 = System_Threading_Tasks_Task__get_Options(param_2);
  if ((uVar6 >> 1 & 1) == 0) {
    uVar6 = System_Threading_Tasks_Task__get_Options(param_2);
    System_Threading_ThreadPool__UnsafeQueueCustomWorkItem(param_2,uVar6 & 1);
    return;
  }
  if (*(int *)(DAT_0918bcf8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar9 = **(undefined8 **)(DAT_0918bcf8 + 0xb8);
  if (*(int *)(DAT_0918a3f8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918a3f8);
  }
  lVar10 = Internal_Runtime_Augments_RuntimeThread__Create(uVar9,0,0);
  if (lVar10 != 0) {
    Internal_Runtime_Augments_RuntimeThread__set_IsBackground(lVar10,1,0);
    Internal_Runtime_Augments_RuntimeThread__Start(lVar10,param_2,0);
    return;
  }
LAB_07638d78:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


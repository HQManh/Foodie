// rea decompile_all
// name: System.Threading.Tasks.StandardTaskContinuation$$Run
// address: 0x7636360
// body: available
// range: 0x7636360-0x7636483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7636400 to 0x762ec4c System.Threading.Tasks.Task$$InternalCancel (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7636460 to 0x7636214 System.Threading.Tasks.TaskContinuation$$InlineIfPossibleOrElseQueue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7636480 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_Tasks_StandardTaskContinuation__Run(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  if ((DAT_0952221f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183708);
    DAT_0952221f = 1;
  }
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar3 = *(uint *)(param_2 + 0x38);
    thunk_FUN_03f6a5cc();
    if ((uVar3 & 0x1600000) == 0x1000000) {
      uVar3 = 0x10;
    }
    else {
      uVar2 = *(uint *)(param_2 + 0x38);
      thunk_FUN_03f6a5cc();
      uVar3 = 0x11;
      if ((uVar2 & 0x600000) == 0x400000) {
        uVar3 = 0x12;
      }
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if ((uVar1 >> (ulong)uVar3 & 1) == 0) {
      if (lVar4 != 0) {
        uVar3 = *(uint *)(lVar4 + 0x38);
        thunk_FUN_03f6a5cc();
        if (((uVar3 & 0x600000) != 0x400000) && (*(int *)(DAT_09183708 + 0xe4) == 0)) {
          FUN_03f5c424();
        }
        *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_1 + 0x20);
        thunk_FUN_03f5d7b8();
        if (((param_3 & 1) != 0) && ((uVar1 >> 0x13 & 1) != 0)) {
          System_Threading_Tasks_TaskContinuation__InlineIfPossibleOrElseQueue(lVar4,1);
          return;
        }
        System_Threading_Tasks_Task__ScheduleAndStart(lVar4,1);
        return;
      }
    }
    else if (lVar4 != 0) {
      System_Threading_Tasks_Task__InternalCancel(lVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


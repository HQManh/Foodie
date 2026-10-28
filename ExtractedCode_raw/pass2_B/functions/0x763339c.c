// rea decompile_all
// name: System.Threading.Tasks.Task$$SpinThenBlockingWait
// address: 0x763339c
// body: available
// range: 0x763339c-0x76334fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76334f0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76334f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76334f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076334ec) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint System_Threading_Tasks_Task__SpinThenBlockingWait
               (undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((DAT_095221f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09194ec0);
    DAT_095221f7 = 1;
  }
  if (param_2 == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = System_Environment__get_TickCount(0);
  }
  uVar4 = System_Threading_Tasks_Task__SpinWait(param_1,param_2);
  if ((uVar4 & 1) == 0) {
    lVar5 = thunk_FUN_03f9944c(DAT_09194ec0);
    System_Threading_Tasks_Task_SetOnInvokeMres___ctor();
    System_Threading_Tasks_Task__AddCompletionAction(param_1,lVar5,1);
    if (param_2 == -1) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = System_Threading_ManualResetEventSlim__Wait(lVar5,0xffffffff,param_3,0);
    }
    else {
      iVar2 = System_Environment__get_TickCount(0);
      if ((long)(ulong)(uint)(iVar2 - iVar1) < (long)param_2) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar3 = System_Threading_ManualResetEventSlim__Wait
                          (lVar5,param_2 - (iVar2 - iVar1),param_3,0);
      }
      else {
        uVar3 = 0;
      }
    }
    uVar4 = System_Threading_Tasks_Task__get_IsCompleted(param_1);
    if ((uVar4 & 1) == 0) {
      System_Threading_Tasks_Task__RemoveContinuation(param_1,lVar5);
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3 & 1;
}


// rea decompile_all
// name: System.Threading.Tasks.Task.DelayPromise$$Complete
// address: 0x7635d1c
// body: available
// range: 0x7635d1c-0x7635e77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7635e74 to 0x761c830 System.Threading.CancellationTokenRegistration$$Dispose (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_Tasks_Task_DelayPromise__Complete(long param_1)

{
  ulong uVar1;
  
  if ((DAT_09522216 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09183708);
    FUN_03f5c2a4(&DAT_091bcde0);
    DAT_09522216 = 1;
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x58,0);
  if ((uVar1 & 1) == 0) {
    if ((*(int *)(DAT_09183708 + 0xe4) == 0) && (FUN_03f5c424(), *(int *)(DAT_09183708 + 0xe4) == 0)
       ) {
      FUN_03f5c424();
    }
    if (DAT_095197fb == '\0') {
      FUN_03f5c2a4(&DAT_09183708);
      FUN_03f5c2a4(&DAT_0918b8c8);
      DAT_095197fb = '\x01';
    }
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(char *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x10) != '\0') {
      if (*(int *)(DAT_09183708 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_Tasks_DebuggerSupport__RemoveFromActiveTasksNonInlined(param_1);
    }
    uVar1 = FUN_062f66f4(param_1,0,DAT_091bcde0);
  }
  else {
    uVar1 = System_Threading_Tasks_Task__TrySetCanceled(param_1,*(undefined8 *)(param_1 + 0x58),0);
  }
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    System_Threading_Timer__Dispose();
  }
  System_Threading_CancellationTokenRegistration__Dispose(param_1 + 0x60,0);
  return;
}


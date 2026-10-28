// rea decompile_all
// name: System.Threading.Tasks.TaskFactory.CompleteOnInvokePromise$$.ctor
// address: 0x76382b0
// body: available
// range: 0x76382b0-0x76383cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76383bc to 0x762ddb0 System.Threading.Tasks.DebuggerSupport$$AddToActiveTasksNonInlined (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_Tasks_TaskFactory_CompleteOnInvokePromise___ctor
               (long param_1,undefined8 param_2)

{
  if ((DAT_0952223d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183708);
    FUN_03f5c2a4(&DAT_091bcd18);
    FUN_03f5c2a4(&DAT_0920e878);
    DAT_0952223d = 1;
  }
  FUN_062edcb8(param_1,DAT_091bcd18);
  *(undefined8 *)(param_1 + 0x58) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),param_2);
  if (*(int *)(DAT_09183708 + 0xe4) == 0) {
    FUN_03f5c424();
    if (*(int *)(DAT_09183708 + 0xe4) == 0) {
      FUN_03f5c424();
    }
  }
  if (DAT_095197fa == '\0') {
    FUN_03f5c2a4(&DAT_09183708);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095197fa = '\x01';
  }
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(char *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(DAT_09183708 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_Tasks_DebuggerSupport__AddToActiveTasksNonInlined(param_1);
    return;
  }
  return;
}


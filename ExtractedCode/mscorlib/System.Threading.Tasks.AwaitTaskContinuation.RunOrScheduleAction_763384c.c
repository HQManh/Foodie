// rea decompile_all
// name: System.Threading.Tasks.AwaitTaskContinuation$$RunOrScheduleAction
// address: 0x763384c
// body: available
// range: 0x763384c-0x7633903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76338f8 to 0x76328e8 System.Threading.Tasks.AwaitTaskContinuation$$UnsafeScheduleAction (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76338fc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7633900 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076338fc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Threading_Tasks_AwaitTaskContinuation__RunOrScheduleAction
               (long param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (((param_2 & 1) == 0) ||
     (uVar1 = System_Threading_Tasks_AwaitTaskContinuation__get_IsValidLocationForInlining(),
     (uVar1 & 1) == 0)) {
    System_Threading_Tasks_AwaitTaskContinuation__UnsafeScheduleAction(param_1);
    return;
  }
  lVar2 = *param_3;
  if (lVar2 != 0) {
    *param_3 = 0;
    thunk_FUN_03f5d7b8(param_3,0);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
  if (lVar2 != 0) {
    *param_3 = lVar2;
    thunk_FUN_03f5d7b8();
  }
  return;
}


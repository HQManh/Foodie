// rea decompile_all
// name: Cysharp.Threading.Tasks.UnityAsyncExtensions.ResourceRequestAwaiter$$UnsafeOnCompleted
// address: 0x7db1688
// body: available
// range: 0x7db1688-0x7db176f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7db1758 to 0x86511e8 UnityEngine.AsyncOperation$$add_completed (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7db176c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter__UnsafeOnCompleted
               (long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((DAT_09525f4d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cb738);
    FUN_03f5c2a4(&DAT_091b8370);
    FUN_03f5c2a4(&DAT_0917df00);
    DAT_09525f4d = 1;
  }
  plVar1 = param_1 + 1;
  lVar2 = *plVar1;
  if (DAT_09525d03 == '\0') {
    FUN_03f5c2a4(&DAT_09219908);
    DAT_09525d03 = '\x01';
  }
  if (lVar2 == 0) {
    if (*(int *)(DAT_0917df00 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = FUN_07dcf9f4(param_2,DAT_091b8370);
    param_1[1] = lVar2;
    thunk_FUN_03f5d7b8(plVar1,lVar2);
    if (*param_1 != 0) {
      UnityEngine_AsyncOperation__add_completed(*param_1,*plVar1,0);
      return;
    }
  }
  else {
    Cysharp_Threading_Tasks_Internal_Error__ThrowInvalidOperationExceptionCore(DAT_09219908);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


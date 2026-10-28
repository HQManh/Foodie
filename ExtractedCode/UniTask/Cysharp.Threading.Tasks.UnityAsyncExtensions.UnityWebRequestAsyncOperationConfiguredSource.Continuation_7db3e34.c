// rea decompile_all
// name: Cysharp.Threading.Tasks.UnityAsyncExtensions.UnityWebRequestAsyncOperationConfiguredSource$$Continuation
// address: 0x7db3e34
// body: available
// range: 0x7db3e34-0x7db3f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7db3ef0 to 0x64348bc FUN_064348bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7db3f4c to 0x643474c FUN_0643474c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7db3f70 to 0x6434678 FUN_06434678 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7db3f74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource__Continuation
               (long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_09525f86 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091bdc78);
    FUN_03f5c2a4(&DAT_091bdc80);
    FUN_03f5c2a4(&DAT_091bdc88);
    FUN_03f5c2a4(&DAT_0918c7e8);
    DAT_09525f86 = 1;
  }
  if (*(char *)(param_1 + 0x49) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x49) = 1;
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x28,0);
  if ((uVar1 & 1) != 0) {
    FUN_064348bc(param_1 + 0x50,*(undefined8 *)(param_1 + 0x28),DAT_091bdc78);
    return;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = Cysharp_Threading_Tasks_Internal_UnityWebRequestResultExtensions__IsError
                      (*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20));
    lVar3 = *(long *)(param_1 + 0x18);
    if ((uVar1 & 1) == 0) {
      if (lVar3 != 0) {
        FUN_06434678(param_1 + 0x50,*(undefined8 *)(lVar3 + 0x20),DAT_091bdc88);
        return;
      }
    }
    else if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x20);
      uVar2 = thunk_FUN_03f9944c(DAT_0918c7e8);
      Cysharp_Threading_Tasks_UnityWebRequestException___ctor(uVar2,uVar4);
      FUN_0643474c(param_1 + 0x50,uVar2,DAT_091bdc80);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


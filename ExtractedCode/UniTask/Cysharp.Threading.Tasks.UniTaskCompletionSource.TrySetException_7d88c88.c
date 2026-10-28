// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTaskCompletionSource$$TrySetException
// address: 0x7d88c88
// body: available
// range: 0x7d88c88-0x7d88d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d88d74 to 0x7da0834 Cysharp.Threading.Tasks.UniTaskCompletionSource$$TrySignalCompletion (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7d88d88 to 0x7da0c98 Cysharp.Threading.Tasks.UniTaskCompletionSource$$TrySetCanceled (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Cysharp_Threading_Tasks_UniTaskCompletionSource__TrySetException(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((DAT_09525e8b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091842e0);
    FUN_03f5c2a4(&DAT_09188c68);
    DAT_09525e8b = 1;
  }
  if (param_2 != (long *)0x0) {
    if ((*(byte *)(DAT_09188c68 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09188c68 + 0x130) * 8 + -8) ==
        DAT_09188c68)) {
      uVar1 = Cysharp_Threading_Tasks_UniTaskCompletionSource__TrySetCanceled(param_1,param_2[0x12])
      ;
      return uVar1;
    }
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    return 0;
  }
  uVar1 = System_Runtime_ExceptionServices_ExceptionDispatchInfo__Capture(param_2,0);
  lVar2 = thunk_FUN_03f9944c(DAT_091842e0);
  System_Object___ctor(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x10),uVar1);
  *(long *)(param_1 + 0x18) = lVar2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x18),lVar2);
  uVar1 = Cysharp_Threading_Tasks_UniTaskCompletionSource__TrySignalCompletion(param_1,2);
  return uVar1;
}


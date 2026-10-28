// rea decompile_all
// name: Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions.<>c$$<CleanupAsyncStackTrace>b__3_0
// address: 0x7dcb88c
// body: available
// range: 0x7dcb88c-0x7dcb93f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7dcb938 to 0x7430064 System.String$$Concat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7dcb93c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_Internal_DiagnosticsExtensions_<>c__<CleanupAsyncStackTrace>b__3_0
               (undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((DAT_095261a2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183b18);
    FUN_03f5c2a4(&DAT_091f5a98);
    DAT_095261a2 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0));
    if (*(int *)(DAT_09183b18 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183b18);
    }
    uVar1 = Cysharp_Threading_Tasks_Internal_DiagnosticsExtensions__BeautifyType(uVar1,1);
    uVar2 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
    System_String__Concat(uVar1,DAT_091f5a98,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: System.Threading.Tasks.Task$$TaskCancelCallback
// address: 0x762ee48
// body: available
// range: 0x762ee48-0x762ef37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x762ef30 to 0x762ec4c System.Threading.Tasks.Task$$InternalCancel (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x762ef34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_Tasks_Task__TaskCancelCallback(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if ((DAT_095221d2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_091bd6c0);
    FUN_03f5c2a4(&DAT_091bd6c8);
    FUN_03f5c2a4(&DAT_091bd6d0);
    FUN_03f5c2a4(&DAT_0917efe0);
    DAT_095221d2 = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar3 = *param_1;
    if ((*(byte *)(DAT_0918b8c8 + 0x130) <= *(byte *)(lVar3 + 0x130)) &&
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(DAT_0918b8c8 + 0x130) * 8 + -8) ==
        DAT_0918b8c8)) {
LAB_0762ef20:
      System_Threading_Tasks_Task__InternalCancel(param_1,0);
      return;
    }
    if ((*(byte *)(DAT_0917efe0 + 0x130) <= *(byte *)(lVar3 + 0x130)) &&
       ((*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(DAT_0917efe0 + 0x130) * 8 + -8) ==
         DAT_0917efe0 && (plVar1 = param_1 + 3, *plVar1 != 0)))) {
      plVar2 = param_1 + 4;
      param_1 = (long *)param_1[2];
      System_Threading_Tasks_Task__RemoveContinuation(*plVar1,*plVar2);
      if (param_1 != (long *)0x0) goto LAB_0762ef20;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: CookingGraph.Execution.CookingFlightCoordinator$$DrainArrivals
// address: 0x44a3118
// body: available
// range: 0x44a3118-0x44a325b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44a3244 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingFlightCoordinator__DrainArrivals(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long local_38;
  
  if ((DAT_095181fc & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e5d8);
    FUN_03f5c2a4(&DAT_0919e5e0);
    FUN_03f5c2a4(&DAT_091b8e38);
    FUN_03f5c2a4(&DAT_091b8e48);
    DAT_095181fc = 1;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  local_38 = 0;
  while (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x20) < 1) {
      return;
    }
    lVar1 = FUN_05e2d168(lVar1,DAT_091b8e38);
    if (((lVar1 == 0) || (lVar3 = *(long *)(lVar1 + 0x10), lVar3 == 0)) ||
       (lVar4 = *(long *)(param_1 + 0x10), lVar4 == 0)) break;
    uVar2 = System_Guid__op_Inequality
                      (*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),
                       *(undefined8 *)(lVar4 + 0x70),*(undefined8 *)(lVar4 + 0x78),0);
    if ((uVar2 & 1) == 0) {
      if ((*(long *)(lVar1 + 0x10) == 0) || (*(long *)(param_1 + 0x20) == 0)) break;
      uVar2 = FUN_06f54e88(*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x20)
                           ,&local_38,DAT_0919e5e0);
      if (((uVar2 & 1) != 0) && (local_38 == lVar1)) {
        if ((*(long *)(lVar1 + 0x10) == 0) || (*(long *)(param_1 + 0x20) == 0)) break;
        FUN_06f54860(*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x20),
                     DAT_0919e5d8);
        lVar1 = *(long *)(lVar1 + 0x10);
        if ((lVar1 == 0) || (*(long *)(param_1 + 0x10) == 0)) break;
        CookingGraph_Execution_CookingExecution__CompleteTransfer
                  (*(long *)(param_1 + 0x10),*(undefined8 *)(lVar1 + 0x10),
                   *(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20));
      }
    }
    lVar1 = *(long *)(param_1 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


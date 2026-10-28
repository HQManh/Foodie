// rea decompile_all
// name: CookingGraph.Execution.CookingFlightCoordinator$$Cancel
// address: 0x44a325c
// body: available
// range: 0x44a325c-0x44a337b inclusive
// range: 0x44a3434-0x44a3437 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44a3378 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a3434 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingFlightCoordinator__Cancel(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  long local_28;
  
  if ((DAT_095181fd & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e5d8);
    FUN_03f5c2a4(&DAT_0919e5e0);
    FUN_03f5c2a4(&DAT_091858f0);
    DAT_095181fd = 1;
  }
  local_28 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_06f54e88(*(long *)(param_1 + 0x20),param_2,&local_28,DAT_0919e5e0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_044a3434;
      FUN_06f54860(*(long *)(param_1 + 0x20),param_2,DAT_0919e5d8);
      if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar5 = *(long **)(local_28 + 0x18);
      if (plVar5 != (long *)0x0) {
        lVar3 = *plVar5;
        uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar1 != 0) {
          piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == DAT_091858f0) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_044a3358;
            }
            uVar1 = uVar1 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091858f0,0);
LAB_044a3358:
        (*(code *)*puVar2)(plVar5,puVar2[1]);
      }
    }
    return;
  }
LAB_044a3434:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


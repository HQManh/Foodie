// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$Settle
// address: 0x445057c
// body: available
// range: 0x445057c-0x44506ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44506cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44506e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44506e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44506e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44506ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__Settle(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  if ((DAT_09518076 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b2508);
    DAT_09518076 = 1;
  }
  if ((*(char *)(param_1 + 0x170) != '\0') || (*(int *)(param_1 + 0x188) != 0)) {
    return;
  }
  iVar4 = 10000;
  *(undefined1 *)(param_1 + 0x170) = 1;
  lVar5 = *(long *)(param_1 + 0x160);
  do {
    CookingGraph_CookingLevelSimulation__Replan(param_1);
    CookingGraph_CookingLevelSimulation__ReleaseQueueHolds(param_1);
    CookingGraph_CookingLevelSimulation__RefreshBag(param_1);
    CookingGraph_CookingLevelSimulation__CompleteCustomers(param_1);
    CookingGraph_CookingLevelSimulation__ProcessTools(param_1);
    CookingGraph_CookingLevelSimulation__AdmitCustomers(param_1);
    CookingGraph_CookingLevelSimulation__PreMerge(param_1);
    CookingGraph_CookingLevelSimulation__AutoServe(param_1);
    CookingGraph_CookingLevelSimulation__ReclaimWholeRecipes(param_1);
    CookingGraph_CookingLevelSimulation__Reclaim(param_1);
    if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(*(long *)(param_1 + 0x98) + 0x18) < 1) {
      if (*(long *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (0 < *(int *)(*(long *)(param_1 + 0xa0) + 0x18)) goto LAB_04450658;
      if (*(long *)(param_1 + 0x180) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *(long *)(*(long *)(param_1 + 0x180) + 0x48);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(lVar3 + 0x13) != '\0') goto LAB_04450658;
    }
    else {
LAB_04450658:
      CookingGraph_CookingLevelSimulation__ReleaseUnusableBagItems(param_1);
    }
    CookingGraph_CookingLevelSimulation__RefreshBag(param_1);
    if ((*(int *)(param_1 + 0x188) != 0) || (lVar5 == *(long *)(param_1 + 0x160))) {
      *(undefined1 *)(param_1 + 0x170) = 0;
      return;
    }
    iVar4 = iVar4 + -1;
    lVar5 = *(long *)(param_1 + 0x160);
    if (iVar4 == 0) {
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar1 = thunk_FUN_03f9944c();
      uVar2 = thunk_FUN_03fc39d4(&DAT_09203388);
      System_InvalidOperationException___ctor(uVar1,uVar2,0);
      uVar2 = thunk_FUN_03fc39d4(&DAT_091c6890);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar1,uVar2);
    }
  } while( true );
}


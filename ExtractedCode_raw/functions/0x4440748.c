// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$CanSaveMe
// address: 0x4440748
// body: available
// range: 0x4440748-0x4440873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4440870 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte CookingGraph_CookingLevelSimulation__CanSaveMe(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_18;
  
  if ((DAT_0951801c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b2508);
    DAT_0951801c = 1;
  }
  local_18 = 0;
  uVar3 = CookingGraph_CookingLevelSimulation__CanOfferSaveMe(param_1);
  if (((((uVar3 & 1) != 0) && (*(char *)(param_1 + 0x122) != '\0')) &&
      (*(int *)(param_1 + 0x188) == 2)) &&
     ((*(int *)(param_1 + 0x118) < 0 || (*(int *)(param_1 + 0x19c) < *(int *)(param_1 + 0x118))))) {
    iVar2 = *(int *)(param_1 + 0x18c);
    bVar1 = 0;
    if (3 < iVar2) {
      if (iVar2 != 5) {
        if (iVar2 != 4) goto LAB_04440860;
        if (*(long *)(param_1 + 0x98) != 0) {
          bVar1 = 0 < *(int *)(*(long *)(param_1 + 0x98) + 0x18);
          goto LAB_04440860;
        }
        goto LAB_04440870;
      }
      bVar1 = CookingGraph_CookingLevelSimulation__RecoverDeadlock(param_1,0,&local_18);
      goto LAB_04440860;
    }
    if (iVar2 != 2) {
      if (iVar2 != 3) goto LAB_04440860;
      iVar2 = CookingGraph_CookingLevelSimulation__FreeCell(param_1,0);
      if (-1 < iVar2) goto LAB_0444085c;
    }
    lVar4 = CookingGraph_CookingLevelSimulation__GridRescueCells(param_1);
    if (lVar4 == 0) {
LAB_04440870:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar4 + 0x18) != 0) {
      bVar1 = 1;
      goto LAB_04440860;
    }
    if (*(char *)(param_1 + 0x121) != '\0') {
      lVar4 = CookingGraph_CookingLevelSimulation__CleanTableCells(param_1,0);
      if (lVar4 == 0) goto LAB_04440870;
      bVar1 = *(int *)(lVar4 + 0x18) != 0;
      goto LAB_04440860;
    }
  }
LAB_0444085c:
  bVar1 = 0;
LAB_04440860:
  return bVar1 & 1;
}


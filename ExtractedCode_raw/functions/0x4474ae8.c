// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$FulfillmentRank
// address: 0x4474ae8
// body: available
// range: 0x4474ae8-0x4474c53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4474c4c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4474c50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_CookingLevelSimulation__FulfillmentRank
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09518078 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fe78);
    DAT_09518078 = 1;
  }
  uVar3 = CookingGraph_CookingLevelSimulation__get_UrgentFirst(param_1);
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_03f5c394(DAT_0917fe78,3);
    iVar2 = CookingGraph_CookingLevelSimulation__Missing(param_1,param_2,param_3);
    if (lVar4 == 0) goto LAB_04474c50;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (((uVar1 != 0) && (*(double *)(lVar4 + 0x20) = (double)(iVar2 + -1), uVar1 != 1)) &&
       (*(double *)(lVar4 + 0x28) = (double)param_4, 2 < uVar1)) {
      *(double *)(lVar4 + 0x30) = (double)param_5;
      return lVar4;
    }
  }
  else {
    lVar4 = FUN_03f5c394(DAT_0917fe78,5);
    uVar5 = CookingGraph_CookingLevelSimulation__SelectionPatience(param_1,param_2);
    if (lVar4 == 0) {
LAB_04474c50:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      iVar2 = CookingGraph_CookingLevelSimulation__OrderMissing(param_1,param_2);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(double *)(lVar4 + 0x28) = (double)(iVar2 + -1);
        iVar2 = CookingGraph_CookingLevelSimulation__Missing(param_1,param_2,param_3);
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (((2 < uVar1) && (*(double *)(lVar4 + 0x30) = (double)(iVar2 + -1), uVar1 != 3)) &&
           (*(double *)(lVar4 + 0x38) = (double)param_4, 4 < uVar1)) {
          *(double *)(lVar4 + 0x40) = (double)param_5;
          return lVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}


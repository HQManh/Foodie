// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ApplyBoosterCore
// address: 0x44402d8
// body: available
// range: 0x44402d8-0x444043b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4440434 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4440438 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8
CookingGraph_CookingLevelSimulation__ApplyBoosterCore
          (long param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_38;
  
  uVar6 = (ulong)param_2;
  if ((DAT_09518012 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09518012 = 1;
  }
  local_38 = 0;
  uVar2 = CookingGraph_CookingLevelSimulation__CanUseBooster(param_1,uVar6,&local_38);
  if ((uVar2 & 1) == 0) {
LAB_0444041c:
    uVar4 = 0;
  }
  else {
    if ((int)param_2 < 2) {
      if (param_2 != 0) {
        if (param_2 != 1) {
          return 0;
        }
        uVar2 = CookingGraph_CookingLevelSimulation__ShiftUp(param_1);
        goto joined_r0x04440350;
      }
      uVar3 = CookingGraph_CookingLevelSimulation__CleanTable(param_1,0);
      uVar2 = 0;
      if ((uVar3 & 1) == 0) {
        return 0;
      }
    }
    else {
      if (param_2 == 2) {
        if (param_4 < 1) goto LAB_0444041c;
        uVar2 = CookingGraph_CookingLevelSimulation__Pick(param_1,param_3,param_4,1);
      }
      else {
        if (param_2 != 3) {
          return 0;
        }
        uVar2 = CookingGraph_CookingLevelSimulation__AutoComplete(param_1,1);
      }
joined_r0x04440350:
      if ((uVar2 & 1) == 0) goto LAB_0444041c;
    }
    lVar5 = *(long *)(param_1 + 0x150);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar2);
    }
    if (*(uint *)(lVar5 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar5 = lVar5 + uVar6 * 4;
    iVar1 = *(int *)(lVar5 + 0x20);
    if (0 < iVar1) {
      *(int *)(lVar5 + 0x20) = iVar1 + -1;
    }
    CookingGraph_CookingLevelSimulation__Emit(param_1,9,uVar6,DAT_091f5700,0);
    CookingGraph_CookingLevelSimulation__Settle(param_1);
    CookingGraph_CookingLevelSimulation__CheckEnd(param_1);
    uVar4 = 1;
  }
  return uVar4;
}


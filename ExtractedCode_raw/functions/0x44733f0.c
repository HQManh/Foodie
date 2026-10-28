// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$CompleteTransfer
// address: 0x44733f0
// body: available
// range: 0x44733f0-0x4473567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4473564 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_CookingLevelSimulation__CompleteTransfer
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  if ((DAT_09518072 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9ca0);
    FUN_03f5c2a4(&DAT_09178730);
    FUN_03f5c2a4(&DAT_091e7d88);
    FUN_03f5c2a4(&DAT_0918f500);
    DAT_09518072 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0918f500);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass286_0___ctor(lVar3,0);
  if (lVar3 != 0) {
    cVar1 = *(char *)(param_1 + 0x38);
    *(undefined8 *)(lVar3 + 0x10) = param_4;
    if (cVar1 != '\0') {
      return 0;
    }
    if (*(long *)(param_1 + 0x178) != 0) {
      uVar4 = CookingGraph_Execution_CookingExecution__get_Transfers(*(long *)(param_1 + 0x178),0);
      uVar5 = thunk_FUN_03f9944c(DAT_09178730);
      FUN_05322d94(uVar5,lVar3,DAT_091e7d88,0);
      lVar6 = FUN_04ae5fd0(uVar4,uVar5,DAT_091c9ca0);
      if (lVar6 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = CookingGraph_CookingLevelSimulation__MomentPendingAfter
                          (param_1,*(undefined8 *)(lVar6 + 0x28));
        uVar2 = uVar2 ^ 1;
      }
      if (*(long *)(param_1 + 0x178) != 0) {
        uVar7 = CookingGraph_Execution_CookingExecution__CompleteTransfer
                          (*(long *)(param_1 + 0x178),param_2,param_3,*(undefined8 *)(lVar3 + 0x10),
                           0);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
        *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
        *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
        if ((uVar2 & 1) != 0) {
          CookingGraph_CookingLevelSimulation__Settle(param_1);
          CookingGraph_CookingLevelSimulation__CheckEnd(param_1);
        }
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


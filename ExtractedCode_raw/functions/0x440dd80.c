// rea decompile_all
// name: CookingGraph.CookingEstimatorBot$$SetAdaptiveStrategyPickInterval
// address: 0x440dd80
// body: available
// range: 0x440dd80-0x440de47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x440de40 to 0x440d4b8 CookingGraph.CookingEstimatorBot$$Verbose (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x440de44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingEstimatorBot__SetAdaptiveStrategyPickInterval
               (long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_09517ee4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091fb4b8);
    DAT_09517ee4 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Math__Max(1,param_2,0);
  if (lVar4 != 0) {
    lVar3 = *(long *)(param_1 + 0xb8);
    *(undefined4 *)(lVar4 + 0x6c) = uVar2;
    if (lVar3 != 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0440de44;
      *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x6c);
    }
    uVar1 = DAT_091fb4b8;
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x50);
    CookingGraph_CookingEstimatorBot__Verbose(param_1,1,uVar1,0,0,0);
    return;
  }
LAB_0440de44:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


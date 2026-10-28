// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$GridAssemblyState
// address: 0x4458c4c
// body: available
// range: 0x4458c4c-0x4458d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4458d38 to 0x4ae3154 FUN_04ae3154 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4458d3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__GridAssemblyState(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_09518029 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9af0);
    FUN_03f5c2a4(&DAT_09178628);
    FUN_03f5c2a4(&DAT_091e7a60);
    FUN_03f5c2a4(&DAT_0918f2a8);
    DAT_09518029 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f2a8);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass105_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_2);
    if (*(long *)(param_1 + 0x178) != 0) {
      uVar2 = CookingGraph_Execution_CookingExecution__get_Assemblies(*(long *)(param_1 + 0x178),0);
      uVar3 = thunk_FUN_03f9944c(DAT_09178628);
      FUN_05322d94(uVar3,lVar1,DAT_091e7a60,0);
      FUN_04ae3154(uVar2,uVar3,DAT_091c9af0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


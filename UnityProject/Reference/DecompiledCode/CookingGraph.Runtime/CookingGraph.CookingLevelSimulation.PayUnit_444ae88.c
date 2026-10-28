// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$PayUnit
// address: 0x444ae88
// body: available
// range: 0x444ae88-0x444af73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444af24 to 0x6f4c418 FUN_06f4c418 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x444af70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__PayUnit
               (long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09518007 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e478);
    DAT_09518007 = 1;
  }
  iVar1 = CookingGraph_CookingLevelSimulation__Debt(param_1,*param_3);
  uStack_48 = param_3[1];
  local_50 = *param_3;
  local_40 = param_3[2];
  iVar2 = CookingGraph_CookingLevelSimulation__TotalServings(param_1,&local_50);
  if (iVar1 + 1 < iVar2) {
    if (*(long *)(param_1 + 0xd0) != 0) {
      FUN_06f4c418(*(long *)(param_1 + 0xd0),*param_3,iVar1 + 1,DAT_0919e478);
      return;
    }
  }
  else if (*(long *)(param_1 + 0x178) != 0) {
    uStack_68 = param_2[1];
    local_70 = *param_2;
    local_60 = param_2[2];
    CookingGraph_Execution_CookingExecution__Consume
              (*(long *)(param_1 + 0x178),&local_70,*param_3,0);
    CookingGraph_CookingLevelSimulation__ForgetUnit(param_1,*param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


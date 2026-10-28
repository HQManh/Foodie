// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$CompleteSaveMe
// address: 0x4451044
// body: available
// range: 0x4451044-0x4451107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44510f4 to 0x445074c CookingGraph.CookingLevelSimulation$$CheckEnd (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4451104 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__CompleteSaveMe(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((DAT_0951801a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a82b8);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_0951801a = 1;
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_053d74ac(*(long *)(param_1 + 0x50),DAT_091a82b8);
    uVar1 = DAT_091f5700;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    CookingGraph_CookingLevelSimulation__Emit(param_1,0xf,0xffffffff,uVar1,0);
    if ((*(long *)(param_1 + 0x180) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x180) + 0x48), lVar2 != 0)) {
      if (*(char *)(lVar2 + 0x13) == '\0') {
        return;
      }
      CookingGraph_CookingLevelSimulation__Settle(param_1);
      CookingGraph_CookingLevelSimulation__CheckEnd(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


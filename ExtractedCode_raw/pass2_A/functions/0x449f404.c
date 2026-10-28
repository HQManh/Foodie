// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$PhaseOpen
// address: 0x449f404
// body: available
// range: 0x449f404-0x449f54b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449f528 to 0x4ab2d14 FUN_04ab2d14 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x449f544 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449f548 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_Execution_CookingExecution__PhaseOpen(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_095181c9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9298);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_091e6d60);
    FUN_03f5c2a4(&DAT_0918ef80);
    DAT_095181c9 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918ef80);
  System_Object___ctor(lVar1,0);
  if ((param_2 != 0) && (lVar1 != 0)) {
    uStack_48 = *(undefined8 *)(param_2 + 0x50);
    local_50 = *(undefined8 *)(param_2 + 0x48);
    local_40 = *(undefined8 *)(param_2 + 0x58);
    uVar2 = CookingGraph_Execution_CookingExecution__TryDish(param_1,&local_50,lVar1 + 0x10);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if ((*(long *)(lVar1 + 0x10) != 0) &&
       (lVar4 = *(long *)(*(long *)(lVar1 + 0x10) + 0x10), lVar4 != 0)) {
      if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_2 + 0x5c)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar4 = *(long *)(lVar4 + (long)(int)*(uint *)(param_2 + 0x5c) * 8 + 0x20);
      if (lVar4 != 0) {
        uVar5 = *(undefined8 *)(lVar4 + 0x28);
        uVar3 = thunk_FUN_03f9944c(DAT_09178b98);
        FUN_05315754(uVar3,lVar1,DAT_091e6d60,0);
        uVar3 = FUN_04ab2d14(uVar5,uVar3,DAT_091c9298);
        return uVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


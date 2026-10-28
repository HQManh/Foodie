// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c__DisplayClass118_0$$<ReleaseQueueHolds>b__2
// address: 0x448d078
// body: available
// range: 0x448d078-0x448d123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x448d120 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CookingGraph_CookingLevelSimulation_<>c__DisplayClass118_0__<ReleaseQueueHolds>b__2
               (long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((DAT_0951813a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c94a0);
    FUN_03f5c2a4(&DAT_09178c20);
    DAT_0951813a = 1;
  }
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    plVar4 = *(long **)(param_1 + 0x10);
    uVar2 = thunk_FUN_03f9944c(DAT_09178c20);
    if (plVar4 != (long *)0x0) {
      FUN_05317590(uVar2,plVar4,*(undefined8 *)(*plVar4 + 0x1c0),0);
      uVar1 = FUN_04ab6c28(uVar3,uVar2,DAT_091c94a0);
      return (uVar1 ^ 0xffffffff) & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


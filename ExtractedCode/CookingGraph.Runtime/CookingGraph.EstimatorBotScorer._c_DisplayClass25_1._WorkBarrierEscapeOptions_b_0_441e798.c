// rea decompile_all
// name: CookingGraph.EstimatorBotScorer.<>c__DisplayClass25_1$$<WorkBarrierEscapeOptions>b__0
// address: 0x441e798
// body: available
// range: 0x441e798-0x441e87f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x441e87c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookingGraph_EstimatorBotScorer_<>c__DisplayClass25_1__<WorkBarrierEscapeOptions>b__0
               (long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((DAT_09517f2b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184160);
    FUN_03f5c2a4(&DAT_091ada38);
    DAT_09517f2b = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    if (*(int *)(*(long *)(param_2 + 0x18) + 0x18) < 2) {
      return false;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
      if (*(int *)(DAT_09184160 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = CookingGraph_EstimatorBotScorer__HasAnyInput(param_2,uVar4);
      if ((uVar3 & 1) == 0) {
        return false;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(DAT_09184160 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = CookingGraph_EstimatorBotScorer__AvailableBatches(param_2,uVar4);
      if (*(long *)(param_1 + 0x18) != 0) {
        iVar2 = CookingGraph_EstimatorBotScorer__AvailableBatches
                          (param_2,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10));
        return iVar2 < iVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


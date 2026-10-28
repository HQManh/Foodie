// rea decompile_all
// name: CookingGraph.IngredientQueueGenerator.<OrderedItems>d__4$$System.IDisposable.Dispose
// address: 0x4439024
// body: available
// range: 0x4439024-0x443911b inclusive
// range: 0x443914c-0x4439153 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4439118 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4439150 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04439114) */
/* WARNING: Removing unreachable block (ram,0x0443914c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CookingGraph_IngredientQueueGenerator_<OrderedItems>d__4__System_IDisposable_Dispose
               (long param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 + 7U < 10) {
    uVar2 = 1 << (ulong)(iVar1 + 7U & 0x1f);
    if ((uVar2 & 0x207) == 0) {
      if ((uVar2 & 0x118) != 0) {
        if ((iVar1 == 1) || (iVar1 == -4)) {
          CookingGraph_IngredientQueueGenerator_<OrderedItems>d__4__<>m__Finally2();
        }
        CookingGraph_IngredientQueueGenerator_<OrderedItems>d__4__<>m__Finally1(param_1);
      }
    }
    else {
      if ((iVar1 + 7U < 10) && ((1 << (ulong)(iVar1 + 7U & 0x1f) & 0x203U) != 0)) {
        if ((iVar1 == 2) || (iVar1 == -7)) {
          CookingGraph_IngredientQueueGenerator_<OrderedItems>d__4__<>m__Finally5(param_1);
        }
        CookingGraph_IngredientQueueGenerator_<OrderedItems>d__4__<>m__Finally4(param_1);
      }
      CookingGraph_IngredientQueueGenerator_<OrderedItems>d__4__<>m__Finally3(param_1);
    }
  }
  return;
}


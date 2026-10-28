// rea decompile_all
// name: CookingGraph.IngredientQueueGenerator.<>c__DisplayClass4_0.<<OrderedItems>g__Walk|0>d$$System.IDisposable.Dispose
// address: 0x443881c
// body: available
// range: 0x443881c-0x443888b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4438888 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04438884) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CookingGraph_IngredientQueueGenerator_<>c__DisplayClass4_0_<<OrderedItems>g__Walk_0>d__System_IDisposable_Dispose
               (long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xfffffffe) == 0xfffffffc) {
    if (uVar1 != 0xfffffffc) goto LAB_04438868;
  }
  else if (uVar1 != 2) {
    return;
  }
  CookingGraph_IngredientQueueGenerator_<>c__DisplayClass4_0_<<OrderedItems>g__Walk_0>d__<>m__Finally2
            ();
LAB_04438868:
  CookingGraph_IngredientQueueGenerator_<>c__DisplayClass4_0_<<OrderedItems>g__Walk_0>d__<>m__Finally1
            (param_1);
  return;
}


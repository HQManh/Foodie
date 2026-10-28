// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingBlenderVisual$$Has
// address: 0x44c85bc
// body: available
// range: 0x44c85bc-0x44c8637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c8634 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookOrder_Cooking_Implement_CookingBlenderVisual__Has(long *param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x1c8))(param_1,0,0,*(undefined8 *)(*param_1 + 0x1d0));
    uVar2 = System_String__IsNullOrEmpty(param_2,0);
    bVar1 = false;
    if ((uVar2 & 1) == 0) {
      lVar3 = Spine_Unity_SkeletonRenderer__get_Skeleton(param_1,0);
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) goto LAB_044c8634;
      lVar3 = Spine_SkeletonData__FindAnimation(*(long *)(lVar3 + 0x10),param_2,0);
      bVar1 = lVar3 != 0;
    }
    return bVar1;
  }
LAB_044c8634:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


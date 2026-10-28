// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation.<>c__DisplayClass173_3$$<Refresh>b__7
// address: 0x44d8180
// body: available
// range: 0x44d8180-0x44d8287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d826c to 0x4ab6608 FUN_04ab6608 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44d8284 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass173_3__<Refresh>b__7
          (long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((DAT_0951830b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9460);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_091a94c0);
    FUN_03f5c2a4(&DAT_091e6fe0);
    DAT_0951830b = 1;
  }
  if (param_2 != 0) {
    if ((*(int *)(param_2 + 0x10) != 2) || (*(int *)(param_2 + 0x20) != *(int *)(param_1 + 0x10))) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x30);
      lVar3 = *(long *)(lVar2 + 0x20);
      if (lVar3 == 0) {
        lVar3 = thunk_FUN_03f9944c(DAT_09178768);
        FUN_053136a4(lVar3,lVar2,DAT_091e6fe0,0);
        *(long *)(lVar2 + 0x20) = lVar3;
        thunk_FUN_03f5d7b8((long *)(lVar2 + 0x20),lVar3);
      }
      uVar1 = FUN_04ab6608(uVar1,lVar3,DAT_091c9460);
      return uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


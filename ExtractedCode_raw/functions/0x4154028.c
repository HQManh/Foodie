// rea decompile_all
// name: FUN_04154028
// address: 0x4154028
// body: available
// range: 0x4154028-0x41540cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41540c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_04154028(void)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int in_w8;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  
  if (in_w8 == 0) {
    FUN_03f5c424();
  }
  uVar2 = CakeOrder_InGame_Pasta_PastaPieceTable__BaseId(unaff_w20,0);
  *unaff_x19 = uVar2;
  thunk_FUN_03f5d7b8();
  uVar2 = AnhPD_FoodOrder_PastaOrderStrategy__get_Config();
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    FUN_03f5c424(*unaff_x21);
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = AnhPD_FoodOrder_PastaOrderStrategy__get_Config();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar5 = (long *)AnhPD_FoodOrder_RecipeConfigSO__GetIngredientPrefab(lVar4,*unaff_x19,0);
    bVar1 = false;
    if (plVar5 != (long *)0x0) {
      bVar1 = *plVar5 == DAT_09184740;
    }
  }
  return bVar1;
}


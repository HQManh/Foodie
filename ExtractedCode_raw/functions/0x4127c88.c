// rea decompile_all
// name: AnhPD.FoodOrder.UIHint$$InitHolderForId
// address: 0x4127c88
// body: available
// range: 0x4127c88-0x4127e23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4127d9c to 0x4127e80 AnhPD.FoodOrder.UIHintRecipe$$Init (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4127e0c to 0x4127e24 AnhPD.FoodOrder.UIHint$$ShowFlexibleRecipe (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4127e20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UIHint__InitHolderForId(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((DAT_095162e1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184728);
    FUN_03f5c2a4(&DAT_091aa770);
    FUN_03f5c2a4(&DAT_091aa778);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095162e1 = 1;
  }
  uVar1 = AnhPD_FoodOrder_FlexibleId__IsFlexible(param_3,0);
  lVar2 = AnhPD_FoodOrder_UIHint__get_Info();
  if ((uVar1 & 1) == 0) {
    if (lVar2 != 0) {
      lVar2 = AnhPD_FoodOrder_LevelInfo__GetAllDisplayConfigInRecipe(lVar2,param_3,1,0);
      if (lVar2 == 0) {
        return;
      }
      if (*(int *)(lVar2 + 0x18) < 1) {
        return;
      }
      uVar3 = FUN_057e0998(lVar2,0,DAT_091aa778);
      if (param_2 != 0) {
        AnhPD_FoodOrder_UIHintRecipe__Init(param_2,uVar3);
        return;
      }
    }
    goto LAB_04127e20;
  }
  uVar3 = AnhPD_FoodOrder_FlexibleId__BaseOf(param_3,0);
  if (lVar2 == 0) goto LAB_04127e20;
  plVar4 = (long *)AnhPD_FoodOrder_LevelInfo__GetIngredientPrefab(lVar2,uVar3,0);
  if (plVar4 == (long *)0x0) {
LAB_04127d40:
    plVar4 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_09184728 + 0x130)) goto LAB_04127d40;
    if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8) !=
        DAT_09184728) {
      plVar4 = (long *)0x0;
    }
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(plVar4,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (plVar4 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar4 + 0x268))(plVar4,param_3,*(undefined8 *)(*plVar4 + 0x270));
    AnhPD_FoodOrder_UIHint__ShowFlexibleRecipe(uVar3,uVar3,param_2);
    return;
  }
LAB_04127e20:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


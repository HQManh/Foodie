// rea decompile_all
// name: AnhPD.FoodOrder.UIHint$$ShowRecipe
// address: 0x41282cc
// body: available
// range: 0x41282cc-0x412857f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4128574 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4128578 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x412857c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UIHint__ShowRecipe
               (long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_68;
  undefined8 *puStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  long local_40;
  
  if ((DAT_095162e2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4ac0);
    FUN_03f5c2a4(&DAT_091a4ac8);
    FUN_03f5c2a4(&DAT_091a4ad0);
    FUN_03f5c2a4(&DAT_09184728);
    FUN_03f5c2a4(&DAT_091b13b8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095162e2 = 1;
  }
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = 0;
  *(undefined8 *)(param_1 + 0x148) = param_4;
  thunk_FUN_03f5d7b8(param_1 + 0x148,param_4);
  if ((param_3 & 1) != 0) {
    if ((*(long *)(param_1 + 0xf8) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0xf8),0), lVar1 == 0))
    goto LAB_0412857c;
    UnityEngine_GameObject__SetActive(lVar1,0,0);
  }
  if (*(long *)(param_1 + 0xf0) == 0) goto LAB_0412857c;
  UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0xf0),param_3 & 1,0);
  if (*(long *)(param_1 + 0x118) == 0) goto LAB_0412857c;
  FUN_057e185c(&local_68,*(long *)(param_1 + 0x118),DAT_091b13b8);
  local_40 = local_58;
  puStack_48 = puStack_60;
  local_50 = local_68;
  local_68 = 0;
  puStack_60 = &local_50;
  while (uVar2 = FUN_071bd28c(&local_50,DAT_091a4ac8), (uVar2 & 1) != 0) {
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = UnityEngine_Component__get_gameObject(local_40,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(lVar1,0,0);
  }
  FUN_071bd288(&local_50,DAT_091a4ac0);
  lVar7 = *(long *)(param_1 + 0xd0);
  lVar1 = AnhPD_FoodOrder_UIHint__get_Info();
  if ((lVar1 == 0) ||
     (uVar3 = AnhPD_FoodOrder_LevelInfo__GetIngredientSprite(lVar1,param_2,0), lVar7 == 0))
  goto LAB_0412857c;
  UnityEngine_UI_Image__set_sprite(lVar7,uVar3,0);
  uVar3 = AnhPD_FoodOrder_FlexibleId__BaseOf(param_2,0);
  uVar4 = AnhPD_FoodOrder_UIHint__GetHolder(param_1,param_2);
  uVar2 = AnhPD_FoodOrder_FlexibleId__IsFlexible(param_2,0);
  if ((uVar2 & 1) == 0) {
    AnhPD_FoodOrder_UIHint__ShowCombinationsOnly(uVar2,param_2,uVar4);
  }
  else {
    lVar1 = AnhPD_FoodOrder_UIHint__get_Info();
    if (lVar1 == 0) goto LAB_0412857c;
    plVar5 = (long *)AnhPD_FoodOrder_LevelInfo__GetIngredientPrefab(lVar1,uVar3,0);
    if (plVar5 == (long *)0x0) {
LAB_041284b0:
      plVar5 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_09184728 + 0x130)) goto LAB_041284b0;
      if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8) !=
          DAT_09184728) {
        plVar5 = (long *)0x0;
      }
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(plVar5,0);
    if ((uVar2 & 1) != 0) {
      if (plVar5 == (long *)0x0) goto LAB_0412857c;
      uVar6 = (**(code **)(*plVar5 + 0x268))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x270));
      AnhPD_FoodOrder_UIHint__ShowFlexibleRecipe(uVar6,uVar6,uVar4);
    }
  }
  plVar5 = *(long **)(param_1 + 0xe8);
  lVar1 = AnhPD_FoodOrder_UIHint__get_Info();
  if ((lVar1 != 0) &&
     (uVar3 = AnhPD_FoodOrder_LevelInfo__GetIngredientName(lVar1,uVar3,0), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x558))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x560));
    return;
  }
LAB_0412857c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


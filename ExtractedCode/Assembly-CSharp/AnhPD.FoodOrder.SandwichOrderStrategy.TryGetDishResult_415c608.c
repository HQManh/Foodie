// rea decompile_all
// name: AnhPD.FoodOrder.SandwichOrderStrategy$$TryGetDishResult
// address: 0x415c608
// body: available
// range: 0x415c608-0x415c7ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x415c7ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_SandwichOrderStrategy__TryGetDishResult
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_09516505 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184728);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918a568);
    DAT_09516505 = 1;
  }
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  *param_5 = 0;
  thunk_FUN_03f5d7b8(param_5,0);
  if (*(int *)(DAT_0918a568 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = AnhPD_FoodOrder_SandwichOrderStrategy__get_Config();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Equality(lVar2,0,0);
  if ((uVar3 & 1) == 0) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = AnhPD_FoodOrder_RecipeConfigSO__TryGetDishBaseId(lVar2,param_2,&local_48,0);
    if (((uVar3 & 1) != 0) &&
       (plVar4 = (long *)AnhPD_FoodOrder_RecipeConfigSO__GetIngredientPrefab(lVar2,local_48,0),
       plVar4 != (long *)0x0)) {
      lVar2 = *plVar4;
      if ((*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(lVar2 + 0x130)) &&
         (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8) ==
          DAT_09184728)) {
        (**(code **)(lVar2 + 0x2c8))
                  (&local_78,plVar4,param_3,param_4,*(undefined8 *)(lVar2 + 0x2d0));
        uStack_58 = uStack_70;
        local_60 = local_78;
        local_50 = local_68;
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_60,0);
        if ((uVar3 & 1) == 0) {
          *param_5 = local_48;
          thunk_FUN_03f5d7b8(param_5);
          uVar1 = 1;
        }
        else {
          uVar1 = 0;
        }
        goto LAB_0415c760;
      }
    }
  }
  uVar1 = AnhPD_FoodOrder_OrderStrategy__TryGetDishResult(param_1,param_2,param_3,param_4,param_5,0)
  ;
LAB_0415c760:
  return uVar1 & 1;
}


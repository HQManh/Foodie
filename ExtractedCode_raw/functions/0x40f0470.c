// rea decompile_all
// name: AnhPD.FoodOrder.IngredientRenderSlot$$Show
// address: 0x40f0470
// body: available
// range: 0x40f0470-0x40f05ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f05f8 to 0x40f0b50 AnhPD.FoodOrder.IngredientRenderSlot$$SetCount (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40f05fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientRenderSlot__Show
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5
               ,long param_6,undefined8 param_7,undefined4 param_8)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = param_2;
  uVar6 = param_3;
  if ((DAT_095160e5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160e5 = 1;
  }
  lVar1 = AnhPD_FoodOrder_IngredientRenderSlot__get_Renderer(param_6);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(char *)(param_6 + 0x50) == '\0') {
    if ((lVar1 == 0) || (lVar3 = UnityEngine_Component__get_transform(lVar1,0), lVar3 == 0))
    goto LAB_040f05fc;
    uVar4 = UnityEngine_Transform__get_localPosition(lVar3,0);
    *(undefined4 *)(param_6 + 0x44) = uVar4;
    *(undefined4 *)(param_6 + 0x48) = uVar5;
    *(undefined4 *)(param_6 + 0x4c) = uVar6;
    *(undefined1 *)(param_6 + 0x50) = 1;
  }
  else if (lVar1 == 0) goto LAB_040f05fc;
  lVar3 = UnityEngine_Component__get_gameObject(lVar1,0);
  if (lVar3 != 0) {
    UnityEngine_GameObject__SetActive(lVar3,1,0);
    UnityEngine_SpriteRenderer__set_sprite(lVar1,param_7,0);
    lVar3 = UnityEngine_Component__get_transform(lVar1,0);
    if (lVar3 != 0) {
      UnityEngine_Transform__set_localScale(param_1,param_2,param_3,lVar3,0);
      lVar1 = UnityEngine_Component__get_transform(lVar1,0);
      if (lVar1 != 0) {
        UnityEngine_Transform__set_localPosition
                  (param_4 + *(float *)(param_6 + 0x44),param_5 + *(float *)(param_6 + 0x48),
                   *(float *)(param_6 + 0x4c) + 0.0,lVar1,0);
        AnhPD_FoodOrder_IngredientRenderSlot__SetCount(param_6,param_8);
        return;
      }
    }
  }
LAB_040f05fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$SetAlpha
// address: 0x40ee490
// body: available
// range: 0x40ee490-0x40ee613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ee60c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ee610 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientConveyorItem__SetAlpha(undefined4 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((DAT_095160c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160c8 = 1;
  }
  lVar1 = AnhPD_FoodOrder_IngredientConveyorItem__get_TintRenderers(param_2);
  if (lVar1 == 0) {
LAB_040ee610:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
    uVar6 = 0;
    uVar3 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
    lVar5 = lVar1 + 0x20;
    do {
      if (uVar3 <= uVar6) goto LAB_040ee60c;
      uVar4 = *(undefined8 *)(lVar5 + uVar6 * 8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
      if ((uVar3 & 1) != 0) {
        if (*(uint *)(lVar1 + 0x18) <= uVar6) goto LAB_040ee60c;
        lVar2 = *(long *)(lVar5 + uVar6 * 8);
        if (lVar2 == 0) goto LAB_040ee610;
        UnityEngine_SpriteRenderer__get_color(lVar2,0);
        if (*(uint *)(lVar1 + 0x18) <= uVar6) goto LAB_040ee60c;
        lVar2 = *(long *)(lVar5 + uVar6 * 8);
        if (lVar2 == 0) goto LAB_040ee610;
        UnityEngine_SpriteRenderer__set_color(lVar2,0);
      }
      uVar3 = (ulong)*(uint *)(lVar1 + 0x18);
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)*(uint *)(lVar1 + 0x18));
  }
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 != 0) {
    lVar5 = 4;
    do {
      uVar6 = lVar5 - 4;
      if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar6) {
        return;
      }
      if (*(uint *)(lVar1 + 0x18) <= uVar6) goto LAB_040ee60c;
      uVar4 = *(undefined8 *)(lVar1 + lVar5 * 8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
      if ((uVar3 & 1) != 0) {
        lVar1 = *(long *)(param_2 + 0x20);
        if (lVar1 == 0) goto LAB_040ee610;
        if (*(uint *)(lVar1 + 0x18) <= uVar6) {
LAB_040ee60c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(long *)(lVar1 + lVar5 * 8) == 0) goto LAB_040ee610;
        AnhPD_FoodOrder_IngredientRenderSlot__SetAlpha(param_1);
      }
      lVar1 = *(long *)(param_2 + 0x20);
      lVar5 = lVar5 + 1;
    } while (lVar1 != 0);
    if ((int)lVar5 + -4 < 0) goto LAB_040ee610;
  }
  return;
}


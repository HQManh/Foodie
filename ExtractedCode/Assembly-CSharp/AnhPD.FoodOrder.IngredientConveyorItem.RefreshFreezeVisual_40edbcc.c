// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$RefreshFreezeVisual
// address: 0x40edbcc
// body: available
// range: 0x40edbcc-0x40edd3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40edd38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientConveyorItem__RefreshFreezeVisual(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((DAT_095160d0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160d0 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x9c);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x30),0), lVar3 == 0))
    goto LAB_040edd38;
    UnityEngine_GameObject__SetActive(lVar3,0 < iVar1,0);
    if (0 < iVar1) {
      uVar5 = AnhPD_FoodOrder_IngredientConveyorItem__CurrentIceSprite(param_1);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_040edd38;
        UnityEngine_SpriteRenderer__set_sprite(*(long *)(param_1 + 0x30),uVar5,0);
      }
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x40),0), lVar3 != 0)) {
    UnityEngine_GameObject__SetActive(lVar3,0 < iVar1,0);
    if (iVar1 < 1) {
      return;
    }
    plVar4 = *(long **)(param_1 + 0x40);
    uVar5 = System_Int32__ToString((int *)(param_1 + 0x9c),0);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x040edd24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x558))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x560));
      return;
    }
  }
LAB_040edd38:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


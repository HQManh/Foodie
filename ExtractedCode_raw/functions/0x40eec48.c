// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$ResetCoverVisual
// address: 0x40eec48
// body: available
// range: 0x40eec48-0x40eedcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40eedb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40eedc8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientConveyorItem__ResetCoverVisual(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_095160ce & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160ce = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if (((uVar1 & 1) == 0) || (*(char *)(param_1 + 0x200) == '\0')) {
    return;
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar2 = UnityEngine_GameObject__get_transform(*(long *)(param_1 + 0x38),0), lVar2 != 0)) {
    UnityEngine_Transform__set_localPosition
              (*(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1dc),
               *(undefined4 *)(param_1 + 0x1e0),lVar2,0);
    UnityEngine_Transform__set_localScale
              (*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8),
               *(undefined4 *)(param_1 + 0x1ec),lVar2,0);
    lVar2 = *(long *)(param_1 + 0x1f0);
    if (lVar2 == 0) {
      return;
    }
    lVar5 = 4;
    do {
      uVar1 = lVar5 - 4;
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar1) {
        return;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_040eedc8;
      uVar4 = *(undefined8 *)(lVar2 + lVar5 * 8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
      if ((uVar3 & 1) != 0) {
        lVar2 = *(long *)(param_1 + 0x1f0);
        if (lVar2 == 0) break;
        if (*(uint *)(lVar2 + 0x18) <= uVar1) {
LAB_040eedc8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar2 = *(long *)(lVar2 + lVar5 * 8);
        if (lVar2 == 0) break;
        UnityEngine_SpriteRenderer__get_color(lVar2,0);
        if (*(long *)(param_1 + 0x1f8) == 0) break;
        if (*(uint *)(*(long *)(param_1 + 0x1f8) + 0x18) <= uVar1) goto LAB_040eedc8;
        lVar2 = *(long *)(param_1 + 0x1f0);
        if (lVar2 == 0) break;
        if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_040eedc8;
        lVar2 = *(long *)(lVar2 + lVar5 * 8);
        if (lVar2 == 0) break;
        UnityEngine_SpriteRenderer__set_color(lVar2,0);
      }
      lVar2 = *(long *)(param_1 + 0x1f0);
      lVar5 = lVar5 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


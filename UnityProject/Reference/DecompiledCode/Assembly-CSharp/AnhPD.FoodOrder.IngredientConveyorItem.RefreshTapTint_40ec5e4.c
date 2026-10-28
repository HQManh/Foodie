// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$RefreshTapTint
// address: 0x40ec5e4
// body: available
// range: 0x40ec5e4-0x40ec85b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ec854 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ec858 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientConveyorItem__RefreshTapTint(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_70;
  ulong uStack_68;
  
  if ((DAT_095160bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a8658);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160bc = 1;
  }
  lVar2 = AnhPD_FoodOrder_IngredientConveyorItem__get_TintRenderers(param_1);
  if (*(char *)(param_1 + 0xe1) == '\0') {
    if (*(char *)(param_1 + 0xe0) == '\0') {
      uStack_68 = *(ulong *)(param_1 + 0x80);
      local_70 = *(undefined8 *)(param_1 + 0x78);
    }
    else {
      uStack_68 = *(ulong *)(param_1 + 0x70);
      local_70 = *(undefined8 *)(param_1 + 0x68);
    }
  }
  else {
    uStack_68 = *(ulong *)(param_1 + 0x70);
    local_70 = *(undefined8 *)(param_1 + 0x68);
    if ((*(char *)(param_1 + 0xe0) == '\0') && (0.0 < *(float *)(param_1 + 0xe4))) {
      fVar8 = *(float *)(param_1 + 0xe4) * 0.5;
      fVar11 = 1.0;
      if (fVar8 <= 1.0) {
        fVar11 = fVar8;
      }
      fVar12 = 0.0;
      if (0.0 <= fVar8) {
        fVar12 = fVar11;
      }
      fVar11 = (float)((ulong)local_70 >> 0x20);
      fVar8 = (float)(uStack_68 >> 0x20);
      local_70 = CONCAT44(fVar11 + ((float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) - fVar11
                                   ) * fVar12,
                          (float)local_70 +
                          ((float)*(undefined8 *)(param_1 + 0x78) - (float)local_70) * fVar12);
      uStack_68 = CONCAT44(fVar8 + ((float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) - fVar8)
                                   * fVar12,
                           (float)uStack_68 +
                           ((float)*(undefined8 *)(param_1 + 0x80) - (float)uStack_68) * fVar12);
    }
  }
  if (*(long *)(param_1 + 0x1d0) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = DG_Tweening_TweenExtensions__IsActive(*(long *)(param_1 + 0x1d0),0);
    uVar1 = uVar1 ^ 1;
  }
  if (lVar2 == 0) {
LAB_040ec858:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar9 = (undefined4)((ulong)local_70 >> 0x20);
  uVar10 = (undefined4)(uStack_68 >> 0x20);
  if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
    uVar7 = 0;
    uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
    lVar6 = lVar2 + 0x20;
    do {
      if (uVar4 <= uVar7) goto LAB_040ec854;
      uVar5 = *(undefined8 *)(lVar6 + uVar7 * 8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar4 & 1) != 0) {
        if ((uVar1 & 1) == 0) {
          if (*(uint *)(lVar2 + 0x18) <= uVar7) goto LAB_040ec854;
          if (*(long *)(param_1 + 0x208) == 0) goto LAB_040ec858;
          uVar4 = FUN_053ebc3c(*(long *)(param_1 + 0x208),*(undefined8 *)(lVar6 + uVar7 * 8),
                               DAT_091a8658);
          if ((uVar4 & 1) != 0) goto LAB_040ec794;
        }
        if (*(uint *)(lVar2 + 0x18) <= uVar7) goto LAB_040ec854;
        lVar3 = *(long *)(lVar6 + uVar7 * 8);
        if (lVar3 == 0) goto LAB_040ec858;
        UnityEngine_SpriteRenderer__set_color(local_70,uVar9,uStack_68 & 0xffffffff,uVar10,lVar3,0);
      }
LAB_040ec794:
      uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)*(uint *)(lVar2 + 0x18));
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar6 = 4;
    do {
      uVar7 = lVar6 - 4;
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar7) {
        return;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar7) goto LAB_040ec854;
      uVar5 = *(undefined8 *)(lVar2 + lVar6 * 8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar4 & 1) != 0) {
        lVar2 = *(long *)(param_1 + 0x20);
        if (lVar2 == 0) goto LAB_040ec858;
        if (*(uint *)(lVar2 + 0x18) <= uVar7) {
LAB_040ec854:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(long *)(lVar2 + lVar6 * 8) == 0) goto LAB_040ec858;
        AnhPD_FoodOrder_IngredientRenderSlot__SetTint(local_70,uVar9,uStack_68 & 0xffffffff,uVar10);
      }
      lVar2 = *(long *)(param_1 + 0x20);
      lVar6 = lVar6 + 1;
    } while (lVar2 != 0);
    if ((int)lVar6 + -4 < 0) goto LAB_040ec858;
  }
  return;
}


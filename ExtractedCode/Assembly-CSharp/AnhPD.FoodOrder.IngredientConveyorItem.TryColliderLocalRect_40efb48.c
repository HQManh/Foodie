// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$TryColliderLocalRect
// address: 0x40efb48
// body: available
// range: 0x40efb48-0x40efe1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40efe1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_IngredientConveyorItem__TryColliderLocalRect
          (long param_1,float *param_2,float *param_3)

{
  ulong uVar1;
  long lVar2;
  float *pfVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_78;
  float fStack_74;
  float local_70;
  undefined8 local_6c;
  float local_64;
  
  if ((DAT_095160db & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181f88);
    FUN_03f5c2a4(&DAT_091c5320);
    FUN_03f5c2a4(&DAT_09187e98);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160db = 1;
  }
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  pfVar3 = *(float **)(DAT_0918cbd0 + 0xb8);
  fVar6 = *pfVar3;
  fVar7 = pfVar3[1];
  fVar9 = pfVar3[2];
  param_3[2] = fVar9;
  *param_3 = fVar6;
  param_3[1] = fVar7;
  *param_2 = fVar6;
  param_2[1] = fVar7;
  lVar2 = DAT_09188ad0;
  param_2[2] = fVar9;
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) == 0) {
    plVar5 = (long *)FUN_04a6a14c(param_1,DAT_091c5320);
  }
  else {
    plVar5 = *(long **)(param_1 + 0x50);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(plVar5,0);
  if ((uVar1 & 1) == 0) {
LAB_040efd3c:
    uVar4 = 0;
  }
  else {
    if (plVar5 == (long *)0x0) goto LAB_040efe1c;
    if (*plVar5 == DAT_09181f88) {
      fVar6 = (float)UnityEngine_BoxCollider2D__get_size(plVar5,0);
      fVar12 = fVar7 * 0.5;
      fVar9 = (float)UnityEngine_Collider2D__get_offset(plVar5,0);
      uVar4 = UnityEngine_Component__get_transform(plVar5,0);
      fVar10 = fVar7 - fVar12;
      fVar11 = 0.0;
      fVar8 = (float)AnhPD_FoodOrder_IngredientConveyorItem__ToItemLocal
                               (fVar9 - fVar6 * 0.5,param_1,uVar4);
      *param_2 = fVar8;
      param_2[1] = fVar10;
      param_2[2] = fVar11;
      uVar4 = UnityEngine_Component__get_transform(plVar5,0);
      fVar7 = fVar7 + fVar12;
      fVar8 = 0.0;
      fVar6 = (float)AnhPD_FoodOrder_IngredientConveyorItem__ToItemLocal
                               (fVar9 + fVar6 * 0.5,param_1,uVar4);
    }
    else {
      UnityEngine_Collider2D__get_bounds(&local_78,plVar5,0);
      fVar6 = (float)local_6c;
      fVar7 = (float)((ulong)local_6c >> 0x20);
      if ((fVar6 + fVar6) * (fVar6 + fVar6) + (fVar7 + fVar7) * (fVar7 + fVar7) +
          (local_64 + local_64) * (local_64 + local_64) <= **(float **)(DAT_09187e98 + 0xb8))
      goto LAB_040efd3c;
      lVar2 = UnityEngine_Component__get_transform(param_1,0);
      if (lVar2 == 0) {
LAB_040efe1c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar10 = local_70 - local_64;
      fVar8 = fStack_74 - fVar7;
      fVar9 = (float)UnityEngine_Transform__InverseTransformPoint(local_78 - fVar6,lVar2,0);
      *param_2 = fVar9;
      param_2[1] = fVar8;
      param_2[2] = fVar10;
      lVar2 = UnityEngine_Component__get_transform(param_1,0);
      if (lVar2 == 0) goto LAB_040efe1c;
      fVar8 = local_70 + local_64;
      fVar7 = fStack_74 + fVar7;
      fVar6 = (float)UnityEngine_Transform__InverseTransformPoint(local_78 + fVar6,lVar2,0);
    }
    *param_3 = fVar6;
    param_3[1] = fVar7;
    param_3[2] = fVar8;
    fVar9 = *param_2;
    if (fVar6 < fVar9) {
      *param_2 = fVar6;
      *param_3 = fVar9;
    }
    fVar6 = param_2[1];
    if (fVar6 <= fVar7) {
      uVar4 = 1;
    }
    else {
      uVar4 = 1;
      param_2[1] = fVar7;
      param_3[1] = fVar6;
    }
  }
  return uVar4;
}


// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$NearestAnchorPair
// address: 0x40ef6ac
// body: available
// range: 0x40ef6ac-0x40ef8eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ef8e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientConveyorItem__NearestAnchorPair
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               float *param_6,float *param_7)

{
  ulong uVar1;
  long lVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_095160d7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160d7 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(param_4,0);
  if ((uVar1 & 1) == 0) {
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    pfVar3 = *(float **)(DAT_0918cbd0 + 0xb8);
    fVar6 = *pfVar3;
    param_2 = pfVar3[1];
    param_3 = pfVar3[2];
  }
  else {
    if ((param_4 == 0) || (lVar2 = UnityEngine_Component__get_transform(param_4,0), lVar2 == 0))
    goto LAB_040ef8e8;
    fVar6 = (float)UnityEngine_Transform__get_position(lVar2,0);
  }
  *param_6 = fVar6;
  param_6[1] = param_2;
  lVar2 = DAT_09188ad0;
  param_6[2] = param_3;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(param_5,0);
  if ((uVar1 & 1) == 0) {
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    pfVar3 = *(float **)(DAT_0918cbd0 + 0xb8);
    fVar6 = *pfVar3;
    param_2 = pfVar3[1];
    param_3 = pfVar3[2];
  }
  else {
    if ((param_5 == 0) || (lVar2 = UnityEngine_Component__get_transform(param_5,0), lVar2 == 0))
    goto LAB_040ef8e8;
    fVar6 = (float)UnityEngine_Transform__get_position(lVar2,0);
  }
  *param_7 = fVar6;
  param_7[1] = param_2;
  lVar2 = DAT_09188ad0;
  param_7[2] = param_3;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(param_4,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(param_5,0);
    if ((uVar1 & 1) != 0) {
      if (param_4 == 0) {
LAB_040ef8e8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar4 = 0;
      fVar6 = 3.4028235e+38;
      do {
        fVar7 = (float)AnhPD_FoodOrder_IngredientConveyorItem__RopeAnchor(param_4,iVar4);
        if (param_5 == 0) goto LAB_040ef8e8;
        iVar5 = 0;
        fVar9 = param_2;
        fVar10 = param_3;
        do {
          fVar8 = (float)AnhPD_FoodOrder_IngredientConveyorItem__RopeAnchor(param_5,iVar5);
          fVar11 = (param_3 - fVar10) * (param_3 - fVar10) +
                   (fVar7 - fVar8) * (fVar7 - fVar8) + (param_2 - fVar9) * (param_2 - fVar9);
          if (fVar11 < fVar6) {
            *param_6 = fVar7;
            param_6[1] = param_2;
            param_6[2] = param_3;
            *param_7 = fVar8;
            param_7[1] = fVar9;
            param_7[2] = fVar10;
            fVar6 = fVar11;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != 4);
        iVar4 = iVar4 + 1;
        param_2 = fVar9;
        param_3 = fVar10;
      } while (iVar4 != 4);
    }
  }
  return;
}


// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$PlaceInSlots
// address: 0x422cc4c
// body: available
// range: 0x422cc4c-0x422d0cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422d0c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422d0c8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderIngredientList__PlaceInSlots
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float local_a4;
  
  if ((DAT_09516d90 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adca8);
    FUN_03f5c2a4(&DAT_091b19e8);
    FUN_03f5c2a4(&DAT_091ae388);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c68);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09516d90 = 1;
  }
  uVar10 = *(undefined8 *)(param_5 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_5 + 0xb8) == 0) goto LAB_0422d0c0;
    UnityEngine_Behaviour__set_enabled(*(long *)(param_5 + 0xb8),0,0);
  }
  if (*(long *)(param_5 + 0xb0) != 0) {
    fVar13 = (float)UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0xb0),0);
    uVar10 = *(undefined8 *)(param_5 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
    if ((uVar6 & 1) == 0) {
      lVar11 = thunk_FUN_03f9944c(DAT_09189c68);
      UnityEngine_RectOffset___ctor(lVar11,0);
      lVar12 = *(long *)(param_5 + 0xb8);
    }
    else {
      lVar12 = *(long *)(param_5 + 0xb8);
      if (lVar12 == 0) goto LAB_0422d0c0;
      lVar11 = *(long *)(lVar12 + 0x20);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Implicit(lVar12,0);
    local_a4 = 0.0;
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_5 + 0xb8) == 0) goto LAB_0422d0c0;
      local_a4 = *(float *)(*(long *)(param_5 + 0xb8) + 0x60) * 0.5;
    }
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar11 != 0) {
      iVar2 = UnityEngine_RectOffset__get_left(lVar11,0);
      iVar3 = UnityEngine_RectOffset__get_right(lVar11,0);
      iVar4 = UnityEngine_RectOffset__get_top(lVar11,0);
      iVar5 = UnityEngine_RectOffset__get_bottom(lVar11,0);
      lVar11 = *(long *)(param_5 + 0x98);
      if (lVar11 != 0) {
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (0 < param_6) {
          uVar6 = (ulong)(uint)(param_3 + fVar13);
          iVar9 = 0;
          fVar21 = (param_4 + param_2) - (float)iVar4;
          param_2 = param_2 + (float)iVar5;
          do {
            fVar18 = (float)uVar6;
            if (*(long *)(param_5 + 0xa8) == 0) goto LAB_0422d0c0;
            fVar14 = (float)FUN_058ac314(*(long *)(param_5 + 0xa8),iVar9,DAT_091b19e8);
            fVar20 = fVar21;
            if (fVar14 != INFINITY) {
              fVar15 = (float)AnhPD_FoodOrder_OrderIngredientList__LocalY(fVar14,param_5);
              if (fVar15 - local_a4 <= fVar21) {
                fVar20 = fVar15 - local_a4;
              }
            }
            fVar15 = param_2;
            if (fVar18 != -INFINITY) {
              fVar16 = (float)AnhPD_FoodOrder_OrderIngredientList__LocalY(fVar18,param_5);
              if (param_2 <= local_a4 + fVar16) {
                fVar15 = local_a4 + fVar16;
              }
            }
            if (*(long *)(param_5 + 0x70) == 0) goto LAB_0422d0c0;
            lVar11 = FUN_057e0998(*(long *)(param_5 + 0x70),iVar9,DAT_091ae388);
            uVar19 = 0;
            uVar17 = 0;
            if (fVar14 == INFINITY) {
              uVar17 = *(undefined4 *)(param_5 + 0x50);
            }
            if (fVar18 == -INFINITY) {
              uVar19 = *(undefined4 *)(param_5 + 0x54);
            }
            if (lVar11 == 0) goto LAB_0422d0c0;
            AnhPD_FoodOrder_ListIngredientBoardView__SetEdgePadding(uVar17,uVar19,lVar11);
            plVar7 = (long *)UnityEngine_Component__get_transform(lVar11,0);
            if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_09189c98)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar7);
            }
            if (DAT_09515cf3 == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515cf3 = '\x01';
            }
            if (plVar7 == (long *)0x0) goto LAB_0422d0c0;
            lVar12 = *(long *)(DAT_0918cbd0 + 0xb8);
            UnityEngine_Transform__set_localScale
                      (*(undefined4 *)(lVar12 + 0xc),*(undefined4 *)(lVar12 + 0x10),
                       *(undefined4 *)(lVar12 + 0x14),plVar7,0);
            UnityEngine_RectTransform__set_anchorMax(0x3f000000,0x3f000000,plVar7,0);
            UnityEngine_RectTransform__set_anchorMin(0x3f000000,0x3f000000,plVar7,0);
            uVar6 = (ulong)(uint)fVar15;
            if (fVar20 <= fVar15) {
              fVar20 = fVar15;
            }
            AnhPD_FoodOrder_OrderIngredientList__SetParentSpaceRect
                      (fVar13 + (float)iVar2,uVar6,(param_3 + fVar13) - (float)iVar3,fVar20,plVar7);
            lVar12 = *(long *)(param_5 + 0x98);
            uVar17 = AnhPD_FoodOrder_OrderIngredientList__BestColumns(param_5,lVar11);
            lVar11 = DAT_091adc88;
            if (lVar12 == 0) goto LAB_0422d0c0;
            lVar8 = *(long *)(lVar12 + 0x10);
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_0422d0c0;
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uVar17;
            }
            else {
              FUN_057971a8(lVar12,uVar17,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            iVar9 = iVar9 + 1;
          } while (param_6 != iVar9);
        }
        return;
      }
    }
  }
LAB_0422d0c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


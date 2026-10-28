// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$Init
// address: 0x40eff18
// body: available
// range: 0x40eff18-0x40f046f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f0464 to 0x40edbcc AnhPD.FoodOrder.IngredientConveyorItem$$RefreshFreezeVisual (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40f0468 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f046c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientConveyorItem__Init
               (float param_1,float param_2,long param_3,undefined8 param_4,long *param_5,
               long *param_6,long *param_7)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_095160dd & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b3c0);
    FUN_03f5c2a4(&DAT_0917b3e8);
    FUN_03f5c2a4(&DAT_0917b558);
    FUN_03f5c2a4(&DAT_0917b580);
    FUN_03f5c2a4(&DAT_0917b560);
    FUN_03f5c2a4(&DAT_091adaf0);
    FUN_03f5c2a4(&DAT_091adaf8);
    FUN_03f5c2a4(&DAT_091adb20);
    FUN_03f5c2a4(&DAT_091adb28);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160dd = 1;
  }
  lVar2 = *(long *)(param_3 + 0x90);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
      lVar2 = *(long *)(param_3 + 0x90);
      if (lVar2 == 0) goto LAB_040f0468;
    }
    FUN_057e0e78(lVar2,param_4,DAT_091adaf0);
    *(undefined8 *)(param_3 + 0xa8) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0xa8),0);
    *(undefined8 *)(param_3 + 0xb8) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0xb8),0);
    *(undefined8 *)(param_3 + 0xc0) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0xc0),0);
    *(undefined1 *)(param_3 + 0x1ac) = 0;
    *(undefined1 *)(param_3 + 0xe2) = 0;
    *(undefined1 *)(param_3 + 0xe0) = 0;
    *(undefined8 *)(param_3 + 0xb0) = 0x100000001;
    AnhPD_FoodOrder_IngredientConveyorItem__ClearHintDim(param_3);
    AnhPD_FoodOrder_IngredientConveyorItem__StopAnim(param_3);
    AnhPD_FoodOrder_IngredientConveyorItem__SetTapState(param_3,0,0,0);
    *(undefined4 *)(param_3 + 0x9c) = 0;
    *(undefined4 *)(param_3 + 0xa0) = 0;
    fVar11 = 0.01;
    if (0.01 <= param_1) {
      fVar11 = param_1;
    }
    *(float *)(param_3 + 0x88) = fVar11;
    AnhPD_FoodOrder_IngredientConveyorItem__SetHidden(param_3,0);
    if (*(long *)(param_3 + 0x90) != 0) {
      iVar1 = *(int *)(*(long *)(param_3 + 0x90) + 0x18);
      iVar7 = 0;
      if (*(long *)(param_3 + 0x20) != 0) {
        iVar7 = *(int *)(*(long *)(param_3 + 0x20) + 0x18);
      }
      if (iVar7 <= iVar1) {
        iVar1 = iVar7;
      }
      *(int *)(param_3 + 0x98) = iVar1;
      if (0 < iVar1) {
        uVar9 = 0;
        do {
          lVar2 = *(long *)(param_3 + 0x20);
          if (lVar2 == 0) goto LAB_040f0468;
          if (*(uint *)(lVar2 + 0x18) <= uVar9) goto LAB_040f046c;
          uVar10 = *(undefined8 *)(lVar2 + uVar9 * 8 + 0x20);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar10,0);
          if ((uVar3 & 1) != 0) {
            fVar14 = *(float *)(param_3 + 0x88);
            fVar11 = 1.0;
            if (param_6 != (long *)0x0) {
              lVar2 = *param_6;
              uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
              if (uVar3 != 0) {
                piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == DAT_0917b3c0) {
                    puVar4 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_040f01b0;
                  }
                  uVar3 = uVar3 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined8 *)FUN_03f95da8(param_6,DAT_0917b3c0,0);
LAB_040f01b0:
              iVar1 = (*(code *)*puVar4)(param_6,puVar4[1]);
              fVar11 = 1.0;
              if ((long)uVar9 < (long)iVar1) {
                lVar2 = *param_6;
                uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                if (uVar3 != 0) {
                  piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == DAT_0917b558) {
                      puVar4 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
                      goto LAB_040f0220;
                    }
                    uVar3 = uVar3 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar3 != 0);
                }
                puVar4 = (undefined8 *)FUN_03f95da8(param_6,DAT_0917b558,0);
LAB_040f0220:
                fVar11 = (float)(*(code *)*puVar4)(param_6,uVar9 & 0xffffffff,puVar4[1]);
              }
            }
            if (param_7 == (long *)0x0) {
LAB_040f02f0:
              if (DAT_09515ce8 == '\0') {
                FUN_03f5c2a4(&DAT_0918cb68);
                DAT_09515ce8 = '\x01';
              }
              uVar12 = **(undefined4 **)(DAT_0918cb68 + 0xb8);
              fVar13 = (float)(*(undefined4 **)(DAT_0918cb68 + 0xb8))[1];
            }
            else {
              lVar2 = *param_7;
              uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
              if (uVar3 != 0) {
                piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == DAT_0917b3e8) {
                    puVar4 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_040f0294;
                  }
                  uVar3 = uVar3 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined8 *)FUN_03f95da8(param_7,DAT_0917b3e8,0);
LAB_040f0294:
              iVar1 = (*(code *)*puVar4)(param_7,puVar4[1]);
              if ((long)iVar1 <= (long)uVar9) goto LAB_040f02f0;
              lVar2 = *param_7;
              uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
              if (uVar3 != 0) {
                piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == DAT_0917b580) {
                    puVar4 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_040f032c;
                  }
                  uVar3 = uVar3 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined8 *)FUN_03f95da8(param_7,DAT_0917b580,0);
LAB_040f032c:
              uVar12 = (*(code *)*puVar4)(param_7,uVar9 & 0xffffffff,puVar4[1]);
              fVar13 = param_2;
            }
            lVar2 = *(long *)(param_3 + 0x20);
            if (lVar2 == 0) goto LAB_040f0468;
            if (*(uint *)(lVar2 + 0x18) <= uVar9) {
LAB_040f046c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (param_5 == (long *)0x0) goto LAB_040f0468;
            lVar6 = *param_5;
            uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
            lVar2 = *(long *)(lVar2 + uVar9 * 8 + 0x20);
            if (uVar3 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == DAT_0917b560) {
                  puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_040f03b0;
                }
                uVar3 = uVar3 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(param_5,DAT_0917b560,0);
LAB_040f03b0:
            uVar10 = (*(code *)*puVar4)(param_5,uVar9 & 0xffffffff,puVar4[1]);
            if (*(long *)(param_3 + 0x90) == 0) goto LAB_040f0468;
            lVar6 = FUN_057e0998(*(long *)(param_3 + 0x90),uVar9 & 0xffffffff,DAT_091adb28);
            if (lVar6 == 0) {
              uVar5 = 1;
            }
            else {
              uVar5 = *(undefined4 *)(lVar6 + 0x18);
            }
            if (lVar2 == 0) goto LAB_040f0468;
            param_2 = fVar14 * fVar11;
            AnhPD_FoodOrder_IngredientRenderSlot__Show
                      (param_2,param_2,0x3f800000,uVar12,fVar13,lVar2,uVar10,uVar5);
          }
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)*(int *)(param_3 + 0x98));
      }
      AnhPD_FoodOrder_IngredientConveyorItem__RefreshRenderers(param_3);
      *(undefined8 *)(param_3 + 0x228) = 0;
      thunk_FUN_03f5d7b8(param_3 + 0x228,0);
      AnhPD_FoodOrder_IngredientConveyorItem__RefreshFreezeVisual(param_3);
      return;
    }
  }
LAB_040f0468:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


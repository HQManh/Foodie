// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorTapState$$Refresh
// address: 0x40ec080
// body: available
// range: 0x40ec080-0x40ec45b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ec428 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ec42c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ec430 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ec434 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ec438 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ec43c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ec440 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ec444 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ec448 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ec44c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ec454 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ec458 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040ec450) */

void AnhPD_FoodOrder_ConveyorTapState__Refresh(long param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  
  if ((DAT_095160ae & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160ae = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    cVar1 = *(char *)(*(long *)(param_1 + 0x10) + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if ((param_2 != 0) && (plVar8 = *(long **)(param_2 + 0x20), plVar8 != (long *)0x0)) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917a3f0) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_040ec160;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a3f0,0);
LAB_040ec160:
      plVar8 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
      do {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09185b10) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_040ec1e4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_040ec1e4:
        uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
        if ((uVar6 & 1) == 0) {
          if (plVar8 == (long *)0x0) {
            return;
          }
          lVar5 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 == 0) goto LAB_040ec3e4;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_040ec3cc;
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0917aa98) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_040ec248;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917aa98,0);
LAB_040ec248:
        lVar5 = (*(code *)*puVar3)(plVar8,puVar3[1]);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *(long *)(lVar5 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = UnityEngine_Object__op_Implicit(lVar9,0);
        if ((uVar6 & 1) != 0) {
          if (cVar1 == '\0') {
            uVar6 = AnhPD_FoodOrder_ConveyorSlot__get_IsAtFrontRow(lVar5,0);
            if ((uVar6 & 1) == 0) {
LAB_040ec350:
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar2 = 0;
              uVar10 = 0;
            }
            else {
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar6 = AnhPD_FoodOrder_ConveyorPickup__Allows(*(long *)(param_1 + 0x10),lVar9,0,0);
              if ((uVar6 & 1) == 0) goto LAB_040ec350;
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(int *)(lVar9 + 0x9c) < 1) {
                if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar10 = 1;
                uVar2 = AnhPD_FoodOrder_ConveyorPickup__Allows(*(long *)(param_1 + 0x10),lVar9,1,0);
              }
              else {
                uVar2 = 0;
                uVar10 = 1;
              }
            }
            AnhPD_FoodOrder_IngredientConveyorItem__SetTapState(lVar9,uVar10,uVar2 & 1,uVar10);
          }
          else {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(char *)(lVar9 + 0xd1) != '\0') {
              *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
            }
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar6 = AnhPD_FoodOrder_ConveyorPickup__Allows(*(long *)(param_1 + 0x10),lVar9,0,0);
            if (((uVar6 & 1) == 0) || (0 < *(int *)(lVar9 + 0x9c))) {
LAB_040ec2f0:
              uVar4 = 0;
            }
            else {
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar6 = AnhPD_FoodOrder_ConveyorPickup__HasRoomFor(*(long *)(param_1 + 0x10),lVar9,1);
              if ((uVar6 & 1) == 0) goto LAB_040ec2f0;
              uVar4 = 1;
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            }
            AnhPD_FoodOrder_IngredientConveyorItem__SetTapState(lVar9,uVar4,uVar4,uVar4);
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_040ec3cc:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_040ec400;
    }
  }
LAB_040ec3e4:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_040ec400:
  (*(code *)*puVar3)(plVar8,puVar3[1]);
  return;
}


// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$ApplySaveMeUnstickBelt
// address: 0x40f7d88
// body: available
// range: 0x40f7d88-0x40f800f inclusive
// range: 0x40f8054-0x40f8203 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f7ff8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f7ffc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f8000 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f8008 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f800c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f8200 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040f8200) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int AnhPD_FoodOrder_IngredientSpawnerController__ApplySaveMeUnstickBelt(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  
  if ((DAT_09516118 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516118 = 1;
  }
  if (*(long *)(param_1 + 0x1a0) == 0) {
    return 0;
  }
  iVar1 = AnhPD_FoodOrder_ConveyorGrid__get_ColumnCount(*(long *)(param_1 + 0x1a0),0);
  if (0 < iVar1) {
    iVar7 = 0;
    do {
      uVar3 = AnhPD_FoodOrder_IngredientSpawnerController__HasUsableFront(param_1,iVar7);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  if ((*(long *)(param_1 + 0x1a0) == 0) ||
     (plVar8 = *(long **)(*(long *)(param_1 + 0x1a0) + 0x20), plVar8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *plVar8;
  uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_0917a3f0) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_040f7e98;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a3f0,0);
LAB_040f7e98:
  plVar8 = (long *)(*(code *)*puVar4)(plVar8,puVar4[1]);
  if (plVar8 != (long *)0x0) {
    iVar7 = 0;
LAB_040f7ed4:
    do {
      lVar5 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_040f7f20;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_040f7f20:
      uVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if ((uVar3 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_040f80c0;
        lVar5 = *plVar8;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 == 0) goto LAB_040f8098;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_040f8080;
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917aa98) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_040f7f84;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917aa98,0);
LAB_040f7f84:
      lVar5 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = AnhPD_FoodOrder_ConveyorSlot__get_IsAtFrontRow(lVar5,0);
      if ((uVar3 & 1) == 0) {
LAB_040f7fcc:
        if (plVar8 == (long *)0x0) break;
        goto LAB_040f7ed4;
      }
      uVar10 = *(undefined8 *)(lVar5 + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar10,0);
      if ((uVar3 & 1) == 0) goto LAB_040f7fcc;
      if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = AnhPD_FoodOrder_IngredientConveyorItem__ClearFreeze();
      iVar7 = iVar7 + (uVar2 & 1);
    } while (plVar8 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
LAB_040f8080:
    if (*(long *)(piVar6 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_040f80b4;
    }
  }
LAB_040f8098:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_040f80b4:
  (*(code *)*puVar4)(plVar8,puVar4[1]);
LAB_040f80c0:
  if ((0 < iVar7) && (0 < iVar1)) {
    iVar9 = 0;
    do {
      uVar3 = AnhPD_FoodOrder_IngredientSpawnerController__HasUsableFront(param_1,iVar9);
      if ((uVar3 & 1) != 0) {
        return iVar7;
      }
      iVar9 = iVar9 + 1;
    } while (iVar1 != iVar9);
  }
  if (0 < iVar1) {
    iVar7 = 0;
    do {
      uVar3 = AnhPD_FoodOrder_IngredientSpawnerController__TryRotateUsableToFront(param_1,iVar7,1);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
    if (0 < iVar1) {
      iVar7 = 0;
      do {
        uVar3 = AnhPD_FoodOrder_IngredientSpawnerController__TryRotateUsableToFront(param_1,iVar7,0)
        ;
        if ((uVar3 & 1) != 0) {
          return 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar1 != iVar7);
      if (0 < iVar1) {
        iVar7 = 0;
        do {
          uVar3 = AnhPD_FoodOrder_IngredientSpawnerController__TryBreakChainAtFront(param_1,iVar7);
          if ((uVar3 & 1) != 0) {
            return 1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar1 != iVar7);
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            uVar3 = AnhPD_FoodOrder_IngredientSpawnerController__TrySplitBundleAtFront
                              (param_1,iVar7);
            if ((uVar3 & 1) != 0) {
              return 1;
            }
            iVar7 = iVar7 + 1;
          } while (iVar1 != iVar7);
          if (0 < iVar1) {
            iVar7 = 0;
            do {
              uVar3 = AnhPD_FoodOrder_IngredientSpawnerController__TryRotateAnyToFront
                                (param_1,iVar7);
              if ((uVar3 & 1) != 0) {
                return 1;
              }
              iVar7 = iVar7 + 1;
            } while (iVar1 != iVar7);
            return 0;
          }
        }
      }
    }
  }
  return 0;
}


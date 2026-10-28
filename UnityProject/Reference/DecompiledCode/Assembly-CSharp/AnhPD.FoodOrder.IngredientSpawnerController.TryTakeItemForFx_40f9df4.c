// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$TryTakeItemForFx
// address: 0x40f9df4
// body: available
// range: 0x40f9df4-0x40fa4b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40fa094 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fa3bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fa484 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fa488 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fa48c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fa490 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fa494 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fa498 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fa49c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fa4a4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fa4a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fa4ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040fa4a0) */

undefined4
AnhPD_FoodOrder_IngredientSpawnerController__TryTakeItemForFx
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
          undefined8 param_5,long param_6,undefined8 *param_7,undefined4 *param_8,uint param_9)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  int iVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  if ((DAT_09516122 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b360);
    FUN_03f5c2a4(&DAT_0917b4f8);
    FUN_03f5c2a4(&DAT_09186c40);
    FUN_03f5c2a4(&DAT_091adae8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    DAT_09516122 = 1;
  }
  if ((*(long *)(param_4 + 0x1a0) == 0) ||
     (plVar12 = *(long **)(*(long *)(param_4 + 0x1a0) + 0x20), plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar7 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == DAT_0917a3f0) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_040f9f24;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917a3f0,0);
LAB_040f9f24:
  plVar12 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
  do {
    do {
      do {
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_09185b10) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_040f9fb0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185b10,0);
LAB_040f9fb0:
        uVar10 = (*(code *)*puVar5)(plVar12,puVar5[1]);
        if ((uVar10 & 1) == 0) {
          uVar15 = 0;
          iVar3 = 10;
          goto LAB_040fa0a4;
        }
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917aa98) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_040fa014;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917aa98,0);
LAB_040fa014:
        lVar7 = (*(code *)*puVar5)(plVar12,puVar5[1]);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar10 = UnityEngine_Object__op_Implicit(lVar7,0);
      } while ((uVar10 & 1) == 0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    } while ((*(char *)(lVar7 + 0x1ac) != '\0') ||
            ((0 < *(int *)(lVar7 + 0x9c) && ((param_9 & 1) == 0))));
    if (*(int *)(DAT_09186c40 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar3 = AnhPD_FoodOrder_IngredientSpawnerController__IndexOfId(lVar7,param_5);
  } while (iVar3 < 0);
  plVar14 = *(long **)(lVar7 + 0x90);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar8 = *plVar14;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == DAT_0917b4f8) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_040fa1bc;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b4f8,0);
LAB_040fa1bc:
  lVar8 = (*(code *)*puVar5)(plVar14,iVar3,puVar5[1]);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar14 = *(long **)(lVar7 + 0x90);
  *param_8 = *(undefined4 *)(lVar8 + 0x18);
  if (plVar14 != (long *)0x0) {
    iVar13 = 0;
    do {
      lVar8 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917b360) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_040fa24c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b360,0);
LAB_040fa24c:
      iVar4 = (*(code *)*puVar5)(plVar14,puVar5[1]);
      if (iVar4 <= iVar13) {
        lVar8 = UnityEngine_Component__get_transform(lVar7,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar15 = UnityEngine_Transform__get_position(lVar8,0);
        *(undefined4 *)param_7 = uVar15;
        *(undefined4 *)((long)param_7 + 4) = param_2;
        *(undefined4 *)(param_7 + 1) = param_3;
        plVar14 = (long *)(lVar7 + 0xa8);
        lVar8 = *plVar14;
        *plVar14 = 0;
        puVar1 = (undefined4 *)(lVar7 + 0x210);
        if (lVar8 != 0) {
          puVar1 = (undefined4 *)(lVar8 + 0x10);
        }
        uVar15 = *puVar1;
        thunk_FUN_03f5d7b8(plVar14,0);
        if (lVar8 == 0) {
          uVar16 = *(undefined4 *)param_7;
          uVar17 = *(undefined4 *)((long)param_7 + 4);
          uVar18 = *(undefined4 *)(param_7 + 1);
          if (*(int *)(DAT_09186c40 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar8 = AnhPD_FoodOrder_IngredientSpawnerController__BuildKeyAt
                            (uVar16,uVar17,uVar18,uVar15);
        }
        if (*(int *)(DAT_09186c40 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_IngredientSpawnerController__UnlockWithKey(lVar8);
        if (*(long *)(param_4 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_ConveyorGrid__ReleaseFor(*(long *)(param_4 + 0x1a0),lVar7,0);
        uVar15 = 1;
        iVar3 = 9;
LAB_040fa0a4:
        if (plVar12 == (long *)0x0) goto LAB_040fa110;
        lVar7 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 == 0) {
LAB_040fa0e8:
          puVar5 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185a58,0);
        }
        else {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          while (*(long *)(piVar11 + -2) != DAT_09185a58) {
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
            if (uVar10 == 0) goto LAB_040fa0e8;
          }
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
        }
        (*(code *)*puVar5)(plVar12,puVar5[1]);
LAB_040fa110:
        if ((iVar3 == 10) || (iVar3 == 0)) {
          uVar15 = 0;
          *(undefined4 *)(param_7 + 1) = 0;
          *param_7 = 0;
          *param_8 = 0;
        }
        return uVar15;
      }
      plVar14 = *(long **)(lVar7 + 0x90);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917b4f8) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_040fa2b4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b4f8,0);
LAB_040fa2b4:
      uVar6 = (*(code *)*puVar5)(plVar14,iVar13,puVar5[1]);
      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceLedger__BeltOut(uVar6,2,0);
      if ((param_6 != 0) && (iVar13 != iVar3)) {
        plVar14 = *(long **)(lVar7 + 0x90);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *plVar14;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917b4f8) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_040fa348;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b4f8,0);
LAB_040fa348:
        uVar6 = (*(code *)*puVar5)(plVar14,iVar13,puVar5[1]);
        lVar8 = DAT_091adae8;
        lVar9 = *(long *)(param_6 + 0x10);
        *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + 1;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = *(uint *)(param_6 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(param_6 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar6;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(param_6,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
      plVar14 = *(long **)(lVar7 + 0x90);
      iVar13 = iVar13 + 1;
    } while (plVar14 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


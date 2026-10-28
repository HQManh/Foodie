// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorStuckAlert$$Classify
// address: 0x40ea06c
// body: available
// range: 0x40ea06c-0x40ea4e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ea4b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ea4bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ea4c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ea4c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ea4c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ea4d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ea4d4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ea4d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ea4dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ea4e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040ea4d4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 AnhPD_FoodOrder_ConveyorStuckAlert__Classify(long param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  
  if ((DAT_095160a9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ad968);
    FUN_03f5c2a4(&DAT_091ad978);
    FUN_03f5c2a4(&DAT_091ad990);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160a9 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 != 0) {
    iVar12 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar12) {
      System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar12,0);
    }
    uVar3 = AnhPD_FoodOrder_ConveyorStuckAlert__IsKitchenAboutToFree();
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    if ((param_2 != 0) && (plVar10 = *(long **)(param_2 + 0x20), plVar10 != (long *)0x0)) {
      lVar6 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917a3f0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_040ea19c;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917a3f0,0);
LAB_040ea19c:
      plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
      if (plVar10 != (long *)0x0) {
        iVar12 = 0x7fffffff;
LAB_040ea1e0:
        do {
          lVar6 = *plVar10;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_040ea22c;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185b10,0);
LAB_040ea22c:
          uVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
          if ((uVar3 & 1) == 0) {
            iVar2 = 9;
LAB_040ea3cc:
            if (plVar10 == (long *)0x0) goto LAB_040ea438;
            lVar6 = *plVar10;
            uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar3 == 0) goto LAB_040ea410;
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_040ea3f8;
          }
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *plVar10;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_0917aa98) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_040ea290;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917aa98,0);
LAB_040ea290:
          lVar6 = (*(code *)*puVar4)(plVar10,puVar4[1]);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar11 = *(long *)(lVar6 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar11,0);
          if (((uVar3 & 1) == 0) ||
             (uVar3 = AnhPD_FoodOrder_ConveyorSlot__get_IsAtFrontRow(lVar6,0), lVar6 = DAT_091ad968,
             (uVar3 & 1) == 0)) {
LAB_040ea360:
            if (plVar10 == (long *)0x0) break;
            goto LAB_040ea1e0;
          }
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 == 0) {
LAB_040ea4c0:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_040ea4c0;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar8 = lVar11;
            thunk_FUN_03f5d7b8(plVar8,lVar11);
          }
          else {
            FUN_057e0c68(lVar5,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (((0 < *(int *)(lVar11 + 0x9c)) || (*(long *)(lVar11 + 0xc0) == 0)) ||
             (uVar3 = AnhPD_FoodOrder_ConveyorSlot__get_IsPickable(*(long *)(lVar11 + 0xc0),0),
             (uVar3 & 1) == 0)) goto LAB_040ea360;
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = AnhPD_FoodOrder_ConveyorPickup__Allows(*(long *)(param_1 + 0x10),lVar11,1,1);
          if ((uVar3 & 1) == 0) {
LAB_040ea4b0:
            iVar2 = 6;
            goto LAB_040ea3cc;
          }
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = AnhPD_FoodOrder_ConveyorPickup__HasRoomFor(*(long *)(param_1 + 0x10),lVar11,0);
          if ((uVar3 & 1) != 0) goto LAB_040ea4b0;
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(char *)(*(long *)(param_1 + 0x10) + 0x58) == '\0') goto LAB_040ea4b0;
          iVar2 = AnhPD_FoodOrder_ConveyorPickup__get_CellsNeededOnLastCheck();
          if (iVar2 <= iVar12) {
            iVar12 = iVar2;
          }
        } while (plVar10 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_040ea4c8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar9 = piVar9 + 4;
    if (uVar3 == 0) break;
LAB_040ea3f8:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_040ea42c;
    }
  }
LAB_040ea410:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185a58,0);
LAB_040ea42c:
  (*(code *)*puVar4)(plVar10,puVar4[1]);
LAB_040ea438:
  if ((iVar2 == 9) || (iVar2 == 0)) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_040ea4c8;
    if (*(int *)(*(long *)(param_1 + 0x20) + 0x18) != 0) {
      if (iVar12 != 0x7fffffff) {
        if (param_3 == 0) goto LAB_040ea4c8;
        iVar2 = AnhPD_FoodOrder_LevelInfo__CountCellsFreeableBySaveMe(param_3,0);
        if (iVar12 <= iVar2) {
          return 1;
        }
      }
      return 2;
    }
  }
  return 0;
}


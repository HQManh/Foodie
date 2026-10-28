// rea decompile_all
// name: AnhPD.FoodOrder.StackModeService$$Setup
// address: 0x41febe0
// body: available
// range: 0x41febe0-0x41ff317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ff300 to 0x41f7750 AnhPD.FoodOrder.PieceLedger$$BeltStart (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41ff304 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ff308 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ff314 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_StackModeService__Setup(long param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  double __x;
  double local_78;
  
  if ((DAT_09516bde & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917faf8);
    FUN_03f5c2a4(&DAT_0917fa40);
    FUN_03f5c2a4(&DAT_091b0578);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b05b0);
    FUN_03f5c2a4(&DAT_091b0568);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_091bb3c8);
    DAT_09516bde = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_041ff304;
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar11,0);
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar6 == 0)) goto LAB_041ff304;
    AnhPD_FoodOrder_GridIngController__RefreshOccupiedCells(lVar6,0);
  }
  lVar6 = AnhPD_FoodOrder_StackModeService__get_InitData();
  if (lVar6 == 0) goto LAB_041ff304;
  lVar16 = *(long *)(lVar6 + 0xa0);
  lVar7 = AnhPD_FoodOrder_StackModeService__ResolveQueues();
  if ((lVar7 == 0) || (uVar4 = *(uint *)(lVar7 + 0x18), (int)uVar4 < 1)) {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x20), lVar8 == 0)) goto LAB_041ff304;
    uVar4 = AnhPD_FoodOrder_IngredientSpawnerController__RollQueueColumnCount(lVar8,0);
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x20), lVar8 == 0)) goto LAB_041ff304;
  AnhPD_FoodOrder_IngredientSpawnerController__BuildColumns(lVar8,uVar4,0);
  lVar8 = *(long *)(lVar6 + 0xb0);
  if (lVar8 != 0) {
    if (0 < *(int *)(lVar8 + 0x10)) {
      if ((*(long *)(param_1 + 0x18) == 0) ||
         (lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x20), lVar9 == 0)) goto LAB_041ff304;
      AnhPD_FoodOrder_IngredientSpawnerController__SetRowCount(lVar9,*(int *)(lVar8 + 0x10),0);
    }
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar9 == 0)) goto LAB_041ff304;
    AnhPD_FoodOrder_FCustomerLineHandle__SetTimerScale(*(undefined4 *)(lVar8 + 0x14),lVar9,0);
  }
  if (bVar3) {
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar6 = AnhPD_FoodOrder_LevelInfo__ConvertSpawnDataToStack
                          (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar6 + 0x98)), lVar6 == 0))
    goto LAB_041ff304;
    fVar18 = 1.0;
    if (lVar16 != 0) {
      fVar18 = *(float *)(lVar16 + 0x14);
    }
    iVar12 = *(int *)(lVar6 + 0x18);
    fVar19 = 1.0;
    if (1.0 <= fVar18) {
      fVar19 = fVar18;
    }
    if (DAT_09516626 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09516626 = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = -0x80000000;
    if ((float)(int)fVar19 != INFINITY) {
      iVar2 = (int)fVar19;
    }
    if (DAT_09515cf4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09515cf4 = '\x01';
    }
    fVar18 = (fVar19 - (float)iVar2) * (float)iVar12;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    __x = (double)fVar18;
    dVar17 = modf(__x,&local_78);
    if (0.0 <= fVar18) {
      if (dVar17 == 0.5) {
        dVar17 = 1.0;
        goto LAB_041fefd4;
      }
      local_78 = (double)(long)(__x + 0.5);
    }
    else if (dVar17 == -0.5) {
      dVar17 = -1.0;
LAB_041fefd4:
      if (((long)local_78 & 1U) != 0) {
        local_78 = local_78 + dVar17;
      }
    }
    else {
      local_78 = (double)(long)(__x + -0.5);
    }
    iVar1 = -0x80000000;
    if (local_78 != INFINITY) {
      iVar1 = (int)local_78;
    }
    lVar7 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0478(lVar7,iVar1 + iVar2 * iVar12,DAT_091b0568);
    if (lVar7 == 0) goto LAB_041ff304;
    FUN_057e0e78(lVar7,lVar6,DAT_091b0578);
    iVar13 = iVar2 + -1;
    if (iVar13 != 0 && 0 < iVar2) {
      do {
        uVar11 = FUN_057e1934(lVar7,0,iVar12,DAT_091b05b0);
        FUN_057e0e78(lVar7,uVar11,DAT_091b0578);
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    if (0 < iVar1) {
      iVar12 = 0;
      do {
        uVar11 = FUN_057e0998(lVar7,iVar12,DAT_091b0610);
        lVar6 = DAT_091b0570;
        lVar8 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_041ff304;
        uVar14 = *(uint *)(lVar7 + 0x18);
        if (uVar14 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar14 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar14 * 8 + 0x20) = uVar11;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar7,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        iVar12 = iVar12 + 1;
      } while (iVar1 != iVar12);
    }
    if (lVar16 == 0) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = (float)*(int *)(lVar16 + 0x10);
    }
    lVar6 = AnhPD_FoodOrder_StackModeService__ShuffleStack(fVar18,lVar7);
    plVar10 = (long *)FUN_03f5c394(DAT_0917fa40,uVar4);
    if (0 < (int)uVar4) {
      uVar5 = 0;
      plVar15 = plVar10 + 4;
      do {
        lVar7 = thunk_FUN_03f9944c(DAT_0917cce8);
        FUN_057e0400(lVar7,DAT_091b0558);
        if (plVar10 == (long *)0x0) goto LAB_041ff304;
        if ((lVar7 != 0) &&
           (lVar16 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar16 == 0)) {
LAB_041ff30c:
          uVar11 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar11,0);
        }
        if (*(uint *)(plVar10 + 3) <= uVar5) goto LAB_041ff308;
        *plVar15 = lVar7;
        thunk_FUN_03f5d7b8(plVar15,lVar7);
        uVar5 = uVar5 + 1;
        plVar15 = plVar15 + 1;
      } while (uVar4 != uVar5);
    }
    if (lVar6 == 0) goto LAB_041ff304;
    if (0 < *(int *)(lVar6 + 0x18)) {
      iVar12 = 0;
      do {
        if (plVar10 == (long *)0x0) goto LAB_041ff304;
        iVar2 = 0;
        if (uVar4 != 0) {
          iVar2 = iVar12 / (int)uVar4;
        }
        uVar14 = iVar12 - iVar2 * uVar4;
        if (*(uint *)(plVar10 + 3) <= uVar14) {
LAB_041ff308:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar16 = plVar10[(ulong)uVar14 + 4];
        uVar11 = FUN_057e0998(lVar6,iVar12,DAT_091b0610);
        lVar7 = DAT_091b0570;
        if (lVar16 == 0) goto LAB_041ff304;
        lVar8 = *(long *)(lVar16 + 0x10);
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_041ff304;
        uVar14 = *(uint *)(lVar16 + 0x18);
        if (uVar14 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar16 + 0x18) = uVar14 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar14 * 8 + 0x20) = uVar11;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar16,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar6 + 0x18));
    }
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x20), lVar6 == 0)) goto LAB_041ff304;
    AnhPD_FoodOrder_IngredientSpawnerController__SetRandomQueues(lVar6,plVar10,0);
  }
  else {
    if (lVar7 == 0) goto LAB_041ff304;
    plVar10 = (long *)FUN_03f5c394(DAT_0917faf8,*(undefined4 *)(lVar7 + 0x18));
    uVar4 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar4) {
      uVar14 = 0;
      lVar6 = 0x20;
      do {
        if (uVar4 <= uVar14) goto LAB_041ff308;
        if ((*(long *)(lVar7 + lVar6) == 0) ||
           (lVar8 = AnhPD_FoodOrder_StackModeService__BuildCellsFromQueue
                              (*(undefined8 *)(*(long *)(lVar7 + lVar6) + 0x10),
                               *(undefined8 *)(param_1 + 0x28)), plVar10 == (long *)0x0))
        goto LAB_041ff304;
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
        goto LAB_041ff30c;
        if (*(uint *)(plVar10 + 3) <= uVar14) goto LAB_041ff308;
        *(long *)((long)plVar10 + lVar6) = lVar8;
        thunk_FUN_03f5d7b8((long)plVar10 + lVar6,lVar8);
        uVar4 = *(uint *)(lVar7 + 0x18);
        uVar14 = uVar14 + 1;
        lVar6 = lVar6 + 8;
      } while ((int)uVar14 < (int)uVar4);
    }
    if (lVar16 == 0) goto LAB_041ff304;
    AnhPD_FoodOrder_StackModeService__ApplySlotGroups
              (plVar10,*(undefined8 *)(lVar16 + 0x20),*(undefined8 *)(lVar16 + 0x28));
    if (0 < *(int *)(lVar7 + 0x18)) {
      uVar5 = 0;
      do {
        if ((*(long *)(param_1 + 0x18) == 0) || (plVar10 == (long *)0x0)) goto LAB_041ff304;
        if (*(uint *)(plVar10 + 3) <= uVar5) goto LAB_041ff308;
        lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x20);
        uVar11 = AnhPD_FoodOrder_StackModeService__Compact(plVar10[uVar5 + 4]);
        if (lVar6 == 0) goto LAB_041ff304;
        AnhPD_FoodOrder_IngredientSpawnerController__SetQueueAt(lVar6,uVar5 & 0xffffffff,uVar11,0);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)*(int *)(lVar7 + 0x18));
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20);
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_PieceLedger__BeltStart(uVar11);
    return;
  }
LAB_041ff304:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$AddToQueue
// address: 0x40f6120
// body: available
// range: 0x40f6120-0x40f6623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f64d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f65d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f65f4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f65f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f65fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f6600 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f6604 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f6608 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f660c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f6618 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f6620 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040f6554) */
/* WARNING: Removing unreachable block (ram,0x040f661c) */

void AnhPD_FoodOrder_IngredientSpawnerController__AddToQueue
               (long param_1,long *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  long lVar14;
  
  if ((DAT_09516114 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5a0);
    FUN_03f5c2a4(&DAT_0917ac50);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917fa20);
    FUN_03f5c2a4(&DAT_091adae8);
    FUN_03f5c2a4(&DAT_091adad8);
    FUN_03f5c2a4(&DAT_091abe40);
    FUN_03f5c2a4(&DAT_091abe48);
    FUN_03f5c2a4(&DAT_0917c4d0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_09221ab8);
    FUN_03f5c2a4(&DAT_09217c40);
    DAT_09516114 = 1;
  }
  if (*(long *)(param_1 + 0x198) != 0) {
    if ((*(int *)(*(long *)(param_1 + 0x198) + 0x18) == 0) || (param_2 == (long *)0x0)) {
      return;
    }
    puVar5 = &DAT_09217c40;
    if ((param_3 & 1) == 0) {
      puVar5 = &DAT_09221ab8;
    }
    uVar13 = *puVar5;
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_PieceLedger__BeltIn(param_2,param_3 & 1,uVar13,0);
    if (*(long *)(param_1 + 0x198) != 0) {
      plVar4 = (long *)FUN_03f5c394(DAT_0917fa20,*(undefined4 *)(*(long *)(param_1 + 0x198) + 0x18))
      ;
      lVar9 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917a5a0) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_040f62cc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a5a0,0);
LAB_040f62cc:
      plVar6 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
      do {
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_09185b10) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_040f635c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_040f635c:
        uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto LAB_040f6548;
          lVar9 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 == 0) goto LAB_040f6520;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_040f6508;
        }
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_0917ac50) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_040f63c0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917ac50,0);
LAB_040f63c0:
        lVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if (lVar9 != 0) {
          if (*(long *)(param_1 + 0x198) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar1 = *(int *)(*(long *)(param_1 + 0x198) + 0x18);
          iVar3 = 0;
          if (iVar1 != 0) {
            iVar3 = *(int *)(param_1 + 0x1dc) / iVar1;
          }
          uVar2 = *(int *)(param_1 + 0x1dc) - iVar3 * iVar1;
          if (*(uint *)(plVar4 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar14 = plVar4[(long)(int)uVar2 + 4];
          if (lVar14 == 0) {
            lVar14 = thunk_FUN_03f9944c(DAT_0917c4d0);
            FUN_057e0400(lVar14,DAT_091adad8);
            if ((lVar14 != 0) &&
               (lVar7 = thunk_FUN_03f99350(lVar14,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)) {
              uVar13 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar13,0);
            }
            if (*(uint *)(plVar4 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar4[(long)(int)uVar2 + 4] = lVar14;
            thunk_FUN_03f5d7b8(plVar4 + (long)(int)uVar2 + 4,lVar14);
            if (lVar14 == 0) goto LAB_040f65fc;
          }
          lVar7 = DAT_091adae8;
          lVar10 = *(long *)(lVar14 + 0x10);
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar10 == 0) {
LAB_040f65fc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = *(uint *)(lVar14 + 0x18);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar2 + 1;
            plVar8 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
            *plVar8 = lVar9;
            thunk_FUN_03f5d7b8(plVar8,lVar9);
          }
          else {
            FUN_057e0c68(lVar14,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + 1;
        }
      } while( true );
    }
  }
  goto LAB_040f65d0;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_040f6508:
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_040f653c;
    }
  }
LAB_040f6520:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_040f653c:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_040f6548:
  lVar9 = *(long *)(param_1 + 0x198);
  if (lVar9 != 0) {
    uVar11 = 0;
    do {
      if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar11) {
        return;
      }
      if (plVar4 == (long *)0x0) break;
      if (*(uint *)(plVar4 + 3) <= uVar11) {
LAB_040f65f4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (plVar4[uVar11 + 4] != 0) {
        lVar9 = FUN_057e0998(lVar9,uVar11 & 0xffffffff,DAT_091abe48);
        if (lVar9 == 0) break;
        if (*(uint *)(plVar4 + 3) <= uVar11) goto LAB_040f65f4;
        if (*(long *)(lVar9 + 0x10) == 0) break;
        AnhPD_FoodOrder_ConveyorIngredientSource__AddToStack
                  (*(long *)(lVar9 + 0x10),plVar4[uVar11 + 4],0);
        lVar9 = *(long *)(param_1 + 0x198);
      }
      uVar11 = uVar11 + 1;
    } while (lVar9 != 0);
  }
LAB_040f65d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


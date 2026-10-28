// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$SetRandomQueues
// address: 0x40f5354
// body: available
// range: 0x40f5354-0x40f5603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f55ec to 0x40d7c34 AnhPD.FoodOrder.ConveyorBundleBuilder$$LinkChains (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40f55f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f55f4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f5600 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientSpawnerController__SetRandomQueues(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  
  if ((DAT_0951610e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b2d8);
    FUN_03f5c2a4(&DAT_0917b480);
    FUN_03f5c2a4(&DAT_0917fa18);
    FUN_03f5c2a4(&DAT_091abe40);
    FUN_03f5c2a4(&DAT_091abe48);
    DAT_0951610e = 1;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar3 = AnhPD_FoodOrder_IngredientSpawnerController__get_BundleBuilder(param_1);
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == DAT_0917b2d8) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_040f5424;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b2d8,0);
LAB_040f5424:
  uVar2 = (*(code *)*puVar4)(param_2,puVar4[1]);
  if (*(long *)(param_1 + 0x198) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x198) + 0x18);
    if ((int)uVar1 <= (int)uVar2) {
      uVar2 = uVar1;
    }
    uVar9 = (ulong)uVar2;
    plVar5 = (long *)FUN_03f5c394(DAT_0917fa18,uVar9);
    if ((int)uVar2 < 1) {
      if (lVar3 != 0) {
        AnhPD_FoodOrder_ConveyorBundleBuilder__LinkChains(lVar3,plVar5,0);
        return;
      }
    }
    else {
      uVar12 = 0;
      do {
        lVar8 = *param_2;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917b480) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_040f54c4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b480,0);
LAB_040f54c4:
        uVar6 = (*(code *)*puVar4)(param_2,uVar12 & 0xffffffff,puVar4[1]);
        if (((*(long *)(param_1 + 0x198) == 0) || (lVar3 == 0)) ||
           (lVar8 = AnhPD_FoodOrder_ConveyorBundleBuilder__BuildColumn
                              (lVar3,uVar6,*(int *)(*(long *)(param_1 + 0x198) + 0x18) - (int)uVar12
                               ,0), plVar5 == (long *)0x0)) goto LAB_040f55f0;
        if ((lVar8 != 0) &&
           (lVar7 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
          uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,0);
        }
        if (*(uint *)(plVar5 + 3) <= uVar12) goto LAB_040f55f4;
        plVar5[uVar12 + 4] = lVar8;
        thunk_FUN_03f5d7b8(plVar5 + uVar12 + 4,lVar8);
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar9);
      AnhPD_FoodOrder_ConveyorBundleBuilder__LinkChains(lVar3,plVar5,0);
      if ((int)uVar2 < 1) {
        return;
      }
      uVar12 = 0;
      while ((*(long *)(param_1 + 0x198) != 0 &&
             (lVar3 = FUN_057e0998(*(long *)(param_1 + 0x198),uVar12 & 0xffffffff,DAT_091abe48),
             lVar3 != 0))) {
        if (*(uint *)(plVar5 + 3) <= uVar12) {
LAB_040f55f4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(long *)(lVar3 + 0x10) == 0) break;
        AnhPD_FoodOrder_ConveyorIngredientSource__SetBundleStack
                  (*(long *)(lVar3 + 0x10),plVar5[uVar12 + 4],0);
        uVar12 = uVar12 + 1;
        if (uVar9 == uVar12) {
          return;
        }
      }
    }
  }
LAB_040f55f0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


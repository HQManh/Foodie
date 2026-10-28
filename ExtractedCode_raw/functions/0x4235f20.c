// rea decompile_all
// name: AnhPD.FoodOrder.IngCellFinder$$TryGetDirtyPlateCell
// address: 0x4235f20
// body: available
// range: 0x4235f20-0x4236307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4236198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42362f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42362f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42362fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4236304 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04236300) */

bool AnhPD_FoodOrder_IngCellFinder__TryGetDirtyPlateCell
               (long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  
  if ((DAT_09516e37 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09178ab8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a7c8);
    FUN_03f5c2a4(&DAT_0917aec0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091eb900);
    FUN_03f5c2a4(&DAT_091916f0);
    DAT_09516e37 = 1;
  }
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_042362fc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = AnhPD_FoodOrder_IngGridLayout__AnyEnabledCell();
  if (((uVar2 & 1) == 0) ||
     (uVar2 = AnhPD_FoodOrder_IngCellFinder__HasRoomBeyondPending(param_1,param_2), (uVar2 & 1) == 0
     )) {
    bVar1 = false;
  }
  else {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (plVar3 = (long *)AnhPD_FoodOrder_IngGridLayout__EnabledCells(), plVar3 == (long *)0x0))
    goto LAB_042362fc;
    lVar6 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917a7c8) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04236064;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a7c8,0);
LAB_04236064:
    plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    do {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_042360e0;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_042360e0:
      uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar2 & 1) == 0) {
        bVar1 = false;
        iVar8 = 7;
        goto LAB_042361c8;
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917aec0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04236144;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917aec0,0);
LAB_04236144:
      uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar5,uVar5);
      }
      lVar6 = (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),uVar5,*(undefined8 *)(lVar6 + 0x28));
    } while (((lVar6 == 0) ||
             (uVar2 = AnhPD_FoodOrder_IngCell__get_HasDirtyPlate(lVar6), (uVar2 & 1) == 0)) ||
            (uVar2 = AnhPD_FoodOrder_IngCell__CanAccept(lVar6,param_2), (uVar2 & 1) == 0));
    *param_3 = lVar6;
    thunk_FUN_03f5d7b8(param_3,lVar6);
    bVar1 = true;
    iVar8 = 6;
LAB_042361c8:
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185a58) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04236228;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_04236228:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
    if ((iVar8 == 7) || (iVar8 == 0)) {
      if (*(int *)(DAT_091916f0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar4 = *(undefined8 **)(DAT_091916f0 + 0xb8);
      lVar6 = puVar4[3];
      if (lVar6 == 0) {
        if (*(int *)(DAT_091916f0 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar4 = *(undefined8 **)(DAT_091916f0 + 0xb8);
        }
        uVar5 = *puVar4;
        lVar6 = thunk_FUN_03f9944c(DAT_09178ab8);
        FUN_05322d94(lVar6,uVar5,DAT_091eb900,0);
        plVar3 = (long *)(*(long *)(DAT_091916f0 + 0xb8) + 0x18);
        *plVar3 = lVar6;
        thunk_FUN_03f5d7b8(plVar3,lVar6);
      }
      if (param_1 == 0) goto LAB_042362fc;
      lVar6 = AnhPD_FoodOrder_IngCellFinder__FindFirst(param_1,lVar6);
      *param_3 = lVar6;
      thunk_FUN_03f5d7b8(param_3,lVar6);
      bVar1 = *param_3 != 0;
    }
  }
  return bVar1;
}


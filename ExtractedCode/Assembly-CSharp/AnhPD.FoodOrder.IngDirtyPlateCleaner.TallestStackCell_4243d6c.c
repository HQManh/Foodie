// rea decompile_all
// name: AnhPD.FoodOrder.IngDirtyPlateCleaner$$TallestStackCell
// address: 0x4243d6c
// body: available
// range: 0x4243d6c-0x4243f97 inclusive
// range: 0x4243fd4-0x4244067 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4243f84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4243f88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4243f8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4243f94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4244064 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04244064) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long AnhPD_FoodOrder_IngDirtyPlateCleaner__TallestStackCell(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  
  if ((DAT_09516e52 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a7c8);
    FUN_03f5c2a4(&DAT_0917aec0);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_09516e52 = 1;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (plVar2 = (long *)AnhPD_FoodOrder_IngGridLayout__EnabledCells(), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_0917a7c8) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_04243e34;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a7c8,0);
LAB_04243e34:
  plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
  if (plVar2 != (long *)0x0) {
    iVar9 = 0;
    lVar5 = 0;
LAB_04243e6c:
    do {
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04243eb8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_04243eb8:
      uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar2 == (long *)0x0) {
          return lVar5;
        }
        lVar6 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_04244018;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_04244000;
      }
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917aec0) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04243f1c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917aec0,0);
LAB_04243f1c:
      uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar4,uVar4);
      }
      lVar6 = (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),uVar4,*(undefined8 *)(lVar6 + 0x28));
      if ((lVar6 != 0) &&
         (uVar7 = AnhPD_FoodOrder_IngCell__get_HasDirtyPlate(lVar6), (uVar7 & 1) != 0)) {
        iVar1 = AnhPD_FoodOrder_IngCell__get_OccupiedCount(lVar6);
        if (iVar1 <= iVar9) {
          lVar6 = lVar5;
          iVar1 = iVar9;
        }
        iVar9 = iVar1;
        lVar5 = lVar6;
        if (plVar2 == (long *)0x0) break;
        goto LAB_04243e6c;
      }
    } while (plVar2 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_04244000:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_04244034;
    }
  }
LAB_04244018:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_04244034:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return lVar5;
}


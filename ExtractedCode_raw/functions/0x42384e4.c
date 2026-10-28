// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$PickSaveMeBagCell
// address: 0x42384e4
// body: available
// range: 0x42384e4-0x42389fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42389e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42389e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42389e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42389f0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42389f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42389f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x042389ec) */

long AnhPD_FoodOrder_GridIngController__PickSaveMeBagCell(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  
  if ((DAT_09516df1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a7c8);
    FUN_03f5c2a4(&DAT_0917aec0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_092142e8);
    FUN_03f5c2a4(&DAT_092142f0);
    DAT_09516df1 = 1;
  }
  lVar1 = AnhPD_FoodOrder_GridIngController__get_Layout(param_1);
  if ((lVar1 != 0) &&
     (plVar2 = (long *)AnhPD_FoodOrder_IngGridLayout__EnabledCellsFromRight(), plVar2 != (long *)0x0
     )) {
    lVar1 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917a7c8) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_042385dc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a7c8,0);
LAB_042385dc:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    do {
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar1 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04238660;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_04238660:
      uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar5 & 1) == 0) {
        lVar1 = 0;
        iVar8 = 5;
        goto LAB_04238700;
      }
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar1 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917aec0) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_042386c4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917aec0,0);
LAB_042386c4:
      lVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      uVar5 = AnhPD_FoodOrder_GridIngController__EndsEmptyAfterSweep(param_1,lVar1,param_2);
    } while ((uVar5 & 1) == 0);
    iVar8 = 4;
LAB_04238700:
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185a58) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04238758;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_04238758:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
    }
    if ((iVar8 == 5) || (iVar8 == 0)) {
      lVar4 = AnhPD_FoodOrder_GridIngController__get_Layout(param_1);
      if ((lVar4 == 0) ||
         (plVar2 = (long *)AnhPD_FoodOrder_IngGridLayout__EnabledCellsFromRight(),
         plVar2 == (long *)0x0)) goto LAB_042389e8;
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917a7c8) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_042387d8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a7c8,0);
LAB_042387d8:
      plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04238844;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_04238844:
      uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar5 & 1) == 0) {
        uVar7 = 8;
      }
      else {
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar1 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_0917aec0) {
              puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_042388b8;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917aec0,0);
LAB_042388b8:
        lVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogWarning(DAT_092142f0,param_1,0);
        uVar7 = 4;
      }
      if (plVar2 != (long *)0x0) {
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09185a58) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0423895c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_0423895c:
        (*(code *)*puVar3)(plVar2,puVar3[1]);
      }
      if ((uVar7 | 8) == 8) {
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogWarning(DAT_092142e8,param_1,0);
        lVar1 = AnhPD_FoodOrder_GridIngController__get_Layout(param_1);
        if (lVar1 == 0) goto LAB_042389e8;
        lVar1 = (ulong)(*(int *)(lVar1 + 0x24) - 1) << 0x20;
      }
    }
    return lVar1;
  }
LAB_042389e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


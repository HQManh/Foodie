// rea decompile_all
// name: AnhPD.FoodOrder.TutorialTargetResolver$$ResolveIngredient
// address: 0x411c1f0
// body: available
// range: 0x411c1f0-0x411c5af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411c594 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411c598 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411c59c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411c5a4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411c5a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411c5ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0411c5a0) */

undefined8 AnhPD_FoodOrder_TutorialTargetResolver__ResolveIngredient(undefined8 param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  
  if ((DAT_09516267 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516267 = 1;
  }
  uVar5 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
  lVar6 = 0;
  if ((uVar1 & 1) != 0) {
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_0411c59c;
    lVar6 = AnhPD_FoodOrder_MessyController__get_Spawner(**(long **)(DAT_091881a0 + 0xb8),0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar6,0);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (((lVar6 != 0) && (*(long *)(lVar6 + 0x1a0) != 0)) &&
     (plVar7 = *(long **)(*(long *)(lVar6 + 0x1a0) + 0x20), plVar7 != (long *)0x0)) {
    lVar6 = *plVar7;
    uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == DAT_0917a3f0) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0411c354;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a3f0,0);
LAB_0411c354:
    plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
    lVar6 = 0;
    iVar10 = 0x7fffffff;
LAB_0411c384:
    iVar11 = iVar10;
    lVar8 = lVar6;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar7;
    uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0411c3d8;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_0411c3d8:
    uVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar1 & 1) != 0) goto code_r0x0411c3e8;
    uVar5 = 0;
    iVar10 = 0xb;
    goto LAB_0411c4a4;
  }
LAB_0411c59c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
code_r0x0411c3e8:
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *plVar7;
  uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar1 != 0) {
    piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == DAT_0917aa98) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0411c43c;
      }
      uVar1 = uVar1 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917aa98,0);
LAB_0411c43c:
  lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  if (lVar3 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + 0x10);
  }
  uVar1 = AnhPD_FoodOrder_TutorialTargetResolver__MatchesIngredient(lVar9,param_1);
  lVar6 = lVar8;
  iVar10 = iVar11;
  if ((uVar1 & 1) != 0) {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = AnhPD_FoodOrder_IngredientConveyorItem__get_IsAtFrontRow(lVar9,0);
    if ((uVar1 & 1) != 0) {
      uVar5 = UnityEngine_Component__get_transform(lVar9,0);
      iVar10 = 10;
LAB_0411c4a4:
      if (plVar7 == (long *)0x0) goto LAB_0411c510;
      lVar6 = *plVar7;
      uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar1 == 0) goto LAB_0411c4e8;
      piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_0411c4d0;
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = lVar9;
    iVar10 = *(int *)(lVar3 + 0x24);
    if (iVar11 <= *(int *)(lVar3 + 0x24)) {
      lVar6 = lVar8;
      iVar10 = iVar11;
    }
  }
  goto LAB_0411c384;
  while( true ) {
    uVar1 = uVar1 - 1;
    piVar4 = piVar4 + 4;
    if (uVar1 == 0) break;
LAB_0411c4d0:
    if (*(long *)(piVar4 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_0411c504;
    }
  }
LAB_0411c4e8:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_0411c504:
  (*(code *)*puVar2)(plVar7,puVar2[1]);
LAB_0411c510:
  if ((iVar10 == 0xb) || (iVar10 == 0)) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(lVar8,0);
    uVar5 = 0;
    if ((uVar1 & 1) != 0) {
      if (lVar8 == 0) goto LAB_0411c59c;
      uVar5 = UnityEngine_Component__get_transform(lVar8,0);
    }
  }
  return uVar5;
}


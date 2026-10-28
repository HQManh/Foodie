// rea decompile_all
// name: AnhPD.FoodOrder.TutorialTargetResolver$$IsIngredientReady
// address: 0x411cc0c
// body: available
// range: 0x411cc0c-0x411cf4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411cea0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411cf3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411cf40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411cf44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411cf4c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0411cf48) */

uint AnhPD_FoodOrder_TutorialTargetResolver__IsIngredientReady(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_09516266 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516266 = 1;
  }
  uVar5 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
  lVar6 = 0;
  if ((uVar2 & 1) != 0) {
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_0411cf44;
    lVar6 = AnhPD_FoodOrder_MessyController__get_Spawner(**(long **)(DAT_091881a0 + 0xb8),0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar6,0);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    if (((lVar6 == 0) || (*(long *)(lVar6 + 0x1a0) == 0)) ||
       (plVar7 = *(long **)(*(long *)(lVar6 + 0x1a0) + 0x20), plVar7 == (long *)0x0)) {
LAB_0411cf44:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == DAT_0917a3f0) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0411cd6c;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a3f0,0);
LAB_0411cd6c:
    plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
    do {
      do {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == DAT_09185b10) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_0411cde8;
            }
            uVar2 = uVar2 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_0411cde8:
        uVar1 = (*(code *)*puVar3)(plVar7,puVar3[1]);
        if ((uVar1 & 1) == 0) {
          uVar1 = 0;
          goto LAB_0411ceac;
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == DAT_0917aa98) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_0411ce50;
            }
            uVar2 = uVar2 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917aa98,0);
LAB_0411ce50:
        lVar6 = (*(code *)*puVar3)(plVar7,puVar3[1]);
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(long *)(lVar6 + 0x10);
        }
        uVar2 = AnhPD_FoodOrder_TutorialTargetResolver__MatchesIngredient(lVar6,param_1);
      } while ((uVar2 & 1) == 0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = AnhPD_FoodOrder_IngredientConveyorItem__get_IsPickable(lVar6,0);
    } while (((uVar2 & 1) == 0) || (*(char *)(lVar6 + 0xd1) != '\0'));
LAB_0411ceac:
    if (plVar7 != (long *)0x0) {
      lVar6 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == DAT_09185a58) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0411cf0c;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_0411cf0c:
      (*(code *)*puVar3)(plVar7,puVar3[1]);
    }
  }
  return uVar1 & 1;
}


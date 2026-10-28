// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotBridge$$TryPick
// address: 0x41742ec
// body: available
// range: 0x41742ec-0x417470f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41745bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41746fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4174700 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4174704 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x417470c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04174708) */
/* WARNING: Removing unreachable block (ram,0x04174644) */

undefined4 AnhPD_FoodOrder_Autoplay_CookingBotBridge__TryPick(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((DAT_095165e8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095165e8 = 1;
  }
  if (((param_2 == 0) ||
      (uVar1 = AnhPD_FoodOrder_Autoplay_CookingBotBridge__IsPlayable(param_1), (uVar1 & 1) == 0)) ||
     (*(long *)(param_2 + 0x18) != *(long *)(param_1 + 0x60))) {
    return 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = AnhPD_FoodOrder_MessyController__get_Spawner(*(long *)(param_1 + 0x10),0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar1 = UnityEngine_Object__op_Inequality(lVar2,0,0);
    lVar5 = 0;
    if ((uVar1 & 1) != 0) {
      if (lVar2 == 0) goto LAB_04174704;
      lVar5 = *(long *)(lVar2 + 0x1b8);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(lVar2,0,0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if (lVar2 != 0) {
      if (lVar5 == 0) {
        return 0;
      }
      if (*(long *)(lVar2 + 0x1a0) == 0) {
        return 0;
      }
      plVar6 = *(long **)(*(long *)(lVar2 + 0x1a0) + 0x20);
      if (plVar6 != (long *)0x0) {
        lVar2 = *plVar6;
        uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar1 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == DAT_0917a3f0) {
              puVar3 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_04174464;
            }
            uVar1 = uVar1 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a3f0,0);
LAB_04174464:
        plVar6 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
        do {
          do {
            do {
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar2 = *plVar6;
              uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
              if (uVar1 != 0) {
                piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar4 + -2) == DAT_09185b10) {
                    puVar3 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
                    goto LAB_041744e0;
                  }
                  uVar1 = uVar1 - 1;
                  piVar4 = piVar4 + 4;
                } while (uVar1 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_041744e0:
              uVar1 = (*(code *)*puVar3)(plVar6,puVar3[1]);
              if ((uVar1 & 1) == 0) {
                uVar7 = 0;
                goto LAB_041745c8;
              }
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar2 = *plVar6;
              uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
              if (uVar1 != 0) {
                piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar4 + -2) == DAT_0917aa98) {
                    puVar3 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
                    goto LAB_04174544;
                  }
                  uVar1 = uVar1 - 1;
                  piVar4 = piVar4 + 4;
                } while (uVar1 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917aa98,0);
LAB_04174544:
              lVar2 = (*(code *)*puVar3)(plVar6,puVar3[1]);
              if (lVar2 == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(undefined8 *)(lVar2 + 0x10);
              }
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar1 = UnityEngine_Object__op_Equality(uVar7,0,0);
            } while ((uVar1 & 1) != 0);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          } while (*(int *)(lVar2 + 0x20) != *(int *)(param_2 + 0x20));
          uVar7 = AnhPD_FoodOrder_Autoplay_CookingBotBridge__ItemIdOf(*(undefined8 *)(lVar2 + 0x10))
          ;
          uVar1 = System_String__op_Inequality(uVar7,*(undefined8 *)(param_2 + 0x28),0);
        } while ((uVar1 & 1) != 0);
        uVar7 = *(undefined8 *)(lVar2 + 0x10);
LAB_041745c8:
        if (plVar6 != (long *)0x0) {
          lVar2 = *plVar6;
          uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar1 != 0) {
            piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == DAT_09185a58) {
                puVar3 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
                goto LAB_0417462c;
              }
              uVar1 = uVar1 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar1 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_0417462c:
          (*(code *)*puVar3)(plVar6,puVar3[1]);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Equality(uVar7,0,0);
        if ((uVar1 & 1) != 0) {
          return 0;
        }
        uVar1 = AnhPD_FoodOrder_ConveyorPickup__CanPick(lVar5,uVar7,0);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        uVar1 = AnhPD_FoodOrder_ConveyorPickup__HasRoomFor(lVar5,uVar7,0,0);
        if ((uVar1 & 1) != 0) {
          AnhPD_FoodOrder_Autoplay_CookingBotBridge__CommitPending(param_1,uVar7);
          AnhPD_FoodOrder_ConveyorPickup__Tap(lVar5,uVar7,0);
          *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
          return 1;
        }
        return 0;
      }
    }
  }
LAB_04174704:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: AnhPD.FoodOrder.BoosterService$$AnyPickableBeltItem
// address: 0x41e650c
// body: available
// range: 0x41e650c-0x41e68bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e6810 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e68ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e68b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e68b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e68bc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041e68b8) */
/* WARNING: Removing unreachable block (ram,0x041e6898) */

bool AnhPD_FoodOrder_BoosterService__AnyPickableBeltItem(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  
  if ((DAT_09516b0c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b0c = 1;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = UnityEngine_Time__get_frameCount(0);
  if (iVar1 == iVar2) {
LAB_041e6598:
    return *(char *)(param_1 + 0x44) != '\0';
  }
  uVar3 = UnityEngine_Time__get_frameCount(0);
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(lVar7,0);
    lVar8 = 0;
    if ((uVar4 & 1) != 0) {
      if (lVar7 == 0) goto LAB_041e68b0;
      lVar8 = *(long *)(lVar7 + 0x1a0);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(lVar7,0);
    if ((uVar4 & 1) == 0) {
      return false;
    }
    if (lVar7 != 0) {
      if (lVar8 == 0) {
        return false;
      }
      lVar7 = *(long *)(lVar7 + 0x1b8);
      if (lVar7 == 0) {
        return false;
      }
      plVar9 = *(long **)(lVar8 + 0x20);
      if (plVar9 != (long *)0x0) {
        lVar8 = *plVar9;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_0917a3f0) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_041e66ac;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a3f0,0);
LAB_041e66ac:
        plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
        do {
          do {
            do {
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = *plVar9;
              uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar4 != 0) {
                piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == DAT_09185b10) {
                    puVar5 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_041e6728;
                  }
                  uVar4 = uVar4 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar4 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_041e6728:
              uVar4 = (*(code *)*puVar5)(plVar9,puVar5[1]);
              if ((uVar4 & 1) == 0) goto LAB_041e6818;
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = *plVar9;
              uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar4 != 0) {
                piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == DAT_0917aa98) {
                    puVar5 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_041e678c;
                  }
                  uVar4 = uVar4 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar4 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917aa98,0);
LAB_041e678c:
              lVar8 = (*(code *)*puVar5)(plVar9,puVar5[1]);
            } while (lVar8 == 0);
            uVar10 = *(undefined8 *)(lVar8 + 0x10);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Implicit(uVar10,0);
          } while (((uVar4 & 1) == 0) || (*(int *)(lVar8 + 0x24) < param_2));
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        } while (((*(char *)(lVar8 + 0xd1) != '\0') ||
                 (uVar4 = AnhPD_FoodOrder_IngredientConveyorItem__get_IsFrozen(lVar8,0),
                 (uVar4 & 1) != 0)) ||
                (uVar4 = AnhPD_FoodOrder_ConveyorPickup__HasRoomFor(lVar7,lVar8,1,0),
                (uVar4 & 1) == 0));
        *(undefined1 *)(param_1 + 0x44) = 1;
LAB_041e6818:
        if (plVar9 != (long *)0x0) {
          lVar7 = *plVar9;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_09185a58) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_041e687c;
              }
              uVar4 = uVar4 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185a58,0);
LAB_041e687c:
          (*(code *)*puVar5)(plVar9,puVar5[1]);
        }
        goto LAB_041e6598;
      }
    }
  }
LAB_041e68b0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


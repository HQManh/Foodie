// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotBridge$$AddActiveWorkCounts
// address: 0x41730d0
// body: available
// range: 0x41730d0-0x4173383 inclusive
// range: 0x4173388-0x417338b inclusive
// range: 0x41733c0-0x41734e3 inclusive
// range: 0x41734f4-0x41734fb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4173380 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4173388 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4173434 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41734dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41734e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41734f8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04173458) */
/* WARNING: Removing unreachable block (ram,0x04173434) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddActiveWorkCounts(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  int iVar9;
  long local_a0;
  long *plStack_98;
  long local_90;
  long *local_88;
  long local_80;
  long *plStack_78;
  long local_70;
  
  if ((DAT_095165e1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a27c8);
    FUN_03f5c2a4(&DAT_091a27d0);
    FUN_03f5c2a4(&DAT_091a27d8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a750);
    FUN_03f5c2a4(&DAT_0917ae30);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ac068);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095165e1 = 1;
  }
  local_80 = 0;
  plStack_78 = (long *)0x0;
  local_70 = 0;
  local_88 = (long *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_057e185c(&local_a0,*(long *)(param_1 + 0x40),DAT_091ac068);
    iVar9 = 0;
    local_70 = local_90;
    plStack_78 = plStack_98;
    local_80 = local_a0;
    local_a0 = 0;
    plStack_98 = &local_80;
    while (uVar4 = FUN_071bd28c(&local_80,DAT_091a27d0), lVar1 = local_70, lVar6 = local_a0,
          (uVar4 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(lVar1,0);
      if ((uVar4 & 1) != 0) {
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar8 = *(long **)(lVar1 + 0x58);
        if (plVar8 != (long *)0x0) {
          lVar6 = *plVar8;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917a750) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_04173278;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a750,0);
LAB_04173278:
          plVar8 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
joined_r0x04173290:
          local_88 = plVar8;
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *plVar8;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_041732e0;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_041732e0:
          uVar4 = (*(code *)*puVar5)(plVar8,puVar5[1]);
          plVar8 = local_88;
          if ((uVar4 & 1) != 0) {
            if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *local_88;
            uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar4 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_0917ae30) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_04173344;
                }
                uVar4 = uVar4 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(local_88,DAT_0917ae30,0);
LAB_04173344:
            lVar6 = (*(code *)*puVar5)(plVar8,puVar5[1]);
            plVar8 = local_88;
            if ((lVar6 != 0) && (*(char *)(lVar6 + 0x38) != '\0')) {
              uVar2 = AnhPD_FoodOrder_StationInteractGroup__IsReadyToProcess(lVar6,0);
              iVar9 = iVar9 + (uVar2 & 1);
              plVar8 = local_88;
            }
            goto joined_r0x04173290;
          }
          if (local_88 != (long *)0x0) {
            lVar6 = *local_88;
            uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar4 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_09185a58) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_04173420;
                }
                uVar4 = uVar4 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185a58,0);
LAB_04173420:
            (*(code *)*puVar5)(plVar8,puVar5[1]);
          }
        }
      }
    }
    FUN_071bd288(plStack_98,DAT_091a27c8);
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar6);
    }
    if (param_2 != 0) {
      *(int *)(param_2 + 0x50) = iVar9;
      if (*(long *)(param_1 + 0x10) != 0) {
        lVar6 = AnhPD_FoodOrder_MessyController__get_ServeShelf(*(long *)(param_1 + 0x10),0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar4 = UnityEngine_Object__op_Inequality(lVar6,0,0);
        if ((uVar4 & 1) == 0) {
          uVar3 = 0;
        }
        else {
          if (lVar6 == 0) goto LAB_041734e0;
          uVar3 = AnhPD_FoodOrder_ServeShelfController__get_PendingMergeCount(lVar6,0);
        }
        *(undefined4 *)(param_2 + 0x54) = uVar3;
        return;
      }
    }
  }
LAB_041734e0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


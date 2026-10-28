// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$PinLane
// address: 0x4446354
// body: available
// range: 0x4446354-0x44467a7 inclusive
// range: 0x44467ac-0x444682f inclusive
// range: 0x4446834-0x4446837 inclusive
// range: 0x444683c-0x444683f inclusive
// range: 0x444688c-0x44468a7 inclusive
// range: 0x4446908-0x444699f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44467a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444682c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4446834 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444683c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444688c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4446890 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4446894 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4446898 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44468a0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44468a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444699c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0444689c) */

void CookingGraph_CookingLevelSimulation__PinLane
               (long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  undefined8 local_d0;
  long **pplStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long **pplStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long **pplStack_98;
  undefined8 local_90;
  long local_88;
  long **local_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  if ((DAT_09518041 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e638);
    FUN_03f5c2a4(&DAT_0919c1a0);
    FUN_03f5c2a4(&DAT_0919e628);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a480);
    FUN_03f5c2a4(&DAT_0917a5c0);
    FUN_03f5c2a4(&DAT_0917ab28);
    FUN_03f5c2a4(&DAT_0917ac88);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091bec98);
    DAT_09518041 = 1;
  }
  lVar7 = *(long *)(param_1 + 0xb0);
  local_70 = (long *)0x0;
  local_68 = 0;
  local_78 = (long *)0x0;
  local_a0 = 0;
  FUN_066c1fdc(&local_a0,param_2,param_3,DAT_091bec98);
  if (lVar7 != 0) {
    uVar3 = FUN_06e4da10(lVar7,local_a0,&local_68,DAT_0919c1a0);
    if ((uVar3 & 1) != 0) {
      if (local_68 == 0) goto LAB_044468a4;
      if (*(char *)(local_68 + 0x38) != '\0') {
        return;
      }
      if (*(char *)(local_68 + 0x3a) != '\0') {
        return;
      }
    }
    plVar4 = (long *)CookingGraph_CookingLevelSimulation__LaneSlots(param_1,param_2,param_3);
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917a5c0) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_044464e0;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a5c0,0);
LAB_044464e0:
      local_70 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      local_80 = &local_70;
      local_88 = 0;
      if (local_70 != (long *)0x0) {
        do {
          plVar4 = local_70;
          lVar7 = *local_70;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_09185b10) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_04446578;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(local_70,DAT_09185b10,0);
LAB_04446578:
          uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          plVar4 = local_70;
          if ((uVar3 & 1) == 0) {
            plVar4 = *local_80;
            if (plVar4 == (long *)0x0) goto LAB_04446974;
            lVar7 = *plVar4;
            uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar3 == 0) goto LAB_0444694c;
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_04446934;
          }
          if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = *local_70;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_0917ac88) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_044465e4;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(local_70,DAT_0917ac88,0);
LAB_044465e4:
          uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          lVar7 = *(long *)(param_1 + 0x178);
          CookingGraph_CookingLevelSimulation__ToolAddress(&local_b8,param_2,uVar2);
          pplStack_98 = pplStack_b0;
          local_a0 = local_b8;
          local_90 = local_a8;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          pplStack_c8 = pplStack_b0;
          local_d0 = local_b8;
          local_c0 = local_a8;
          plVar4 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar7,&local_d0,0);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = *plVar4;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_0917a480) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_0444668c;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a480,0);
LAB_0444668c:
          plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
          local_b8 = 0;
          pplStack_b0 = &local_78;
joined_r0x044466a4:
          local_78 = plVar4;
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = *plVar4;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_09185b10) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_044466f4;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_044466f4:
          uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          plVar4 = local_78;
          if ((uVar3 & 1) != 0) {
            if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *local_78;
            uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar3 != 0) {
              piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == DAT_0917ab28) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_04446758;
                }
                uVar3 = uVar3 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar3 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(local_78,DAT_0917ab28,0);
LAB_04446758:
            (*(code *)*puVar5)(&local_a0,plVar4,puVar5[1]);
            uVar1 = local_a0;
            if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar3 = FUN_06f535c4(*(long *)(param_1 + 0xb8),local_a0,DAT_0919e638);
            plVar4 = local_78;
            if ((uVar3 & 1) == 0) {
              if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_06f533bc(*(long *)(param_1 + 0xc0),uVar1,param_4,DAT_0919e628);
              plVar4 = local_78;
            }
            goto joined_r0x044466a4;
          }
          if (local_78 != (long *)0x0) {
            lVar7 = *local_78;
            uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar3 != 0) {
              piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == DAT_09185a58) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_04446810;
                }
                uVar3 = uVar3 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar3 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185a58,0);
LAB_04446810:
            (*(code *)*puVar5)(plVar4,puVar5[1]);
          }
        } while (local_70 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_044468a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
LAB_04446934:
    if (*(long *)(piVar6 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04446968;
    }
  }
LAB_0444694c:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_04446968:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_04446974:
  if (local_88 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548();
}


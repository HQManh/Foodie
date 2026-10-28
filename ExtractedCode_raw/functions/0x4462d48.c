// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$PinArrival
// address: 0x4462d48
// body: available
// range: 0x4462d48-0x44631ef inclusive
// range: 0x44631f4-0x44632b3 inclusive
// range: 0x44632b8-0x44632bb inclusive
// range: 0x44632c0-0x44632c3 inclusive
// range: 0x4463310-0x446332f inclusive
// range: 0x4463390-0x44633b7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44631ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44632b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44632b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44632c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4463310 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4463314 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446331c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4463320 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4463324 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4463328 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446332c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04463318) */

void CookingGraph_CookingLevelSimulation__PinArrival(long param_1,undefined8 *param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  undefined8 local_f0;
  long **pplStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long **pplStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long **pplStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  long **pplStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  if ((DAT_09518042 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e600);
    FUN_03f5c2a4(&DAT_0919e638);
    FUN_03f5c2a4(&DAT_0919c190);
    FUN_03f5c2a4(&DAT_0919e618);
    FUN_03f5c2a4(&DAT_0919e628);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a480);
    FUN_03f5c2a4(&DAT_0917a5c0);
    FUN_03f5c2a4(&DAT_0917ab28);
    FUN_03f5c2a4(&DAT_0917ac88);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091bec98);
    DAT_09518042 = 1;
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_78 = 0;
  if (*param_3 == 1) {
    if (*(long *)(param_1 + 0xc0) == 0) {
LAB_04463310:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = FUN_06f535c4(*(long *)(param_1 + 0xc0),*param_2,DAT_0919e600);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_1 + 0xb8) == 0) goto LAB_04463310;
      uVar3 = FUN_06f535c4(*(long *)(param_1 + 0xb8),*param_2,DAT_0919e638);
      if ((uVar3 & 1) == 0) {
        uStack_88 = *(undefined8 *)(param_3 + 2);
        local_90 = *(undefined8 *)param_3;
        local_80 = *(undefined8 *)(param_3 + 4);
        uVar1 = CookingGraph_CookingLevelSimulation__ToolOf(&local_90);
        if (-1 < (int)uVar1) {
          if ((*(long *)(param_1 + 0x78) != 0) &&
             (lVar7 = *(long *)(*(long *)(param_1 + 0x78) + 0x20), lVar7 != 0)) {
            uVar3 = (ulong)uVar1;
            if (*(uint *)(lVar7 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar7 = *(long *)(lVar7 + uVar3 * 8 + 0x20);
            if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)) {
              if (*(int *)(lVar7 + 0x18) <= param_3[4]) {
                return;
              }
              lVar7 = *(long *)(param_1 + 0xb0);
              uVar2 = CookingGraph_CookingLevelSimulation__LaneOf(param_1,uVar3);
              local_c0 = 0;
              FUN_066c1fdc(&local_c0,uVar3,uVar2,DAT_091bec98);
              if (lVar7 != 0) {
                uVar4 = FUN_06e4c14c(lVar7,local_c0,DAT_0919c190);
                if ((uVar4 & 1) != 0) {
                  return;
                }
                uVar2 = CookingGraph_CookingLevelSimulation__LaneOf(param_1,uVar3,param_3[4]);
                lVar7 = CookingGraph_CookingLevelSimulation__LaneSlots(param_1,uVar3,uVar2);
                if (lVar7 != 0) {
                  local_68 = (long *)FUN_039afee4(0,DAT_0917a5c0,lVar7);
                  pplStack_98 = &local_68;
                  local_a0 = 0;
                  if (local_68 != (long *)0x0) {
                    do {
                      plVar6 = local_68;
                      lVar7 = *local_68;
                      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
                      if (uVar4 != 0) {
                        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar8 + -2) == DAT_09185b10) {
                            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                            goto LAB_04462fd8;
                          }
                          uVar4 = uVar4 - 1;
                          piVar8 = piVar8 + 4;
                        } while (uVar4 != 0);
                      }
                      puVar5 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185b10,0);
LAB_04462fd8:
                      uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
                      plVar6 = local_68;
                      if ((uVar4 & 1) == 0) {
LAB_04463390:
                        FUN_039aeef4(&local_a0);
                        return;
                      }
                      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar7 = *local_68;
                      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
                      if (uVar4 != 0) {
                        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar8 + -2) == DAT_0917ac88) {
                            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                            goto LAB_04463044;
                          }
                          uVar4 = uVar4 - 1;
                          piVar8 = piVar8 + 4;
                        } while (uVar4 != 0);
                      }
                      puVar5 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917ac88,0);
LAB_04463044:
                      uVar2 = (*(code *)*puVar5)(plVar6,puVar5[1]);
                      lVar7 = *(long *)(param_1 + 0x178);
                      CookingGraph_CookingLevelSimulation__ToolAddress(&local_d8,uVar3,uVar2);
                      pplStack_b8 = pplStack_d0;
                      local_c0 = local_d8;
                      local_b0 = local_c8;
                      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      pplStack_e8 = pplStack_d0;
                      local_f0 = local_d8;
                      local_e0 = local_c8;
                      plVar6 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt
                                                 (lVar7,&local_f0,0);
                      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar7 = *plVar6;
                      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
                      if (uVar4 != 0) {
                        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar8 + -2) == DAT_0917a480) {
                            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                            goto LAB_044630ec;
                          }
                          uVar4 = uVar4 - 1;
                          piVar8 = piVar8 + 4;
                        } while (uVar4 != 0);
                      }
                      puVar5 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a480,0);
LAB_044630ec:
                      plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
                      local_d8 = 0;
                      pplStack_d0 = &local_70;
                      do {
                        local_70 = plVar6;
                        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar7 = *plVar6;
                        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
                        if (uVar4 != 0) {
                          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar8 + -2) == DAT_09185b10) {
                              puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                              goto LAB_04463154;
                            }
                            uVar4 = uVar4 - 1;
                            piVar8 = piVar8 + 4;
                          } while (uVar4 != 0);
                        }
                        puVar5 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_04463154:
                        uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
                        plVar6 = local_70;
                        if ((uVar4 & 1) == 0) {
                          iVar9 = 6;
                          goto LAB_04463228;
                        }
                        if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar7 = *local_70;
                        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
                        if (uVar4 != 0) {
                          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar8 + -2) == DAT_0917ab28) {
                              puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                              goto LAB_044631b8;
                            }
                            uVar4 = uVar4 - 1;
                            piVar8 = piVar8 + 4;
                          } while (uVar4 != 0);
                        }
                        puVar5 = (undefined8 *)FUN_03f95da8(local_70,DAT_0917ab28,0);
LAB_044631b8:
                        (*(code *)*puVar5)(&local_c0,plVar6,puVar5[1]);
                        if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        uVar4 = FUN_06f54e88(*(long *)(param_1 + 0xc0),local_c0,&local_78,
                                             DAT_0919e618);
                        plVar6 = local_70;
                      } while ((uVar4 & 1) == 0);
                      if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      FUN_06f533bc(*(long *)(param_1 + 0xc0),*param_2,local_78,DAT_0919e628);
                      iVar9 = 10;
LAB_04463228:
                      plVar6 = local_70;
                      if (local_70 != (long *)0x0) {
                        lVar7 = *local_70;
                        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
                        if (uVar4 != 0) {
                          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar8 + -2) == DAT_09185a58) {
                              puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                              goto LAB_04463288;
                            }
                            uVar4 = uVar4 - 1;
                            piVar8 = piVar8 + 4;
                          } while (uVar4 != 0);
                        }
                        puVar5 = (undefined8 *)FUN_03f95da8(local_70,DAT_09185a58,0);
LAB_04463288:
                        (*(code *)*puVar5)(plVar6,puVar5[1]);
                      }
                      if ((iVar9 != 6) && (iVar9 != 0)) goto LAB_04463390;
                    } while (local_68 != (long *)0x0);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
              }
            }
          }
          goto LAB_04463310;
        }
      }
    }
  }
  return;
}


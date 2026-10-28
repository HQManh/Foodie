// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ServeTarget
// address: 0x445fa14
// body: available
// range: 0x445fa14-0x4460253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4460148 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44601fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4460200 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4460204 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4460208 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446020c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4460210 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4460214 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4460218 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446021c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4460220 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4460224 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044601cc) */

void CookingGraph_CookingLevelSimulation__ServeTarget
               (undefined8 *param_1,undefined8 param_2,int param_3,long *param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  long local_108;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0951807d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fe78);
    FUN_03f5c2a4(&DAT_091c9298);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_0917a010);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a300);
    FUN_03f5c2a4(&DAT_0917a988);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_0917b498);
    FUN_03f5c2a4(&DAT_0917b4b0);
    FUN_03f5c2a4(&DAT_091b6b80);
    FUN_03f5c2a4(&DAT_091e7db8);
    FUN_03f5c2a4(&DAT_0918f530);
    DAT_0951807d = 1;
  }
  local_b0 = 0;
  local_a8 = (long *)0x0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  plVar2 = (long *)CookingGraph_CookingLevelSimulation__ServingCandidates(param_2);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_0917a300) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0445fb6c;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a300,0);
LAB_0445fb6c:
  local_a8 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
  local_c8 = &local_a8;
  local_d0 = 0;
  if (local_a8 == (long *)0x0) {
LAB_04460148:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_108 = 0;
LAB_0445fba8:
  plVar2 = local_a8;
  lVar6 = *local_a8;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_09185b10) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0445fbfc;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(local_a8,DAT_09185b10,0);
LAB_0445fbfc:
  uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  plVar2 = local_a8;
  if ((uVar7 & 1) != 0) {
    if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *local_a8;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917a988) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0445fc68;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(local_a8,DAT_0917a988,0);
LAB_0445fc68:
    auVar14 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    uVar7 = auVar14._8_8_;
    uVar4 = auVar14._0_8_;
    lVar6 = thunk_FUN_03f9944c(DAT_0918f530);
    CookingGraph_CookingLevelSimulation_<>c__DisplayClass301_0___ctor(lVar6,0);
    lVar5 = CookingGraph_CookingLevelSimulation__Assembly(param_2,uVar4,uVar7 & 0xffffffff);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar2 = (long *)(lVar6 + 0x10);
    *plVar2 = lVar5;
    thunk_FUN_03f5d7b8(plVar2);
    lVar5 = *plVar2;
    if (lVar5 == 0) {
LAB_044601fc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar11 = 0;
    do {
      plVar12 = *(long **)(lVar5 + 0x28);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917b310) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0445fd20;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917b310,0);
LAB_0445fd20:
      iVar1 = (*(code *)*puVar3)(plVar12,puVar3[1]);
      if (iVar1 <= iVar11) goto LAB_04460140;
      CookingGraph_CookingLevelSimulation__DishAddress(&local_f0,uVar4,uVar7 & 0xffffffff,iVar11);
      uStack_b8 = uStack_e8;
      local_c0 = local_f0;
      local_b0 = local_e0;
      if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar12 = *(long **)(*plVar2 + 0x28);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917b4b0) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0445fdb4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917b4b0,0);
LAB_0445fdb4:
      lVar5 = (*(code *)*puVar3)(plVar12,iVar11,puVar3[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar5 + 0x10) == param_3) {
        if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar12 = *(long **)(*plVar2 + 0x30);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917b498) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0445fe30;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917b498,0);
LAB_0445fe30:
        uVar8 = (*(code *)*puVar3)(plVar12,iVar11,puVar3[1]);
        if ((uVar8 & 1) == 0) {
          if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar12 = *(long **)(*plVar2 + 0x38);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *plVar12;
          uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_0917b498) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0445fea0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917b498,0);
LAB_0445fea0:
          uVar8 = (*(code *)*puVar3)(plVar12,iVar11,puVar3[1]);
          if ((uVar8 & 1) == 0) {
            if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar12 = *(long **)(*plVar2 + 0x28);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar5 = *plVar12;
            uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917b4b0) {
                  puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_0445ff10;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917b4b0,0);
LAB_0445ff10:
            lVar5 = (*(code *)*puVar3)(plVar12,iVar11,puVar3[1]);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar10 = *(long *)(lVar6 + 0x18);
            uVar13 = *(undefined8 *)(lVar5 + 0x28);
            if (lVar10 == 0) {
              lVar10 = thunk_FUN_03f9944c(DAT_09178b98);
              FUN_05315754(lVar10,lVar6,DAT_091e7db8,0);
              *(long *)(lVar6 + 0x18) = lVar10;
              thunk_FUN_03f5d7b8(lVar6 + 0x18,lVar10);
            }
            uVar8 = FUN_04ab2d14(uVar13,lVar10,DAT_091c9298);
            if ((uVar8 & 1) != 0) {
              if (param_4 != (long *)0x0) {
                lVar5 = *param_4;
                uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == DAT_0917a010) {
                      puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 4) * 0x10 + 0x138);
                      goto LAB_0445ffec;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar3 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917a010,4);
LAB_0445ffec:
                uStack_e8 = uStack_b8;
                local_f0 = local_c0;
                local_e0 = local_b0;
                uVar8 = (*(code *)*puVar3)(param_4,&local_f0,puVar3[1]);
                if ((uVar8 & 1) != 0) goto LAB_04460130;
              }
              uVar8 = CookingGraph_CookingLevelSimulation__get_UrgentFirst(param_2);
              if ((uVar8 & 1) == 0) {
                lVar5 = FUN_03f5c394(DAT_0917fe78,1);
                iVar1 = CookingGraph_CookingLevelSimulation__Missing
                                  (param_2,uVar4,uVar7 & 0xffffffff);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                *(double *)(lVar5 + 0x20) = (double)(iVar1 + -1);
              }
              else {
                lVar5 = FUN_03f5c394(DAT_0917fe78,3);
                uVar13 = CookingGraph_CookingLevelSimulation__SelectionPatience(param_2,uVar4);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                *(undefined8 *)(lVar5 + 0x20) = uVar13;
                iVar1 = CookingGraph_CookingLevelSimulation__OrderMissing(param_2,uVar4);
                if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                *(double *)(lVar5 + 0x28) = (double)(iVar1 + -1);
                iVar1 = CookingGraph_CookingLevelSimulation__Missing
                                  (param_2,uVar4,uVar7 & 0xffffffff);
                if (*(uint *)(lVar5 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                *(double *)(lVar5 + 0x30) = (double)(iVar1 + -1);
              }
              if ((local_108 == 0) ||
                 (iVar1 = CookingGraph_CookingLevelSimulation__CompareRank(lVar5,local_108),
                 iVar1 < 0)) {
                uStack_78 = uStack_b8;
                local_80 = local_c0;
                local_70 = local_b0;
                uStack_e8 = 0;
                local_f0 = 0;
                uStack_d8 = 0;
                local_e0 = 0;
                FUN_05c2b3b8(&local_f0,&local_80,DAT_091b6b80);
                uStack_98 = uStack_e8;
                local_a0 = local_f0;
                uStack_88 = uStack_d8;
                uStack_90 = local_e0;
                local_108 = lVar5;
              }
            }
          }
        }
      }
LAB_04460130:
      lVar5 = *plVar2;
      iVar11 = iVar11 + 1;
      if (lVar5 == 0) goto LAB_044601fc;
    } while( true );
  }
  plVar2 = *local_c8;
  if (plVar2 == (long *)0x0) goto LAB_044601bc;
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 == 0) goto LAB_04460194;
  piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
  goto LAB_0446017c;
LAB_04460140:
  if (local_a8 == (long *)0x0) goto LAB_04460148;
  goto LAB_0445fba8;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
LAB_0446017c:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_044601b0;
    }
  }
LAB_04460194:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_044601b0:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_044601bc:
  if (local_d0 == 0) {
    param_1[1] = uStack_98;
    *param_1 = local_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548();
}


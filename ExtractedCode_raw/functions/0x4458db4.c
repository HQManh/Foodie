// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$GridAssemblyTarget
// address: 0x4458db4
// body: available
// range: 0x4458db4-0x44598a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4459740 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4459854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4459858 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445985c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4459860 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4459864 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4459868 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445986c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4459870 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4459874 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4459878 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445987c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0445989c) */

void CookingGraph_CookingLevelSimulation__GridAssemblyTarget
               (undefined8 *param_1,long param_2,int param_3,long *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  long **pplStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0951802b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c66e0);
    FUN_03f5c2a4(&DAT_091c9298);
    FUN_03f5c2a4(&DAT_091c9558);
    FUN_03f5c2a4(&DAT_091ca110);
    FUN_03f5c2a4(&DAT_091cac90);
    FUN_03f5c2a4(&DAT_091793c8);
    FUN_03f5c2a4(&DAT_091793b8);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_091793e8);
    FUN_03f5c2a4(&DAT_0917a010);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a830);
    FUN_03f5c2a4(&DAT_0917af30);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_0917b498);
    FUN_03f5c2a4(&DAT_0917b4b0);
    FUN_03f5c2a4(&DAT_091b2540);
    FUN_03f5c2a4(&DAT_091b6b80);
    FUN_03f5c2a4(&DAT_091b76c8);
    FUN_03f5c2a4(&DAT_091b76d0);
    FUN_03f5c2a4(&DAT_0918f690);
    FUN_03f5c2a4(&DAT_09180970);
    FUN_03f5c2a4(&DAT_091e7698);
    FUN_03f5c2a4(&DAT_091e76a0);
    FUN_03f5c2a4(&DAT_091e7a68);
    FUN_03f5c2a4(&DAT_0918f2b0);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_0951802b = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_d0 = 0;
  local_c8 = (long *)0x0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (*(long *)(param_2 + 0x60) != 0) {
    if (*(int *)(*(long *)(param_2 + 0x60) + 0x18) == 0) goto LAB_04459820;
    CookingGraph_CookingLevelSimulation__RouteProcess(&local_130,param_2,param_3,0,0,0,0);
    uStack_98 = uStack_128;
    local_a0 = local_130;
    uVar4 = local_a0;
    local_a0._0_1_ = (char)local_130;
    local_90 = local_120;
    bVar1 = (char)local_a0 != '\0';
    local_a0 = uVar4;
    if ((bVar1) && (FUN_05c3c1f8(&local_a0,DAT_091b76d0), -1 < extraout_x1)) {
      FUN_05c3c1f8(&local_a0,DAT_091b76d0);
      FUN_05c3c1f8(&local_a0,DAT_091b76d0);
      FUN_05c3c1f8(&local_a0,DAT_091b76d0);
      uVar2 = CookingGraph_CookingLevelSimulation__LaneOf
                        (param_2,extraout_x1_01 & 0xffffffff,extraout_x1_02 >> 0x20);
      uVar4 = CookingGraph_CookingLevelSimulation__LaneOccupants
                        (param_2,extraout_x1_00 & 0xffffffff,uVar2,0,0);
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
      }
      puVar9 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar11 = puVar9[0x56];
      if (lVar11 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
          puVar9 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar12 = *puVar9;
        lVar11 = thunk_FUN_03f9944c(DAT_091793e8);
        FUN_0532a53c(lVar11,uVar12,DAT_091e7698,0);
        lVar8 = *(long *)(DAT_0918f298 + 0xb8);
        *(long *)(lVar8 + 0x2b0) = lVar11;
        thunk_FUN_03f5d7b8(lVar8 + 0x2b0,lVar11);
      }
      uVar5 = FUN_04ab7924(uVar4,lVar11,DAT_091c9558);
      if ((uVar5 & 1) != 0) goto LAB_04459820;
    }
    uVar12 = *(undefined8 *)(param_2 + 0x60);
    uVar4 = thunk_FUN_03f9944c(DAT_091793b8);
    FUN_05324070(uVar4,param_2,DAT_091c66e0,0);
    if (*(int *)(DAT_0918f690 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = FUN_04aeafe8(uVar12,uVar4,**(undefined8 **)(DAT_0918f690 + 0xb8),DAT_091ca110);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar9 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar11 = puVar9[0x57];
    if (lVar11 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar9 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar12 = *puVar9;
      lVar11 = thunk_FUN_03f9944c(DAT_091793c8);
      FUN_053239c8(lVar11,uVar12,DAT_091e76a0,0);
      lVar8 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar8 + 0x2b8) = lVar11;
      thunk_FUN_03f5d7b8(lVar8 + 0x2b8,lVar11);
    }
    plVar6 = (long *)FUN_04b038e4(uVar4,lVar11,DAT_091cac90);
    if (plVar6 != (long *)0x0) {
      lVar11 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917a830) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04459244;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a830,0);
LAB_04459244:
      local_c8 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
      pplStack_e8 = &local_c8;
      local_f0 = 0;
      do {
        plVar6 = local_c8;
        if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *local_c8;
        uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185b10) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_044592d0;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(local_c8,DAT_09185b10,0);
LAB_044592d0:
        uVar5 = (*(code *)*puVar9)(plVar6,puVar9[1]);
        plVar6 = local_c8;
        if ((uVar5 & 1) == 0) {
          iVar13 = 0xe;
LAB_04459798:
          plVar6 = local_c8;
          if (local_c8 == (long *)0x0) goto LAB_04459800;
          lVar11 = *local_c8;
          uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar5 == 0) goto LAB_044597d8;
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_044597c0;
        }
        if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *local_c8;
        uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917af30) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0445933c;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(local_c8,DAT_0917af30,0);
LAB_0445933c:
        lVar11 = (*(code *)*puVar9)(plVar6,puVar9[1]);
        lVar8 = thunk_FUN_03f9944c(DAT_0918f2b0);
        CookingGraph_CookingLevelSimulation_<>c__DisplayClass107_0___ctor(lVar8,0);
        lVar7 = FUN_03f5c394(DAT_09180970,1);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar11 + 0x28);
        thunk_FUN_03f5d7b8();
        uVar5 = CookingGraph_CookingLevelSimulation__PreferDirectServing(param_2,param_3,lVar7,0,0);
        if ((uVar5 & 1) == 0) {
          lVar7 = CookingGraph_CookingLevelSimulation__GridAssemblyState(param_2,lVar11);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar6 = (long *)(lVar8 + 0x10);
          *plVar6 = lVar7;
          thunk_FUN_03f5d7b8(plVar6);
          lVar7 = *plVar6;
          if (lVar7 == 0) {
LAB_04459740:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar13 = 0;
          do {
            plVar14 = *(long **)(lVar7 + 0x28);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *plVar14;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917b310) {
                  puVar9 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_04459440;
                }
                uVar5 = uVar5 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar5 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b310,0);
LAB_04459440:
            iVar3 = (*(code *)*puVar9)(plVar14,puVar9[1]);
            if (iVar3 <= iVar13) break;
            CookingGraph_Execution_CookingEndpoint___ctor
                      (&local_e0,4,*(undefined8 *)(lVar11 + 0x20),0,iVar13,0);
            if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar14 = *(long **)(*plVar6 + 0x28);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *plVar14;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917b4b0) {
                  puVar9 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_044594cc;
                }
                uVar5 = uVar5 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar5 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b4b0,0);
LAB_044594cc:
            lVar7 = (*(code *)*puVar9)(plVar14,iVar13,puVar9[1]);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(int *)(lVar7 + 0x10) == param_3) {
              if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              plVar14 = *(long **)(*plVar6 + 0x30);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar7 = *plVar14;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_0917b498) {
                    puVar9 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_04459548;
                  }
                  uVar5 = uVar5 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar5 != 0);
              }
              puVar9 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b498,0);
LAB_04459548:
              uVar5 = (*(code *)*puVar9)(plVar14,iVar13,puVar9[1]);
              if ((uVar5 & 1) == 0) {
                if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                plVar14 = *(long **)(*plVar6 + 0x38);
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar7 = *plVar14;
                uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar5 != 0) {
                  piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == DAT_0917b498) {
                      puVar9 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_044595b8;
                    }
                    uVar5 = uVar5 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar5 != 0);
                }
                puVar9 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b498,0);
LAB_044595b8:
                uVar5 = (*(code *)*puVar9)(plVar14,iVar13,puVar9[1]);
                if ((uVar5 & 1) == 0) {
                  if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  plVar14 = *(long **)(*plVar6 + 0x28);
                  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar7 = *plVar14;
                  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar5 != 0) {
                    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == DAT_0917b4b0) {
                        puVar9 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                        goto LAB_04459628;
                      }
                      uVar5 = uVar5 - 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b4b0,0);
LAB_04459628:
                  lVar7 = (*(code *)*puVar9)(plVar14,iVar13,puVar9[1]);
                  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar15 = *(long *)(lVar8 + 0x18);
                  uVar4 = *(undefined8 *)(lVar7 + 0x28);
                  if (lVar15 == 0) {
                    lVar15 = thunk_FUN_03f9944c(DAT_09178b98);
                    FUN_05315754(lVar15,lVar8,DAT_091e7a68,0);
                    *(long *)(lVar8 + 0x18) = lVar15;
                    thunk_FUN_03f5d7b8(lVar8 + 0x18,lVar15);
                  }
                  uVar5 = FUN_04ab2d14(uVar4,lVar15,DAT_091c9298);
                  if ((uVar5 & 1) != 0) {
                    if (param_4 != (long *)0x0) {
                      lVar7 = *param_4;
                      uStack_108 = uStack_d8;
                      local_110 = local_e0;
                      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                      local_100 = local_d0;
                      if (uVar5 != 0) {
                        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar10 + -2) == DAT_0917a010) {
                            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                            goto LAB_0445970c;
                          }
                          uVar5 = uVar5 - 1;
                          piVar10 = piVar10 + 4;
                        } while (uVar5 != 0);
                      }
                      puVar9 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917a010,4);
LAB_0445970c:
                      uStack_128 = uStack_108;
                      local_130 = local_110;
                      local_120 = local_100;
                      uVar5 = (*(code *)*puVar9)(param_4,&local_130,puVar9[1]);
                      if ((uVar5 & 1) != 0) goto LAB_04459734;
                    }
                    uStack_78 = uStack_d8;
                    local_80 = local_e0;
                    local_70 = local_d0;
                    uStack_128 = 0;
                    local_130 = 0;
                    uStack_118 = 0;
                    local_120 = 0;
                    FUN_05c2b3b8(&local_130,&local_80,DAT_091b6b80);
                    iVar13 = 0xd;
                    uStack_b8 = uStack_128;
                    local_c0 = local_130;
                    uStack_a8 = uStack_118;
                    uStack_b0 = local_120;
                    goto LAB_04459798;
                  }
                }
              }
            }
LAB_04459734:
            lVar7 = *plVar6;
            iVar13 = iVar13 + 1;
            if (lVar7 == 0) goto LAB_04459740;
          } while( true );
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar10 = piVar10 + 4;
    if (uVar5 == 0) break;
LAB_044597c0:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_044597f4;
    }
  }
LAB_044597d8:
  puVar9 = (undefined8 *)FUN_03f95da8(local_c8,DAT_09185a58,0);
LAB_044597f4:
  (*(code *)*puVar9)(plVar6,puVar9[1]);
LAB_04459800:
  if (iVar13 != 0xe) {
    if (iVar13 == 0xd) {
      param_1[1] = uStack_b8;
      *param_1 = local_c0;
      param_1[3] = uStack_a8;
      param_1[2] = uStack_b0;
      return;
    }
    if (iVar13 != 0) {
      return;
    }
  }
LAB_04459820:
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


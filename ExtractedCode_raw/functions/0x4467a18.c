// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ProcessPriority
// address: 0x4467a18
// body: available
// range: 0x4467a18-0x4468603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4467dec to 0x446796c CookingGraph.CookingLevelSimulation$$get_NoProcessPriority (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44683f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44685a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44685a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44685ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44685b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44685b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44685bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44685c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44685c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44685c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44685cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an indep
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0446847c) */

void CookingGraph_CookingLevelSimulation__ProcessPriority(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long **pplVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  long *plVar19;
  int iVar20;
  long *plVar21;
  long *plVar22;
  double dVar23;
  double dVar24;
  undefined8 local_a8;
  long local_a0;
  long local_90;
  long **local_88;
  long *local_78;
  
  if ((DAT_09518053 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fe78);
    FUN_03f5c2a4(&DAT_091c9238);
    FUN_03f5c2a4(&DAT_091c93c8);
    FUN_03f5c2a4(&DAT_091c9498);
    FUN_03f5c2a4(&DAT_091c9e10);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091cb610);
    FUN_03f5c2a4(&DAT_091cb4e8);
    FUN_03f5c2a4(&DAT_09178bd0);
    FUN_03f5c2a4(&DAT_09178030);
    FUN_03f5c2a4(&DAT_09179390);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09178468);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a828);
    FUN_03f5c2a4(&DAT_0917af28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_091b76c0);
    FUN_03f5c2a4(&DAT_091b76c8);
    FUN_03f5c2a4(&DAT_091e7820);
    FUN_03f5c2a4(&DAT_091e7828);
    FUN_03f5c2a4(&DAT_091e7c40);
    FUN_03f5c2a4(&DAT_0918f418);
    FUN_03f5c2a4(&DAT_091e7c48);
    FUN_03f5c2a4(&DAT_091e7c50);
    FUN_03f5c2a4(&DAT_091e7c58);
    FUN_03f5c2a4(&DAT_091e7c60);
    FUN_03f5c2a4(&DAT_091e7c68);
    FUN_03f5c2a4(&DAT_0918f420);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518053 = 1;
  }
  local_78 = (long *)0x0;
  lVar6 = thunk_FUN_03f9944c(DAT_0918f418);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass161_0___ctor(lVar6,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar6 + 0x10),param_1);
    plVar19 = (long *)(lVar6 + 0x18);
    *plVar19 = param_3;
    thunk_FUN_03f5d7b8(plVar19,param_3);
    if (param_2 < 0) {
LAB_04467dc8:
      CookingGraph_CookingLevelSimulation__get_NoProcessPriority(param_1);
      return;
    }
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar12 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar12 != 0)) {
      if (*(int *)(lVar12 + 0x18) <= param_2) goto LAB_04467dc8;
      pplVar11 = (long **)*plVar19;
      if ((long **)*plVar19 == (long **)0x0) {
        CookingGraph_CookingLevelSimulation__RouteProcess(&local_90,param_1,param_2,0,0,0,0);
        pplVar11 = (long **)0x0;
        if ((char)local_90 != '\0') {
          pplVar11 = local_88;
        }
      }
      *plVar19 = (long)pplVar11;
      thunk_FUN_03f5d7b8(plVar19);
      if (*plVar19 == 0) {
        CookingGraph_CookingLevelSimulation__get_NoProcessPriority(param_1);
        return;
      }
      uVar7 = CookingGraph_CookingLevelSimulation__AvailableForSelection(param_1);
      *(undefined8 *)(lVar6 + 0x20) = uVar7;
      thunk_FUN_03f5d7b8();
      local_a0 = FUN_03f5c394(DAT_0917fe78,2);
      if (local_a0 != 0) {
        if ((*(int *)(local_a0 + 0x18) == 0) ||
           (*(undefined8 *)(local_a0 + 0x20) = 0x7ff0000000000000, *(int *)(local_a0 + 0x18) == 1))
        goto LAB_044685ec;
        *(undefined8 *)(local_a0 + 0x28) = 0x7ff0000000000000;
        uVar7 = *(undefined8 *)(param_1 + 0x98);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar13 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar12 = puVar13[0x8e];
        if (lVar12 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar13 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar18 = *puVar13;
          lVar12 = thunk_FUN_03f9944c(DAT_09179390);
          FUN_05322d94(lVar12,uVar18,DAT_091e7820,0);
          lVar14 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar14 + 0x470) = lVar12;
          thunk_FUN_03f5d7b8(lVar14 + 0x470,lVar12);
        }
        plVar19 = (long *)FUN_04b0cafc(uVar7,lVar12,DAT_091cb610);
        if (plVar19 != (long *)0x0) {
          lVar12 = *plVar19;
          uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == DAT_0917a828) {
                puVar13 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_04467e08;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_03f95da8(plVar19,DAT_0917a828,0);
LAB_04467e08:
          local_78 = (long *)(*(code *)*puVar13)(plVar19,puVar13[1]);
          local_88 = &local_78;
          local_90 = 0;
          if (local_78 == (long *)0x0) {
            uVar16 = 0x7ff0000000000000;
          }
          else {
            local_a8 = 0;
            dVar24 = INFINITY;
            do {
              plVar19 = local_78;
              lVar12 = *local_78;
              uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == DAT_09185b10) {
                    puVar13 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_04467e94;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar13 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185b10,0);
LAB_04467e94:
              uVar16 = (*(code *)*puVar13)(plVar19,puVar13[1]);
              plVar19 = local_78;
              if ((uVar16 & 1) == 0) {
                plVar19 = *local_88;
                if (plVar19 == (long *)0x0) goto LAB_0446846c;
                lVar6 = *plVar19;
                uVar16 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar16 == 0) goto LAB_04468444;
                piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                goto LAB_0446842c;
              }
              if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar12 = *local_78;
              uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == DAT_0917af28) {
                    puVar13 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_04467f00;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar13 = (undefined8 *)FUN_03f95da8(local_78,DAT_0917af28,0);
LAB_04467f00:
              lVar12 = (*(code *)*puVar13)(plVar19,puVar13[1]);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar14 = *(long *)(lVar12 + 0x50);
              if (lVar14 == 0) {
LAB_044685a4:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              iVar20 = 0;
              while (uVar16 = (ulong)*(uint *)(lVar14 + 0x18),
                    iVar20 < (int)*(uint *)(lVar14 + 0x18)) {
                lVar14 = thunk_FUN_03f9944c(DAT_0918f420);
                CookingGraph_CookingLevelSimulation_<>c__DisplayClass161_1___ctor(lVar14,0);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                plVar19 = (long *)(lVar14 + 0x18);
                *plVar19 = lVar6;
                thunk_FUN_03f5d7b8(plVar19,lVar6);
                lVar8 = CookingGraph_CookingLevelSimulation__Assembly(param_1,lVar12,iVar20);
                plVar22 = (long *)(lVar14 + 0x10);
                *plVar22 = lVar8;
                thunk_FUN_03f5d7b8(plVar22);
                if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                plVar21 = *(long **)(*plVar22 + 0x28);
                if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar8 = *plVar21;
                uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar16 != 0) {
                  piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == DAT_0917b310) {
                      puVar13 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_04467fe8;
                    }
                    uVar16 = uVar16 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar16 != 0);
                }
                puVar13 = (undefined8 *)FUN_03f95da8(plVar21,DAT_0917b310,0);
LAB_04467fe8:
                uVar2 = (*(code *)*puVar13)(plVar21,puVar13[1]);
                uVar7 = System_Linq_Enumerable__Range(0,uVar2,0);
                uVar18 = thunk_FUN_03f9944c(DAT_09178b98);
                FUN_05315754(uVar18,lVar14,DAT_091e7c48,0);
                uVar7 = FUN_04b0c1f0(uVar7,uVar18,DAT_091cb4e8);
                lVar8 = FUN_04b0462c(uVar7,DAT_091cae30);
                uVar7 = thunk_FUN_03f9944c(DAT_09178b98);
                FUN_05315754(uVar7,lVar14,DAT_091e7c50,0);
                uVar7 = FUN_04b0c1f0(lVar8,uVar7,DAT_091cb4e8);
                lVar9 = FUN_04b0462c(uVar7,DAT_091cae30);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar1 = local_a0;
                if (*(long *)(lVar9 + 0x18) != 0) {
                  if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar16 = CookingGraph_CookingLevelSimulation__RecipeReadyForSelection
                                     (param_1,*(undefined8 *)(*plVar19 + 0x18),param_2);
                  if ((uVar16 & 1) == 0) {
LAB_044681c4:
                    uVar5 = 0;
                  }
                  else {
                    if (*(long *)(param_1 + 0x180) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar10 = *(long *)(*(long *)(param_1 + 0x180) + 0x40);
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar16 = CookingGraph_Execution_CookingExecutionConfig__get_WholeDish(lVar10,0);
                    if ((uVar16 & 1) == 0) {
                      uVar7 = thunk_FUN_03f9944c(DAT_09178b98);
                      FUN_05315754(uVar7,lVar14,DAT_091e7c60,0);
                      uVar5 = FUN_04ab6928(lVar9,uVar7,DAT_091c9498);
                    }
                    else {
                      if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      uVar7 = *(undefined8 *)(*plVar22 + 0x38);
                      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      puVar13 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                      lVar10 = puVar13[0x8f];
                      if (lVar10 == 0) {
                        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                          FUN_03f5c424();
                          puVar13 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                        }
                        uVar18 = *puVar13;
                        lVar10 = thunk_FUN_03f9944c(DAT_09178468);
                        FUN_05311eac(lVar10,uVar18,DAT_091e7828,0);
                        lVar15 = *(long *)(DAT_0918f298 + 0xb8);
                        *(long *)(lVar15 + 0x478) = lVar10;
                        thunk_FUN_03f5d7b8(lVar15 + 0x478,lVar10);
                      }
                      uVar16 = FUN_04ab5cb8(uVar7,lVar10,DAT_091c93c8);
                      if ((uVar16 & 1) != 0) goto LAB_044681c4;
                      uVar7 = thunk_FUN_03f9944c(DAT_09178bd0);
                      FUN_05315cf4(uVar7,lVar14,DAT_091e7c58,0);
                      uVar7 = FUN_04ae6cd0(lVar8,uVar7,DAT_091c9e10);
                      lVar10 = *plVar19;
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      plVar19 = (long *)(lVar10 + 0x28);
                      lVar15 = *plVar19;
                      if (lVar15 == 0) {
                        lVar15 = thunk_FUN_03f9944c(DAT_09178030);
                        FUN_05322d94(lVar15,lVar10,DAT_091e7c40,0);
                        *plVar19 = lVar15;
                        thunk_FUN_03f5d7b8(plVar19,lVar15);
                      }
                      uVar5 = FUN_04ab300c(uVar7,lVar15,DAT_091c9238);
                    }
                  }
                  uVar7 = thunk_FUN_03f9944c(DAT_09178b98);
                  FUN_05315754(uVar7,lVar14,DAT_091e7c68,0);
                  uVar3 = FUN_04ab6928(lVar9,uVar7,DAT_091c9498);
                  uVar16 = CookingGraph_CookingLevelSimulation__get_UrgentFirst(param_1);
                  if ((uVar16 & 1) == 0) {
                    dVar23 = *(double *)(lVar12 + 0x20);
                  }
                  else {
                    dVar23 = (double)CookingGraph_CookingLevelSimulation__SelectionPatience
                                               (param_1,lVar12);
                  }
                  lVar14 = FUN_03f5c394(DAT_0917fe78,2);
                  iVar4 = CookingGraph_CookingLevelSimulation__OrderMissing(param_1,lVar12);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  *(double *)(lVar14 + 0x20) = (double)iVar4;
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (*(int *)(lVar14 + 0x18) == 1) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  *(double *)(lVar14 + 0x28) = (double)*(int *)(lVar8 + 0x18);
                  if (dVar24 <= dVar23) {
                    if (dVar23 == dVar24) {
                      local_a8 = CONCAT44(local_a8._4_4_ | uVar3,(uint)local_a8 | uVar5);
                      iVar4 = CookingGraph_CookingLevelSimulation__CompareRank(lVar14,local_a0);
                      lVar1 = lVar14;
                      if (-1 < iVar4) {
                        lVar1 = local_a0;
                      }
                    }
                  }
                  else {
                    local_a8 = CONCAT44(uVar3,uVar5);
                    dVar24 = dVar23;
                    lVar1 = lVar14;
                  }
                }
                local_a0 = lVar1;
                lVar14 = *(long *)(lVar12 + 0x50);
                iVar20 = iVar20 + 1;
                if (lVar14 == 0) goto LAB_044685a4;
              }
            } while (local_78 != (long *)0x0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar16);
        }
      }
    }
  }
  goto LAB_044685e8;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0446842c:
    if (*(long *)(piVar17 + -2) == DAT_09185a58) {
      puVar13 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_04468460;
    }
  }
LAB_04468444:
  puVar13 = (undefined8 *)FUN_03f95da8(plVar19,DAT_09185a58,0);
LAB_04468460:
  (*(code *)*puVar13)(plVar19,puVar13[1]);
LAB_0446846c:
  if (local_90 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548();
  }
  uVar16 = CookingGraph_CookingLevelSimulation__get_UrgentFirst(param_1);
  if ((uVar16 & 1) == 0) {
    lVar6 = FUN_03f5c394(DAT_0917fe78,3);
    if (lVar6 != 0) {
      uVar5 = *(uint *)(lVar6 + 0x18);
      if ((uVar5 != 0) && (*(double *)(lVar6 + 0x20) = dVar24, (uVar5 & 0xfffffffe) != 0)) {
        uVar7 = 0;
        if ((local_a8 & 1) == 0) {
          uVar7 = 0x3ff0000000000000;
        }
        *(undefined8 *)(lVar6 + 0x28) = uVar7;
        if (2 < uVar5) {
          uVar7 = 0;
          if ((local_a8 & 0x100000000) == 0) {
            uVar7 = 0x3ff0000000000000;
          }
          *(undefined8 *)(lVar6 + 0x30) = uVar7;
          return;
        }
      }
      goto LAB_044685ec;
    }
  }
  else {
    lVar6 = FUN_03f5c394(DAT_0917fe78,5);
    if (lVar6 != 0) {
      uVar5 = (uint)*(ulong *)(lVar6 + 0x18);
      if (uVar5 != 0) {
        *(double *)(lVar6 + 0x20) = dVar24;
        if (local_a0 == 0) goto LAB_044685e8;
        iVar20 = *(int *)(local_a0 + 0x18);
        if ((((iVar20 != 0) && (uVar5 != 1)) &&
            (*(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(local_a0 + 0x20), iVar20 != 1)) &&
           ((2 < uVar5 &&
            (*(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(local_a0 + 0x28),
            (*(ulong *)(lVar6 + 0x18) & 0xfffffffc) != 0)))) {
          uVar7 = 0;
          if ((local_a8 & 1) == 0) {
            uVar7 = 0x3ff0000000000000;
          }
          *(undefined8 *)(lVar6 + 0x38) = uVar7;
          if (4 < uVar5) {
            uVar7 = 0;
            if ((local_a8 & 0x100000000) == 0) {
              uVar7 = 0x3ff0000000000000;
            }
            *(undefined8 *)(lVar6 + 0x40) = uVar7;
            return;
          }
        }
      }
LAB_044685ec:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_044685e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


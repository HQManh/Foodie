// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ReplanWaitingServes
// address: 0x4442f50
// body: available
// range: 0x4442f50-0x44437ef inclusive
// range: 0x44437f4-0x44437f7 inclusive
// range: 0x44437fc-0x44437ff inclusive
// range: 0x4443804-0x4443807 inclusive
// range: 0x444380c-0x444380f inclusive
// range: 0x4443814-0x4443817 inclusive
// range: 0x444381c-0x444381f inclusive
// range: 0x4443824-0x4443827 inclusive
// range: 0x444382c-0x444382f inclusive
// range: 0x4443834-0x4443837 inclusive
// range: 0x444383c-0x444383f inclusive
// range: 0x4443844-0x4443847 inclusive
// range: 0x444384c-0x444384f inclusive
// range: 0x4443854-0x4443857 inclusive
// range: 0x444385c-0x444385f inclusive
// range: 0x4443864-0x4443867 inclusive
// range: 0x444386c-0x444386f inclusive
// range: 0x4443874-0x4443877 inclusive
// range: 0x4443944-0x4443973 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44437ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44437f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44437fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4443804 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444380c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4443814 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444381c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4443824 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444382c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4443834 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444383c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4443844 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0444376c) */
/* WARNING: Removing unreachable block (ram,0x0444396c) */

void CookingGraph_CookingLevelSimulation__ReplanWaitingServes(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  int *piVar22;
  long *plVar23;
  long lVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long **pplStack_c8;
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
  
  if ((DAT_09517ff7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c240);
    FUN_03f5c2a4(&DAT_0919c258);
    FUN_03f5c2a4(&DAT_09175f90);
    FUN_03f5c2a4(&DAT_091c98c8);
    FUN_03f5c2a4(&DAT_091c9a68);
    FUN_03f5c2a4(&DAT_091cadb8);
    FUN_03f5c2a4(&DAT_091cb460);
    FUN_03f5c2a4(&DAT_091cb4e8);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09178730);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a300);
    FUN_03f5c2a4(&DAT_0917a988);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_091b6b80);
    FUN_03f5c2a4(&DAT_091b6b88);
    FUN_03f5c2a4(&DAT_091b6b90);
    FUN_03f5c2a4(&DAT_091e7998);
    FUN_03f5c2a4(&DAT_0918f4b0);
    FUN_03f5c2a4(&DAT_091e7d38);
    FUN_03f5c2a4(&DAT_0918f4b8);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091bedd0);
    DAT_09517ff7 = 1;
  }
  local_a8 = (long *)0x0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uVar6 = CookingGraph_CookingLevelSimulation__get_UrgentFirst(param_1);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x178) != 0) {
    uVar7 = CookingGraph_Execution_CookingExecution__get_Transfers(*(long *)(param_1 + 0x178),0);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar19 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar24 = puVar19[10];
    if (lVar24 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar19 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar25 = *puVar19;
      lVar24 = thunk_FUN_03f9944c(DAT_09178730);
      FUN_05322d94(lVar24,uVar25,DAT_091e7998,0);
      plVar8 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x50);
      *plVar8 = lVar24;
      thunk_FUN_03f5d7b8(plVar8,lVar24);
    }
    uVar7 = FUN_04b0cafc(uVar7,lVar24,DAT_091cb460);
    lVar24 = FUN_04b049e4(uVar7,DAT_091cadb8);
    if (lVar24 != 0) {
      if (*(int *)(lVar24 + 0x18) < 1) {
        return;
      }
      uVar6 = 0;
LAB_0444319c:
      lVar9 = thunk_FUN_03f9944c(DAT_0918f4b0);
      CookingGraph_CookingLevelSimulation_<>c__DisplayClass26_0___ctor(lVar9,0);
      if (*(uint *)(lVar24 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 0x10);
        *plVar8 = *(long *)(lVar24 + uVar6 * 8 + 0x20);
        thunk_FUN_03f5d7b8(plVar8);
        lVar15 = *plVar8;
        if (lVar15 != 0) {
          uStack_b8 = *(undefined8 *)(lVar15 + 0x60);
          local_c0 = *(undefined8 *)(lVar15 + 0x58);
          local_b0 = *(undefined8 *)(lVar15 + 0x68);
          lVar15 = CookingGraph_CookingLevelSimulation__CustomerOf
                             (*(undefined8 *)(param_1 + 0x98),&local_c0);
          if ((lVar15 == 0) || (*(char *)(lVar15 + 0x18) != '\0')) goto LAB_04443214;
          uVar7 = CookingGraph_CookingLevelSimulation__MadeSupply(param_1);
          uVar25 = CookingGraph_CookingLevelSimulation__ProjectedMissing(param_1,uVar7,0);
          lVar10 = CookingGraph_CookingLevelSimulation__ProgressRank(param_1,uVar25);
          uStack_98 = 0;
          local_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          plVar11 = (long *)CookingGraph_CookingLevelSimulation__ServingCandidates(param_1);
          if (plVar11 != (long *)0x0) {
            lVar16 = *plVar11;
            uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar20 != 0) {
              piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == DAT_0917a300) {
                  puVar19 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
                  goto LAB_044432c0;
                }
                uVar20 = uVar20 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar20 != 0);
            }
            puVar19 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a300,0);
LAB_044432c0:
            local_a8 = (long *)(*(code *)*puVar19)(plVar11,puVar19[1]);
            lVar16 = 0;
            pplStack_c8 = &local_a8;
            local_d0 = 0;
            do {
              lVar1 = lVar10;
              if (lVar16 != 0) {
                lVar1 = lVar16;
              }
LAB_044432ec:
              do {
                do {
                  plVar11 = local_a8;
                  if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar16 = *local_a8;
                  uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar20 != 0) {
                    piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == DAT_09185b10) {
                        puVar19 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
                        goto LAB_04443348;
                      }
                      uVar20 = uVar20 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar20 != 0);
                  }
                  puVar19 = (undefined8 *)FUN_03f95da8(local_a8,DAT_09185b10,0);
LAB_04443348:
                  uVar20 = (*(code *)*puVar19)(plVar11,puVar19[1]);
                  plVar11 = local_a8;
                  if ((uVar20 & 1) == 0) {
                    if (local_a8 == (long *)0x0) goto LAB_0444375c;
                    lVar9 = *local_a8;
                    uVar20 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar20 == 0) goto LAB_04443734;
                    piVar22 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    goto LAB_0444371c;
                  }
                  if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar16 = *local_a8;
                  uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar20 != 0) {
                    piVar22 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == DAT_0917a988) {
                        puVar19 = (undefined8 *)(lVar16 + (long)*piVar22 * 0x10 + 0x138);
                        goto LAB_044433b4;
                      }
                      uVar20 = uVar20 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar20 != 0);
                  }
                  puVar19 = (undefined8 *)FUN_03f95da8(local_a8,DAT_0917a988,0);
LAB_044433b4:
                  auVar26 = (*(code *)*puVar19)(plVar11,puVar19[1]);
                  uVar20 = auVar26._8_8_;
                  lVar12 = auVar26._0_8_;
                  lVar16 = thunk_FUN_03f9944c(DAT_0918f4b8);
                  CookingGraph_CookingLevelSimulation_<>c__DisplayClass26_1___ctor(lVar16,0);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  plVar11 = (long *)(lVar16 + 0x18);
                  *plVar11 = lVar9;
                  thunk_FUN_03f5d7b8(plVar11,lVar9);
                  if (lVar15 == lVar12) {
                    if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar17 = *(long *)(*plVar11 + 0x10);
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    if (*(int *)(lVar17 + 0x68) == auVar26._8_4_) goto LAB_044432ec;
                  }
                  lVar17 = CookingGraph_CookingLevelSimulation__Assembly
                                     (param_1,lVar12,uVar20 & 0xffffffff);
                  plVar23 = (long *)(lVar16 + 0x10);
                  *plVar23 = lVar17;
                  thunk_FUN_03f5d7b8(plVar23);
                  if (*plVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  plVar23 = *(long **)(*plVar23 + 0x28);
                  if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar17 = *plVar23;
                  uVar21 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar21 != 0) {
                    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == DAT_0917b310) {
                        puVar19 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
                        goto LAB_044434a8;
                      }
                      uVar21 = uVar21 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar21 != 0);
                  }
                  puVar19 = (undefined8 *)FUN_03f95da8(plVar23,DAT_0917b310,0);
LAB_044434a8:
                  uVar3 = (*(code *)*puVar19)(plVar23,puVar19[1]);
                  uVar25 = System_Linq_Enumerable__Range(0,uVar3,0);
                  uVar13 = thunk_FUN_03f9944c(DAT_09178b98);
                  FUN_05315754(uVar13,lVar16,DAT_091e7d38,0);
                  uVar25 = FUN_04b0c1f0(uVar25,uVar13,DAT_091cb4e8);
                  uVar25 = FUN_04adcc84(uVar25,0xffffffff,DAT_091c98c8);
                  uVar4 = FUN_04ae071c(uVar25,DAT_091c9a68);
                } while ((int)uVar4 < 0);
                if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar16 = *(long *)(*plVar11 + 0x10);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar16 = CookingGraph_CookingLevelSimulation__HeldSlots
                                   (param_1,lVar15,*(undefined4 *)(lVar16 + 0x68));
                if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar17 = *(long *)(*plVar11 + 0x10);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar2 = *(uint *)(lVar17 + 0x6c);
                if (*(uint *)(lVar16 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                *(undefined1 *)(lVar16 + (int)uVar2 + 0x20) = 0;
                lVar17 = CookingGraph_CookingLevelSimulation__HeldSlots
                                   (param_1,lVar12,uVar20 & 0xffffffff);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (*(uint *)(lVar17 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                *(undefined1 *)(lVar17 + (ulong)uVar4 + 0x20) = 1;
                lVar14 = thunk_FUN_03f9944c(DAT_09175f90);
                FUN_06e59e5c(lVar14,DAT_0919c240);
                if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar18 = *(long *)(*plVar11 + 0x10);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                local_100 = 0;
                uStack_f8 = 0;
                FUN_066ce094(&local_100,lVar15,*(undefined4 *)(lVar18 + 0x68),DAT_091bedd0);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                FUN_06e5ac08(lVar14,local_100,uStack_f8,lVar16,DAT_0919c258);
                local_e0 = 0;
                uStack_d8 = 0;
                FUN_066ce094(&local_e0,lVar12,uVar20 & 0xffffffff,DAT_091bedd0);
                FUN_06e5ac08(lVar14,local_e0,uStack_d8,lVar17,DAT_0919c258);
                uVar25 = CookingGraph_CookingLevelSimulation__ProjectedMissing(param_1,uVar7,lVar14)
                ;
                lVar16 = CookingGraph_CookingLevelSimulation__ProgressRank(param_1,uVar25);
                iVar5 = CookingGraph_CookingLevelSimulation__CompareRank(lVar16,lVar1);
              } while (-1 < iVar5);
              CookingGraph_CookingLevelSimulation__DishAddress
                        (&local_100,lVar12,uVar20 & 0xffffffff,uVar4);
              uStack_78 = uStack_f8;
              local_80 = local_100;
              local_70 = local_f0;
              uStack_f8 = 0;
              local_100 = 0;
              uStack_e8 = 0;
              local_f0 = 0;
              FUN_05c2b3b8(&local_100,&local_80,DAT_091b6b80);
              uStack_98 = uStack_f8;
              local_a0 = local_100;
              uStack_88 = uStack_e8;
              uStack_90 = local_f0;
            } while( true );
          }
        }
      }
    }
  }
LAB_04443964:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar22 = piVar22 + 4;
    if (uVar20 == 0) break;
LAB_0444371c:
    if (*(long *)(piVar22 + -2) == DAT_09185a58) {
      puVar19 = (undefined8 *)(lVar9 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_04443750;
    }
  }
LAB_04443734:
  puVar19 = (undefined8 *)FUN_03f95da8(local_a8,DAT_09185a58,0);
LAB_04443750:
  (*(code *)*puVar19)(plVar11,puVar19[1]);
LAB_0444375c:
  if ((char)local_a0 != '\0') {
    if (*plVar8 == 0) goto LAB_04443964;
    uVar7 = *(undefined8 *)(*plVar8 + 0x20);
    lVar9 = *(long *)(param_1 + 0x178);
    FUN_05c2b3f4(&local_100,&local_a0,DAT_091b6b90);
    if (lVar9 == 0) goto LAB_04443964;
    uStack_118 = uStack_f8;
    local_120 = local_100;
    local_110 = local_f0;
    uVar20 = CookingGraph_Execution_CookingExecution__RetargetWaiting(lVar9,uVar7,&local_120,0);
    if ((uVar20 & 1) != 0) {
      *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
      *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
    }
  }
LAB_04443214:
  uVar6 = uVar6 + 1;
  if ((long)*(int *)(lVar24 + 0x18) <= (long)uVar6) {
    return;
  }
  goto LAB_0444319c;
}


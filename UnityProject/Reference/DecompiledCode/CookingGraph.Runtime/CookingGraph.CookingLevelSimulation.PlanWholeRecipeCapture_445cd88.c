// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$PlanWholeRecipeCapture
// address: 0x445cd88
// body: available
// range: 0x445cd88-0x445e28b inclusive
// range: 0x445e450-0x445e453 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x445dc5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445df44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445df5c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445df74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445df8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445dfa4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445dfbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445dfd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445dfec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445e004 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445e01c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445e034 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0445e1e4) */
/* WARNING: Removing unreachable block (ram,0x0445e1f4) */

undefined4
CookingGraph_CookingLevelSimulation__PlanWholeRecipeCapture
          (long param_1,undefined8 *param_2,long *param_3,long param_4)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  long extraout_x1_03;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long local_2a0;
  long lStack_298;
  long local_290;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_260;
  undefined8 *puStack_258;
  long local_250;
  long lStack_248;
  long local_240;
  long lStack_238;
  long local_230;
  long lStack_228;
  undefined8 local_220;
  long local_200;
  long lStack_1f8;
  long local_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 local_1d0;
  long local_1c0;
  long lStack_1b8;
  long local_1b0;
  long local_1a0;
  long **local_198;
  long local_190;
  long lStack_188;
  long local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  ulong local_120;
  undefined8 uStack_118;
  ulong local_110;
  long local_100;
  long lStack_f8;
  long local_f0;
  long *local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  long local_80;
  long lStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((DAT_0951802f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0578);
    FUN_03f5c2a4(&DAT_091c6868);
    FUN_03f5c2a4(&DAT_0919c7f8);
    FUN_03f5c2a4(&DAT_0919c190);
    FUN_03f5c2a4(&DAT_091c9558);
    FUN_03f5c2a4(&DAT_091c93a0);
    FUN_03f5c2a4(&DAT_091c9bf8);
    FUN_03f5c2a4(&DAT_091ca108);
    FUN_03f5c2a4(&DAT_091ca380);
    FUN_03f5c2a4(&DAT_091cb0b0);
    FUN_03f5c2a4(&DAT_091cb608);
    FUN_03f5c2a4(&DAT_091cb398);
    FUN_03f5c2a4(&DAT_091a2080);
    FUN_03f5c2a4(&DAT_091a2088);
    FUN_03f5c2a4(&DAT_091a2090);
    FUN_03f5c2a4(&DAT_09179360);
    FUN_03f5c2a4(&DAT_09178208);
    FUN_03f5c2a4(&DAT_09178728);
    FUN_03f5c2a4(&DAT_09179358);
    FUN_03f5c2a4(&DAT_09178330);
    FUN_03f5c2a4(&DAT_091793e8);
    FUN_03f5c2a4(&DAT_091a8300);
    FUN_03f5c2a4(&DAT_09179e20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a820);
    FUN_03f5c2a4(&DAT_0917af20);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ac090);
    FUN_03f5c2a4(&DAT_091aabe0);
    FUN_03f5c2a4(&DAT_091aabe8);
    FUN_03f5c2a4(&DAT_091aa9b8);
    FUN_03f5c2a4(&DAT_091aa9c0);
    FUN_03f5c2a4(&DAT_091aabd8);
    FUN_03f5c2a4(&DAT_091b2560);
    FUN_03f5c2a4(&DAT_091aabf0);
    FUN_03f5c2a4(&DAT_0917bb80);
    FUN_03f5c2a4(&DAT_091b76c8);
    FUN_03f5c2a4(&DAT_091b76d0);
    FUN_03f5c2a4(&DAT_0918f690);
    FUN_03f5c2a4(&DAT_09180970);
    FUN_03f5c2a4(&DAT_091e77d8);
    FUN_03f5c2a4(&DAT_091e77e0);
    FUN_03f5c2a4(&DAT_091e77e8);
    FUN_03f5c2a4(&DAT_091e7ae0);
    FUN_03f5c2a4(&DAT_091e7ae8);
    FUN_03f5c2a4(&DAT_0918f2f8);
    FUN_03f5c2a4(&DAT_091e7af0);
    FUN_03f5c2a4(&DAT_0918f300);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091bec10);
    FUN_03f5c2a4(&DAT_091bec98);
    FUN_03f5c2a4(&DAT_091bee48);
    DAT_0951802f = 1;
  }
  local_e0 = 0;
  lStack_d8 = 0;
  local_d0 = 0;
  local_f0 = 0;
  local_e8 = (long *)0x0;
  local_100 = 0;
  lStack_f8 = 0;
  lStack_78 = 0;
  local_80 = 0;
  local_110 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  local_190 = 0;
  lStack_188 = 0;
  local_180 = 0;
  lVar7 = thunk_FUN_03f9944c(DAT_0918f2f8);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass111_0___ctor(lVar7,0);
  if (lVar7 != 0) {
    uVar18 = param_2[1];
    uVar19 = *param_2;
    *(undefined8 *)(lVar7 + 0x20) = param_2[2];
    *(undefined8 *)(lVar7 + 0x18) = uVar18;
    *(undefined8 *)(lVar7 + 0x10) = uVar19;
    if (param_4 != 0) {
      uVar19 = *(undefined8 *)(param_4 + 0x18);
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar14 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar20 = puVar14[0x60];
      if (lVar20 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar14 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar18 = *puVar14;
        lVar20 = thunk_FUN_03f9944c(DAT_09178728);
        FUN_05313174(lVar20,uVar18,DAT_091e77d8,0);
        lVar15 = *(long *)(DAT_0918f298 + 0xb8);
        *(long *)(lVar15 + 0x300) = lVar20;
        thunk_FUN_03f5d7b8(lVar15 + 0x300,lVar20);
      }
      uVar19 = FUN_04af0ac0(uVar19,lVar20,DAT_091ca380);
      uVar18 = thunk_FUN_03f9944c(DAT_09179e20);
      FUN_053e1208(uVar18,uVar19,DAT_091a8300);
      *(undefined8 *)(lVar7 + 0x28) = uVar18;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x28),uVar18);
      CookingGraph_CookingLevelSimulation__RouteProcess
                (&local_250,param_1,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)(param_4 + 0x30),0,
                 0,0);
      lStack_d8 = lStack_248;
      local_e0 = local_250;
      lVar20 = local_e0;
      local_e0._0_1_ = (char)local_250;
      local_d0 = local_240;
      bVar1 = (char)local_e0 != '\0';
      local_e0 = lVar20;
      if ((bVar1) && (FUN_05c3c1f8(&local_e0,DAT_091b76d0), -1 < extraout_x1)) {
        FUN_05c3c1f8(&local_e0,DAT_091b76d0);
        FUN_05c3c1f8(&local_e0,DAT_091b76d0);
        FUN_05c3c1f8(&local_e0,DAT_091b76d0);
        uVar4 = CookingGraph_CookingLevelSimulation__LaneOf
                          (param_1,extraout_x1_01 & 0xffffffff,extraout_x1_02 >> 0x20);
        uVar19 = CookingGraph_CookingLevelSimulation__LaneOccupants
                           (param_1,extraout_x1_00 & 0xffffffff,uVar4,
                            *(undefined8 *)(param_4 + 0x30),0);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
        }
        puVar14 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar20 = puVar14[0x61];
        if (lVar20 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
            puVar14 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar18 = *puVar14;
          lVar20 = thunk_FUN_03f9944c(DAT_091793e8);
          FUN_0532a53c(lVar20,uVar18,DAT_091e77e0,0);
          lVar15 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar15 + 0x308) = lVar20;
          thunk_FUN_03f5d7b8(lVar15 + 0x308,lVar20);
        }
        uVar8 = FUN_04ab7924(uVar19,lVar20,DAT_091c9558);
        if ((uVar8 & 1) != 0) {
          uVar4 = 0;
          goto LAB_0445defc;
        }
      }
      if ((*(long *)(param_1 + 0x78) != 0) &&
         (lVar20 = *(long *)(*(long *)(param_1 + 0x78) + 0x28), lVar20 != 0)) {
        if (*(uint *)(lVar20 + 0x18) <= *(uint *)(lVar7 + 0x18)) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          goto LAB_0445e450;
        }
        uVar19 = *(undefined8 *)(lVar20 + (long)(int)*(uint *)(lVar7 + 0x18) * 8 + 0x20);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar14 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar20 = puVar14[0x62];
        if (lVar20 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar14 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar18 = *puVar14;
          lVar20 = thunk_FUN_03f9944c(DAT_09179360);
          FUN_05322d94(lVar20,uVar18,DAT_091e77e8,0);
          lVar15 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar15 + 0x310) = lVar20;
          thunk_FUN_03f5d7b8(lVar15 + 0x310,lVar20);
        }
        uVar19 = FUN_04b0cafc(uVar19,lVar20,DAT_091cb608);
        uVar18 = thunk_FUN_03f9944c(DAT_09179358);
        FUN_05324070(uVar18,param_1,DAT_091c6868,0);
        if (*(int *)(DAT_0918f690 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar9 = (long *)FUN_04aeafe8(uVar19,uVar18,**(undefined8 **)(DAT_0918f690 + 0xb8),
                                      DAT_091ca108);
        if (plVar9 != (long *)0x0) {
          lVar20 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar8 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == DAT_0917a820) {
                puVar14 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0445d488;
              }
              uVar8 = uVar8 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar8 != 0);
          }
          puVar14 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a820,0);
LAB_0445d488:
          plVar9 = (long *)(*(code *)*puVar14)(plVar9,puVar14[1]);
          local_198 = &local_e8;
          local_1a0 = 0;
joined_r0x0445d4a0:
          local_e8 = plVar9;
          if (plVar9 != (long *)0x0) {
            lVar20 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == DAT_09185b10) {
                  puVar14 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_0445d50c;
                }
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
            puVar14 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_0445d50c:
            uVar8 = (*(code *)*puVar14)(plVar9,puVar14[1]);
            plVar9 = local_e8;
            if ((uVar8 & 1) == 0) {
              uVar4 = 0;
              goto LAB_0445de88;
            }
            if (local_e8 == (long *)0x0) {
              if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_0445e450;
            }
            lVar20 = *local_e8;
            uVar8 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar8 != 0) {
              piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == DAT_0917af20) {
                  puVar14 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_0445d578;
                }
                uVar8 = uVar8 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar8 != 0);
            }
            puVar14 = (undefined8 *)FUN_03f95da8(local_e8,DAT_0917af20,0);
LAB_0445d578:
            lVar20 = (*(code *)*puVar14)(plVar9,puVar14[1]);
            uVar8 = CookingGraph_CookingLevelSimulation__AutoStep(param_1,lVar20);
            if (((uVar8 & 1) != 0) ||
               (uVar8 = CookingGraph_CookingLevelSimulation__OutputNeeded
                                  (param_1,lVar20,*(undefined8 *)(param_4 + 0x30),0),
               plVar9 = local_e8, (uVar8 & 1) != 0)) {
              uVar4 = *(undefined4 *)(lVar7 + 0x18);
              lVar15 = FUN_03f5c394(DAT_09180970,1);
              if (lVar15 == 0) {
                if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_0445e450;
              }
              if (*(int *)(lVar15 + 0x18) == 0) {
                if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                goto LAB_0445e450;
              }
              *(long *)(lVar15 + 0x20) = lVar20;
              thunk_FUN_03f5d7b8((long *)(lVar15 + 0x20),lVar20);
              uVar8 = CookingGraph_CookingLevelSimulation__PreferDirectServing
                                (param_1,uVar4,lVar15,0,0);
              plVar9 = local_e8;
              if ((uVar8 & 1) == 0) {
                if ((((char)local_e0 != '\0') &&
                    (FUN_05c3c1f8(&local_e0,DAT_091b76d0), -1 < extraout_x1_03)) &&
                   (lVar15 = FUN_05c3c1f8(&local_e0,DAT_091b76d0), lVar15 != 0)) {
                  uVar19 = FUN_05c3c1f8(&local_e0,DAT_091b76d0);
                  uVar19 = CookingGraph_CookingLevelSimulation__ProcessFulfillmentPriority
                                     (param_1,uVar19);
                  uVar18 = CookingGraph_CookingLevelSimulation__ProcessFulfillmentPriority
                                     (param_1,lVar20);
                  iVar5 = CookingGraph_CookingLevelSimulation__CompareRank(uVar19,uVar18);
                  plVar9 = local_e8;
                  if (iVar5 < 0) goto joined_r0x0445d4a0;
                  if (iVar5 == 0) {
                    if (*(long *)(param_1 + 0x78) == 0) {
                      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_0445e450;
                    }
                    lVar15 = *(long *)(*(long *)(param_1 + 0x78) + 0x28);
                    if (lVar15 == 0) {
                      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_0445e450;
                    }
                    if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar7 + 0x18)) {
                      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c558();
                      }
                      goto LAB_0445e450;
                    }
                    uVar18 = *(undefined8 *)(lVar15 + (long)(int)*(uint *)(lVar7 + 0x18) * 8 + 0x20)
                    ;
                    uVar19 = FUN_05c3c1f8(&local_e0,DAT_091b76d0);
                    iVar5 = FUN_04ee582c(uVar18,uVar19,DAT_091c0578);
                    if (*(long *)(param_1 + 0x78) == 0) {
                      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_0445e450;
                    }
                    lVar15 = *(long *)(*(long *)(param_1 + 0x78) + 0x28);
                    if (lVar15 == 0) {
                      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_0445e450;
                    }
                    if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar7 + 0x18)) {
                      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c558();
                      }
                      goto LAB_0445e450;
                    }
                    iVar6 = FUN_04ee582c(*(undefined8 *)
                                          (lVar15 + (long)(int)*(uint *)(lVar7 + 0x18) * 8 + 0x20),
                                         lVar20,DAT_091c0578);
                    plVar9 = local_e8;
                    if (iVar5 < iVar6) goto joined_r0x0445d4a0;
                  }
                }
                lVar15 = *(long *)(param_1 + 0x78);
                if (lVar15 == 0) {
LAB_0445dc48:
                  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_0445e450;
                }
                if (lVar20 == 0) {
                  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_0445e450;
                }
                iVar5 = 0;
                while( true ) {
                  lVar15 = *(long *)(lVar15 + 0x20);
                  if (lVar15 == 0) {
                    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_0445e450;
                  }
                  uVar2 = *(uint *)(lVar20 + 0x10);
                  if (*(uint *)(lVar15 + 0x18) <= uVar2) {
                    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    goto LAB_0445e450;
                  }
                  lVar15 = *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
                  if (lVar15 == 0) {
                    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_0445e450;
                  }
                  plVar9 = local_e8;
                  if (*(int *)(lVar15 + 0x18) <= iVar5) break;
                  lVar15 = *(long *)(param_1 + 0xb0);
                  local_250 = 0;
                  FUN_066c1fdc(&local_250,(long)(int)uVar2,iVar5,DAT_091bec98);
                  if (lVar15 == 0) {
                    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_0445e450;
                  }
                  uVar8 = FUN_06e4c14c(lVar15,local_250,DAT_0919c190);
                  if ((uVar8 & 1) == 0) {
                    lVar15 = CookingGraph_CookingLevelSimulation__LaneOccupants
                                       (param_1,*(undefined4 *)(lVar20 + 0x10),iVar5,
                                        *(undefined8 *)(param_4 + 0x30),0);
                    if (lVar15 == 0) {
                      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_0445e450;
                    }
                    if (*(int *)(lVar15 + 0x18) < 1) {
                      uVar19 = CookingGraph_CookingLevelSimulation__WholeProcessSources(param_1);
                      lVar15 = *(long *)(lVar7 + 0x30);
                      if (lVar15 == 0) {
                        lVar15 = thunk_FUN_03f9944c(DAT_09178208);
                        FUN_0530bff4(lVar15,lVar7,DAT_091e7ae0,0);
                        *(long *)(lVar7 + 0x30) = lVar15;
                        thunk_FUN_03f5d7b8(lVar7 + 0x30,lVar15);
                      }
                      uVar19 = FUN_04b0a9d0(uVar19,lVar15,DAT_091cb398);
                      lVar15 = FUN_04b08378(uVar19,DAT_091cb0b0);
                      lStack_1f8 = *(long *)(lVar7 + 0x18);
                      local_200 = *(long *)(lVar7 + 0x10);
                      local_1f0 = *(long *)(lVar7 + 0x20);
                      lStack_248 = param_3[1];
                      local_250 = *param_3;
                      local_240 = param_3[2];
                      lStack_a8 = 0;
                      local_b0 = 0;
                      lStack_98 = 0;
                      local_a0 = 0;
                      lStack_b8 = 0;
                      local_c0 = 0;
                      local_1c0 = local_200;
                      lStack_1b8 = lStack_1f8;
                      local_1b0 = local_1f0;
                      FUN_066bb1a4(&local_c0,&local_250,&local_200,DAT_091bec10);
                      if (lVar15 == 0) {
                        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        goto LAB_0445e450;
                      }
                      lStack_248 = lStack_b8;
                      local_250 = local_c0;
                      lStack_238 = lStack_a8;
                      local_240 = local_b0;
                      lStack_228 = lStack_98;
                      local_230 = local_a0;
                      FUN_056a9898(lVar15,0,&local_250,DAT_091aa9b8);
                      lVar10 = thunk_FUN_03f9944c(DAT_0917bb80);
                      FUN_056cb640(lVar10,DAT_091aabd8);
                      lVar21 = *(long *)(lVar20 + 0x30);
                      if (lVar21 == 0) {
                        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        goto LAB_0445e450;
                      }
                      if (0 < *(int *)(lVar21 + 0x18)) {
                        uVar8 = 0;
                        do {
                          lVar11 = thunk_FUN_03f9944c(DAT_0918f300);
                          CookingGraph_CookingLevelSimulation_<>c__DisplayClass111_1___ctor
                                    (lVar11,0);
                          if (*(uint *)(lVar21 + 0x18) <= uVar8) {
                            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c558();
                            }
                            goto LAB_0445e450;
                          }
                          if (lVar11 == 0) {
                            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            goto LAB_0445e450;
                          }
                          uVar22 = *(ulong *)(lVar21 + 0x20 + uVar8 * 8);
                          *(ulong *)(lVar11 + 0x10) = uVar22;
                          if (*(int *)(lVar7 + 0x18) != (int)uVar22) {
                            lVar12 = FUN_03f5c394(DAT_09180970,1);
                            if (lVar12 == 0) {
                              if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                FUN_03f5c550();
                              }
                              goto LAB_0445e450;
                            }
                            if (*(int *)(lVar12 + 0x18) == 0) {
                              if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                FUN_03f5c558();
                              }
                              goto LAB_0445e450;
                            }
                            *(long *)(lVar12 + 0x20) = lVar20;
                            thunk_FUN_03f5d7b8((long *)(lVar12 + 0x20),lVar20);
                            uVar22 = CookingGraph_CookingLevelSimulation__PreferDirectServing
                                               (param_1,uVar22 & 0xffffffff,lVar12,0,0);
                            if ((uVar22 & 1) != 0) break;
                          }
                          if (*(long *)(param_1 + 0x78) == 0) {
                            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            goto LAB_0445e450;
                          }
                          lVar12 = *(long *)(*(long *)(param_1 + 0x78) + 0x20);
                          if (lVar12 == 0) {
                            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            goto LAB_0445e450;
                          }
                          if (*(uint *)(lVar12 + 0x18) <= *(uint *)(lVar20 + 0x10)) {
                            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c558();
                            }
                            goto LAB_0445e450;
                          }
                          lVar12 = *(long *)(lVar12 + (long)(int)*(uint *)(lVar20 + 0x10) * 8 + 0x20
                                            );
                          if (lVar12 == 0) {
                            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            goto LAB_0445e450;
                          }
                          iVar6 = CookingGraph_CookingGraphIndex_Tool__Flat
                                            (lVar12,*(undefined4 *)(lVar11 + 0x14),iVar5,0);
                          uVar19 = thunk_FUN_03f9944c(DAT_09178208);
                          FUN_0530bff4(uVar19,lVar11,DAT_091e7af0,0);
                          FUN_04ae5254(&local_250,lVar15,uVar19,DAT_091c9bf8);
                          lVar11 = lStack_238;
                          lStack_f8 = lStack_248;
                          local_100 = local_250;
                          local_f0 = local_240;
                          lStack_78 = lStack_228;
                          local_80 = local_230;
                          if ((iVar6 < 0) || (lStack_238 == 0)) break;
                          local_1d0 = 0;
                          local_b0 = lStack_228;
                          lStack_b8 = local_230;
                          lStack_1e8 = 0;
                          local_1f0 = 0;
                          lStack_1d8 = 0;
                          lStack_1e0 = 0;
                          lStack_1f8 = 0;
                          local_200 = 0;
                          local_c0 = lStack_238;
                          FUN_066e0044(&local_200,&local_250,&local_c0,iVar6,DAT_091bee48);
                          lVar12 = DAT_091aabe0;
                          if (lVar10 == 0) {
LAB_0445df30:
                            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            goto LAB_0445e450;
                          }
                          lStack_a8 = lStack_1e8;
                          local_b0 = local_1f0;
                          lStack_98 = lStack_1d8;
                          local_a0 = lStack_1e0;
                          local_90 = local_1d0;
                          lStack_b8 = lStack_1f8;
                          local_c0 = local_200;
                          lVar16 = *(long *)(lVar10 + 0x10);
                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                          if (lVar16 == 0) goto LAB_0445df30;
                          uVar2 = *(uint *)(lVar10 + 0x18);
                          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                            lVar16 = lVar16 + (long)(int)uVar2 * 0x38;
                            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                            *(long *)(lVar16 + 0x28) = lStack_1f8;
                            *(long *)(lVar16 + 0x20) = local_200;
                            *(long *)(lVar16 + 0x38) = lStack_1e8;
                            *(long *)(lVar16 + 0x30) = local_1f0;
                            *(long *)(lVar16 + 0x48) = lStack_1d8;
                            *(long *)(lVar16 + 0x40) = lStack_1e0;
                            *(undefined8 *)(lVar16 + 0x50) = local_1d0;
                            thunk_FUN_03f5d7b8(lVar16 + 0x28,0);
                          }
                          else {
                            lStack_248 = lStack_1f8;
                            local_250 = local_200;
                            lStack_238 = lStack_1e8;
                            local_240 = local_1f0;
                            lStack_228 = lStack_1d8;
                            local_230 = lStack_1e0;
                            local_220 = local_1d0;
                            FUN_056cbf90(lVar10,&local_250,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                          }
                          lStack_248 = lStack_f8;
                          local_250 = local_100;
                          lStack_228 = lStack_78;
                          local_230 = local_80;
                          local_240 = local_f0;
                          lStack_238 = lVar11;
                          FUN_056aa040(lVar15,&local_250,DAT_091aa9c0);
                          uVar8 = uVar8 + 1;
                          if ((long)*(int *)(lVar21 + 0x18) <= (long)uVar8) break;
                        } while( true );
                      }
                      if (lVar10 == 0) {
                        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        goto LAB_0445e450;
                      }
                      if (*(long *)(lVar20 + 0x30) == 0) {
                        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        goto LAB_0445e450;
                      }
                      if (*(int *)(lVar10 + 0x18) == *(int *)(*(long *)(lVar20 + 0x30) + 0x18)) {
                        lVar15 = *(long *)(lVar7 + 0x38);
                        if (lVar15 == 0) {
                          lVar15 = thunk_FUN_03f9944c(DAT_09178330);
                          FUN_0530f698(lVar15,lVar7,DAT_091e7ae8,0);
                          *(long *)(lVar7 + 0x38) = lVar15;
                          thunk_FUN_03f5d7b8(lVar7 + 0x38,lVar15);
                        }
                        uVar8 = FUN_04ab4fe0(lVar10,lVar15,DAT_091c93a0);
                        if ((uVar8 & 1) != 0) {
                          FUN_056ccea4(&local_250,lVar10,DAT_091aabe8);
                          memcpy(&local_150,&local_250,0x48);
                          local_260 = 0;
                          puStack_258 = &local_150;
                          goto LAB_0445dcbc;
                        }
                      }
                    }
                  }
                  lVar15 = *(long *)(param_1 + 0x78);
                  iVar5 = iVar5 + 1;
                  if (lVar15 == 0) goto LAB_0445dc48;
                }
              }
            }
            goto joined_r0x0445d4a0;
          }
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_0445e450;
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0445e450:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0445dcbc:
  uVar13 = FUN_07189fc0(&local_150,DAT_091a2088);
  uVar22 = local_110;
  uVar8 = local_120;
  uVar19 = uStack_128;
  if ((uVar13 & 1) != 0) {
    uStack_168 = uStack_138;
    local_170 = local_140;
    local_160 = local_130;
    CookingGraph_CookingLevelSimulation__ToolAddress
              (&local_250,*(undefined4 *)(lVar20 + 0x10),local_110 & 0xffffffff);
    lStack_188 = lStack_248;
    local_190 = local_250;
    local_180 = local_240;
    CookingGraph_CookingLevelSimulation__PlanEntry
              (param_1,*(undefined8 *)(param_4 + 0x30),lVar20,*(undefined4 *)(lVar20 + 0x10),
               uVar22 & 0xffffffff,uVar8 & 0xffffffff,uVar19);
    if (*(long *)(param_4 + 0x30) == 0) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_0445e450;
    }
    lVar7 = *(long *)(*(long *)(param_4 + 0x30) + 0x10);
    if (lVar7 == 0) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_0445e450;
    }
    lStack_248 = lStack_188;
    local_250 = local_190;
    local_240 = local_180;
    FUN_06e821f8(lVar7,&local_250,uVar8 & 0xffffffff,DAT_0919c7f8);
    lVar15 = *(long *)(param_4 + 0x18);
    local_1d0 = 0;
    uStack_278 = uStack_168;
    local_280 = local_170;
    local_270 = local_160;
    lStack_298 = lStack_188;
    local_2a0 = local_190;
    local_290 = local_180;
    lStack_1e8 = 0;
    local_1f0 = 0;
    lStack_1d8 = 0;
    lStack_1e0 = 0;
    lStack_1f8 = 0;
    local_200 = 0;
    CookingGraph_Execution_CookingTransferRequest___ctor(&local_200,&local_280,&local_2a0,uVar19,0);
    lVar7 = DAT_091ac090;
    if (lVar15 == 0) {
LAB_0445e0e0:
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_0445e450;
    }
    local_90 = local_1d0;
    lStack_a8 = lStack_1e8;
    local_b0 = local_1f0;
    lStack_98 = lStack_1d8;
    local_a0 = lStack_1e0;
    lVar10 = *(long *)(lVar15 + 0x10);
    lStack_b8 = lStack_1f8;
    local_c0 = local_200;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_0445e0e0;
    uVar2 = *(uint *)(lVar15 + 0x18);
    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
      lVar10 = lVar10 + (long)(int)uVar2 * 0x38;
      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
      *(long *)(lVar10 + 0x28) = lStack_1f8;
      *(long *)(lVar10 + 0x20) = local_200;
      *(long *)(lVar10 + 0x38) = lStack_1e8;
      *(long *)(lVar10 + 0x30) = local_1f0;
      *(long *)(lVar10 + 0x48) = lStack_1d8;
      *(long *)(lVar10 + 0x40) = lStack_1e0;
      *(undefined8 *)(lVar10 + 0x50) = local_1d0;
      thunk_FUN_03f5d7b8(lVar10 + 0x28,0);
    }
    else {
      lStack_248 = lStack_1f8;
      local_250 = local_200;
      lStack_238 = lStack_1e8;
      local_240 = local_1f0;
      lStack_228 = lStack_1d8;
      local_230 = lStack_1e0;
      local_220 = local_1d0;
      FUN_057452c4(lVar15,&local_250,
                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    goto LAB_0445dcbc;
  }
  FUN_07189fbc(&local_150,DAT_091a2080);
  uVar4 = 1;
LAB_0445de88:
  plVar9 = *local_198;
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == DAT_09185a58) {
          puVar14 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0445dee8;
        }
        uVar8 = uVar8 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar8 != 0);
    }
    puVar14 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185a58,0);
LAB_0445dee8:
    (*(code *)*puVar14)(plVar9,puVar14[1]);
  }
  if (local_1a0 != 0) {
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548();
    }
    goto LAB_0445e450;
  }
LAB_0445defc:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar4;
  }
  goto LAB_0445e450;
}


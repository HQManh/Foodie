// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$PlanPick
// address: 0x443b484
// body: available
// range: 0x443b484-0x443cd63 inclusive
// range: 0x443cf64-0x443cf67 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x443ca44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443caa8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443cac0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443cad8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443caf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443cb08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443cb20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443cb38 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443cb50 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443cb68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443cb80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443cb98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


long CookingGraph_CookingLevelSimulation__PlanPick
               (long param_1,undefined4 param_2,int param_3,ulong param_4,undefined8 *param_5,
               uint param_6)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  int local_4c4;
  ulong local_4b0;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 local_460;
  undefined8 *puStack_458;
  undefined8 local_450;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 *puStack_3e8;
  undefined8 local_3e0;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined4 local_3b0;
  undefined8 local_3ac;
  undefined4 local_3a4;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined4 local_320;
  undefined8 local_31c;
  undefined4 local_314;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_24c;
  undefined4 local_244;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_220;
  long lStack_218;
  undefined8 local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  long lStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if ((DAT_09518038 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c03a8);
    FUN_03f5c2a4(&DAT_091c6720);
    FUN_03f5c2a4(&DAT_091c6728);
    FUN_03f5c2a4(&DAT_0919c7f8);
    FUN_03f5c2a4(&DAT_0919c810);
    FUN_03f5c2a4(&DAT_091c9390);
    FUN_03f5c2a4(&DAT_091c9b00);
    FUN_03f5c2a4(&DAT_091cabc0);
    FUN_03f5c2a4(&DAT_091cadc0);
    FUN_03f5c2a4(&DAT_091a1f48);
    FUN_03f5c2a4(&DAT_091a1f50);
    FUN_03f5c2a4(&DAT_091a1f58);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_09178290);
    FUN_03f5c2a4(&DAT_091a8308);
    FUN_03f5c2a4(&DAT_091a7ff8);
    FUN_03f5c2a4(&DAT_091a8318);
    FUN_03f5c2a4(&DAT_091a82d0);
    FUN_03f5c2a4(&DAT_091a7ff0);
    FUN_03f5c2a4(&DAT_091a7fe8);
    FUN_03f5c2a4(&DAT_091a82f8);
    FUN_03f5c2a4(&DAT_09179d80);
    FUN_03f5c2a4(&DAT_09179e20);
    FUN_03f5c2a4(&DAT_091ac098);
    FUN_03f5c2a4(&DAT_091ac090);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091aaa00);
    FUN_03f5c2a4(&DAT_091ac0a8);
    FUN_03f5c2a4(&DAT_091ac0b0);
    FUN_03f5c2a4(&DAT_091ac0b8);
    FUN_03f5c2a4(&DAT_091ac0c0);
    FUN_03f5c2a4(&DAT_091ac0c8);
    FUN_03f5c2a4(&DAT_091b76c0);
    FUN_03f5c2a4(&DAT_091b6b80);
    FUN_03f5c2a4(&DAT_091b76c8);
    FUN_03f5c2a4(&DAT_091b6b88);
    FUN_03f5c2a4(&DAT_091b6b90);
    FUN_03f5c2a4(&DAT_091b76d0);
    FUN_03f5c2a4(&DAT_0918f678);
    FUN_03f5c2a4(&DAT_09180970);
    FUN_03f5c2a4(&DAT_091e77b8);
    FUN_03f5c2a4(&DAT_091e7b28);
    FUN_03f5c2a4(&DAT_0918f338);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_09208fb0);
    FUN_03f5c2a4(&DAT_0920ac30);
    FUN_03f5c2a4(&DAT_09206cb8);
    FUN_03f5c2a4(&DAT_0920b288);
    FUN_03f5c2a4(&DAT_09206e78);
    FUN_03f5c2a4(&DAT_09202f58);
    FUN_03f5c2a4(&DAT_09206900);
    FUN_03f5c2a4(&DAT_09208958);
    DAT_09518038 = 1;
  }
  uStack_158 = 0;
  local_160 = 0;
  local_150 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  lStack_198 = 0;
  local_1a0 = 0;
  local_190 = 0;
  local_80 = 0;
  local_88 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_218 = 0;
  local_220 = 0;
  local_210 = 0;
  *param_5 = 0;
  thunk_FUN_03f5d7b8(param_5,0);
  if (*(int *)(param_1 + 0x188) == 0) {
    lVar9 = CookingGraph_CookingLevelSimulation__Instance(param_1,param_2,param_3,0);
    if (lVar9 == 0) {
      puVar18 = &DAT_0920b288;
    }
    else {
      lVar25 = CookingGraph_CookingLevelSimulation__At(param_1,param_2,param_3);
      if ((param_4 & 1) != 0) goto LAB_0443b830;
      if (param_3 == 0) {
        if (lVar25 == 0) {
LAB_0443ca30:
          if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_0443cf64;
        }
        uVar4 = *(uint *)(lVar25 + 0x20);
        if (-1 < (int)uVar4) {
          lVar25 = *(long *)(param_1 + 0x88);
          if (lVar25 == 0) goto LAB_0443ca30;
          if (*(uint *)(lVar25 + 0x18) <= uVar4) {
            if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            goto LAB_0443cf64;
          }
          if (*(int *)(lVar25 + (ulong)uVar4 * 4 + 0x20) == 1) {
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar18 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            lVar25 = puVar18[0x6c];
            if (lVar25 == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar18 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              }
              uVar10 = *puVar18;
              lVar25 = thunk_FUN_03f9944c(DAT_09178290);
              FUN_0530cf38(lVar25,uVar10,DAT_091e77b8,0);
              lVar19 = *(long *)(DAT_0918f298 + 0xb8);
              *(long *)(lVar19 + 0x360) = lVar25;
              thunk_FUN_03f5d7b8(lVar19 + 0x360,lVar25);
            }
            uVar11 = FUN_04ab46c8(lVar9,lVar25,DAT_091c9390);
            if ((uVar11 & 1) != 0) goto LAB_0443b894;
          }
        }
LAB_0443b830:
        uVar10 = thunk_FUN_03f9944c(DAT_09178290);
        FUN_0530cf38(uVar10,param_1,DAT_091c6720,0);
        uVar11 = FUN_04ab46c8(lVar9,uVar10,DAT_091c9390);
        if ((uVar11 & 1) == 0) {
          uVar10 = thunk_FUN_03f9944c(DAT_09178290);
          FUN_0530cf38(uVar10,param_1,DAT_091c6728,0);
          uVar11 = FUN_04ab46c8(lVar9,uVar10,DAT_091c9390);
          if ((uVar11 & 1) == 0) {
            lVar25 = thunk_FUN_03f9944c(DAT_0918f678);
            CookingGraph_CookingLevelSimulation_PickPlan___ctor(lVar25,0);
            if (lVar25 != 0) {
              *(long *)(lVar25 + 0x10) = lVar9;
              thunk_FUN_03f5d7b8((long *)(lVar25 + 0x10),lVar9);
              lVar19 = *(long *)(lVar25 + 0x30);
              if ((lVar19 != 0) && (*(long *)(param_1 + 0x90) != 0)) {
                local_4c4 = *(int *)(*(long *)(param_1 + 0x90) + 0x18);
                lVar24 = *(long *)(lVar19 + 0x10);
                lVar12 = thunk_FUN_03f9944c(DAT_09179e20);
                FUN_053e1118(lVar12,DAT_091a82f8);
                lVar13 = thunk_FUN_03f9944c(DAT_09179d80);
                FUN_053d17f8(lVar13,DAT_091a7fe8);
                FUN_056aec8c(&local_c0,lVar9,DAT_091aaa00);
                local_150 = CONCAT44(uStack_ac,uStack_b0);
                uStack_158 = CONCAT44(uStack_b4,uStack_b8);
                bVar7 = false;
                puStack_3e8 = &local_160;
                local_160 = local_c0;
                local_3f0 = 0;
LAB_0443ba9c:
                uVar11 = FUN_07188168(&local_160,DAT_091a1f50);
                if ((uVar11 & 1) != 0) {
                  lVar9 = CookingGraph_CookingLevelSimulation__At
                                    (param_1,local_150 & 0xffffffff,local_150._4_4_);
                  if (lVar9 == 0) {
                    if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_0443cf64;
                  }
                  if (*(char *)(lVar9 + 0x30) == '\0') {
                    if (*(char *)(param_1 + 0x14a) != '\0') {
                      if (*(long *)(param_1 + 0x78) == 0) {
                        if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        goto LAB_0443cf64;
                      }
                      lVar20 = *(long *)(*(long *)(param_1 + 0x78) + 0x80);
                      if (lVar20 == 0) {
                        if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        goto LAB_0443cf64;
                      }
                      if (*(uint *)(lVar20 + 0x18) <= *(uint *)(lVar9 + 0x18)) {
                        if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c558();
                        }
                        goto LAB_0443cf64;
                      }
                      lVar20 = *(long *)(lVar20 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20);
                      uVar10 = CookingGraph_CookingLevelSimulation__Demand(param_1);
                      if (lVar20 == 0) {
                        if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550(uVar10,uVar10);
                        }
                        goto LAB_0443cf64;
                      }
                      uVar11 = FUN_053d9110(lVar20,uVar10,DAT_091a82d0);
                      if ((uVar11 & 1) == 0) {
                        *param_5 = DAT_09208958;
                        thunk_FUN_03f5d7b8(param_5);
LAB_0443ca60:
                        FUN_07188164(&local_160,DAT_091a1f48);
                        goto LAB_0443b7c4;
                      }
                    }
                    lVar20 = *(long *)(param_1 + 0x178);
                    CookingGraph_CookingLevelSimulation_QueueCell__get_Address(&local_100,lVar9,0);
                    uStack_b8 = (undefined4)uStack_f8;
                    uStack_b4 = (undefined4)((ulong)uStack_f8 >> 0x20);
                    local_c0 = local_100;
                    uStack_b0 = (undefined4)local_f0;
                    uStack_ac = (undefined4)((ulong)local_f0 >> 0x20);
                    if (lVar20 == 0) {
                      if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_0443cf64;
                    }
                    uStack_238 = uStack_f8;
                    local_230 = local_f0;
                    local_240 = local_100;
                    uVar10 = CookingGraph_Execution_CookingExecution__UnitsAt(lVar20,&local_240,0);
                    uVar10 = FUN_04b02880(uVar10,*(undefined4 *)(lVar9 + 0x28),DAT_091cabc0);
                    lVar20 = FUN_04b0451c(uVar10,DAT_091cadc0);
                    if (*(long *)(param_1 + 0x78) == 0) {
                      if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_0443cf64;
                    }
                    lVar21 = *(long *)(*(long *)(param_1 + 0x78) + 0x28);
                    if (lVar21 == 0) {
                      if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_0443cf64;
                    }
                    if (*(uint *)(lVar21 + 0x18) <= *(uint *)(lVar9 + 0x18)) {
                      if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c558();
                      }
                      goto LAB_0443cf64;
                    }
                    if (lVar20 == 0) {
                      if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_0443cf64;
                    }
                    if (0 < (int)*(ulong *)(lVar20 + 0x18)) {
                      uVar11 = 0;
                      puVar18 = (undefined8 *)(lVar20 + 0x2c);
                      bVar2 = false;
                      lVar21 = *(long *)(lVar21 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20);
                      uVar22 = *(ulong *)(lVar20 + 0x18) & 0xffffffff;
LAB_0443bbe4:
                      if (uVar22 <= uVar11) {
                        if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c558();
                        }
                        goto LAB_0443cf64;
                      }
                      local_78 = *puVar18;
                      local_70 = *(undefined4 *)(puVar18 + 1);
                      uVar10 = *(undefined8 *)((long)puVar18 + -0xc);
                      uVar3 = *(undefined4 *)((long)puVar18 + -4);
                      uStack_178 = 0;
                      local_180 = 0;
                      uStack_168 = 0;
                      uStack_170 = 0;
                      if (bVar2) {
                        lStack_218 = 0;
                        local_220 = 0;
                        local_210 = 0;
                      }
                      else {
                        local_4b0 = local_4b0 & 0xffffffff00000000;
                        CookingGraph_CookingLevelSimulation__RouteProcess
                                  (&local_c0,param_1,*(undefined4 *)(lVar9 + 0x18),lVar19,0,
                                   local_4b0,0);
                        lStack_218 = CONCAT44(uStack_b4,uStack_b8);
                        local_210 = CONCAT44(uStack_ac,uStack_b0);
                        local_220 = local_c0;
                      }
                      lVar14 = DAT_091c03a8;
                      lStack_198 = lStack_218;
                      local_1a0 = local_220;
                      uVar15 = local_1a0;
                      local_1a0._0_1_ = (char)local_220;
                      local_190 = local_210;
                      local_1a0 = uVar15;
                      if (((char)local_1a0 == '\0') || (lStack_218 == 0)) {
                        lVar16 = *(long *)(DAT_091c03a8 + 0x38);
                        if (lVar16 == 0) {
                          FUN_03f95ac8(DAT_091c03a8);
                          lVar16 = *(long *)(lVar14 + 0x38);
                        }
                        lVar16 = *(long *)(lVar16 + 0x10);
                        if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
                          lVar16 = FUN_03f95a6c();
                        }
                        if (*(int *)(lVar16 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                        if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
                          lVar14 = FUN_03f95a6c();
                        }
                        lVar14 = **(long **)(lVar14 + 0xb8);
                      }
                      else {
                        lVar14 = FUN_03f5c394(DAT_09180970,1);
                        uVar15 = FUN_05c3c1f8(&local_1a0,DAT_091b76d0);
                        if (lVar14 == 0) {
                          if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          goto LAB_0443cf64;
                        }
                        if (*(int *)(lVar14 + 0x18) == 0) {
                          if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c558();
                          }
                          goto LAB_0443cf64;
                        }
                        *(undefined8 *)(lVar14 + 0x20) = uVar15;
                        thunk_FUN_03f5d7b8();
                      }
                      if (!bVar7) {
                        if (*(long *)(param_1 + 0x180) == 0) {
                          if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          goto LAB_0443cf64;
                        }
                        lVar16 = *(long *)(*(long *)(param_1 + 0x180) + 0x40);
                        if (lVar16 == 0) {
                          if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          goto LAB_0443cf64;
                        }
                        uVar22 = CookingGraph_Execution_CookingExecutionConfig__get_WholeDish
                                           (lVar16,0);
                        if ((uVar22 & 1) != 0) {
                          CookingGraph_CookingLevelSimulation_QueueCell__get_Address
                                    (&local_c0,lVar9,0);
                          local_260 = CONCAT44(uStack_ac,uStack_b0);
                          uStack_268 = CONCAT44(uStack_b4,uStack_b8);
                          local_270 = local_c0;
                          local_24c = local_78;
                          local_244 = local_70;
                          local_258 = uVar10;
                          local_250 = uVar3;
                          lVar16 = CookingGraph_CookingLevelSimulation__PlanWholeDishCapture
                                             (param_1,&local_258,&local_270,
                                              *(undefined8 *)(lVar25 + 0x18));
                          if ((lVar16 == 0) ||
                             (uVar22 = CookingGraph_CookingLevelSimulation__PreferDirectServing
                                                 (param_1,uVar3,lVar14,0,1), (uVar22 & 1) == 0))
                          goto LAB_0443bdf8;
                          if (lVar12 == 0) {
                            if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            goto LAB_0443cf64;
                          }
                          FUN_053e230c(lVar12,uVar10,DAT_091a8308);
                          if (*(long *)(lVar25 + 0x18) == 0) {
                            if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            goto LAB_0443cf64;
                          }
                          FUN_05745554(*(long *)(lVar25 + 0x18),lVar16,DAT_091ac098);
LAB_0443c654:
                          bVar7 = true;
LAB_0443c65c:
                          uVar22 = (ulong)*(uint *)(lVar20 + 0x18);
                          uVar11 = uVar11 + 1;
                          puVar18 = puVar18 + 3;
                          if ((long)(int)*(uint *)(lVar20 + 0x18) <= (long)uVar11)
                          goto LAB_0443ba9c;
                          goto LAB_0443bbe4;
                        }
LAB_0443bdf8:
                        if (*(long *)(param_1 + 0x180) == 0) {
                          if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          goto LAB_0443cf64;
                        }
                        lVar16 = *(long *)(*(long *)(param_1 + 0x180) + 0x40);
                        if (lVar16 == 0) {
                          if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          goto LAB_0443cf64;
                        }
                        uVar22 = CookingGraph_Execution_CookingExecutionConfig__get_WholeDish
                                           (lVar16,0);
                        if ((uVar22 & 1) != 0) goto LAB_0443bfc0;
                        CookingGraph_CookingLevelSimulation__ServeTarget
                                  (&local_c0,param_1,uVar3,lVar13);
                        uStack_1d8 = CONCAT44(uStack_b4,uStack_b8);
                        uStack_1d0 = CONCAT44(uStack_ac,uStack_b0);
                        local_1e0 = local_c0;
                        uVar15 = local_1e0;
                        uStack_1c8 = uStack_a8;
                        local_1e0._0_1_ = (char)local_c0;
                        bVar1 = (char)local_1e0 != '\0';
                        local_1e0 = uVar15;
                        if ((bVar1) &&
                           (uVar22 = CookingGraph_CookingLevelSimulation__PreferDirectServing
                                               (param_1,uVar3,lVar14,lVar13,0), (uVar22 & 1) != 0))
                        {
                          FUN_05c2b3f4(&local_c0,&local_1e0,DAT_091b6b90);
                          uStack_438 = CONCAT44(uStack_b4,uStack_b8);
                          local_430 = CONCAT44(uStack_ac,uStack_b0);
                          local_440 = local_c0;
                          if (lVar13 == 0) {
                            if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                          }
                          else {
                            local_100 = local_c0;
                            uStack_f8 = uStack_438;
                            local_f0 = local_430;
                            FUN_053d2af8(lVar13,&local_100,DAT_091a7ff8);
                            lVar14 = *(long *)(lVar25 + 0x18);
                            CookingGraph_CookingLevelSimulation_QueueCell__get_Address
                                      (&local_c0,lVar9,0);
                            uStack_288 = CONCAT44(uStack_b4,uStack_b8);
                            local_280 = CONCAT44(uStack_ac,uStack_b0);
                            local_290 = local_c0;
                            FUN_05c2b3f4(&local_c0,&local_1e0,DAT_091b6b90);
                            uStack_2c8 = CONCAT44(uStack_b4,uStack_b8);
                            local_2c0 = CONCAT44(uStack_ac,uStack_b0);
                            local_90 = 0;
                            local_2d0 = local_c0;
                            uStack_98 = 0;
                            local_a0 = 0;
                            uStack_a8 = 0;
                            uStack_b0 = 0;
                            uStack_ac = 0;
                            uStack_b8 = 0;
                            uStack_b4 = 0;
                            local_c0 = 0;
                            uStack_2a8 = uStack_288;
                            local_2b0 = local_290;
                            local_2a0 = local_280;
                            CookingGraph_Execution_CookingTransferRequest___ctor
                                      (&local_c0,&local_2b0,&local_2d0,uVar10,0);
                            if (lVar14 != 0) {
                              uStack_138 = CONCAT44(uStack_b4,uStack_b8);
                              uStack_130 = CONCAT44(uStack_ac,uStack_b0);
                              lVar16 = *(long *)(lVar14 + 0x10);
                              local_140 = local_c0;
                              uStack_128 = uStack_a8;
                              uStack_118 = uStack_98;
                              local_120 = local_a0;
                              local_110 = local_90;
                              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                              if (lVar16 != 0) {
                                uVar4 = *(uint *)(lVar14 + 0x18);
                                if (uVar4 < *(uint *)(lVar16 + 0x18)) {
                                  lVar16 = lVar16 + (long)(int)uVar4 * 0x38;
                                  *(uint *)(lVar14 + 0x18) = uVar4 + 1;
                                  *(undefined8 *)(lVar16 + 0x28) = uStack_138;
                                  *(undefined8 *)(lVar16 + 0x20) = local_c0;
                                  *(undefined8 *)(lVar16 + 0x38) = uStack_a8;
                                  *(undefined8 *)(lVar16 + 0x30) = uStack_130;
                                  *(undefined8 *)(lVar16 + 0x48) = uStack_98;
                                  *(undefined8 *)(lVar16 + 0x40) = local_a0;
                                  *(undefined8 *)(lVar16 + 0x50) = local_90;
                                  thunk_FUN_03f5d7b8(lVar16 + 0x28,0);
                                }
                                else {
                                  local_100 = local_c0;
                                  uStack_e8 = uStack_a8;
                                  uStack_d8 = uStack_98;
                                  local_e0 = local_a0;
                                  local_d0 = local_90;
                                  uStack_f8 = uStack_138;
                                  local_f0 = uStack_130;
                                  FUN_057452c4(lVar14,&local_100,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(DAT_091ac090 + 0x20) + 0xc0) +
                                                0x70));
                                }
                                goto LAB_0443c654;
                              }
                            }
                            if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                          }
                          goto LAB_0443cf64;
                        }
                      }
LAB_0443bfc0:
                      if (lVar24 == 0) {
                        if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        goto LAB_0443cf64;
                      }
                      uVar15 = FUN_06e81e58(lVar24,DAT_0919c810);
                      uVar17 = thunk_FUN_03f9944c(DAT_09179d80);
                      FUN_053d18e8(uVar17,uVar15,DAT_091a7ff0);
                      CookingGraph_CookingLevelSimulation__GridAssemblyTarget
                                (&local_c0,param_1,uVar3,uVar17);
                      uStack_1b8 = CONCAT44(uStack_b4,uStack_b8);
                      uStack_1b0 = CONCAT44(uStack_ac,uStack_b0);
                      local_1c0 = local_c0;
                      uVar15 = local_1c0;
                      uStack_1a8 = uStack_a8;
                      local_1c0._0_1_ = (char)local_c0;
                      local_1c0 = uVar15;
                      if ((char)local_1c0 != '\0') {
                        FUN_05c2b3f4(&local_c0,&local_1c0,DAT_091b6b90);
                        uStack_f8 = CONCAT44(uStack_b4,uStack_b8);
                        local_f0 = CONCAT44(uStack_ac,uStack_b0);
                        local_100 = local_c0;
                        FUN_06e821f8(lVar24,&local_100,uVar3,DAT_0919c7f8);
                        lVar14 = *(long *)(lVar25 + 0x18);
                        CookingGraph_CookingLevelSimulation_QueueCell__get_Address
                                  (&local_c0,lVar9,0);
                        uStack_438 = CONCAT44(uStack_b4,uStack_b8);
                        local_430 = CONCAT44(uStack_ac,uStack_b0);
                        local_440 = local_c0;
                        FUN_05c2b3f4(&local_c0,&local_1c0,DAT_091b6b90);
                        uStack_308 = CONCAT44(uStack_b4,uStack_b8);
                        local_300 = CONCAT44(uStack_ac,uStack_b0);
                        local_90 = 0;
                        local_310 = local_c0;
                        uStack_98 = 0;
                        local_a0 = 0;
                        uStack_a8 = 0;
                        uStack_b0 = 0;
                        uStack_ac = 0;
                        uStack_b8 = 0;
                        uStack_b4 = 0;
                        local_c0 = 0;
                        uStack_2e8 = uStack_438;
                        local_2f0 = local_440;
                        local_2e0 = local_430;
                        CookingGraph_Execution_CookingTransferRequest___ctor
                                  (&local_c0,&local_2f0,&local_310,uVar10,0);
                        if (lVar14 != 0) {
                          uStack_138 = CONCAT44(uStack_b4,uStack_b8);
                          uStack_130 = CONCAT44(uStack_ac,uStack_b0);
                          lVar16 = *(long *)(lVar14 + 0x10);
                          local_140 = local_c0;
                          uStack_128 = uStack_a8;
                          uStack_118 = uStack_98;
                          local_120 = local_a0;
                          local_110 = local_90;
                          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                          if (lVar16 != 0) {
                            uVar4 = *(uint *)(lVar14 + 0x18);
                            if (uVar4 < *(uint *)(lVar16 + 0x18)) {
                              lVar16 = lVar16 + (long)(int)uVar4 * 0x38;
                              *(uint *)(lVar14 + 0x18) = uVar4 + 1;
                              *(undefined8 *)(lVar16 + 0x28) = uStack_138;
                              *(undefined8 *)(lVar16 + 0x20) = local_c0;
                              *(undefined8 *)(lVar16 + 0x38) = uStack_a8;
                              *(undefined8 *)(lVar16 + 0x30) = uStack_130;
                              *(undefined8 *)(lVar16 + 0x48) = uStack_98;
                              *(undefined8 *)(lVar16 + 0x40) = local_a0;
                              *(undefined8 *)(lVar16 + 0x50) = local_90;
                              thunk_FUN_03f5d7b8(lVar16 + 0x28,0);
                            }
                            else {
                              local_100 = local_c0;
                              uStack_e8 = uStack_a8;
                              uStack_d8 = uStack_98;
                              local_e0 = local_a0;
                              local_d0 = local_90;
                              uStack_f8 = uStack_138;
                              local_f0 = uStack_130;
                              FUN_057452c4(lVar14,&local_100,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(DAT_091ac090 + 0x20) + 0xc0) + 0x70
                                            ));
                            }
                            goto LAB_0443c65c;
                          }
                        }
                        if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        goto LAB_0443cf64;
                      }
                      if (bVar2) goto LAB_0443c18c;
                      CookingGraph_CookingLevelSimulation_QueueCell__get_Address(&local_c0,lVar9,0);
                      local_330 = CONCAT44(uStack_ac,uStack_b0);
                      uStack_338 = CONCAT44(uStack_b4,uStack_b8);
                      local_340 = local_c0;
                      local_31c = local_78;
                      local_314 = local_70;
                      uStack_328 = uVar10;
                      local_320 = uVar3;
                      uVar22 = CookingGraph_CookingLevelSimulation__PlanWholeRecipeCapture
                                         (param_1,&uStack_328,&local_340,lVar25);
                      if ((uVar22 & 1) != 0) {
                        bVar2 = true;
                        goto LAB_0443c65c;
                      }
                      uVar22 = CookingGraph_CookingLevelSimulation__Preservable
                                         (param_1,*(undefined4 *)(lVar9 + 0x18));
                      if ((uVar22 & 1) == 0) goto LAB_0443c18c;
                      if (*(long *)(param_1 + 0x180) == 0) {
                        if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        goto LAB_0443cf64;
                      }
                      lVar14 = *(long *)(*(long *)(param_1 + 0x180) + 0x48);
                      if (lVar14 == 0) {
                        if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        goto LAB_0443cf64;
                      }
                      if ((*(char *)(lVar14 + 0x10) == '\0') || ((char)local_1a0 != '\0')) {
                        CookingGraph_CookingLevelSimulation__PreservationDestination
                                  (&local_c0,param_1,*(undefined4 *)(lVar9 + 0x18),lVar24);
                        uStack_178 = CONCAT44(uStack_b4,uStack_b8);
                        uStack_168 = uStack_a8;
                        uStack_170 = CONCAT44(uStack_ac,uStack_b0);
                        local_180 = local_c0;
                        uVar15 = local_180;
                        local_180._0_1_ = (char)local_c0;
                        local_180 = local_c0;
                        if ((char)local_180 == '\0') {
                          if (*(int *)(lVar20 + 0x18) != 1) goto LAB_0443c18c;
                          *param_5 = DAT_0920ac30;
                          local_180 = uVar15;
                          thunk_FUN_03f5d7b8(param_5);
                          goto LAB_0443ca60;
                        }
                        bVar2 = true;
                      }
                      else {
LAB_0443c18c:
                        bVar1 = (char)local_180 == '\0';
                        if (bVar1) {
                          if ((char)local_1a0 != '\0') {
                            FUN_05c3c1f8(&local_1a0,DAT_091b76d0);
                            if (-1 < extraout_x1) {
                              FUN_05c3c1f8(&local_1a0,DAT_091b76d0);
                              FUN_05c3c1f8(&local_1a0,DAT_091b76d0);
                              CookingGraph_CookingLevelSimulation__ToolAddress
                                        (&local_c0,extraout_x1_00 & 0xffffffff,
                                         extraout_x1_01 >> 0x20);
                              uStack_f8 = CONCAT44(uStack_b4,uStack_b8);
                              local_f0 = CONCAT44(uStack_ac,uStack_b0);
                              local_100 = local_c0;
                              FUN_05c2b3b8(&local_180,&local_100,DAT_091b6b80);
                              uVar15 = FUN_05c3c1f8(&local_1a0,DAT_091b76d0);
                              FUN_05c3c1f8(&local_1a0,DAT_091b76d0);
                              FUN_05c3c1f8(&local_1a0,DAT_091b76d0);
                              CookingGraph_CookingLevelSimulation__PlanEntry
                                        (param_1,lVar19,uVar15,extraout_x1_02 & 0xffffffff,
                                         extraout_x1_03 >> 0x20,*(undefined4 *)(lVar9 + 0x18),uVar10
                                        );
                              bVar2 = true;
                            }
                            bVar1 = (char)local_180 != '\0';
                            if (bVar1) goto LAB_0443c194;
                          }
                          uVar15 = FUN_06e81e58(lVar24,DAT_0919c810);
                          uVar17 = thunk_FUN_03f9944c(DAT_09179d80);
                          FUN_053d18e8(uVar17,uVar15,DAT_091a7ff0);
                          iVar8 = CookingGraph_CookingLevelSimulation__FreeCell(param_1,uVar17);
                          uVar4 = param_6 & iVar8 < 0;
                          iVar26 = local_4c4;
                          if (uVar4 == 0) {
                            iVar26 = iVar8;
                          }
                          if (-1 < iVar26) {
                            CookingGraph_CookingLevelSimulation__GridAddress(&local_c0);
                            uStack_f8 = CONCAT44(uStack_b4,uStack_b8);
                            local_f0 = CONCAT44(uStack_ac,uStack_b0);
                            local_100 = local_c0;
                            FUN_05c2b3b8(&local_180,&local_100,DAT_091b6b80);
                            *(int *)(lVar25 + 0x28) = *(int *)(lVar25 + 0x28) + 1;
                            if (lVar21 == 0) {
                              if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                FUN_03f5c550();
                              }
                              goto LAB_0443cf64;
                            }
                            if (*(long *)(lVar21 + 0x18) != 0) {
                              if (*(long *)(lVar25 + 0x20) == 0) {
                                if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c550();
                                }
                                goto LAB_0443cf64;
                              }
                              FUN_053e230c(*(long *)(lVar25 + 0x20),uVar10,DAT_091a8308);
                            }
                            lVar14 = DAT_091adc88;
                            lVar16 = *(long *)(lVar19 + 0x20);
                            if (lVar16 != 0) {
                              lVar23 = *(long *)(lVar16 + 0x10);
                              uVar3 = *(undefined4 *)(lVar9 + 0x18);
                              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                              if (lVar23 != 0) {
                                uVar5 = *(uint *)(lVar16 + 0x18);
                                local_4c4 = local_4c4 + uVar4;
                                if (uVar5 < *(uint *)(lVar23 + 0x18)) {
                                  *(uint *)(lVar16 + 0x18) = uVar5 + 1;
                                  *(undefined4 *)(lVar23 + (long)(int)uVar5 * 4 + 0x20) = uVar3;
                                }
                                else {
                                  FUN_057971a8(lVar16,uVar3,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                goto LAB_0443c194;
                              }
                            }
                            if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            goto LAB_0443cf64;
                          }
                          *param_5 = DAT_09208fb0;
                          thunk_FUN_03f5d7b8(param_5);
                          goto LAB_0443ca60;
                        }
                      }
LAB_0443c194:
                      FUN_05c2b3f4(&local_c0,&local_180,DAT_091b6b90);
                      uStack_f8 = CONCAT44(uStack_b4,uStack_b8);
                      local_f0 = CONCAT44(uStack_ac,uStack_b0);
                      local_100 = local_c0;
                      FUN_06e821f8(lVar24,&local_100,*(undefined4 *)(lVar9 + 0x18),DAT_0919c7f8);
                      lVar14 = *(long *)(lVar25 + 0x18);
                      CookingGraph_CookingLevelSimulation_QueueCell__get_Address(&local_c0,lVar9,0);
                      uStack_438 = CONCAT44(uStack_b4,uStack_b8);
                      local_430 = CONCAT44(uStack_ac,uStack_b0);
                      local_440 = local_c0;
                      FUN_05c2b3f4(&local_c0,&local_180,DAT_091b6b90);
                      uStack_378 = CONCAT44(uStack_b4,uStack_b8);
                      local_370 = CONCAT44(uStack_ac,uStack_b0);
                      local_90 = 0;
                      local_380 = local_c0;
                      uStack_98 = 0;
                      local_a0 = 0;
                      uStack_a8 = 0;
                      uStack_b0 = 0;
                      uStack_ac = 0;
                      uStack_b8 = 0;
                      uStack_b4 = 0;
                      local_c0 = 0;
                      uStack_358 = uStack_438;
                      local_360 = local_440;
                      local_350 = local_430;
                      CookingGraph_Execution_CookingTransferRequest___ctor
                                (&local_c0,&local_360,&local_380,uVar10,0);
                      if (lVar14 != 0) {
                        uStack_138 = CONCAT44(uStack_b4,uStack_b8);
                        uStack_130 = CONCAT44(uStack_ac,uStack_b0);
                        lVar16 = *(long *)(lVar14 + 0x10);
                        local_140 = local_c0;
                        uStack_128 = uStack_a8;
                        uStack_118 = uStack_98;
                        local_120 = local_a0;
                        local_110 = local_90;
                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                        if (lVar16 != 0) {
                          uVar4 = *(uint *)(lVar14 + 0x18);
                          if (uVar4 < *(uint *)(lVar16 + 0x18)) {
                            lVar16 = lVar16 + (long)(int)uVar4 * 0x38;
                            *(uint *)(lVar14 + 0x18) = uVar4 + 1;
                            *(undefined8 *)(lVar16 + 0x28) = uStack_138;
                            *(undefined8 *)(lVar16 + 0x20) = local_c0;
                            *(undefined8 *)(lVar16 + 0x38) = uStack_a8;
                            *(undefined8 *)(lVar16 + 0x30) = uStack_130;
                            *(undefined8 *)(lVar16 + 0x48) = uStack_98;
                            *(undefined8 *)(lVar16 + 0x40) = local_a0;
                            *(undefined8 *)(lVar16 + 0x50) = local_90;
                            thunk_FUN_03f5d7b8(lVar16 + 0x28,0);
                          }
                          else {
                            local_100 = local_c0;
                            uStack_e8 = uStack_a8;
                            uStack_d8 = uStack_98;
                            local_e0 = local_a0;
                            local_d0 = local_90;
                            uStack_f8 = uStack_138;
                            local_f0 = uStack_130;
                            FUN_057452c4(lVar14,&local_100,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(DAT_091ac090 + 0x20) + 0xc0) + 0x70))
                            ;
                          }
                          goto LAB_0443c65c;
                        }
                      }
                      if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_0443cf64;
                    }
                  }
                  goto LAB_0443ba9c;
                }
                FUN_07188164(&local_160,DAT_091a1f48);
                lVar9 = thunk_FUN_03f9944c(DAT_09179d80);
                FUN_053d18e8(lVar9,lVar13,DAT_091a7ff0);
                lVar19 = *(long *)(lVar25 + 0x18);
                if (lVar19 != 0) {
                  iVar26 = 0;
                  do {
                    if (*(int *)(lVar19 + 0x18) <= iVar26) goto LAB_0443b7c8;
                    lVar19 = thunk_FUN_03f9944c(DAT_0918f338);
                    CookingGraph_CookingLevelSimulation_<>c__DisplayClass121_0___ctor(lVar19,0);
                    if ((*(long *)(lVar25 + 0x18) == 0) ||
                       (FUN_05744f0c(&local_c0,*(long *)(lVar25 + 0x18),iVar26,DAT_091ac0c0),
                       lVar19 == 0)) break;
                    *(ulong *)(lVar19 + 0x18) = CONCAT44(uStack_b4,uStack_b8);
                    *(undefined8 *)(lVar19 + 0x10) = local_c0;
                    *(undefined8 *)(lVar19 + 0x28) = uStack_a8;
                    *(ulong *)(lVar19 + 0x20) = CONCAT44(uStack_ac,uStack_b0);
                    *(undefined8 *)(lVar19 + 0x38) = uStack_98;
                    *(undefined8 *)(lVar19 + 0x30) = local_a0;
                    *(undefined8 *)(lVar19 + 0x40) = local_90;
                    thunk_FUN_03f5d7b8(lVar19 + 0x18,0);
                    if (*(int *)(lVar19 + 0x28) == 2) {
                      if (*(long *)(lVar25 + 0x20) == 0) break;
                      uVar11 = FUN_053e1824(*(long *)(lVar25 + 0x20),*(undefined8 *)(lVar19 + 0x40),
                                            DAT_091a8318);
                      if ((uVar11 & 1) == 0) {
                        if (*(long *)(param_1 + 0x178) == 0) break;
                        uStack_398 = *(undefined8 *)(lVar19 + 0x18);
                        local_3a0 = *(undefined8 *)(lVar19 + 0x10);
                        local_390 = *(undefined8 *)(lVar19 + 0x20);
                        uVar10 = CookingGraph_Execution_CookingExecution__UnitsAt
                                           (*(long *)(param_1 + 0x178),&local_3a0,0);
                        uVar15 = thunk_FUN_03f9944c(DAT_09178768);
                        FUN_053136a4(uVar15,lVar19,DAT_091e7b28,0);
                        FUN_04ae2788(&local_c0,uVar10,uVar15,DAT_091c9b00);
                        uVar3 = uStack_b8;
                        uVar10 = local_c0;
                        local_88 = CONCAT44(uStack_b0,uStack_b4);
                        local_80 = uStack_ac;
                        if ((*(long *)(param_1 + 0x180) == 0) ||
                           (lVar13 = *(long *)(*(long *)(param_1 + 0x180) + 0x40), lVar13 == 0))
                        break;
                        uVar11 = CookingGraph_Execution_CookingExecutionConfig__get_WholeDish
                                           (lVar13,0);
                        if ((uVar11 & 1) == 0) {
                          CookingGraph_CookingLevelSimulation__ServeTarget
                                    (&local_c0,param_1,uVar3,lVar9);
                          uStack_1f8 = CONCAT44(uStack_b4,uStack_b8);
                          uStack_1f0 = CONCAT44(uStack_ac,uStack_b0);
                          local_200 = local_c0;
                          uVar10 = local_200;
                          uStack_1e8 = uStack_a8;
                          local_200._0_1_ = (char)local_c0;
                          bVar2 = (char)local_200 != '\0';
                          local_200 = uVar10;
                          if (bVar2) {
                            FUN_05c2b3f4(&local_290,&local_200,DAT_091b6b90);
                            if (lVar9 == 0) break;
                            uStack_b8 = (undefined4)uStack_288;
                            uStack_b4 = (undefined4)((ulong)uStack_288 >> 0x20);
                            local_c0 = local_290;
                            uStack_b0 = (undefined4)local_280;
                            uStack_ac = (undefined4)((ulong)local_280 >> 0x20);
                            FUN_053d2af8(lVar9,&local_c0,DAT_091a7ff8);
                            local_3e0 = *(undefined8 *)(lVar19 + 0x20);
                            puStack_3e8 = *(undefined8 **)(lVar19 + 0x18);
                            local_3f0 = *(undefined8 *)(lVar19 + 0x10);
                            lVar13 = *(long *)(lVar25 + 0x18);
                            FUN_05c2b3f4(&local_408,&local_200,DAT_091b6b90);
                            puStack_458 = puStack_3e8;
                            local_460 = local_3f0;
                            local_450 = local_3e0;
                            local_410 = 0;
                            uStack_428 = 0;
                            local_430 = 0;
                            uStack_418 = 0;
                            local_420 = 0;
                            uStack_438 = 0;
                            local_440 = 0;
                            uStack_478 = uStack_400;
                            local_480 = local_408;
                            local_470 = local_3f8;
                            CookingGraph_Execution_CookingTransferRequest___ctor
                                      (&local_440,&local_460,&local_480,
                                       *(undefined8 *)(lVar19 + 0x40),0);
                            if (lVar13 == 0) break;
                            uStack_b8 = (undefined4)uStack_438;
                            uStack_b4 = (undefined4)((ulong)uStack_438 >> 0x20);
                            local_c0 = local_440;
                            uStack_a8 = uStack_428;
                            uStack_b0 = (undefined4)local_430;
                            uStack_ac = (undefined4)((ulong)local_430 >> 0x20);
                            uStack_98 = uStack_418;
                            local_a0 = local_420;
                            local_90 = local_410;
                            FUN_05744f7c(lVar13,iVar26,&local_c0,DAT_091ac0c8);
                          }
                        }
                        else if (bVar7) {
LAB_0443c8fc:
                          bVar7 = true;
                        }
                        else {
                          if (lVar12 == 0) break;
                          uVar11 = FUN_053e1824(lVar12,uVar10,DAT_091a8318);
                          if ((uVar11 & 1) == 0) {
                            uStack_3c8 = *(undefined8 *)(lVar19 + 0x18);
                            local_3d0 = *(undefined8 *)(lVar19 + 0x10);
                            local_3ac = local_88;
                            local_3c0 = *(undefined8 *)(lVar19 + 0x20);
                            local_3a4 = local_80;
                            uStack_3b8 = uVar10;
                            local_3b0 = uVar3;
                            lVar19 = CookingGraph_CookingLevelSimulation__PlanWholeDishCapture
                                               (param_1,&uStack_3b8,&local_3d0,
                                                *(undefined8 *)(lVar25 + 0x18));
                            if (lVar19 != 0) {
                              if (*(long *)(lVar25 + 0x18) != 0) {
                                FUN_0574703c(*(long *)(lVar25 + 0x18),iVar26,DAT_091ac0b0);
                                if (*(long *)(lVar25 + 0x18) != 0) {
                                  FUN_05746794(*(long *)(lVar25 + 0x18),iVar26,lVar19,DAT_091ac0a8);
                                  *(int *)(lVar25 + 0x28) = *(int *)(lVar25 + 0x28) + -1;
                                  iVar26 = iVar26 + *(int *)(lVar19 + 0x18) + -1;
                                  goto LAB_0443c8fc;
                                }
                              }
                              break;
                            }
                          }
                          bVar7 = false;
                        }
                      }
                    }
                    lVar19 = *(long *)(lVar25 + 0x18);
                    iVar26 = iVar26 + 1;
                  } while (lVar19 != 0);
                }
              }
            }
            goto LAB_0443ca30;
          }
          puVar18 = &DAT_09206900;
        }
        else {
          puVar18 = &DAT_09202f58;
        }
      }
      else {
LAB_0443b894:
        puVar18 = &DAT_09206e78;
      }
    }
  }
  else {
    puVar18 = &DAT_09206cb8;
  }
  *param_5 = *puVar18;
  thunk_FUN_03f5d7b8(param_5);
LAB_0443b7c4:
  lVar25 = 0;
LAB_0443b7c8:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return lVar25;
  }
LAB_0443cf64:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


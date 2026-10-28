// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$PlanOutputSwaps
// address: 0x446c3c8
// body: available
// range: 0x446c3c8-0x446ce7b inclusive
// range: 0x446ce80-0x446ce83 inclusive
// range: 0x446ce88-0x446ce8b inclusive
// range: 0x446ce90-0x446ce93 inclusive
// range: 0x446cf10-0x446d1c3 inclusive
// range: 0x446d1c8-0x446d1cb inclusive
// range: 0x446d1d0-0x446d1d3 inclusive
// range: 0x446d1d8-0x446d1db inclusive
// range: 0x446d1e0-0x446d1e3 inclusive
// range: 0x446d1e8-0x446d1eb inclusive
// range: 0x446d270-0x446d3bb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x446ce78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446ce80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446ce88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446ce90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446d1c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446d1c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446d1d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446d1d8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446d1e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446d1e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446d3ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446d3b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0446ce68) */
/* WARNING: Removing unreachable block (ram,0x0446cf90) */
/* WARNING: Removing unreachable block (ram,0x0446d334) */

long CookingGraph_CookingLevelSimulation__PlanOutputSwaps
               (long param_1,int param_2,undefined4 param_3,undefined8 *param_4,long param_5,
               undefined8 param_6,long param_7,uint param_8)

{
  bool bVar1;
  uint uVar2;
  long **pplVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  int extraout_w1;
  long extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong local_450;
  long local_408;
  long **pplStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  long local_3d0;
  long **pplStack_3c8;
  undefined8 local_3c0;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  long local_390;
  long **pplStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  long local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  long local_2f0;
  long **pplStack_2e8;
  undefined8 local_2e0;
  long local_2d0;
  long **pplStack_2c8;
  undefined8 local_2c0;
  long local_2b0;
  long **pplStack_2a8;
  undefined8 local_2a0;
  long local_290;
  long **pplStack_288;
  undefined8 local_280;
  long local_270;
  long **pplStack_268;
  undefined8 local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  long local_1e0;
  long **pplStack_1d8;
  undefined8 local_1d0;
  long local_1c0;
  long **pplStack_1b8;
  undefined8 local_1b0;
  long *local_1a8;
  long local_1a0;
  long **pplStack_198;
  undefined8 local_190;
  long *local_188;
  long local_180;
  long **pplStack_178;
  undefined8 local_170;
  long local_160;
  long **pplStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long local_120;
  long **pplStack_118;
  undefined8 local_110;
  long local_100;
  long **pplStack_f8;
  undefined8 local_f0;
  long local_e0;
  long **pplStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_a0;
  long **pplStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0951805d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c7f8);
    FUN_03f5c2a4(&DAT_0919e608);
    FUN_03f5c2a4(&DAT_0919e628);
    FUN_03f5c2a4(&DAT_091ca3b0);
    FUN_03f5c2a4(&DAT_091a6318);
    FUN_03f5c2a4(&DAT_091a6320);
    FUN_03f5c2a4(&DAT_091a6328);
    FUN_03f5c2a4(&DAT_09178770);
    FUN_03f5c2a4(&DAT_091a7ff8);
    FUN_03f5c2a4(&DAT_091a8000);
    FUN_03f5c2a4(&DAT_091a7ff0);
    FUN_03f5c2a4(&DAT_09179d80);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a480);
    FUN_03f5c2a4(&DAT_0917a5c0);
    FUN_03f5c2a4(&DAT_0917ab28);
    FUN_03f5c2a4(&DAT_0917ac88);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091a9600);
    FUN_03f5c2a4(&DAT_091a9608);
    FUN_03f5c2a4(&DAT_091adc90);
    FUN_03f5c2a4(&DAT_091ac090);
    FUN_03f5c2a4(&DAT_091ac088);
    FUN_03f5c2a4(&DAT_091ac0b8);
    FUN_03f5c2a4(&DAT_0917bf78);
    FUN_03f5c2a4(&DAT_091b6bb0);
    FUN_03f5c2a4(&DAT_091b6960);
    FUN_03f5c2a4(&DAT_091b76c8);
    FUN_03f5c2a4(&DAT_091b6bb8);
    FUN_03f5c2a4(&DAT_091b6bc0);
    FUN_03f5c2a4(&DAT_091b76d0);
    FUN_03f5c2a4(&DAT_0918f698);
    FUN_03f5c2a4(&DAT_091e77b0);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091bec98);
    DAT_0951805d = 1;
  }
  local_220 = param_4[2];
  local_170 = 0;
  local_180 = 0;
  pplStack_178 = (long **)0x0;
  uStack_208 = 0;
  local_210 = 0;
  local_1f8 = 0;
  local_200 = 0;
  pplStack_158 = (long **)0x0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_228 = param_4[1];
  local_230 = *param_4;
  local_188 = (long *)0x0;
  local_190 = 0;
  local_1a0 = 0;
  pplStack_198 = (long **)0x0;
  local_1a8 = (long *)0x0;
  pplStack_1b8 = (long **)0x0;
  local_1c0 = 0;
  local_1b0 = 0;
  pplStack_1d8 = (long **)0x0;
  local_1e0 = 0;
  local_1d0 = 0;
  local_1f0 = 0;
  uVar5 = CookingGraph_CookingLevelSimulation__Outgoing(param_1,&local_230);
  if ((uVar5 & 1) == 0) {
    uStack_248 = param_4[1];
    local_250 = *param_4;
    local_240 = param_4[2];
    uVar5 = CookingGraph_CookingLevelSimulation__Incoming(param_1,&local_250);
    if ((uVar5 & 1) == 0) {
      lVar6 = thunk_FUN_03f9944c(DAT_0917bf78);
      FUN_05744974(lVar6,DAT_091ac088);
      lVar7 = thunk_FUN_03f9944c(DAT_09179d80);
      FUN_053d18e8(lVar7,param_6,DAT_091a7ff0);
      lVar8 = thunk_FUN_03f9944c(DAT_0918f698);
      CookingGraph_CookingLevelSimulation_RoutePlan___ctor(lVar8,0);
      if (lVar8 != 0) {
        lVar15 = *(long *)(lVar8 + 0x20);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar11 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar16 = puVar11[0x96];
        if (lVar16 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar11 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar17 = *puVar11;
          lVar16 = thunk_FUN_03f9944c(DAT_09178770);
          FUN_05313d88(lVar16,uVar17,DAT_091e77b0,0);
          lVar12 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar12 + 0x4b0) = lVar16;
          thunk_FUN_03f5d7b8(lVar12 + 0x4b0,lVar16);
        }
        uVar17 = FUN_04af1108(param_5,lVar16,DAT_091ca3b0);
        if ((lVar15 != 0) && (FUN_057973b4(lVar15,uVar17,DAT_091adc90), param_5 != 0)) {
          if (0 < (int)*(ulong *)(param_5 + 0x18)) {
            uVar5 = 0;
            uVar13 = *(ulong *)(param_5 + 0x18) & 0xffffffff;
            do {
              if (uVar13 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              pplStack_158 = (long **)0x0;
              local_160 = 0;
              uStack_148 = 0;
              uStack_150 = 0;
              uStack_138 = 0;
              local_140 = 0;
              uStack_128 = 0;
              uStack_130 = 0;
              local_170 = 0;
              local_180 = 0;
              pplStack_178 = (long **)0x0;
              uVar17 = *(undefined8 *)(param_5 + uVar5 * 0x18 + 0x20);
              if ((param_8 & 1) == 0) {
                plVar9 = (long *)CookingGraph_CookingLevelSimulation__ProcessGridOrder(param_1);
              }
              else {
                if (*(long *)(param_1 + 0x90) == 0) goto LAB_0446d3ac;
                plVar9 = (long *)System_Linq_Enumerable__Range
                                           (0,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x18),0);
              }
              if (plVar9 == (long *)0x0) goto LAB_0446d3ac;
              lVar15 = *plVar9;
              uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == DAT_0917a5c0) {
                    puVar11 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_0446c888;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a5c0,0);
LAB_0446c888:
              plVar9 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
              pplStack_388 = &local_188;
              local_390 = 0;
              lVar15 = local_408;
joined_r0x0446c8a4:
              local_408 = lVar15;
              local_188 = plVar9;
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar15 = *plVar9;
              uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == DAT_09185b10) {
                    puVar11 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_0446c8f4;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_0446c8f4:
              uVar13 = (*(code *)*puVar11)(plVar9,puVar11[1]);
              plVar9 = local_188;
              if ((uVar13 & 1) != 0) {
                if (local_188 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar15 = *local_188;
                uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == DAT_0917ac88) {
                      puVar11 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_0446c958;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar11 = (undefined8 *)FUN_03f95da8(local_188,DAT_0917ac88,0);
LAB_0446c958:
                iVar4 = (*(code *)*puVar11)(plVar9,puVar11[1]);
                if ((char)local_160 != '\0') goto LAB_0446cf10;
                CookingGraph_CookingLevelSimulation__GridAddress(&local_330);
                pplStack_198 = uStack_328;
                local_1a0 = local_330;
                local_190 = local_320;
                plVar9 = local_188;
                lVar15 = local_408;
                if ((iVar4 != *(int *)(param_1 + 0x16c)) &&
                   (uVar13 = CookingGraph_CookingLevelSimulation__IsCellUsable(param_1,iVar4),
                   plVar9 = local_188, lVar15 = local_408, (uVar13 & 1) != 0)) {
                  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  pplStack_118 = pplStack_198;
                  local_120 = local_1a0;
                  local_110 = local_190;
                  uVar13 = FUN_053d1f44(lVar7,&local_120,DAT_091a8000);
                  plVar9 = local_188;
                  lVar15 = local_408;
                  if ((uVar13 & 1) == 0) {
                    pplStack_268 = pplStack_198;
                    local_270 = local_1a0;
                    local_260 = local_190;
                    uVar13 = CookingGraph_CookingLevelSimulation__Outgoing(param_1,&local_270);
                    plVar9 = local_188;
                    lVar15 = local_408;
                    if ((uVar13 & 1) == 0) {
                      pplStack_288 = pplStack_198;
                      local_290 = local_1a0;
                      local_280 = local_190;
                      uVar13 = CookingGraph_CookingLevelSimulation__Incoming(param_1,&local_290);
                      plVar9 = local_188;
                      lVar15 = local_408;
                      if (((uVar13 & 1) == 0) &&
                         (uVar13 = CookingGraph_CookingLevelSimulation__MomentHeld(param_1,iVar4),
                         plVar9 = local_188, lVar15 = local_408, (uVar13 & 1) == 0)) {
                        if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        pplStack_2a8 = pplStack_198;
                        local_2b0 = local_1a0;
                        local_2a0 = local_190;
                        plVar9 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt
                                                   (*(long *)(param_1 + 0x178),&local_2b0,0);
                        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar15 = *plVar9;
                        uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
                        if (uVar13 != 0) {
                          piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) == DAT_0917a480) {
                              puVar11 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                              goto LAB_0446caa4;
                            }
                            uVar13 = uVar13 - 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 != 0);
                        }
                        puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a480,0);
LAB_0446caa4:
                        plVar9 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
                        pplStack_400 = &local_1a8;
                        local_408 = 0;
                        do {
                          do {
                            do {
                              local_1a8 = plVar9;
                              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_03f5c550();
                              }
                              lVar15 = *plVar9;
                              uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
                              if (uVar13 != 0) {
                                piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar14 + -2) == DAT_09185b10) {
                                    puVar11 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138)
                                    ;
                                    goto LAB_0446cb10;
                                  }
                                  uVar13 = uVar13 - 1;
                                  piVar14 = piVar14 + 4;
                                } while (uVar13 != 0);
                              }
                              puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_0446cb10:
                              uVar13 = (*(code *)*puVar11)(plVar9,puVar11[1]);
                              plVar9 = local_1a8;
                              if ((uVar13 & 1) == 0) goto LAB_0446cdec;
                              if (local_1a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_03f5c550();
                              }
                              lVar15 = *local_1a8;
                              uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
                              if (uVar13 != 0) {
                                piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar14 + -2) == DAT_0917ab28) {
                                    puVar11 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138)
                                    ;
                                    goto LAB_0446cb74;
                                  }
                                  uVar13 = uVar13 - 1;
                                  piVar14 = piVar14 + 4;
                                } while (uVar13 != 0);
                              }
                              puVar11 = (undefined8 *)FUN_03f95da8(local_1a8,DAT_0917ab28,0);
LAB_0446cb74:
                              (*(code *)*puVar11)(&local_330,plVar9,puVar11[1]);
                              pplVar3 = uStack_328;
                              lVar15 = local_330;
                              plVar9 = local_1a8;
                            } while (uStack_328._4_4_ != 0);
                            if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            uVar13 = CookingGraph_Execution_CookingExecution__IsUnitClaimed
                                               (*(long *)(param_1 + 0x178),local_330,0);
                            plVar9 = local_1a8;
                          } while (((uVar13 & 1) != 0) ||
                                  (uVar13 = CookingGraph_CookingLevelSimulation__Preservable
                                                      (param_1,(ulong)pplVar3 & 0xffffffff),
                                  plVar9 = local_1a8, (uVar13 & 1) != 0));
                          local_120 = 0;
                          FUN_066c1fdc(&local_120,param_2,param_3,DAT_091bec98);
                          pplStack_98 = (long **)((ulong)pplStack_98 & 0xffffffff00000000);
                          local_a0 = 0;
                          FUN_05c25e3c(&local_a0,local_120,DAT_091b6960);
                          local_450 = local_450 & 0xffffffff00000000 |
                                      (ulong)pplStack_98 & 0xffffffff;
                          CookingGraph_CookingLevelSimulation__RouteProcess
                                    (&local_330,param_1,(ulong)pplVar3 & 0xffffffff,lVar8,local_a0,
                                     local_450,1);
                          pplStack_1b8 = uStack_328;
                          local_1c0 = local_330;
                          lVar16 = local_1c0;
                          local_1c0._0_1_ = (char)local_330;
                          local_1b0 = local_320;
                          bVar1 = (char)local_1c0 == '\0';
                          plVar9 = local_1a8;
                        } while ((bVar1) ||
                                ((local_1c0 = lVar16, FUN_05c3c1f8(&local_1c0,DAT_091b76d0),
                                 plVar9 = local_1a8, extraout_w1 != param_2 ||
                                 (FUN_05c3c1f8(&local_1c0,DAT_091b76d0), plVar9 = local_1a8,
                                 extraout_x1 < 0))));
                        FUN_05c3c1f8(&local_1c0,DAT_091b76d0);
                        CookingGraph_CookingLevelSimulation__ToolAddress
                                  (&local_330,param_2,extraout_x1_00 >> 0x20);
                        pplStack_1d8 = uStack_328;
                        local_1e0 = local_330;
                        local_1d0 = local_320;
                        if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        pplStack_f8 = uStack_328;
                        local_100 = local_330;
                        local_f0 = local_320;
                        FUN_06e821f8(*(long *)(lVar8 + 0x10),&local_100,(ulong)pplVar3 & 0xffffffff,
                                     DAT_0919c7f8);
                        uVar10 = FUN_05c3c1f8(&local_1c0,DAT_091b76d0);
                        FUN_05c3c1f8(&local_1c0,DAT_091b76d0);
                        CookingGraph_CookingLevelSimulation__PlanEntry
                                  (param_1,lVar8,uVar10,param_2,extraout_x1_01 >> 0x20,
                                   (ulong)pplVar3 & 0xffffffff,lVar15);
                        local_70 = 0;
                        pplStack_2c8 = pplStack_198;
                        local_2d0 = local_1a0;
                        local_2c0 = local_190;
                        pplStack_2e8 = pplStack_1d8;
                        local_2f0 = local_1e0;
                        local_2e0 = local_1d0;
                        uStack_88 = 0;
                        local_90 = 0;
                        uStack_78 = 0;
                        local_80 = 0;
                        pplStack_98 = (long **)0x0;
                        local_a0 = 0;
                        CookingGraph_Execution_CookingTransferRequest___ctor
                                  (&local_a0,&local_2d0,&local_2f0,lVar15,0);
                        uStack_b8 = uStack_78;
                        local_c0 = local_80;
                        uStack_328 = (long **)0x0;
                        local_330 = 0;
                        uStack_318 = 0;
                        local_320 = 0;
                        uStack_308 = 0;
                        local_310 = 0;
                        uStack_2f8 = 0;
                        local_300 = 0;
                        pplStack_d8 = pplStack_98;
                        local_e0 = local_a0;
                        uStack_c8 = uStack_88;
                        uStack_d0 = local_90;
                        local_b0 = local_70;
                        FUN_05c2b824(&local_330,&local_e0,DAT_091b6bb0);
                        pplStack_158 = uStack_328;
                        local_160 = local_330;
                        uStack_148 = uStack_318;
                        uStack_150 = local_320;
                        local_170 = local_190;
                        uStack_138 = uStack_308;
                        local_140 = local_310;
                        uStack_128 = uStack_2f8;
                        uStack_130 = local_300;
                        pplStack_178 = pplStack_198;
                        local_180 = local_1a0;
LAB_0446cdec:
                        plVar9 = *pplStack_400;
                        if (plVar9 != (long *)0x0) {
                          lVar15 = *plVar9;
                          uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
                          if (uVar13 != 0) {
                            piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar14 + -2) == DAT_09185a58) {
                                puVar11 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                                goto LAB_0446ce4c;
                              }
                              uVar13 = uVar13 - 1;
                              piVar14 = piVar14 + 4;
                            } while (uVar13 != 0);
                          }
                          puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185a58,0);
LAB_0446ce4c:
                          (*(code *)*puVar11)(plVar9,puVar11[1]);
                        }
                        plVar9 = local_188;
                        lVar15 = 0;
                        if (local_408 != 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c548();
                        }
                      }
                    }
                  }
                }
                goto joined_r0x0446c8a4;
              }
LAB_0446cf10:
              plVar9 = *pplStack_388;
              if (plVar9 != (long *)0x0) {
                lVar15 = *plVar9;
                uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == DAT_09185a58) {
                      puVar11 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_0446cf74;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185a58,0);
LAB_0446cf74:
                (*(code *)*puVar11)(plVar9,puVar11[1]);
              }
              if (local_390 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c548();
              }
              if ((char)local_160 == '\0') {
                if ((*(long *)(param_1 + 0x180) != 0) &&
                   (lVar6 = *(long *)(*(long *)(param_1 + 0x180) + 0x48), lVar6 != 0)) {
                  if (*(char *)(lVar6 + 0x12) == '\0') {
                    uVar5 = CookingGraph_CookingLevelSimulation__get_UrgentFirst(param_1);
                    if ((uVar5 & 1) == 0) {
                      return 0;
                    }
                    if ((param_8 & 1) != 0) {
                      return 0;
                    }
                  }
                  else if ((param_8 & 1) != 0) {
                    return 0;
                  }
                  uStack_348 = param_4[1];
                  local_350 = *param_4;
                  local_340 = param_4[2];
                  lVar6 = CookingGraph_CookingLevelSimulation__PlanOutputSwaps
                                    (param_1,param_2,param_3,&local_350,param_5,param_6,param_7,1);
                  return lVar6;
                }
                goto LAB_0446d3ac;
              }
              if (lVar7 == 0) goto LAB_0446d3ac;
              uStack_328 = pplStack_178;
              local_330 = local_180;
              local_320 = local_170;
              FUN_053d2af8(lVar7,&local_330,DAT_091a7ff8);
              uStack_3a8 = param_4[1];
              local_3b0 = *param_4;
              local_3a0 = param_4[2];
              pplStack_3c8 = pplStack_178;
              local_3d0 = local_180;
              local_3c0 = local_170;
              local_360 = 0;
              uStack_378 = 0;
              local_380 = 0;
              uStack_368 = 0;
              uStack_370 = 0;
              pplStack_388 = (long **)0x0;
              local_390 = 0;
              CookingGraph_Execution_CookingTransferRequest___ctor
                        (&local_390,&local_3b0,&local_3d0,uVar17,0);
              lVar15 = DAT_091ac090;
              if (lVar6 == 0) goto LAB_0446d3ac;
              uStack_88 = uStack_378;
              local_90 = local_380;
              uStack_78 = uStack_368;
              local_80 = uStack_370;
              local_70 = local_360;
              pplStack_98 = pplStack_388;
              local_a0 = local_390;
              lVar16 = *(long *)(lVar6 + 0x10);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_0446d3ac;
              uVar2 = *(uint *)(lVar6 + 0x18);
              if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                lVar16 = lVar16 + (long)(int)uVar2 * 0x38;
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                *(long ***)(lVar16 + 0x28) = pplStack_388;
                *(long *)(lVar16 + 0x20) = local_390;
                *(undefined8 *)(lVar16 + 0x38) = uStack_378;
                *(undefined8 *)(lVar16 + 0x30) = local_380;
                *(undefined8 *)(lVar16 + 0x48) = uStack_368;
                *(undefined8 *)(lVar16 + 0x40) = uStack_370;
                *(undefined8 *)(lVar16 + 0x50) = local_360;
                thunk_FUN_03f5d7b8(lVar16 + 0x28,0);
              }
              else {
                uStack_328 = pplStack_388;
                local_330 = local_390;
                uStack_318 = uStack_378;
                local_320 = local_380;
                uStack_308 = uStack_368;
                local_310 = uStack_370;
                local_300 = local_360;
                FUN_057452c4(lVar6,&local_330,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              FUN_05c2b86c(&local_408,&local_160,DAT_091b6bc0);
              lVar15 = DAT_091ac090;
              uStack_88 = uStack_3f0;
              local_90 = local_3f8;
              uStack_78 = uStack_3e0;
              local_80 = local_3e8;
              local_70 = local_3d8;
              pplStack_98 = pplStack_400;
              local_a0 = local_408;
              lVar16 = *(long *)(lVar6 + 0x10);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_0446d3ac;
              uVar2 = *(uint *)(lVar6 + 0x18);
              if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                lVar16 = lVar16 + (long)(int)uVar2 * 0x38;
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                *(long ***)(lVar16 + 0x28) = pplStack_400;
                *(long *)(lVar16 + 0x20) = local_408;
                *(undefined8 *)(lVar16 + 0x38) = uStack_3f0;
                *(undefined8 *)(lVar16 + 0x30) = local_3f8;
                *(undefined8 *)(lVar16 + 0x48) = uStack_3e0;
                *(undefined8 *)(lVar16 + 0x40) = local_3e8;
                *(undefined8 *)(lVar16 + 0x50) = local_3d8;
                thunk_FUN_03f5d7b8(lVar16 + 0x28,0);
              }
              else {
                uStack_328 = pplStack_400;
                local_330 = local_408;
                uStack_318 = uStack_3f0;
                local_320 = local_3f8;
                uStack_308 = uStack_3e0;
                local_310 = local_3e8;
                local_300 = local_3d8;
                FUN_057452c4(lVar6,&local_330,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              uVar5 = uVar5 + 1;
              uVar13 = (ulong)*(uint *)(param_5 + 0x18);
            } while ((long)uVar5 < (long)(int)*(uint *)(param_5 + 0x18));
          }
          if (lVar6 != 0) {
            if (*(int *)(lVar6 + 0x18) == 0) {
              return 0;
            }
            if (*(long *)(lVar8 + 0x28) != 0) {
              FUN_06f53808(&local_210,*(long *)(lVar8 + 0x28),DAT_0919e608);
              local_330 = 0;
              uStack_328 = (long **)&local_210;
              while( true ) {
                uVar5 = FUN_0726677c(&local_210,DAT_091a6320);
                if ((uVar5 & 1) == 0) {
                  FUN_0726689c(&local_210,DAT_091a6318);
                  return lVar6;
                }
                if (param_7 == 0) break;
                FUN_06f533bc(param_7,local_200,local_1f8,DAT_0919e628);
              }
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
        }
      }
LAB_0446d3ac:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return 0;
}


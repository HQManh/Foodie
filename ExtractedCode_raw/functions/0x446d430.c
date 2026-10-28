// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$Reclaim
// address: 0x446d430
// body: available
// range: 0x446d430-0x446dbe7 inclusive
// range: 0x446dbec-0x446dc07 inclusive
// range: 0x446dc0c-0x446dc23 inclusive
// range: 0x446dc28-0x446dc3f inclusive
// range: 0x446dcc4-0x446dd6f inclusive
// range: 0x446dd74-0x446dd8b inclusive
// range: 0x446dd90-0x446dda7 inclusive
// range: 0x446ddac-0x446ddc7 inclusive
// range: 0x446de44-0x446e5a7 inclusive
// range: 0x446e5ac-0x446e5c3 inclusive
// range: 0x446e5c8-0x446e5df inclusive
// range: 0x446e5e4-0x446e5fb inclusive
// range: 0x446e600-0x446e617 inclusive
// range: 0x446e61c-0x446e633 inclusive
// range: 0x446e638-0x446e64f inclusive
// range: 0x446e6e0-0x446e7e3 inclusive
// range: 0x446e824-0x446e827 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x446dbe4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446dc04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446dc20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446dc3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446dd6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446dd88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446dda4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446ddc4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446e5a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446e5c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446e5dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x446e5f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0446e584) */
/* WARNING: Removing unreachable block (ram,0x0446e588) */
/* WARNING: Removing unreachable block (ram,0x0446dd44) */
/* WARNING: Removing unreachable block (ram,0x0446dbcc) */
/* WARNING: Removing unreachable block (ram,0x0446ddc0) */

void CookingGraph_CookingLevelSimulation__Reclaim(long param_1)

{
  uint uVar1;
  long lVar2;
  long **pplVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  int extraout_w1;
  long extraout_x1;
  ulong extraout_x1_00;
  long extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  int iVar20;
  ulong unaff_x24;
  ulong local_3a0;
  long local_380;
  long **pplStack_378;
  undefined8 local_370;
  int local_368 [4];
  undefined4 local_358;
  undefined4 uStack_354;
  long local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  ulong uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  long local_310;
  long **local_308;
  int local_300 [4];
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  int local_2e8 [4];
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  long local_2d0;
  long *local_2c8;
  long local_2c0;
  long **pplStack_2b8;
  undefined8 local_2b0;
  long local_2a0;
  long **pplStack_298;
  undefined8 local_290;
  long local_280;
  long **pplStack_278;
  undefined8 local_270;
  long local_260;
  long **pplStack_258;
  undefined8 local_250;
  long local_240;
  long **pplStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  long local_220;
  long **pplStack_218;
  undefined8 local_210;
  long local_200;
  long **pplStack_1f8;
  int local_1f0;
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  long local_1d0;
  long **pplStack_1c8;
  undefined8 local_1c0;
  long *local_1b8;
  long local_1b0;
  long **pplStack_1a8;
  undefined8 local_1a0;
  long *local_198;
  long local_190;
  long **pplStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long local_150;
  long **pplStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long local_110;
  long **pplStack_108;
  undefined8 local_100;
  long local_f0;
  long **pplStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b0;
  long **pplStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_0951805e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6848);
    FUN_03f5c2a4(&DAT_0919e5f8);
    FUN_03f5c2a4(&DAT_0919e628);
    FUN_03f5c2a4(&DAT_09176710);
    FUN_03f5c2a4(&DAT_091ca558);
    FUN_03f5c2a4(&DAT_091a2750);
    FUN_03f5c2a4(&DAT_091a2758);
    FUN_03f5c2a4(&DAT_091a2760);
    FUN_03f5c2a4(&DAT_09178ba8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a480);
    FUN_03f5c2a4(&DAT_0917a5c0);
    FUN_03f5c2a4(&DAT_0917ab28);
    FUN_03f5c2a4(&DAT_0917ac88);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091abf20);
    FUN_03f5c2a4(&DAT_091ac090);
    FUN_03f5c2a4(&DAT_091abf18);
    FUN_03f5c2a4(&DAT_091abf28);
    FUN_03f5c2a4(&DAT_091abf10);
    FUN_03f5c2a4(&DAT_091ac088);
    FUN_03f5c2a4(&DAT_0917bf78);
    FUN_03f5c2a4(&DAT_0917bf20);
    FUN_03f5c2a4(&DAT_091b6b80);
    FUN_03f5c2a4(&DAT_091b76c8);
    FUN_03f5c2a4(&DAT_091b6b88);
    FUN_03f5c2a4(&DAT_091b6b90);
    FUN_03f5c2a4(&DAT_091b76d0);
    DAT_0951805e = 1;
  }
  lVar13 = *(long *)(param_1 + 0x78);
  local_198 = (long *)0x0;
  local_1a0 = 0;
  local_1b0 = 0;
  pplStack_1a8 = (long **)0x0;
  local_1b8 = (long *)0x0;
  local_1d0 = 0;
  pplStack_1c8 = (long **)0x0;
  local_1c0 = 0;
  local_1e0 = 0;
  pplStack_1f8 = (long **)0x0;
  local_200 = 0;
  uStack_1e8 = 0;
  local_1e4 = 0;
  local_1f0 = 0;
  local_1ec = 0;
  local_78 = 0;
  local_70 = 0;
  local_220 = 0;
  pplStack_218 = (long **)0x0;
  local_210 = 0;
  pplStack_238 = (long **)0x0;
  local_240 = 0;
  uStack_228 = 0;
  local_230 = 0;
  if (lVar13 != 0) {
    iVar20 = 0;
LAB_0446d630:
    if (*(long *)(lVar13 + 0x20) != 0) {
      if (iVar20 < *(int *)(*(long *)(lVar13 + 0x20) + 0x18)) {
        plVar8 = (long *)CookingGraph_CookingLevelSimulation__ProcessPreservationOrder
                                   (param_1,iVar20);
        if (plVar8 != (long *)0x0) {
          lVar13 = *plVar8;
          uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == DAT_0917a5c0) {
                puVar9 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_0446d6ac;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a5c0,0);
LAB_0446d6ac:
          local_198 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
          local_f0 = 0;
          pplStack_e8 = &local_198;
LAB_0446d6c4:
          do {
            plVar8 = local_198;
            if (local_198 == (long *)0x0) {
              if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_0446e824;
            }
            lVar13 = *local_198;
            uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == DAT_09185b10) {
                  puVar9 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_0446d718;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(local_198,DAT_09185b10,0);
LAB_0446d718:
            uVar17 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            plVar8 = local_198;
            if ((uVar17 & 1) == 0) goto LAB_0446dcc4;
            if (local_198 == (long *)0x0) {
              if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_0446e824;
            }
            lVar13 = *local_198;
            uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == DAT_0917ac88) {
                  puVar9 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_0446d77c;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(local_198,DAT_0917ac88,0);
LAB_0446d77c:
            uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            CookingGraph_CookingLevelSimulation__ToolAddress(&local_b0,iVar20,uVar7);
            pplStack_1a8 = pplStack_a8;
            local_1b0 = local_b0;
            local_1a0 = local_a0;
            pplStack_258 = pplStack_a8;
            local_260 = local_b0;
            local_250 = local_a0;
            uVar17 = CookingGraph_CookingLevelSimulation__Outgoing(param_1,&local_260);
            if ((uVar17 & 1) == 0) {
              pplStack_278 = pplStack_1a8;
              local_280 = local_1b0;
              local_270 = local_1a0;
              plVar8 = (long *)CookingGraph_CookingLevelSimulation__ProcessUnits(param_1,&local_280)
              ;
              if (plVar8 != (long *)0x0) {
                lVar13 = *plVar8;
                uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar17 != 0) {
                  piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == DAT_0917a480) {
                      puVar9 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_0446d838;
                    }
                    uVar17 = uVar17 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar17 != 0);
                }
                puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a480,0);
LAB_0446d838:
                local_1b8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
                uStack_348 = &local_1b8;
                uVar17 = unaff_x24 & 0xffffffff00000000;
                local_350 = 0;
LAB_0446d854:
                if (local_1b8 != (long *)0x0) {
                  do {
                    plVar8 = local_1b8;
                    lVar13 = *local_1b8;
                    uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    if (uVar18 != 0) {
                      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == DAT_09185b10) {
                          puVar9 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
                          goto LAB_0446d8a8;
                        }
                        uVar18 = uVar18 - 1;
                        piVar19 = piVar19 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_03f95da8(local_1b8,DAT_09185b10,0);
LAB_0446d8a8:
                    uVar18 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                    plVar8 = local_1b8;
                    if ((uVar18 & 1) == 0) {
                      if (local_1b8 == (long *)0x0) goto LAB_0446d6c4;
                      lVar13 = *local_1b8;
                      uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
                      if (uVar17 == 0) goto LAB_0446dba0;
                      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      goto LAB_0446db88;
                    }
                    if (local_1b8 == (long *)0x0) {
                      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_0446e824;
                    }
                    lVar13 = *local_1b8;
                    uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    if (uVar18 != 0) {
                      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == DAT_0917ab28) {
                          puVar9 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
                          goto LAB_0446d90c;
                        }
                        uVar18 = uVar18 - 1;
                        piVar19 = piVar19 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_03f95da8(local_1b8,DAT_0917ab28,0);
LAB_0446d90c:
                    (*(code *)*puVar9)(&local_b0,plVar8,puVar9[1]);
                    lVar15 = local_b0;
                    CookingGraph_CookingLevelSimulation__RouteProcess
                              (&local_b0,param_1,(ulong)pplStack_a8 & 0xffffffff,0,0,uVar17,0);
                    pplStack_1c8 = pplStack_a8;
                    local_1d0 = local_b0;
                    lVar13 = local_1d0;
                    local_1d0._0_1_ = (char)local_b0;
                    local_1c0 = local_a0;
                    bVar5 = (char)local_1d0 != '\0';
                    local_1d0 = lVar13;
                    unaff_x24 = uVar17;
                    if (((bVar5) && (FUN_05c3c1f8(&local_1d0,DAT_091b76d0), iVar20 == extraout_w1))
                       && (FUN_05c3c1f8(&local_1d0,DAT_091b76d0), -1 < extraout_x1))
                    goto LAB_0446d98c;
                    if (local_1b8 == (long *)0x0) break;
                  } while( true );
                }
                if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_0446e824;
              }
              if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_0446e824;
            }
          } while( true );
        }
        goto LAB_0446e738;
      }
      lVar13 = thunk_FUN_03f9944c(DAT_0917bf20);
      FUN_0573917c(lVar13,DAT_091abf10);
      if (-1 < *(int *)(param_1 + 0x16c)) {
        CookingGraph_CookingLevelSimulation__get_BagAddress(&local_f0,param_1);
        lVar15 = DAT_091abf18;
        if (lVar13 == 0) goto LAB_0446e738;
        lVar14 = *(long *)(lVar13 + 0x10);
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0446e738;
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar1 * 0x18;
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar14 + 0x30) = local_e0;
          *(long ***)(lVar14 + 0x28) = pplStack_e8;
          *(long *)(lVar14 + 0x20) = local_f0;
          thunk_FUN_03f5d7b8(lVar14 + 0x28,0);
        }
        else {
          pplStack_a8 = pplStack_e8;
          local_b0 = local_f0;
          local_a0 = local_e0;
          FUN_05739aa0(lVar13,&local_b0,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar10 = CookingGraph_CookingLevelSimulation__ProcessGridOrder(param_1);
      uVar11 = thunk_FUN_03f9944c(DAT_09178ba8);
      FUN_05315970(uVar11,0,DAT_091c6848,0);
      uVar10 = FUN_04af2704(uVar10,uVar11,DAT_091ca558);
      if (lVar13 != 0) {
        FUN_05739d0c(lVar13,uVar10,DAT_091abf20);
        FUN_0573a8e0(&local_b0,lVar13,DAT_091abf28);
        local_2c8 = &local_200;
        local_2d0 = 0;
        local_1e0 = local_90;
        pplStack_1f8 = pplStack_a8;
        local_200 = local_b0;
        uStack_1e8 = (undefined4)uStack_98;
        local_1e4 = (undefined4)((ulong)uStack_98 >> 0x20);
        local_1f0 = (int)local_a0;
        local_1ec = (undefined4)((ulong)local_a0 >> 0x20);
        goto LAB_0446dfcc;
      }
    }
  }
LAB_0446e738:
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0446e824:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0446dcc4:
  plVar8 = *pplStack_e8;
  if (plVar8 != (long *)0x0) {
    lVar13 = *plVar8;
    uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == DAT_09185a58) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0446dd28;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_0446dd28:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
  if (local_f0 != 0) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548();
    }
    goto LAB_0446e824;
  }
  lVar13 = *(long *)(param_1 + 0x78);
  iVar20 = iVar20 + 1;
  if (lVar13 == 0) goto LAB_0446e738;
  goto LAB_0446d630;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
LAB_0446db88:
    if (*(long *)(piVar19 + -2) == DAT_09185a58) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_0446dbbc;
    }
  }
LAB_0446dba0:
  puVar9 = (undefined8 *)FUN_03f95da8(local_1b8,DAT_09185a58,0);
LAB_0446dbbc:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  goto LAB_0446d6c4;
LAB_0446d98c:
  lVar13 = thunk_FUN_03f9944c(DAT_0917bf78);
  FUN_05744974(lVar13,DAT_091ac088);
  FUN_05c3c1f8(&local_1d0,DAT_091b76d0);
  CookingGraph_CookingLevelSimulation__ToolAddress(&local_b0,iVar20,extraout_x1_00 >> 0x20);
  local_80 = 0;
  pplStack_2b8 = pplStack_a8;
  local_2c0 = local_b0;
  local_2b0 = local_a0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  pplStack_a8 = (long **)0x0;
  local_b0 = 0;
  pplStack_298 = pplStack_1a8;
  local_2a0 = local_1b0;
  local_290 = local_1a0;
  CookingGraph_Execution_CookingTransferRequest___ctor(&local_b0,&local_2a0,&local_2c0,lVar15,0);
  if (lVar13 != 0) {
    lVar14 = *(long *)(lVar13 + 0x10);
    uStack_168 = uStack_88;
    local_170 = local_90;
    pplStack_188 = pplStack_a8;
    local_190 = local_b0;
    uStack_178 = uStack_98;
    uStack_180 = local_a0;
    local_160 = local_80;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar14 != 0) {
      uVar1 = *(uint *)(lVar13 + 0x18);
      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
        lVar14 = lVar14 + (long)(int)uVar1 * 0x38;
        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
        *(long ***)(lVar14 + 0x28) = pplStack_a8;
        *(long *)(lVar14 + 0x20) = local_b0;
        *(undefined8 *)(lVar14 + 0x38) = uStack_98;
        *(undefined8 *)(lVar14 + 0x30) = local_a0;
        *(undefined8 *)(lVar14 + 0x48) = uStack_88;
        *(ulong *)(lVar14 + 0x40) = local_90;
        *(undefined8 *)(lVar14 + 0x50) = local_80;
        thunk_FUN_03f5d7b8(lVar14 + 0x28,0);
      }
      else {
        pplStack_148 = pplStack_a8;
        local_150 = local_b0;
        uStack_138 = uStack_98;
        uStack_140 = local_a0;
        uStack_128 = uStack_88;
        local_130 = local_90;
        local_120 = local_80;
        FUN_057452c4(lVar13,&local_150,
                     *(undefined8 *)(*(long *)(*(long *)(DAT_091ac090 + 0x20) + 0xc0) + 0x70));
      }
      lVar14 = FUN_05c3c1f8(&local_1d0,DAT_091b76d0);
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = thunk_FUN_03f9944c(DAT_09176710);
        FUN_06f52618(lVar14,DAT_0919e5f8);
        uVar10 = FUN_05c3c1f8(&local_1d0,DAT_091b76d0);
        if (lVar14 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_0446e824;
        }
        FUN_06f533bc(lVar14,lVar15,uVar10,DAT_0919e628);
      }
      CookingGraph_CookingLevelSimulation__Dispatch(param_1,lVar13,0,0,0,lVar14);
      goto LAB_0446d854;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_0446e824;
LAB_0446dfcc:
  uVar18 = FUN_071997ec(&local_200,DAT_091a2758);
  uVar17 = local_1e0;
  iVar20 = local_1f0;
  lVar13 = local_2d0;
  if ((uVar18 & 1) == 0) {
    FUN_071997e8(local_2c8,DAT_091a2750);
    if (lVar13 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
    }
    else if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar13);
    }
    goto LAB_0446e824;
  }
  local_78 = CONCAT44(uStack_1e8,local_1ec);
  local_70 = local_1e4;
  if (*(long *)(param_1 + 0x180) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    goto LAB_0446e824;
  }
  lVar13 = *(long *)(*(long *)(param_1 + 0x180) + 0x48);
  if (lVar13 == 0) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    goto LAB_0446e824;
  }
  uVar7 = (undefined4)local_1e0;
  uVar4 = local_1e0._4_4_;
  bVar5 = *(char *)(lVar13 + 0x13) == '\0';
  bVar6 = local_1f0 != 3;
  if (bVar5 || bVar6) {
    local_2e8[0] = local_1f0;
    local_2d8 = (undefined4)local_1e0;
    uStack_2d4 = local_1e0._4_4_;
    *(undefined8 *)((ulong)local_2e8 | 4) = CONCAT44(uStack_1e8,local_1ec);
    *(undefined4 *)((undefined8 *)((ulong)local_2e8 | 4) + 1) = local_1e4;
    uVar18 = CookingGraph_CookingLevelSimulation__Outgoing(param_1,local_2e8);
    if ((uVar18 & 1) != 0) goto LAB_0446dfcc;
    if (iVar20 == 2) {
      uVar17 = CookingGraph_CookingLevelSimulation__MomentHeld(param_1,uVar17 & 0xffffffff);
      if ((uVar17 & 1) != 0) goto LAB_0446dfcc;
      iVar20 = 2;
    }
  }
  else {
    iVar20 = 3;
  }
  *(undefined8 *)((ulong)local_300 | 4) = local_78;
  *(undefined4 *)((undefined8 *)((ulong)local_300 | 4) + 1) = local_70;
  local_2f0 = uVar7;
  uStack_2ec = uVar4;
  local_300[0] = iVar20;
  plVar8 = (long *)CookingGraph_CookingLevelSimulation__ProcessUnits(param_1,local_300);
  if (plVar8 != (long *)0x0) {
    lVar13 = *plVar8;
    uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == DAT_0917a480) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0446e100;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a480,0);
LAB_0446e100:
    local_1b8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    uVar17 = local_3a0 & 0xffffffff00000000;
    local_308 = &local_1b8;
    local_310 = 0;
LAB_0446e120:
    if (local_1b8 != (long *)0x0) {
      do {
        plVar8 = local_1b8;
        lVar13 = *local_1b8;
        uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == DAT_09185b10) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_0446e174;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(local_1b8,DAT_09185b10,0);
LAB_0446e174:
        uVar18 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        plVar8 = local_1b8;
        if ((uVar18 & 1) == 0) goto LAB_0446e508;
        if (local_1b8 == (long *)0x0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_0446e824;
        }
        lVar13 = *local_1b8;
        uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == DAT_0917ab28) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_0446e1d8;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(local_1b8,DAT_0917ab28,0);
LAB_0446e1d8:
        (*(code *)*puVar9)(&local_350,plVar8,puVar9[1]);
        pplVar3 = uStack_348;
        lVar13 = local_350;
        if (uStack_348._4_4_ != 0) goto LAB_0446e120;
        if (*(long *)(param_1 + 0x178) == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_0446e824;
        }
        uVar18 = CookingGraph_Execution_CookingExecution__IsUnitClaimed
                           (*(long *)(param_1 + 0x178),local_350,0);
        if ((uVar18 & 1) != 0) goto LAB_0446e120;
        CookingGraph_CookingLevelSimulation__RouteProcess
                  (&local_350,param_1,(ulong)pplVar3 & 0xffffffff,0,0,uVar17,0);
        local_210 = local_340;
        pplStack_238 = (long **)0x0;
        local_240 = 0;
        uStack_228 = 0;
        local_230 = 0;
        pplStack_218 = uStack_348;
        local_220 = local_350;
        uVar18 = CookingGraph_CookingLevelSimulation__Preservable
                           (param_1,(ulong)pplVar3 & 0xffffffff);
        local_3a0 = uVar17;
        if ((uVar18 & 1) == 0) {
          if (((char)local_220 == '\0') ||
             (FUN_05c3c1f8(&local_220,DAT_091b76d0), extraout_x1_01 < 0)) {
            lVar15 = 0;
          }
          else {
            FUN_05c3c1f8(&local_220,DAT_091b76d0);
            FUN_05c3c1f8(&local_220,DAT_091b76d0);
            CookingGraph_CookingLevelSimulation__ToolAddress
                      (&local_350,extraout_x1_02 & 0xffffffff,extraout_x1_03 >> 0x20);
            pplStack_108 = uStack_348;
            local_110 = local_350;
            local_100 = local_340;
            FUN_05c2b3b8(&local_240,&local_110,DAT_091b6b80);
            lVar15 = FUN_05c3c1f8(&local_220,DAT_091b76d0);
          }
LAB_0446e320:
          if ((char)local_240 != '\0') goto LAB_0446e338;
        }
        else {
          if (*(long *)(param_1 + 0x180) == 0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_0446e824;
          }
          lVar15 = *(long *)(*(long *)(param_1 + 0x180) + 0x48);
          if (lVar15 == 0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_0446e824;
          }
          if ((*(char *)(lVar15 + 0x10) == '\0') || ((char)local_220 != '\0')) {
            CookingGraph_CookingLevelSimulation__PreservationDestination
                      (&local_350,param_1,(ulong)pplVar3 & 0xffffffff,0);
            lVar15 = 0;
            pplStack_238 = uStack_348;
            local_240 = local_350;
            uStack_228 = uStack_338;
            local_230 = local_340;
            goto LAB_0446e320;
          }
        }
        if (local_1b8 == (long *)0x0) break;
      } while( true );
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    goto LAB_0446e824;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_0446e824;
LAB_0446e338:
  lVar12 = thunk_FUN_03f9944c(DAT_0917bf78);
  FUN_05744974(lVar12,DAT_091ac088);
  FUN_05c2b3f4(&local_350,&local_240,DAT_091b6b90);
  local_320 = 0;
  pplStack_378 = uStack_348;
  local_380 = local_350;
  local_370 = local_340;
  *(undefined4 *)((undefined8 *)((ulong)local_368 | 4) + 1) = local_70;
  *(undefined8 *)((ulong)local_368 | 4) = local_78;
  uStack_338 = 0;
  local_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_348 = (long **)0x0;
  local_350 = 0;
  local_358 = uVar7;
  uStack_354 = uVar4;
  local_368[0] = iVar20;
  CookingGraph_Execution_CookingTransferRequest___ctor(&local_350,local_368,&local_380,lVar13,0);
  lVar14 = DAT_091ac090;
  if (lVar12 != 0) {
    uStack_d8 = uStack_338;
    local_e0 = local_340;
    uStack_c8 = uStack_328;
    local_d0 = uStack_330;
    local_c0 = local_320;
    pplStack_e8 = uStack_348;
    local_f0 = local_350;
    lVar16 = *(long *)(lVar12 + 0x10);
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar16 != 0) {
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
        lVar16 = lVar16 + (long)(int)uVar1 * 0x38;
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        *(long ***)(lVar16 + 0x28) = uStack_348;
        *(long *)(lVar16 + 0x20) = local_350;
        *(undefined8 *)(lVar16 + 0x38) = uStack_338;
        *(undefined8 *)(lVar16 + 0x30) = local_340;
        *(undefined8 *)(lVar16 + 0x48) = uStack_328;
        *(ulong *)(lVar16 + 0x40) = uStack_330;
        *(undefined8 *)(lVar16 + 0x50) = local_320;
        thunk_FUN_03f5d7b8(lVar16 + 0x28,0);
      }
      else {
        pplStack_a8 = uStack_348;
        local_b0 = local_350;
        uStack_98 = uStack_338;
        local_a0 = local_340;
        uStack_88 = uStack_328;
        local_90 = uStack_330;
        local_80 = local_320;
        FUN_057452c4(lVar12,&local_b0,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      if (lVar15 == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = thunk_FUN_03f9944c(DAT_09176710);
        FUN_06f52618(lVar14,DAT_0919e5f8);
        if (lVar14 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_0446e824;
        }
        FUN_06f533bc(lVar14,lVar13,lVar15,DAT_0919e628);
      }
      CookingGraph_CookingLevelSimulation__Dispatch(param_1,lVar12,0,0,0,lVar14);
      if (bVar5 || bVar6) goto LAB_0446e508;
      goto LAB_0446e120;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_0446e824;
LAB_0446e508:
  plVar8 = *local_308;
  if (plVar8 != (long *)0x0) {
    lVar13 = *plVar8;
    uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == DAT_09185a58) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0446e568;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_0446e568:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
  if (local_310 != 0) goto LAB_0446e798;
  goto LAB_0446dfcc;
LAB_0446e798:
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548();
  }
  goto LAB_0446e824;
}


// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$AddDirty
// address: 0x44571cc
// body: available
// range: 0x44571cc-0x4457aef inclusive
// range: 0x4457bdc-0x4457bdf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4457a74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4457a8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4457aa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4457abc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4457ad4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4457aec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4457bdc to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__AddDirty(long param_1,long param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  ulong local_220;
  ulong *puStack_218;
  ulong local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  ulong local_130;
  ulong *puStack_128;
  ulong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulong local_100;
  ulong *puStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong local_c0;
  ulong *puStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong *local_80;
  ulong uStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((DAT_09518023 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fda0);
    FUN_03f5c2a4(&DAT_091c9278);
    FUN_03f5c2a4(&DAT_091c9658);
    FUN_03f5c2a4(&DAT_091ca390);
    FUN_03f5c2a4(&DAT_091cab48);
    FUN_03f5c2a4(&DAT_091cadc0);
    FUN_03f5c2a4(&DAT_091cb460);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_09178740);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_09178770);
    FUN_03f5c2a4(&DAT_09178730);
    FUN_03f5c2a4(&DAT_091801c0);
    FUN_03f5c2a4(&DAT_091ac090);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091ac088);
    FUN_03f5c2a4(&DAT_0917bf78);
    FUN_03f5c2a4(&DAT_091e74d0);
    FUN_03f5c2a4(&DAT_091e74d8);
    FUN_03f5c2a4(&DAT_091e7f58);
    FUN_03f5c2a4(&DAT_0918f620);
    FUN_03f5c2a4(&DAT_091e7f60);
    FUN_03f5c2a4(&DAT_0918f628);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518023 = 1;
  }
  uStack_78 = 0;
  local_80 = (ulong *)0x0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_130 = 0;
  puStack_128 = (ulong *)0x0;
  local_120 = 0;
  lVar6 = thunk_FUN_03f9944c(DAT_0918f620);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass96_0___ctor(lVar6,0);
  if (lVar6 != 0) {
    puVar16 = (uint *)(lVar6 + 0x10);
    *puVar16 = param_3;
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar12 = *(long *)(*(long *)(param_1 + 0x78) + 0x78), lVar12 != 0)) {
      if (*(uint *)(lVar12 + 0x18) <= param_3) goto LAB_04457ad8;
      if (*(long *)(param_1 + 0xe8) != 0) {
        iVar1 = *(int *)(lVar12 + (long)(int)param_3 * 4 + 0x20);
        FUN_05797d74(&local_c0,*(long *)(param_1 + 0xe8),DAT_091adcc0);
        local_120 = local_b0;
        puStack_218 = &local_130;
        puStack_128 = puStack_b8;
        local_130 = local_c0;
        local_220 = 0;
        do {
          do {
            do {
              do {
                uVar7 = FUN_071ad7a4(&local_130,DAT_091a34d8);
                uVar8 = local_120;
                if ((uVar7 & 1) == 0) {
                  FUN_071ad7a0(&local_130,DAT_091a34d0);
                  goto LAB_04457728;
                }
                iVar5 = (int)local_120;
                lVar12 = thunk_FUN_03f9944c(DAT_0918f628);
                CookingGraph_CookingLevelSimulation_<>c__DisplayClass96_1___ctor(lVar12,0);
                CookingGraph_CookingLevelSimulation__GridAddress(&local_100,uVar8 & 0xffffffff);
                puStack_b8 = puStack_f8;
                local_c0 = local_100;
                local_b0 = local_f0;
                if (lVar12 == 0) {
                  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_04457bdc;
                }
                *(ulong **)(lVar12 + 0x18) = puStack_f8;
                *(ulong *)(lVar12 + 0x10) = local_100;
                *(ulong *)(lVar12 + 0x20) = local_f0;
                thunk_FUN_03f5d7b8(lVar12 + 0x18,0);
                uStack_148 = *(undefined8 *)(lVar12 + 0x18);
                local_150 = *(undefined8 *)(lVar12 + 0x10);
                local_140 = *(undefined8 *)(lVar12 + 0x20);
                uVar8 = CookingGraph_CookingLevelSimulation__Outgoing(param_1,&local_150);
              } while ((uVar8 & 1) != 0);
              if (*(long *)(param_1 + 0x178) == 0) {
                if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_04457bdc;
              }
              uStack_168 = *(undefined8 *)(lVar12 + 0x18);
              local_170 = *(undefined8 *)(lVar12 + 0x10);
              local_160 = *(undefined8 *)(lVar12 + 0x20);
              uVar9 = CookingGraph_Execution_CookingExecution__UnitsAt
                                (*(long *)(param_1 + 0x178),&local_170,0);
              if (*(long *)(param_1 + 0x178) == 0) {
                if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_04457bdc;
              }
              uVar10 = CookingGraph_Execution_CookingExecution__get_Transfers
                                 (*(long *)(param_1 + 0x178),0);
              uVar11 = thunk_FUN_03f9944c(DAT_09178730);
              FUN_05322d94(uVar11,lVar12,DAT_091e7f60,0);
              uVar10 = FUN_04b0cafc(uVar10,uVar11,DAT_091cb460);
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar13 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              lVar12 = puVar13[0x52];
              if (lVar12 == 0) {
                if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar13 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                }
                uVar11 = *puVar13;
                lVar12 = thunk_FUN_03f9944c(DAT_09178740);
                FUN_05323674(lVar12,uVar11,DAT_091e74d0,0);
                lVar14 = *(long *)(DAT_0918f298 + 0xb8);
                *(long *)(lVar14 + 0x290) = lVar12;
                thunk_FUN_03f5d7b8(lVar14 + 0x290,lVar12);
              }
              uVar10 = FUN_04af6400(uVar10,lVar12,DAT_091ca390);
              uVar9 = FUN_04ad42a0(uVar9,uVar10,DAT_091c9658);
              lVar12 = FUN_04b0451c(uVar9,DAT_091cadc0);
              if (lVar12 == 0) {
                if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_04457bdc;
              }
            } while (*(long *)(lVar12 + 0x18) == 0);
            lVar14 = *(long *)(lVar6 + 0x18);
            if (lVar14 == 0) {
              lVar14 = thunk_FUN_03f9944c(DAT_09178768);
              FUN_053136a4(lVar14,lVar6,DAT_091e7f58,0);
              *(long *)(lVar6 + 0x18) = lVar14;
              thunk_FUN_03f5d7b8(lVar6 + 0x18,lVar14);
            }
            uVar8 = FUN_04ab29fc(lVar12,lVar14,DAT_091c9278);
          } while ((uVar8 & 1) == 0);
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar13 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          lVar14 = puVar13[0x53];
          if (lVar14 == 0) {
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar13 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            }
            uVar9 = *puVar13;
            lVar14 = thunk_FUN_03f9944c(DAT_09178770);
            FUN_05313d88(lVar14,uVar9,DAT_091e74d8,0);
            lVar15 = *(long *)(DAT_0918f298 + 0xb8);
            *(long *)(lVar15 + 0x298) = lVar14;
            thunk_FUN_03f5d7b8(lVar15 + 0x298,lVar14);
          }
          iVar4 = FUN_04b02574(lVar12,lVar14,DAT_091cab48);
        } while (iVar1 <= iVar4);
        FUN_071ad7a0(&local_130,DAT_091a34d0);
        if (iVar5 < 0) {
LAB_04457728:
          iVar5 = CookingGraph_CookingLevelSimulation__FreeCell(param_1,0);
          lVar6 = DAT_091adc88;
          if (iVar5 < 0) {
            CookingGraph_CookingLevelSimulation__Lose(param_1,3);
LAB_04457a2c:
            if (*(long *)(lVar3 + 0x28) == local_68) {
              return;
            }
            goto LAB_04457bdc;
          }
          lVar12 = *(long *)(param_1 + 0xe8);
          if (lVar12 != 0) {
            lVar14 = *(long *)(lVar12 + 0x10);
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar14 != 0) {
              uVar2 = *(uint *)(lVar12 + 0x18);
              if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                *(int *)(lVar14 + (long)(int)uVar2 * 4 + 0x20) = iVar5;
              }
              else {
                FUN_057971a8(lVar12,iVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_044577ac;
            }
          }
        }
        else {
LAB_044577ac:
          lVar6 = *(long *)(param_1 + 0x158);
          uVar2 = *puVar16;
          puStack_b8 = (ulong *)0x0;
          local_b0 = 0;
          *(long *)(param_1 + 0x158) = lVar6 + 1;
          local_c0 = 0;
          CookingGraph_Execution_CookingUnit___ctor(&local_c0,lVar6,uVar2,1,1,0);
          uVar8 = local_c0;
          uStack_78 = local_b0;
          local_80 = puStack_b8;
          if (param_2 != 0) {
            uVar9 = CookingGraph_CookingLevelSimulation_Customer__get_Owner(param_2,0);
            CookingGraph_Execution_CookingEndpoint___ctor(&local_118,5,uVar9,uVar8 & 0xffffffff,0,0)
            ;
            lVar12 = *(long *)(param_1 + 0x178);
            uStack_188 = uStack_110;
            local_190 = local_118;
            local_180 = local_108;
            lVar6 = FUN_03f5c394(DAT_0917fda0,1);
            if (lVar6 != 0) {
              if (*(int *)(lVar6 + 0x18) == 0) {
LAB_04457ad8:
                if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                goto LAB_04457bdc;
              }
              *(ulong *)(lVar6 + 0x20) = uVar8;
              *(ulong *)(lVar6 + 0x30) = uStack_78;
              *(ulong **)(lVar6 + 0x28) = local_80;
              if (lVar12 != 0) {
                uStack_1a8 = uStack_188;
                local_1b0 = local_190;
                local_1a0 = local_180;
                CookingGraph_Execution_CookingExecution__RegisterInventory
                          (lVar12,&local_1b0,1,lVar6,0);
                lVar12 = thunk_FUN_03f9944c(DAT_0917bf78);
                FUN_05744974(lVar12,DAT_091ac088);
                local_1c0 = local_108;
                uStack_1c8 = uStack_110;
                local_1d0 = local_118;
                CookingGraph_CookingLevelSimulation__GridAddress(&local_1e8,iVar5);
                uStack_238 = uStack_1c8;
                local_240 = local_1d0;
                local_230 = local_1c0;
                local_1f0 = 0;
                uStack_208 = 0;
                local_210 = 0;
                uStack_1f8 = 0;
                uStack_200 = 0;
                puStack_218 = (ulong *)0x0;
                local_220 = 0;
                uStack_258 = uStack_1e0;
                local_260 = local_1e8;
                local_250 = local_1d8;
                CookingGraph_Execution_CookingTransferRequest___ctor
                          (&local_220,&local_240,&local_260,uVar8,0);
                lVar6 = DAT_091ac090;
                if (lVar12 != 0) {
                  uStack_e8 = uStack_208;
                  local_f0 = local_210;
                  uStack_d8 = uStack_1f8;
                  local_e0 = uStack_200;
                  local_d0 = local_1f0;
                  puStack_f8 = puStack_218;
                  local_100 = local_220;
                  lVar14 = *(long *)(lVar12 + 0x10);
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar14 != 0) {
                    uVar2 = *(uint *)(lVar12 + 0x18);
                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                      lVar14 = lVar14 + (long)(int)uVar2 * 0x38;
                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                      *(ulong **)(lVar14 + 0x28) = puStack_218;
                      *(ulong *)(lVar14 + 0x20) = local_220;
                      *(undefined8 *)(lVar14 + 0x38) = uStack_208;
                      *(ulong *)(lVar14 + 0x30) = local_210;
                      *(undefined8 *)(lVar14 + 0x48) = uStack_1f8;
                      *(undefined8 *)(lVar14 + 0x40) = uStack_200;
                      *(undefined8 *)(lVar14 + 0x50) = local_1f0;
                      thunk_FUN_03f5d7b8(lVar14 + 0x28,0);
                    }
                    else {
                      puStack_b8 = puStack_218;
                      local_c0 = local_220;
                      uStack_a8 = uStack_208;
                      local_b0 = local_210;
                      uStack_98 = uStack_1f8;
                      local_a0 = uStack_200;
                      local_90 = local_1f0;
                      FUN_057452c4(lVar12,&local_c0,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    CookingGraph_CookingLevelSimulation__Dispatch(param_1,lVar12,0,0,0,0);
                    uVar9 = System_Int32__ToString(puVar16,0);
                    lVar6 = FUN_03f5c394(DAT_091801c0,1);
                    if (lVar6 != 0) {
                      if (*(int *)(lVar6 + 0x18) != 0) {
                        *(ulong *)(lVar6 + 0x20) = uVar8;
                        CookingGraph_CookingLevelSimulation__Emit(param_1,7,iVar5,uVar9);
                        goto LAB_04457a2c;
                      }
                      goto LAB_04457ad8;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_04457bdc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


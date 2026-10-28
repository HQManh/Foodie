// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$LaneOccupants
// address: 0x4444310
// body: available
// range: 0x4444310-0x4444a23 inclusive
// range: 0x4444a28-0x4444d83 inclusive
// range: 0x4444d88-0x4444e1f inclusive
// range: 0x4444e24-0x4444e27 inclusive
// range: 0x4444e2c-0x4444e2f inclusive
// range: 0x4444e34-0x4444e37 inclusive
// range: 0x4444e3c-0x4444e3f inclusive
// range: 0x4444e44-0x4444e47 inclusive
// range: 0x4444e4c-0x4444e4f inclusive
// range: 0x4444e54-0x4444e57 inclusive
// range: 0x4444e5c-0x4444e5f inclusive
// range: 0x4444e64-0x4444e67 inclusive
// range: 0x4444e6c-0x4444e6f inclusive
// range: 0x4444f34-0x44450e7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4444a20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4444d80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4444e1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4444e24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4444e2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4444e34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4444e3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4444e44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4444e4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4444e54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4444e5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4444e64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044450d8) */
/* WARNING: Removing unreachable block (ram,0x04444e08) */
/* WARNING: Removing unreachable block (ram,0x044450c4) */
/* WARNING: Removing unreachable block (ram,0x04444aa8) */

long CookingGraph_CookingLevelSimulation__LaneOccupants
               (long param_1,uint param_2,undefined4 param_3,long param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulong local_f8;
  long **pplStack_f0;
  undefined8 local_e8;
  ulong local_e0;
  long **pplStack_d8;
  undefined8 local_d0;
  long local_c8;
  long **local_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  long *local_98;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ulong local_80;
  byte local_78;
  undefined2 local_77;
  byte local_75;
  undefined4 local_74;
  undefined4 uStack_70;
  ulong local_6c;
  byte local_64;
  undefined2 local_63;
  byte local_61;
  
  if ((DAT_09518043 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e638);
    FUN_03f5c2a4(&DAT_0919c1a0);
    FUN_03f5c2a4(&DAT_0919c138);
    FUN_03f5c2a4(&DAT_0919e618);
    FUN_03f5c2a4(&DAT_091ca268);
    FUN_03f5c2a4(&DAT_091cb460);
    FUN_03f5c2a4(&DAT_091782b0);
    FUN_03f5c2a4(&DAT_09178730);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a480);
    FUN_03f5c2a4(&DAT_0917a478);
    FUN_03f5c2a4(&DAT_0917a5c0);
    FUN_03f5c2a4(&DAT_0917ab20);
    FUN_03f5c2a4(&DAT_0917ab28);
    FUN_03f5c2a4(&DAT_0917ac88);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b2558);
    FUN_03f5c2a4(&DAT_091b2550);
    FUN_03f5c2a4(&DAT_091b2548);
    FUN_03f5c2a4(&DAT_0917d268);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_091b6fb8);
    FUN_03f5c2a4(&DAT_091e7b70);
    FUN_03f5c2a4(&DAT_0918f368);
    FUN_03f5c2a4(&DAT_091e7b78);
    FUN_03f5c2a4(&DAT_0918f370);
    FUN_03f5c2a4(&DAT_091bec98);
    DAT_09518043 = 1;
  }
  local_98 = (long *)0x0;
  local_90 = 0;
  local_a0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_a8 = 0;
  local_b8 = 0;
  lVar6 = thunk_FUN_03f9944c(DAT_0918f368);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass142_0___ctor(lVar6,0);
  lVar7 = thunk_FUN_03f9944c(DAT_0917d268);
  FUN_058e358c(lVar7,DAT_091b2548);
  if ((param_5 & 1) == 0) {
    lVar17 = *(long *)(param_1 + 0xb0);
    local_e0 = 0;
    FUN_066c1fdc(&local_e0,param_2,param_3,DAT_091bec98);
    if (lVar17 != 0) {
      FUN_06e4da10(lVar17,local_e0,&local_90,DAT_0919c1a0);
      plVar8 = (long *)CookingGraph_CookingLevelSimulation__LaneSlots(param_1,param_2,param_3);
      if (plVar8 != (long *)0x0) {
        lVar17 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == DAT_0917a5c0) {
              puVar9 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_044445a8;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a5c0,0);
LAB_044445a8:
        local_98 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        local_c0 = &local_98;
        local_c8 = 0;
        if (local_98 != (long *)0x0) {
          do {
            plVar8 = local_98;
            lVar17 = *local_98;
            uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == DAT_09185b10) {
                  puVar9 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_04444638;
                }
                uVar13 = uVar13 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(local_98,DAT_09185b10,0);
LAB_04444638:
            uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            plVar8 = local_98;
            if ((uVar13 & 1) == 0) {
              plVar8 = *local_c0;
              if (plVar8 == (long *)0x0) goto LAB_04444fb4;
              lVar17 = *plVar8;
              uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar13 == 0) goto LAB_04444f8c;
              piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              goto LAB_04444f74;
            }
            if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar17 = *local_98;
            uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == DAT_0917ac88) {
                  puVar9 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_044446a4;
                }
                uVar13 = uVar13 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(local_98,DAT_0917ac88,0);
LAB_044446a4:
            uVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            lVar17 = thunk_FUN_03f9944c(DAT_0918f370);
            CookingGraph_CookingLevelSimulation_<>c__DisplayClass142_1___ctor(lVar17,0);
            CookingGraph_CookingLevelSimulation__ToolAddress(&local_f8,param_2,uVar5);
            pplStack_d8 = pplStack_f0;
            local_e0 = local_f8;
            local_d0 = local_e8;
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *(long ***)(lVar17 + 0x18) = pplStack_f0;
            *(ulong *)(lVar17 + 0x10) = local_f8;
            *(undefined8 *)(lVar17 + 0x20) = local_e8;
            thunk_FUN_03f5d7b8(lVar17 + 0x18,0);
            if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar12 = *(long *)(*(long *)(param_1 + 0x78) + 0x20);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(uint *)(lVar12 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar12 = *(long *)(lVar12 + (long)(int)param_2 * 8 + 0x20);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar12 = *(long *)(lVar12 + 0x10);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(uint *)(lVar12 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uStack_108 = *(undefined8 *)(lVar17 + 0x18);
            local_110 = *(undefined8 *)(lVar17 + 0x10);
            local_100 = *(undefined8 *)(lVar17 + 0x20);
            uVar1 = *(undefined4 *)(lVar12 + (long)(int)uVar5 * 8 + 0x20);
            plVar8 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt
                                       (*(long *)(param_1 + 0x178),&local_110,0);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar12 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == DAT_0917a480) {
                  puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_044447e4;
                }
                uVar13 = uVar13 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a480,0);
LAB_044447e4:
            plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
            pplStack_f0 = &local_a0;
            local_f8 = 0;
joined_r0x04444800:
            local_a0 = plVar8;
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar12 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == DAT_09185b10) {
                  puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_04444850;
                }
                uVar13 = uVar13 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_04444850:
            uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            plVar8 = local_a0;
            if ((uVar13 & 1) != 0) {
              if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar12 = *local_a0;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == DAT_0917ab28) {
                    puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_044448bc;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar9 = (undefined8 *)FUN_03f95da8(local_a0,DAT_0917ab28,0);
LAB_044448bc:
              (*(code *)*puVar9)(&local_e0,plVar8,puVar9[1]);
              uVar13 = local_e0;
              if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar2 = pplStack_d8._0_4_;
              uVar10 = FUN_06f54e88(*(long *)(param_1 + 0xc0),local_e0,&local_a8,DAT_0919e618);
              if ((uVar10 & 1) == 0) {
                if (local_90 != 0) {
                  local_e0 = 0;
                  FUN_05c3078c(&local_e0,*(undefined4 *)(local_90 + 0x1c),DAT_091b6f98);
                  goto LAB_0444493c;
                }
                uVar18 = 0;
                uVar10 = 0;
LAB_04444968:
                if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                bVar4 = FUN_06f535c4(*(long *)(param_1 + 0xb8),uVar13,DAT_0919e638);
              }
              else {
                if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                local_e0 = 0;
                FUN_05c3078c(&local_e0,*(undefined4 *)(local_a8 + 0x14),DAT_091b6f98);
LAB_0444493c:
                uVar18 = local_e0 >> 8;
                uVar10 = local_e0 & 0xff;
                if ((local_90 == 0) || (*(char *)(local_90 + 0x38) == '\0')) goto LAB_04444968;
                bVar4 = 1;
              }
              lVar12 = DAT_091b2550;
              if (lVar7 == 0) {
LAB_04444e1c:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar14 = *(long *)(lVar7 + 0x10);
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_04444e1c;
              uVar5 = *(uint *)(lVar7 + 0x18);
              uVar13 = uVar10 | uVar18 << 8;
              bVar3 = uVar10 == 0 & (bVar4 ^ 0xff);
              if (uVar5 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)uVar5 * 0x14;
                *(uint *)(lVar7 + 0x18) = uVar5 + 1;
                *(undefined4 *)(lVar14 + 0x20) = uVar2;
                *(undefined4 *)(lVar14 + 0x24) = uVar1;
                *(ulong *)(lVar14 + 0x28) = uVar13;
                *(byte *)(lVar14 + 0x30) = bVar4 & 1;
                *(undefined2 *)(lVar14 + 0x31) = 0;
                *(byte *)(lVar14 + 0x33) = bVar3;
                plVar8 = local_a0;
              }
              else {
                local_88 = uVar2;
                local_77 = 0;
                uStack_84 = uVar1;
                local_80 = uVar13;
                local_78 = bVar4 & 1;
                local_75 = bVar3;
                FUN_058e3e94(lVar7,&local_88,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                plVar8 = local_a0;
              }
              goto joined_r0x04444800;
            }
            if (local_a0 != (long *)0x0) {
              lVar12 = *local_a0;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == DAT_09185a58) {
                    puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_04444a90;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar9 = (undefined8 *)FUN_03f95da8(local_a0,DAT_09185a58,0);
LAB_04444a90:
              (*(code *)*puVar9)(plVar8,puVar9[1]);
            }
            if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar11 = CookingGraph_Execution_CookingExecution__get_Transfers
                               (*(long *)(param_1 + 0x178),0);
            plVar8 = (long *)(lVar17 + 0x28);
            lVar12 = *plVar8;
            if (lVar12 == 0) {
              lVar12 = thunk_FUN_03f9944c(DAT_09178730);
              FUN_05322d94(lVar12,lVar17,DAT_091e7b78,0);
              *plVar8 = lVar12;
              thunk_FUN_03f5d7b8(plVar8,lVar12);
            }
            plVar8 = (long *)FUN_04b0cafc(uVar11,lVar12,DAT_091cb460);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar17 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == DAT_0917a478) {
                  puVar9 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_04444b7c;
                }
                uVar13 = uVar13 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a478,0);
LAB_04444b7c:
            plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
            pplStack_d8 = &local_b0;
            local_e0 = 0;
joined_r0x04444b98:
            local_b0 = plVar8;
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar17 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == DAT_09185b10) {
                  puVar9 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_04444be8;
                }
                uVar13 = uVar13 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_04444be8:
            uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            plVar8 = local_b0;
            if ((uVar13 & 1) != 0) {
              if (local_b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar17 = *local_b0;
              uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == DAT_0917ab20) {
                    puVar9 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_04444c54;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar9 = (undefined8 *)FUN_03f95da8(local_b0,DAT_0917ab20,0);
LAB_04444c54:
              lVar17 = (*(code *)*puVar9)(plVar8,puVar9[1]);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              bVar4 = FUN_06f535c4(*(long *)(param_1 + 0xb8),*(undefined8 *)(lVar17 + 0x28),
                                   DAT_0919e638);
              if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar13 = FUN_06f54e88(*(long *)(param_1 + 0xc0),*(undefined8 *)(lVar17 + 0x28),
                                    &local_b8,DAT_0919e618);
              if ((uVar13 & 1) == 0) {
                uVar13 = 0;
              }
              else {
                if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                local_f8 = 0;
                FUN_05c3078c(&local_f8,*(undefined4 *)(local_b8 + 0x14),DAT_091b6f98);
                uVar13 = local_f8;
              }
              lVar12 = DAT_091b2550;
              if (lVar7 == 0) {
LAB_04444e24:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar14 = *(long *)(lVar7 + 0x10);
              uVar2 = *(undefined4 *)(lVar17 + 0x30);
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_04444e24;
              uVar5 = *(uint *)(lVar7 + 0x18);
              bVar3 = (uVar13 & 0xff) == 0 & (bVar4 ^ 0xff);
              if (uVar5 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)uVar5 * 0x14;
                *(uint *)(lVar7 + 0x18) = uVar5 + 1;
                *(ulong *)(lVar14 + 0x28) = uVar13;
                *(undefined4 *)(lVar14 + 0x20) = uVar2;
                *(undefined4 *)(lVar14 + 0x24) = uVar1;
                *(byte *)(lVar14 + 0x30) = bVar4 & 1;
                *(undefined2 *)(lVar14 + 0x31) = 1;
                *(byte *)(lVar14 + 0x33) = bVar3;
                plVar8 = local_b0;
              }
              else {
                local_63 = 1;
                local_74 = uVar2;
                uStack_70 = uVar1;
                local_6c = uVar13;
                local_64 = bVar4 & 1;
                local_61 = bVar3;
                FUN_058e3e94(lVar7,&local_74,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                plVar8 = local_b0;
              }
              goto joined_r0x04444b98;
            }
            if (local_b0 != (long *)0x0) {
              lVar17 = *local_b0;
              uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == DAT_09185a58) {
                    puVar9 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_04444df0;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar9 = (undefined8 *)FUN_03f95da8(local_b0,DAT_09185a58,0);
LAB_04444df0:
              (*(code *)*puVar9)(plVar8,puVar9[1]);
            }
          } while (local_98 != (long *)0x0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    goto LAB_044450e0;
  }
  goto LAB_04444fcc;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_04444f74:
    if (*(long *)(piVar15 + -2) == DAT_09185a58) {
      puVar9 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_04444fa8;
    }
  }
LAB_04444f8c:
  puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_04444fa8:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_04444fb4:
  if (local_c8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548();
  }
LAB_04444fcc:
  if (param_4 != 0) {
    lVar17 = *(long *)(param_4 + 0x18);
    local_e0 = 0;
    FUN_066c1fdc(&local_e0,param_2,param_3,DAT_091bec98);
    if ((lVar6 == 0) || (lVar17 == 0)) {
LAB_044450e0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar13 = FUN_06e4285c(lVar17,local_e0,lVar6 + 0x10,DAT_0919c138);
    if ((uVar13 & 1) != 0) {
      uVar16 = *(undefined8 *)(lVar6 + 0x18);
      uVar11 = thunk_FUN_03f9944c(DAT_091782b0);
      FUN_0530dd48(uVar11,lVar6,DAT_091e7b70,0);
      uVar11 = FUN_04aef130(uVar16,uVar11,DAT_091ca268);
      if (lVar7 == 0) goto LAB_044450e0;
      FUN_058e40f0(lVar7,uVar11,DAT_091b2558);
    }
  }
  return lVar7;
}


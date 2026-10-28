// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$MadeSupply
// address: 0x44469b8
// body: available
// range: 0x44469b8-0x4446fef inclusive
// range: 0x4446ff4-0x4447077 inclusive
// range: 0x444707c-0x444707f inclusive
// range: 0x44470cc-0x4447347 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4446fec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4447074 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444707c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4447278 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444731c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4447320 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4447328 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444732c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4447330 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4447334 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444733c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4447344 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044472f4) */
/* WARNING: Removing unreachable block (ram,0x04447340) */
/* WARNING: Removing unreachable block (ram,0x04447324) */
/* WARNING: Removing unreachable block (ram,0x0444706c) */
/* WARNING: Removing unreachable block (ram,0x044470f4) */

undefined8 CookingGraph_CookingLevelSimulation__MadeSupply(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  long lVar11;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  long local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_09517ffb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6848);
    FUN_03f5c2a4(&DAT_0919d948);
    FUN_03f5c2a4(&DAT_0919c1b0);
    FUN_03f5c2a4(&DAT_091764a0);
    FUN_03f5c2a4(&DAT_091ca558);
    FUN_03f5c2a4(&DAT_091ca840);
    FUN_03f5c2a4(&DAT_091cb150);
    FUN_03f5c2a4(&DAT_091cb618);
    FUN_03f5c2a4(&DAT_091a2750);
    FUN_03f5c2a4(&DAT_091a2758);
    FUN_03f5c2a4(&DAT_091a2760);
    FUN_03f5c2a4(&DAT_091793d8);
    FUN_03f5c2a4(&DAT_091793d0);
    FUN_03f5c2a4(&DAT_09178ba8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a480);
    FUN_03f5c2a4(&DAT_0917a478);
    FUN_03f5c2a4(&DAT_0917ab20);
    FUN_03f5c2a4(&DAT_0917ab28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091abf20);
    FUN_03f5c2a4(&DAT_091abf18);
    FUN_03f5c2a4(&DAT_091abf28);
    FUN_03f5c2a4(&DAT_091e7708);
    FUN_03f5c2a4(&DAT_091e7710);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09517ffb = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_a0 = (long *)0x0;
  local_98 = (long *)0x0;
  plStack_88 = (long *)0x0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uVar3 = thunk_FUN_03f9944c(DAT_091764a0);
  FUN_06ee539c(uVar3,DAT_0919d948);
  local_68 = uVar3;
  thunk_FUN_03f5d7b8(&local_68,uVar3);
  if (*(long *)(param_1 + 0x90) == 0) goto LAB_04447334;
  uVar3 = System_Linq_Enumerable__Range(0,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x18),0);
  uVar4 = thunk_FUN_03f9944c(DAT_09178ba8);
  FUN_05315970(uVar4,0,DAT_091c6848,0);
  uVar3 = FUN_04af2704(uVar3,uVar4,DAT_091ca558);
  lVar5 = FUN_04b08678(uVar3,DAT_091cb150);
  if (-1 < *(int *)(param_1 + 0x16c)) {
    CookingGraph_CookingLevelSimulation__get_BagAddress(&local_b8,param_1);
    lVar11 = DAT_091abf18;
    if (lVar5 == 0) goto LAB_04447334;
    lVar8 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_04447334;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      lVar8 = lVar8 + (long)(int)uVar1 * 0x18;
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar8 + 0x30) = local_a8;
      *(long **)(lVar8 + 0x28) = plStack_b0;
      *(long *)(lVar8 + 0x20) = local_b8;
      thunk_FUN_03f5d7b8(lVar8 + 0x28,0);
    }
    else {
      uStack_d8 = (long **)plStack_b0;
      local_e0 = local_b8;
      local_d0 = local_a8;
      FUN_05739aa0(lVar5,&local_e0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    uVar3 = FUN_06e4bd5c(*(long *)(param_1 + 0xb0),DAT_0919c1b0);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar9 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar11 = puVar9[0x12];
    if (lVar11 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar9 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar4 = *puVar9;
      lVar11 = thunk_FUN_03f9944c(DAT_091793d0);
      FUN_05322d94(lVar11,uVar4,DAT_091e7708,0);
      plVar6 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x90);
      *plVar6 = lVar11;
      thunk_FUN_03f5d7b8(plVar6,lVar11);
    }
    uVar3 = FUN_04b0cafc(uVar3,lVar11,DAT_091cb618);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar9 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar11 = puVar9[0x13];
    if (lVar11 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar9 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar4 = *puVar9;
      lVar11 = thunk_FUN_03f9944c(DAT_091793d8);
      FUN_0532343c(lVar11,uVar4,DAT_091e7710,0);
      plVar6 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x98);
      *plVar6 = lVar11;
      thunk_FUN_03f5d7b8(plVar6,lVar11);
    }
    uVar3 = FUN_04af5db8(uVar3,lVar11,DAT_091ca840);
    if (lVar5 != 0) {
      FUN_05739d0c(lVar5,uVar3,DAT_091abf20);
      FUN_0573a8e0(&local_e0,lVar5,DAT_091abf28);
      plStack_b0 = &local_90;
      local_b8 = 0;
      plStack_88 = (long *)uStack_d8;
      local_90 = local_e0;
      uStack_78 = uStack_c8;
      local_80 = local_d0;
      local_70 = local_c0;
      while (uVar7 = FUN_071997ec(&local_90,DAT_091a2758), lVar5 = local_b8, (uVar7 & 1) != 0) {
        if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uStack_f8 = uStack_78;
        local_100 = local_80;
        local_f0 = local_70;
        plVar6 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt
                                   (*(long *)(param_1 + 0x178),&local_100,0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar6;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917a480) {
              puVar9 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04446ed8;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a480,0);
LAB_04446ed8:
        plVar6 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
joined_r0x04446ef0:
        local_98 = plVar6;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar6;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185b10) {
              puVar9 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04446f40;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_04446f40:
        uVar7 = (*(code *)*puVar9)(plVar6,puVar9[1]);
        plVar6 = local_98;
        if ((uVar7 & 1) != 0) {
          if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *local_98;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_0917ab28) {
                puVar9 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_04446fa4;
              }
              uVar7 = uVar7 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_03f95da8(local_98,DAT_0917ab28,0);
LAB_04446fa4:
          (*(code *)*puVar9)(&local_e0,plVar6,puVar9[1]);
          plVar2 = (long *)uStack_d8;
          plVar6 = local_98;
          if (uStack_d8._4_4_ == 0) {
            if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar7 = CookingGraph_Execution_CookingExecution__IsUnitClaimed
                              (*(long *)(param_1 + 0x178),local_e0,0);
            plVar6 = local_98;
            if ((uVar7 & 1) == 0) {
              CookingGraph_CookingLevelSimulation__<MadeSupply>g__Add_30_0
                        ((ulong)plVar2 & 0xffffffff,&local_68);
              plVar6 = local_98;
            }
          }
          goto joined_r0x04446ef0;
        }
        if (local_98 != (long *)0x0) {
          lVar5 = *local_98;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185a58) {
                puVar9 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_04447054;
              }
              uVar7 = uVar7 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_03f95da8(local_98,DAT_09185a58,0);
LAB_04447054:
          (*(code *)*puVar9)(plVar6,puVar9[1]);
        }
      }
      FUN_071997e8(plStack_b0,DAT_091a2750);
      if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c548(lVar5);
      }
      if ((*(long *)(param_1 + 0x178) != 0) &&
         (plVar6 = (long *)CookingGraph_Execution_CookingExecution__get_Transfers
                                     (*(long *)(param_1 + 0x178),0), plVar6 != (long *)0x0)) {
        lVar5 = *plVar6;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917a478) {
              puVar9 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04447164;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a478,0);
LAB_04447164:
        plVar6 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
        uStack_d8 = &local_a0;
        local_e0 = 0;
        do {
          local_a0 = plVar6;
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *plVar6;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                puVar9 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_044471d8;
              }
              uVar7 = uVar7 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_044471d8:
          uVar7 = (*(code *)*puVar9)(plVar6,puVar9[1]);
          plVar6 = local_a0;
          if ((uVar7 & 1) == 0) {
            if (local_a0 == (long *)0x0) {
              return local_68;
            }
            lVar5 = *local_a0;
            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar7 == 0) goto LAB_044472c0;
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            goto LAB_044472a8;
          }
          if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *local_a0;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_0917ab20) {
                puVar9 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0444723c;
              }
              uVar7 = uVar7 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_03f95da8(local_a0,DAT_0917ab20,0);
LAB_0444723c:
          lVar5 = (*(code *)*puVar9)(plVar6,puVar9[1]);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar6 = local_a0;
          if ((*(int *)(lVar5 + 0x34) == 0) && ((*(uint *)(lVar5 + 0x58) & 0xfffffffe) == 2)) {
            CookingGraph_CookingLevelSimulation__<MadeSupply>g__Add_30_0
                      (*(undefined4 *)(lVar5 + 0x30),&local_68);
            plVar6 = local_a0;
          }
        } while( true );
      }
    }
  }
LAB_04447334:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar10 = piVar10 + 4;
    if (uVar7 == 0) break;
LAB_044472a8:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar9 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_044472dc;
    }
  }
LAB_044472c0:
  puVar9 = (undefined8 *)FUN_03f95da8(local_a0,DAT_09185a58,0);
LAB_044472dc:
  (*(code *)*puVar9)(plVar6,puVar9[1]);
  return local_68;
}


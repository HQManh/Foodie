// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ReleaseUnusableBagItems
// address: 0x444d340
// body: available
// range: 0x444d340-0x444d98f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444d744 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d95c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d960 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d964 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d968 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d96c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d970 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d974 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d978 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d97c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d980 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d984 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0444d7c8) */
/* WARNING: Removing unreachable block (ram,0x0444d988) */

void CookingGraph_CookingLevelSimulation__ReleaseUnusableBagItems(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  long **pplStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  long **pplStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  long **pplStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  long **pplStack_98;
  undefined8 local_90;
  undefined8 local_80;
  long **pplStack_78;
  undefined8 local_70;
  long *local_68;
  
  if ((DAT_0951800e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cadc0);
    FUN_03f5c2a4(&DAT_091cb610);
    FUN_03f5c2a4(&DAT_09179390);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a828);
    FUN_03f5c2a4(&DAT_0917af28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091801c0);
    FUN_03f5c2a4(&DAT_091e7960);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_09212748);
    DAT_0951800e = 1;
  }
  local_68 = (long *)0x0;
  if (*(int *)(param_1 + 0x16c) < 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x180) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x180) + 0x48), lVar5 != 0)) {
    if (*(char *)(lVar5 + 0x13) == '\0') {
      CookingGraph_CookingLevelSimulation__get_BagAddress(&local_80,param_1);
      pplStack_98 = pplStack_78;
      local_a0 = local_80;
      local_90 = local_70;
      uVar3 = CookingGraph_CookingLevelSimulation__Outgoing(param_1,&local_a0);
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    CookingGraph_CookingLevelSimulation__get_BagAddress(&local_80,param_1);
    pplStack_b8 = pplStack_78;
    local_c0 = local_80;
    local_b0 = local_70;
    uVar3 = CookingGraph_CookingLevelSimulation__Incoming(param_1,&local_c0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x180) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x180) + 0x48), lVar5 != 0)) {
      if (*(char *)(lVar5 + 0x13) == '\0') {
        lVar5 = CookingGraph_CookingLevelSimulation__Demand(param_1);
      }
      else {
        lVar5 = CookingGraph_CookingLevelSimulation__UnfilledDemand(param_1);
      }
      uVar11 = *(undefined8 *)(param_1 + 0xa0);
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar12 = puVar6[0x29];
      if (lVar12 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar13 = *puVar6;
        lVar12 = thunk_FUN_03f9944c(DAT_09179390);
        FUN_05322d94(lVar12,uVar13,DAT_091e7960,0);
        lVar7 = *(long *)(DAT_0918f298 + 0xb8);
        *(long *)(lVar7 + 0x148) = lVar12;
        thunk_FUN_03f5d7b8(lVar7 + 0x148,lVar12);
      }
      plVar4 = (long *)FUN_04b0cafc(uVar11,lVar12,DAT_091cb610);
      if (plVar4 != (long *)0x0) {
        lVar12 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar3 != 0) {
          piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917a828) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0444d5b8;
            }
            uVar3 = uVar3 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a828,0);
LAB_0444d5b8:
        plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
        pplStack_78 = &local_68;
        local_80 = 0;
        do {
          local_68 = plVar4;
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar12 = *plVar4;
          uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar3 != 0) {
            piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0444d63c;
              }
              uVar3 = uVar3 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_0444d63c:
          uVar3 = (*(code *)*puVar6)(plVar4,puVar6[1]);
          plVar4 = local_68;
          if ((uVar3 & 1) == 0) {
            if (local_68 == (long *)0x0) goto LAB_0444d7bc;
            lVar12 = *local_68;
            uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar3 == 0) goto LAB_0444d794;
            piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_0444d77c;
          }
          if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar12 = *local_68;
          uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar3 != 0) {
            piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_0917af28) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0444d6a0;
              }
              uVar3 = uVar3 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917af28,0);
LAB_0444d6a0:
          lVar12 = (*(code *)*puVar6)(plVar4,puVar6[1]);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar12 = *(long *)(lVar12 + 0x50);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar1 = *(uint *)(lVar12 + 0x18);
          plVar4 = local_68;
          if (0 < (int)uVar1) {
            uVar3 = 0;
            do {
              if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar7 = *(long *)(lVar12 + uVar3 * 8 + 0x20);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar7 = *(long *)(lVar7 + 0x20);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (0 < (int)uVar1) {
                lVar14 = 0;
                do {
                  if (uVar1 <= (uint)lVar14) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  lVar8 = *(long *)(lVar7 + 0x20 + lVar14 * 8);
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  FUN_053d8048(lVar5,*(undefined4 *)(lVar8 + 0x10),DAT_091a82b0);
                  uVar1 = *(uint *)(lVar7 + 0x18);
                  lVar14 = lVar14 + 1;
                } while ((int)lVar14 < (int)uVar1);
              }
              uVar1 = *(uint *)(lVar12 + 0x18);
              uVar3 = uVar3 + 1;
              plVar4 = local_68;
            } while ((int)uVar3 < (int)uVar1);
          }
        } while( true );
      }
    }
  }
  goto LAB_0444d980;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar10 = piVar10 + 4;
    if (uVar3 == 0) break;
LAB_0444d77c:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0444d7b0;
    }
  }
LAB_0444d794:
  puVar6 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_0444d7b0:
  (*(code *)*puVar6)(plVar4,puVar6[1]);
LAB_0444d7bc:
  lVar12 = *(long *)(param_1 + 0x178);
  CookingGraph_CookingLevelSimulation__get_BagAddress(&local_80,param_1);
  if (lVar12 != 0) {
    pplStack_d8 = pplStack_78;
    local_e0 = local_80;
    local_d0 = local_70;
    uVar11 = CookingGraph_Execution_CookingExecution__UnitsAt(lVar12,&local_e0,0);
    lVar12 = FUN_04b0451c(uVar11,DAT_091cadc0);
    if (lVar12 != 0) {
      if ((int)*(ulong *)(lVar12 + 0x18) < 1) {
        return;
      }
      uVar3 = 0;
      uVar9 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      puVar15 = (undefined4 *)(lVar12 + 0x28);
      do {
        if (uVar9 <= uVar3) {
LAB_0444d984:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (lVar5 == 0) break;
        uVar11 = *(undefined8 *)(puVar15 + -2);
        uVar9 = FUN_053d750c(lVar5,*puVar15,DAT_091a82c0);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x178) == 0) break;
          uVar9 = CookingGraph_Execution_CookingExecution__IsUnitClaimed
                            (*(long *)(param_1 + 0x178),uVar11,0);
          if ((uVar9 & 1) == 0) {
            iVar2 = CookingGraph_CookingLevelSimulation__FreeCell(param_1,0);
            if (iVar2 < 0) {
              return;
            }
            lVar7 = *(long *)(param_1 + 0x178);
            CookingGraph_CookingLevelSimulation__get_BagAddress(&local_80,param_1);
            CookingGraph_CookingLevelSimulation__GridAddress(&local_f8,iVar2);
            if (lVar7 == 0) break;
            pplStack_108 = pplStack_78;
            local_110 = local_80;
            local_100 = local_70;
            uStack_128 = uStack_f0;
            local_130 = local_f8;
            local_120 = local_e8;
            uVar9 = CookingGraph_Execution_CookingExecution__Relocate
                              (lVar7,&local_110,&local_130,uVar11,0);
            if ((uVar9 & 1) == 0) {
              return;
            }
            lVar7 = FUN_03f5c394(DAT_091801c0,1);
            if (lVar7 == 0) break;
            if (*(int *)(lVar7 + 0x18) == 0) goto LAB_0444d984;
            *(undefined8 *)(lVar7 + 0x20) = uVar11;
            CookingGraph_CookingLevelSimulation__Emit(param_1,0xd,iVar2,DAT_09212748);
          }
        }
        uVar9 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar3 = uVar3 + 1;
        puVar15 = puVar15 + 6;
        if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar3) {
          return;
        }
      } while( true );
    }
  }
LAB_0444d980:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$EstimateProjectedFootprint
// address: 0x4413078
// body: available
// range: 0x4413078-0x44137b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4413790 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4413794 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4413798 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441379c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44137a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44137a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44137ac to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44137b4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04413770) */
/* WARNING: Removing unreachable block (ram,0x044135cc) */
/* WARNING: Removing unreachable block (ram,0x044137b0) */
/* WARNING: Removing unreachable block (ram,0x044137a8) */

void CookingGraph_EstimatorBotScorer__EstimateProjectedFootprint
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  long *local_d8;
  long **pplStack_d0;
  undefined8 local_c8;
  ulong uStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined4 local_a4;
  long *local_a0;
  long **pplStack_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  
  if ((DAT_09517f0d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d090);
    FUN_03f5c2a4(&DAT_0919d098);
    FUN_03f5c2a4(&DAT_0919d078);
    FUN_03f5c2a4(&DAT_0919d080);
    FUN_03f5c2a4(&DAT_0919d0b0);
    FUN_03f5c2a4(&DAT_091762d0);
    FUN_03f5c2a4(&DAT_091a5e28);
    FUN_03f5c2a4(&DAT_091a5e30);
    FUN_03f5c2a4(&DAT_091a5e38);
    FUN_03f5c2a4(&DAT_09184160);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a598);
    FUN_03f5c2a4(&DAT_0917ac48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091a9418);
    FUN_03f5c2a4(&DAT_091a9420);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09517f0d = 1;
  }
  local_80 = 0;
  local_a4 = 0;
  local_b0 = (long *)0x0;
  pplStack_98 = (long **)0x0;
  local_a0 = (long *)0x0;
  local_88 = 0;
  local_90 = 0;
  if (*(int *)(DAT_09184160 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = CookingGraph_EstimatorBotScorer__CommittedInventory(param_2);
  lVar5 = CookingGraph_EstimatorBotScorer__CommittedInventory(param_3);
  if (lVar5 == 0) goto LAB_044137a4;
  FUN_06fe2efc(&local_d8,lVar5,DAT_0919d090);
  local_80 = local_b8;
  pplStack_98 = pplStack_d0;
  local_a0 = local_d8;
  local_88 = uStack_c0;
  local_90 = local_c8;
  local_d8 = (long *)0x0;
  pplStack_d0 = &local_a0;
  while (uVar6 = FUN_07276bd0(&local_a0,DAT_091a5e30), uVar11 = local_88, uVar7 = local_90,
        (uVar6 & 1) != 0) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06fe4630(lVar4,local_90,&local_a4,DAT_0919d098);
    uVar1 = local_a4;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Math__Max(uVar1,uVar11 & 0xffffffff,0);
    FUN_06fe2ae8(lVar4,uVar7,DAT_0919d0b0);
  }
  FUN_07276cfc(&local_a0,DAT_091a5e28);
  uVar7 = thunk_FUN_03f9944c(DAT_091762d0);
  uVar8 = FUN_06fe1e44(uVar7,lVar4,DAT_0919d080);
  if (param_4 == 0) {
    iVar2 = CookingGraph_EstimatorBotScorer__EstimatePipelineFootprint(param_1,uVar7);
    goto LAB_04413388;
  }
  if (*(char *)(param_4 + 0x30) == '\0') {
    plVar9 = (long *)CookingGraph_EstimatorBotScorer__IngredientsOf(uVar8,param_4,param_5);
    if (plVar9 != (long *)0x0) {
      lVar4 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917a598) {
            puVar10 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_04413434;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a598,0);
LAB_04413434:
      local_b0 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      pplStack_d0 = &local_b0;
      local_d8 = (long *)0x0;
      do {
        plVar9 = local_b0;
        if (local_b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *local_b0;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_09185b10) {
              puVar10 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_044134b0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_03f95da8(local_b0,DAT_09185b10,0);
LAB_044134b0:
        uVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        plVar9 = local_b0;
        if ((uVar11 & 1) == 0) {
          if (local_b0 == (long *)0x0) goto LAB_044132dc;
          lVar4 = *local_b0;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar11 == 0) goto LAB_04413594;
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_0441357c;
        }
        if (local_b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *local_b0;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_0917ac48) {
              puVar10 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_04413514;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_03f95da8(local_b0,DAT_0917ac48,0);
LAB_04413514:
        uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if (*(int *)(DAT_09184160 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        CookingGraph_EstimatorBotScorer__Add(0x3f800000,uVar7,uVar8);
      } while( true );
    }
    goto LAB_044137a4;
  }
  goto LAB_044132dc;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_04413724:
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar10 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_04413758;
    }
  }
LAB_0441373c:
  puVar10 = (undefined8 *)FUN_03f95da8(local_b0,DAT_09185a58,0);
LAB_04413758:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_04413764:
  iVar3 = CookingGraph_EstimatorBotScorer__EstimatePipelineFootprint(param_1,uVar7);
  iVar2 = (iVar2 - iVar3) + *(int *)(param_4 + 0x34);
  goto LAB_04413388;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0441357c:
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar10 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_044135b0;
    }
  }
LAB_04413594:
  puVar10 = (undefined8 *)FUN_03f95da8(local_b0,DAT_09185a58,0);
LAB_044135b0:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_044132dc:
  iVar2 = CookingGraph_EstimatorBotScorer__EstimatePipelineFootprint(param_1,uVar7);
  if ((0 < *(int *)(param_4 + 0x34)) && (*(char *)(param_4 + 0x30) == '\0')) {
    uVar7 = thunk_FUN_03f9944c(DAT_091762d0);
    uVar8 = FUN_06fe1d68(uVar7,DAT_0919d078);
    plVar9 = (long *)CookingGraph_EstimatorBotScorer__IngredientsOf(uVar8,param_4,param_5);
    if (plVar9 != (long *)0x0) {
      lVar4 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917a598) {
            puVar10 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_044135dc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a598,0);
LAB_044135dc:
      local_b0 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      pplStack_d0 = &local_b0;
      local_d8 = (long *)0x0;
      do {
        plVar9 = local_b0;
        if (local_b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *local_b0;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_09185b10) {
              puVar10 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_04413658;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_03f95da8(local_b0,DAT_09185b10,0);
LAB_04413658:
        uVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        plVar9 = local_b0;
        if ((uVar11 & 1) == 0) {
          if (local_b0 == (long *)0x0) goto LAB_04413764;
          lVar4 = *local_b0;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar11 == 0) goto LAB_0441373c;
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_04413724;
        }
        if (local_b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *local_b0;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_0917ac48) {
              puVar10 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_044136bc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_03f95da8(local_b0,DAT_0917ac48,0);
LAB_044136bc:
        uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if (*(int *)(DAT_09184160 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        CookingGraph_EstimatorBotScorer__Add(0x3f800000,uVar7,uVar8);
      } while( true );
    }
LAB_044137a4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_04413388:
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Math__Max(0,iVar2,0);
  return;
}


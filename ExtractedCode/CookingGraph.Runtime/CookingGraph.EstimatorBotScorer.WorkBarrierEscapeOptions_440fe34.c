// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$WorkBarrierEscapeOptions
// address: 0x440fe34
// body: available
// range: 0x440fe34-0x4410577 inclusive
// range: 0x441057c-0x441067f inclusive
// range: 0x44106c0-0x4410703 inclusive
// range: 0x4410714-0x441073f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4410574 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441067c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4410714 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4410718 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441071c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4410720 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4410724 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441072c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4410730 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4410734 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441073c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044105fc) */
/* WARNING: Removing unreachable block (ram,0x04410728) */

long CookingGraph_EstimatorBotScorer__WorkBarrierEscapeOptions
               (long param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long local_f0;
  long *plStack_e8;
  long local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  long *local_c8;
  long local_c0;
  long *plStack_b8;
  long local_b0;
  undefined4 local_a4;
  long local_a0;
  long *plStack_98;
  long local_90;
  ulong local_88;
  undefined8 local_80;
  
  if ((DAT_09517f01 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d090);
    FUN_03f5c2a4(&DAT_0919d098);
    FUN_03f5c2a4(&DAT_0919d080);
    FUN_03f5c2a4(&DAT_0919d0b0);
    FUN_03f5c2a4(&DAT_091762d0);
    FUN_03f5c2a4(&DAT_091c9580);
    FUN_03f5c2a4(&DAT_091c9508);
    FUN_03f5c2a4(&DAT_091a2368);
    FUN_03f5c2a4(&DAT_091a5e28);
    FUN_03f5c2a4(&DAT_091a2370);
    FUN_03f5c2a4(&DAT_091a5e30);
    FUN_03f5c2a4(&DAT_091a5e38);
    FUN_03f5c2a4(&DAT_091a2378);
    FUN_03f5c2a4(&DAT_09184160);
    FUN_03f5c2a4(&DAT_09179480);
    FUN_03f5c2a4(&DAT_09179080);
    FUN_03f5c2a4(&DAT_091a7f18);
    FUN_03f5c2a4(&DAT_091a7f10);
    FUN_03f5c2a4(&DAT_09179d48);
    FUN_03f5c2a4(&DAT_0917a148);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a598);
    FUN_03f5c2a4(&DAT_0917ac48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091a9418);
    FUN_03f5c2a4(&DAT_091a9420);
    FUN_03f5c2a4(&DAT_091ab4e8);
    FUN_03f5c2a4(&DAT_091ab4d8);
    FUN_03f5c2a4(&DAT_0917bd40);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09190670);
    FUN_03f5c2a4(&DAT_091e9bc0);
    FUN_03f5c2a4(&DAT_09190678);
    DAT_09517f01 = 1;
  }
  local_80 = 0;
  local_a4 = 0;
  local_c0 = 0;
  plStack_b8 = (long *)0x0;
  local_b0 = 0;
  plStack_98 = (long *)0x0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_c8 = (long *)0x0;
  lVar2 = thunk_FUN_03f9944c(DAT_09190670);
  System_Object___ctor(lVar2,0);
  lVar3 = thunk_FUN_03f9944c(DAT_09179d48);
  FUN_053eb530(lVar3,DAT_091a7f10);
  if (param_2 == 0) {
    return lVar3;
  }
  uVar12 = *(undefined8 *)(param_2 + 0x48);
  if (*(int *)(DAT_09184160 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = CookingGraph_EstimatorBotScorer__CommittedInventory(uVar12);
  if (lVar2 != 0) {
    plVar13 = (long *)(lVar2 + 0x10);
    *plVar13 = lVar4;
    thunk_FUN_03f5d7b8(plVar13,lVar4);
    lVar4 = CookingGraph_EstimatorBotScorer__CommittedInventory(param_4);
    if (lVar4 != 0) {
      FUN_06fe2efc(&local_f0,lVar4,DAT_0919d090);
      local_80 = local_d0;
      plStack_98 = plStack_e8;
      local_a0 = local_f0;
      local_88 = uStack_d8;
      local_90 = local_e0;
      local_f0 = 0;
      plStack_e8 = &local_a0;
      while (uVar5 = FUN_07276bd0(&local_a0,DAT_091a5e30), uVar6 = local_88, lVar4 = local_90,
            (uVar5 & 1) != 0) {
        if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06fe4630(*plVar13,local_90,&local_a4,DAT_0919d098);
        uVar1 = local_a4;
        lVar14 = *plVar13;
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Math__Max(uVar1,uVar6 & 0xffffffff,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06fe2ae8(lVar14,lVar4,DAT_0919d0b0);
      }
      FUN_07276cfc(&local_a0,DAT_091a5e28);
      CookingGraph_EstimatorBotScorer__AdvanceSingleInputProcesses(param_1,*plVar13);
      lVar4 = *(long *)(param_2 + 0x30);
      if (lVar4 == 0) {
        lVar4 = thunk_FUN_03f9944c(DAT_0917bd40);
        FUN_057e0400(lVar4,DAT_091ab4d8);
        if (lVar4 == 0) goto LAB_04410730;
      }
      FUN_057e185c(&local_f0,lVar4,DAT_091ab4e8);
      local_b0 = local_e0;
      plStack_b8 = plStack_e8;
      local_c0 = local_f0;
      local_f0 = 0;
      plStack_e8 = &local_c0;
LAB_0441020c:
      do {
        do {
          do {
            do {
              uVar6 = FUN_071bd28c(&local_c0,DAT_091a2370);
              lVar14 = local_b0;
              lVar4 = local_f0;
              if ((uVar6 & 1) == 0) {
                FUN_071bd288(plStack_e8,DAT_091a2368);
                if (lVar4 == 0) {
                  return lVar3;
                }
                    /* WARNING: Subroutine does not return */
                FUN_03f5c548(lVar4);
              }
              lVar4 = thunk_FUN_03f9944c(DAT_09190678);
              System_Object___ctor(lVar4,0);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              plVar13 = (long *)(lVar4 + 0x18);
              *plVar13 = lVar2;
              thunk_FUN_03f5d7b8(plVar13,lVar2);
            } while (lVar14 == 0);
            if (*(int *)(DAT_09184160 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = CookingGraph_EstimatorBotScorer__IsVisiblyEligible(lVar14,param_2);
          } while ((uVar6 & 1) == 0);
          if (param_3 == (long *)0x0) goto LAB_044103b8;
          uVar12 = *(undefined8 *)(lVar14 + 0x18);
          lVar10 = *param_3;
          uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_0917a148) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                goto LAB_044102e8;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917a148,4);
LAB_044102e8:
          uVar6 = (*(code *)*puVar7)(param_3,uVar12,puVar7[1]);
        } while ((uVar6 & 1) != 0);
        if (*(int *)(DAT_09184160 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar12 = CookingGraph_EstimatorBotScorer__ConsumedIds(lVar14);
        uVar8 = thunk_FUN_03f9944c(DAT_09179080);
        lVar10 = *param_3;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917a148) {
              lVar10 = lVar10 + (long)(*piVar11 + 4) * 0x10 + 0x138;
              goto LAB_04410388;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        lVar10 = FUN_03f95da8(param_3,DAT_0917a148,4);
LAB_04410388:
        FUN_05322d94(uVar8,param_3,*(undefined8 *)(lVar10 + 8),0);
        uVar6 = FUN_04ab6f28(uVar12,uVar8,DAT_091c9508);
      } while ((uVar6 & 1) != 0);
LAB_044103b8:
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar8 = *(undefined8 *)(*plVar13 + 0x10);
      uVar12 = thunk_FUN_03f9944c(DAT_091762d0);
      FUN_06fe1e44(uVar12,uVar8,DAT_0919d080);
      puVar7 = (undefined8 *)(lVar4 + 0x10);
      *puVar7 = uVar12;
      uVar12 = thunk_FUN_03f5d7b8(puVar7,uVar12);
      plVar13 = (long *)CookingGraph_EstimatorBotScorer__IngredientsOf(uVar12,lVar14,param_2);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *plVar13;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917a598) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04410468;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917a598,0);
LAB_04410468:
      plVar13 = (long *)(*(code *)*puVar9)(plVar13,puVar9[1]);
      do {
        local_c8 = plVar13;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *plVar13;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_09185b10) {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_044104d4;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185b10,0);
LAB_044104d4:
        uVar6 = (*(code *)*puVar9)(plVar13,puVar9[1]);
        plVar13 = local_c8;
        if ((uVar6 & 1) == 0) goto LAB_0441057c;
        if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *local_c8;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917ac48) {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04410538;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(local_c8,DAT_0917ac48,0);
LAB_04410538:
        uVar12 = (*(code *)*puVar9)(plVar13,puVar9[1]);
        uVar8 = *puVar7;
        if (*(int *)(DAT_09184160 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        CookingGraph_EstimatorBotScorer__Add(0x3f800000,uVar8,uVar12);
        plVar13 = local_c8;
      } while( true );
    }
  }
LAB_04410730:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_0441057c:
  if (local_c8 != (long *)0x0) {
    lVar10 = *local_c8;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_09185a58) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_044105e4;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(local_c8,DAT_09185a58,0);
LAB_044105e4:
    (*(code *)*puVar9)(plVar13,puVar9[1]);
  }
  CookingGraph_EstimatorBotScorer__AdvanceSingleInputProcesses(param_1,*puVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar12 = thunk_FUN_03f9944c(DAT_09179480);
  FUN_05322d94(uVar12,lVar4,DAT_091e9bc0,0);
  uVar6 = FUN_04ab6f28(uVar8,uVar12,DAT_091c9580);
  if ((uVar6 & 1) != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_053ec72c(lVar3,lVar14,DAT_091a7f18);
  }
  goto LAB_0441020c;
}


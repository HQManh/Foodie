// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$BuildIndex
// address: 0x441446c
// body: available
// range: 0x441446c-0x4414ae7 inclusive
// range: 0x4414aec-0x4414aef inclusive
// range: 0x4414af4-0x4414af7 inclusive
// range: 0x4414b7c-0x4414e53 inclusive
// range: 0x4414e58-0x4414e5b inclusive
// range: 0x4414ea0-0x4415073 inclusive
// range: 0x44150b0-0x44150db inclusive
// range: 0x44150e0-0x44150e7 inclusive
// range: 0x44150ec-0x44150ef inclusive
// range: 0x4415148-0x441527b inclusive
// range: 0x441528c-0x44152e7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4414ae4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4414aec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4414af4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4414e50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4414e58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4415070 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44150d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44150e4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44150ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4415258 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441528c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4415290 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04414e48) */
/* WARNING: Removing unreachable block (ram,0x04414e4c) */
/* WARNING: Removing unreachable block (ram,0x04414994) */
/* WARNING: Removing unreachable block (ram,0x044152a8) */
/* WARNING: Removing unreachable block (ram,0x044152b4) */
/* WARNING: Removing unreachable block (ram,0x04415068) */
/* WARNING: Removing unreachable block (ram,0x0441506c) */
/* WARNING: Removing unreachable block (ram,0x04414ec8) */
/* WARNING: Removing unreachable block (ram,0x04414adc) */
/* WARNING: Removing unreachable block (ram,0x04414ae0) */
/* WARNING: Removing unreachable block (ram,0x044150e0) */
/* WARNING: Removing unreachable block (ram,0x044152c0) */
/* WARNING: Removing unreachable block (ram,0x044152e0) */
/* WARNING: Removing unreachable block (ram,0x044150d0) */
/* WARNING: Removing unreachable block (ram,0x044150d4) */
/* WARNING: Removing unreachable block (ram,0x044152d4) */
/* WARNING: Removing unreachable block (ram,0x04414bac) */
/* WARNING: Removing unreachable block (ram,0x04415170) */

void CookingGraph_EstimatorBotScorer__BuildIndex(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong extraout_x1;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 local_138;
  undefined8 *puStack_130;
  long local_128;
  undefined8 local_120;
  undefined8 *puStack_118;
  long local_110;
  undefined8 local_100;
  undefined8 *puStack_f8;
  long local_f0;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09517f1a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182da0);
    FUN_03f5c2a4(&DAT_0919d0d8);
    FUN_03f5c2a4(&DAT_0919d0e0);
    FUN_03f5c2a4(&DAT_0919d0f8);
    FUN_03f5c2a4(&DAT_091ca4a0);
    FUN_03f5c2a4(&DAT_091a2600);
    FUN_03f5c2a4(&DAT_091a2dc8);
    FUN_03f5c2a4(&DAT_091a51f8);
    FUN_03f5c2a4(&DAT_091a3db8);
    FUN_03f5c2a4(&DAT_091a3dd0);
    FUN_03f5c2a4(&DAT_091a3380);
    FUN_03f5c2a4(&DAT_091a2608);
    FUN_03f5c2a4(&DAT_091a2dd0);
    FUN_03f5c2a4(&DAT_091a3dc0);
    FUN_03f5c2a4(&DAT_091a3dd8);
    FUN_03f5c2a4(&DAT_091a3388);
    FUN_03f5c2a4(&DAT_091a5200);
    FUN_03f5c2a4(&DAT_091a3390);
    FUN_03f5c2a4(&DAT_091a3dc8);
    FUN_03f5c2a4(&DAT_091a2610);
    FUN_03f5c2a4(&DAT_091a3de0);
    FUN_03f5c2a4(&DAT_091a5208);
    FUN_03f5c2a4(&DAT_091a2dd8);
    FUN_03f5c2a4(&DAT_09178978);
    FUN_03f5c2a4(&DAT_091a8268);
    FUN_03f5c2a4(&DAT_091a8270);
    FUN_03f5c2a4(&DAT_091ada08);
    FUN_03f5c2a4(&DAT_091b29c8);
    FUN_03f5c2a4(&DAT_091ada00);
    FUN_03f5c2a4(&DAT_091b29b8);
    FUN_03f5c2a4(&DAT_091abbf0);
    FUN_03f5c2a4(&DAT_091acf30);
    FUN_03f5c2a4(&DAT_091af2b8);
    FUN_03f5c2a4(&DAT_091ada18);
    FUN_03f5c2a4(&DAT_091af280);
    FUN_03f5c2a4(&DAT_091af270);
    FUN_03f5c2a4(&DAT_091abbd0);
    FUN_03f5c2a4(&DAT_091af2a0);
    FUN_03f5c2a4(&DAT_091abc28);
    FUN_03f5c2a4(&DAT_0917c960);
    FUN_03f5c2a4(&DAT_0917be78);
    FUN_03f5c2a4(&DAT_0917c968);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09190700);
    FUN_03f5c2a4(&DAT_091e9b30);
    FUN_03f5c2a4(&DAT_09190660);
    DAT_09517f1a = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  local_e0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  local_100 = 0;
  puStack_f8 = (undefined8 *)0x0;
  local_f0 = 0;
  local_120 = 0;
  puStack_118 = (undefined8 *)0x0;
  local_110 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x80);
    if (lVar10 == 0) {
      lVar10 = thunk_FUN_03f9944c(DAT_0917c960);
      FUN_057e0400(lVar10,DAT_091af270);
      if (lVar10 == 0) goto LAB_04415258;
    }
    FUN_057e185c(&local_138,lVar10,DAT_091af280);
    local_70 = local_128;
    puStack_78 = puStack_130;
    local_80 = local_138;
LAB_044147a0:
    uVar3 = FUN_071bd28c(&local_80,DAT_091a3dc0);
    lVar10 = local_70;
    if ((uVar3 & 1) != 0) {
      if (local_70 != 0) {
        uVar11 = *(undefined8 *)(local_70 + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Equality(uVar11,0,0);
        if ((uVar3 & 1) == 0) {
          lVar4 = thunk_FUN_03f9944c(DAT_09190700);
          CookingGraph_EstimatorBotScorer_ProcessStep___ctor();
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          puVar12 = (undefined8 *)(lVar4 + 0x10);
          *puVar12 = *(undefined8 *)(lVar10 + 0x18);
          thunk_FUN_03f5d7b8(puVar12);
          if (*(long *)(param_1 + 0x18) == 0) {
            uVar3 = (ulong)*(uint *)(lVar10 + 0x28);
          }
          else {
            CookingGraph_CookingRuntimeSettings__ProcessFor(*(long *)(param_1 + 0x18),lVar10,0);
            uVar3 = extraout_x1;
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_Math__Max(1,uVar3 & 0xffffffff,0);
          *(undefined4 *)(lVar4 + 0x20) = uVar2;
          lVar10 = *(long *)(lVar10 + 0x20);
          if (lVar10 == 0) {
            lVar10 = thunk_FUN_03f9944c(DAT_0917c968);
            FUN_057e0400(lVar10,DAT_091af2a0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          FUN_057e185c(&local_138,lVar10,DAT_091af2b8);
          local_90 = local_128;
          puStack_98 = puStack_130;
          local_a0 = local_138;
          local_138 = 0;
          puStack_130 = &local_a0;
LAB_044148c8:
          uVar3 = FUN_071bd28c(&local_a0,DAT_091a3dd8);
          lVar10 = local_90;
          if ((uVar3 & 1) != 0) {
            if (local_90 != 0) {
              uVar11 = *(undefined8 *)(local_90 + 0x10);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
              lVar6 = DAT_091ada00;
              if ((uVar3 & 1) != 0) {
                lVar5 = *(long *)(lVar4 + 0x18);
                if (lVar5 != 0) {
                  lVar7 = *(long *)(lVar5 + 0x10);
                  uVar11 = *(undefined8 *)(lVar10 + 0x10);
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar7 != 0) {
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                      puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                      *puVar8 = uVar11;
                      thunk_FUN_03f5d7b8(puVar8);
                    }
                    else {
                      FUN_057e0c68(lVar5,uVar11,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    goto LAB_044148c8;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
            }
            goto LAB_044148c8;
          }
          FUN_071bd288(&local_a0,DAT_091a3dd0);
          if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = FUN_06fd8648(*(long *)(param_1 + 0x38),*puVar12,DAT_0919d0e0);
          if ((uVar3 & 1) == 0) {
            if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_06fd8454(*(long *)(param_1 + 0x38),*(undefined8 *)(lVar4 + 0x10),lVar4,DAT_0919d0d8)
            ;
          }
          lVar10 = DAT_091b29c8;
          lVar6 = *(long *)(param_1 + 0x48);
          if (lVar6 != 0) {
            lVar5 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar5 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                plVar9 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                *plVar9 = lVar4;
                thunk_FUN_03f5d7b8(plVar9,lVar4);
              }
              else {
                FUN_057e0c68(lVar6,lVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_057e185c(&local_138,*(long *)(lVar4 + 0x18),DAT_091ada18);
              local_b0 = local_128;
              puStack_b8 = puStack_130;
              local_c0 = local_138;
              local_138 = 0;
              puStack_130 = &local_c0;
              while (uVar3 = FUN_071bd28c(&local_c0,DAT_091a3388), lVar10 = local_b0,
                    (uVar3 & 1) != 0) {
                if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar3 = FUN_06fd8648(*(long *)(param_1 + 0x40),local_b0,DAT_0919d0e0);
                if ((uVar3 & 1) == 0) {
                  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  FUN_06fd8454(*(long *)(param_1 + 0x40),lVar10,lVar4,DAT_0919d0d8);
                }
              }
              FUN_071bd288(&local_c0,DAT_091a3380);
              goto LAB_044147a0;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      goto LAB_044147a0;
    }
    FUN_071bd288(&local_80,DAT_091a3db8);
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x90), lVar10 != 0)) {
      FUN_057e185c(&local_138,lVar10,DAT_091acf30);
      local_d0 = local_128;
      puStack_d8 = puStack_130;
      local_e0 = local_138;
      while (uVar3 = FUN_071bd28c(&local_e0,DAT_091a2dd0), lVar10 = local_d0, (uVar3 & 1) != 0) {
        lVar4 = thunk_FUN_03f9944c(DAT_09190700);
        CookingGraph_EstimatorBotScorer_ProcessStep___ctor();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
        thunk_FUN_03f5d7b8();
        lVar6 = DAT_09190660;
        lVar5 = *(long *)(lVar4 + 0x18);
        *(undefined4 *)(lVar4 + 0x20) = 1;
        uVar11 = *(undefined8 *)(lVar10 + 0x28);
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar6 = DAT_09190660;
        }
        puVar12 = *(undefined8 **)(lVar6 + 0xb8);
        lVar10 = puVar12[0xb];
        if (lVar10 == 0) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar12 = *(undefined8 **)(DAT_09190660 + 0xb8);
          }
          uVar13 = *puVar12;
          lVar10 = thunk_FUN_03f9944c(DAT_09178978);
          FUN_05324070(lVar10,uVar13,DAT_091e9b30,0);
          plVar9 = (long *)(*(long *)(DAT_09190660 + 0xb8) + 0x58);
          *plVar9 = lVar10;
          thunk_FUN_03f5d7b8(plVar9,lVar10);
        }
        uVar11 = FUN_04af8044(uVar11,lVar10,DAT_091ca4a0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar11,uVar11);
        }
        FUN_057e0e78(lVar5,uVar11,DAT_091ada08);
        if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06fd8440(*(long *)(param_1 + 0x38),*(undefined8 *)(lVar4 + 0x10),lVar4,DAT_0919d0f8);
        lVar10 = DAT_091b29c8;
        lVar6 = *(long *)(param_1 + 0x48);
        if (lVar6 == 0) {
LAB_0441528c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_0441528c;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          plVar9 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *plVar9 = lVar4;
          thunk_FUN_03f5d7b8(plVar9,lVar4);
        }
        else {
          FUN_057e0c68(lVar6,lVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_057e185c(&local_138,*(long *)(lVar4 + 0x18),DAT_091ada18);
        local_c0 = local_138;
        local_138 = 0;
        puStack_b8 = puStack_130;
        local_b0 = local_128;
        puStack_130 = &local_c0;
        while (uVar3 = FUN_071bd28c(&local_c0,DAT_091a3388), lVar10 = local_b0, (uVar3 & 1) != 0) {
          if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = FUN_06fd8648(*(long *)(param_1 + 0x40),local_b0,DAT_0919d0e0);
          if ((uVar3 & 1) == 0) {
            if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_06fd8454(*(long *)(param_1 + 0x40),lVar10,lVar4,DAT_0919d0d8);
          }
        }
        FUN_071bd288(&local_c0,DAT_091a3380);
      }
      FUN_071bd288(&local_e0,DAT_091a2dc8);
      if (*(long *)(param_1 + 0x10) != 0) {
        lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
        if (lVar10 == 0) {
          lVar10 = thunk_FUN_03f9944c(DAT_0917be78);
          FUN_057e0400(lVar10,DAT_091abbd0);
          if (lVar10 == 0) goto LAB_04415258;
        }
        FUN_057e185c(&local_138,lVar10,DAT_091abbf0);
        puStack_f8 = puStack_130;
        local_100 = local_138;
        local_f0 = local_128;
        while (uVar3 = FUN_071bd28c(&local_100,DAT_091a2608), lVar10 = local_f0, (uVar3 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Inequality(lVar10,0,0);
          if ((uVar3 & 1) != 0) {
            lVar10 = CookingGraph_EstimatorBotScorer__SlotsOf(param_1,lVar10);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_057e185c(&local_138,lVar10,DAT_091b29b8);
            puStack_118 = puStack_130;
            local_120 = local_138;
            local_110 = local_128;
            while (uVar3 = FUN_071bd28c(&local_120,DAT_091a5200), (uVar3 & 1) != 0) {
              if (local_110 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(long *)(local_110 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_057e185c(&local_138,*(long *)(local_110 + 0x18),DAT_091ada18);
              local_c0 = local_138;
              local_138 = 0;
              puStack_b8 = puStack_130;
              local_b0 = local_128;
              puStack_130 = &local_c0;
              while (uVar3 = FUN_071bd28c(&local_c0,DAT_091a3388), (uVar3 & 1) != 0) {
                if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                FUN_053ec72c(*(long *)(param_1 + 0x78),local_b0,DAT_091a8268);
              }
              FUN_071bd288(&local_c0,DAT_091a3380);
            }
            FUN_071bd288(&local_120,DAT_091a51f8);
          }
        }
        FUN_071bd288(&local_100,DAT_091a2600);
        lVar10 = *(long *)(param_1 + 0x10);
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0x88) != 0)) {
          if (*(int *)(*(long *)(lVar10 + 0x88) + 0x18) < 1) {
            return;
          }
          lVar4 = *(long *)(param_1 + 0x18);
          if (lVar4 == 0) {
            lVar4 = CookingGraph_CookingRuntimeSettings__Resolve(lVar10,0,0,0,0);
          }
          lVar6 = thunk_FUN_03f9944c(DAT_09182da0);
          CookingGraph_CookingGraphIndex___ctor(lVar6,lVar10,lVar4,0);
          if (((*(long *)(param_1 + 0x78) != 0) &&
              (FUN_053ebbdc(*(long *)(param_1 + 0x78),DAT_091a8270), lVar6 != 0)) &&
             (lVar10 = *(long *)(lVar6 + 0x10), lVar10 != 0)) {
            uVar3 = 0;
            do {
              if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar3) {
                return;
              }
              lVar4 = *(long *)(lVar6 + 0x58);
              if (lVar4 == 0) break;
              if (*(uint *)(lVar4 + 0x18) <= uVar3) {
LAB_044152b0:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              if (*(char *)(lVar4 + uVar3 + 0x20) != '\0') {
                if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_044152b0;
                if (*(long *)(param_1 + 0x78) == 0) break;
                FUN_053ec72c(*(long *)(param_1 + 0x78),*(undefined8 *)(lVar10 + uVar3 * 8 + 0x20),
                             DAT_091a8268);
              }
              lVar10 = *(long *)(lVar6 + 0x10);
              uVar3 = uVar3 + 1;
            } while (lVar10 != 0);
          }
        }
      }
    }
  }
LAB_04415258:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


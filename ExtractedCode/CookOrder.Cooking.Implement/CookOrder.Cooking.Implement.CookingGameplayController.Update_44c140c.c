// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayController$$Update
// address: 0x44c140c
// body: available
// range: 0x44c140c-0x44c1f67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c1b60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c1d80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c1f30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c1f34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c1f38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c1f3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c1f40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c1f44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c1f48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c1f4c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c1f50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c1f54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044c19ec) */
/* WARNING: Removing unreachable block (ram,0x044c1be4) */
/* WARNING: Removing unreachable block (ram,0x044c1f60) */
/* WARNING: Removing unreachable block (ram,0x044c1e14) */
/* WARNING: Removing unreachable block (ram,0x044c1f58) */

void CookOrder_Cooking_Implement_CookingGameplayController__Update(long param_1)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined8 local_160;
  long **pplStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long **pplStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long **pplStack_d8;
  undefined8 local_d0;
  long **pplStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *local_88;
  long *local_78;
  
  if ((DAT_09518263 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a430);
    FUN_03f5c2a4(&DAT_0917a450);
    FUN_03f5c2a4(&DAT_0917aaf8);
    FUN_03f5c2a4(&DAT_0917aad8);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518263 = 1;
  }
  local_78 = (long *)0x0;
  local_88 = (long *)0x0;
  pplStack_c8 = (long **)0x0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  CookOrder_Cooking_Implement_CookingGameplayController__UpdateAutoplay(param_1);
  uVar4 = CakeOrder_InGame_LevelBaseCakeOrderAbstract__get_IsAllowInteract(param_1,0);
  if ((uVar4 & 1) != 0) {
    puVar10 = (undefined8 *)(param_1 + 0xf8);
    plVar11 = (long *)*puVar10;
    if (plVar11 != (long *)0x0) {
      lVar7 = *plVar11;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185a58) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_044c1528;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185a58,0);
LAB_044c1528:
      (*(code *)*puVar5)(plVar11,puVar5[1]);
      *puVar10 = 0;
      thunk_FUN_03f5d7b8(puVar10,0);
    }
  }
  CakeOrder_InGame_LevelBaseCakeOrderAbstract__Update(param_1,0);
  if (*(long *)(param_1 + 0x128) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x50) < 4) {
    return;
  }
  if (*(int *)(param_1 + 0x50) == 5) {
    return;
  }
  uVar4 = CakeOrder_InGame_LevelBaseCakeOrderAbstract__get_IsAllowInteract(param_1,0);
  if (((uVar4 & 1) == 0) && (plVar11 = (long *)(param_1 + 0xf8), *plVar11 == 0)) {
    if (*(long *)(param_1 + 0x128) == 0) goto LAB_044c1f3c;
    lVar7 = CookingGraph_CookingLevelSession__Hold(*(long *)(param_1 + 0x128),0);
    *plVar11 = lVar7;
    thunk_FUN_03f5d7b8(plVar11,lVar7);
  }
  uVar4 = CakeOrder_InGame_LevelBaseCakeOrderAbstract__get_IsAllowInteract(param_1,0);
  if ((uVar4 & 1) != 0) {
    puVar10 = (undefined8 *)(param_1 + 0xf8);
    plVar11 = (long *)*puVar10;
    if (plVar11 != (long *)0x0) {
      lVar7 = *plVar11;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185a58) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_044c1618;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185a58,0);
LAB_044c1618:
      (*(code *)*puVar5)(plVar11,puVar5[1]);
      *puVar10 = 0;
      thunk_FUN_03f5d7b8(puVar10,0);
    }
  }
  if ((*(long *)(param_1 + 0x118) == 0) || (*(long *)(param_1 + 0xd8) == 0)) goto LAB_044c1f3c;
  CookOrder_Cooking_Implement_CookingGameplayPresentation__SetBoardWarning
            (*(long *)(param_1 + 0xd8),*(undefined4 *)(*(long *)(param_1 + 0x118) + 0x140),0);
  uVar4 = CakeOrder_InGame_LevelBaseCakeOrderAbstract__get_IsAllowInteract(param_1,0);
  if ((uVar4 & 1) == 0) {
LAB_044c1684:
    bVar2 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x128) == 0) goto LAB_044c1f3c;
    uVar4 = CookingGraph_CookingLevelSession__get_IsHeld(*(long *)(param_1 + 0x128),0);
    if ((uVar4 & 1) != 0) goto LAB_044c1684;
    lVar7 = *(long *)(param_1 + 0xd8);
    if (lVar7 == 0) goto LAB_044c1f3c;
    if (*(char *)(lVar7 + 0x2b4) != '\0') goto LAB_044c1684;
    bVar2 = CookOrder_Cooking_Implement_CookingGameplayPresentation__get_IsChoreographing(lVar7,0);
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    *(byte *)(*(long *)(param_1 + 0x128) + 0x28) = bVar2 & 1;
    if ((*(long *)(param_1 + 0xd8) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0xd8) + 0x1c0), lVar7 != 0)) {
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar4 = 0;
        uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar8 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar12 = *(long *)(lVar7 + 0x20 + uVar4 * 8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar8 = UnityEngine_Object__op_Implicit(lVar12,0);
          if ((uVar8 & 1) != 0) {
            if (lVar12 == 0) goto LAB_044c1f3c;
            CookOrder_Cooking_Implement_CookingToolPresentation__SetPaused(lVar12,bVar2 & 1,0);
          }
          uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      lVar7 = *(long *)(param_1 + 0xd8);
      if ((bVar2 & 1) == 0) {
        UnityEngine_Time__get_deltaTime(0);
        if (lVar7 == 0) goto LAB_044c1f3c;
        CookOrder_Cooking_Implement_CookingGameplayPresentation__Advance(lVar7,0);
        lVar7 = *(long *)(param_1 + 0x128);
        fVar13 = (float)UnityEngine_Time__get_deltaTime(0);
        fVar14 = (float)UnityEngine_Time__get_timeScale(0);
        fVar15 = 0.0;
        if (fVar14 != 0.0) {
          fVar15 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
          fVar14 = (float)UnityEngine_Time__get_maximumDeltaTime(0);
          if (fVar14 <= fVar15) {
            fVar15 = fVar14;
          }
        }
        dVar16 = (double)fVar13;
        dVar17 = (double)fVar15;
        fVar15 = (float)UnityEngine_Time__get_deltaTime(0);
      }
      else {
        if (lVar7 == 0) goto LAB_044c1f3c;
        fVar15 = 0.0;
        CookOrder_Cooking_Implement_CookingGameplayPresentation__Advance(0,lVar7,0);
        lVar7 = *(long *)(param_1 + 0x128);
        dVar16 = 0.0;
        dVar17 = 0.0;
      }
      if (lVar7 != 0) {
        CookingGraph_CookingLevelSession__Advance(dVar16,dVar17,(double)fVar15,lVar7,0);
        if (*(long *)(param_1 + 0x118) != 0) {
          lVar7 = CookingGraph_CookingLevelSimulation__ReadSnapshot(*(long *)(param_1 + 0x118),0);
          if (*(long *)(param_1 + 0x118) != 0) {
            plVar11 = (long *)CookingGraph_CookingLevelSimulation__DrainEvents
                                        (*(long *)(param_1 + 0x118),0);
            if ((*(long *)(param_1 + 0xd8) != 0) &&
               (CookOrder_Cooking_Implement_CookingGameplayPresentation__PresentPlateMoves
                          (*(long *)(param_1 + 0xd8),0), plVar11 != (long *)0x0)) {
              lVar12 = *plVar11;
              uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar4 != 0) {
                piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == DAT_0917a450) {
                    puVar10 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_044c1868;
                  }
                  uVar4 = uVar4 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar4 != 0);
              }
              puVar10 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a450,0);
LAB_044c1868:
              local_78 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
              pplStack_118 = &local_78;
              local_120 = 0;
              do {
                plVar1 = local_78;
                if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar12 = *local_78;
                uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar4 != 0) {
                  piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                      puVar10 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_044c18e4;
                    }
                    uVar4 = uVar4 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar4 != 0);
                }
                puVar10 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185b10,0);
LAB_044c18e4:
                uVar4 = (*(code *)*puVar10)(plVar1,puVar10[1]);
                plVar1 = local_78;
                if ((uVar4 & 1) == 0) {
                  if (local_78 == (long *)0x0) goto LAB_044c19e0;
                  lVar12 = *local_78;
                  uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar4 == 0) goto LAB_044c19b8;
                  piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  goto LAB_044c19a0;
                }
                if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar12 = *local_78;
                uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar4 != 0) {
                  piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == DAT_0917aaf8) {
                      puVar10 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_044c1948;
                    }
                    uVar4 = uVar4 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar4 != 0);
                }
                puVar10 = (undefined8 *)FUN_03f95da8(local_78,DAT_0917aaf8,0);
LAB_044c1948:
                uVar6 = (*(code *)*puVar10)(plVar1,puVar10[1]);
                if (*(long *)(param_1 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550(0,uVar6);
                }
                CookOrder_Cooking_Implement_CookingGameplayPresentation__PresentLevelEffect
                          (*(long *)(param_1 + 0xd8),uVar6,0);
              } while( true );
            }
          }
        }
      }
    }
  }
  goto LAB_044c1f3c;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
LAB_044c19a0:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_044c19d4;
    }
  }
LAB_044c19b8:
  puVar10 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185a58,0);
LAB_044c19d4:
  (*(code *)*puVar10)(plVar1,puVar10[1]);
LAB_044c19e0:
  lVar12 = *plVar11;
  uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar4 != 0) {
    piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_0917a450) {
        puVar10 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_044c1a3c;
      }
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar4 != 0);
  }
  puVar10 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a450,0);
LAB_044c1a3c:
  plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
  pplStack_118 = &local_78;
  local_120 = 0;
  do {
    local_78 = plVar11;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar12 = *plVar11;
    uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185b10) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_044c1aa8;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_044c1aa8:
    uVar4 = (*(code *)*puVar10)(plVar11,puVar10[1]);
    plVar11 = local_78;
    if ((uVar4 & 1) == 0) {
      if (local_78 == (long *)0x0) goto LAB_044c1bd8;
      lVar12 = *local_78;
      uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar4 == 0) goto LAB_044c1bb0;
      piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar12 = *local_78;
    uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917aaf8) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_044c1b0c;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(local_78,DAT_0917aaf8,0);
LAB_044c1b0c:
    lVar12 = (*(code *)*puVar10)(plVar11,puVar10[1]);
    if (*(long *)(param_1 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CookOrder_Cooking_Implement_CookingGameplayPresentation__OnLevelEvent
              (*(long *)(param_1 + 0xd8),lVar12,0);
    CookOrder_Cooking_Implement_CookingGameplayController__ReportCustomerLifecycle(param_1,lVar12);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar11 = local_78;
    if (*(int *)(lVar12 + 0x10) == 5) {
      CookOrder_Cooking_Implement_CookingGameplayController__RewardCustomer
                (param_1,*(undefined4 *)(lVar12 + 0x30));
      plVar11 = local_78;
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_044c1bcc;
    }
  }
LAB_044c1bb0:
  puVar10 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185a58,0);
LAB_044c1bcc:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
LAB_044c1bd8:
  if (((*(long *)(param_1 + 0x118) != 0) &&
      (lVar12 = *(long *)(*(long *)(param_1 + 0x118) + 0x178), lVar12 != 0)) &&
     (plVar11 = (long *)CookingGraph_Execution_CookingExecution__DrainEvents(lVar12,0),
     plVar11 != (long *)0x0)) {
    lVar12 = *plVar11;
    uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917a430) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_044c1c5c;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a430,0);
LAB_044c1c5c:
    plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
    pplStack_d8 = &local_88;
    local_e0 = 0;
    do {
      local_88 = plVar11;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar12 = *plVar11;
      uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185b10) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_044c1cd0;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_044c1cd0:
      uVar4 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      plVar11 = local_88;
      if ((uVar4 & 1) == 0) {
        if (local_88 == (long *)0x0) goto LAB_044c1e08;
        lVar12 = *local_88;
        uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar4 == 0) goto LAB_044c1dd0;
        piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_044c1db8;
      }
      if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar12 = *local_88;
      uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917aad8) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_044c1d34;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(local_88,DAT_0917aad8,0);
LAB_044c1d34:
      (*(code *)*puVar10)(&local_120,plVar11,puVar10[1]);
      pplStack_c8 = pplStack_118;
      local_d0 = local_120;
      uStack_b8 = uStack_108;
      uStack_c0 = uStack_110;
      uStack_a8 = uStack_f8;
      local_b0 = local_100;
      uStack_98 = uStack_e8;
      uStack_a0 = uStack_f0;
      if (*(long *)(param_1 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      pplStack_158 = pplStack_118;
      local_160 = local_120;
      uStack_148 = uStack_108;
      uStack_150 = uStack_110;
      uStack_138 = uStack_f8;
      local_140 = local_100;
      uStack_128 = uStack_e8;
      uStack_130 = uStack_f0;
      CookOrder_Cooking_Implement_CookingGameplayPresentation__OnExecutionEvent
                (*(long *)(param_1 + 0xd8),&local_160,0);
      plVar11 = local_88;
    } while( true );
  }
  goto LAB_044c1f3c;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
LAB_044c1db8:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_044c1dfc;
    }
  }
LAB_044c1dd0:
  puVar10 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185a58,0);
LAB_044c1dfc:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
LAB_044c1e08:
  if (*(long *)(param_1 + 0xd8) == 0) goto LAB_044c1f3c;
  CookOrder_Cooking_Implement_CookingGameplayPresentation__Refresh
            (*(long *)(param_1 + 0xd8),lVar7,0);
  if ((bVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0xd8) == 0) goto LAB_044c1f3c;
    uVar4 = CookOrder_Cooking_Implement_CookingGameplayPresentation__get_IsChoreographing
                      (*(long *)(param_1 + 0xd8),0);
    if ((uVar4 & 1) != 0) goto LAB_044c1e44;
    if (*(long *)(param_1 + 0xd8) == 0) goto LAB_044c1f3c;
    uVar3 = CookOrder_Cooking_Implement_CookingGameplayPresentation__get_IsShifting
                      (*(long *)(param_1 + 0xd8),0);
  }
  else {
LAB_044c1e44:
    uVar3 = 1;
  }
  if (lVar7 != 0) {
    CookOrder_Cooking_Implement_CookingGameplayController__TickAutoplay
              (param_1,uVar3 & 1,*(undefined4 *)(lVar7 + 0x20));
    if (*(int *)(lVar7 + 0x20) == 2) {
      if (*(long *)(param_1 + 0x118) == 0) goto LAB_044c1f3c;
      if ((*(char *)(*(long *)(param_1 + 0x118) + 0x38) == '\0') &&
         (*(char *)(param_1 + 0x149) == '\0')) {
        CookOrder_Cooking_Implement_CookingGameplayController__ReportLoss
                  (param_1,*(undefined4 *)(lVar7 + 0x24));
      }
    }
    else if ((*(int *)(lVar7 + 0x20) == 1) && (*(char *)(param_1 + 0x148) == '\0')) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_044c1f3c;
      *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x14) = 1;
      *(undefined1 *)(param_1 + 0x148) = 1;
    }
    if (*(char *)(param_1 + 0x148) != '\0') {
      if (*(long *)(param_1 + 0x138) == 0) goto LAB_044c1f3c;
      uVar4 = CookOrder_Cooking_Implement_CookingMoneyPresenter__get_IsCollectAllCoin
                        (*(long *)(param_1 + 0x138),0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0xd8) == 0) goto LAB_044c1f3c;
        uVar4 = CookOrder_Cooking_Implement_CookingGameplayPresentation__get_HasPendingChoreography
                          (*(long *)(param_1 + 0xd8),0);
        if ((uVar4 & 1) == 0) {
          CakeOrder_InGame_LevelBaseCakeOrderAbstract__EndGame(param_1,0);
        }
      }
    }
    return;
  }
LAB_044c1f3c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


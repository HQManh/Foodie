// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$BeginAutoComplete
// address: 0x44aa564
// body: available
// range: 0x44aa564-0x44ab3bf inclusive
// range: 0x44ab514-0x44ab51b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ab370 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ab374 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ab378 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ab37c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ab380 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ab384 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ab388 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ab38c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ab390 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ab394 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ab398 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ab39c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044ab2b0) */
/* WARNING: Removing unreachable block (ram,0x044ab514) */
/* WARNING: Removing unreachable block (ram,0x044aac50) */
/* WARNING: Removing unreachable block (ram,0x044aaeb4) */
/* WARNING: Removing unreachable block (ram,0x044ab3a4) */

void CookOrder_Cooking_Implement_CookingGameplayPresentation__BeginAutoComplete
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  uint uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  long *local_e8;
  long **pplStack_e0;
  undefined8 local_d8;
  long local_d0;
  long *local_c8;
  long local_c0;
  long *local_b8;
  long *local_b0;
  long **pplStack_a8;
  undefined8 local_a0;
  
  if ((DAT_09518212 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c65d0);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091c9928);
    FUN_03f5c2a4(&DAT_091c9c60);
    FUN_03f5c2a4(&DAT_091a4940);
    FUN_03f5c2a4(&DAT_091a4948);
    FUN_03f5c2a4(&DAT_091a4950);
    FUN_03f5c2a4(&DAT_09178628);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a82b8);
    FUN_03f5c2a4(&DAT_091a8820);
    FUN_03f5c2a4(&DAT_091a82f0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a408);
    FUN_03f5c2a4(&DAT_0917a5c8);
    FUN_03f5c2a4(&DAT_0917aab0);
    FUN_03f5c2a4(&DAT_0917ac90);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_091b1080);
    FUN_03f5c2a4(&DAT_091b1088);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbd48);
    FUN_03f5c2a4(&DAT_091dbeb8);
    FUN_03f5c2a4(&DAT_091e70a8);
    FUN_03f5c2a4(&DAT_0918f0f8);
    DAT_09518212 = 1;
  }
  local_b0 = (long *)0x0;
  pplStack_a8 = (long **)0x0;
  local_a0 = 0;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  local_d0 = 0;
  local_c8 = (long *)0x0;
  lVar4 = thunk_FUN_03f9944c(DAT_0918f0f8);
  CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass26_0___ctor(lVar4,0);
  *(undefined1 *)(param_4 + 0x30) = 1;
  if (param_5 != 0) {
    *(undefined4 *)(param_4 + 0x34) = *(undefined4 *)(param_5 + 0x30);
    if (*(long *)(param_4 + 0xa0) != 0) {
      FUN_053d74ac(*(long *)(param_4 + 0xa0),DAT_091a82b8);
      *(undefined1 *)(param_4 + 0xa8) = 0;
      CookOrder_Cooking_Implement_CookingGameplayPresentation__ShowFocusDim(param_4,1);
      CookOrder_Cooking_Implement_CookingGameplayPresentation__ShowGlow(param_4,1);
      if (*(long *)(param_4 + 0x90) != 0) {
        FUN_053ec0b0(&local_e8,*(long *)(param_4 + 0x90),DAT_091a8820);
        local_a0 = local_d8;
        pplStack_a8 = pplStack_e0;
        local_b0 = local_e8;
        local_e8 = (long *)0x0;
        pplStack_e0 = &local_b0;
LAB_044aa7d8:
        uVar5 = FUN_071bb7b4(&local_b0,DAT_091a4948);
        uVar7 = local_a0;
        if ((uVar5 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(DAT_09183190 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar2 = DG_Tweening_DOTween__Pause(uVar7,0);
            lVar12 = DAT_091b1080;
            if (0 < iVar2) {
              lVar6 = *(long *)(param_4 + 0x98);
              if (lVar6 != 0) {
                lVar10 = *(long *)(lVar6 + 0x10);
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar10 != 0) {
                  uVar15 = *(uint *)(lVar6 + 0x18);
                  if (uVar15 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar15 + 1;
                    puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar15 * 8 + 0x20);
                    *puVar11 = uVar7;
                    thunk_FUN_03f5d7b8(puVar11,uVar7);
                  }
                  else {
                    FUN_057e0c68(lVar6,uVar7,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  goto LAB_044aa7d8;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          goto LAB_044aa7d8;
        }
        FUN_071bb7b0(&local_b0,DAT_091a4940);
        lVar12 = *(long *)(param_4 + 0x40);
        if (lVar12 != 0) {
          iVar2 = *(int *)(lVar12 + 0x18);
          *(undefined4 *)(lVar12 + 0x18) = 0;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (0 < iVar2) {
            System_Array__Clear(*(undefined8 *)(lVar12 + 0x10),0,iVar2,0);
          }
          uVar7 = CookOrder_Cooking_Implement_CookingGameplayPresentation__EffectSequence(param_4);
          puVar11 = (undefined8 *)(param_4 + 0x38);
          *puVar11 = uVar7;
          thunk_FUN_03f5d7b8(puVar11,uVar7);
          uVar18 = CookOrder_Cooking_Implement_CookingGameplayPresentation__get_MergePoint(param_4);
          if (*(long *)(param_4 + 0x2e8) != 0) {
            lVar12 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x28);
            uVar21 = param_2;
            uVar22 = param_3;
            CookOrder_Cooking_Implement_CookingGameplayPresentation__PauseAutoCompleteForPlateMoves
                      (param_4);
            if (((*(long *)(param_4 + 0x2d8) != 0) &&
                (lVar6 = *(long *)(*(long *)(param_4 + 0x2d8) + 0x118), lVar6 != 0)) && (lVar4 != 0)
               ) {
              plVar14 = (long *)(lVar4 + 0x10);
              *plVar14 = *(long *)(lVar6 + 0x30);
              thunk_FUN_03f5d7b8(plVar14);
              lVar6 = *plVar14;
              if ((lVar6 != 0) &&
                 (uVar5 = System_Guid__op_Inequality
                                    (*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18),
                                     *(undefined8 *)(param_5 + 0x14),*(undefined8 *)(param_5 + 0x1c)
                                     ,0), (uVar5 & 1) == 0)) {
                if (*plVar14 == 0) goto LAB_044ab38c;
                if (*(int *)(*plVar14 + 0x20) == *(int *)(param_5 + 0x30)) {
                  if (((*(long *)(param_4 + 0x2d8) != 0) &&
                      (lVar6 = *(long *)(*(long *)(param_4 + 0x2d8) + 0x118), lVar6 != 0)) &&
                     ((lVar6 = *(long *)(lVar6 + 0x178), lVar6 != 0 &&
                      (lVar6 = CookingGraph_Execution_CookingExecution__ReadSnapshot(lVar6,0),
                      lVar6 != 0)))) {
                    uVar16 = *(undefined8 *)(lVar6 + 0x38);
                    uVar7 = thunk_FUN_03f9944c(DAT_09178628);
                    FUN_05322d94(uVar7,lVar4,DAT_091e70a8,0);
                    lVar6 = FUN_04ae5fd0(uVar16,uVar7,DAT_091c9c60);
                    if ((*(long *)(lVar4 + 0x10) != 0) &&
                       (plVar17 = *(long **)(*(long *)(lVar4 + 0x10) + 0x28), plVar17 != (long *)0x0
                       )) {
                      lVar4 = *plVar17;
                      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                      if (uVar5 != 0) {
                        piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar13 + -2) == DAT_0917a408) {
                            puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                            goto LAB_044aad28;
                          }
                          uVar5 = uVar5 - 1;
                          piVar13 = piVar13 + 4;
                        } while (uVar5 != 0);
                      }
                      puVar8 = (undefined8 *)FUN_03f95da8(plVar17,DAT_0917a408,0);
LAB_044aad28:
                      local_c8 = (long *)(*(code *)*puVar8)(plVar17,puVar8[1]);
                      pplStack_e0 = &local_c8;
                      local_e8 = (long *)0x0;
                      do {
                        plVar17 = local_c8;
                        if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar4 = *local_c8;
                        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                        if (uVar5 != 0) {
                          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                              puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                              goto LAB_044aada4;
                            }
                            uVar5 = uVar5 - 1;
                            piVar13 = piVar13 + 4;
                          } while (uVar5 != 0);
                        }
                        puVar8 = (undefined8 *)FUN_03f95da8(local_c8,DAT_09185b10,0);
LAB_044aada4:
                        uVar5 = (*(code *)*puVar8)(plVar17,puVar8[1]);
                        plVar17 = local_c8;
                        if ((uVar5 & 1) == 0) {
                          if (local_c8 == (long *)0x0) goto LAB_044aaea8;
                          lVar4 = *local_c8;
                          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                          if (uVar5 == 0) goto LAB_044aae80;
                          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                          goto LAB_044aae68;
                        }
                        if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar4 = *local_c8;
                        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                        if (uVar5 != 0) {
                          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar13 + -2) == DAT_0917aab0) {
                              puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                              goto LAB_044aae08;
                            }
                            uVar5 = uVar5 - 1;
                            piVar13 = piVar13 + 4;
                          } while (uVar5 != 0);
                        }
                        puVar8 = (undefined8 *)FUN_03f95da8(local_c8,DAT_0917aab0,0);
LAB_044aae08:
                        lVar4 = (*(code *)*puVar8)(plVar17,puVar8[1]);
                        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        if (*(long *)(param_4 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        FUN_053d8048(*(long *)(param_4 + 0xa0),*(undefined4 *)(lVar4 + 0x10),
                                     DAT_091a82b0);
                      } while( true );
                    }
                  }
                  goto LAB_044ab38c;
                }
              }
              plVar14 = (long *)FUN_04add45c(*(undefined8 *)(param_5 + 0x40),DAT_091c9928);
              if (plVar14 != (long *)0x0) {
                lVar4 = *plVar14;
                uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar5 != 0) {
                  piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == DAT_0917a5c8) {
                      puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_044aa9ec;
                    }
                    uVar5 = uVar5 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar5 != 0);
                }
                puVar8 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917a5c8,0);
LAB_044aa9ec:
                local_b8 = (long *)(*(code *)*puVar8)(plVar14,puVar8[1]);
                pplStack_e0 = &local_b8;
                iVar2 = 0;
                local_e8 = (long *)0x0;
LAB_044aaa08:
                do {
                  plVar14 = local_b8;
                  if (local_b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar4 = *local_b8;
                  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar5 != 0) {
                    piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                        puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                        goto LAB_044aaa5c;
                      }
                      uVar5 = uVar5 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_03f95da8(local_b8,DAT_09185b10,0);
LAB_044aaa5c:
                  uVar5 = (*(code *)*puVar8)(plVar14,puVar8[1]);
                  plVar14 = local_b8;
                  if ((uVar5 & 1) == 0) {
                    if (local_b8 == (long *)0x0) goto LAB_044ab2b4;
                    lVar4 = *local_b8;
                    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    if (uVar5 == 0) goto LAB_044aac1c;
                    piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    goto LAB_044aac04;
                  }
                  if (local_b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar4 = *local_b8;
                  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar5 != 0) {
                    piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == DAT_0917ac90) {
                        puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                        goto LAB_044aaac0;
                      }
                      uVar5 = uVar5 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_03f95da8(local_b8,DAT_0917ac90,0);
LAB_044aaac0:
                  uVar7 = (*(code *)*puVar8)(plVar14,puVar8[1]);
                  uVar5 = CookOrder_Cooking_Implement_CookingGameplayPresentation__TakeEffectUnit
                                    (param_4,uVar7,&local_c0);
                } while ((uVar5 & 1) == 0);
                if (local_c0 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar4 = UnityEngine_Component__get_gameObject(local_c0,0);
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                UnityEngine_GameObject__SetActive(lVar4,1,0);
                CookOrder_Cooking_Implement_CookingGameplayPresentation__Focus(param_4,local_c0);
                lVar4 = DAT_091b1080;
                lVar6 = *(long *)(param_4 + 0x40);
                if (lVar6 != 0) {
                  lVar10 = *(long *)(lVar6 + 0x10);
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                  if (lVar10 != 0) {
                    uVar15 = *(uint *)(lVar6 + 0x18);
                    if (uVar15 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar6 + 0x18) = uVar15 + 1;
                      plVar14 = (long *)(lVar10 + (long)(int)uVar15 * 8 + 0x20);
                      *plVar14 = local_c0;
                      thunk_FUN_03f5d7b8(plVar14);
                    }
                    else {
                      FUN_057e0c68(lVar6,local_c0,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    fVar23 = *(float *)(lVar12 + 0x3c);
                    uVar16 = *puVar11;
                    uVar7 = DG_Tweening_ShortcutExtensions__DOJump
                                      (uVar18,param_2,param_3,*(undefined4 *)(lVar12 + 0x40),
                                       *(undefined4 *)(lVar12 + 0x44),local_c0,1,0,0);
                    uVar7 = FUN_04d95dc4(uVar7,*(undefined8 *)(lVar12 + 0x48),DAT_091dbeb8);
                    fVar19 = (float)iVar2;
                    iVar2 = iVar2 + 1;
                    DG_Tweening_TweenSettingsExtensions__Insert(fVar23 * fVar19,uVar16,uVar7,0);
                    goto LAB_044aaa08;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
            }
          }
        }
      }
    }
  }
  goto LAB_044ab38c;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar13 = piVar13 + 4;
    if (uVar5 == 0) break;
LAB_044ab264:
    if (*(long *)(piVar13 + -2) == DAT_09185a58) {
      puVar11 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_044ab298;
    }
  }
LAB_044ab27c:
  puVar11 = (undefined8 *)FUN_03f95da8(local_c8,DAT_09185a58,0);
LAB_044ab298:
  (*(code *)*puVar11)(plVar14,puVar11[1]);
  goto LAB_044ab2b4;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar13 = piVar13 + 4;
    if (uVar5 == 0) break;
LAB_044aac04:
    if (*(long *)(piVar13 + -2) == DAT_09185a58) {
      puVar11 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_044aac38;
    }
  }
LAB_044aac1c:
  puVar11 = (undefined8 *)FUN_03f95da8(local_b8,DAT_09185a58,0);
LAB_044aac38:
  (*(code *)*puVar11)(plVar14,puVar11[1]);
LAB_044ab2b4:
  uVar16 = *(undefined8 *)(param_4 + 0x38);
  uVar7 = thunk_FUN_03f9944c(DAT_0918c148);
  DG_Tweening_TweenCallback___ctor(uVar7,param_4,DAT_091c65d0,0);
  uVar7 = FUN_04d956bc(uVar16,uVar7,DAT_091dbd18);
  uVar16 = thunk_FUN_03f9944c(DAT_0918c148);
  DG_Tweening_TweenCallback___ctor(uVar16,param_4,DAT_091c65d0,0);
  FUN_04d956e8(uVar7,uVar16,DAT_091dbd48);
  CookOrder_Cooking_Implement_CookingGameplayPresentation__HoldEffect
            (param_4,*(undefined8 *)(param_4 + 0x38));
  return;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar13 = piVar13 + 4;
    if (uVar5 == 0) break;
LAB_044aae68:
    if (*(long *)(piVar13 + -2) == DAT_09185a58) {
      puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_044aae9c;
    }
  }
LAB_044aae80:
  puVar8 = (undefined8 *)FUN_03f95da8(local_c8,DAT_09185a58,0);
LAB_044aae9c:
  (*(code *)*puVar8)(plVar17,puVar8[1]);
LAB_044aaea8:
  if (lVar6 == 0) {
    bVar9 = false;
  }
  else {
    if ((*(long *)(param_4 + 0xa0) == 0) ||
       (plVar17 = *(long **)(lVar6 + 0x28), plVar17 == (long *)0x0)) goto LAB_044ab38c;
    lVar4 = *plVar17;
    iVar2 = *(int *)(*(long *)(param_4 + 0xa0) + 0x20);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_0917b310) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_044aaf48;
        }
        uVar5 = uVar5 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar17,DAT_0917b310,0);
LAB_044aaf48:
    iVar3 = (*(code *)*puVar8)(plVar17,puVar8[1]);
    bVar9 = iVar2 < iVar3;
  }
  if (param_4 != 0) {
    *(bool *)(param_4 + 0xa8) = bVar9;
    if ((*plVar14 != 0) && (plVar14 = *(long **)(*plVar14 + 0x28), plVar14 != (long *)0x0)) {
      lVar4 = *plVar14;
      uVar15 = (uint)*(byte *)(param_4 + 0xa8);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917a408) {
            puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_044aafcc;
          }
          uVar5 = uVar5 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917a408,0);
LAB_044aafcc:
      local_c8 = (long *)(*(code *)*puVar8)(plVar14,puVar8[1]);
      pplStack_e0 = &local_c8;
      local_e8 = (long *)0x0;
LAB_044aafe4:
      do {
        plVar14 = local_c8;
        if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *local_c8;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_09185b10) {
              puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_044ab038;
            }
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(local_c8,DAT_09185b10,0);
LAB_044ab038:
        uVar5 = (*(code *)*puVar8)(plVar14,puVar8[1]);
        plVar14 = local_c8;
        if ((uVar5 & 1) == 0) {
          if (local_c8 == (long *)0x0) goto LAB_044ab2b4;
          lVar4 = *local_c8;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 == 0) goto LAB_044ab27c;
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_044ab264;
        }
        if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *local_c8;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_0917aab0) {
              puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_044ab09c;
            }
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(local_c8,DAT_0917aab0,0);
LAB_044ab09c:
        lVar4 = (*(code *)*puVar8)(plVar14,puVar8[1]);
        uVar20 = CookOrder_Cooking_Implement_CookingGameplayPresentation__AutoSourcePosition
                           (param_4,lVar4);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (((*(char *)(lVar4 + 0x48) != '\0') && (*(int *)(lVar4 + 0x18) != 5)) &&
           (uVar5 = CookOrder_Cooking_Implement_CookingGameplayPresentation__TakeEffectUnit
                              (param_4,*(undefined8 *)(lVar4 + 0x20),&local_d0), (uVar5 & 1) != 0))
        {
          if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar7 = UnityEngine_Component__get_gameObject(local_d0,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Object__Destroy(uVar7,0);
        }
        uVar7 = CookOrder_Cooking_Implement_CookingGameplayPresentation__AutoGhost
                          (uVar20,uVar21,uVar22,param_4,*(undefined4 *)(lVar4 + 0x14));
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
      } while ((uVar5 & 1) == 0);
      CookOrder_Cooking_Implement_CookingGameplayPresentation__Focus(param_4,uVar7);
      lVar4 = DAT_091b1080;
      lVar6 = *(long *)(param_4 + 0x40);
      if (lVar6 != 0) {
        lVar10 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
            *puVar8 = uVar7;
            thunk_FUN_03f5d7b8(puVar8,uVar7);
          }
          else {
            FUN_057e0c68(lVar6,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          fVar23 = *(float *)(lVar12 + 0x3c);
          uVar16 = *puVar11;
          uVar21 = param_2;
          uVar22 = param_3;
          uVar7 = DG_Tweening_ShortcutExtensions__DOJump
                            (uVar18,param_2,param_3,*(undefined4 *)(lVar12 + 0x40),
                             *(undefined4 *)(lVar12 + 0x44),uVar7,1,0,0);
          uVar7 = FUN_04d95dc4(uVar7,*(undefined8 *)(lVar12 + 0x48),DAT_091dbeb8);
          fVar19 = (float)(int)uVar15;
          uVar15 = uVar15 + 1;
          DG_Tweening_TweenSettingsExtensions__Insert(fVar23 * fVar19,uVar16,uVar7,0);
          goto LAB_044aafe4;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_044ab38c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


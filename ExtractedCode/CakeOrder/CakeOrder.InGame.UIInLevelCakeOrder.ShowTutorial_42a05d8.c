// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder$$ShowTutorial
// address: 0x42a05d8
// body: available
// range: 0x42a05d8-0x42a101b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a0a08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a0fdc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a0fe0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a0fe4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a0fe8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a0fec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a0ff0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a0ff4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a0ff8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a0ffc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a1000 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a1004 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder__ShowTutorial(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  long *plVar17;
  undefined8 uVar18;
  long local_d8;
  long *plStack_d0;
  long *local_c8;
  long local_c0;
  long *plStack_b8;
  long *local_b0;
  long local_a0;
  long *plStack_98;
  long *local_90;
  long local_80;
  long *plStack_78;
  long *local_70;
  
  if ((DAT_09517227 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c0498);
    FUN_03f5c2a4(&DAT_091c04a0);
    FUN_03f5c2a4(&DAT_091a3110);
    FUN_03f5c2a4(&DAT_091a33b0);
    FUN_03f5c2a4(&DAT_091a2e10);
    FUN_03f5c2a4(&DAT_091a3118);
    FUN_03f5c2a4(&DAT_091a2e18);
    FUN_03f5c2a4(&DAT_091a33b8);
    FUN_03f5c2a4(&DAT_091a2e20);
    FUN_03f5c2a4(&DAT_091a33c0);
    FUN_03f5c2a4(&DAT_091a3120);
    FUN_03f5c2a4(&DAT_09186500);
    FUN_03f5c2a4(&DAT_091ad630);
    FUN_03f5c2a4(&DAT_091acfb8);
    FUN_03f5c2a4(&DAT_091ad638);
    FUN_03f5c2a4(&DAT_091adab0);
    FUN_03f5c2a4(&DAT_091ad628);
    FUN_03f5c2a4(&DAT_0917c3e8);
    FUN_03f5c2a4(&DAT_091b4948);
    FUN_03f5c2a4(&DAT_091b4950);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917e220);
    FUN_03f5c2a4(&DAT_0917e228);
    FUN_03f5c2a4(&DAT_091b8f10);
    FUN_03f5c2a4(&DAT_091b8f30);
    FUN_03f5c2a4(&DAT_091b8f00);
    FUN_03f5c2a4(&DAT_091b8f20);
    FUN_03f5c2a4(&DAT_0917e3e8);
    FUN_03f5c2a4(&DAT_0917e3f0);
    FUN_03f5c2a4(&DAT_09180a80);
    FUN_03f5c2a4(&DAT_09173a58);
    FUN_03f5c2a4(&DAT_091f1708);
    FUN_03f5c2a4(&DAT_091956d0);
    FUN_03f5c2a4(&DAT_091f1710);
    FUN_03f5c2a4(&DAT_091956d8);
    FUN_03f5c2a4(&DAT_091f1718);
    FUN_03f5c2a4(&DAT_091956e0);
    DAT_09517227 = 1;
  }
  local_80 = 0;
  plStack_78 = (long *)0x0;
  local_70 = (long *)0x0;
  local_a0 = 0;
  plStack_98 = (long *)0x0;
  local_90 = (long *)0x0;
  local_c0 = 0;
  plStack_b8 = (long *)0x0;
  local_b0 = (long *)0x0;
  lVar4 = thunk_FUN_03f9944c(DAT_091956d0);
  System_Object___ctor(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar4 + 0x18),param_1);
    *(undefined8 *)(lVar4 + 0x38) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x38),param_2);
    *(undefined1 *)(lVar4 + 0x30) = 0;
    uVar5 = DAT_09173a58;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09535470);
    }
    lVar6 = System_Enum__GetValues(uVar5,0);
    uVar5 = DAT_09180a80;
    if (lVar6 != 0) {
      lVar7 = thunk_FUN_03f99350(lVar6,DAT_09180a80);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar6,uVar5);
      }
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar14 = 0;
        uVar11 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar11 <= uVar14) goto LAB_042a0fdc;
          if ((*(int *)(lVar7 + 0x20 + uVar14 * 4) == 1) &&
             (uVar11 = FUN_05a8eda4(DAT_091b4950), (uVar11 & 1) != 0)) {
            lVar6 = *(long *)(DAT_091b4948 + 0x20);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_03f95a6c();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_03f95a6c();
            }
            if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_042a0a08;
            uVar11 = CakeOrder_CakeOrderSubsystem_GameProgressScenario__IsMechanicAvailable
                               (**(long **)(lVar6 + 0xb8),1,0);
            if (((uVar11 & 1) != 0) &&
               (uVar11 = CakeOrder_UI_InGameUITutorialControl__IsDoneTut(1,0,0), (uVar11 & 1) == 0))
            {
              *(undefined4 *)(param_1 + 0x18c) = 0;
              iVar16 = 1;
              goto LAB_042a0a14;
            }
          }
          uVar11 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar14 = uVar14 + 1;
        } while ((long)uVar14 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      lVar6 = *(long *)(param_1 + 0x160);
      if (lVar6 != 0) {
        iVar16 = 0;
        uVar15 = 0;
        do {
          if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar15) goto LAB_042a0a14;
          if (*(uint *)(lVar6 + 0x18) <= uVar15) {
LAB_042a0fdc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar6 = *(long *)(lVar6 + (long)(int)uVar15 * 8 + 0x20);
          if (lVar6 == 0) break;
          uVar5 = *(undefined8 *)(lVar6 + 0x18);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar14 = UnityEngine_Object__op_Implicit(uVar5,0);
          if (((uVar14 & 1) != 0) && (*(long *)(lVar6 + 0x40) != 0)) {
            uVar14 = CakeOrder_UI_InGameUITutorialControl__IsDoneTut(2,uVar15,0);
            if (*(long *)(lVar6 + 0x40) == 0) break;
            if (*(char *)(*(long *)(lVar6 + 0x40) + 0x20) != '\0' && (uVar14 & 1) == 0) {
              iVar16 = 2;
              *(uint *)(param_1 + 0x18c) = uVar15;
            }
          }
          lVar6 = *(long *)(param_1 + 0x160);
          uVar15 = uVar15 + 1;
        } while (lVar6 != 0);
      }
    }
  }
  goto LAB_042a0a08;
LAB_042a0a14:
  plVar8 = *(long **)(param_1 + 0xc0);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x2c8))(&local_d8,plVar8,*(undefined8 *)(*plVar8 + 0x2d0));
    plVar9 = local_c8;
    plVar8 = plStack_d0;
    lVar6 = local_d8;
    lVar7 = thunk_FUN_03f9944c(DAT_0917e3e8);
    FUN_05e2ca0c(lVar7,DAT_091b8f00);
    plVar17 = (long *)(lVar4 + 0x10);
    *plVar17 = lVar7;
    thunk_FUN_03f5d7b8(plVar17,lVar7);
    if (plVar8 != (long *)0x0) {
      FUN_0579a6a8(&local_d8,plVar8,DAT_091acfb8);
      local_70 = local_c8;
      plStack_78 = plStack_d0;
      local_80 = local_d8;
      local_d8 = 0;
      plStack_d0 = &local_80;
      while (uVar14 = FUN_071aef5c(&local_80,DAT_091a2e18), (uVar14 & 1) != 0) {
        lVar7 = thunk_FUN_03f9944c(DAT_091956d8);
        System_Object___ctor(lVar7,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(int *)(lVar7 + 0x10) = (int)local_70;
        if ((int)local_70 != 0) {
          uVar5 = CakeOrder_InGame_UIInLevelCakeOrder__GetKeyIsDoneIntroNewGridMechanic();
          iVar2 = UnityEngine_PlayerPrefs__GetInt(uVar5,0,0);
          if (iVar2 != 1) {
            uVar18 = *(undefined8 *)(param_1 + 0x1f0);
            uVar5 = thunk_FUN_03f9944c(DAT_0917e220);
            FUN_05d78cfc(uVar5,lVar7,DAT_091f1710,0);
            lVar7 = FUN_04ee3a54(uVar18,uVar5,DAT_091c0498);
            if (lVar7 != 0) {
              plVar8 = *(long **)(lVar7 + 0x18);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar14 = (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
              if ((uVar14 & 1) != 0) {
                if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                FUN_05e2cfd8(*plVar17,lVar7,DAT_091b8f10);
              }
            }
          }
        }
      }
      FUN_071aef58(&local_80,DAT_091a2e10);
      lVar7 = thunk_FUN_03f9944c(DAT_0917e3f0);
      FUN_05e2ca0c(lVar7,DAT_091b8f20);
      plVar8 = (long *)(lVar4 + 0x20);
      *plVar8 = lVar7;
      thunk_FUN_03f5d7b8(plVar8,lVar7);
      if (plVar9 != (long *)0x0) {
        FUN_0579a6a8(&local_d8,plVar9,DAT_091adab0);
        local_90 = local_c8;
        plStack_98 = plStack_d0;
        local_a0 = local_d8;
        local_d8 = 0;
        plStack_d0 = &local_a0;
        while (uVar14 = FUN_071aef5c(&local_a0,DAT_091a33b8), (uVar14 & 1) != 0) {
          lVar7 = thunk_FUN_03f9944c(DAT_091956e0);
          System_Object___ctor(lVar7,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(int *)(lVar7 + 0x10) = (int)local_90;
          if ((int)local_90 != 0) {
            uVar5 = CakeOrder_InGame_UIInLevelCakeOrder__GetKeyIsDoneIntroNewSlotMechanics();
            iVar2 = UnityEngine_PlayerPrefs__GetInt(uVar5,0,0);
            if (iVar2 != 1) {
              uVar18 = *(undefined8 *)(param_1 + 0x1e8);
              uVar5 = thunk_FUN_03f9944c(DAT_0917e228);
              FUN_05d78cfc(uVar5,lVar7,DAT_091f1718,0);
              lVar7 = FUN_04ee3a54(uVar18,uVar5,DAT_091c04a0);
              if (lVar7 != 0) {
                plVar9 = *(long **)(lVar7 + 0x18);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar14 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
                if ((uVar14 & 1) != 0) {
                  if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  FUN_05e2cfd8(*plVar8,lVar7,DAT_091b8f30);
                }
              }
            }
          }
        }
        FUN_071aef58(&local_a0,DAT_091a33b0);
        lVar7 = thunk_FUN_03f9944c(DAT_0917c3e8);
        FUN_057e0400(lVar7,DAT_091ad628);
        plVar8 = (long *)(lVar4 + 0x28);
        *plVar8 = lVar7;
        thunk_FUN_03f5d7b8(plVar8,lVar7);
        if (*(long *)(param_1 + 0xc0) != 0) {
          lVar7 = *(long *)(*(long *)(param_1 + 0xc0) + 0x38);
          if ((lVar7 != 0) && (lVar6 != 0)) {
            iVar2 = *(int *)(lVar7 + 0x1c);
            FUN_057e185c(&local_d8,lVar6,DAT_091ad638);
            local_b0 = local_c8;
            plStack_b8 = plStack_d0;
            local_c0 = local_d8;
            local_d8 = 0;
            plStack_d0 = &local_c0;
LAB_042a0dac:
            do {
              do {
                uVar14 = FUN_071bd28c(&local_c0,DAT_091a3118);
                plVar9 = local_b0;
                if ((uVar14 & 1) == 0) {
                  FUN_071bd288(&local_c0,DAT_091a3110);
                  if (iVar16 == 0) {
                    CakeOrder_InGame_UIInLevelCakeOrder_<>c__DisplayClass93_0__<ShowTutorial>g__TryShowNextIntroGridMechanics_0
                              (lVar4);
                  }
                  else {
                    *(bool *)(lVar4 + 0x30) = iVar16 == 2;
                    uVar1 = *(undefined4 *)(param_1 + 0x18c);
                    uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
                    System_Action___ctor(uVar5,lVar4,DAT_091f1708,0);
                    uVar5 = CakeOrder_InGame_UIInLevelCakeOrder__ShowTutorial
                                      (param_1,iVar16,uVar1,uVar5);
                    Utilities_AsyncExtension__RunWithLogException(uVar5,0);
                  }
                  return;
                }
                if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar6 = *(long *)(*(long *)(param_1 + 0xc0) + 0x38);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (local_b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar7 = *local_b0;
                uVar5 = *(undefined8 *)(lVar6 + 0x10);
                uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar14 != 0) {
                  piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == DAT_09186500) {
                      puVar10 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_042a0e24;
                    }
                    uVar14 = uVar14 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar14 != 0);
                }
                puVar10 = (undefined8 *)FUN_03f95da8(local_b0,DAT_09186500,0);
LAB_042a0e24:
                uVar18 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                uVar5 = CakeOrder_InGame_UIInLevelCakeOrder__GetKeyIsDoneIntroNewIngredient
                                  (uVar5,uVar18);
                iVar3 = UnityEngine_PlayerPrefs__GetInt(uVar5,0,0);
                lVar6 = DAT_091ad630;
              } while (iVar3 == 1);
              if (iVar2 != 0) {
                lVar7 = *plVar8;
                if (lVar7 != 0) {
                  lVar12 = *(long *)(lVar7 + 0x10);
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (lVar12 != 0) {
                    uVar15 = *(uint *)(lVar7 + 0x18);
                    if (uVar15 < *(uint *)(lVar12 + 0x18)) {
                      *(uint *)(lVar7 + 0x18) = uVar15 + 1;
                      puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar15 * 8 + 0x20);
                      *puVar10 = plVar9;
                      thunk_FUN_03f5d7b8(puVar10,plVar9);
                    }
                    else {
                      FUN_057e0c68(lVar7,plVar9,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    goto LAB_042a0dac;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar6 = *(long *)(*(long *)(param_1 + 0xc0) + 0x38);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar7 = *plVar9;
              uVar5 = *(undefined8 *)(lVar6 + 0x10);
              uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar14 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == DAT_09186500) {
                    puVar10 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_042a0f24;
                  }
                  uVar14 = uVar14 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar14 != 0);
              }
              puVar10 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186500,0);
LAB_042a0f24:
              uVar18 = (*(code *)*puVar10)(plVar9,puVar10[1]);
              CakeOrder_InGame_UIInLevelCakeOrder__SetDoneIntroNewItem(uVar18,uVar5,uVar18);
            } while( true );
          }
        }
      }
    }
  }
LAB_042a0a08:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


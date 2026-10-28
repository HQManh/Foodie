// rea decompile_all
// name: AnhPD.FoodOrder.PastaOrderStrategy$$WantsStationResult
// address: 0x41544e0
// body: available
// range: 0x41544e0-0x41549a7 inclusive
// range: 0x41549e8-0x4154f43 inclusive
// range: 0x415500c-0x41550af inclusive
// range: 0x41550f8-0x4155153 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x415499c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41549a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41549a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4154f2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4154f30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4154f34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4154f38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4154f40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41550a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41550ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_PastaOrderStrategy__WantsStationResult(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  undefined1 auStack_1d8 [72];
  long local_190;
  long *plStack_188;
  long *local_180;
  byte local_168;
  undefined8 local_148;
  long *plStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  long local_128;
  long local_120;
  long *plStack_118;
  long *local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b0;
  long *plStack_a8;
  long *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  long local_68;
  
  if ((DAT_095164b7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9478);
    FUN_03f5c2a4(&DAT_091c94f8);
    FUN_03f5c2a4(&DAT_091c9f70);
    FUN_03f5c2a4(&DAT_091a2a50);
    FUN_03f5c2a4(&DAT_091a27c8);
    FUN_03f5c2a4(&DAT_091a2a58);
    FUN_03f5c2a4(&DAT_091a27d0);
    FUN_03f5c2a4(&DAT_091a27d8);
    FUN_03f5c2a4(&DAT_091a2a60);
    FUN_03f5c2a4(&DAT_09184740);
    FUN_03f5c2a4(&DAT_091787b8);
    FUN_03f5c2a4(&DAT_09179030);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a720);
    FUN_03f5c2a4(&DAT_0917a680);
    FUN_03f5c2a4(&DAT_0917ae00);
    FUN_03f5c2a4(&DAT_0917ad60);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091af050);
    FUN_03f5c2a4(&DAT_091ac6b0);
    FUN_03f5c2a4(&DAT_091ac068);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091af058);
    FUN_03f5c2a4(&DAT_091aed50);
    FUN_03f5c2a4(&DAT_091af060);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_091b71c0);
    FUN_03f5c2a4(&DAT_091b71c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09188f10);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_091ee380);
    FUN_03f5c2a4(&DAT_091ee390);
    FUN_03f5c2a4(&DAT_09193208);
    DAT_095164b7 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_b0 = 0;
  plStack_a8 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_c0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_120 = 0;
  plStack_118 = (long *)0x0;
  local_110 = (long *)0x0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  lVar6 = thunk_FUN_03f9944c(DAT_09193208);
  System_Object___ctor(lVar6,0);
  if (lVar6 != 0) {
    puVar10 = (undefined8 *)(lVar6 + 0x18);
    *puVar10 = param_2;
    thunk_FUN_03f5d7b8(puVar10,param_2);
    uVar11 = *puVar10;
    piVar13 = (int *)(lVar6 + 0x10);
    if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = CakeOrder_InGame_Pasta_PastaPieceTable__TryGetPiece(uVar11,piVar13,0);
    if (((uVar7 & 1) == 0) || (2 < *piVar13 - 3U)) {
      return true;
    }
    lVar12 = **(long **)(DAT_091881a0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = UnityEngine_Object__op_Implicit(lVar12,0);
    if ((uVar7 & 1) == 0) {
      return true;
    }
    if (lVar12 != 0) {
      uVar11 = *(undefined8 *)(lVar12 + 0xd8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar11,param_1,0);
      if ((uVar7 & 1) != 0) {
        return true;
      }
      if (*(long *)(lVar12 + 0x38) == 0) {
        return true;
      }
      lVar14 = *(long *)(*(long *)(lVar12 + 0x38) + 0x98);
      if (lVar14 == 0) {
        return true;
      }
      uVar11 = thunk_FUN_03f9944c(DAT_091787b8);
      FUN_05322d94(uVar11,lVar6,DAT_091ee380,0);
      uVar7 = FUN_04ab6f28(lVar14,uVar11,DAT_091c9478);
      if ((uVar7 & 1) == 0) {
        return false;
      }
      if (*piVar13 != 3) {
        return true;
      }
      uVar11 = AnhPD_FoodOrder_MessyController__get_LineHandle(lVar12,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar7 = UnityEngine_Object__op_Implicit(uVar11,0);
      if ((uVar7 & 1) == 0) {
        return true;
      }
      uVar11 = AnhPD_FoodOrder_MessyController__GetCookingStations(lVar12,0);
      lVar14 = FUN_04aea2a0(uVar11,DAT_091c9f70);
      if (lVar14 != 0) {
        local_68 = FUN_039afee4(0,DAT_0917a680,lVar14);
        plStack_188 = &local_68;
        local_190 = 0;
        while( true ) {
          if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar7 = FUN_039afee4(0,DAT_09185b10);
          if ((uVar7 & 1) == 0) break;
          if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar14 = FUN_039afee4(0,DAT_0917ad60);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = AnhPD_FoodOrder_CookingStation__get_WorkingResultId(lVar14,0);
          if (lVar8 == 0) {
            lVar8 = *(long *)(lVar6 + 0x28);
            uVar11 = *(undefined8 *)(lVar14 + 0x58);
            if (lVar8 == 0) {
              lVar8 = thunk_FUN_03f9944c(DAT_09179030);
              FUN_05322d94(lVar8,lVar6,DAT_091ee390,0);
              *(long *)(lVar6 + 0x28) = lVar8;
              thunk_FUN_03f5d7b8(lVar6 + 0x28,lVar8);
            }
            uVar7 = FUN_04ab6f28(uVar11,lVar8,DAT_091c94f8);
            if ((uVar7 & 1) != 0) {
              FUN_039aeef4(&local_190);
              return true;
            }
          }
        }
        FUN_039aeef4(&local_190);
        lVar6 = AnhPD_FoodOrder_MessyController__get_LineHandle(lVar12,0);
        if (lVar6 != 0) {
          lVar6 = AnhPD_FoodOrder_FCustomerLineHandle__GetActiveOpenOrderSpecs(lVar6,0);
          lVar14 = AnhPD_FoodOrder_MessyController__get_ServeShelf(lVar12,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar7 = UnityEngine_Object__op_Implicit(lVar14,0);
          if ((uVar7 & 1) == 0) {
            lVar8 = *(long *)(param_1 + 0x20);
            if (lVar8 == 0) goto LAB_041550a8;
            *(undefined4 *)(lVar8 + 0x18) = 0;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          }
          else {
            if (lVar14 == 0) goto LAB_041550a8;
            AnhPD_FoodOrder_ServeShelfController__GetGatheredPieces
                      (lVar14,lVar6,*(undefined8 *)(param_1 + 0x20),0);
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = UnityEngine_Object__op_Implicit(lVar14,0);
          if ((uVar7 & 1) != 0) {
            if (lVar14 == 0) goto LAB_041550a8;
            uVar7 = AnhPD_FoodOrder_ServeShelfController__get_HasFreeSlot(lVar14,0);
            if ((uVar7 & 1) == 0) {
              if (*(long *)(lVar14 + 0x90) != 0) {
                local_70 = FUN_039afee4(0,DAT_0917a720);
                plStack_140 = &local_70;
                local_148 = 0;
                if (local_70 != 0) {
                  iVar15 = 0;
                  do {
                    uVar7 = FUN_039afee4(0,DAT_09185b10,local_70);
                    if ((uVar7 & 1) == 0) {
                      FUN_039aeef4(&local_148);
                      goto LAB_04154dd8;
                    }
                    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar6 = FUN_039afee4(0,DAT_0917ae00);
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar7 = UnityEngine_Object__op_Implicit(lVar6,0);
                    if ((uVar7 & 1) != 0) {
                      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      if ((*(char *)(lVar6 + 0xb1) == '\0') && (*(int *)(lVar6 + 0xb4) == 1)) {
                        uStack_88 = *(undefined8 *)(lVar6 + 0x90);
                        local_90 = *(undefined8 *)(lVar6 + 0x88);
                        uStack_78 = *(undefined8 *)(lVar6 + 0xa0);
                        uStack_80 = *(undefined8 *)(lVar6 + 0x98);
                        if ((char)local_90 != '\0') {
                          uStack_88 = *(undefined8 *)(lVar6 + 0x90);
                          local_90 = *(undefined8 *)(lVar6 + 0x88);
                          uStack_78 = *(undefined8 *)(lVar6 + 0xa0);
                          uStack_80 = *(undefined8 *)(lVar6 + 0x98);
                          FUN_05c33204(&local_190,&local_90,DAT_091b71c8);
                          local_a0 = local_180;
                          iVar3 = *piVar13;
                          plStack_a8 = plStack_188;
                          local_b0 = local_190;
                          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          iVar1 = AnhPD_FoodOrder_PieceSet__get_Item(&local_b0,iVar3,0);
                          plVar9 = *(long **)(lVar6 + 0xa8);
                          iVar3 = 0;
                          if (plVar9 != (long *)0x0) {
                            if (*plVar9 == DAT_09184740) {
                              (**(code **)(DAT_09184740 + 0x218))
                                        (&local_190,plVar9,*(undefined8 *)(DAT_09184740 + 0x220));
                              local_a0 = local_180;
                              iVar3 = *piVar13;
                              plStack_a8 = plStack_188;
                              local_b0 = local_190;
                              if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                                FUN_03f5c424();
                              }
                              iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(&local_b0,iVar3,0);
                            }
                            else {
                              iVar3 = 0;
                            }
                          }
                          iVar15 = (iVar1 - iVar3 & (iVar1 - iVar3 >> 0x1f ^ 0xffffffffU)) + iVar15;
                        }
                      }
                    }
                  } while (local_70 != 0);
                }
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_041550a8;
            }
          }
          iVar15 = 0;
          if (lVar6 != 0) {
            if (0 < *(int *)(lVar6 + 0x18)) {
              iVar3 = 0;
              do {
                FUN_057eeec4(&local_190,lVar6,iVar3,DAT_091aed50);
                if ((local_168 & 1) != 0) {
                  FUN_057eeec4(&local_190,lVar6,iVar3,DAT_091aed50);
                  memcpy(auStack_1d8,&local_190,0x48);
                  iVar1 = AnhPD_FoodOrder_OrderStrategy__DishKeyOfOrder(param_1,auStack_1d8,0);
                  if (iVar1 == 1) {
                    FUN_057eeec4(&local_190,lVar6,iVar3,DAT_091aed50);
                    memcpy(&local_100,&local_190,0x48);
                    iVar1 = *piVar13;
                    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    iVar1 = AnhPD_FoodOrder_PieceSet__get_Item(&uStack_f0,iVar1,0);
                    lVar14 = *(long *)(param_1 + 0x20);
                    if (lVar14 == 0) goto LAB_041550a8;
                    if (iVar3 < *(int *)(lVar14 + 0x18)) {
                      FUN_057f79cc(&local_190,lVar14,iVar3,DAT_091af060);
                      local_a0 = local_180;
                      iVar2 = *piVar13;
                      plStack_a8 = plStack_188;
                      local_b0 = local_190;
                      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      iVar2 = AnhPD_FoodOrder_PieceSet__get_Item(&local_b0,iVar2,0);
                    }
                    else {
                      iVar2 = 0;
                    }
                    iVar15 = (iVar1 - iVar2 & (iVar1 - iVar2 >> 0x1f ^ 0xffffffffU)) + iVar15;
                  }
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < *(int *)(lVar6 + 0x18));
            }
LAB_04154dd8:
            if (iVar15 == 0) {
              return false;
            }
            lVar6 = AnhPD_FoodOrder_MessyController__GetDragItems(lVar12,0);
            if (lVar6 != 0) {
              FUN_057e185c(&local_190,lVar6,DAT_091ac6b0);
              plStack_118 = plStack_188;
              local_120 = local_190;
              plStack_140 = &local_120;
              iVar3 = 0;
              local_110 = local_180;
              local_148 = 0;
              while (uVar7 = FUN_071bd28c(&local_120,DAT_091a2a58), plVar9 = local_110,
                    (uVar7 & 1) != 0) {
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar7 = UnityEngine_Object__op_Implicit(plVar9,0);
                if ((uVar7 & 1) != 0) {
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar6 = UnityEngine_Component__get_gameObject(plVar9,0);
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar7 = UnityEngine_GameObject__get_activeInHierarchy(lVar6,0);
                  if ((((uVar7 & 1) != 0) && (*(char *)((long)plVar9 + 0xe9) == '\0')) &&
                     (*(char *)((long)plVar9 + 0xea) == '\0')) {
                    if ((*plVar9 == DAT_09184740) && (*(int *)((long)plVar9 + 0xfc) == 1)) {
                      (**(code **)(DAT_09184740 + 0x218))
                                (&local_190,plVar9,*(undefined8 *)(DAT_09184740 + 0x220));
                      local_a0 = local_180;
                      iVar1 = *piVar13;
                      plStack_a8 = plStack_188;
                      local_b0 = local_190;
                      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      iVar1 = AnhPD_FoodOrder_PieceSet__get_Item(&local_b0,iVar1,0);
                      iVar3 = iVar1 + iVar3;
                    }
                    else {
                      uVar4 = System_String__op_Equality(plVar9[0xf],*puVar10,0);
                      iVar3 = iVar3 + (uVar4 & 1);
                    }
                  }
                }
              }
              FUN_039b06cc(&local_148);
              lVar6 = AnhPD_FoodOrder_MessyController__GetCookingStations(lVar12,0);
              if (lVar6 != 0) {
                FUN_057e185c(&local_138,lVar6,DAT_091ac068);
                local_190 = 0;
                plStack_188 = &local_138;
                while( true ) {
                  do {
                    uVar7 = FUN_071bd28c(&local_138,DAT_091a27d0);
                    lVar6 = local_128;
                    if ((uVar7 & 1) == 0) {
                      FUN_039b0c1c(&local_190);
                      iVar1 = 0;
                      if (*(long *)(lVar12 + 0x110) != 0) {
                        lVar6 = *(long *)(*(long *)(lVar12 + 0x110) + 0x18);
                        if (lVar6 == 0) {
                          iVar1 = 0;
                        }
                        else {
                          uVar5 = AnhPD_FoodOrder_LevelPieceBook__CountInBag(lVar6,*puVar10,0);
                          local_190 = 0;
                          FUN_05c3078c(&local_190,uVar5,DAT_091b6f98);
                          iVar1 = (int)((ulong)local_190 >> 0x20);
                        }
                      }
                      return iVar1 + iVar3 < iVar15;
                    }
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar7 = UnityEngine_Object__op_Implicit(lVar6,0);
                  } while ((uVar7 & 1) == 0);
                  if (lVar6 == 0) break;
                  uVar11 = AnhPD_FoodOrder_CookingStation__get_WorkingResultId(lVar6,0);
                  uVar4 = System_String__op_Equality(uVar11,*puVar10,0);
                  iVar3 = iVar3 + (uVar4 & 1);
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
LAB_041550a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


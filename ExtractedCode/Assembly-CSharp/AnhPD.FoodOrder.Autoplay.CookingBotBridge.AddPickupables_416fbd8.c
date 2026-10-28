// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotBridge$$AddPickupables
// address: 0x416fbd8
// body: available
// range: 0x416fbd8-0x417019b inclusive
// range: 0x41701a0-0x4170313 inclusive
// range: 0x4170318-0x417031b inclusive
// range: 0x4170320-0x4170323 inclusive
// range: 0x4170378-0x4170383 inclusive
// range: 0x4170394-0x41703af inclusive
// range: 0x417043c-0x41704d3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4170198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4170310 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4170318 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4170320 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4170378 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x417037c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4170380 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4170394 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4170398 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x417039c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41703a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41703a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041703a8) */
/* WARNING: Removing unreachable block (ram,0x04170220) */
/* WARNING: Removing unreachable block (ram,0x041704d0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddPickupables(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  
  if ((DAT_095165da & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181ee0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b308);
    FUN_03f5c2a4(&DAT_091ab4e0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095165da = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar3 = AnhPD_FoodOrder_MessyController__get_Spawner(*(long *)(param_1 + 0x10),0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar4 = UnityEngine_Object__op_Inequality(lVar3,0,0);
    lVar12 = 0;
    if ((uVar4 & 1) != 0) {
      if (lVar3 == 0) goto LAB_04170380;
      lVar12 = *(long *)(lVar3 + 0x1b8);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Inequality(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (lVar3 != 0) {
      if (lVar12 == 0) {
        return;
      }
      if (*(long *)(lVar3 + 0x1a0) == 0) {
        return;
      }
      if (param_2 != 0) {
        if (*(char *)(param_2 + 0x1c) == '\0') {
          return;
        }
        plVar13 = *(long **)(*(long *)(lVar3 + 0x1a0) + 0x20);
        if (plVar13 != (long *)0x0) {
          lVar3 = *plVar13;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_0917a3f0) {
                puVar5 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_0416fd70;
              }
              uVar4 = uVar4 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917a3f0,0);
LAB_0416fd70:
          plVar13 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
joined_r0x0416fd88:
          do {
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar3 = *plVar13;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar4 != 0) {
              piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == DAT_09185b10) {
                  puVar5 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_0416fdf4;
                }
                uVar4 = uVar4 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185b10,0);
LAB_0416fdf4:
            uVar4 = (*(code *)*puVar5)(plVar13,puVar5[1]);
            if ((uVar4 & 1) == 0) {
              if (plVar13 == (long *)0x0) {
                return;
              }
              lVar3 = *plVar13;
              uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar4 == 0) goto LAB_04170480;
              piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              goto LAB_04170468;
            }
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar3 = *plVar13;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar4 != 0) {
              piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == DAT_0917aa98) {
                  puVar5 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_0416fe58;
                }
                uVar4 = uVar4 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917aa98,0);
LAB_0416fe58:
            lVar3 = (*(code *)*puVar5)(plVar13,puVar5[1]);
            if (lVar3 == 0) {
              plVar14 = (long *)0x0;
            }
            else {
              plVar14 = *(long **)(lVar3 + 0x10);
            }
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Equality(plVar14,0,0);
            if ((((uVar4 & 1) == 0) &&
                (uVar4 = AnhPD_FoodOrder_ConveyorPickup__CanPick(lVar12,plVar14,0), (uVar4 & 1) != 0
                )) && (uVar4 = AnhPD_FoodOrder_ConveyorPickup__HasRoomFor(lVar12,plVar14,0,0),
                      (uVar4 & 1) != 0)) {
              lVar6 = thunk_FUN_03f9944c(DAT_09181ee0);
              CookingGraph_BotPickupOption___ctor(lVar6,0);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(lVar3 + 0x20);
              uVar7 = AnhPD_FoodOrder_Autoplay_CookingBotBridge__ItemIdOf(plVar14);
              *(undefined8 *)(lVar6 + 0x18) = uVar7;
              thunk_FUN_03f5d7b8();
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              iVar2 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
              *(undefined4 *)(lVar6 + 0x34) = 0;
              *(bool *)(lVar6 + 0x30) = iVar2 == -1;
              plVar8 = (long *)AnhPD_FoodOrder_IngredientConveyorItem__get_ChainMembers(plVar14,0);
              if (plVar8 != (long *)0x0) {
                lVar3 = *plVar8;
                uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                if (uVar4 != 0) {
                  piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == DAT_0917b308) {
                      puVar5 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_0416ff98;
                    }
                    uVar4 = uVar4 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar4 != 0);
                }
                puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b308,0);
LAB_0416ff98:
                iVar2 = (*(code *)*puVar5)(plVar8,puVar5[1]);
                if (0 < iVar2) {
                  lVar3 = *plVar8;
                  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                  if (uVar4 != 0) {
                    piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == DAT_0917a3f0) {
                        puVar5 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
                        goto LAB_04170000;
                      }
                      uVar4 = uVar4 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a3f0,0);
LAB_04170000:
                  plVar14 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
joined_r0x0417001c:
                  do {
                    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar3 = *plVar14;
                    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    if (uVar4 != 0) {
                      piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == DAT_09185b10) {
                          puVar5 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
                          goto LAB_0417006c;
                        }
                        uVar4 = uVar4 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar4 != 0);
                    }
                    puVar5 = (undefined8 *)FUN_03f95da8(plVar14,DAT_09185b10,0);
LAB_0417006c:
                    uVar4 = (*(code *)*puVar5)(plVar14,puVar5[1]);
                    if ((uVar4 & 1) == 0) goto LAB_041701a0;
                    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar3 = *plVar14;
                    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    if (uVar4 != 0) {
                      piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == DAT_0917aa98) {
                          puVar5 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
                          goto LAB_041700d0;
                        }
                        uVar4 = uVar4 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar4 != 0);
                    }
                    puVar5 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917aa98,0);
LAB_041700d0:
                    lVar3 = (*(code *)*puVar5)(plVar14,puVar5[1]);
                    if (lVar3 == 0) {
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = *(undefined8 *)(lVar3 + 0x10);
                    }
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
                    if ((uVar4 & 1) == 0) {
                      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar15 = *(long *)(lVar6 + 0x20);
                      uVar7 = AnhPD_FoodOrder_Autoplay_CookingBotBridge__ItemIdOf
                                        (*(undefined8 *)(lVar3 + 0x10));
                      lVar9 = DAT_091b0570;
                      if (lVar15 != 0) {
                        lVar10 = *(long *)(lVar15 + 0x10);
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        if (lVar10 != 0) {
                          uVar1 = *(uint *)(lVar15 + 0x18);
                          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                            *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                            thunk_FUN_03f5d7b8();
                          }
                          else {
                            FUN_057e0c68(lVar15,uVar7,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          }
                          AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddPickupIngredients
                                    (param_1,lVar6,*(undefined8 *)(lVar3 + 0x10));
                          goto joined_r0x0417001c;
                        }
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                  } while( true );
                }
              }
              lVar3 = DAT_091b0570;
              lVar9 = *(long *)(lVar6 + 0x20);
              if (lVar9 == 0) {
LAB_04170398:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar15 = *(long *)(lVar9 + 0x10);
              uVar7 = *(undefined8 *)(lVar6 + 0x18);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_04170398;
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                puVar5 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                *puVar5 = uVar7;
                thunk_FUN_03f5d7b8(puVar5);
              }
              else {
                FUN_057e0c68(lVar9,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
              AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddPickupIngredients(param_1,lVar6,plVar14)
              ;
              goto LAB_04170294;
            }
          } while( true );
        }
      }
    }
  }
LAB_04170380:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_041701a0:
  if (plVar14 != (long *)0x0) {
    lVar3 = *plVar14;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_09185a58) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04170208;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar14,DAT_09185a58,0);
LAB_04170208:
    (*(code *)*puVar5)(plVar14,puVar5[1]);
  }
LAB_04170294:
  lVar3 = DAT_091ab4e0;
  lVar9 = *(long *)(param_2 + 0x30);
  if (lVar9 != 0) {
    lVar15 = *(long *)(lVar9 + 0x10);
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar15 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        plVar14 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
        *plVar14 = lVar6;
        thunk_FUN_03f5d7b8(plVar14,lVar6);
      }
      else {
        FUN_057e0c68(lVar9,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      goto joined_r0x0416fd88;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar11 = piVar11 + 4;
    if (uVar4 == 0) break;
LAB_04170468:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0417049c;
    }
  }
LAB_04170480:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185a58,0);
LAB_0417049c:
  (*(code *)*puVar5)(plVar13,puVar5[1]);
  return;
}


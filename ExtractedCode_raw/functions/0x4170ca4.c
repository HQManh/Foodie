// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotBridge$$AddCommitted
// address: 0x4170ca4
// body: available
// range: 0x4170ca4-0x4171147 inclusive
// range: 0x417114c-0x41711d7 inclusive
// range: 0x41711dc-0x41711df inclusive
// range: 0x41711e4-0x41711e7 inclusive
// range: 0x41711ec-0x41711ef inclusive
// range: 0x41711f4-0x41711f7 inclusive
// range: 0x41711fc-0x41711ff inclusive
// range: 0x4171204-0x4171207 inclusive
// range: 0x417120c-0x417120f inclusive
// range: 0x4171288-0x4171417 inclusive
// range: 0x41714e4-0x41714eb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4171144 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41711d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41711dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41711e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41711ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41711f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41711fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4171204 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x417120c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41713fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4171400 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4171404 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041711cc) */
/* WARNING: Removing unreachable block (ram,0x041711d0) */
/* WARNING: Removing unreachable block (ram,0x041712b8) */
/* WARNING: Removing unreachable block (ram,0x04171410) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddCommitted(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long local_b8;
  long *plStack_b0;
  long local_a8;
  long local_a0;
  long *plStack_98;
  long local_90;
  long *local_88;
  long local_80;
  long *plStack_78;
  long local_70;
  
  if ((DAT_095165e0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181e98);
    FUN_03f5c2a4(&DAT_091a5030);
    FUN_03f5c2a4(&DAT_091a27c8);
    FUN_03f5c2a4(&DAT_091a5038);
    FUN_03f5c2a4(&DAT_091a27d0);
    FUN_03f5c2a4(&DAT_091a27d8);
    FUN_03f5c2a4(&DAT_091a5040);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a750);
    FUN_03f5c2a4(&DAT_0917ae30);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ac058);
    FUN_03f5c2a4(&DAT_091ab438);
    FUN_03f5c2a4(&DAT_091ac060);
    FUN_03f5c2a4(&DAT_091b2318);
    FUN_03f5c2a4(&DAT_091ac068);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095165e0 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x40);
  local_80 = 0;
  plStack_78 = (long *)0x0;
  local_70 = 0;
  local_90 = 0;
  local_88 = (long *)0x0;
  local_a0 = 0;
  plStack_98 = (long *)0x0;
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar6 = AnhPD_FoodOrder_MessyController__GetCookingStations(*(long *)(param_1 + 0x10),0);
      if (lVar6 != 0) {
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_04171414;
        FUN_057e0e78(*(long *)(param_1 + 0x40),lVar6,DAT_091ac058);
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_057e185c(&local_b8,*(long *)(param_1 + 0x40),DAT_091ac068);
        local_70 = local_a8;
        plStack_78 = plStack_b0;
        local_80 = local_b8;
        local_b8 = 0;
        plStack_b0 = &local_80;
        while (uVar3 = FUN_071bd28c(&local_80,DAT_091a27d0), lVar11 = local_70, lVar6 = local_b8,
              (uVar3 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar11,0);
          if ((uVar3 & 1) != 0) {
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar10 = *(long **)(lVar11 + 0x58);
            if (plVar10 != (long *)0x0) {
              lVar6 = *plVar10;
              uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar3 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == DAT_0917a750) {
                    puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_04170ef8;
                  }
                  uVar3 = uVar3 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917a750,0);
LAB_04170ef8:
              plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
joined_r0x04170f14:
              local_88 = plVar10;
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar6 = *plVar10;
              uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar3 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                    puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_04170f6c;
                  }
                  uVar3 = uVar3 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185b10,0);
LAB_04170f6c:
              uVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
              plVar10 = local_88;
              if ((uVar3 & 1) != 0) {
                if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar6 = *local_88;
                uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar3 != 0) {
                  piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == DAT_0917ae30) {
                      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_04170fd8;
                    }
                    uVar3 = uVar3 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar3 != 0);
                }
                puVar4 = (undefined8 *)FUN_03f95da8(local_88,DAT_0917ae30,0);
LAB_04170fd8:
                lVar6 = (*(code *)*puVar4)(plVar10,puVar4[1]);
                plVar10 = local_88;
                if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0)) &&
                   (0 < (int)*(ulong *)(lVar6 + 0x18))) {
                  uVar3 = 0;
                  uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
                  do {
                    if (uVar7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    lVar11 = *(long *)(lVar6 + 0x20 + uVar3 * 8);
                    if ((lVar11 != 0) && (*(char *)(lVar11 + 0x24) != '\0')) {
                      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar5 = AnhPD_FoodOrder_Autoplay_GraphNodeIdMap__PickupableNodeOf
                                        (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar11 + 0x10),0)
                      ;
                      if (lVar5 == 0) {
                        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar5 = AnhPD_FoodOrder_Autoplay_GraphNodeIdMap__NodeOf
                                          (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar11 + 0x10),
                                           0);
                      }
                      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar7 = UnityEngine_Object__op_Equality(lVar5,0,0);
                      if ((uVar7 & 1) == 0) {
                        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar12 = *(long *)(param_2 + 0x48);
                        lVar11 = thunk_FUN_03f9944c(DAT_09181e98);
                        CookingGraph_BotCommittedIngredientState___ctor(lVar11,0);
                        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        *(long *)(lVar11 + 0x10) = lVar5;
                        thunk_FUN_03f5d7b8((long *)(lVar11 + 0x10),lVar5);
                        *(undefined4 *)(lVar11 + 0x18) = 0x3f800000;
                        lVar5 = DAT_091ab438;
                        if (lVar12 == 0) {
LAB_041711e4:
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar8 = *(long *)(lVar12 + 0x10);
                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                        if (lVar8 == 0) goto LAB_041711e4;
                        uVar2 = *(uint *)(lVar12 + 0x18);
                        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                          plVar10 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                          *plVar10 = lVar11;
                          thunk_FUN_03f5d7b8(plVar10,lVar11);
                        }
                        else {
                          FUN_057e0c68(lVar12,lVar11,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                        }
                      }
                      else {
                        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        AnhPD_FoodOrder_Autoplay_GraphNodeIdMap__ReportUnmapped
                                  (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar11 + 0x10),0);
                      }
                    }
                    uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
                    uVar3 = uVar3 + 1;
                    plVar10 = local_88;
                  } while ((long)uVar3 < (long)(int)*(uint *)(lVar6 + 0x18));
                }
                goto joined_r0x04170f14;
              }
              if (local_88 != (long *)0x0) {
                lVar6 = *local_88;
                uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar3 != 0) {
                  piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
                      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_041711b0;
                    }
                    uVar3 = uVar3 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar3 != 0);
                }
                puVar4 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185a58,0);
LAB_041711b0:
                (*(code *)*puVar4)(plVar10,puVar4[1]);
              }
            }
          }
        }
        FUN_071bd288(plStack_b0,DAT_091a27c8);
        if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c548(lVar6);
        }
        if (*(long *)(param_1 + 0x38) != 0) {
          FUN_057e185c(&local_b8,*(long *)(param_1 + 0x38),DAT_091b2318);
          local_90 = local_a8;
          plStack_98 = plStack_b0;
          local_a0 = local_b8;
          local_b8 = 0;
          plStack_b0 = &local_a0;
          while( true ) {
            uVar3 = FUN_071bd28c(&local_a0,DAT_091a5038);
            lVar6 = local_90;
            if ((uVar3 & 1) == 0) {
              FUN_071bd288(&local_a0,DAT_091a5030);
              AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddActiveWorkCounts(param_1,param_2);
              return;
            }
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar5 = *(long *)(param_2 + 0x48);
            lVar11 = thunk_FUN_03f9944c(DAT_09181e98);
            CookingGraph_BotCommittedIngredientState___ctor(lVar11,0);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar6 + 0x10);
            thunk_FUN_03f5d7b8();
            *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar6 + 0x18);
            *(undefined4 *)(lVar11 + 0x18) = 0x3f800000;
            thunk_FUN_03f5d7b8();
            lVar6 = DAT_091ab438;
            if (lVar5 == 0) break;
            lVar12 = *(long *)(lVar5 + 0x10);
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar12 == 0) break;
            uVar2 = *(uint *)(lVar5 + 0x18);
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar2 + 1;
              plVar10 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
              *plVar10 = lVar11;
              thunk_FUN_03f5d7b8(plVar10,lVar11);
            }
            else {
              FUN_057e0c68(lVar5,lVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
    }
  }
LAB_04171414:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


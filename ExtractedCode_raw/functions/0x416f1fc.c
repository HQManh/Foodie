// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotBridge$$AddQueues
// address: 0x416f1fc
// body: available
// range: 0x416f1fc-0x416fa7f inclusive
// range: 0x416fa84-0x416fa87 inclusive
// range: 0x416fa8c-0x416fa8f inclusive
// range: 0x416fa94-0x416fa97 inclusive
// range: 0x416fa9c-0x416fa9f inclusive
// range: 0x416faa4-0x416faa7 inclusive
// range: 0x416faac-0x416faaf inclusive
// range: 0x416fb20-0x416fb5b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x416f760 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416fa7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416fa84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416fa8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416fa94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416fa9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416faa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416faac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416fb40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416fb44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416fb48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416fb4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0416f7e4) */
/* WARNING: Removing unreachable block (ram,0x0416fb54) */

void AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddQueues(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  uint uVar16;
  long *local_98;
  long **pplStack_90;
  long local_88;
  long *local_80;
  long **pplStack_78;
  long local_70;
  long *local_68;
  
  if ((DAT_095165d9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181ef0);
    FUN_03f5c2a4(&DAT_09181ef8);
    FUN_03f5c2a4(&DAT_09175ad8);
    FUN_03f5c2a4(&DAT_091a2720);
    FUN_03f5c2a4(&DAT_091a2728);
    FUN_03f5c2a4(&DAT_091a2730);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ab558);
    FUN_03f5c2a4(&DAT_091aa610);
    FUN_03f5c2a4(&DAT_091abe60);
    FUN_03f5c2a4(&DAT_091ab530);
    FUN_03f5c2a4(&DAT_091abe78);
    FUN_03f5c2a4(&DAT_091abe90);
    FUN_03f5c2a4(&DAT_091abe50);
    FUN_03f5c2a4(&DAT_091aa608);
    FUN_03f5c2a4(&DAT_091aa618);
    FUN_03f5c2a4(&DAT_091ab570);
    FUN_03f5c2a4(&DAT_0917bef8);
    FUN_03f5c2a4(&DAT_0917ba30);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e6a50);
    FUN_03f5c2a4(&DAT_0918ee68);
    DAT_095165d9 = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80 = (long *)0x0;
  pplStack_78 = (long **)0x0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar5 = AnhPD_FoodOrder_MessyController__get_Spawner(*(long *)(param_1 + 0x10),0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar7 = AnhPD_FoodOrder_MessyController__get_Spawner(*(long *)(param_1 + 0x10),0),
       lVar7 != 0)) {
      lVar7 = *(long *)(lVar7 + 0x1a0);
      if (lVar7 == 0) {
        return;
      }
      uVar2 = AnhPD_FoodOrder_ConveyorGrid__get_ColumnCount(lVar7,0);
      if (0 < (int)uVar2) {
        uVar15 = uVar2;
        if (param_2 == 0) goto LAB_0416fb40;
        do {
          lVar13 = *(long *)(param_2 + 0x28);
          uVar5 = thunk_FUN_03f9944c(DAT_09181ef8);
          CookingGraph_BotQueueLaneState___ctor(uVar5,0);
          lVar9 = DAT_091ab558;
          if (lVar13 == 0) goto LAB_0416fb40;
          lVar10 = *(long *)(lVar13 + 0x10);
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_0416fb40;
          uVar16 = *(uint *)(lVar13 + 0x18);
          if (uVar16 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar16 + 1;
            puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar16 * 8 + 0x20);
            *puVar8 = uVar5;
            thunk_FUN_03f5d7b8(puVar8,uVar5);
          }
          else {
            FUN_057e0c68(lVar13,uVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      uVar15 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      lVar9 = thunk_FUN_03f9944c(DAT_0917ba30);
      FUN_057e0478(lVar9,uVar15,DAT_091aa608);
      uVar16 = uVar2;
      if (0 < (int)uVar2) {
        do {
          uVar5 = thunk_FUN_03f9944c(DAT_0917bef8);
          FUN_057e0400(uVar5,DAT_091abe50);
          lVar13 = DAT_091aa610;
          if (lVar9 == 0) goto LAB_0416fb40;
          lVar10 = *(long *)(lVar9 + 0x10);
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_0416fb40;
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
            *puVar8 = uVar5;
            thunk_FUN_03f5d7b8(puVar8,uVar5);
          }
          else {
            FUN_057e0c68(lVar9,uVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      plVar14 = *(long **)(lVar7 + 0x20);
      if (plVar14 != (long *)0x0) {
        lVar7 = *plVar14;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_0917a3f0) {
              puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0416f5a4;
            }
            uVar6 = uVar6 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917a3f0,0);
LAB_0416f5a4:
        plVar14 = (long *)(*(code *)*puVar8)(plVar14,puVar8[1]);
        pplStack_90 = &local_68;
        local_98 = (long *)0x0;
joined_r0x0416f5bc:
        do {
          do {
            local_68 = plVar14;
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *plVar14;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar6 != 0) {
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == DAT_09185b10) {
                  puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0416f630;
                }
                uVar6 = uVar6 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar6 != 0);
            }
            puVar8 = (undefined8 *)FUN_03f95da8(plVar14,DAT_09185b10,0);
LAB_0416f630:
            uVar6 = (*(code *)*puVar8)(plVar14,puVar8[1]);
            plVar14 = local_68;
            if ((uVar6 & 1) == 0) {
              if (local_68 == (long *)0x0) goto LAB_0416f7d8;
              lVar7 = *local_68;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar6 == 0) goto LAB_0416f7b0;
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              goto LAB_0416f798;
            }
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *local_68;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar6 != 0) {
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == DAT_0917aa98) {
                  puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0416f694;
                }
                uVar6 = uVar6 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar6 != 0);
            }
            puVar8 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917aa98,0);
LAB_0416f694:
            lVar7 = (*(code *)*puVar8)(plVar14,puVar8[1]);
            if (lVar7 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined8 *)(lVar7 + 0x10);
            }
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = UnityEngine_Object__op_Equality(uVar5,0,0);
            plVar14 = local_68;
          } while ((uVar6 & 1) != 0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        } while (uVar15 <= *(uint *)(lVar7 + 0x20));
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = FUN_057e0998(lVar9,*(uint *)(lVar7 + 0x20),DAT_091aa618);
        lVar13 = DAT_091abe60;
        if (lVar10 != 0) {
          lVar11 = *(long *)(lVar10 + 0x10);
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar16 = *(uint *)(lVar10 + 0x18);
            if (uVar16 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar16 + 1;
              plVar14 = (long *)(lVar11 + (long)(int)uVar16 * 8 + 0x20);
              *plVar14 = lVar7;
              thunk_FUN_03f5d7b8(plVar14,lVar7);
              plVar14 = local_68;
            }
            else {
              FUN_057e0c68(lVar10,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              plVar14 = local_68;
            }
            goto joined_r0x0416f5bc;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
LAB_0416fb40:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar12 = piVar12 + 4;
    if (uVar6 == 0) break;
LAB_0416f798:
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0416f7cc;
    }
  }
LAB_0416f7b0:
  puVar8 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_0416f7cc:
  (*(code *)*puVar8)(plVar14,puVar8[1]);
LAB_0416f7d8:
  if (0 < (int)uVar2) {
    if (lVar9 == 0) goto LAB_0416fb40;
    uVar15 = 0;
    do {
      lVar7 = FUN_057e0998(lVar9,uVar15,DAT_091aa618);
      if (*(int *)(DAT_0918ee68 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918ee68);
      }
      puVar8 = *(undefined8 **)(DAT_0918ee68 + 0xb8);
      lVar13 = puVar8[1];
      if (lVar13 == 0) {
        if (*(int *)(DAT_0918ee68 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918ee68);
          puVar8 = *(undefined8 **)(DAT_0918ee68 + 0xb8);
        }
        uVar5 = *puVar8;
        lVar13 = thunk_FUN_03f9944c(DAT_09175ad8);
        FUN_06d4541c(lVar13,uVar5,DAT_091e6a50,0);
        plVar14 = (long *)(*(long *)(DAT_0918ee68 + 0xb8) + 8);
        *plVar14 = lVar13;
        thunk_FUN_03f5d7b8(plVar14,lVar13);
      }
      if (lVar7 == 0) goto LAB_0416fb40;
      FUN_057e280c(lVar7,lVar13,DAT_091abe90);
      lVar7 = FUN_057e0998(lVar9,uVar15,DAT_091aa618);
      if (lVar7 == 0) goto LAB_0416fb40;
      FUN_057e185c(&local_98,lVar7,DAT_091abe78);
      local_70 = local_88;
      pplStack_78 = pplStack_90;
      local_80 = local_98;
      local_98 = (long *)0x0;
      pplStack_90 = &local_80;
      while (uVar6 = FUN_071bd28c(&local_80,DAT_091a2728), lVar7 = local_70, (uVar6 & 1) != 0) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(param_2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar13 = FUN_057e0998(*(long *)(param_2 + 0x28),uVar15,DAT_091ab570);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *(long *)(lVar13 + 0x10);
        lVar13 = thunk_FUN_03f9944c(DAT_09181ef0);
        CookingGraph_BotQueueItemState___ctor(lVar13,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = AnhPD_FoodOrder_Autoplay_CookingBotBridge__ItemIdOf(*(undefined8 *)(lVar7 + 0x10));
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined8 *)(lVar13 + 0x10) = uVar5;
        thunk_FUN_03f5d7b8();
        plVar14 = *(long **)(lVar7 + 0x10);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar3 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
        *(uint *)(lVar13 + 0x18) = (uint)(iVar3 == -1);
        uVar5 = AnhPD_FoodOrder_Autoplay_CookingBotBridge__FirstPickupableNode
                          (param_1,*(undefined8 *)(lVar7 + 0x10));
        *(undefined8 *)(lVar13 + 0x20) = uVar5;
        uVar5 = thunk_FUN_03f5d7b8();
        uVar4 = AnhPD_FoodOrder_Autoplay_CookingBotBridge__StatusOf
                          (uVar5,*(undefined8 *)(lVar7 + 0x10));
        *(undefined4 *)(lVar13 + 0x28) = uVar4;
        lVar7 = DAT_091ab530;
        if (lVar10 == 0) {
LAB_0416fa7c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *(long *)(lVar10 + 0x10);
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_0416fa7c;
        uVar16 = *(uint *)(lVar10 + 0x18);
        if (uVar16 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar16 + 1;
          plVar14 = (long *)(lVar11 + (long)(int)uVar16 * 8 + 0x20);
          *plVar14 = lVar13;
          thunk_FUN_03f5d7b8(plVar14,lVar13);
        }
        else {
          FUN_057e0c68(lVar10,lVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_071bd288(&local_80,DAT_091a2720);
      uVar15 = uVar15 + 1;
    } while (uVar2 != uVar15);
  }
  return;
}


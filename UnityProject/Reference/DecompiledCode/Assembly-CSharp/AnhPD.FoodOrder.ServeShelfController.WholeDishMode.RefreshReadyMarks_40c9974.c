// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$RefreshReadyMarks
// address: 0x40c9974
// body: available
// range: 0x40c9974-0x40c9e33 inclusive
// range: 0x40c9e88-0x40ca0ff inclusive
// range: 0x40ca110-0x40ca12f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c9e30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ca0ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ca0f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ca0f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ca0f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ca0fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ca110 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ca114 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ca118 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ca120 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ca124 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ca128 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040c9e20) */
/* WARNING: Removing unreachable block (ram,0x040ca11c) */
/* WARNING: Removing unreachable block (ram,0x040c9f10) */

void AnhPD_FoodOrder_ServeShelfController_WholeDishMode__RefreshReadyMarks
               (long param_1,long param_2)

{
  long **pplVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long **pplVar8;
  int *piVar9;
  long *plVar10;
  undefined1 auStack_1d0 [72];
  long *local_188;
  long **pplStack_180;
  long *local_178;
  long **pplStack_170;
  long *local_168;
  undefined8 local_140;
  long **pplStack_138;
  long *local_130;
  long **pplStack_128;
  long *local_120;
  long **pplStack_118;
  long *local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *local_b0;
  long **pplStack_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long **pplStack_88;
  long *local_80;
  long *local_78;
  long **local_70;
  long *local_68;
  
  if ((DAT_09515fb2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a20b0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a20b8);
    FUN_03f5c2a4(&DAT_091a20c0);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091a7df0);
    FUN_03f5c2a4(&DAT_091a7df8);
    FUN_03f5c2a4(&DAT_091a8608);
    FUN_03f5c2a4(&DAT_091a7e00);
    FUN_03f5c2a4(&DAT_091a7e08);
    FUN_03f5c2a4(&DAT_091a7e10);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a4d0);
    FUN_03f5c2a4(&DAT_0917ab80);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_091bee58);
    DAT_09515fb2 = 1;
  }
  local_a0 = (long *)0x0;
  local_98 = (long *)0x0;
  local_b0 = (long *)0x0;
  pplStack_a8 = (long **)0x0;
  local_c0 = 0;
  local_110 = (long *)0x0;
  pplStack_128 = (long **)0x0;
  local_130 = (long *)0x0;
  pplStack_118 = (long **)0x0;
  local_120 = (long *)0x0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_040ca118;
  FUN_053c215c(*(long *)(param_1 + 0x70),DAT_091a7df8);
  lVar3 = AnhPD_FoodOrder_ServeShelfController__get_LineHandle(0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
  if ((param_2 != 0) && ((uVar4 & 1) != 0)) {
    if ((lVar3 != 0) && (plVar10 = *(long **)(lVar3 + 0xe8), plVar10 != (long *)0x0)) {
      lVar3 = *plVar10;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917a4d0) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_040c9b70;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917a4d0,0);
LAB_040c9b70:
      plVar10 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
      local_70 = &local_98;
      local_78 = (long *)0x0;
      do {
        local_98 = plVar10;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar10;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185b10) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_040c9c00;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185b10,0);
LAB_040c9c00:
        uVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        plVar10 = local_98;
        if ((uVar4 & 1) == 0) {
          plVar10 = *local_70;
          if (plVar10 == (long *)0x0) goto LAB_040c9f00;
          lVar3 = *plVar10;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 == 0) goto LAB_040c9ed8;
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_040c9ec0;
        }
        if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *local_98;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917ab80) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_040c9c64;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_98,DAT_0917ab80,0);
LAB_040c9c64:
        lVar3 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
        plVar10 = local_98;
        if ((uVar4 & 1) != 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar4 = AnhPD_FoodOrder_FCustomerLine__get_isShowingCustomer(lVar3,0);
          plVar10 = local_98;
          if ((uVar4 & 1) != 0) {
            if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_053ebbdc(*(long *)(param_1 + 0x78),DAT_091a8608);
            lVar6 = AnhPD_FoodOrder_FCustomerLine__GetServableOrderIndices(lVar3,0);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_05797d74(&local_188,lVar6,DAT_091adcc0);
            local_a0 = local_178;
            pplStack_138 = &local_b0;
            pplStack_a8 = pplStack_180;
            local_b0 = local_188;
            local_140 = 0;
            while (uVar4 = FUN_071ad7a4(&local_b0,DAT_091a34d8), plVar10 = local_a0,
                  (uVar4 & 1) != 0) {
              AnhPD_FoodOrder_FCustomerLine__GetOrderSpec
                        (&local_188,lVar3,(ulong)local_a0 & 0xffffffff,0);
              memcpy(&local_100,&local_188,0x48);
              uVar4 = AnhPD_FoodOrder_OrderSpec__get_IsValid(&local_100,0);
              if (((uVar4 & 1) != 0) && ((uStack_d8 & 1) != 0)) {
                if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar4 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&uStack_f0,0);
                if ((uVar4 & 1) == 0) {
                  memcpy(auStack_1d0,&local_100,0x48);
                  uVar4 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__TryClaimReadyPlate
                                    (param_1,auStack_1d0,param_2);
                  if ((uVar4 & 1) != 0) {
                    lVar6 = *(long *)(param_1 + 0x70);
                    uVar7 = AnhPD_FoodOrder_FCustomerLine__get_SpawnData(lVar3,0);
                    local_188 = (long *)0x0;
                    pplStack_180 = (long **)0x0;
                    local_178 = (long *)0x0;
                    FUN_066ee688(&local_188,lVar3,uVar7,(ulong)plVar10 & 0xffffffff,DAT_091bee58);
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    pplStack_88 = pplStack_180;
                    local_90 = local_188;
                    local_80 = local_178;
                    FUN_053c2d70(lVar6,&local_90,DAT_091a7df0);
                  }
                }
              }
            }
            FUN_071ad7a0(&local_b0,DAT_091a34d0);
            plVar10 = local_98;
          }
        }
      } while( true );
    }
    goto LAB_040ca118;
  }
  goto LAB_040c9f2c;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
LAB_040c9ec0:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_040c9ef4;
    }
  }
LAB_040c9ed8:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185a58,0);
LAB_040c9ef4:
  (*(code *)*puVar5)(plVar10,puVar5[1]);
LAB_040c9f00:
  if (local_78 != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548();
  }
  if (*(long *)(param_1 + 0x78) == 0) goto LAB_040ca118;
  FUN_053ebbdc(*(long *)(param_1 + 0x78),DAT_091a8608);
LAB_040c9f2c:
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_053c26c8(&local_188,*(long *)(param_1 + 0x68),DAT_091a7e08);
    local_110 = local_168;
    pplStack_128 = pplStack_180;
    local_130 = local_188;
    pplStack_118 = pplStack_170;
    local_120 = local_178;
    local_188 = (long *)0x0;
    pplStack_180 = &local_130;
    while (uVar4 = FUN_0718aed4(&local_130,DAT_091a20b8), plVar2 = local_110, pplVar1 = pplStack_118
          , plVar10 = local_120, (uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_68 = local_110;
      local_78 = local_120;
      local_70 = pplStack_118;
      uVar4 = FUN_053c21bc(*(long *)(param_1 + 0x70),&local_78,DAT_091a7e00);
      if ((uVar4 & 1) == 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(plVar10,0);
        if ((uVar4 & 1) != 0) {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          pplVar8 = (long **)AnhPD_FoodOrder_FCustomerLine__get_SpawnData(plVar10,0);
          if (pplVar8 == pplVar1) {
            AnhPD_FoodOrder_FCustomerLine__SetOrderReady(plVar10,(ulong)plVar2 & 0xffffffff,0,0);
          }
        }
      }
    }
    FUN_0718aed0(&local_130,DAT_091a20b0);
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_053c26c8(&local_188,*(long *)(param_1 + 0x70),DAT_091a7e08);
      local_110 = local_168;
      pplStack_138 = &local_130;
      pplStack_128 = pplStack_180;
      local_130 = local_188;
      pplStack_118 = pplStack_170;
      local_120 = local_178;
      local_140 = 0;
      while (uVar4 = FUN_0718aed4(&local_130,DAT_091a20b8), plVar2 = local_110, plVar10 = local_120,
            (uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_188 = local_120;
        pplStack_180 = pplStack_118;
        local_178 = local_110;
        uVar4 = FUN_053c21bc(*(long *)(param_1 + 0x68),&local_188,DAT_091a7e00);
        if ((uVar4 & 1) == 0) {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          AnhPD_FoodOrder_FCustomerLine__SetOrderReady(plVar10,(ulong)plVar2 & 0xffffffff,1,0);
        }
      }
      FUN_0718aed0(&local_130,DAT_091a20b0);
      if (*(long *)(param_1 + 0x68) != 0) {
        FUN_053c215c(*(long *)(param_1 + 0x68),DAT_091a7df8);
        if (*(long *)(param_1 + 0x68) != 0) {
          FUN_053c2dac(*(long *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),DAT_091a7e10);
          return;
        }
      }
    }
  }
LAB_040ca118:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


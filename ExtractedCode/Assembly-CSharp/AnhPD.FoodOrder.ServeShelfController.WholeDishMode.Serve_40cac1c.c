// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$Serve
// address: 0x40cac1c
// body: available
// range: 0x40cac1c-0x40cb1c7 inclusive
// range: 0x40cb1cc-0x40cb1cf inclusive
// range: 0x40cb218-0x40cb22f inclusive
// range: 0x40cb244-0x40cb26b inclusive
// range: 0x40cb318-0x40cb3af inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40cb1c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cb1cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cb218 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cb21c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cb220 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cb224 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cb228 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cb22c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cb244 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cb248 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cb24c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cb250 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040cb0c4) */
/* WARNING: Removing unreachable block (ram,0x040cb258) */

void AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Serve(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  int iVar14;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  ulong local_98;
  long local_90;
  long **local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  long *local_68;
  
  if ((DAT_09515fb7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091a8600);
    FUN_03f5c2a4(&DAT_091a8608);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a4d0);
    FUN_03f5c2a4(&DAT_0917ab80);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091afe10);
    FUN_03f5c2a4(&DAT_091afe20);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_091afe58);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515fb7 = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lVar3 = AnhPD_FoodOrder_ServeShelfController__get_LineHandle(0);
  lVar4 = AnhPD_FoodOrder_ServeShelfController__get_Info(0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar5 = UnityEngine_Object__op_Implicit(lVar3,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if ((lVar3 == 0) || (plVar13 = *(long **)(lVar3 + 0xe8), plVar13 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = *plVar13;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == DAT_0917a4d0) {
        puVar6 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_040cadcc;
      }
      uVar5 = uVar5 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917a4d0,0);
LAB_040cadcc:
  plVar13 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
  local_88 = &local_68;
  local_90 = 0;
  do {
    local_68 = plVar13;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar13;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_09185b10) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_040cae50;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185b10,0);
LAB_040cae50:
    uVar5 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    plVar13 = local_68;
    if ((uVar5 & 1) == 0) {
      plVar13 = *local_88;
      if (plVar13 == (long *)0x0) goto LAB_040cb384;
      lVar3 = *plVar13;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_040cb35c;
      piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *local_68;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_0917ab80) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_040caebc;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917ab80,0);
LAB_040caebc:
    lVar3 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(lVar3,0);
    plVar13 = local_68;
    if ((uVar5 & 1) != 0) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = AnhPD_FoodOrder_FCustomerLine__get_IsCustomerReady(lVar3,0);
      plVar13 = local_68;
      if ((uVar5 & 1) != 0) {
        if (**(long **)(DAT_091881a0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x180);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = AnhPD_FoodOrder_ServeService__HasReservation(lVar7,lVar3,0);
        plVar13 = local_68;
        if ((uVar5 & 1) == 0) {
          lVar7 = AnhPD_FoodOrder_FCustomerLine__GetOpenOrderIndices(lVar3,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar13 = local_68;
          if (*(int *)(lVar7 + 0x18) != 0) {
            lVar10 = *(long *)(param_1 + 0x80);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            iVar14 = *(int *)(lVar10 + 0x18);
            *(undefined4 *)(lVar10 + 0x18) = 0;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (0 < iVar14) {
              System_Array__Clear(*(undefined8 *)(lVar10 + 0x10),0,iVar14,0);
            }
            if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_053ebbdc(*(long *)(param_1 + 0x88),DAT_091a8608);
            FUN_05797d74(&local_a8,lVar7,DAT_091adcc0);
            local_70 = local_98;
            puStack_78 = puStack_a0;
            local_80 = local_a8;
            local_a8 = 0;
            puStack_a0 = &local_80;
            while (uVar1 = FUN_071ad7a4(&local_80,DAT_091a34d8), (uVar1 & 1) != 0) {
              uVar8 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__PickServePlate
                                (param_1,lVar3,local_70 & 0xffffffff,lVar4);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar5 = UnityEngine_Object__op_Implicit(uVar8,0);
              lVar10 = DAT_091afe10;
              if ((uVar5 & 1) == 0) break;
              lVar9 = *(long *)(param_1 + 0x80);
              if (lVar9 == 0) {
LAB_040cb1c4:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar11 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_040cb1c4;
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                puVar6 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                *puVar6 = uVar8;
                thunk_FUN_03f5d7b8(puVar6,uVar8);
              }
              else {
                FUN_057e0c68(lVar9,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_053ec72c(*(long *)(param_1 + 0x88),uVar8,DAT_091a8600);
            }
            FUN_071ad7a0(&local_80,DAT_091a34d0);
            if ((((uVar1 ^ 1) & 1) != 0) && (0 < *(int *)(lVar7 + 0x18))) {
              iVar14 = 0;
              do {
                if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar10 = FUN_057e0998(*(long *)(param_1 + 0x80),iVar14,DAT_091afe58);
                uVar2 = FUN_05796eb0(lVar7,iVar14,DAT_091add20);
                AnhPD_FoodOrder_ServeShelfController_WholeDishMode__RebindForServe
                          (param_1,lVar10,lVar3,uVar2);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar9 = *(long *)(param_1 + 0x10);
                uVar8 = *(undefined8 *)(lVar10 + 0xa8);
                uVar2 = FUN_05796eb0(lVar7,iVar14,DAT_091add20);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                AnhPD_FoodOrder_ServeShelfController__ServePlateTo(lVar9,lVar10,uVar8,lVar3,uVar2,0)
                ;
                iVar14 = iVar14 + 1;
              } while (iVar14 < *(int *)(lVar7 + 0x18));
            }
            lVar3 = *(long *)(param_1 + 0x80);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            iVar14 = *(int *)(lVar3 + 0x18);
            *(undefined4 *)(lVar3 + 0x18) = 0;
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (0 < iVar14) {
              System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar14,0);
            }
            if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_053ebbdc(*(long *)(param_1 + 0x88),DAT_091a8608);
            plVar13 = local_68;
          }
        }
      }
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar12 = piVar12 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_040cb378;
    }
  }
LAB_040cb35c:
  puVar6 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185a58,0);
LAB_040cb378:
  (*(code *)*puVar6)(plVar13,puVar6[1]);
LAB_040cb384:
  if (local_90 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548();
}


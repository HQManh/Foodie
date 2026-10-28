// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorLockoutCheck$$Collect
// address: 0x40e4d9c
// body: available
// range: 0x40e4d9c-0x40e52e3 inclusive
// range: 0x40e52e8-0x40e52eb inclusive
// range: 0x40e52f0-0x40e52f3 inclusive
// range: 0x40e533c-0x40e545f inclusive
// range: 0x40e549c-0x40e5503 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e5164 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e52e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e52e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e52f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e5340 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e545c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e54d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e54d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e54d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e54dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e54e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e54e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040e5454) */
/* WARNING: Removing unreachable block (ram,0x040e5458) */
/* WARNING: Removing unreachable block (ram,0x040e54ec) */
/* WARNING: Removing unreachable block (ram,0x040e533c) */
/* WARNING: Removing unreachable block (ram,0x040e54fc) */

void AnhPD_FoodOrder_ConveyorLockoutCheck__Collect(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  long *local_b8;
  long **pplStack_b0;
  long local_a8;
  long *local_a0;
  long **pplStack_98;
  long local_90;
  long *local_80;
  long **pplStack_78;
  long local_70;
  long *local_68;
  
  if ((DAT_09516087 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2720);
    FUN_03f5c2a4(&DAT_091a2728);
    FUN_03f5c2a4(&DAT_091a2730);
    FUN_03f5c2a4(&DAT_091a7fb8);
    FUN_03f5c2a4(&DAT_091a7fc0);
    FUN_03f5c2a4(&DAT_091a7fc8);
    FUN_03f5c2a4(&DAT_091a7fd0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091abe60);
    FUN_03f5c2a4(&DAT_091ad978);
    FUN_03f5c2a4(&DAT_091abe68);
    FUN_03f5c2a4(&DAT_091abe78);
    FUN_03f5c2a4(&DAT_091abe98);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516087 = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80 = (long *)0x0;
  pplStack_78 = (long **)0x0;
  local_a0 = (long *)0x0;
  pplStack_98 = (long **)0x0;
  local_90 = 0;
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + 0x18);
    *(undefined4 *)(param_3 + 0x18) = 0;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(param_3 + 0x10),0,iVar1,0);
    }
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 != 0) {
      iVar1 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      }
      if (((*(long *)(param_1 + 0x18) != 0) &&
          (FUN_053ebbdc(*(long *)(param_1 + 0x18),DAT_091a7fc0), param_2 != 0)) &&
         (plVar11 = *(long **)(param_2 + 0x20), plVar11 != (long *)0x0)) {
        lVar7 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917a3f0) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_040e4f80;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a3f0,0);
LAB_040e4f80:
        plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
        pplStack_b0 = &local_68;
        local_b8 = (long *)0x0;
joined_r0x040e4f98:
        do {
          local_68 = plVar11;
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_040e5014;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_040e5014:
          uVar9 = (*(code *)*puVar5)(plVar11,puVar5[1]);
          plVar11 = local_68;
          if ((uVar9 & 1) == 0) {
            if (local_68 == (long *)0x0) goto LAB_040e51d8;
            lVar7 = *local_68;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 == 0) goto LAB_040e51b0;
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_040e5198;
          }
          if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = *local_68;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_0917aa98) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_040e5078;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917aa98,0);
LAB_040e5078:
          lVar7 = (*(code *)*puVar5)(plVar11,puVar5[1]);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar12 = *(undefined8 *)(lVar7 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar9 = UnityEngine_Object__op_Implicit(uVar12,0);
          plVar11 = local_68;
        } while (((uVar9 & 1) == 0) ||
                (uVar9 = AnhPD_FoodOrder_ConveyorSlot__get_IsAtFrontRow(lVar7,0),
                lVar4 = DAT_091abe60, plVar11 = local_68, (uVar9 & 1) == 0));
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 != 0) {
          lVar8 = *(long *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              plVar11 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
              *plVar11 = lVar7;
              thunk_FUN_03f5d7b8(plVar11,lVar7);
            }
            else {
              FUN_057e0c68(lVar6,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar11 = local_68;
            if ((*(int *)(*(long *)(lVar7 + 0x10) + 0x9c) < 1) &&
               (uVar9 = AnhPD_FoodOrder_ConveyorSlot__get_IsPickable(lVar7,0), plVar11 = local_68,
               (uVar9 & 1) != 0)) {
              if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_053ec72c(*(long *)(param_1 + 0x18),lVar7,DAT_091a7fb8);
              plVar11 = local_68;
            }
            goto joined_r0x040e4f98;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  goto LAB_040e54d8;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_040e5198:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_040e51cc;
    }
  }
LAB_040e51b0:
  puVar5 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_040e51cc:
  (*(code *)*puVar5)(plVar11,puVar5[1]);
LAB_040e51d8:
  if ((*(long *)(param_1 + 0x18) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x20) != *(int *)(*(long *)(param_1 + 0x10) + 0x18)) {
      do {
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_040e54d8;
        FUN_057e185c(&local_b8,*(long *)(param_1 + 0x10),DAT_091abe78);
        local_80 = local_b8;
        local_b8 = (long *)0x0;
        pplStack_78 = pplStack_b0;
        local_70 = local_a8;
        bVar3 = true;
        pplStack_b0 = &local_80;
        while (uVar9 = FUN_071bd28c(&local_80,DAT_091a2728), lVar7 = local_70, (uVar9 & 1) != 0) {
          if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar9 = FUN_053ebc3c(*(long *)(param_1 + 0x18),local_70,DAT_091a7fc8);
          if (((uVar9 & 1) == 0) &&
             (uVar9 = AnhPD_FoodOrder_ConveyorLockoutCheck__CanThaw(param_1,param_2,lVar7),
             (uVar9 & 1) != 0)) {
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar9 = AnhPD_FoodOrder_ConveyorLockoutCheck__CanGather
                              (param_1,param_2,*(undefined8 *)(lVar7 + 0x30));
            if ((uVar9 & 1) != 0) {
              if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_053ec72c(*(long *)(param_1 + 0x18),lVar7,DAT_091a7fb8);
              bVar3 = false;
            }
          }
        }
        FUN_071bd288(&local_80,DAT_091a2720);
      } while (!bVar3);
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_040e54d8;
      FUN_057e185c(&local_b8,*(long *)(param_1 + 0x10),DAT_091abe78);
      pplStack_78 = pplStack_b0;
      local_80 = local_b8;
      local_70 = local_a8;
      while (uVar9 = FUN_071bd28c(&local_80,DAT_091a2728), lVar7 = local_70, (uVar9 & 1) != 0) {
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar9 = FUN_053ebc3c(*(long *)(param_1 + 0x18),local_70,DAT_091a7fc8);
        if ((uVar9 & 1) == 0) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          AnhPD_FoodOrder_ConveyorLockoutCheck__AddOnce(param_3,*(undefined8 *)(lVar7 + 0x10));
          if (*(long *)(lVar7 + 0x30) != 0) {
            lVar7 = *(long *)(*(long *)(lVar7 + 0x30) + 0x18);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_057e185c(&local_b8,lVar7,DAT_091abe78);
            local_a0 = local_b8;
            local_b8 = (long *)0x0;
            pplStack_98 = pplStack_b0;
            local_90 = local_a8;
            pplStack_b0 = &local_a0;
            while (uVar9 = FUN_071bd28c(&local_a0,DAT_091a2728), lVar7 = local_90, (uVar9 & 1) != 0)
            {
              if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar12 = *(undefined8 *)(local_90 + 0x10);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar9 = UnityEngine_Object__op_Implicit(uVar12,0);
              if ((uVar9 & 1) != 0) {
                AnhPD_FoodOrder_ConveyorLockoutCheck__AddOnce(param_3,*(undefined8 *)(lVar7 + 0x10))
                ;
              }
            }
            FUN_071bd288(&local_a0,DAT_091a2720);
          }
        }
      }
      FUN_071bd288(&local_80,DAT_091a2720);
    }
    return;
  }
LAB_040e54d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


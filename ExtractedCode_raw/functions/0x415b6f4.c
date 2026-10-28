// rea decompile_all
// name: AnhPD.FoodOrder.SandwichOrderStrategy$$BuildGatedResults
// address: 0x415b6f4
// body: available
// range: 0x415b6f4-0x415ba83 inclusive
// range: 0x415ba88-0x415bb13 inclusive
// range: 0x415bb18-0x415bb1b inclusive
// range: 0x415bb68-0x415be53 inclusive
// range: 0x415be58-0x415be5b inclusive
// range: 0x415be60-0x415be63 inclusive
// range: 0x415bebc-0x415befb inclusive
// range: 0x415bf0c-0x415bf3f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x415ba80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415bb10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415bb18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415be50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415be58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415be60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415bf0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415bf14 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415bf1c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415bf20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415bf24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415bf28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0415bf18) */
/* WARNING: Removing unreachable block (ram,0x0415be20) */
/* WARNING: Removing unreachable block (ram,0x0415bf10) */
/* WARNING: Removing unreachable block (ram,0x0415bb08) */
/* WARNING: Removing unreachable block (ram,0x0415bb90) */

long AnhPD_FoodOrder_SandwichOrderStrategy__BuildGatedResults(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  uint uVar13;
  long local_a8;
  long *plStack_a0;
  long local_98;
  int local_8c;
  long *local_88;
  long local_80;
  long *plStack_78;
  long local_70;
  
  if ((DAT_095164ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f9c8);
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_0919f9d8);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_091a3f98);
    FUN_03f5c2a4(&DAT_091a3fa0);
    FUN_03f5c2a4(&DAT_091a3fa8);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a8698);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091af668);
    FUN_03f5c2a4(&DAT_0918a568);
    DAT_095164ff = 1;
  }
  local_80 = 0;
  plStack_78 = (long *)0x0;
  local_70 = 0;
  local_88 = (long *)0x0;
  local_8c = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_09179ee0);
  FUN_053eb530(lVar4,DAT_091a8698);
  if (*(int *)(DAT_0918a568 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = AnhPD_FoodOrder_SandwichOrderStrategy__get_Config();
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x28) == 0)) {
    return lVar4;
  }
  lVar6 = thunk_FUN_03f9944c(DAT_09176b28);
  FUN_06fc96ac(lVar6,DAT_0919f978);
  if (*(long *)(lVar5 + 0x28) == 0) {
LAB_0415bf2c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_a8,*(long *)(lVar5 + 0x28),DAT_091af668);
  plStack_78 = plStack_a0;
  local_80 = local_a8;
  local_70 = local_98;
  plStack_a0 = &local_80;
  local_a8 = 0;
LAB_0415b8d0:
  uVar7 = FUN_071bd28c(&local_80,DAT_091a3fa0);
  lVar1 = local_70;
  lVar11 = local_a8;
  if ((uVar7 & 1) != 0) {
    if (*(int *)(DAT_0918a568 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar8 = (long *)AnhPD_FoodOrder_SandwichOrderStrategy__StationInputsOf(lVar1);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar11 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_0917a768) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0415b968;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a768,0);
LAB_0415b968:
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    do {
      local_88 = plVar8;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar11 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_09185b10) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0415b9d0;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_0415b9d0:
      uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      plVar8 = local_88;
      if ((uVar7 & 1) == 0) goto LAB_0415ba88;
      if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar11 = *local_88;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917ae48) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0415ba34;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(local_88,DAT_0917ae48,0);
LAB_0415ba34:
      uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar7 = FUN_06fcbf70(lVar6,uVar10,&local_8c,DAT_0919f9c8);
      iVar3 = 1;
      if ((uVar7 & 1) != 0) {
        iVar3 = local_8c + 1;
      }
      FUN_06fca434(lVar6,uVar10,iVar3,DAT_0919f9f0);
      plVar8 = local_88;
    } while( true );
  }
  FUN_071bd288(plStack_a0,DAT_091a3f98);
  if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548(lVar11);
  }
  if (*(long *)(lVar5 + 0x28) != 0) {
    FUN_057e185c(&local_a8,*(long *)(lVar5 + 0x28),DAT_091af668);
    plStack_78 = plStack_a0;
    local_80 = local_a8;
    local_70 = local_98;
    local_a8 = 0;
    plStack_a0 = &local_80;
    do {
      uVar7 = FUN_071bd28c(&local_80,DAT_091a3fa0);
      lVar1 = local_70;
      lVar11 = local_a8;
      if ((uVar7 & 1) == 0) {
        FUN_071bd288(plStack_a0,DAT_091a3f98);
        if (lVar11 == 0) {
          return lVar4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c548(lVar11);
      }
      if (*(int *)(DAT_0918a568 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar8 = (long *)AnhPD_FoodOrder_SandwichOrderStrategy__StationInputsOf(lVar1);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar11 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917a768) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0415bc68;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a768,0);
LAB_0415bc68:
      local_88 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      uVar13 = 0;
      do {
        do {
          plVar8 = local_88;
          if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar11 = *local_88;
          uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar7 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_09185b10) {
                puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0415bcd8;
              }
              uVar7 = uVar7 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185b10,0);
LAB_0415bcd8:
          uVar2 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          plVar8 = local_88;
          if ((uVar2 & 1) == 0) goto LAB_0415bda4;
          if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar11 = *local_88;
          uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar7 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_0917ae48) {
                puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0415bd40;
              }
              uVar7 = uVar7 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_03f95da8(local_88,DAT_0917ae48,0);
LAB_0415bd40:
          uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar3 = FUN_06fca3c8(lVar6,uVar10,DAT_0919f9d8);
          uVar13 = 1;
        } while (1 < iVar3);
        lVar11 = AnhPD_FoodOrder_RecipeConfigSO__GetPieceConfig(lVar5,uVar10,0);
        if (lVar11 == 0) {
          uVar13 = 1;
          break;
        }
        uVar7 = AnhPD_FoodOrder_RcPieceConfig__get_Offers(lVar11,0);
        uVar13 = 1;
      } while ((uVar7 & 1) != 0);
LAB_0415bda4:
      plVar8 = local_88;
      if (local_88 != (long *)0x0) {
        lVar11 = *local_88;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_09185a58) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0415be08;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185a58,0);
LAB_0415be08:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
      }
      if (((uVar2 | uVar13 ^ 0xffffffff) & 1) == 0) {
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_053ec72c(lVar4,*(undefined8 *)(lVar1 + 0x10),DAT_091a86b8);
      }
    } while( true );
  }
  goto LAB_0415bf2c;
LAB_0415ba88:
  if (local_88 != (long *)0x0) {
    lVar11 = *local_88;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_09185a58) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0415baf0;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185a58,0);
LAB_0415baf0:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
  goto LAB_0415b8d0;
}


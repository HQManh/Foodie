// rea decompile_all
// name: AnhPD.FoodOrder.IngCellFinder$$BuildDraft
// address: 0x42414e4
// body: available
// range: 0x42414e4-0x42419cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4241908 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42419a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42419a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42419a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42419ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42419b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42419b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42419b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42419bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42419c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42419c8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x042419c4) */

void AnhPD_FoodOrder_IngCellFinder__BuildDraft(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  
  if ((DAT_09516e31 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a7c8);
    FUN_03f5c2a4(&DAT_0917aec0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b4d0);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091b0570);
    DAT_09516e31 = 1;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (plVar3 = (long *)AnhPD_FoodOrder_IngGridLayout__EnabledCells(), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *plVar3;
  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == DAT_0917a7c8) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_042415e0;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a7c8,0);
LAB_042415e0:
  plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  do {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04241674;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_04241674:
    uVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar3;
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar10 == 0) goto LAB_04241954;
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917aec0) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_042416d8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917aec0,0);
LAB_042416d8:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar5,uVar5);
    }
    lVar6 = (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),uVar5,*(undefined8 *)(lVar6 + 0x28));
    if ((lVar6 == 0) || (uVar10 = AnhPD_FoodOrder_IngCell__get_IsEmpty(lVar6), (uVar10 & 1) != 0)) {
      lVar6 = DAT_091b0570;
      if (param_2 == 0) {
LAB_042419a0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *(long *)(param_2 + 0x10);
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_042419a0;
      uVar9 = *(uint *)(param_2 + 0x18);
      if (uVar9 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(param_2 + 0x18) = uVar9 + 1;
        puVar4 = (undefined8 *)(lVar7 + (long)(int)uVar9 * 8 + 0x20);
        *puVar4 = 0;
        thunk_FUN_03f5d7b8(puVar4,0);
      }
      else {
        FUN_057e0c68(param_2,0,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      lVar6 = DAT_091adc88;
      if (param_3 == 0) {
LAB_042419a4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *(long *)(param_3 + 0x10);
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_042419a4;
      uVar9 = *(uint *)(param_3 + 0x18);
      if (uVar9 < *(uint *)(lVar7 + 0x18)) {
        iVar1 = 0;
        goto LAB_042418d8;
      }
      FUN_057971a8(param_3,0,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    else {
      plVar12 = *(long **)(lVar6 + 0x30);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917b4d0) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04241818;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917b4d0,0);
LAB_04241818:
      plVar12 = (long *)(*(code *)*puVar4)(plVar12,0,puVar4[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      lVar7 = DAT_091b0570;
      if (param_2 == 0) {
LAB_042419b0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *(long *)(param_2 + 0x10);
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_042419b0;
      uVar9 = *(uint *)(param_2 + 0x18);
      if (uVar9 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(param_2 + 0x18) = uVar9 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar9 * 8 + 0x20) = uVar5;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(param_2,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                    );
      }
      iVar1 = AnhPD_FoodOrder_IngCell__get_MaxStack(lVar6);
      iVar2 = AnhPD_FoodOrder_IngCell__get_OccupiedCount(lVar6);
      lVar6 = DAT_091adc88;
      if (param_3 == 0) {
LAB_042419b4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *(long *)(param_3 + 0x10);
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_042419b4;
      uVar9 = *(uint *)(param_3 + 0x18);
      iVar1 = iVar1 - iVar2;
      if (uVar9 < *(uint *)(lVar7 + 0x18)) {
LAB_042418d8:
        *(uint *)(param_3 + 0x18) = uVar9 + 1;
        *(int *)(lVar7 + (long)(int)uVar9 * 4 + 0x20) = iVar1;
      }
      else {
        FUN_057971a8(param_3,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_04241970;
    }
  }
LAB_04241954:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_04241970:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


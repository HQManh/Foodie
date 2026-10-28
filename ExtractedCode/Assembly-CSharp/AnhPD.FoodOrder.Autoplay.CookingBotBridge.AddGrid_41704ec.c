// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotBridge$$AddGrid
// address: 0x41704ec
// body: available
// range: 0x41704ec-0x417092f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x417086c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4170904 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4170908 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x417090c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4170910 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4170914 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4170918 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x417091c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4170920 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4170924 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x417092c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04170928) */

void AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddGrid(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  
  if ((DAT_095165dd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181ec0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a588);
    FUN_03f5c2a4(&DAT_0917ac38);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ab4a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095165dd = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = AnhPD_FoodOrder_MessyController__get_IngGrid(*(long *)(param_1 + 0x10),0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Equality(lVar2,0,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (lVar2 != 0) {
      uVar3 = AnhPD_FoodOrder_GridIngController__get_HasSaveMeBag(lVar2,0);
      lVar13 = *(long *)(lVar2 + 0x124);
      plVar4 = (long *)AnhPD_FoodOrder_GridIngController__CellsInScanOrder(lVar2,0);
      if (plVar4 != (long *)0x0) {
        lVar2 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917a588) {
              puVar5 = (undefined8 *)(lVar2 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04170644;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a588,0);
LAB_04170644:
        plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
joined_r0x0417065c:
        do {
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar2 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_09185b10) {
                puVar5 = (undefined8 *)(lVar2 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_041706d4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_041706d4:
          uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar10 & 1) == 0) {
            if (plVar4 == (long *)0x0) {
              return;
            }
            lVar2 = *plVar4;
            uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar3 == 0) goto LAB_041708b8;
            piVar11 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            goto LAB_041708a0;
          }
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar2 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_0917ac38) {
                puVar5 = (undefined8 *)(lVar2 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_04170738;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917ac38,0);
LAB_04170738:
          lVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        } while (lVar2 == 0);
        if (((uVar3 & 1) == 0) || (*(long *)(lVar2 + 0x10) != lVar13)) {
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(param_2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar12 = *(long *)(*(long *)(param_2 + 0x38) + 0x10);
          uVar7 = AnhPD_FoodOrder_Autoplay_CookingBotBridge__BuildCell(param_1);
          lVar2 = DAT_091ab4a0;
          if (lVar12 != 0) {
            lVar9 = *(long *)(lVar12 + 0x10);
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar12,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              goto joined_r0x0417065c;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(param_2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar12 = *(long *)(*(long *)(param_2 + 0x38) + 0x10);
        lVar2 = thunk_FUN_03f9944c(DAT_09181ec0);
        CookingGraph_BotGridCellState___ctor(lVar2,0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined4 *)(lVar2 + 0x10) = 4;
        *(undefined1 *)(lVar2 + 0x14) = 0;
        lVar9 = DAT_091ab4a0;
        if (lVar12 != 0) {
          lVar8 = *(long *)(lVar12 + 0x10);
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
              plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *plVar6 = lVar2;
              thunk_FUN_03f5d7b8(plVar6,lVar2);
            }
            else {
              FUN_057e0c68(lVar12,lVar2,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            goto joined_r0x0417065c;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar11 = piVar11 + 4;
    if (uVar3 == 0) break;
LAB_041708a0:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar2 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_041708d4;
    }
  }
LAB_041708b8:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_041708d4:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$CollectGridIngredients
// address: 0x423786c
// body: available
// range: 0x423786c-0x4237ca3 inclusive
// range: 0x4237ca8-0x4237d37 inclusive
// range: 0x4237d3c-0x4237d3f inclusive
// range: 0x4237d88-0x4237da7 inclusive
// range: 0x4237e04-0x4237e9f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4237ca0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4237d34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4237d3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4237d88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4237d8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4237d90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4237d94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4237d98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4237da0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4237da4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4237e9c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04237d9c) */
/* WARNING: Removing unreachable block (ram,0x04237e9c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long AnhPD_FoodOrder_GridIngController__CollectGridIngredients(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  long *plVar13;
  int iVar14;
  
  if ((DAT_09516ded & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a588);
    FUN_03f5c2a4(&DAT_0917a4a8);
    FUN_03f5c2a4(&DAT_0917ac38);
    FUN_03f5c2a4(&DAT_0917ab58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ac690);
    FUN_03f5c2a4(&DAT_091ac680);
    FUN_03f5c2a4(&DAT_091ac6c8);
    FUN_03f5c2a4(&DAT_0917c0a8);
    FUN_03f5c2a4(&DAT_091881a0);
    DAT_09516ded = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917c0a8);
  FUN_057e0400(lVar3,DAT_091ac680);
  uVar12 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  plVar4 = (long *)AnhPD_FoodOrder_GridIngController__BuiltCellsInScanOrder(param_1,1);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar7 = *plVar4;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == DAT_0917a588) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_042379c8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a588,0);
LAB_042379c8:
  plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  if (plVar4 != (long *)0x0) {
    iVar14 = 0;
    do {
      lVar7 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185b10) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04237a58;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_04237a58:
      uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar10 & 1) == 0) {
LAB_04237e04:
        if (plVar4 == (long *)0x0) {
          return lVar3;
        }
        lVar7 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 == 0) goto LAB_04237e48;
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_04237e30;
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917ac38) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04237abc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917ac38,0);
LAB_04237abc:
      lVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((0 < *(int *)(param_1 + 0x6c)) && (*(int *)(param_1 + 0x6c) <= iVar14)) goto LAB_04237e04;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar13 = *(long **)(lVar7 + 0x30);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *plVar13;
      iVar1 = *(int *)(lVar3 + 0x18);
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917a4a8) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04237b48;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917a4a8,0);
LAB_04237b48:
      plVar13 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
joined_r0x04237b64:
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185b10) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04237bb4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185b10,0);
LAB_04237bb4:
      uVar10 = (*(code *)*puVar5)(plVar13,puVar5[1]);
      if ((uVar10 & 1) != 0) {
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917ab58) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04237c18;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917ab58,0);
LAB_04237c18:
        uVar6 = (*(code *)*puVar5)(plVar13,puVar5[1]);
        uVar10 = AnhPD_FoodOrder_GridIngController__IsSaveMeCollectable(lVar7,uVar6,uVar12);
        lVar8 = DAT_091ac690;
        if ((uVar10 & 1) != 0) {
          lVar9 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = *(uint *)(lVar3 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar2 + 1;
            puVar5 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
            *puVar5 = uVar6;
            thunk_FUN_03f5d7b8(puVar5,uVar6);
          }
          else {
            FUN_057e0c68(lVar3,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
        goto joined_r0x04237b64;
      }
      if (plVar13 != (long *)0x0) {
        lVar7 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_09185a58) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04237d0c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185a58,0);
LAB_04237d0c:
        (*(code *)*puVar5)(plVar13,puVar5[1]);
      }
      if (iVar1 < *(int *)(lVar3 + 0x18)) {
        iVar14 = iVar14 + 1;
      }
    } while (plVar4 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_04237e30:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_04237e64;
    }
  }
LAB_04237e48:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_04237e64:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return lVar3;
}


// rea decompile_all
// name: AnhPD.FoodOrder.AreaService.<GetRemainingItems>d__8$$MoveNext
// address: 0x41dbdf0
// body: available
// range: 0x41dbdf0-0x41dc3ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41dc3b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41dc3b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41dc3bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41dc3c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41dc3c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41dc3c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41dc3cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41dc3d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41dc3d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41dc3d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41dc3dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41dc3e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_AreaService_<GetRemainingItems>d__8__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  
  if ((DAT_09516ac1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a4a8);
    FUN_03f5c2a4(&DAT_0917ab58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516ac1 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x28);
  uVar2 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar8 = (long *)AnhPD_FoodOrder_GridIngController__GetRemainingItems
                                 (*(long *)(lVar9 + 0x10),0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917a4a8) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_041dbf00;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a4a8,0);
LAB_041dbf00:
      uVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      uVar2 = thunk_FUN_03f5d7b8();
    }
    else if (iVar1 != 1) {
      return 0;
    }
    plVar8 = *(long **)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar2);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_041dbf84;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_041dbf84:
    uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if ((uVar6 & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x30);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917ab58) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_041dc068;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917ab58,0);
LAB_041dc068:
      uVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8();
      uVar4 = 1;
      goto LAB_041dc398;
    }
    AnhPD_FoodOrder_AreaService_<GetRemainingItems>d__8__<>m__Finally1();
    *(undefined8 *)(param_1 + 0x30) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar8 = *(long **)(*(long *)(lVar9 + 0x10) + 0xe0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917a4a8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_041dc098;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a4a8,0);
LAB_041dc098:
    uVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    uVar2 = thunk_FUN_03f5d7b8();
LAB_041dc0b8:
    plVar8 = *(long **)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar2);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_041dc11c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_041dc11c:
    uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if ((uVar6 & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x30);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917ab58) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_041dc234;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917ab58,0);
LAB_041dc234:
      uVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8();
      uVar4 = 2;
      goto LAB_041dc398;
    }
    AnhPD_FoodOrder_AreaService_<GetRemainingItems>d__8__<>m__Finally2();
    *(undefined8 *)(param_1 + 0x30) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = *(undefined8 *)(lVar9 + 0x18);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Implicit(uVar2,0);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar8 = (long *)AnhPD_FoodOrder_ServeShelfController__GetRemainingItems
                               (*(long *)(lVar9 + 0x18),0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917a4a8) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_041dc264;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a4a8,0);
LAB_041dc264:
    uVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    uVar2 = thunk_FUN_03f5d7b8();
  }
  else {
    if (iVar1 == 2) goto LAB_041dc0b8;
    if (iVar1 != 3) {
      return 0;
    }
  }
  plVar8 = *(long **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffb;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar2);
  }
  lVar9 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_09185b10) {
        puVar3 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_041dc2e8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_041dc2e8:
  uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
  if ((uVar6 & 1) == 0) {
    AnhPD_FoodOrder_AreaService_<GetRemainingItems>d__8__<>m__Finally3();
    *(undefined8 *)(param_1 + 0x30) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),0);
    return 0;
  }
  plVar8 = *(long **)(param_1 + 0x30);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar9 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_0917ab58) {
        puVar3 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_041dc378;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917ab58,0);
LAB_041dc378:
  uVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  thunk_FUN_03f5d7b8();
  uVar4 = 3;
LAB_041dc398:
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return 1;
}


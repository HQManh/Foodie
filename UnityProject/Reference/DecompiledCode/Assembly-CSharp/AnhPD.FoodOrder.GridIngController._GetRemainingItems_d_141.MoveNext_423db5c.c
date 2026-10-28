// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController.<GetRemainingItems>d__141$$MoveNext
// address: 0x423db5c
// body: available
// range: 0x423db5c-0x423dcc7 inclusive
// range: 0x423dcd4-0x423ddef inclusive
// range: 0x423de08-0x423dfcf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x423dcc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423dcc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423dde4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423dde8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423ddec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423dfc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423dfc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423dfcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_GridIngController_<GetRemainingItems>d__141__MoveNext(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  
  if ((DAT_09516e08 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a588);
    FUN_03f5c2a4(&DAT_0917ac38);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b338);
    FUN_03f5c2a4(&DAT_0917b4d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516e08 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    goto LAB_0423de98;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar3 = (long *)AnhPD_FoodOrder_GridIngController__BuiltCellsInScanOrder
                             (*(long *)(param_1 + 0x28),0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_0917a588) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0423dc94;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a588,0);
LAB_0423dc94:
  uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  thunk_FUN_03f5d7b8();
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
LAB_0423dcdc:
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_09185b10) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0423dd30;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_0423dd30:
  uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  if ((uVar7 & 1) == 0) {
    AnhPD_FoodOrder_GridIngController_<GetRemainingItems>d__141__<>m__Finally1();
    *(undefined8 *)(param_1 + 0x30) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),0);
    return 0;
  }
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_0917ac38) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0423dd9c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917ac38,0);
LAB_0423dd9c:
  lVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar6 + 0x30);
  thunk_FUN_03f5d7b8();
  iVar9 = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  do {
    plVar3 = *(long **)(param_1 + 0x38);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917b338) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0423def8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b338,0);
LAB_0423def8:
    iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (iVar2 <= iVar9) break;
    plVar3 = *(long **)(param_1 + 0x38);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar3;
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917b4d0) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0423de60;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b4d0,0);
LAB_0423de60:
    uVar5 = (*(code *)*puVar4)(plVar3,uVar1,puVar4[1]);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar7 & 1) != 0) {
      plVar3 = *(long **)(param_1 + 0x38);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar3;
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_0423df64;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_0423df4c;
    }
LAB_0423de98:
    iVar9 = *(int *)(param_1 + 0x40) + 1;
    *(int *)(param_1 + 0x40) = iVar9;
  } while( true );
  *(undefined8 *)(param_1 + 0x38) = 0;
  thunk_FUN_03f5d7b8(param_1 + 0x38,0);
  goto LAB_0423dcdc;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0423df4c:
    if (*(long *)(piVar8 + -2) == DAT_0917b4d0) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0423df80;
    }
  }
LAB_0423df64:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b4d0,0);
LAB_0423df80:
  uVar5 = (*(code *)*puVar4)(plVar3,uVar1,puVar4[1]);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  thunk_FUN_03f5d7b8();
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}


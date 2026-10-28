// rea decompile_all
// name: System.Runtime.Remoting.ProviderData$$CopyFrom
// address: 0x7481780
// body: available
// range: 0x7481780-0x7481d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74819dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7481d48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7481d4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7481d50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7481d54 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7481d5c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7481d60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7481d64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7481d68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7481d6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7481d70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7481d78 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07481a74) */
/* WARNING: Removing unreachable block (ram,0x07481d7c) */
/* WARNING: Removing unreachable block (ram,0x07481d74) */

void System_Runtime_Remoting_ProviderData__CopyFrom(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
  if ((DAT_09521288 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_09183b38);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b08);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09185f80);
    FUN_03f5c2a4(&DAT_0918acc8);
    DAT_09521288 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    if (param_2 == 0) goto LAB_07481d70;
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
    thunk_FUN_03f5d7b8();
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    if (param_2 == 0) goto LAB_07481d70;
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
    thunk_FUN_03f5d7b8();
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    if (param_2 == 0) goto LAB_07481d70;
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
    thunk_FUN_03f5d7b8();
  }
  else if (param_2 == 0) goto LAB_07481d70;
  plVar3 = *(long **)(param_2 + 0x28);
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x328))(plVar3,*(undefined8 *)(*plVar3 + 0x330));
    do {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_074818f8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_074818f8:
      uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar8 & 1) == 0) {
        plVar3 = (long *)thunk_FUN_03f99350(plVar3,DAT_09185a58);
        if (plVar3 == (long *)0x0) goto LAB_07481a68;
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_07481a40;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_07481a28;
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_07481960;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,1);
LAB_07481960:
      plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(DAT_09183b38 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      puVar4 = (undefined8 *)thunk_FUN_03f99594();
      plVar5 = *(long **)(param_1 + 0x28);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      uVar8 = (**(code **)(*plVar5 + 0x2e8))(plVar5,uVar1,*(undefined8 *)(*plVar5 + 0x2f0));
      if ((uVar8 & 1) == 0) {
        plVar5 = *(long **)(param_1 + 0x28);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar5 + 0x318))(plVar5,uVar1,uVar2,*(undefined8 *)(*plVar5 + 800));
      }
    } while( true );
  }
LAB_07481d70:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_07481a28:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_07481a5c;
    }
  }
LAB_07481a40:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_07481a5c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_07481a68:
  plVar3 = *(long **)(param_2 + 0x30);
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar5 = (long *)(param_1 + 0x30);
  if (*plVar5 == 0) {
    lVar7 = thunk_FUN_03f9944c(DAT_09181588);
    System_Collections_ArrayList___ctor(lVar7,0);
    *plVar5 = lVar7;
    thunk_FUN_03f5d7b8(plVar5,lVar7);
    plVar3 = *(long **)(param_2 + 0x30);
    if (plVar3 == (long *)0x0) goto LAB_07481d70;
  }
  lVar7 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_09185b08) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_07481b10;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b08,0);
LAB_07481b10:
  plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  do {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07481b9c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_07481b9c:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_03f99350(plVar3,DAT_09185a58);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_07481d04;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_07481c04;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,1);
LAB_07481c04:
    plVar6 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar6 != (long *)0x0) {
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_0918acc8 + 0x130)) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_0918acc8 + 0x130) * 8 + -8) !=
          DAT_0918acc8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar6);
      }
    }
    plVar10 = (long *)*plVar5;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185f80) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_07481c9c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185f80,2);
LAB_07481c9c:
    (*(code *)*puVar4)(plVar10,plVar6,puVar4[1]);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_07481d20;
    }
  }
LAB_07481d04:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_07481d20:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


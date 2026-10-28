// rea decompile_all
// name: System.Runtime.Remoting.Contexts.Context$$CreateNewContext
// address: 0x749357c
// body: available
// range: 0x749357c-0x7493c8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7493884 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7493b98 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7493c40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7493c44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7493c48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7493c4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7493c58 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7493c5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7493c68 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7493c6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7493c78 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7493c7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07493c88) */
/* WARNING: Removing unreachable block (ram,0x07493c80) */

long * System_Runtime_Remoting_Contexts_Context__CreateNewContext(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_0952131c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b00);
    FUN_03f5c2a4(&DAT_09185858);
    FUN_03f5c2a4(&DAT_09185880);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b08);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_0952131c = 1;
  }
  plVar2 = (long *)thunk_FUN_03f9944c(DAT_09182b00);
  System_Runtime_Remoting_Contexts_Context___ctor();
  if (param_1 != (long *)0x0) {
    lVar10 = *param_1;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_09185858) {
          puVar3 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
          goto LAB_07493674;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185858,5);
LAB_07493674:
    plVar4 = (long *)(*(code *)*puVar3)(param_1,puVar3[1]);
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_09185b08) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_074936dc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b08,0);
LAB_074936dc:
      plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_09185b10) {
              puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_07493760;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_07493760:
        uVar11 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if ((uVar11 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_03f99350(plVar4,DAT_09185a58);
          if (plVar4 == (long *)0x0) goto LAB_0749390c;
          lVar10 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_074938e4;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_074938cc;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_09185b10) {
              puVar3 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_074937c8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,1);
LAB_074937c8:
        lVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        lVar10 = DAT_09185880;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar6 = (long *)thunk_FUN_03f99350(lVar5,DAT_09185880);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar5,lVar10);
        }
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_09185880) {
              puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_07493840;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185880,0);
LAB_07493840:
        uVar7 = (*(code *)*puVar3)(plVar6,puVar3[1]);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar7,uVar7);
        }
        lVar10 = (**(code **)(*plVar2 + 0x198))(plVar2,uVar7,*(undefined8 *)(*plVar2 + 0x1a0));
        if (lVar10 == 0) {
          (**(code **)(*plVar2 + 0x1a8))(plVar2,plVar6,*(undefined8 *)(*plVar2 + 0x1b0));
        }
      } while( true );
    }
  }
  goto LAB_07493c7c;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_07493bd8:
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_07493c0c;
    }
  }
LAB_07493bf0:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_07493c0c:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return plVar2;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_074938cc:
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_07493900;
    }
  }
LAB_074938e4:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_07493900:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_0749390c:
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    lVar10 = *param_1;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_09185858) {
          puVar3 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
          goto LAB_07493974;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185858,5);
LAB_07493974:
    plVar4 = (long *)(*(code *)*puVar3)(param_1,puVar3[1]);
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_09185b08) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_074939d4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b08,0);
LAB_074939d4:
      plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_09185b10) {
              puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_07493a48;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_07493a48:
        uVar11 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if ((uVar11 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_03f99350(plVar4,DAT_09185a58);
          if (plVar4 == (long *)0x0) {
            return plVar2;
          }
          lVar10 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_07493bf0;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_07493bd8;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_09185b10) {
              puVar3 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_07493ab0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,1);
LAB_07493ab0:
        lVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        lVar10 = DAT_09185880;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = thunk_FUN_03f99350(lVar5,DAT_09185880);
        lVar1 = DAT_09185880;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar5,lVar10);
        }
        plVar6 = (long *)thunk_FUN_03f99350(lVar5,DAT_09185880);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar5,lVar1);
        }
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar1) {
              puVar3 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_07493b40;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar6,lVar1,2);
LAB_07493b40:
        uVar11 = (*(code *)*puVar3)(plVar6,plVar2,puVar3[1]);
        if ((uVar11 & 1) == 0) {
          thunk_FUN_03fc39d4(&DAT_09189ec8);
          uVar7 = thunk_FUN_03f9944c();
          uVar9 = thunk_FUN_03fc39d4(&DAT_091faf38);
          System_Runtime_Remoting_RemotingException___ctor(uVar7,uVar9,0);
          uVar9 = thunk_FUN_03fc39d4(&DAT_091c5fb0);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar7,uVar9);
        }
      } while( true );
    }
  }
LAB_07493c7c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$Demand
// address: 0x444dc00
// body: available
// range: 0x444dc00-0x444e1d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444e108 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444e1a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444e1ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444e1b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444e1b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444e1b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444e1bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444e1c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444e1c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444e1c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444e1cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444e1d4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0444e1d0) */

long CookingGraph_CookingLevelSimulation__Demand(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  long *plVar14;
  
  if ((DAT_09518077 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cb610);
    FUN_03f5c2a4(&DAT_09179390);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a8298);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a828);
    FUN_03f5c2a4(&DAT_0917af28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_0917b498);
    FUN_03f5c2a4(&DAT_0917b4b0);
    FUN_03f5c2a4(&DAT_091e7638);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518077 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09179e18);
  FUN_053d6e00(lVar2,DAT_091a8298);
  uVar9 = *(undefined8 *)(param_1 + 0x98);
  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
  lVar10 = puVar4[0xad];
  if (lVar10 == 0) {
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    }
    uVar12 = *puVar4;
    lVar10 = thunk_FUN_03f9944c(DAT_09179390);
    FUN_05322d94(lVar10,uVar12,DAT_091e7638,0);
    lVar5 = *(long *)(DAT_0918f298 + 0xb8);
    *(long *)(lVar5 + 0x568) = lVar10;
    thunk_FUN_03f5d7b8(lVar5 + 0x568,lVar10);
  }
  plVar3 = (long *)FUN_04b0cafc(uVar9,lVar10,DAT_091cb610);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar10 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_0917a828) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0444ddfc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a828,0);
LAB_0444ddfc:
  plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0444de30:
  lVar10 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_09185b10) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0444de88;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_0444de88:
  uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  if ((uVar7 & 1) != 0) {
    lVar10 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917af28) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0444def0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917af28,0);
LAB_0444def0:
    lVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(lVar10 + 0x50);
    if (lVar5 == 0) {
LAB_0444e108:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar11 = 0;
LAB_0444df10:
    if (iVar11 < *(int *)(lVar5 + 0x18)) {
      lVar5 = CookingGraph_CookingLevelSimulation__Assembly(param_1,lVar10,iVar11);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar14 = *(long **)(lVar5 + 0x28);
      if (plVar14 == (long *)0x0) {
LAB_0444e1a8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar13 = 0;
      do {
        lVar6 = *plVar14;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917b310) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0444df8c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b310,0);
LAB_0444df8c:
        iVar1 = (*(code *)*puVar4)(plVar14,puVar4[1]);
        if (iVar1 <= iVar13) goto LAB_0444e0fc;
        plVar14 = *(long **)(lVar5 + 0x30);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar14;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917b498) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0444dff4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b498,0);
LAB_0444dff4:
        uVar7 = (*(code *)*puVar4)(plVar14,iVar13,puVar4[1]);
        if ((uVar7 & 1) == 0) {
          plVar14 = *(long **)(lVar5 + 0x38);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *plVar14;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_0917b498) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0444e05c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b498,0);
LAB_0444e05c:
          uVar7 = (*(code *)*puVar4)(plVar14,iVar13,puVar4[1]);
          if ((uVar7 & 1) == 0) {
            plVar14 = *(long **)(lVar5 + 0x28);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *plVar14;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == DAT_0917b4b0) {
                  puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0444e0c4;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b4b0,0);
LAB_0444e0c4:
            lVar6 = (*(code *)*puVar4)(plVar14,iVar13,puVar4[1]);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_053d8048(lVar2,*(undefined4 *)(lVar6 + 0x10),DAT_091a82b0);
          }
        }
        plVar14 = *(long **)(lVar5 + 0x28);
        iVar13 = iVar13 + 1;
        if (plVar14 == (long *)0x0) goto LAB_0444e1a8;
      } while( true );
    }
    goto LAB_0444de30;
  }
  if (plVar3 != (long *)0x0) {
    lVar10 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185a58) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0444e174;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_0444e174:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return lVar2;
LAB_0444e0fc:
  lVar5 = *(long *)(lVar10 + 0x50);
  iVar11 = iVar11 + 1;
  if (lVar5 == 0) goto LAB_0444e108;
  goto LAB_0444df10;
}


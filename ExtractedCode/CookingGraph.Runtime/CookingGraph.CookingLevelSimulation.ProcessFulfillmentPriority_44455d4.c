// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ProcessFulfillmentPriority
// address: 0x44455d4
// body: available
// range: 0x44455d4-0x4445d9b inclusive
// range: 0x4445e58-0x4445efb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4445d2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4445d38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4445d3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4445d40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4445d44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4445d48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4445d4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4445d50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4445d54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4445d58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4445d5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4445d60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04445ef4) */

undefined8
CookingGraph_CookingLevelSimulation__ProcessFulfillmentPriority(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  undefined8 local_68;
  
  if ((DAT_0951807b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9298);
    FUN_03f5c2a4(&DAT_091cb610);
    FUN_03f5c2a4(&DAT_09179390);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a828);
    FUN_03f5c2a4(&DAT_0917af28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_0917b498);
    FUN_03f5c2a4(&DAT_0917b4b0);
    FUN_03f5c2a4(&DAT_091e7800);
    FUN_03f5c2a4(&DAT_091e7db0);
    FUN_03f5c2a4(&DAT_0918f528);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_0951807b = 1;
  }
  local_68 = CookingGraph_CookingLevelSimulation__get_NoFulfillment(param_1);
  uVar10 = *(undefined8 *)(param_1 + 0x98);
  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918f298);
  }
  puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
  lVar11 = puVar7[0xaf];
  if (lVar11 == 0) {
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
      puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar11 = thunk_FUN_03f9944c(DAT_09179390);
    FUN_05322d94(lVar11,uVar12,DAT_091e7800,0);
    lVar5 = *(long *)(DAT_0918f298 + 0xb8);
    *(long *)(lVar5 + 0x578) = lVar11;
    thunk_FUN_03f5d7b8(lVar5 + 0x578,lVar11);
  }
  plVar3 = (long *)FUN_04b0cafc(uVar10,lVar11,DAT_091cb610);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar11 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_0917a828) {
        puVar7 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_044457dc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a828,0);
LAB_044457dc:
  plVar3 = (long *)(*(code *)*puVar7)(plVar3,puVar7[1]);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_04445810:
  lVar11 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_09185b10) {
        puVar7 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04445868;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_04445868:
  uVar8 = (*(code *)*puVar7)(plVar3,puVar7[1]);
  if ((uVar8 & 1) != 0) {
    lVar11 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917af28) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_044458d0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917af28,0);
LAB_044458d0:
    lVar11 = (*(code *)*puVar7)(plVar3,puVar7[1]);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(lVar11 + 0x50);
    if (lVar5 == 0) {
LAB_04445d2c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar14 = 0;
LAB_044458f4:
    if (iVar14 < *(int *)(lVar5 + 0x18)) {
      lVar5 = thunk_FUN_03f9944c(DAT_0918f528);
      CookingGraph_CookingLevelSimulation_<>c__DisplayClass299_0___ctor(lVar5,0);
      lVar4 = CookingGraph_CookingLevelSimulation__Assembly(param_1,lVar11,iVar14);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar13 = (long *)(lVar5 + 0x10);
      *plVar13 = lVar4;
      thunk_FUN_03f5d7b8(plVar13);
      lVar4 = *plVar13;
      if (lVar4 == 0) {
LAB_04445d38:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar15 = 0;
      do {
        plVar16 = *(long **)(lVar4 + 0x28);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *plVar16;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917b310) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_044459b0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar16,DAT_0917b310,0);
LAB_044459b0:
        iVar1 = (*(code *)*puVar7)(plVar16,puVar7[1]);
        if (iVar1 <= iVar15) goto LAB_04445d18;
        if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar16 = *(long **)(*plVar13 + 0x30);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *plVar16;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917b498) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_04445a20;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar16,DAT_0917b498,0);
LAB_04445a20:
        uVar8 = (*(code *)*puVar7)(plVar16,iVar15,puVar7[1]);
        uVar10 = local_68;
        if ((uVar8 & 1) == 0) {
          if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar16 = *(long **)(*plVar13 + 0x38);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = *plVar16;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_0917b498) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_04445a90;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar16,DAT_0917b498,0);
LAB_04445a90:
          uVar8 = (*(code *)*puVar7)(plVar16,iVar15,puVar7[1]);
          if ((uVar8 & 1) == 0) {
            if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *(long *)(*(long *)(param_1 + 0x78) + 0x80);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_2 + 0x14)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar16 = *(long **)(*plVar13 + 0x28);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *plVar16;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            lVar4 = *(long *)(lVar4 + (long)(int)*(uint *)(param_2 + 0x14) * 8 + 0x20);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917b4b0) {
                  puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_04445b2c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar7 = (undefined8 *)FUN_03f95da8(plVar16,DAT_0917b4b0,0);
LAB_04445b2c:
            lVar6 = (*(code *)*puVar7)(plVar16,iVar15,puVar7[1]);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar8 = FUN_053d750c(lVar4,*(undefined4 *)(lVar6 + 0x10),DAT_091a82c0);
            if ((uVar8 & 1) != 0) {
              if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              plVar16 = *(long **)(*plVar13 + 0x28);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = *plVar16;
              uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == DAT_0917b4b0) {
                    puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_04445bb4;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar7 = (undefined8 *)FUN_03f95da8(plVar16,DAT_0917b4b0,0);
LAB_04445bb4:
              lVar4 = (*(code *)*puVar7)(plVar16,iVar15,puVar7[1]);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar6 = *(long *)(lVar5 + 0x18);
              uVar10 = *(undefined8 *)(lVar4 + 0x28);
              if (lVar6 == 0) {
                lVar6 = thunk_FUN_03f9944c(DAT_09178b98);
                FUN_05315754(lVar6,lVar5,DAT_091e7db0,0);
                *(long *)(lVar5 + 0x18) = lVar6;
                thunk_FUN_03f5d7b8(lVar5 + 0x18,lVar6);
              }
              uVar2 = FUN_04ab2d14(uVar10,lVar6,DAT_091c9298);
              if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              plVar16 = *(long **)(*plVar13 + 0x28);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = *plVar16;
              iVar1 = *(int *)(param_2 + 0x14);
              uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == DAT_0917b4b0) {
                    puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_04445ca0;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar7 = (undefined8 *)FUN_03f95da8(plVar16,DAT_0917b4b0,0);
LAB_04445ca0:
              lVar4 = (*(code *)*puVar7)(plVar16,iVar15,puVar7[1]);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar10 = CookingGraph_CookingLevelSimulation__FulfillmentRank
                                 (param_1,lVar11,iVar14,(uVar2 ^ 0xffffffff) & 1,
                                  iVar1 != *(int *)(lVar4 + 0x10));
              iVar1 = CookingGraph_CookingLevelSimulation__CompareRank(uVar10,local_68);
              if (-1 < iVar1) {
                uVar10 = local_68;
              }
            }
          }
        }
        local_68 = uVar10;
        lVar4 = *plVar13;
        iVar15 = iVar15 + 1;
        if (lVar4 == 0) goto LAB_04445d38;
      } while( true );
    }
    goto LAB_04445810;
  }
  if (plVar3 != (long *)0x0) {
    lVar11 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185a58) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04445ec0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_04445ec0:
    (*(code *)*puVar7)(plVar3,puVar7[1]);
  }
  return local_68;
LAB_04445d18:
  lVar5 = *(long *)(lVar11 + 0x50);
  iVar14 = iVar14 + 1;
  if (lVar5 == 0) goto LAB_04445d2c;
  goto LAB_044458f4;
}


// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$DirectFulfillmentPriority
// address: 0x4474d00
// body: available
// range: 0x4474d00-0x4475457 inclusive
// range: 0x44754f8-0x4475597 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x447540c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4475418 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447541c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4475420 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4475424 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4475428 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447542c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4475430 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4475434 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4475438 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447543c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4475440 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04475590) */

long CookingGraph_CookingLevelSimulation__DirectFulfillmentPriority
               (long param_1,int param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  long local_b0;
  undefined1 local_80 [32];
  
  if ((DAT_0951807a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9298);
    FUN_03f5c2a4(&DAT_091cb610);
    FUN_03f5c2a4(&DAT_09179390);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_0917a010);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a828);
    FUN_03f5c2a4(&DAT_0917af28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_0917b498);
    FUN_03f5c2a4(&DAT_0917b4b0);
    FUN_03f5c2a4(&DAT_091e7640);
    FUN_03f5c2a4(&DAT_091e7da8);
    FUN_03f5c2a4(&DAT_0918f520);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_0951807a = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x98);
  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
  lVar10 = puVar4[0xae];
  if (lVar10 == 0) {
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    }
    uVar11 = *puVar4;
    lVar10 = thunk_FUN_03f9944c(DAT_09179390);
    FUN_05322d94(lVar10,uVar11,DAT_091e7640,0);
    lVar5 = *(long *)(DAT_0918f298 + 0xb8);
    *(long *)(lVar5 + 0x570) = lVar10;
    thunk_FUN_03f5d7b8(lVar5 + 0x570,lVar10);
  }
  plVar2 = (long *)FUN_04b0cafc(uVar8,lVar10,DAT_091cb610);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar10 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_0917a828) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04474f04;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a828,0);
LAB_04474f04:
  plVar2 = (long *)(*(code *)*puVar4)(plVar2,puVar4[1]);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_b0 = 0;
LAB_04474f34:
  lVar10 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_09185b10) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04474f8c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_04474f8c:
  uVar6 = (*(code *)*puVar4)(plVar2,puVar4[1]);
  if ((uVar6 & 1) != 0) {
    lVar10 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917af28) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04474ff4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917af28,0);
LAB_04474ff4:
    lVar10 = (*(code *)*puVar4)(plVar2,puVar4[1]);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(lVar10 + 0x50);
    if (lVar5 == 0) {
LAB_0447540c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar12 = 0;
LAB_04475014:
    if (iVar12 < *(int *)(lVar5 + 0x18)) {
      lVar5 = thunk_FUN_03f9944c(DAT_0918f520);
      CookingGraph_CookingLevelSimulation_<>c__DisplayClass298_0___ctor(lVar5,0);
      lVar3 = CookingGraph_CookingLevelSimulation__Assembly(param_1,lVar10,iVar12);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar13 = (long *)(lVar5 + 0x10);
      *plVar13 = lVar3;
      thunk_FUN_03f5d7b8(plVar13);
      lVar3 = *plVar13;
      if (lVar3 == 0) {
LAB_04475418:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar14 = 0;
      do {
        plVar15 = *(long **)(lVar3 + 0x28);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar15;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0917b310) {
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_044750c4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917b310,0);
LAB_044750c4:
        iVar1 = (*(code *)*puVar4)(plVar15,puVar4[1]);
        if (iVar1 <= iVar14) goto LAB_04475400;
        CookingGraph_CookingLevelSimulation__DishAddress(local_80,lVar10,iVar12,iVar14);
        if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar15 = *(long **)(*plVar13 + 0x28);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar15;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0917b4b0) {
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04475158;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917b4b0,0);
LAB_04475158:
        lVar3 = (*(code *)*puVar4)(plVar15,iVar14,puVar4[1]);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar3 + 0x10) == param_2) {
          if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar15 = *(long **)(*plVar13 + 0x30);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar3 = *plVar15;
          uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917b498) {
                puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_044751d4;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917b498,0);
LAB_044751d4:
          uVar6 = (*(code *)*puVar4)(plVar15,iVar14,puVar4[1]);
          if ((uVar6 & 1) == 0) {
            if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar15 = *(long **)(*plVar13 + 0x38);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar3 = *plVar15;
            uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_0917b498) {
                  puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_04475244;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917b498,0);
LAB_04475244:
            uVar6 = (*(code *)*puVar4)(plVar15,iVar14,puVar4[1]);
            if ((uVar6 & 1) == 0) {
              if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              plVar15 = *(long **)(*plVar13 + 0x28);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar3 = *plVar15;
              uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == DAT_0917b4b0) {
                    puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_044752b4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar4 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917b4b0,0);
LAB_044752b4:
              lVar3 = (*(code *)*puVar4)(plVar15,iVar14,puVar4[1]);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar9 = *(long *)(lVar5 + 0x18);
              uVar8 = *(undefined8 *)(lVar3 + 0x28);
              if (lVar9 == 0) {
                lVar9 = thunk_FUN_03f9944c(DAT_09178b98);
                FUN_05315754(lVar9,lVar5,DAT_091e7da8,0);
                *(long *)(lVar5 + 0x18) = lVar9;
                thunk_FUN_03f5d7b8(lVar5 + 0x18,lVar9);
              }
              uVar6 = FUN_04ab2d14(uVar8,lVar9,DAT_091c9298);
              if ((uVar6 & 1) != 0) {
                if (param_3 != (long *)0x0) {
                  lVar3 = *param_3;
                  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
                  if (uVar6 != 0) {
                    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == DAT_0917a010) {
                        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar7 + 4) * 0x10 + 0x138);
                        goto LAB_04475390;
                      }
                      uVar6 = uVar6 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar4 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917a010,4);
LAB_04475390:
                  uVar6 = (*(code *)*puVar4)(param_3,local_80,puVar4[1]);
                  if ((uVar6 & 1) != 0) goto LAB_044753f0;
                }
                lVar3 = CookingGraph_CookingLevelSimulation__FulfillmentRank
                                  (param_1,lVar10,iVar12,0,0);
                if ((local_b0 == 0) ||
                   (iVar1 = CookingGraph_CookingLevelSimulation__CompareRank(lVar3,local_b0),
                   iVar1 < 0)) {
                  local_b0 = lVar3;
                }
              }
            }
          }
        }
LAB_044753f0:
        lVar3 = *plVar13;
        iVar14 = iVar14 + 1;
        if (lVar3 == 0) goto LAB_04475418;
      } while( true );
    }
    goto LAB_04474f34;
  }
  if (plVar2 != (long *)0x0) {
    lVar10 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185a58) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0447555c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_0447555c:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  return local_b0;
LAB_04475400:
  lVar5 = *(long *)(lVar10 + 0x50);
  iVar12 = iVar12 + 1;
  if (lVar5 == 0) goto LAB_0447540c;
  goto LAB_04475014;
}


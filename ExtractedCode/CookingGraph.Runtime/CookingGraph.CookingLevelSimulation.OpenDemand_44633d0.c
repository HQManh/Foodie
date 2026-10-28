// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$OpenDemand
// address: 0x44633d0
// body: available
// range: 0x44633d0-0x4463f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4463814 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4463c14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4463f54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4463f58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4463f5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4463f60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4463f64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4463f68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4463f6c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4463f70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4463f74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4463f78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04463c90) */
/* WARNING: Removing unreachable block (ram,0x04463f98) */

undefined8 CookingGraph_CookingLevelSimulation__OpenDemand(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_09518045 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c800);
    FUN_03f5c2a4(&DAT_0919d948);
    FUN_03f5c2a4(&DAT_091764a0);
    FUN_03f5c2a4(&DAT_091c92d8);
    FUN_03f5c2a4(&DAT_091c9558);
    FUN_03f5c2a4(&DAT_091cb610);
    FUN_03f5c2a4(&DAT_091a50f0);
    FUN_03f5c2a4(&DAT_091a50f8);
    FUN_03f5c2a4(&DAT_091a5100);
    FUN_03f5c2a4(&DAT_09179390);
    FUN_03f5c2a4(&DAT_091793e8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a828);
    FUN_03f5c2a4(&DAT_0917af28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_0917b498);
    FUN_03f5c2a4(&DAT_0917b4b0);
    FUN_03f5c2a4(&DAT_091b2528);
    FUN_03f5c2a4(&DAT_091b2560);
    FUN_03f5c2a4(&DAT_091e7720);
    FUN_03f5c2a4(&DAT_091e7728);
    FUN_03f5c2a4(&DAT_091e7730);
    FUN_03f5c2a4(&DAT_091e7b90);
    FUN_03f5c2a4(&DAT_0918f388);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518045 = 1;
  }
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uVar3 = thunk_FUN_03f9944c(DAT_091764a0);
  FUN_06ee539c(uVar3,DAT_0919d948);
  local_88 = uVar3;
  thunk_FUN_03f5d7b8(&local_88,uVar3);
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_057e185c(&local_80,*(long *)(param_1 + 0x60),DAT_091b2528);
    local_90 = local_70;
    puStack_a8 = &local_a0;
    uStack_98 = uStack_78;
    local_a0 = local_80;
    local_b0 = 0;
LAB_044635d8:
    uVar4 = FUN_071bd28c(&local_a0,DAT_091a50f8);
    lVar11 = local_90;
    if ((uVar4 & 1) != 0) {
      lVar5 = CookingGraph_CookingLevelSimulation__GridAssemblyState(param_1,local_90);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar14 = *(long **)(lVar5 + 0x28);
      if (plVar14 == (long *)0x0) {
LAB_04463814:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar12 = 0;
      do {
        lVar8 = *plVar14;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917b310) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_04463658;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b310,0);
LAB_04463658:
        iVar1 = (*(code *)*puVar6)(plVar14,puVar6[1]);
        if (iVar1 <= iVar12) goto LAB_044635d8;
        plVar14 = *(long **)(lVar5 + 0x30);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *plVar14;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917b498) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_044636c0;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b498,0);
LAB_044636c0:
        uVar4 = (*(code *)*puVar6)(plVar14,iVar12,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          plVar14 = *(long **)(lVar5 + 0x38);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *plVar14;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_0917b498) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_04463728;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b498,0);
LAB_04463728:
          uVar4 = (*(code *)*puVar6)(plVar14,iVar12,puVar6[1]);
          if ((uVar4 & 1) == 0) {
            if (param_2 != 0) {
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = *(long *)(param_2 + 0x10);
              local_c8 = 0;
              uStack_c0 = 0;
              local_b8 = 0;
              CookingGraph_Execution_CookingEndpoint___ctor
                        (&local_c8,4,*(undefined8 *)(lVar11 + 0x20),0,iVar12,0);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uStack_78 = uStack_c0;
              local_80 = local_c8;
              local_70 = local_b8;
              uVar4 = FUN_06e8248c(lVar8,&local_80,DAT_0919c800);
              if ((uVar4 & 1) != 0) goto LAB_04463808;
            }
            plVar14 = *(long **)(lVar5 + 0x28);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *plVar14;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917b4b0) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_044637e8;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b4b0,0);
LAB_044637e8:
            lVar8 = (*(code *)*puVar6)(plVar14,iVar12,puVar6[1]);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            CookingGraph_CookingLevelSimulation__<OpenDemand>g__Need_144_0
                      (*(undefined4 *)(lVar8 + 0x10),&local_88);
          }
        }
LAB_04463808:
        plVar14 = *(long **)(lVar5 + 0x28);
        iVar12 = iVar12 + 1;
        if (plVar14 == (long *)0x0) goto LAB_04463814;
      } while( true );
    }
    FUN_071bd288(&local_a0,DAT_091a50f0);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar11 = puVar6[0x7f];
    if (lVar11 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar13 = *puVar6;
      lVar11 = thunk_FUN_03f9944c(DAT_09179390);
      FUN_05322d94(lVar11,uVar13,DAT_091e7720,0);
      lVar5 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar5 + 0x3f8) = lVar11;
      thunk_FUN_03f5d7b8(lVar5 + 0x3f8,lVar11);
    }
    plVar14 = (long *)FUN_04b0cafc(uVar3,lVar11,DAT_091cb610);
    if (plVar14 != (long *)0x0) {
      lVar11 = *plVar14;
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917a828) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04463938;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917a828,0);
LAB_04463938:
      plVar14 = (long *)(*(code *)*puVar6)(plVar14,puVar6[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
LAB_0446394c:
      lVar11 = *plVar14;
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185b10) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_044639a0;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar14,DAT_09185b10,0);
LAB_044639a0:
      uVar4 = (*(code *)*puVar6)(plVar14,puVar6[1]);
      if ((uVar4 & 1) != 0) {
        lVar11 = *plVar14;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917af28) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_04463a04;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917af28,0);
LAB_04463a04:
        lVar11 = (*(code *)*puVar6)(plVar14,puVar6[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *(long *)(lVar11 + 0x50);
        if (lVar5 == 0) {
LAB_04463c14:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar12 = 0;
LAB_04463a24:
        if (iVar12 < *(int *)(lVar5 + 0x18)) {
          lVar5 = CookingGraph_CookingLevelSimulation__Assembly(param_1,lVar11,iVar12);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar15 = *(long **)(lVar5 + 0x28);
          if (plVar15 == (long *)0x0) {
LAB_04463f54:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar1 = 0;
          do {
            lVar8 = *plVar15;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917b310) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_04463aa0;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917b310,0);
LAB_04463aa0:
            iVar2 = (*(code *)*puVar6)(plVar15,puVar6[1]);
            if (iVar2 <= iVar1) goto LAB_04463c08;
            plVar15 = *(long **)(lVar5 + 0x30);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *plVar15;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917b498) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_04463b08;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917b498,0);
LAB_04463b08:
            uVar4 = (*(code *)*puVar6)(plVar15,iVar1,puVar6[1]);
            if ((uVar4 & 1) == 0) {
              plVar15 = *(long **)(lVar5 + 0x38);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = *plVar15;
              uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar4 != 0) {
                piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == DAT_0917b498) {
                    puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_04463b70;
                  }
                  uVar4 = uVar4 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar4 != 0);
              }
              puVar6 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917b498,0);
LAB_04463b70:
              uVar4 = (*(code *)*puVar6)(plVar15,iVar1,puVar6[1]);
              if ((uVar4 & 1) == 0) {
                plVar15 = *(long **)(lVar5 + 0x28);
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar8 = *plVar15;
                uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar4 != 0) {
                  piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == DAT_0917b4b0) {
                      puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_04463bd8;
                    }
                    uVar4 = uVar4 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar4 != 0);
                }
                puVar6 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917b4b0,0);
LAB_04463bd8:
                lVar8 = (*(code *)*puVar6)(plVar15,iVar1,puVar6[1]);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                CookingGraph_CookingLevelSimulation__<OpenDemand>g__Need_144_0
                          (*(undefined4 *)(lVar8 + 0x10),&local_88);
              }
            }
            plVar15 = *(long **)(lVar5 + 0x28);
            iVar1 = iVar1 + 1;
            if (plVar15 == (long *)0x0) goto LAB_04463f54;
          } while( true );
        }
        goto LAB_0446394c;
      }
      if (plVar14 != (long *)0x0) {
        lVar11 = *plVar14;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185a58) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_04463c78;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar14,DAT_09185a58,0);
LAB_04463c78:
        (*(code *)*puVar6)(plVar14,puVar6[1]);
      }
      lVar11 = *(long *)(param_1 + 0x78);
      if ((lVar11 != 0) && (lVar5 = *(long *)(lVar11 + 0x20), lVar5 != 0)) {
        uVar10 = 0;
LAB_04463ca8:
        if (*(int *)(lVar5 + 0x18) <= (int)uVar10) {
          return local_88;
        }
        iVar12 = 0;
        do {
          lVar5 = *(long *)(lVar11 + 0x20);
          if (lVar5 == 0) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar10) {
LAB_04463f6c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar8 = *(long *)(lVar5 + (ulong)uVar10 * 8 + 0x20);
          if (lVar8 == 0) break;
          if (*(int *)(lVar8 + 0x18) <= iVar12) goto LAB_04463f28;
          lVar11 = CookingGraph_CookingLevelSimulation__LaneOccupants
                             (param_1,uVar10,iVar12,param_2,0);
          if (lVar11 == 0) break;
          if (*(int *)(lVar11 + 0x18) != 0) {
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            lVar5 = puVar6[0x80];
            if (lVar5 == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              }
              uVar3 = *puVar6;
              lVar5 = thunk_FUN_03f9944c(DAT_091793e8);
              FUN_0532a53c(lVar5,uVar3,DAT_091e7728,0);
              lVar8 = *(long *)(DAT_0918f298 + 0xb8);
              *(long *)(lVar8 + 0x400) = lVar5;
              thunk_FUN_03f5d7b8(lVar8 + 0x400,lVar5);
            }
            uVar4 = FUN_04ab7924(lVar11,lVar5,DAT_091c9558);
            if ((uVar4 & 1) == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              lVar5 = puVar6[0x81];
              if (lVar5 == 0) {
                if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                }
                uVar3 = *puVar6;
                lVar5 = thunk_FUN_03f9944c(DAT_091793e8);
                FUN_0532a53c(lVar5,uVar3,DAT_091e7730,0);
                lVar8 = *(long *)(DAT_0918f298 + 0xb8);
                *(long *)(lVar8 + 0x408) = lVar5;
                thunk_FUN_03f5d7b8(lVar8 + 0x408,lVar5);
              }
              uVar4 = FUN_04ab36f8(lVar11,lVar5,DAT_091c92d8);
              if (((uVar4 & 1) == 0) &&
                 (lVar5 = CookingGraph_CookingLevelSimulation__LaneRecipe(param_1,uVar10,lVar11),
                 lVar5 != 0)) {
                lVar5 = *(long *)(lVar5 + 0x30);
                if (lVar5 == 0) break;
                if (0 < *(int *)(lVar5 + 0x18)) {
                  uVar4 = 0;
                  do {
                    lVar8 = thunk_FUN_03f9944c(DAT_0918f388);
                    CookingGraph_CookingLevelSimulation_<>c__DisplayClass144_1___ctor(lVar8,0);
                    if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_04463f6c;
                    if (lVar8 == 0) goto LAB_04463f68;
                    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar5 + 0x20 + uVar4 * 8);
                    uVar3 = thunk_FUN_03f9944c(DAT_091793e8);
                    FUN_0532a53c(uVar3,lVar8,DAT_091e7b90,0);
                    uVar7 = FUN_04ab7924(lVar11,uVar3,DAT_091c9558);
                    if ((uVar7 & 1) == 0) {
                      CookingGraph_CookingLevelSimulation__<OpenDemand>g__Need_144_0
                                (*(undefined4 *)(lVar8 + 0x10),&local_88);
                    }
                    uVar4 = uVar4 + 1;
                  } while ((long)uVar4 < (long)*(int *)(lVar5 + 0x18));
                }
              }
            }
          }
          lVar11 = *(long *)(param_1 + 0x78);
          iVar12 = iVar12 + 1;
          if (lVar11 == 0) break;
        } while( true );
      }
    }
  }
LAB_04463f68:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_04463c08:
  lVar5 = *(long *)(lVar11 + 0x50);
  iVar12 = iVar12 + 1;
  if (lVar5 == 0) goto LAB_04463c14;
  goto LAB_04463a24;
LAB_04463f28:
  uVar10 = uVar10 + 1;
  goto LAB_04463ca8;
}


// rea decompile_all
// name: CookingGraph.Execution.CookingFlightCoordinator$$Pump
// address: 0x44a2234
// body: available
// range: 0x44a2234-0x44a291b inclusive
// range: 0x44a2920-0x44a2923 inclusive
// range: 0x44a2928-0x44a292b inclusive
// range: 0x44a2930-0x44a2933 inclusive
// range: 0x44a2a18-0x44a2ba7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44a2918 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a2920 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a2928 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a2930 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a2acc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a2ad0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a2ad4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a2ad8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a2adc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a2ae0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a2ae4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a2ae8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044a2a98) */
/* WARNING: Removing unreachable block (ram,0x044a2b9c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CookingGraph_Execution_CookingFlightCoordinator__Pump(double param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  
  if ((DAT_095181f8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_0918efd0);
    FUN_03f5c2a4(&DAT_0919e5c8);
    FUN_03f5c2a4(&DAT_0919e4f0);
    FUN_03f5c2a4(&DAT_0919e5d0);
    FUN_03f5c2a4(&DAT_0919e4f8);
    FUN_03f5c2a4(&DAT_0919e508);
    FUN_03f5c2a4(&DAT_0919e530);
    FUN_03f5c2a4(&DAT_0919e538);
    FUN_03f5c2a4(&DAT_091cae38);
    FUN_03f5c2a4(&DAT_091cacc8);
    FUN_03f5c2a4(&DAT_091858f8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a478);
    FUN_03f5c2a4(&DAT_0917ab20);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091a95f0);
    FUN_03f5c2a4(&DAT_091a95f8);
    FUN_03f5c2a4(&DAT_091e6d88);
    FUN_03f5c2a4(&DAT_0918efc8);
    FUN_03f5c2a4(&DAT_09220ff8);
    FUN_03f5c2a4(&DAT_09207f58);
    FUN_03f5c2a4(&DAT_09202c00);
    DAT_095181f8 = 1;
  }
  local_80 = 0;
  local_78 = (long *)0x0;
  local_88 = 0;
  if (*(char *)(param_2 + 0x50) == '\0') {
    if (*(char *)(param_2 + 0x51) == '\0') {
      CookingGraph_Execution_CookingExecution__RequireTime(param_1,DAT_09220ff8);
      lVar8 = *(long *)(param_2 + 0x10);
      *(undefined1 *)(param_2 + 0x51) = 1;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = System_Guid__op_Inequality
                        (*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),
                         *(undefined8 *)(lVar8 + 0x70),*(undefined8 *)(lVar8 + 0x78),0);
      if ((uVar1 & 1) != 0) {
        CookingGraph_Execution_CookingFlightCoordinator__CancelAll(param_2);
        lVar8 = *(long *)(param_2 + 0x10);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = *(undefined8 *)(lVar8 + 0x70);
        *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(lVar8 + 0x78);
        *(undefined8 *)(param_2 + 0x38) = uVar2;
        if (*(long *)(param_2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06f53558(*(long *)(param_2 + 0x30),DAT_0919e4f0);
      }
      *(double *)(param_2 + 0x48) = *(double *)(param_2 + 0x48) + param_1;
      CookingGraph_Execution_CookingFlightCoordinator__DrainArrivals(param_2);
      lVar8 = FUN_04b03e34(*(undefined8 *)(param_2 + 0x20),DAT_091cacc8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
        uVar1 = 0;
        uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        plVar3 = (long *)(lVar8 + 0x28);
        do {
          if (uVar9 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = plVar3[-1];
          lVar6 = *plVar3;
          uVar9 = CookingGraph_Execution_CookingExecution__ContainsTransfer
                            (*(long *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x38),
                             *(undefined8 *)(param_2 + 0x40),lVar5);
          if ((uVar9 & 1) == 0) {
            CookingGraph_Execution_CookingFlightCoordinator__Cancel(param_2,lVar5);
          }
          else {
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            dVar13 = *(double *)(param_2 + 0x48);
            dVar14 = *(double *)(lVar6 + 0x20);
            dVar12 = (double)CookingGraph_Execution_CookingFlightCoordinator__get_TimeoutSeconds
                                       (param_2);
            if (dVar12 <= dVar13 - dVar14) {
              CookingGraph_Execution_CookingFlightCoordinator__Cancel(param_2,lVar5);
              if (*(long *)(param_2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_06f533bc(*(long *)(param_2 + 0x30),lVar5,DAT_09202c00,DAT_0919e538);
            }
          }
          uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar1 = uVar1 + 1;
          plVar3 = plVar3 + 2;
        } while ((long)uVar1 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
      if (*(long *)(param_2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = FUN_06f53078(*(long *)(param_2 + 0x30),DAT_0919e530);
      lVar8 = FUN_04b0473c(uVar2,DAT_091cae38);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
        uVar1 = 0;
        uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = *(undefined8 *)(lVar8 + 0x20 + uVar1 * 8);
          uVar9 = CookingGraph_Execution_CookingExecution__ContainsTransfer
                            (*(long *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x38),
                             *(undefined8 *)(param_2 + 0x40),uVar2);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_06f54860(*(long *)(param_2 + 0x30),uVar2,DAT_0919e508);
          }
          uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar1 = uVar1 + 1;
        } while ((long)uVar1 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
      if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar3 = (long *)CookingGraph_Execution_CookingExecution__get_Transfers();
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *plVar3;
      uVar1 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar1 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917a478) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_044a25ec;
          }
          uVar1 = uVar1 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar1 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a478,0);
LAB_044a25ec:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      do {
        local_78 = plVar3;
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *plVar3;
        uVar1 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar1 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_044a267c;
            }
            uVar1 = uVar1 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar1 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_044a267c:
        uVar1 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        plVar3 = local_78;
        if ((uVar1 & 1) == 0) {
          if (local_78 == (long *)0x0) goto LAB_044a2a88;
          lVar8 = *local_78;
          uVar1 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar1 == 0) goto LAB_044a2a60;
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_044a2a48;
        }
        if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *local_78;
        uVar1 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar1 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917ab20) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_044a26e0;
            }
            uVar1 = uVar1 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar1 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(local_78,DAT_0917ab20,0);
LAB_044a26e0:
        lVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        lVar5 = thunk_FUN_03f9944c(DAT_0918efc8);
        System_Object___ctor(lVar5,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(long *)(lVar5 + 0x18) = param_2;
        thunk_FUN_03f5d7b8((long *)(lVar5 + 0x18),param_2);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((DAT_095181eb & 1) == 0) {
          FUN_03f5c2a4(&DAT_091b6d60);
          DAT_095181eb = 1;
        }
        plVar3 = local_78;
        if (*(char *)(lVar8 + 0x98) != '\0') {
          if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar1 = FUN_06f535c4(*(long *)(param_2 + 0x20),*(undefined8 *)(lVar8 + 0x20),DAT_0919e5d0)
          ;
          plVar3 = local_78;
          if ((uVar1 & 1) == 0) {
            if (*(long *)(param_2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar1 = FUN_06f535c4(*(long *)(param_2 + 0x30),*(undefined8 *)(lVar8 + 0x20),
                                 DAT_0919e4f8);
            plVar3 = local_78;
            if ((uVar1 & 1) == 0) {
              lVar6 = thunk_FUN_03f9944c(DAT_0918efd0);
              System_Object___ctor(lVar6,0);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              *(long *)(lVar6 + 0x10) = lVar8;
              thunk_FUN_03f5d7b8((long *)(lVar6 + 0x10),lVar8);
              uVar2 = *(undefined8 *)(param_2 + 0x48);
              plVar3 = (long *)(lVar5 + 0x10);
              *plVar3 = lVar6;
              *(undefined8 *)(lVar6 + 0x20) = uVar2;
              thunk_FUN_03f5d7b8(plVar3,lVar6);
              if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_06f533d0(*(long *)(param_2 + 0x20),*(undefined8 *)(lVar8 + 0x20),*plVar3,
                           DAT_0919e5c8);
              plVar11 = *(long **)(param_2 + 0x18);
              uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
              System_Action___ctor(uVar2,lVar5,DAT_091e6d88,0);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar5 = *plVar11;
              uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar1 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_091858f8) {
                    puVar4 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_044a286c;
                  }
                  uVar1 = uVar1 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar1 != 0);
              }
              puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091858f8,0);
LAB_044a286c:
              uVar1 = (*(code *)*puVar4)(plVar11,lVar8,uVar2,&local_80,&local_88,puVar4[1]);
              lVar5 = *plVar3;
              if ((uVar1 & 1) == 0) {
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                *(undefined8 *)(lVar5 + 0x18) = local_80;
                thunk_FUN_03f5d7b8();
                CookingGraph_Execution_CookingFlightCoordinator__Cancel
                          (param_2,*(undefined8 *)(lVar8 + 0x20));
                lVar5 = *(long *)(param_2 + 0x30);
                uVar2 = *(undefined8 *)(lVar8 + 0x20);
                uVar1 = System_String__IsNullOrEmpty(local_88,0);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                puVar4 = &DAT_09207f58;
                if ((uVar1 & 1) == 0) {
                  puVar4 = &local_88;
                }
                FUN_06f533bc(lVar5,uVar2,*puVar4,DAT_0919e538);
                plVar3 = local_78;
              }
              else {
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                *(undefined8 *)(lVar5 + 0x18) = local_80;
                thunk_FUN_03f5d7b8();
                plVar3 = local_78;
              }
            }
          }
        }
      } while( true );
    }
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar7 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_0920b560);
    System_InvalidOperationException___ctor(uVar7,uVar2,0);
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar7 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_091ff1f8);
    System_ObjectDisposedException___ctor(uVar7,uVar2,0);
  }
  uVar2 = thunk_FUN_03fc39d4(&DAT_091c64f8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar2);
  while( true ) {
    uVar1 = uVar1 - 1;
    piVar10 = piVar10 + 4;
    if (uVar1 == 0) break;
LAB_044a2a48:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_044a2a7c;
    }
  }
LAB_044a2a60:
  puVar4 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185a58,0);
LAB_044a2a7c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_044a2a88:
  CookingGraph_Execution_CookingFlightCoordinator__DrainArrivals(param_2);
  *(undefined1 *)(param_2 + 0x51) = 0;
  return;
}


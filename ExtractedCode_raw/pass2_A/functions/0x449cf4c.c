// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$NextCompletionIn
// address: 0x449cf4c
// body: available
// range: 0x449cf4c-0x449d693 inclusive
// range: 0x449d698-0x449d797 inclusive
// range: 0x449d79c-0x449d79f inclusive
// range: 0x449d7f4-0x449d8af inclusive
// range: 0x449d99c-0x449d9a3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449d690 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449d794 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449d79c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449d880 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449d884 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449d888 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449d88c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449d890 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449d894 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449d89c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449d8a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449d8a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0449d898) */
/* WARNING: Removing unreachable block (ram,0x0449d78c) */
/* WARNING: Removing unreachable block (ram,0x0449d790) */
/* WARNING: Removing unreachable block (ram,0x0449d99c) */
/* WARNING: Removing unreachable block (ram,0x0449d824) */

undefined8 CookingGraph_Execution_CookingExecution__NextCompletionIn(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char *pcVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  long *local_e8;
  long **pplStack_e0;
  long local_d8;
  long *local_d0;
  long **pplStack_c8;
  long local_c0;
  long *local_b8;
  long *local_b0;
  long **pplStack_a8;
  long local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  
  if ((DAT_095181bf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cb5f8);
    FUN_03f5c2a4(&DAT_091a5090);
    FUN_03f5c2a4(&DAT_091a5078);
    FUN_03f5c2a4(&DAT_091a5080);
    FUN_03f5c2a4(&DAT_091a5098);
    FUN_03f5c2a4(&DAT_091a5088);
    FUN_03f5c2a4(&DAT_091a50a0);
    FUN_03f5c2a4(&DAT_09179320);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a818);
    FUN_03f5c2a4(&DAT_0917af18);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b2478);
    FUN_03f5c2a4(&DAT_091b2440);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b6d48);
    FUN_03f5c2a4(&DAT_091b6d60);
    FUN_03f5c2a4(&DAT_091b6d68);
    FUN_03f5c2a4(&DAT_091e6c40);
    FUN_03f5c2a4(&DAT_091e6c48);
    FUN_03f5c2a4(&DAT_0918ef00);
    DAT_095181bf = 1;
  }
  local_b0 = (long *)0x0;
  pplStack_a8 = (long **)0x0;
  local_a0 = 0;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  local_d0 = (long *)0x0;
  pplStack_c8 = (long **)0x0;
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_057e185c(&local_e8,*(long *)(param_1 + 0x48),DAT_091b2440);
    local_a0 = local_d8;
    pplStack_a8 = pplStack_e0;
    local_b0 = local_e8;
    dVar8 = INFINITY;
    local_e8 = (long *)0x0;
    pplStack_e0 = &local_b0;
    while (uVar1 = FUN_071bd28c(&local_b0,DAT_091a5080), (uVar1 & 1) != 0) {
      if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar10 = *(undefined8 *)(local_a0 + 0x28);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar8 = (double)System_Math__Min(dVar8,uVar10,0);
    }
    FUN_071bd288(&local_b0,DAT_091a5078);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar3 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
    lVar6 = puVar3[8];
    if (lVar6 == 0) {
      if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar3 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
      }
      uVar7 = *puVar3;
      lVar6 = thunk_FUN_03f9944c(DAT_09179320);
      FUN_05322d94(lVar6,uVar7,DAT_091e6c40,0);
      plVar2 = (long *)(*(long *)(DAT_0918ef00 + 0xb8) + 0x40);
      *plVar2 = lVar6;
      thunk_FUN_03f5d7b8(plVar2,lVar6);
    }
    plVar2 = (long *)FUN_04b0cafc(uVar10,lVar6,DAT_091cb5f8);
    if (plVar2 != (long *)0x0) {
      lVar6 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917a818) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0449d258;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a818,0);
LAB_0449d258:
      local_b8 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      pplStack_e0 = &local_b8;
      local_e8 = (long *)0x0;
      do {
        plVar2 = local_b8;
        if (local_b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *local_b8;
        uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_09185b10) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0449d2c8;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(local_b8,DAT_09185b10,0);
LAB_0449d2c8:
        uVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        plVar2 = local_b8;
        if ((uVar1 & 1) == 0) {
          if (local_b8 == (long *)0x0) goto LAB_0449d3f0;
          lVar6 = *local_b8;
          uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar1 == 0) goto LAB_0449d3c8;
          piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0449d3b0;
        }
        if (local_b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *local_b8;
        uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_0917af18) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0449d32c;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(local_b8,DAT_0917af18,0);
LAB_0449d32c:
        lVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        dVar9 = *(double *)(lVar6 + 0xa0);
        dVar11 = *(double *)(param_1 + 0x80);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187e80);
        }
        uVar10 = System_Math__Max(0,dVar9 - dVar11,0);
        dVar8 = (double)System_Math__Min(dVar8,uVar10,0);
      } while( true );
    }
  }
  goto LAB_0449d8a4;
LAB_0449d698:
  if (local_b8 != (long *)0x0) {
    lVar6 = *local_b8;
    uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185a58) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0449d774;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(local_b8,DAT_09185a58,0);
LAB_0449d774:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  goto LAB_0449d424;
  while( true ) {
    uVar1 = uVar1 - 1;
    piVar5 = piVar5 + 4;
    if (uVar1 == 0) break;
LAB_0449d3b0:
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0449d3e4;
    }
  }
LAB_0449d3c8:
  puVar3 = (undefined8 *)FUN_03f95da8(local_b8,DAT_09185a58,0);
LAB_0449d3e4:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_0449d3f0:
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_057e185c(&local_e8,*(long *)(param_1 + 0x40),DAT_091b2478);
    local_c0 = local_d8;
    pplStack_c8 = pplStack_e0;
    local_d0 = local_e8;
    local_e8 = (long *)0x0;
    pplStack_e0 = &local_d0;
LAB_0449d424:
    while( true ) {
      uVar1 = FUN_071bd28c(&local_d0,DAT_091a5098);
      plVar2 = local_e8;
      if ((uVar1 & 1) == 0) {
        FUN_071bd288(pplStack_e0,DAT_091a5090);
        if (plVar2 == (long *)0x0) {
          local_90 = 0;
          uStack_88 = 0;
          if (dVar8 != INFINITY) {
            FUN_05c2dd28(dVar8,&local_90,DAT_091b6d48);
          }
          return local_90;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c548(plVar2);
      }
      if (local_c0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(local_c0 + 0x20) != '\0') break;
      lVar6 = *(long *)(param_1 + 0x88);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(local_c0 + 0x18) == 0) {
        pcVar4 = (char *)(lVar6 + 0x10);
      }
      else if (*(int *)(local_c0 + 0x18) == 1) {
        pcVar4 = (char *)(lVar6 + 0x11);
      }
      else {
        pcVar4 = (char *)(lVar6 + 0x12);
      }
      if (*pcVar4 == '\0') {
        uVar10 = 0;
      }
      else {
        dVar9 = *(double *)(param_1 + 0x68);
        dVar11 = *(double *)(param_1 + 0x80);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = System_Math__Max(0,dVar9 - dVar11,0);
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar8 = (double)System_Math__Min(dVar8,uVar10,0);
    }
    uVar10 = *(undefined8 *)(local_c0 + 0x38);
    if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar3 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
    lVar6 = puVar3[9];
    if (lVar6 == 0) {
      if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar3 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
      }
      uVar7 = *puVar3;
      lVar6 = thunk_FUN_03f9944c(DAT_09179320);
      FUN_05322d94(lVar6,uVar7,DAT_091e6c48,0);
      plVar2 = (long *)(*(long *)(DAT_0918ef00 + 0xb8) + 0x48);
      *plVar2 = lVar6;
      thunk_FUN_03f5d7b8(plVar2,lVar6);
    }
    plVar2 = (long *)FUN_04b0cafc(uVar10,lVar6,DAT_091cb5f8);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_0917a818) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0449d558;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a818,0);
LAB_0449d558:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    do {
      local_b8 = plVar2;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0449d5c0;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_0449d5c0:
      uVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      plVar2 = local_b8;
      if ((uVar1 & 1) == 0) goto LAB_0449d698;
      if (local_b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *local_b8;
      uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917af18) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0449d624;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_b8,DAT_0917af18,0);
LAB_0449d624:
      lVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      dVar9 = (double)FUN_05c2dd40(lVar6 + 0x78,DAT_091b6d68);
      dVar11 = *(double *)(lVar6 + 0x70);
      dVar12 = *(double *)(param_1 + 0x80);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = System_Math__Max(0,(dVar9 + dVar11) - dVar12,0);
      dVar8 = (double)System_Math__Min(dVar8,uVar10,0);
      plVar2 = local_b8;
    } while( true );
  }
LAB_0449d8a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


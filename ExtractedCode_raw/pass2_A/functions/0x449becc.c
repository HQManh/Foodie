// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$AdvanceDepartures
// address: 0x449becc
// body: available
// range: 0x449becc-0x449c4c3 inclusive
// range: 0x449c4c8-0x449c4cb inclusive
// range: 0x449c4d0-0x449c4d3 inclusive
// range: 0x449c554-0x449c5d7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449c4c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449c4c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449c4d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449c594 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449c598 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449c59c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449c5a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449c5a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449c5ac to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449c5b4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449c5b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449c5bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0449c5a8) */
/* WARNING: Removing unreachable block (ram,0x0449c410) */
/* WARNING: Removing unreachable block (ram,0x0449c5c8) */
/* WARNING: Removing unreachable block (ram,0x0449c4b8) */
/* WARNING: Removing unreachable block (ram,0x0449c4bc) */
/* WARNING: Removing unreachable block (ram,0x0449c5b0) */

void CookingGraph_Execution_CookingExecution__AdvanceDepartures(long param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  char *pcVar13;
  int iVar14;
  double dVar15;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  long **local_d0;
  long *local_c8;
  long **pplStack_c0;
  long local_b8;
  long *local_b0;
  long **pplStack_a8;
  long local_a0;
  long *local_90;
  long **pplStack_88;
  long local_80;
  long *local_68;
  
  if ((DAT_095181c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6438);
    FUN_03f5c2a4(&DAT_091cb5f8);
    FUN_03f5c2a4(&DAT_091a5090);
    FUN_03f5c2a4(&DAT_091a5060);
    FUN_03f5c2a4(&DAT_091a5098);
    FUN_03f5c2a4(&DAT_091a5068);
    FUN_03f5c2a4(&DAT_091a50a0);
    FUN_03f5c2a4(&DAT_091a5070);
    FUN_03f5c2a4(&DAT_09179320);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a818);
    FUN_03f5c2a4(&DAT_0917af18);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b2478);
    FUN_03f5c2a4(&DAT_091b2400);
    FUN_03f5c2a4(&DAT_091b6d48);
    FUN_03f5c2a4(&DAT_091b6d60);
    FUN_03f5c2a4(&DAT_091b6d68);
    DAT_095181c8 = 1;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  local_68 = (long *)0x0;
  local_90 = (long *)0x0;
  pplStack_88 = (long **)0x0;
  local_80 = 0;
  local_b0 = (long *)0x0;
  pplStack_a8 = (long **)0x0;
  local_a0 = 0;
  uVar4 = thunk_FUN_03f9944c(DAT_09179320);
  FUN_05322d94(uVar4,param_1,DAT_091c6438,0);
  plVar5 = (long *)FUN_04b0cafc(uVar12,uVar4,DAT_091cb5f8);
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917a818) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0449c094;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917a818,0);
LAB_0449c094:
    local_68 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    pplStack_c0 = &local_68;
    local_c8 = (long *)0x0;
    do {
      plVar5 = local_68;
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *local_68;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185b10) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0449c148;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185b10,0);
LAB_0449c148:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      plVar5 = local_68;
      if ((uVar10 & 1) == 0) {
        if (local_68 == (long *)0x0) goto LAB_0449c240;
        lVar7 = *local_68;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 == 0) goto LAB_0449c218;
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_0449c200;
      }
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *local_68;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917af18) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0449c1ac;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917af18,0);
LAB_0449c1ac:
      lVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CookingGraph_Execution_CookingExecution__Depart(*(undefined8 *)(lVar7 + 0xa0),param_1);
    } while( true );
  }
  goto LAB_0449c5c4;
code_r0x0449c2a0:
  lVar7 = *(long *)(param_1 + 0x88);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(local_80 + 0x18) == 0) {
    pcVar8 = (char *)(lVar7 + 0x10);
  }
  else if (*(int *)(local_80 + 0x18) == 1) {
    pcVar8 = (char *)(lVar7 + 0x11);
  }
  else {
    pcVar8 = (char *)(lVar7 + 0x12);
  }
  cVar2 = *pcVar8;
  if ((cVar2 == '\0') || (*(double *)(param_1 + 0x68) <= *(double *)(param_1 + 0x80) + 1e-09)) {
    local_c8 = (long *)0x0;
    pplStack_c0 = (long **)0x0;
    FUN_05c2dd28(&local_c8,DAT_091b6d48);
    *(long ***)(lVar3 + 0x28) = pplStack_c0;
    *(long **)pcVar13 = local_c8;
    if (cVar2 != '\0') {
      if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(double *)(param_1 + 0x68) =
           *(double *)(param_1 + 0x80) + *(double *)(*(long *)(param_1 + 0x88) + 0x18);
    }
LAB_0449c31c:
    if (*(long *)(lVar3 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_c8,*(long *)(lVar3 + 0x38),DAT_091b2400);
    local_b0 = local_c8;
    iVar14 = 0;
    local_c8 = (long *)0x0;
    pplStack_a8 = pplStack_c0;
    local_a0 = local_b8;
    pplStack_c0 = &local_b0;
    while (uVar10 = FUN_071bd28c(&local_b0,DAT_091a5068), lVar7 = local_a0, (uVar10 & 1) != 0) {
      if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((*(char *)(local_a0 + 0x78) == '\0') &&
         (uVar10 = CookingGraph_Execution_CookingExecution__PhaseOpen(param_1,local_a0),
         (uVar10 & 1) != 0)) {
        local_e8 = 0;
        uStack_e0 = 0;
        FUN_05c2dd28(*(undefined8 *)(param_1 + 0x80),&local_e8,DAT_091b6d48);
        *(undefined8 *)(lVar7 + 0x80) = uStack_e0;
        *(undefined8 *)(lVar7 + 0x78) = local_e8;
        lVar9 = *(long *)(param_1 + 0x88);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar3 + 0x18) == 0) {
          cVar2 = *(char *)(lVar9 + 0x28);
joined_r0x0449c3c0:
          if (cVar2 == '\0') goto LAB_0449c3c4;
LAB_0449c3b4:
          dVar15 = *(double *)(lVar9 + 0x20);
        }
        else {
          if (*(int *)(lVar3 + 0x18) != 1) {
            cVar2 = *(char *)(lVar9 + 0x2a);
            goto joined_r0x0449c3c0;
          }
          if (*(char *)(lVar9 + 0x29) != '\0') goto LAB_0449c3b4;
LAB_0449c3c4:
          dVar15 = 0.0;
        }
        iVar1 = *(int *)(lVar3 + 0x30) + iVar14;
        iVar14 = iVar14 + 1;
        *(double *)(lVar7 + 0x70) = dVar15 * (double)iVar1;
      }
    }
    FUN_071bd288(&local_b0,DAT_091a5060);
    if (*(long *)(lVar3 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_c8,*(long *)(lVar3 + 0x38),DAT_091b2400);
    local_b0 = local_c8;
    local_c8 = (long *)0x0;
    pplStack_a8 = pplStack_c0;
    local_a0 = local_b8;
    pplStack_c0 = &local_b0;
    while (uVar10 = FUN_071bd28c(&local_b0,DAT_091a5068), lVar7 = local_a0, (uVar10 & 1) != 0) {
      if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (((*(char *)(local_a0 + 0x78) != '\0') &&
          (dVar15 = (double)FUN_05c2dd40((char *)(local_a0 + 0x78),DAT_091b6d68),
          *(char *)(lVar7 + 0x88) == '\0')) &&
         (dVar15 + *(double *)(lVar7 + 0x70) <= *(double *)(param_1 + 0x80) + 1e-09)) {
        CookingGraph_Execution_CookingExecution__Depart(param_1,lVar7);
      }
    }
    FUN_071bd288(&local_b0,DAT_091a5060);
  }
  goto LAB_0449c27c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0449c200:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0449c234;
    }
  }
LAB_0449c218:
  puVar6 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_0449c234:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_0449c240:
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_057e185c(&local_c8,*(long *)(param_1 + 0x40),DAT_091b2478);
    local_80 = local_b8;
    local_d0 = &local_90;
    pplStack_88 = pplStack_c0;
    local_90 = local_c8;
    local_d8 = 0;
LAB_0449c27c:
    uVar10 = FUN_071bd28c(&local_90,DAT_091a5098);
    lVar3 = local_80;
    lVar7 = local_d8;
    if ((uVar10 & 1) == 0) {
      FUN_071bd288(local_d0,DAT_091a5090);
      if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c548(lVar7);
      }
      return;
    }
    if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    pcVar13 = (char *)(local_80 + 0x20);
    if (*pcVar13 == '\0') goto code_r0x0449c2a0;
    goto LAB_0449c31c;
  }
LAB_0449c5c4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


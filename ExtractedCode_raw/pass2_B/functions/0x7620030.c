// rea decompile_all
// name: System.Threading.SemaphoreSlim.<WaitUntilCountOrTimeoutAsync>d__32$$MoveNext
// address: 0x7620030
// body: available
// range: 0x7620030-0x7620723 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76206e0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76206e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76206ec to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76206f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76206f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76206f8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76206fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7620700 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7620704 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7620708 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7620714 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7620720 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076206e8) */
/* WARNING: Removing unreachable block (ram,0x076206dc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Threading_SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__32__MoveNext(int *param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  undefined1 local_80 [16];
  char local_6c [4];
  undefined8 local_68;
  undefined1 local_60 [16];
  int local_4c;
  int *local_48;
  long local_38;
  
  local_48 = param_1;
  if ((DAT_09522128 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09198430);
    FUN_03f5c2a4(&DAT_091983f0);
    FUN_03f5c2a4(&DAT_091985d0);
    FUN_03f5c2a4(&DAT_091751c8);
    FUN_03f5c2a4(&DAT_09182368);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b968);
    FUN_03f5c2a4(&DAT_0919ba98);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919baa0);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09180688);
    FUN_03f5c2a4(&DAT_091bcd20);
    FUN_03f5c2a4(&DAT_091bcba0);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_09522128 = 1;
  }
  local_4c = *param_1;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  auVar1 = ZEXT816(0);
  local_68 = 0;
  local_6c[0] = '\0';
  local_80._8_8_ = 0;
  local_80._0_8_ = 0;
  if (local_4c == 1) {
    local_80 = *(undefined1 (*) [16])(param_1 + 0x18);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    local_4c = -1;
    *param_1 = -1;
  }
  else {
    lVar8 = *(long *)(param_1 + 0xe);
    if (local_4c == 0) {
LAB_07620404:
      local_4c = -1;
      local_60 = *(undefined1 (*) [16])(local_48 + 0x14);
      local_48[0x14] = 0;
      local_48[0x15] = 0;
      local_48[0x16] = 0;
      local_48[0x17] = 0;
      *local_48 = -1;
LAB_07620420:
      lVar4 = FUN_06dab358(local_60,DAT_0919ba98);
      plVar10 = (long *)(local_48 + 0x12);
      if (*plVar10 == lVar4) {
        *plVar10 = 0;
        thunk_FUN_03f5d7b8(plVar10,0);
        lVar4 = *(long *)(local_48 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        System_Threading_CancellationTokenSource__ThrowIfDisposed(lVar4);
        System_Threading_CancellationTokenSource__NotifyCancellation(lVar4,0);
        uVar2 = 1;
        iVar11 = 10;
      }
      else {
        uVar2 = 0;
        iVar11 = 0xb;
      }
    }
    else {
      piVar7 = param_1;
      if (*(int *)(DAT_09182348 + 0xe4) == 0) {
        FUN_03f5c424();
        piVar7 = local_48;
      }
      if (*(long *)(param_1 + 8) == 0) {
        lVar4 = thunk_FUN_03f9944c(DAT_09182368);
        thunk_FUN_03f6a5cc();
        *(undefined4 *)(lVar4 + 0x24) = 0xffffffff;
        System_Object___ctor(lVar4,0);
        thunk_FUN_03f6a5cc();
        *(undefined4 *)(lVar4 + 0x20) = 1;
      }
      else {
        uVar9 = *(undefined8 *)(piVar7 + 8);
        if (*(int *)(DAT_09182368 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = System_Threading_CancellationTokenSource__CreateLinkedTokenSource(uVar9,0);
      }
      *(long *)(piVar7 + 0x10) = lVar4;
      thunk_FUN_03f5d7b8(piVar7 + 0x10,lVar4);
      if (local_4c == 0) goto LAB_07620404;
      plVar10 = (long *)FUN_03f5c394(DAT_09180688,2);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *(long *)(local_48 + 10);
      if ((lVar4 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar10 + 0x40)), lVar3 == 0)) {
        uVar9 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar9,0);
      }
      if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar10[4] = lVar4;
      thunk_FUN_03f5d7b8(plVar10 + 4,lVar4);
      lVar4 = *(long *)(local_48 + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar11 = local_48[0xc];
      System_Threading_CancellationTokenSource__ThrowIfDisposed(lVar4);
      local_38 = lVar4;
      thunk_FUN_03f5d7b8(&local_38,lVar4);
      lVar4 = local_38;
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = System_Threading_Tasks_Task__Delay(iVar11,lVar4,0);
      if ((lVar4 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar10 + 0x40)), lVar3 == 0)) {
        uVar9 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar9,0);
      }
      if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar10[5] = lVar4;
      thunk_FUN_03f5d7b8(plVar10 + 5,lVar4);
      lVar4 = System_Threading_Tasks_Task__WhenAny(plVar10,0);
      *(undefined8 *)(local_48 + 0x12) = *(undefined8 *)(local_48 + 10);
      thunk_FUN_03f5d7b8();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_60 = FUN_062ee72c(lVar4,0,DAT_091bcd20);
      uVar6 = FUN_06dab310(local_60,DAT_0919baa0);
      if ((uVar6 & 1) != 0) goto LAB_07620420;
      local_4c = 0;
      *local_48 = 0;
      *(undefined1 (*) [16])(local_48 + 0x14) = local_60;
      thunk_FUN_03f5d7b8(local_48 + 0x14,0);
      piVar7 = local_48;
      if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091751c8,extraout_x1,local_48);
      }
      FUN_045d4ab0(piVar7 + 2,local_60,local_48,DAT_09198430);
      uVar2 = 0;
      iVar11 = 8;
    }
    if ((local_4c < 0) && (plVar10 = *(long **)(local_48 + 0x10), plVar10 != (long *)0x0)) {
      lVar4 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185a58) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07620500;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185a58,0);
LAB_07620500:
      (*(code *)*puVar5)(plVar10,puVar5[1]);
    }
    if (iVar11 != 0xb) {
      if (iVar11 == 10) goto LAB_07620690;
      if (iVar11 != 0) {
        return;
      }
    }
    piVar7 = local_48 + 0x10;
    piVar7[0] = 0;
    piVar7[1] = 0;
    thunk_FUN_03f5d7b8(piVar7,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_68 = *(undefined8 *)(lVar8 + 0x20);
    local_6c[0] = '\0';
    System_Threading_Monitor__Enter(local_68,local_6c,0);
    uVar6 = System_Threading_SemaphoreSlim__RemoveAsyncWaiter(lVar8,*(undefined8 *)(local_48 + 10));
    piVar7 = local_48;
    if ((uVar6 & 1) == 0) {
      iVar11 = 0xd;
    }
    else {
      if (*(int *)(DAT_09182348 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_CancellationToken__ThrowIfCancellationRequested(piVar7 + 8);
      uVar2 = 0;
      iVar11 = 10;
    }
    if ((local_4c < 0) && (local_6c[0] != '\0')) {
      System_Threading_Monitor__Exit(local_68,0);
    }
    if (iVar11 != 0xd) {
      if (iVar11 == 10) goto LAB_07620690;
      if (iVar11 != 0) {
        return;
      }
    }
    if (*(long *)(local_48 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_80 = FUN_062e82b0(*(long *)(local_48 + 10),0,DAT_091bcba0);
    uVar6 = FUN_06daadec(local_80,DAT_0919b9e0);
    auVar1 = local_60;
    if ((uVar6 & 1) == 0) {
      local_4c = 1;
      *local_48 = 1;
      *(undefined1 (*) [16])(local_48 + 0x18) = local_80;
      thunk_FUN_03f5d7b8(local_48 + 0x18,0);
      piVar7 = local_48;
      if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091751c8,extraout_x1_00,local_48);
      }
      FUN_045d3ab8(piVar7 + 2,local_80,local_48,DAT_091983f0);
      return;
    }
  }
  local_60 = auVar1;
  uVar2 = FUN_06daae34(local_80,DAT_0919b9d8);
LAB_07620690:
  piVar7 = local_48 + 2;
  *local_48 = -2;
  if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_069f2e3c(piVar7,uVar2 & 1,DAT_091985d0);
  return;
}


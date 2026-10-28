// rea decompile_all
// name: System.Threading.ThreadPoolWorkQueue.WorkStealingQueue$$LocalPush
// address: 0x762663c
// body: available
// range: 0x762663c-0x7626a87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7626a48 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626a4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626a50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626a54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626a60 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626a68 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626a6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626a74 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626a78 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626a7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626a80 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7626a84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07626a70) */
/* WARNING: Removing unreachable block (ram,0x07626a64) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Threading_ThreadPoolWorkQueue_WorkStealingQueue__LocalPush
               (long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  char local_60 [4];
  char local_5c [4];
  long local_58;
  
  local_58 = param_1;
  if ((DAT_0952217d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180100);
    FUN_03f5c2a4(&DAT_0918aef0);
    DAT_0952217d = 1;
  }
  uVar12 = *(uint *)(param_1 + 0x20);
  local_5c[0] = '\0';
  local_60[0] = '\0';
  thunk_FUN_03f6a5cc();
  if (uVar12 == 0x7fffffff) {
    local_5c[0] = '\0';
    if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_SpinLock__Enter(param_1 + 0x24,local_5c,0);
    iVar1 = *(int *)(local_58 + 0x20);
    thunk_FUN_03f6a5cc();
    uVar12 = 0x7fffffff;
    if (iVar1 == 0x7fffffff) {
      uVar12 = *(uint *)(local_58 + 0x1c);
      thunk_FUN_03f6a5cc();
      uVar2 = *(uint *)(local_58 + 0x18);
      thunk_FUN_03f6a5cc();
      thunk_FUN_03f6a5cc();
      uVar3 = *(uint *)(local_58 + 0x20);
      *(uint *)(local_58 + 0x1c) = uVar2 & uVar12;
      thunk_FUN_03f6a5cc();
      uVar12 = *(uint *)(local_58 + 0x18);
      thunk_FUN_03f6a5cc();
      uVar12 = uVar12 & uVar3;
      thunk_FUN_03f6a5cc();
      *(uint *)(local_58 + 0x20) = uVar12;
    }
    lVar10 = local_58;
    param_1 = local_58;
    if (local_5c[0] != '\0') {
      if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_SpinLock__Exit(lVar10 + 0x24,1,0);
      param_1 = local_58;
    }
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  thunk_FUN_03f6a5cc();
  iVar4 = *(int *)(local_58 + 0x18);
  thunk_FUN_03f6a5cc();
  lVar10 = local_58;
  if ((int)uVar12 < iVar4 + iVar1) {
    lVar10 = *(long *)(local_58 + 0x10);
    thunk_FUN_03f6a5cc();
    uVar2 = *(uint *)(local_58 + 0x18);
    thunk_FUN_03f6a5cc();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = uVar2 & uVar12;
    if (*(uint *)(lVar10 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    thunk_FUN_03f6a5cc();
    puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
    *puVar11 = param_2;
    thunk_FUN_03f5d7b8(puVar11,param_2);
    thunk_FUN_03f6a5cc();
    *(uint *)(local_58 + 0x20) = uVar12 + 1;
  }
  else {
    local_60[0] = '\0';
    if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_SpinLock__Enter(lVar10 + 0x24,local_60,0);
    iVar1 = *(int *)(local_58 + 0x1c);
    thunk_FUN_03f6a5cc();
    iVar4 = *(int *)(local_58 + 0x20);
    thunk_FUN_03f6a5cc();
    iVar5 = *(int *)(local_58 + 0x1c);
    thunk_FUN_03f6a5cc();
    iVar6 = *(int *)(local_58 + 0x18);
    thunk_FUN_03f6a5cc();
    uVar2 = iVar4 - iVar5;
    if (iVar6 <= (int)uVar2) {
      lVar10 = *(long *)(local_58 + 0x10);
      thunk_FUN_03f6a5cc();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar7 = (long *)FUN_03f5c394(DAT_09180100,*(int *)(lVar10 + 0x18) << 1);
      uVar14 = 0;
      lVar10 = 0x20;
      while( true ) {
        lVar13 = *(long *)(local_58 + 0x10);
        thunk_FUN_03f6a5cc();
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((long)*(int *)(lVar13 + 0x18) <= (long)uVar14) break;
        lVar13 = *(long *)(local_58 + 0x10);
        thunk_FUN_03f6a5cc();
        uVar12 = *(uint *)(local_58 + 0x18);
        thunk_FUN_03f6a5cc();
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar12 = uVar12 & iVar1 + (int)uVar14;
        if (*(uint *)(lVar13 + 0x18) <= uVar12) {
LAB_07626a48:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar13 = *(long *)(lVar13 + (long)(int)uVar12 * 8 + 0x20);
        if ((lVar13 != 0) &&
           (lVar8 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
          uVar9 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar9,0);
        }
        if (*(uint *)(plVar7 + 3) <= uVar14) goto LAB_07626a48;
        plVar7[uVar14 + 4] = lVar13;
        thunk_FUN_03f5d7b8((long)plVar7 + lVar10,lVar13);
        uVar14 = uVar14 + 1;
        lVar10 = lVar10 + 8;
      }
      thunk_FUN_03f6a5cc();
      *(long *)(local_58 + 0x10) = (long)plVar7;
      thunk_FUN_03f5d7b8((long *)(local_58 + 0x10),plVar7);
      thunk_FUN_03f6a5cc();
      *(undefined4 *)(local_58 + 0x1c) = 0;
      thunk_FUN_03f6a5cc();
      iVar1 = *(int *)(local_58 + 0x18);
      *(uint *)(local_58 + 0x20) = uVar2;
      thunk_FUN_03f6a5cc();
      thunk_FUN_03f6a5cc();
      *(uint *)(local_58 + 0x18) = iVar1 << 1 | 1;
      uVar12 = uVar2;
    }
    lVar10 = *(long *)(local_58 + 0x10);
    thunk_FUN_03f6a5cc();
    uVar2 = *(uint *)(local_58 + 0x18);
    thunk_FUN_03f6a5cc();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = uVar2 & uVar12;
    if (*(uint *)(lVar10 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    thunk_FUN_03f6a5cc();
    puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
    *puVar11 = param_2;
    thunk_FUN_03f5d7b8(puVar11,param_2);
    thunk_FUN_03f6a5cc();
    lVar10 = local_58;
    *(uint *)(local_58 + 0x20) = uVar12 + 1;
    if (local_60[0] != '\0') {
      if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_SpinLock__Exit(lVar10 + 0x24,0,0);
    }
  }
  return;
}


// rea decompile_all
// name: UniRx.InternalUtil.ThreadSafeQueueWorker$$Enqueue
// address: 0x418d718
// body: available
// range: 0x418d718-0x418da53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x418da10 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418da14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418da18 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418da1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418da20 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418da2c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418da30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418da34 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418da38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418da3c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418da40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418da4c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0418da10) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UniRx_InternalUtil_ThreadSafeQueueWorker__Enqueue(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  char local_4c [4];
  undefined8 local_48;
  
  if ((DAT_09516781 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917f990);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_09516781 = 1;
  }
  local_48 = *(undefined8 *)(param_1 + 0x10);
  local_4c[0] = '\0';
  System_Threading_Monitor__Enter(local_48,local_4c,0);
  if (*(char *)(param_1 + 0x18) == '\0') {
    plVar4 = (long *)(param_1 + 0x20);
    lVar3 = *plVar4;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(param_1 + 0x1c) == *(int *)(lVar3 + 0x18)) {
      uVar1 = *(int *)(param_1 + 0x1c) << 1;
      if (0x7feffffe < uVar1) {
        uVar1 = 0x7fefffff;
      }
      lVar3 = FUN_03f5c394(DAT_0917f990,uVar1);
      uVar2 = FUN_03f5c394(DAT_09180318,uVar1);
      System_Array__Copy(*(undefined8 *)(param_1 + 0x20),lVar3,*(undefined4 *)(param_1 + 0x1c),0);
      puVar5 = (undefined8 *)(param_1 + 0x28);
      System_Array__Copy(*puVar5,uVar2,*(undefined4 *)(param_1 + 0x1c),0);
      *plVar4 = lVar3;
      thunk_FUN_03f5d7b8(plVar4,lVar3);
      *puVar5 = uVar2;
      thunk_FUN_03f5d7b8(puVar5,uVar2);
      lVar3 = *plVar4;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    if (*(uint *)(lVar3 + 0x18) <= *(uint *)(param_1 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    puVar5 = (undefined8 *)(lVar3 + (long)(int)*(uint *)(param_1 + 0x1c) * 8 + 0x20);
    *puVar5 = param_2;
    thunk_FUN_03f5d7b8(puVar5,param_2);
    plVar4 = *(long **)(param_1 + 0x28);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(param_1 + 0x1c);
    if ((param_3 != 0) &&
       (lVar3 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0)) {
      uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,0);
    }
    if (*(uint *)(plVar4 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar4[(long)(int)uVar1 + 4] = param_3;
    thunk_FUN_03f5d7b8(plVar4 + (long)(int)uVar1 + 4,param_3);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  else {
    plVar4 = (long *)(param_1 + 0x38);
    lVar3 = *plVar4;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(param_1 + 0x30) == *(int *)(lVar3 + 0x18)) {
      uVar1 = *(int *)(param_1 + 0x30) << 1;
      if (0x7feffffe < uVar1) {
        uVar1 = 0x7fefffff;
      }
      lVar3 = FUN_03f5c394(DAT_0917f990,uVar1);
      uVar2 = FUN_03f5c394(DAT_09180318,uVar1);
      System_Array__Copy(*(undefined8 *)(param_1 + 0x38),lVar3,*(undefined4 *)(param_1 + 0x30),0);
      puVar5 = (undefined8 *)(param_1 + 0x40);
      System_Array__Copy(*puVar5,uVar2,*(undefined4 *)(param_1 + 0x30),0);
      *plVar4 = lVar3;
      thunk_FUN_03f5d7b8(plVar4,lVar3);
      *puVar5 = uVar2;
      thunk_FUN_03f5d7b8(puVar5,uVar2);
      lVar3 = *plVar4;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    if (*(uint *)(lVar3 + 0x18) <= *(uint *)(param_1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    puVar5 = (undefined8 *)(lVar3 + (long)(int)*(uint *)(param_1 + 0x30) * 8 + 0x20);
    *puVar5 = param_2;
    thunk_FUN_03f5d7b8(puVar5,param_2);
    plVar4 = *(long **)(param_1 + 0x40);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(param_1 + 0x30);
    if ((param_3 != 0) &&
       (lVar3 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0)) {
      uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,0);
    }
    if (*(uint *)(plVar4 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar4[(long)(int)uVar1 + 4] = param_3;
    thunk_FUN_03f5d7b8(plVar4 + (long)(int)uVar1 + 4,param_3);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  if (local_4c[0] != '\0') {
    System_Threading_Monitor__Exit(local_48,0);
  }
  return;
}


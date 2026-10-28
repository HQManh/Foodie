// rea decompile_all
// name: System.Threading.WaitHandle$$WaitMultiple
// address: 0x76296e4
// body: available
// range: 0x76296e4-0x7629afb inclusive
// range: 0x7629b88-0x7629b8b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76297f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76298a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7629930 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7629a04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7629a18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7629a2c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7629a40 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7629a54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7629a68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7629a7c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7629a90 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7629aa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07629ae4) */
/* WARNING: Removing unreachable block (ram,0x07629af4) */

undefined4
System_Threading_WaitHandle__WaitMultiple
          (long param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong __n;
  uint uVar8;
  undefined8 *__s;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *local_90 [4];
  uint local_6c;
  undefined1 local_68 [4];
  uint local_64;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_60 = param_1;
  if ((DAT_0952219d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801c8);
    FUN_03f5c2a4(&DAT_091def80);
    FUN_03f5c2a4(&DAT_0918cea8);
    DAT_0952219d = 1;
  }
  local_64 = 0;
  local_68[0] = 0;
  local_6c = 0;
  if (param_1 == 0) {
LAB_076299f4:
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else if (*(int *)(param_1 + 0x18) < 0x41) {
    local_64 = 0xffffffff;
    plVar4 = (long *)System_Threading_SynchronizationContext__get_Current();
    local_90[1] = (long *)&local_64;
    lVar10 = 0;
    local_90[0] = (long *)0x0;
    local_90[2] = (long *)&local_6c;
    local_90[3] = &local_60;
    do {
      uVar7 = *(ulong *)(param_1 + 0x18);
      uVar9 = (uint)lVar10;
      if ((int)(uint)uVar7 <= (int)uVar9) {
        if ((plVar4 != (long *)0x0) && ((*(byte *)(plVar4 + 2) & 1) != 0)) {
          lVar10 = FUN_03f5c394(DAT_091801c8);
          if (local_60 == 0) goto LAB_07629898;
          lVar5 = 4;
          goto LAB_0762984c;
        }
        __n = -(uVar7 >> 0x1f & 1) & 0xfffffff800000000 | (uVar7 & 0xffffffff) << 3;
        if ((uVar7 & 0xffffffff) == 0) {
          __s = (undefined8 *)0x0;
        }
        else {
          __s = (undefined8 *)((long)local_90 - (__n + 0xf & 0xfffffffffffffff0));
        }
        memset(__s,0,__n);
        lVar10 = 4;
        puVar11 = __s;
        goto LAB_076298e4;
      }
      local_68[0] = 0;
      if ((uint)uVar7 <= uVar9) {
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        goto LAB_07629b88;
      }
      if ((*(long *)(param_1 + lVar10 * 8 + 0x20) == 0) ||
         (lVar5 = System_Threading_WaitHandle__get_SafeWaitHandle(), lVar5 == 0)) {
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_07629b88;
      }
      System_Runtime_InteropServices_SafeHandle__DangerousAddRef(lVar5,local_68,0);
      lVar10 = lVar10 + 1;
      param_1 = local_60;
      local_64 = uVar9;
    } while (local_60 != 0);
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    uVar3 = 0x7fffffff;
    plVar4 = local_90[3];
LAB_076299c4:
    local_90[3] = plVar4;
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return uVar3;
    }
  }
LAB_07629b88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    if (*(long *)(local_60 + lVar5 * 8) == 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_07629b88;
    }
    lVar6 = System_Threading_WaitHandle__get_SafeWaitHandle();
    if (lVar6 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_07629b88;
    }
    if (lVar10 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_07629b88;
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar9) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_07629b88;
    }
    *(undefined8 *)(lVar10 + lVar5 * 8) = *(undefined8 *)(lVar6 + 0x10);
    lVar5 = lVar5 + 1;
    if (local_60 == 0) break;
LAB_0762984c:
    uVar9 = (int)lVar5 - 4;
    if ((int)*(uint *)(local_60 + 0x18) <= (int)uVar9) {
      uVar3 = (**(code **)(*plVar4 + 0x1b8))
                        (plVar4,lVar10,0,param_2,*(undefined8 *)(*plVar4 + 0x1c0));
      local_6c = local_64;
      plVar4 = local_90[3];
      goto joined_r0x07629978;
    }
    if (*(uint *)(local_60 + 0x18) <= uVar9) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_07629b88;
    }
  }
LAB_07629898:
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_07629b88;
  while( true ) {
    if (uVar9 <= uVar8) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_07629b88;
    }
    if (*(long *)(param_1 + lVar10 * 8) == 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_07629b88;
    }
    lVar5 = System_Threading_WaitHandle__get_SafeWaitHandle();
    param_1 = local_60;
    if (lVar5 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_07629b88;
    }
    lVar10 = lVar10 + 1;
    *puVar11 = *(undefined8 *)(lVar5 + 0x10);
    puVar11 = puVar11 + 1;
    if (param_1 == 0) break;
LAB_076298e4:
    uVar9 = *(uint *)(param_1 + 0x18);
    uVar8 = (int)lVar10 - 4;
    if ((int)uVar9 <= (int)uVar8) {
      if (*(int *)(DAT_0918cea8 + 0xe4) == 0) {
        FUN_03f5c424();
        uVar9 = *(uint *)(param_1 + 0x18);
      }
      uVar3 = FUN_03f6a71c(__s,uVar9,param_4 & 1,param_2);
      local_6c = local_64;
      plVar4 = local_90[3];
      goto joined_r0x07629978;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_07629b88;
joined_r0x07629978:
  plVar2 = local_90[3];
  if ((int)local_6c < 0) goto LAB_076299c4;
  lVar10 = *local_90[3];
  local_90[3] = plVar4;
  if (lVar10 == 0) goto LAB_076299f4;
  if (*(uint *)(lVar10 + 0x18) <= local_6c) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    goto LAB_07629b88;
  }
  if ((*(long *)(lVar10 + (ulong)local_6c * 8 + 0x20) == 0) ||
     (lVar10 = System_Threading_WaitHandle__get_SafeWaitHandle(), lVar10 == 0)) goto LAB_076299f4;
  System_Runtime_InteropServices_SafeHandle__DangerousRelease(lVar10,0);
  local_6c = local_6c - 1;
  plVar4 = local_90[3];
  local_90[3] = plVar2;
  goto joined_r0x07629978;
}


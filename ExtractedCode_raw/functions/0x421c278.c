// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLoader.<ShowCustomer>d__44$$MoveNext
// address: 0x421c278
// body: available
// range: 0x421c278-0x421c8af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x421c5d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c844 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c848 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c84c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c850 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c858 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c85c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c860 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c864 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c868 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c86c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0421c844) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void AnhPD_FoodOrder_CustomerLoader_<ShowCustomer>d__44__MoveNext(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  int local_54;
  
  if ((DAT_09516cfc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c2c08);
    FUN_03f5c2a4(&DAT_091830e8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091bc428);
    FUN_03f5c2a4(&DAT_091bc430);
    FUN_03f5c2a4(&DAT_091bcd08);
    FUN_03f5c2a4(&DAT_091e82d0);
    FUN_03f5c2a4(&DAT_0918f908);
    FUN_03f5c2a4(&DAT_092024b8);
    DAT_09516cfc = 1;
  }
  local_54 = *param_1;
  local_68 = *(long *)(param_1 + 10);
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  if (local_54 == 0) {
LAB_0421c470:
    local_80 = *(undefined8 *)(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    local_54 = -1;
    *param_1 = -1;
LAB_0421c488:
    local_70 = FUN_06209cec(&local_80,DAT_091bc428);
    if (local_70 != 0) {
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(long *)(local_68 + 0x78) = local_70;
      thunk_FUN_03f5d7b8();
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = AnhPD_FoodOrder_CustomerLoader__TryGetCurrentCustomer(local_68,&local_78);
      if ((uVar4 & 1) != 0) {
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = UnityEngine_Component__get_gameObject(local_78,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_GameObject__SetActive(lVar3,1,0);
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_CustomerLoader__SetLeavingSorting(local_68,0);
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_Customer__ChangeState(local_78,0,0,1,0);
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined4 *)(local_68 + 0x70) = 0x3f800000;
        *(undefined8 *)(local_68 + 0x68) = 0x3f80000000000000;
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_Customer__SetTint(0,0,local_78,0);
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_Customer__SetVisualScale(0x3f800000,0,local_78,0);
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_Customer__SetAnimSpeed(0x3f800000,local_78,0);
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(char *)(local_68 + 0x8c) == '\0') {
          if (DAT_09516db3 == '\0') {
            FUN_03f5c2a4(&DAT_0918cb68);
            DAT_09516db3 = '\x01';
          }
          pfVar6 = (float *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x20);
          pfVar7 = (float *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x24);
        }
        else {
          if (DAT_09516db4 == '\0') {
            FUN_03f5c2a4(&DAT_0918cb68);
            DAT_09516db4 = '\x01';
          }
          pfVar6 = (float *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x28);
          pfVar7 = (float *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x2c);
        }
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        fVar15 = *pfVar6;
        fVar14 = *pfVar7;
        AnhPD_FoodOrder_Customer__LocalMoveInstant
                  (fVar15 * *(float *)(local_68 + 0x2c),fVar14 * *(float *)(local_68 + 0x2c),
                   local_78,0);
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        fVar12 = *(float *)(local_68 + 0x30);
        fVar11 = (float)UnityEngine_Random__Range
                                  (1.0 - *(float *)(local_68 + 0x28),
                                   *(float *)(local_68 + 0x28) + 1.0,0);
        iVar1 = param_1[0xe];
        if (*(int *)(DAT_091830e8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = local_78;
        fVar12 = fVar12 * fVar11;
        if (iVar1 < 1) {
          if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          fVar11 = *(float *)(local_68 + 0x2c);
          uVar13 = *(undefined4 *)(local_68 + 0x20);
          uVar2 = AnhPD_FoodOrder_CustomerLoader__WalkStepsFor(fVar11);
          uVar10 = *(undefined8 *)(param_1 + 0x12);
          uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar5,uVar10,DAT_091e82d0,0);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          AnhPD_FoodOrder_Customer__WalkIn
                    (-(fVar15 * fVar11),-(fVar14 * fVar11),fVar12,uVar13,lVar3,uVar2,uVar5,0);
        }
        else {
          if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          fVar11 = *(float *)(local_68 + 0x2c);
          uVar10 = *(undefined8 *)(param_1 + 0x12);
          uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar5,uVar10,DAT_091e82d0,0);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          AnhPD_FoodOrder_Customer__LocalMove
                    (-(fVar15 * fVar11),-(fVar14 * fVar11),fVar12,0,lVar3,uVar5,0x1b,0);
        }
        lVar3 = 0x10;
        goto LAB_0421c7b0;
      }
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_0421c610;
    }
    if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_68 + 0x80) = 0;
  }
  else {
    lVar3 = thunk_FUN_03f9944c(DAT_0918f908);
    System_Object___ctor(lVar3,0);
    plVar9 = (long *)(param_1 + 0x12);
    *plVar9 = lVar3;
    thunk_FUN_03f5d7b8(plVar9,lVar3);
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar9 + 0x10) = *(undefined8 *)(param_1 + 10);
    thunk_FUN_03f5d7b8();
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar9 + 0x18) = *(undefined8 *)(param_1 + 0xc);
    thunk_FUN_03f5d7b8();
    if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_68 + 0x80) = 1;
    if (local_54 == 0) goto LAB_0421c470;
    uVar4 = AnhPD_FoodOrder_CustomerLoader__TryResolveCustomerId
                      (local_68,param_1[0xe],*(undefined8 *)(param_1 + 0x10),&local_70);
    if ((uVar4 & 1) != 0) {
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = AnhPD_FoodOrder_CustomerLoader__LoadOrFallback(local_68,local_70,param_1[0xe]);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_80 = FUN_062ee710(lVar3,DAT_091bcd08);
      uVar4 = FUN_06209cac(&local_80,DAT_091bc430);
      if ((uVar4 & 1) == 0) {
        local_54 = 0;
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x14) = local_80;
        thunk_FUN_03f5d7b8(param_1 + 0x14,0);
        FUN_049bfe7c(param_1 + 2,&local_80,param_1,DAT_091c2c08);
        lVar3 = 7;
        goto LAB_0421c7b0;
      }
      goto LAB_0421c488;
    }
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_092024b8,0);
    if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
LAB_0421c610:
    *(undefined1 *)(local_68 + 0x80) = 0;
  }
  lVar3 = 5;
LAB_0421c7b0:
  if (local_54 < 0) {
    if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(local_68 + 0x80) != '\0') {
      *(undefined1 *)(local_68 + 0x80) = 0;
    }
  }
  if (((uint)lVar3 < 0x11) && ((1 << lVar3 & 0x10021U) != 0)) {
    piVar8 = param_1 + 0x12;
    piVar8[0] = 0;
    piVar8[1] = 0;
    *param_1 = -2;
    thunk_FUN_03f5d7b8(piVar8,0);
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  }
  return;
}


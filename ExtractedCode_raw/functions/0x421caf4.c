// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLoader.<ShowWalkIn>d__46$$MoveNext
// address: 0x421caf4
// body: available
// range: 0x421caf4-0x421d003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x421ce54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421ce60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421cfc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421cfc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421cfc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421cfcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421cfd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421cfd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421cfd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421cfdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421cfe0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421cfe4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLoader_<ShowWalkIn>d__46__MoveNext(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  
  if ((DAT_09516cfd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c2c10);
    FUN_03f5c2a4(&DAT_0919f5e8);
    FUN_03f5c2a4(&DAT_091bc428);
    FUN_03f5c2a4(&DAT_091bc430);
    FUN_03f5c2a4(&DAT_091bcd08);
    FUN_03f5c2a4(&DAT_091e82d8);
    FUN_03f5c2a4(&DAT_0918f910);
    DAT_09516cfd = 1;
  }
  lVar9 = *(long *)(param_1 + 10);
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  if (*param_1 == 0) {
    local_80 = *(undefined8 *)(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
LAB_0421cce8:
    local_70 = FUN_06209cec(&local_80,DAT_091bc428);
    if (local_70 == 0) {
      lVar9 = *(long *)(param_1 + 0x12);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    else {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(long *)(lVar9 + 0x78) = local_70;
      thunk_FUN_03f5d7b8();
      uVar4 = AnhPD_FoodOrder_CustomerLoader__TryGetCurrentCustomer(lVar9,&local_78);
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
        AnhPD_FoodOrder_CustomerLoader__SetLeavingSorting(lVar9,0);
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_Customer__ChangeState(local_78,0,0,0,0);
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_Customer__SetTint(*(undefined4 *)(lVar9 + 0x68),0,local_78,0);
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_Customer__SetVisualScale(*(undefined4 *)(lVar9 + 0x6c),0,local_78,0);
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_Customer__SetAnimSpeed(*(undefined4 *)(lVar9 + 0x70),local_78,0);
        lVar3 = local_78;
        iVar1 = param_1[0x14];
        *(undefined1 *)(lVar9 + 0x65) = 0;
        if ((char)iVar1 != '\0') {
          uVar11 = *(undefined8 *)(param_1 + 0x12);
          uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar5,uVar11,DAT_091e82d8,0);
          uVar4 = AnhPD_FoodOrder_CustomerLoader__TryWalkInFromEdge(lVar9,lVar3,uVar5);
          if ((uVar4 & 1) != 0) goto LAB_0421cf78;
        }
        if (*(char *)(lVar9 + 0x8c) == '\0') {
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
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        fVar15 = *pfVar7;
        fVar16 = *pfVar6;
        AnhPD_FoodOrder_Customer__LocalMoveInstant
                  (fVar16 * *(float *)(lVar9 + 0x2c),fVar15 * *(float *)(lVar9 + 0x2c),local_78,0);
        fVar17 = *(float *)(lVar9 + 0x30);
        fVar12 = (float)UnityEngine_Random__Range
                                  (1.0 - *(float *)(lVar9 + 0x28),*(float *)(lVar9 + 0x28) + 1.0,0);
        lVar3 = local_78;
        fVar14 = *(float *)(lVar9 + 0x2c);
        uVar13 = *(undefined4 *)(lVar9 + 0x20);
        uVar2 = AnhPD_FoodOrder_CustomerLoader__WalkStepsFor(fVar14,lVar9);
        uVar11 = *(undefined8 *)(param_1 + 0x12);
        uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar5,uVar11,DAT_091e82d8,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_Customer__WalkIn
                  (-(fVar16 * fVar14),-(fVar15 * fVar14),fVar17 * fVar12,uVar13,lVar3,uVar2,uVar5,0)
        ;
        goto LAB_0421cf78;
      }
      lVar9 = *(long *)(param_1 + 0x12);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  else {
    lVar3 = thunk_FUN_03f9944c(DAT_0918f910);
    System_Object___ctor(lVar3,0);
    plVar10 = (long *)(param_1 + 0x12);
    *plVar10 = lVar3;
    thunk_FUN_03f5d7b8(plVar10,lVar3);
    if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar10 + 0x10) = *(undefined8 *)(param_1 + 10);
    thunk_FUN_03f5d7b8();
    if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar10 + 0x18) = *(undefined8 *)(param_1 + 0xc);
    thunk_FUN_03f5d7b8();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar9 + 0x78) != 0) {
      if (*(long *)(lVar9 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = FUN_06fd9fbc(*(long *)(lVar9 + 0xb0),*(long *)(lVar9 + 0x78),&local_68,DAT_0919f5e8);
      if ((uVar4 & 1) != 0) {
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = UnityEngine_Component__get_gameObject(local_68,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_GameObject__SetActive(lVar3,0,0);
      }
    }
    uVar4 = AnhPD_FoodOrder_CustomerLoader__TryResolveCustomerId
                      (lVar9,param_1[0xe],*(undefined8 *)(param_1 + 0x10),&local_70);
    if ((uVar4 & 1) != 0) {
      lVar3 = AnhPD_FoodOrder_CustomerLoader__LoadOrFallback(lVar9,local_70,param_1[0xe]);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_80 = FUN_062ee710(lVar3,DAT_091bcd08);
      uVar4 = FUN_06209cac(&local_80,DAT_091bc430);
      if ((uVar4 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x16) = local_80;
        thunk_FUN_03f5d7b8(param_1 + 0x16,0);
        FUN_049c00ec(param_1 + 2,&local_80,param_1,DAT_091c2c10);
        return;
      }
      goto LAB_0421cce8;
    }
    lVar9 = *plVar10;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  lVar9 = *(long *)(lVar9 + 0x18);
  if (lVar9 != 0) {
    (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
  }
LAB_0421cf78:
  piVar8 = param_1 + 0x12;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *param_1 = -2;
  thunk_FUN_03f5d7b8(piVar8,0);
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


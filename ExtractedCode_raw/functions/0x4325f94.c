// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMainDetailsMode.<WaitLoadMapAndUpdateButtons>d__57$$MoveNext
// address: 0x4325f94
// body: available
// range: 0x4325f94-0x432642b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43263f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43263f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43263f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43263fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4326400 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4326404 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4326408 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432640c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4326410 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4326414 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4326418 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432641c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMainDetailsMode_<WaitLoadMapAndUpdateButtons>d__57__MoveNext
               (int *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong uStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong local_78;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09517675 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1d60);
    FUN_03f5c2a4(&DAT_0919a500);
    FUN_03f5c2a4(&DAT_0919a508);
    FUN_03f5c2a4(&DAT_091ba240);
    FUN_03f5c2a4(&DAT_091ba260);
    FUN_03f5c2a4(&DAT_091ba270);
    FUN_03f5c2a4(&DAT_091bdd50);
    FUN_03f5c2a4(&DAT_091ddb58);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09517675 = 1;
  }
  lVar8 = *(long *)(param_1 + 6);
  local_b8 = 0;
  uStack_a8 = 0;
  local_b0 = (long *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = (long *)0x0;
  local_78 = 0;
  uStack_80 = 0;
  if (*param_1 == 0) {
    uStack_88 = *(undefined8 *)(param_1 + 0xe);
    local_90 = *(long **)(param_1 + 0xc);
    local_78 = *(ulong *)(param_1 + 0x12);
    uStack_80 = *(undefined8 *)(param_1 + 0x10);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(lVar8 + 0xe0) = 0;
    if (*(long *)(lVar8 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *(long *)(*(long *)(lVar8 + 0x48) + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar7 = (long *)(param_1 + 8);
    *plVar7 = *(long *)(lVar3 + 0x30);
    thunk_FUN_03f5d7b8(plVar7);
    if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(*plVar7 + 0x18);
    thunk_FUN_03f5d7b8();
    if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *(long *)(*plVar7 + 0x30);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_060da5e0(&local_120,lVar3,DAT_091ba260);
    uStack_d8 = uStack_118;
    local_e0 = local_120;
    local_d0 = local_110;
    if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *(long *)(*plVar7 + 0x38);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_060da5e0(&local_120,lVar3,DAT_091ba240);
    uStack_f8 = uStack_118;
    local_100 = local_120;
    local_f0 = local_110;
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_48 = uStack_d8;
    local_50 = local_e0;
    local_40 = local_d0;
    uStack_68 = uStack_f8;
    local_70 = local_100;
    local_60 = local_f0;
    FUN_04e146c8(&local_120,&local_50,&local_70,DAT_091ddb58);
    uStack_98 = uStack_108;
    uStack_a0 = local_110;
    uStack_a8 = uStack_118;
    local_b0 = local_120;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    uStack_108 = 0;
    local_110 = 0;
    if ((*(byte *)(*(long *)(DAT_091bdd50 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_118 = uStack_a8;
    local_120 = local_b0;
    uStack_108 = uStack_98;
    local_110 = uStack_a0;
    thunk_FUN_03f5d7b8(&local_120,0);
    uStack_88 = uStack_118;
    local_90 = local_120;
    local_78 = uStack_108;
    uStack_80 = local_110;
    uVar1 = FUN_04340364(&local_90,DAT_0919a508);
    if ((uVar1 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = uStack_88;
      *(long **)(param_1 + 0xc) = local_90;
      *(ulong *)(param_1 + 0x12) = local_78;
      *(undefined8 *)(param_1 + 0x10) = uStack_80;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_0434044c(param_1 + 2,&local_90,param_1,DAT_091c1d60);
      return;
    }
  }
  plVar7 = local_90;
  if (local_90 != (long *)0x0) {
    uVar1 = local_78 & 0xffff;
    lVar3 = *(long *)(DAT_0919a500 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04326284;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar7,lVar3,0);
LAB_04326284:
    (*(code *)*puVar2)(plVar7,uVar1,puVar2[1]);
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = CakeOrder_BaseUI_UIElementAbstract__get_IsShowing(lVar8,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(lVar8 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *(long *)(*(long *)(lVar8 + 0x48) + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = System_String__op_Inequality
                      (*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(param_1 + 10),0);
    if ((uVar1 & 1) == 0) {
      *(undefined1 *)(lVar8 + 0xe0) = 1;
      CakeOrder_Home_UIHomeTabPageMainDetailsMode__UpdateAndShowElements(lVar8,0);
      if (*(int *)(lVar8 + 100) != 0) {
        if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x30);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *(long *)(lVar3 + 0x60);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = CakeOrder_DataSO_MapUpgradeConfig__IsHaveUpgradeAvailable(lVar3,0);
        if ((uVar1 & 1) != 0) {
          if (*(long *)(lVar8 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0x68) + 0x28);
          if (lVar8 != 0) {
            UnityEngine_GameObject__SetActive(lVar8,1,0);
          }
        }
      }
    }
  }
  *param_1 = -2;
  piVar6 = param_1 + 8;
  piVar6[0] = 0;
  piVar6[1] = 0;
  thunk_FUN_03f5d7b8(piVar6,0);
  piVar6 = param_1 + 10;
  piVar6[0] = 0;
  piVar6[1] = 0;
  thunk_FUN_03f5d7b8(piVar6,0);
  if (DAT_095162d8 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar7 = *(long **)(param_1 + 2);
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar1 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091866a8) {
          puVar2 = (undefined8 *)(lVar8 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_043263d0;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091866a8,2);
LAB_043263d0:
    (*(code *)*puVar2)(plVar7,puVar2[1]);
  }
  return;
}


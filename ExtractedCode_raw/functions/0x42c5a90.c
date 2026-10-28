// rea decompile_all
// name: CakeOrder.UI.UIBuildingRewardBubble.<ShowAsync>d__13$$MoveNext
// address: 0x42c5a90
// body: available
// range: 0x42c5a90-0x42c5fd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c5fa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c5fa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c5fa8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c5fac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c5fb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c5fb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c5fb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c5fbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c5fc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c5fc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c5fc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c5fcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIBuildingRewardBubble_<ShowAsync>d__13__MoveNext(int *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *local_a0;
  long lStack_98;
  ulong local_90;
  undefined4 local_78;
  long *local_70;
  long lStack_68;
  ulong local_60;
  long *local_50;
  long lStack_48;
  ulong local_40;
  
  if ((DAT_09517349 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c27d0);
    FUN_03f5c2a4(&DAT_0919a680);
    FUN_03f5c2a4(&DAT_0919a688);
    FUN_03f5c2a4(&DAT_091c5838);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091d4a80);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba260);
    FUN_03f5c2a4(&DAT_091bdeb8);
    DAT_09517349 = 1;
  }
  local_50 = (long *)0x0;
  lStack_48 = 0;
  local_40 = 0;
  lVar9 = *(long *)(param_1 + 4);
  local_70 = (long *)0x0;
  lStack_68 = 0;
  local_60 = 0;
  local_78 = 0;
  if (*param_1 == 0) {
    local_40 = *(ulong *)(param_1 + 0xc);
    lStack_48 = *(long *)(param_1 + 10);
    local_50 = *(long **)(param_1 + 8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar10 = *(undefined8 *)(lVar9 + 0x30);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar10,0);
    lVar4 = DAT_09188ad0;
    if ((uVar3 & 1) == 0) goto LAB_042c5f78;
    plVar11 = (long *)(lVar9 + 0x58);
    lVar12 = *plVar11;
    iVar1 = *(int *)(lVar9 + 100) + 1;
    *(int *)(lVar9 + 100) = iVar1;
    param_1[6] = iVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(lVar12,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = FUN_04c34aa0(DAT_091d4a80);
      *plVar11 = lVar4;
      thunk_FUN_03f5d7b8(plVar11);
    }
    lVar4 = *plVar11;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
    if ((uVar3 & 1) == 0) goto LAB_042c5f78;
    if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(*plVar11 + 0x30);
    if (lVar4 == 0) goto LAB_042c5f78;
    lVar4 = *(long *)(lVar4 + 0x30);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_060da5e0(&local_a0,lVar4,DAT_091ba260);
    local_60 = local_90;
    lStack_68 = lStack_98;
    lStack_98 = 0;
    local_90 = 0;
    local_70 = local_a0;
    local_a0 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdeb8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    lStack_98 = lStack_68;
    local_a0 = local_70;
    local_90 = local_60;
    thunk_FUN_03f5d7b8(&local_a0,0);
    lStack_48 = lStack_98;
    local_50 = local_a0;
    local_40 = local_90;
    uVar3 = FUN_041e5390(&local_50,DAT_0919a688);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(long *)(param_1 + 10) = lStack_48;
      *(long **)(param_1 + 8) = local_50;
      *(ulong *)(param_1 + 0xc) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 8,0);
      FUN_042daea0(param_1 + 2,&local_50,param_1,DAT_091c27d0);
      return;
    }
  }
  plVar11 = local_50;
  lVar4 = lStack_48;
  if (local_50 != (long *)0x0) {
    uVar3 = local_40 & 0xffff;
    lVar4 = *(long *)(DAT_0919a680 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c(lVar4);
    }
    lVar12 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar12 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_042c5da8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar11,lVar4,0);
LAB_042c5da8:
    lVar4 = (*(code *)*puVar5)(plVar11,uVar3,puVar5[1]);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (param_1[6] == *(int *)(lVar9 + 100)) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(lVar9,0,0);
    if (((uVar3 & 1) == 0) &&
       (uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled(lVar9,0), (uVar3 & 1) != 0)) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        lVar12 = *(long *)(DAT_091b4a58 + 0x20);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (**(long **)(lVar12 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__IsClaimedFullBuildingUpgradeReward
                          (**(long **)(lVar12 + 0xb8),*(undefined8 *)(lVar4 + 0x40),0);
        uVar2 = uVar2 & 1;
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(lVar4,0,0);
      if ((uVar3 & 1) == 0) {
        if (uVar2 == 0) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          puVar5 = (undefined8 *)(lVar4 + 0x30);
        }
        else {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          puVar5 = (undefined8 *)(lVar4 + 0x38);
        }
        uVar10 = *puVar5;
      }
      else {
        uVar10 = 0;
      }
      uVar3 = CakeOrder_UI_UIBuildingRewardBubble__Fill(lVar9,uVar10,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(lVar9 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = FUN_04a6ac70(*(long *)(lVar9 + 0x30),1,DAT_091c5838);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = *(uint *)(lVar4 + 0x18);
        if (0 < (int)uVar2) {
          lVar12 = 0;
          do {
            if (uVar2 <= (uint)lVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar6 = *(long *)(lVar4 + 0x20 + lVar12 * 8);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_UI_MaskableGraphic__set_maskable(lVar6,0,0);
            uVar2 = *(uint *)(lVar4 + 0x18);
            lVar12 = lVar12 + 1;
          } while ((int)lVar12 < (int)uVar2);
        }
        if (*(long *)(lVar9 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar9 + 0x30),0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_GameObject__SetActive(lVar4,1,0);
        CakeOrder_UI_UIBuildingRewardBubble__DrawAboveEverything(lVar9,0);
        *(undefined1 *)(lVar9 + 0x60) = 1;
      }
    }
  }
LAB_042c5f78:
  *param_1 = -2;
  FUN_042dada8(param_1 + 2,0);
  return;
}


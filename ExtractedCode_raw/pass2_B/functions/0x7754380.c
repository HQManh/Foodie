// rea decompile_all
// name: _GAME.GameUI.DropItemController.<DropCloneAsync>d__77$$MoveNext
// address: 0x7754380
// body: available
// range: 0x7754380-0x7754a0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77549dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77549e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77549e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77549e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77549ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77549f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77549f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77549f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77549fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7754a00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7754a04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7754a08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_GameUI_DropItemController_<DropCloneAsync>d__77__MoveNext
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 local_c0;
  int *piStack_b8;
  int **local_b0;
  undefined8 *puStack_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [2];
  int local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  int local_4c;
  int *local_48;
  
  local_48 = param_4;
  if ((DAT_09522bd1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199a80);
    FUN_03f5c2a4(&DAT_09199b28);
    FUN_03f5c2a4(&DAT_0919a5c0);
    FUN_03f5c2a4(&DAT_0919a5c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bde20);
    DAT_09522bd1 = 1;
  }
  local_4c = *param_4;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_78 = 0;
  local_98 = 0;
  uStack_90 = 0;
  if (local_4c == 0) {
LAB_077545fc:
    local_a0 = &local_98;
    puStack_a8 = &uStack_90;
    local_b0 = &local_48;
    piStack_b8 = &local_4c;
    local_c0 = 0;
    local_60 = *(undefined1 (*) [16])(param_4 + 0x1a);
    param_4[0x1a] = 0;
    param_4[0x1b] = 0;
    param_4[0x1c] = 0;
    param_4[0x1d] = 0;
    local_4c = -1;
    *param_4 = -1;
LAB_07754614:
    uVar9 = local_60._0_8_;
    if ((long *)local_60._0_8_ == (long *)0x0) {
      iVar2 = local_60._8_4_;
    }
    else {
      uVar1 = local_60._12_2_;
      lVar5 = *(long *)(DAT_0919a5c0 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c(lVar5);
      }
      lVar6 = *(long *)uVar9;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_077546b0;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(uVar9,lVar5,0);
LAB_077546b0:
      iVar2 = (*(code *)*puVar3)(uVar9,uVar1,puVar3[1]);
    }
  }
  else {
    if (*(long *)(param_4 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar3 = (undefined8 *)(*(long *)(param_4 + 8) + 0x10);
    uVar9 = *puVar3;
    *puVar3 = 0;
    thunk_FUN_03f5d7b8(puVar3,0);
    *(undefined8 *)(local_48 + 0x14) = uVar9;
    thunk_FUN_03f5d7b8(local_48 + 0x14,uVar9);
    piVar7 = local_48 + 0x16;
    piVar7[0] = 0;
    piVar7[1] = 0;
    thunk_FUN_03f5d7b8(piVar7,0);
    puStack_a8 = &uStack_90;
    local_48[0x18] = -1;
    piStack_b8 = &local_4c;
    local_c0 = 0;
    local_b0 = &local_48;
    local_a0 = &local_98;
    *(undefined1 *)(local_48 + 0x19) = 0;
    param_4 = local_48;
    if (local_4c == 0) goto LAB_077545fc;
    uVar9 = *(undefined8 *)(local_48 + 0x14);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar9,0,0);
    if ((uVar4 & 1) == 0) {
      uVar9 = _GAME_GameUI_DropItemController__RespawnCloneItemDrop();
      *(undefined8 *)(local_48 + 0x16) = uVar9;
      thunk_FUN_03f5d7b8();
      uVar9 = *(undefined8 *)(local_48 + 0x16);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Equality(uVar9,0,0);
      if ((uVar4 & 1) != 0) goto LAB_077545d8;
      if (*(long *)(local_48 + 0x16) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_48[0x18] = *(int *)(*(long *)(local_48 + 0x16) + 0x58);
      if (*(long *)(local_48 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = UnityEngine_GameObject__get_transform(*(long *)(local_48 + 0x14),0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar12 = UnityEngine_Transform__get_position(lVar5,0);
      if (*(long *)(local_48 + 0x16) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = UnityEngine_Component__get_transform(*(long *)(local_48 + 0x16),0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Transform__set_position(uVar12,param_2,param_3,lVar5,0);
      if (*(long *)(local_48 + 0x16) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_GameUI_CloneItemDropCtrl__SetCloneObj
                (*(long *)(local_48 + 0x16),*(undefined8 *)(local_48 + 0x14));
      if (*(long *)(local_48 + 0x16) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = *(undefined8 *)(*(long *)(local_48 + 0x16) + 0x60);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Equality(uVar9,0,0);
      if ((uVar4 & 1) != 0) goto LAB_077545d8;
      uVar9 = *(undefined8 *)(local_48 + 0x14);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Equality(uVar9,0,0);
      if ((uVar4 & 1) != 0) goto LAB_077545d8;
      if (*(long *)(local_48 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = UnityEngine_GameObject__get_transform(*(long *)(local_48 + 0x14),0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = UnityEngine_Transform__GetParent(lVar5,0);
      if (*(long *)(local_48 + 0x16) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar11 = *(undefined8 *)(*(long *)(local_48 + 0x16) + 0x60);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar9,uVar11,0);
      iVar2 = 1;
      if ((uVar4 & 1) != 0) goto LAB_077546c4;
      *(undefined1 *)(local_48 + 0x19) = 1;
      if (*(long *)(local_48 + 0x16) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_70 = _GAME_GameUI_RwItemDropCtrl__PlayDropAsync
                           (uVar12,param_2,param_3,local_48[10],local_48[0xb],local_48[0xc],
                            *(long *)(local_48 + 0x16),*(undefined8 *)(local_48 + 0xe),
                            *(undefined8 *)(local_48 + 0x10),0);
      local_60 = FUN_03ebd820(local_70,DAT_091bde20);
      uVar4 = FUN_0429cb44(local_60,DAT_0919a5c8);
      if ((uVar4 & 1) == 0) {
        local_4c = 0;
        *local_48 = 0;
        *(undefined1 (*) [16])(local_48 + 0x1a) = local_60;
        thunk_FUN_03f5d7b8(local_48 + 0x1a,0);
        FUN_04791574(local_48 + 2,local_60,local_48,DAT_09199a80);
        iVar2 = 0;
        iVar8 = 10;
        goto LAB_077546c8;
      }
      goto LAB_07754614;
    }
LAB_077545d8:
    iVar2 = 1;
  }
LAB_077546c4:
  iVar8 = 5;
LAB_077546c8:
  FUN_03ebd874(&local_c0);
  if (iVar8 == 5) {
    *local_48 = -2;
    piVar7 = local_48 + 0x14;
    piVar7[0] = 0;
    piVar7[1] = 0;
    thunk_FUN_03f5d7b8(piVar7,0);
    piVar7 = local_48 + 0x16;
    piVar7[0] = 0;
    piVar7[1] = 0;
    thunk_FUN_03f5d7b8(piVar7,0);
    plVar10 = *(long **)(local_48 + 2);
    if (plVar10 == (long *)0x0) {
      local_48[6] = iVar2;
    }
    else {
      lVar5 = *(long *)(DAT_09199b28 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c(lVar5);
      }
      lVar6 = *plVar10;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_077548a0;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar10,lVar5,2);
LAB_077548a0:
      (*(code *)*puVar3)(plVar10,iVar2,puVar3[1]);
    }
  }
  else if (iVar8 == 0) {
    uVar9 = auStack_88[local_78 + -1];
    *local_48 = -2;
    piVar7 = local_48 + 0x14;
    piVar7[0] = 0;
    piVar7[1] = 0;
    thunk_FUN_03f5d7b8(piVar7,0);
    piVar7 = local_48 + 0x16;
    piVar7[0] = 0;
    piVar7[1] = 0;
    thunk_FUN_03f5d7b8(piVar7,0);
    piVar7 = local_48;
    lVar5 = thunk_FUN_03fc39d4(&DAT_09199b20);
    plVar10 = *(long **)(piVar7 + 2);
    if (plVar10 == (long *)0x0) {
      piVar7 = piVar7 + 4;
      *(undefined8 *)piVar7 = uVar9;
      thunk_FUN_03f5d7b8(piVar7,uVar9);
    }
    else {
      lVar5 = *(long *)(lVar5 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c(lVar5);
      }
      lVar6 = *plVar10;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_07754878;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar10,lVar5,3);
LAB_07754878:
      (*(code *)*puVar3)(plVar10,uVar9,puVar3[1]);
    }
  }
  return;
}


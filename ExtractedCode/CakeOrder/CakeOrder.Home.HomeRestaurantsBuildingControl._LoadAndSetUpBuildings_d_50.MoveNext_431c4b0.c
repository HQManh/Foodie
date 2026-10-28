// rea decompile_all
// name: CakeOrder.Home.HomeRestaurantsBuildingControl.<LoadAndSetUpBuildings>d__50$$MoveNext
// address: 0x431c4b0
// body: available
// range: 0x431c4b0-0x431cf93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x431cf48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431cf4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431cf50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431cf54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431cf58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431cf5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431cf60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431cf64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431cf68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431cf6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431cf70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431cf74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeRestaurantsBuildingControl_<LoadAndSetUpBuildings>d__50__MoveNext
               (int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 local_140 [16];
  ulong local_130;
  undefined4 local_118;
  undefined1 local_110 [16];
  long *local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  long *local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  long *local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  long *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  long *local_80;
  undefined8 uStack_78;
  ulong local_70;
  long *local_60;
  undefined8 uStack_58;
  ulong local_50;
  
  piVar3 = param_1;
  if ((DAT_09517634 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1e60);
    FUN_03f5c2a4(&DAT_091c1e50);
    FUN_03f5c2a4(&DAT_091c1e20);
    FUN_03f5c2a4(&DAT_091c2008);
    FUN_03f5c2a4(&DAT_0919a680);
    FUN_03f5c2a4(&DAT_0919a660);
    FUN_03f5c2a4(&DAT_0919a5e0);
    FUN_03f5c2a4(&DAT_0919a668);
    FUN_03f5c2a4(&DAT_0919a5e8);
    FUN_03f5c2a4(&DAT_0919a688);
    FUN_03f5c2a4(&DAT_091ba1e8);
    FUN_03f5c2a4(&DAT_091ba220);
    FUN_03f5c2a4(&DAT_091ba260);
    FUN_03f5c2a4(&DAT_091ba1f0);
    FUN_03f5c2a4(&DAT_091bde48);
    FUN_03f5c2a4(&DAT_091bdeb8);
    FUN_03f5c2a4(&DAT_091bdea0);
    piVar3 = (int *)FUN_03f5c2a4(&DAT_0918c610);
    DAT_09517634 = 1;
  }
  iVar2 = *param_1;
  lVar10 = *(long *)(param_1 + 6);
  local_60 = (long *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_80 = (long *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_e0 = (long *)0x0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_100 = (long *)0x0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_110._0_8_ = 0;
  local_110._8_8_ = 0;
  local_118 = 0;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      local_50 = *(ulong *)(param_1 + 0x16);
      uStack_58 = *(undefined8 *)(param_1 + 0x14);
      local_60 = *(long **)(param_1 + 0x12);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
LAB_0431c7a8:
      plVar7 = local_60;
      uVar6 = uStack_58;
      if (local_60 != (long *)0x0) {
        uVar11 = local_50 & 0xffff;
        lVar4 = *(long *)(DAT_0919a5e0 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c(lVar4);
        }
        lVar8 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar3 + -2) == lVar4) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
              goto LAB_0431c868;
            }
            uVar9 = uVar9 - 1;
            piVar3 = piVar3 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar7,lVar4,0);
LAB_0431c868:
        uVar6 = (*(code *)*puVar5)(plVar7,uVar11,puVar5[1]);
      }
      *(undefined8 *)(param_1 + 0xc) = uVar6;
      thunk_FUN_03f5d7b8();
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *(long *)(*(long *)(param_1 + 10) + 0x28);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_060da5e0(local_140,lVar4,DAT_091ba220);
      local_b0 = local_130;
      uStack_b8 = local_140._8_8_;
      local_140._8_8_ = 0;
      local_130 = 0;
      local_c0 = (long *)local_140._0_8_;
      local_140._0_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bdea0 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_140._8_8_ = uStack_b8;
      local_140._0_8_ = local_c0;
      local_130 = local_b0;
      thunk_FUN_03f5d7b8(local_140,0);
      uStack_98 = local_140._8_8_;
      local_a0 = (long *)local_140._0_8_;
      local_90 = local_130;
      uVar11 = FUN_041e5390(&local_a0,DAT_0919a668);
      if ((uVar11 & 1) == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x1a) = uStack_98;
        *(long **)(param_1 + 0x18) = local_a0;
        *(ulong *)(param_1 + 0x1c) = local_90;
        thunk_FUN_03f5d7b8(param_1 + 0x18,0);
        FUN_043248e4(param_1 + 2,&local_a0,param_1,DAT_091c1e50);
        return;
      }
    }
    else {
      if (iVar2 != 1) {
LAB_0431c654:
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar10 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar11 = CakeOrder_Home_HomeSelectionControl__CanShowMap(piVar3,param_1[8]);
        if ((uVar11 & 1) == 0) goto LAB_0431ce20;
        if (*(long *)(lVar10 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = CakeOrder_Home_HomeSelectionControl__GetMapSectionLoadData
                          (*(long *)(lVar10 + 0x90),param_1[8]);
        plVar7 = (long *)(param_1 + 10);
        *plVar7 = lVar4;
        thunk_FUN_03f5d7b8(plVar7);
        if (*plVar7 == 0) goto LAB_0431ce20;
        lVar4 = *(long *)(*plVar7 + 0x48);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_060da4b4(lVar4,*(undefined8 *)(lVar10 + 0x20),DAT_091ba1f0);
        FUN_060da5e0(local_140,lVar4,DAT_091ba1e8);
        local_70 = local_130;
        uStack_78 = local_140._8_8_;
        local_140._8_8_ = 0;
        local_130 = 0;
        local_80 = (long *)local_140._0_8_;
        local_140._0_8_ = 0;
        if ((*(byte *)(*(long *)(DAT_091bde48 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        local_140._8_8_ = uStack_78;
        local_140._0_8_ = local_80;
        local_130 = local_70;
        thunk_FUN_03f5d7b8(local_140,0);
        uStack_58 = local_140._8_8_;
        local_60 = (long *)local_140._0_8_;
        local_50 = local_130;
        uVar11 = FUN_041e5390(&local_60,DAT_0919a5e8);
        if ((uVar11 & 1) == 0) {
          *param_1 = 0;
          *(undefined8 *)(param_1 + 0x14) = uStack_58;
          *(long **)(param_1 + 0x12) = local_60;
          *(ulong *)(param_1 + 0x16) = local_50;
          thunk_FUN_03f5d7b8(param_1 + 0x12,0);
          FUN_043248e4(param_1 + 2,&local_60,param_1,DAT_091c1e20);
          return;
        }
        goto LAB_0431c7a8;
      }
      local_90 = *(ulong *)(param_1 + 0x1c);
      uStack_98 = *(undefined8 *)(param_1 + 0x1a);
      local_a0 = *(long **)(param_1 + 0x18);
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
    }
    plVar7 = local_a0;
    uVar6 = uStack_98;
    if (local_a0 != (long *)0x0) {
      uVar11 = local_90 & 0xffff;
      lVar4 = *(long *)(DAT_0919a660 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c(lVar4);
      }
      lVar8 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == lVar4) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
            goto LAB_0431ca04;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar7,lVar4,0);
LAB_0431ca04:
      uVar6 = (*(code *)*puVar5)(plVar7,uVar11,puVar5[1]);
    }
    *(undefined8 *)(param_1 + 0xe) = uVar6;
    thunk_FUN_03f5d7b8();
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 10) + 0x30);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_060da5e0(local_140,lVar4,DAT_091ba260);
    local_f0 = local_130;
    uStack_f8 = local_140._8_8_;
    local_140._8_8_ = 0;
    local_130 = 0;
    local_100 = (long *)local_140._0_8_;
    local_140._0_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bdeb8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_140._8_8_ = uStack_f8;
    local_140._0_8_ = local_100;
    local_130 = local_f0;
    thunk_FUN_03f5d7b8(local_140,0);
    uStack_d8 = local_140._8_8_;
    local_e0 = (long *)local_140._0_8_;
    local_d0 = local_130;
    uVar11 = FUN_041e5390(&local_e0,DAT_0919a688);
    if ((uVar11 & 1) == 0) {
      *param_1 = 2;
      *(undefined8 *)(param_1 + 0x20) = uStack_d8;
      *(long **)(param_1 + 0x1e) = local_e0;
      *(ulong *)(param_1 + 0x22) = local_d0;
      thunk_FUN_03f5d7b8(param_1 + 0x1e,0);
      FUN_043248e4(param_1 + 2,&local_e0,param_1,DAT_091c1e60);
      return;
    }
LAB_0431cac0:
    plVar7 = local_e0;
    uVar6 = uStack_d8;
    if (local_e0 != (long *)0x0) {
      uVar11 = local_d0 & 0xffff;
      lVar4 = *(long *)(DAT_0919a680 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c(lVar4);
      }
      lVar8 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == lVar4) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
            goto LAB_0431cba0;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar7,lVar4,0);
LAB_0431cba0:
      uVar6 = (*(code *)*puVar5)(plVar7,uVar11,puVar5[1]);
    }
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    thunk_FUN_03f5d7b8();
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xc),0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_Home_HomeRestaurantsBuildingControl__GetBuildingPosition(lVar10,param_1[8]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Transform__set_position(lVar4,0);
    if (*(long *)(lVar10 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(param_1 + 0xc);
    uVar6 = CakeOrder_MapLevelMetadataConfig__GetLevelConfig
                      (*(long *)(param_1 + 0xe),*(undefined4 *)(*(long *)(lVar10 + 0x90) + 0x2c),0);
    if (*(long *)(lVar10 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar6,uVar6);
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar6,uVar6);
    }
    auVar12 = CakeOrder_Home_HomeMapBuildingBase__SetLevelConfig
                        (lVar4,uVar6,*(undefined4 *)(*(long *)(lVar10 + 0x90) + 0x2c));
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_140 = auVar12;
    thunk_FUN_03f5d7b8(local_140,0);
    uVar1 = local_140._8_8_;
    uVar6 = local_140._0_8_;
    local_110 = local_140;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    if ((long *)uVar6 != (long *)0x0) {
      lVar4 = *(long *)uVar6;
      uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar11 != 0) {
        piVar3 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar3 * 0x10 + 0x138);
            goto LAB_0431cd18;
          }
          uVar11 = uVar11 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(uVar6,DAT_091868c0,0);
LAB_0431cd18:
      iVar2 = (*(code *)*puVar5)(uVar6,uVar1 & 0xffffffff,puVar5[1]);
      if (iVar2 == 0) {
        *param_1 = 3;
        *(undefined1 (*) [16])(param_1 + 0x24) = local_110;
        thunk_FUN_03f5d7b8(param_1 + 0x24,0);
        FUN_043249f0(param_1 + 2,local_110,param_1,DAT_091c2008);
        return;
      }
    }
  }
  else {
    if (iVar2 == 2) {
      local_d0 = *(ulong *)(param_1 + 0x22);
      uStack_d8 = *(undefined8 *)(param_1 + 0x20);
      local_e0 = *(long **)(param_1 + 0x1e);
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      *param_1 = -1;
      goto LAB_0431cac0;
    }
    if (iVar2 != 3) goto LAB_0431c654;
    local_110 = *(undefined1 (*) [16])(param_1 + 0x24);
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *param_1 = -1;
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar6 = local_110._0_8_;
  if ((long *)local_110._0_8_ != (long *)0x0) {
    lVar4 = *(long *)local_110._0_8_;
    uVar9 = local_110._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar11 != 0) {
      piVar3 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar3 + 2) * 0x10 + 0x138);
          goto LAB_0431cdb0;
        }
        uVar11 = uVar11 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_110._0_8_,DAT_091868c0,2);
LAB_0431cdb0:
    (*(code *)*puVar5)(uVar6,uVar9,puVar5[1]);
  }
  if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_Home_HomeMapBuildingBase__BindUpgradeConfig
            (*(long *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0x10));
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(int *)(lVar10 + 100) == param_1[8]) || (*(int *)(lVar10 + 0x6c) == param_1[8])) {
    plVar7 = *(long **)(param_1 + 0xc);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
  }
  else {
    plVar7 = *(long **)(param_1 + 0xc);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
  }
LAB_0431ce20:
  *param_1 = -2;
  piVar3 = param_1 + 10;
  piVar3[0] = 0;
  piVar3[1] = 0;
  thunk_FUN_03f5d7b8(piVar3,0);
  piVar3 = param_1 + 0xc;
  piVar3[0] = 0;
  piVar3[1] = 0;
  thunk_FUN_03f5d7b8(piVar3,0);
  piVar3 = param_1 + 0xe;
  piVar3[0] = 0;
  piVar3[1] = 0;
  thunk_FUN_03f5d7b8(piVar3,0);
  piVar3 = param_1 + 0x10;
  piVar3[0] = 0;
  piVar3[1] = 0;
  thunk_FUN_03f5d7b8(piVar3,0);
  if (DAT_095162d8 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar7 = *(long **)(param_1 + 2);
  if (plVar7 != (long *)0x0) {
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar3 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar3 + 2) * 0x10 + 0x138);
          goto LAB_0431cee8;
        }
        uVar11 = uVar11 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091866a8,2);
LAB_0431cee8:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  return;
}


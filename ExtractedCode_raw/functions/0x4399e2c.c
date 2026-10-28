// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl.<LoadNextLevelWeatherCore>d__93$$MoveNext
// address: 0x4399e2c
// body: available
// range: 0x4399e2c-0x439a6d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x439a10c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439a6a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439a6a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439a6b0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439a6b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439a6b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439a6bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439a6c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439a6c8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439a6cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439a6d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439a6d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0439a41c) */
/* WARNING: Removing unreachable block (ram,0x0439a6ac) */
/* WARNING: Removing unreachable block (ram,0x0439a6c4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CakeOrder_InGame_LevelPlayLoadAndSetupControl_<LoadNextLevelWeatherCore>d__93__MoveNext
               (int *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_180;
  int *piStack_178;
  long **local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined4 local_148;
  long *local_140;
  int *piStack_138;
  long **local_130;
  long *local_120;
  int *piStack_118;
  long **local_110;
  long local_108;
  long **local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long *local_e0;
  int *piStack_d8;
  long **local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  int local_ac;
  int *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_80;
  int *piStack_78;
  long **local_70;
  
  local_a8 = param_1;
  if ((DAT_09517a84 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf6e8);
    FUN_03f5c2a4(&DAT_091bf638);
    FUN_03f5c2a4(&DAT_091bf690);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09197808);
    FUN_03f5c2a4(&DAT_0919a0a0);
    FUN_03f5c2a4(&DAT_0919a0d0);
    FUN_03f5c2a4(&DAT_0919a5d0);
    FUN_03f5c2a4(&DAT_0919a5d8);
    FUN_03f5c2a4(&DAT_091a1d08);
    FUN_03f5c2a4(&DAT_091a1d10);
    FUN_03f5c2a4(&DAT_091a1d18);
    FUN_03f5c2a4(&DAT_091cd9a0);
    FUN_03f5c2a4(&DAT_091cdc60);
    FUN_03f5c2a4(&DAT_091aa4f8);
    FUN_03f5c2a4(&DAT_091b7678);
    FUN_03f5c2a4(&DAT_091b7670);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bde30);
    DAT_09517a84 = 1;
  }
  local_ac = *param_1;
  local_c0 = 0;
  local_100 = (long **)0x0;
  uStack_f8 = 0;
  local_f0 = 0;
  piStack_d8 = (int *)0x0;
  local_e0 = (long *)0x0;
  uStack_c8 = 0;
  local_d0 = (long **)0x0;
  local_110 = (long **)0x0;
  local_108 = 0;
  local_120 = (long *)0x0;
  piStack_118 = (int *)0x0;
  local_140 = (long *)0x0;
  piStack_138 = (int *)0x0;
  local_130 = (long **)0x0;
  local_148 = 0;
  if (local_ac == 0) {
LAB_0439a044:
    local_ac = -1;
    piStack_118 = *(int **)(local_a8 + 0x14);
    local_120 = *(long **)(local_a8 + 0x12);
    local_110 = *(long ***)(local_a8 + 0x16);
    local_a8[0x12] = 0;
    local_a8[0x13] = 0;
    local_a8[0x14] = 0;
    local_a8[0x15] = 0;
    local_a8[0x16] = 0;
    local_a8[0x17] = 0;
    *local_a8 = -1;
LAB_0439a06c:
    plVar8 = local_120;
    if (local_120 != (long *)0x0) {
      uVar2 = (ulong)local_110 & 0xffff;
      lVar9 = *(long *)(DAT_0919a5d0 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c(lVar9);
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar9) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0439a11c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar8,lVar9,0);
LAB_0439a11c:
      (*(code *)*puVar4)(plVar8,uVar2,puVar4[1]);
    }
    iVar1 = FUN_0640f818(local_a8 + 0xc,DAT_09197808);
    if (iVar1 == 1) {
      uVar3 = FUN_0640f7ac(local_a8 + 0xc,DAT_09197800);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
      if ((uVar2 & 1) != 0) {
        lVar9 = FUN_0640f7ac(local_a8 + 0xc,DAT_09197800);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = FUN_04b7c324(lVar9,DAT_091cd9a0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Inequality(lVar9,0,0);
        if ((uVar2 & 1) != 0) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = CakeOrder_MapLevelMetadataConfig__GetLevelConfig(lVar9,local_a8[0xb],0);
          if (lVar9 != 0) {
            local_a8[10] = *(int *)(lVar9 + 0x10);
          }
        }
      }
    }
    iVar1 = 0x15;
  }
  else {
    lVar9 = *(long *)(param_1 + 8);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar9 + 0x48),0);
    if (((uVar2 & 1) != 0) || (*(int *)(lVar9 + 0x50) < 0)) {
      if ((*(long *)(lVar9 + 0x30) == 0) ||
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x30) + 0x28), lVar9 == 0)) {
        iVar1 = 0;
      }
      else {
        local_180 = (long *)0x0;
        FUN_05c30b18(&local_180,*(undefined4 *)(lVar9 + 0x10),DAT_091b7670);
        iVar1 = local_180._4_4_;
      }
      goto LAB_0439a430;
    }
    if (*(long *)(lVar9 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = System_String__op_Equality
                      (*(undefined8 *)(lVar9 + 0x48),*(undefined8 *)(*(long *)(lVar9 + 0x30) + 0x10)
                       ,0);
    lVar5 = *(long *)(lVar9 + 0x30);
    if ((uVar2 & 1) == 0) {
      local_a8[10] = -1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    else {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar9 + 0x50) == *(int *)(lVar5 + 0x1c)) {
        if (*(long *)(lVar5 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar1 = *(int *)(*(long *)(lVar5 + 0x28) + 0x10);
        goto LAB_0439a430;
      }
      local_a8[10] = -1;
    }
    uVar2 = System_String__op_Equality
                      (*(undefined8 *)(lVar9 + 0x48),*(undefined8 *)(lVar5 + 0x10),0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(lVar9 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_0564f950(&local_180,*(long *)(lVar9 + 0x60),DAT_091aa4f8);
      piStack_d8 = piStack_178;
      local_e0 = local_180;
      uStack_c8 = uStack_168;
      local_d0 = local_170;
      local_c0 = local_160;
      piStack_178 = &local_ac;
      local_180 = (long *)0x0;
      local_170 = &local_e0;
      do {
        do {
          do {
            uVar2 = FUN_0717ed58(&local_e0,DAT_091a1d10);
            if ((uVar2 & 1) == 0) goto LAB_0439a3ec;
            uStack_f8 = uStack_c8;
            local_100 = local_d0;
            local_f0 = local_c0;
            uVar2 = FUN_0640f598(&local_100,DAT_091977b8);
          } while ((uVar2 & 1) == 0);
          uVar3 = FUN_0640f7ac(&local_100,DAT_09197800);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
        } while ((uVar2 & 1) == 0);
        lVar5 = FUN_0640f7ac(&local_100,DAT_09197800);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = FUN_04b7d49c(lVar5,&local_108,DAT_091cdc60);
      } while ((uVar2 & 1) == 0);
      if (local_108 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = CakeOrder_MapLevelMetadataConfig__GetLevelConfig
                        (local_108,*(undefined4 *)(lVar9 + 0x50),0);
      if (lVar5 != 0) {
        local_a8[10] = *(int *)(lVar5 + 0x10);
      }
LAB_0439a3ec:
      if (local_ac < 0) {
        FUN_0717ed54(local_170,DAT_091a1d08);
      }
    }
    iVar1 = local_a8[10];
    if (local_a8[10] != -1) goto LAB_0439a430;
    uVar3 = *(undefined8 *)(lVar9 + 0x48);
    local_a8[0xb] = *(int *)(lVar9 + 0x50);
    uVar3 = CakeOrder_MapDataAssetCategory__GetAssetAddress(uVar3,0,0);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04b711d8(&local_80,uVar3,DAT_091bf638);
    piStack_178 = piStack_78;
    local_180 = local_80;
    local_170 = local_70;
    *(int **)(local_a8 + 0xe) = piStack_78;
    *(long **)(local_a8 + 0xc) = local_80;
    *(long ***)(local_a8 + 0x10) = local_70;
    thunk_FUN_03f5d7b8(local_a8 + 0xc,0);
    if (local_ac == 0) goto LAB_0439a044;
    uStack_98 = *(undefined8 *)(local_a8 + 0xe);
    local_a0 = *(undefined8 *)(local_a8 + 0xc);
    local_90 = *(undefined8 *)(local_a8 + 0x10);
    FUN_04b722fc(&local_180,&local_a0,0,8,0,0,0,DAT_091bf6e8);
    local_130 = local_170;
    piStack_138 = piStack_178;
    piStack_178 = (int *)0x0;
    local_170 = (long **)0x0;
    local_140 = local_180;
    local_180 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bde30 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    piStack_178 = piStack_138;
    local_180 = local_140;
    local_170 = local_130;
    thunk_FUN_03f5d7b8(&local_180,0);
    piStack_118 = piStack_178;
    local_120 = local_180;
    local_110 = local_170;
    uVar2 = FUN_041e5390(&local_120,DAT_0919a5d8);
    if ((uVar2 & 1) != 0) goto LAB_0439a06c;
    local_ac = 0;
    *local_a8 = 0;
    *(int **)(local_a8 + 0x14) = piStack_118;
    *(long **)(local_a8 + 0x12) = local_120;
    *(long ***)(local_a8 + 0x16) = local_110;
    thunk_FUN_03f5d7b8(local_a8 + 0x12,0);
    FUN_0439fb28(local_a8 + 2,&local_120,local_a8,DAT_0919a0a0);
    iVar1 = 0x11;
  }
  if ((local_ac < 0) && (uVar2 = FUN_0640f598(local_a8 + 0xc,DAT_091977b8), (uVar2 & 1) != 0)) {
    piStack_78 = *(int **)(local_a8 + 0xe);
    local_80 = *(long **)(local_a8 + 0xc);
    local_70 = *(long ***)(local_a8 + 0x10);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    piStack_178 = piStack_78;
    local_180 = local_80;
    local_170 = local_70;
    FUN_04b71ee0(&local_180,DAT_091bf690);
  }
  if ((iVar1 != 0x15) && (iVar1 != 0)) {
    return;
  }
  iVar1 = 0;
  if (local_a8[10] != -1) {
    iVar1 = local_a8[10];
  }
LAB_0439a430:
  plVar8 = *(long **)(local_a8 + 2);
  *local_a8 = -2;
  local_a8[0xe] = 0;
  local_a8[0xf] = 0;
  local_a8[0x10] = 0;
  local_a8[0x11] = 0;
  local_a8[0xc] = 0;
  local_a8[0xd] = 0;
  if (plVar8 == (long *)0x0) {
    local_a8[6] = iVar1;
  }
  else {
    lVar9 = *(long *)(DAT_0919a0d0 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c(lVar9);
    }
    lVar5 = *plVar8;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar9) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0439a4e0;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar8,lVar9,2);
LAB_0439a4e0:
    (*(code *)*puVar4)(plVar8,iVar1,puVar4[1]);
  }
  return;
}


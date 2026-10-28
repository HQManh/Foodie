// rea decompile_all
// name: CakeOrder.Home.HomeMapGlobalBackgroundControl.<SyncWeatherAsync>d__17$$MoveNext
// address: 0x4319578
// body: available
// range: 0x4319578-0x4319c97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4319c6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4319c70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4319c74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4319c78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4319c7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4319c80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4319c84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4319c88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4319c8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4319c90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4319c94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeMapGlobalBackgroundControl_<SyncWeatherAsync>d__17__MoveNext(uint *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 local_b0 [16];
  ulong local_a0;
  undefined4 local_88;
  undefined1 local_80 [16];
  long *local_70;
  long lStack_68;
  ulong local_60;
  long *local_50;
  long lStack_48;
  ulong local_40;
  
  if ((DAT_09517615 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1e48);
    FUN_03f5c2a4(&DAT_091c2000);
    FUN_03f5c2a4(&DAT_0919a660);
    FUN_03f5c2a4(&DAT_0919a668);
    FUN_03f5c2a4(&DAT_09182368);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b48d8);
    FUN_03f5c2a4(&DAT_091ba220);
    FUN_03f5c2a4(&DAT_091bdea0);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_0918cf58);
    FUN_03f5c2a4(&DAT_09213d40);
    DAT_09517615 = 1;
  }
  uVar1 = *param_1;
  lVar10 = *(long *)(param_1 + 6);
  local_50 = (long *)0x0;
  lStack_48 = 0;
  local_40 = 0;
  local_70 = (long *)0x0;
  lStack_68 = 0;
  local_60 = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_88 = 0;
  if (1 < uVar1) {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_Home_HomeMapGlobalBackgroundControl__CancelOngoingLoads(lVar10);
    lVar4 = thunk_FUN_03f9944c(DAT_09182368);
    System_Threading_CancellationTokenSource___ctor(lVar4,0);
    plVar12 = (long *)(lVar10 + 0x80);
    *plVar12 = lVar4;
    thunk_FUN_03f5d7b8(plVar12,lVar4);
    if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = System_Threading_CancellationTokenSource__get_Token(*plVar12,0);
    *(undefined8 *)(param_1 + 8) = uVar5;
    thunk_FUN_03f5d7b8(param_1 + 8,0);
  }
  if (uVar1 == 0) {
    local_40 = *(ulong *)(param_1 + 0xe);
    lStack_48 = *(long *)(param_1 + 0xc);
    local_50 = *(long **)(param_1 + 10);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = 0xffffffff;
LAB_04319830:
    plVar12 = local_50;
    lVar4 = lStack_48;
    if (local_50 != (long *)0x0) {
      uVar8 = local_40 & 0xffff;
      lVar4 = *(long *)(DAT_0919a660 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c(lVar4);
      }
      lVar7 = *plVar12;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar4) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0431990c;
          }
          uVar11 = uVar11 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar12,lVar4,0);
LAB_0431990c:
      lVar4 = (*(code *)*puVar6)(plVar12,uVar8,puVar6[1]);
    }
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 8,0);
    if ((uVar8 & 1) != 0) goto LAB_04319b08;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar10 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = CakeOrder_MapLevelMetadataConfig__GetLevelConfig
                      (lVar4,*(undefined4 *)(*(long *)(lVar10 + 0x48) + 0x2c),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar3 = *(int *)(lVar4 + 0x10);
    if (iVar3 == *(int *)(lVar10 + 0x40)) goto LAB_04319b08;
    lVar4 = CakeOrder_Home_HomeMapGlobalBackgroundControl__GetConfigByWeather(lVar10,iVar3);
    if (lVar4 == 0) {
      local_b0._0_4_ = iVar3;
      uVar5 = FUN_03f5c42c(DAT_0918cf58,local_b0);
      uVar5 = System_String__Format(DAT_09213d40,uVar5,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(uVar5,0);
      goto LAB_04319b08;
    }
    *(int *)(lVar10 + 0x40) = iVar3;
    uVar8 = FUN_05a8eda4(DAT_091b48d8);
    if ((uVar8 & 1) != 0) {
      lVar7 = *(long *)(DAT_091b48d0 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_AudioManagerCakeOrder__ApplyWeather(0xbf800000,**(long **)(lVar7 + 0xb8),iVar3,0);
    }
    auVar13 = CakeOrder_Home_HomeMapGlobalBackgroundControl__LoadWeatherVisualsAsync
                        (lVar10,lVar4,*(undefined8 *)(param_1 + 8));
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_b0 = auVar13;
    thunk_FUN_03f5d7b8(local_b0,0);
    local_80 = local_b0;
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
    uVar5 = local_80._0_8_;
    if ((long *)local_80._0_8_ != (long *)0x0) {
      lVar10 = *(long *)local_80._0_8_;
      uVar11 = local_80._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091868c0) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04319c1c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,0);
LAB_04319c1c:
      iVar3 = (*(code *)*puVar6)(uVar5,uVar11,puVar6[1]);
      if (iVar3 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x10) = local_80;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        FUN_043247d8(param_1 + 2,local_80,param_1,DAT_091c2000);
        return;
      }
    }
  }
  else {
    if (uVar1 != 1) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar10 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *(long *)(*(long *)(lVar10 + 0x48) + 0x30);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *(long *)(lVar4 + 0x28);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_060da5e0(local_b0,lVar4,DAT_091ba220);
      local_60 = local_a0;
      lStack_68 = local_b0._8_8_;
      local_b0._8_8_ = 0;
      local_a0 = 0;
      local_70 = (long *)local_b0._0_8_;
      local_b0._0_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bdea0 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_b0._8_8_ = lStack_68;
      local_b0._0_8_ = local_70;
      local_a0 = local_60;
      thunk_FUN_03f5d7b8(local_b0,0);
      lStack_48 = local_b0._8_8_;
      local_50 = (long *)local_b0._0_8_;
      local_40 = local_a0;
      uVar8 = FUN_041e5390(&local_50,DAT_0919a668);
      if ((uVar8 & 1) == 0) {
        *param_1 = 0;
        *(long *)(param_1 + 0xc) = lStack_48;
        *(long **)(param_1 + 10) = local_50;
        *(ulong *)(param_1 + 0xe) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_043246cc(param_1 + 2,&local_50,param_1,DAT_091c1e48);
        return;
      }
      goto LAB_04319830;
    }
    local_80 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = 0xffffffff;
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar5 = local_80._0_8_;
  if ((long *)local_80._0_8_ != (long *)0x0) {
    lVar10 = *(long *)local_80._0_8_;
    uVar11 = local_80._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_04319af8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
LAB_04319af8:
    (*(code *)*puVar6)(uVar5,uVar11,puVar6[1]);
  }
LAB_04319b08:
  param_1[8] = 0;
  cVar2 = DAT_095162d8;
  param_1[9] = 0;
  *param_1 = 0xfffffffe;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar12 = *(long **)(param_1 + 2);
  if (plVar12 != (long *)0x0) {
    lVar10 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091866a8) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_04319b94;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar12,DAT_091866a8,2);
LAB_04319b94:
    (*(code *)*puVar6)(plVar12,puVar6[1]);
  }
  return;
}


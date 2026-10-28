// rea decompile_all
// name: PlatformServiceR1.PlatformServiceManagers.<InitializeAsync>d__20$$MoveNext
// address: 0x7735200
// body: available
// range: 0x7735200-0x77356e7 inclusive
// range: 0x7735744-0x77357e3 inclusive
// range: 0x77357fc-0x7735977 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77356b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77356b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77356b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77356bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77356c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77356c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77356c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77356cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77356d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77356d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77356d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77356e4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void PlatformServiceR1_PlatformServiceManagers_<InitializeAsync>d__20__MoveNext(int *param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined8 local_100;
  int *piStack_f8;
  long *local_f0;
  int **ppiStack_e8;
  undefined8 *local_e0;
  undefined8 *puStack_d8;
  undefined1 *local_d0;
  undefined8 *puStack_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined4 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined4 local_58;
  int iStack_54;
  long local_50;
  int local_44;
  undefined1 local_40 [16];
  int *local_28;
  
  local_28 = param_1;
  if ((DAT_09522a87 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1d78);
    FUN_03f5c2a4(&DAT_091c2288);
    FUN_03f5c2a4(&DAT_091818c0);
    FUN_03f5c2a4(&DAT_0919a560);
    FUN_03f5c2a4(&DAT_0919a568);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091bddb8);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_0920a950);
    FUN_03f5c2a4(&DAT_0920a960);
    FUN_03f5c2a4(&DAT_0920a8b0);
    DAT_09522a87 = 1;
  }
  local_44 = *param_1;
  local_58 = 0;
  uVar3 = local_58;
  iStack_54 = 0;
  piStack_f8 = &local_44;
  local_50 = *(long *)(param_1 + 6);
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  ppiStack_e8 = &local_28;
  local_78 = 0;
  local_80 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_100 = 0;
  local_f0 = &local_50;
  local_e0 = &uStack_98;
  puStack_d8 = &local_a0;
  local_d0 = auStack_90;
  puStack_c8 = &local_78;
  local_c0 = &uStack_a8;
  puStack_b8 = &local_b0;
  local_58 = 0;
  if (local_44 == 0) {
    iStack_54 = param_1[10];
    param_1[10] = 0;
    local_44 = -1;
    local_58 = 0;
    *param_1 = -1;
    goto LAB_07735780;
  }
  if (local_44 == 1) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_44 = -1;
    *param_1 = -1;
    local_58 = uVar3;
LAB_07735400:
    uVar6 = local_70._0_8_;
    if ((long *)local_70._0_8_ == (long *)0x0) {
      iVar4 = local_70._8_4_;
    }
    else {
      uVar2 = local_70._12_2_;
      lVar9 = *(long *)(DAT_0919a560 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c(lVar9);
      }
      lVar8 = *(long *)uVar6;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_07735554;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(uVar6,lVar9,0);
LAB_07735554:
      iVar4 = (*(code *)*puVar7)(uVar6,uVar2,puVar7[1]);
    }
    if (iVar4 == 0) {
      if (DAT_09522a98 == '\0') {
        FUN_03f5c2a4(&DAT_091891d8);
        DAT_09522a98 = '\x01';
      }
      if (**(long **)(DAT_091891d8 + 0xb8) != 0) {
        EssentialSystemR1_R1Logger__Log(**(long **)(DAT_091891d8 + 0xb8),DAT_0920a960,0);
      }
      if (local_50 != 0) {
        plVar13 = *(long **)(local_50 + 0x30);
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200));
          goto LAB_0773584c;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (DAT_09522a98 == '\0') {
      FUN_03f5c2a4(&DAT_091891d8);
      DAT_09522a98 = '\x01';
    }
    lVar9 = **(long **)(DAT_091891d8 + 0xb8);
    if (lVar9 != 0) {
      plVar13 = (long *)FUN_03f5c394(DAT_09180318,1);
      local_40._0_4_ = iVar4;
      lVar8 = FUN_03f5c42c(DAT_091818c0,local_40);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((lVar8 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar5 == 0)) {
        uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,0);
      }
      if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar13[4] = lVar8;
      thunk_FUN_03f5d7b8(plVar13 + 4,lVar8);
      EssentialSystemR1_R1Logger__LogWarningFormat(lVar9,DAT_0920a950,plVar13,0);
    }
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar13 = *(long **)(local_50 + 0x30);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210));
      goto LAB_0773584c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (local_44 == 2) {
    iStack_54 = param_1[10];
    param_1[10] = 0;
    local_44 = -1;
    *param_1 = -1;
    local_70 = ZEXT816(0);
    do {
      Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult(&iStack_54,0);
LAB_0773584c:
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(local_50 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(*(long *)(local_50 + 0x30) + 0x28) == '\0') {
        uVar12 = 0x1b;
        goto LAB_07735868;
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = Cysharp_Threading_Tasks_UniTask__Yield(0);
      _local_58 = CONCAT44(iStack_54,uVar3);
      iVar4 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_58,0);
      iStack_54 = iVar4;
      uVar10 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted(&iStack_54,0);
    } while ((uVar10 & 1) != 0);
    local_44 = 2;
    *local_28 = 2;
    uVar6 = DAT_091c2288;
    local_28[10] = iStack_54;
    FUN_049b3a58(local_28 + 2,&iStack_54,local_28,uVar6);
  }
  else {
    if (local_50 == 0) {
      local_58 = uVar3;
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(local_50 + 0x20) == '\0') {
      local_58 = uVar3;
      if (DAT_09522a98 == '\0') {
        FUN_03f5c2a4(&DAT_091891d8);
        DAT_09522a98 = '\x01';
      }
      if (**(long **)(DAT_091891d8 + 0xb8) != 0) {
        EssentialSystemR1_R1Logger__Log(**(long **)(DAT_091891d8 + 0xb8),DAT_0920a8b0,0);
      }
      PlatformServiceR1_PlatformServiceGlobalConfig__DisableLogger();
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar13 = *(long **)(local_50 + 0x30);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210));
      while( true ) {
        if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(local_50 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(char *)(*(long *)(local_50 + 0x30) + 0x28) == '\0') break;
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = Cysharp_Threading_Tasks_UniTask__Yield(0);
        _local_58 = CONCAT44(iStack_54,uVar3);
        iVar4 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_58,0);
        iStack_54 = iVar4;
        uVar10 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted(&iStack_54,0);
        if ((uVar10 & 1) == 0) {
          local_44 = 0;
          *local_28 = 0;
          uVar6 = DAT_091c2288;
          local_28[10] = iStack_54;
          FUN_049b3a58(local_28 + 2,&iStack_54,local_28,uVar6);
          goto LAB_077357fc;
        }
LAB_07735780:
        Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult(&iStack_54,0);
      }
      uVar12 = 0xd;
      goto LAB_07735868;
    }
    local_58 = uVar3;
    PlatformServiceR1_PlatformServiceManagers__CreateBackends();
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_50 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar14 = PlatformServiceR1_PlayerAuthController__AuthenticateAsync
                        (*(long *)(local_50 + 0x28),0);
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddb8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar14;
    thunk_FUN_03f5d7b8(local_40,0);
    local_70 = local_40;
    uVar10 = FUN_0429cb44(local_70,DAT_0919a568);
    if ((uVar10 & 1) != 0) goto LAB_07735400;
    local_44 = 1;
    *local_28 = 1;
    *(undefined1 (*) [16])(local_28 + 0xc) = local_70;
    thunk_FUN_03f5d7b8(local_28 + 0xc,0);
    FUN_049aee18(local_28 + 2,local_70,local_28,DAT_091c1d78);
  }
LAB_077357fc:
  uVar12 = 0xc;
LAB_07735868:
  FUN_03ebd300(&local_100);
  piVar11 = local_28;
  cVar1 = DAT_095162d8;
  if ((uVar12 < 0x1c) && ((1 << (ulong)uVar12 & 0x8002001U) != 0)) {
    *local_28 = -2;
    if (cVar1 == '\0') {
      FUN_03f5c2a4(&DAT_091866a8);
      DAT_095162d8 = '\x01';
    }
    plVar13 = *(long **)(piVar11 + 2);
    if (plVar13 != (long *)0x0) {
      lVar9 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_091866a8) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_07735950;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar13,DAT_091866a8,2);
LAB_07735950:
      (*(code *)*puVar7)(plVar13,puVar7[1]);
    }
  }
  return;
}


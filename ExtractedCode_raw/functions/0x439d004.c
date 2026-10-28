// rea decompile_all
// name: FUN_0439d004
// address: 0x439d004
// body: available
// range: 0x439d004-0x439e9b3 inclusive
// range: 0x439e9c8-0x439eaef inclusive
// range: 0x439eb24-0x439eb3f inclusive
// range: 0x439eb48-0x439eb67 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x439e950 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439e954 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439e958 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439e95c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439e960 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439e964 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439e970 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439e974 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439e978 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439e97c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439e980 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439e984 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void FUN_0439d004(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *in_x10;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *unaff_x25;
  long *unaff_x26;
  int unaff_w27;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000e8;
  long *in_stack_000000f0;
  ulong in_stack_000000f8;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  
  uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *in_x10) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0439d050;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8();
LAB_0439d050:
  iVar2 = (*(code *)*puVar3)();
  if (iVar2 == 0) {
    *unaff_x19 = 0;
    *(ulong *)(unaff_x19 + 0x2c) = in_stack_000000f8;
    *(long **)(unaff_x19 + 0x2a) = in_stack_000000f0;
    thunk_FUN_03f5d7b8(unaff_x19 + 0x2a,0);
    FUN_0439fe60(unaff_x19 + 2,&stack0x000000f0);
    return;
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  plVar11 = in_stack_000000f0;
  if (in_stack_000000f0 != (long *)0x0) {
    lVar5 = *in_stack_000000f0;
    uVar12 = in_stack_000000f8 & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0439d0e8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(in_stack_000000f0,DAT_091868c0,2);
LAB_0439d0e8:
    (*(code *)*puVar3)(plVar11,uVar12,puVar3[1]);
  }
  in_stack_00000148 = *(undefined8 *)(unaff_x19 + 0xe);
  in_stack_00000140 = *(undefined8 *)(unaff_x19 + 0xc);
  in_stack_00000150 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar6 = FUN_04be2f0c(&stack0x00000140,DAT_091d23d0);
  if ((uVar6 & 1) == 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 10);
    uVar9 = thunk_FUN_03fc39d4(&DAT_09206cd8);
    uVar13 = thunk_FUN_03fc39d4(&DAT_091f74f0);
    uVar9 = System_String__Concat(uVar9,uVar8,uVar13,0);
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar13 = thunk_FUN_03f9944c();
    System_InvalidOperationException___ctor(uVar13,uVar9,0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_091ecb10);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar13,uVar9);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x50);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((uVar6 & 1) == 0) {
    lVar5 = *(long *)(unaff_x20 + 0x30);
    iVar2 = FUN_0640f818(unaff_x19 + 0x18,DAT_091978e0);
    if (iVar2 == 1) {
      uVar9 = FUN_0640f7ac(unaff_x19 + 0x18,DAT_091978d8);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Implicit(uVar9,0);
      if ((uVar6 & 1) == 0) goto LAB_0439d1bc;
      uVar9 = FUN_0640f7ac(unaff_x19 + 0x18,DAT_091978d8);
    }
    else {
LAB_0439d1bc:
      uVar9 = 0;
    }
    if (lVar5 == 0) goto LAB_0439e950;
    puVar3 = (undefined8 *)(lVar5 + 0x50);
    *puVar3 = uVar9;
    thunk_FUN_03f5d7b8(puVar3);
  }
  if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x58);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar9,0);
  if (((uVar6 & 1) == 0) && (iVar2 = FUN_0640f818(unaff_x19 + 0x1e,DAT_091978c8), iVar2 == 1)) {
    uVar9 = FUN_0640f7ac(unaff_x19 + 0x1e,DAT_091978c0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar6 & 1) == 0) goto LAB_0439d2c0;
    lVar5 = *(long *)(unaff_x20 + 0x30);
    uVar9 = FUN_0640f7ac(unaff_x19 + 0x1e,DAT_091978c0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar3 = (undefined8 *)(lVar5 + 0x58);
    *puVar3 = uVar9;
    thunk_FUN_03f5d7b8(puVar3);
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x58);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = CakeOrder_DataSO_MapAssetPackSO__GetRandomGameplayMusic(lVar5,0);
    if (lVar5 == 0) {
      lVar5 = FUN_039af8ec(DAT_091b48d0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_AudioManagerCakeOrder__StopMusic(lVar5,0);
    }
    else {
      lVar4 = FUN_039af8ec(DAT_091b48d0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_AudioManagerCakeOrder__PlayMusic(0x3f800000,lVar4,lVar5,1,0);
    }
  }
  else {
LAB_0439d2c0:
    lVar5 = *(long *)(DAT_091b48d0 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_AudioManagerCakeOrder__StopMusic(**(long **)(lVar5 + 0xb8),0);
  }
  uVar6 = FUN_05a8eda4(DAT_091b4978);
  if ((uVar6 & 1) != 0) {
    lVar5 = *(long *)(DAT_091b4970 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = CakeOrder_HeartSystem_HeartSystemController__IsInUnlimitedHeart
                      (**(long **)(lVar5 + 0xb8),0);
    if ((uVar6 & 1) == 0) {
      lVar4 = *(long *)(unaff_x20 + 0x30);
      lVar5 = *(long *)(DAT_091b4970 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = CakeOrder_HeartSystem_HeartSystemController__UseOneHeart
                        (**(long **)(lVar5 + 0xb8),1,1,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      puVar3 = (undefined8 *)(lVar4 + 0xe0);
      *puVar3 = uVar9;
      thunk_FUN_03f5d7b8(puVar3);
    }
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  _in_stack_00000140 = Cysharp_Threading_Tasks_UniTask__NextFrame(0);
  thunk_FUN_03f5d7b8(&stack0x00000140,0);
  _in_stack_000000f0 = _in_stack_00000140;
  if (DAT_095162d4 == '\0') {
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095162d4 = '\x01';
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095162d5 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d5 = '\x01';
  }
  plVar11 = in_stack_000000f0;
  if (in_stack_000000f0 != (long *)0x0) {
    lVar5 = *in_stack_000000f0;
    uVar12 = in_stack_000000f8 & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0439d4b4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(in_stack_000000f0,DAT_091868c0,0);
LAB_0439d4b4:
    iVar2 = (*(code *)*puVar3)(plVar11,uVar12,puVar3[1]);
    if (iVar2 == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x2a) = _in_stack_000000f0;
      thunk_FUN_03f5d7b8(unaff_x19 + 0x2a,0);
      FUN_0439fe60(unaff_x19 + 2,&stack0x000000f0);
      return;
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  plVar11 = in_stack_000000f0;
  if (in_stack_000000f0 != (long *)0x0) {
    lVar5 = *in_stack_000000f0;
    uVar12 = in_stack_000000f8 & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0439d54c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(in_stack_000000f0,DAT_091868c0,2);
LAB_0439d54c:
    (*(code *)*puVar3)(plVar11,uVar12,puVar3[1]);
  }
  in_stack_00000148 = *(undefined8 *)(unaff_x19 + 0x14);
  in_stack_00000140 = *(undefined8 *)(unaff_x19 + 0x12);
  in_stack_00000150 = *(undefined8 *)(unaff_x19 + 0x16);
  uVar6 = FUN_04be2f0c(&stack0x00000140,DAT_091d23d0);
  if ((uVar6 & 1) != 0) {
    if (unaff_w27 == 2) {
      _in_stack_000000f0 = *(undefined1 (*) [16])(unaff_x19 + 0x2a);
      unaff_w27 = -1;
      *(undefined8 *)(unaff_x19 + 0x2a) = 0;
      *(undefined8 *)(unaff_x19 + 0x2c) = 0;
      *unaff_x19 = 0xffffffff;
    }
    else {
      lVar5 = FUN_0640f7ac(unaff_x19 + 0x12,DAT_09197800);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = FUN_04b7c324(lVar5,DAT_091cd9b8);
      *(undefined8 *)(unaff_x19 + 0x2e) = uVar9;
      thunk_FUN_03f5d7b8();
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x10);
      if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = CakeOrder_RemoteConfigDefaultSetterCakeOrder__GetRemoteKeyForMapConfig(uVar9,4,0);
      uVar6 = FUN_05a8eda4(DAT_091b4ab0);
      if ((uVar6 & 1) == 0) {
        uVar9 = 0;
      }
      else {
        lVar5 = *(long *)(DAT_091b4aa8 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar9 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar5 + 0xb8),uVar9,0);
      }
      lVar4 = *(long *)(unaff_x19 + 0x2e);
      uVar13 = *(undefined8 *)(unaff_x19 + 10);
      lVar5 = FUN_03f5c394(DAT_091805f8,1);
      if (lVar5 == 0) {
LAB_0439eae4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar5 + 0x20) = uVar9;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x20),uVar9);
      if (lVar4 == 0) goto LAB_0439eae4;
      auVar14 = CakeOrder_DataSO_MapUpgradeConfig__SetUpWithoutTopology(lVar4,uVar13,lVar5,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _in_stack_000000b0 = auVar14;
      thunk_FUN_03f5d7b8(&stack0x000000b0,0);
      _in_stack_000000f0 = _in_stack_000000b0;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      plVar11 = in_stack_000000f0;
      if (in_stack_000000f0 != (long *)0x0) {
        lVar5 = *in_stack_000000f0;
        uVar12 = in_stack_000000f8 & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091868c0) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0439e8ec;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(in_stack_000000f0,DAT_091868c0,0);
LAB_0439e8ec:
        iVar2 = (*(code *)*puVar3)(plVar11,uVar12,puVar3[1]);
        if (iVar2 == 0) {
          *unaff_x19 = 2;
          *(undefined1 (*) [16])(unaff_x19 + 0x2a) = _in_stack_000000f0;
          thunk_FUN_03f5d7b8(unaff_x19 + 0x2a,0);
          FUN_0439fe60(unaff_x19 + 2,&stack0x000000f0);
          return;
        }
      }
    }
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    plVar11 = in_stack_000000f0;
    if (in_stack_000000f0 != (long *)0x0) {
      lVar5 = *in_stack_000000f0;
      uVar12 = in_stack_000000f8 & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_0439d740;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(in_stack_000000f0,DAT_091868c0,2);
LAB_0439d740:
      (*(code *)*puVar3)(plVar11,uVar12,puVar3[1]);
    }
    uVar9 = *(undefined8 *)(unaff_x19 + 8);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x2e) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = CakeOrder_DataSO_MapUpgradeConfig__GetCurrentRestaurantStats
                        (*(long *)(unaff_x19 + 0x2e),0);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *(long *)(unaff_x20 + 0x30);
      lVar4 = thunk_FUN_03f9944c(DAT_0918a1f0);
      CakeOrder_RestaurantParams___ctor(lVar4,0);
      if (lVar5 == 0) {
        in_stack_000000e8._4_4_ = 0;
      }
      else {
        uVar6 = FUN_06f2ec88(lVar5,1,(long)&stack0x000000e8 + 4,DAT_0919edc8);
        if ((uVar6 & 1) == 0) {
          in_stack_000000e8._4_4_ = 0;
        }
      }
      if ((lVar4 == 0) || (*(undefined4 *)(lVar4 + 0x10) = in_stack_000000e8._4_4_, lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar11 = (long *)(lVar10 + 0xc0);
      *plVar11 = lVar4;
      thunk_FUN_03f5d7b8(plVar11,lVar4);
    }
    *(undefined8 *)(unaff_x19 + 0x2e) = 0;
    thunk_FUN_03f5d7b8(unaff_x19 + 0x2e,0);
    in_stack_00000148 = *(undefined8 *)(unaff_x19 + 0x14);
    in_stack_00000140 = *(undefined8 *)(unaff_x19 + 0x12);
    in_stack_00000150 = *(undefined8 *)(unaff_x19 + 0x16);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    in_stack_00000038 = in_stack_00000148;
    in_stack_00000030 = in_stack_00000140;
    in_stack_00000040 = in_stack_00000150;
    UnityEngine_AddressableAssets_Addressables__ReleaseInstance(&stack0x00000030,0);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar11 = (long *)(*(long *)(unaff_x20 + 0x30) + 0xc0);
  if (*plVar11 == 0) {
    lVar5 = thunk_FUN_03f9944c(DAT_0918a1f0);
    CakeOrder_RestaurantParams___ctor(lVar5,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined4 *)(lVar5 + 0x10) = 0;
    *plVar11 = lVar5;
    thunk_FUN_03f5d7b8(plVar11,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  _in_stack_00000140 = Cysharp_Threading_Tasks_UniTask__NextFrame(0);
  thunk_FUN_03f5d7b8(&stack0x00000140,0);
  _in_stack_000000f0 = _in_stack_00000140;
  if (DAT_095162d4 == '\0') {
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095162d4 = '\x01';
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095162d5 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d5 = '\x01';
  }
  plVar11 = in_stack_000000f0;
  if (in_stack_000000f0 != (long *)0x0) {
    lVar5 = *in_stack_000000f0;
    uVar12 = in_stack_000000f8 & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0439d97c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(in_stack_000000f0,DAT_091868c0,0);
LAB_0439d97c:
    iVar2 = (*(code *)*puVar3)(plVar11,uVar12,puVar3[1]);
    if (iVar2 == 0) {
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 0x2a) = _in_stack_000000f0;
      thunk_FUN_03f5d7b8(unaff_x19 + 0x2a,0);
      FUN_0439fe60(unaff_x19 + 2,&stack0x000000f0);
      return;
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  plVar11 = in_stack_000000f0;
  if (in_stack_000000f0 != (long *)0x0) {
    lVar5 = *in_stack_000000f0;
    uVar12 = in_stack_000000f8 & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0439da50;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(in_stack_000000f0,DAT_091868c0,2);
LAB_0439da50:
    (*(code *)*puVar3)(plVar11,uVar12,puVar3[1]);
  }
  lVar5 = FUN_0640f7ac(unaff_x19 + 0xc,DAT_09197800);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = FUN_04b7c324(lVar5,DAT_091cd9a0);
  plVar11 = (long *)(unaff_x19 + 0x30);
  *plVar11 = lVar5;
  thunk_FUN_03f5d7b8(plVar11);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x10);
  if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar9 = CakeOrder_RemoteConfigDefaultSetterCakeOrder__GetRemoteKeyForMapConfig(uVar9,5,0);
  uVar6 = FUN_05a8eda4(DAT_091b4ab0);
  if ((uVar6 & 1) == 0) {
    uVar9 = 0;
  }
  else {
    lVar5 = *(long *)(DAT_091b4aa8 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar9 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar5 + 0xb8),uVar9,0);
  }
  if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = *plVar11;
  uVar13 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x10);
  lVar5 = FUN_03f5c394(DAT_091805f8,1);
  if (lVar5 == 0) {
LAB_0439e954:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  *(undefined8 *)(lVar5 + 0x20) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x20),uVar9);
  if (lVar4 == 0) goto LAB_0439e954;
  auVar14 = CakeOrder_MapLevelMetadataConfig__SetUpAfterSpawn(lVar4,uVar13,lVar5,0);
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  _in_stack_00000140 = auVar14;
  thunk_FUN_03f5d7b8(&stack0x00000140,0);
  _in_stack_000000f0 = _in_stack_00000140;
  if (DAT_095162d4 == '\0') {
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095162d4 = '\x01';
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095162d5 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d5 = '\x01';
  }
  plVar11 = in_stack_000000f0;
  if (in_stack_000000f0 != (long *)0x0) {
    lVar5 = *in_stack_000000f0;
    uVar12 = in_stack_000000f8 & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0439dc84;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(in_stack_000000f0,DAT_091868c0,0);
LAB_0439dc84:
    iVar2 = (*(code *)*puVar3)(plVar11,uVar12,puVar3[1]);
    if (iVar2 == 0) {
      *unaff_x19 = 4;
      *(undefined1 (*) [16])(unaff_x19 + 0x2a) = _in_stack_000000f0;
      thunk_FUN_03f5d7b8(unaff_x19 + 0x2a,0);
      FUN_0439fe60(unaff_x19 + 2,&stack0x000000f0);
      return;
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  plVar11 = in_stack_000000f0;
  if (in_stack_000000f0 != (long *)0x0) {
    lVar5 = *in_stack_000000f0;
    uVar12 = in_stack_000000f8 & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0439dd58;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(in_stack_000000f0,DAT_091868c0,2);
LAB_0439dd58:
    (*(code *)*puVar3)(plVar11,uVar12,puVar3[1]);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar11 = (long *)(unaff_x19 + 0x30);
  if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = CakeOrder_MapLevelMetadataConfig__GetLevelConfig
                    (*plVar11,*(undefined4 *)(*(long *)(unaff_x20 + 0x30) + 0x1c),0);
  if (lVar5 == 0) {
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar8 = *(undefined8 *)(unaff_x19 + 10);
    in_stack_00000140 =
         CONCAT44(in_stack_00000140._4_4_,*(int *)(*(long *)(unaff_x20 + 0x30) + 0x1c) + 1);
    uVar9 = FUN_03f5c42c(DAT_09535420,&stack0x00000140);
    uVar13 = thunk_FUN_03fc39d4(&DAT_092076f0);
    uVar9 = System_String__Format(uVar13,uVar8,uVar9,0);
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar13 = thunk_FUN_03f9944c();
    System_InvalidOperationException___ctor(uVar13,uVar9,0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_091ecb10);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar13,uVar9);
  }
  lVar4 = *(long *)(unaff_x20 + 0x30);
  uVar9 = CakeOrder_SingleLevelMetadata__Clone(lVar5,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  puVar3 = (undefined8 *)(lVar4 + 0x28);
  *puVar3 = uVar9;
  thunk_FUN_03f5d7b8(puVar3);
  if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x48);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
LAB_0439ddfc:
    if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar2 = CakeOrder_MapLevelMetadataConfig__get_NumLevels(*plVar11,0);
    lVar5 = *(long *)(unaff_x20 + 0x30);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    lVar5 = *(long *)(unaff_x20 + 0x30);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar5 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar2 = *(int *)(*(long *)(lVar5 + 0x48) + 0x4c);
    if (iVar2 < 1) goto LAB_0439ddfc;
  }
  uVar9 = DAT_091b48d8;
  *(bool *)(lVar5 + 0xd0) = *(int *)(lVar5 + 0x1c) == iVar2 + -1;
  uVar6 = FUN_05a8eda4(uVar9);
  if ((uVar6 & 1) != 0) {
    lVar5 = *(long *)(DAT_091b48d0 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x28);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_AudioManagerCakeOrder__ApplyWeather
              (0,**(long **)(lVar5 + 0xb8),*(undefined4 *)(lVar4 + 0x10),0);
  }
  in_stack_00000148 = *(undefined8 *)(unaff_x19 + 0xe);
  in_stack_00000140 = *(undefined8 *)(unaff_x19 + 0xc);
  in_stack_00000150 = *(undefined8 *)(unaff_x19 + 0x10);
  if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  in_stack_00000018 = in_stack_00000148;
  in_stack_00000010 = in_stack_00000140;
  in_stack_00000020 = in_stack_00000150;
  UnityEngine_AddressableAssets_Addressables__ReleaseInstance(&stack0x00000010,0);
  *plVar11 = 0;
  thunk_FUN_03f5d7b8(plVar11,0);
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  _in_stack_00000120 = Cysharp_Threading_Tasks_UniTask__NextFrame(0);
  thunk_FUN_03f5d7b8(&stack0x00000120,0);
  _in_stack_000000f0 = _in_stack_00000120;
  if (DAT_095162d4 == '\0') {
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095162d4 = '\x01';
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095162d5 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d5 = '\x01';
  }
  plVar11 = in_stack_000000f0;
  if (in_stack_000000f0 != (long *)0x0) {
    lVar5 = *in_stack_000000f0;
    uVar12 = in_stack_000000f8 & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0439dfd4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(in_stack_000000f0,DAT_091868c0,0);
LAB_0439dfd4:
    iVar2 = (*(code *)*puVar3)(plVar11,uVar12,puVar3[1]);
    if (iVar2 == 0) {
      *unaff_x19 = 5;
      *(undefined1 (*) [16])(unaff_x19 + 0x2a) = _in_stack_000000f0;
      thunk_FUN_03f5d7b8(unaff_x19 + 0x2a,0);
      FUN_0439fe60(unaff_x19 + 2,&stack0x000000f0);
      return;
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  plVar11 = in_stack_000000f0;
  if (in_stack_000000f0 != (long *)0x0) {
    lVar5 = *in_stack_000000f0;
    uVar12 = in_stack_000000f8 & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0439e0a8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(in_stack_000000f0,DAT_091868c0,2);
LAB_0439e0a8:
    (*(code *)*puVar3)(plVar11,uVar12,puVar3[1]);
  }
  in_stack_00000148 = *(undefined8 *)(unaff_x19 + 0x26);
  in_stack_00000140 = *(undefined8 *)(unaff_x19 + 0x24);
  in_stack_00000150 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar6 = FUN_04be2f0c(&stack0x00000140,DAT_091d23d0);
  if ((uVar6 & 1) != 0) {
    if (unaff_w27 == 6) {
      _in_stack_000000f0 = *(undefined1 (*) [16])(unaff_x19 + 0x2a);
      *(undefined8 *)(unaff_x19 + 0x2a) = 0;
      *(undefined8 *)(unaff_x19 + 0x2c) = 0;
      *unaff_x19 = 0xffffffff;
    }
    else {
      lVar5 = FUN_0640f7ac(unaff_x19 + 0x24,DAT_09197800);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = FUN_04b7c324(lVar5,DAT_091cd9b0);
      *(undefined8 *)(unaff_x19 + 0x32) = uVar9;
      thunk_FUN_03f5d7b8();
      lVar5 = DAT_091c0310;
      lVar10 = *(long *)(unaff_x19 + 0x32);
      uVar9 = *(undefined8 *)(unaff_x19 + 10);
      lVar4 = *(long *)(DAT_091c0310 + 0x38);
      if (lVar4 == 0) {
        FUN_03f95ac8(DAT_091c0310);
        lVar4 = *(long *)(lVar5 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar14 = CakeOrder_MapToolConfig__SetUpAfterSpawn
                          (lVar10,uVar9,**(undefined8 **)(lVar5 + 0xb8),0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _in_stack_00000120 = auVar14;
      thunk_FUN_03f5d7b8(&stack0x00000120,0);
      _in_stack_000000f0 = _in_stack_00000120;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      plVar11 = in_stack_000000f0;
      if (in_stack_000000f0 != (long *)0x0) {
        lVar5 = *in_stack_000000f0;
        uVar12 = in_stack_000000f8 & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091868c0) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0439e890;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(in_stack_000000f0,DAT_091868c0,0);
LAB_0439e890:
        iVar2 = (*(code *)*puVar3)(plVar11,uVar12,puVar3[1]);
        if (iVar2 == 0) {
          *unaff_x19 = 6;
          *(undefined1 (*) [16])(unaff_x19 + 0x2a) = _in_stack_000000f0;
          thunk_FUN_03f5d7b8(unaff_x19 + 0x2a,0);
          FUN_0439fe60(unaff_x19 + 2,&stack0x000000f0);
          return;
        }
      }
    }
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    plVar11 = in_stack_000000f0;
    if (in_stack_000000f0 != (long *)0x0) {
      lVar5 = *in_stack_000000f0;
      uVar12 = in_stack_000000f8 & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_0439e308;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(in_stack_000000f0,DAT_091868c0,2);
LAB_0439e308:
      (*(code *)*puVar3)(plVar11,uVar12,puVar3[1]);
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x60) = *(undefined8 *)(unaff_x19 + 0x32);
    thunk_FUN_03f5d7b8();
    CakeOrder_InGame_LevelPlayLoadAndSetupControl__BuildToolUpgrades();
    *(undefined8 *)(unaff_x19 + 0x32) = 0;
    thunk_FUN_03f5d7b8(unaff_x19 + 0x32,0);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  _in_stack_00000140 = Cysharp_Threading_Tasks_UniTask__NextFrame(0);
  thunk_FUN_03f5d7b8(&stack0x00000140,0);
  _in_stack_000000f0 = _in_stack_00000140;
  if (DAT_095162d4 == '\0') {
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095162d4 = '\x01';
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095162d5 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d5 = '\x01';
  }
  plVar11 = in_stack_000000f0;
  if (in_stack_000000f0 != (long *)0x0) {
    lVar5 = *in_stack_000000f0;
    uVar12 = in_stack_000000f8 & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0439e430;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(in_stack_000000f0,DAT_091868c0,0);
LAB_0439e430:
    iVar2 = (*(code *)*puVar3)(plVar11,uVar12,puVar3[1]);
    if (iVar2 == 0) {
      *unaff_x19 = 7;
      *(undefined1 (*) [16])(unaff_x19 + 0x2a) = _in_stack_000000f0;
      thunk_FUN_03f5d7b8(unaff_x19 + 0x2a,0);
      FUN_0439fe60(unaff_x19 + 2,&stack0x000000f0);
      return;
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  plVar11 = in_stack_000000f0;
  if (in_stack_000000f0 != (long *)0x0) {
    lVar5 = *in_stack_000000f0;
    uVar12 = in_stack_000000f8 & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0439e504;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(in_stack_000000f0,DAT_091868c0,2);
LAB_0439e504:
    (*(code *)*puVar3)(plVar11,uVar12,puVar3[1]);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *(long *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x70);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((uVar6 & 1) == 0) {
    uVar9 = thunk_FUN_03f9944c(DAT_09194ba8);
    CakeOrder_InGame_StackGameplayConfig_StackConfig___ctor(uVar9,0);
  }
  else {
    if (*(long *)(unaff_x20 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x70) + 0x20);
  }
  if (lVar5 != 0) {
    puVar3 = (undefined8 *)(lVar5 + 0xb0);
    *puVar3 = uVar9;
    thunk_FUN_03f5d7b8(puVar3,uVar9);
    lVar5 = *(long *)(unaff_x20 + 0x30);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x80);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar6 & 1) == 0) {
      uVar9 = thunk_FUN_03f9944c(DAT_09194430);
      CakeOrder_InGame_ServeSlotConfig_SlotConfig___ctor(uVar9,0);
    }
    else {
      if (*(long *)(unaff_x20 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x80) + 0x20);
    }
    if (lVar5 != 0) {
      puVar3 = (undefined8 *)(lVar5 + 0xb8);
      *puVar3 = uVar9;
      thunk_FUN_03f5d7b8(puVar3,uVar9);
      uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar9 = thunk_FUN_03f9944c(DAT_09182258);
      CakeOrder_InGame_CakeLevelRuntimeData___ctor(uVar9,uVar13);
      *(undefined8 *)(unaff_x20 + 0x38) = uVar9;
      thunk_FUN_03f5d7b8((undefined8 *)(unaff_x20 + 0x38),uVar9);
      CakeOrder_InGame_LevelPlayLoadAndSetupControl__BindCustomerTracking();
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 8) = 0;
      thunk_FUN_03f5d7b8(unaff_x19 + 8,0);
      *(undefined8 *)(unaff_x19 + 10) = 0;
      thunk_FUN_03f5d7b8(unaff_x19 + 10,0);
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      cVar1 = DAT_095162d8;
      *(undefined8 *)(unaff_x19 + 0x26) = 0;
      *(undefined8 *)(unaff_x19 + 0x24) = 0;
      *(undefined8 *)(unaff_x19 + 0x22) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(undefined8 *)(unaff_x19 + 0x1e) = 0;
      *(undefined8 *)(unaff_x19 + 0x1c) = 0;
      *(undefined8 *)(unaff_x19 + 0x1a) = 0;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x16) = 0;
      *(undefined8 *)(unaff_x19 + 0x14) = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = 0;
      if (cVar1 == '\0') {
        FUN_03f5c2a4(&DAT_091866a8);
        DAT_095162d8 = '\x01';
      }
      plVar11 = *(long **)(unaff_x19 + 2);
      if (plVar11 != (long *)0x0) {
        lVar5 = *plVar11;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091866a8) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_0439e6f4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091866a8,2);
LAB_0439e6f4:
        (*(code *)*puVar3)(plVar11,puVar3[1]);
      }
      return;
    }
  }
LAB_0439e950:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


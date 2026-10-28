// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder.<RunDelayedMapChange>d__65$$MoveNext
// address: 0x430aeb8
// body: available
// range: 0x430aeb8-0x430b9c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x430b9a0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430b9a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430b9a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430b9ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430b9b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430b9b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430b9b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430b9bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430b9c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430b9c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0430b9a0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CakeOrder_Home_HomeControllerCookOrder_<RunDelayedMapChange>d__65__MoveNext(uint *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 local_80 [16];
  long local_68;
  undefined1 local_60 [16];
  uint local_44;
  
  if ((DAT_095175a6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2848);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_091eb1a8);
    FUN_03f5c2a4(&DAT_09191308);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095175a6 = 1;
  }
  local_44 = *param_1;
  local_68 = *(long *)(param_1 + 4);
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  if (3 < local_44) {
    uVar2 = Cysharp_Threading_Tasks_UniTaskCancellationExtensions__GetCancellationTokenOnDestroy
                      (local_68,0);
    *(undefined8 *)(param_1 + 8) = uVar2;
    thunk_FUN_03f5d7b8(param_1 + 8,0);
    if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_Home_HomeControllerCookOrder__SetInputBlocked(local_68,1);
  }
  if (1 < (int)local_44) {
    if (local_44 == 2) {
      local_80 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      local_44 = 0xffffffff;
      *param_1 = 0xffffffff;
      goto LAB_0430b58c;
    }
    if (local_44 != 3) goto LAB_0430b014;
    local_80 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_44 = 0xffffffff;
    *param_1 = 0xffffffff;
    goto LAB_0430b738;
  }
  if (local_44 == 0) {
    local_80 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_44 = 0xffffffff;
    *param_1 = 0xffffffff;
    goto LAB_0430b1d4;
  }
  if (local_44 == 1) {
    local_80 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_44 = 0xffffffff;
    *param_1 = 0xffffffff;
LAB_0430b368:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar2 = local_80._0_8_;
    if ((long *)local_80._0_8_ != (long *)0x0) {
      lVar5 = *(long *)local_80._0_8_;
      uVar9 = local_80._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_0430b3e8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
LAB_0430b3e8:
      (*(code *)*puVar4)(uVar2,uVar9,puVar4[1]);
    }
    if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = CakeOrder_Home_HomeControllerCookOrder__GetTabPageMain();
    puVar8 = param_1 + 10;
    *(undefined8 *)puVar8 = uVar2;
    thunk_FUN_03f5d7b8(puVar8);
    uVar2 = *(undefined8 *)puVar8;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Implicit(uVar2,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)puVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_Home_UIHomeTabPageMain__PlayEndRestaurantVfx(*(long *)puVar8,0);
    }
    if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    fVar11 = *(float *)(local_68 + 0x120);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_TimeSpan__FromSeconds((double)fVar11,0);
    uVar10 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar12 = Cysharp_Threading_Tasks_UniTask__Delay(uVar2,1,8,uVar10,0,0);
    local_60 = auVar12;
    thunk_FUN_03f5d7b8(local_60,0);
    local_80 = local_60;
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
    uVar2 = local_80._0_8_;
    if ((long *)local_80._0_8_ != (long *)0x0) {
      lVar5 = *(long *)local_80._0_8_;
      uVar9 = local_80._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0430b578;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,0);
LAB_0430b578:
      iVar1 = (*(code *)*puVar4)(uVar2,uVar9,puVar4[1]);
      if (iVar1 == 0) {
        local_44 = 2;
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_80;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_0430d664(param_1 + 2,local_80,param_1,DAT_091c2848);
        goto LAB_0430b910;
      }
    }
LAB_0430b58c:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar2 = local_80._0_8_;
    if ((long *)local_80._0_8_ != (long *)0x0) {
      lVar5 = *(long *)local_80._0_8_;
      uVar9 = local_80._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_0430b60c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
LAB_0430b60c:
      (*(code *)*puVar4)(uVar2,uVar9,puVar4[1]);
    }
    lVar5 = *(long *)(param_1 + 6);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
    if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar12 = CakeOrder_Home_HomeControllerCookOrder__WaitSelectedMapReady
                        (local_68,*(undefined8 *)(param_1 + 8));
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60 = auVar12;
    thunk_FUN_03f5d7b8(local_60,0);
    local_80 = local_60;
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
    uVar2 = local_80._0_8_;
    if ((long *)local_80._0_8_ != (long *)0x0) {
      lVar5 = *(long *)local_80._0_8_;
      uVar9 = local_80._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0430b724;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,0);
LAB_0430b724:
      iVar1 = (*(code *)*puVar4)(uVar2,uVar9,puVar4[1]);
      if (iVar1 == 0) {
        local_44 = 3;
        *param_1 = 3;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_80;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_0430d664(param_1 + 2,local_80,param_1,DAT_091c2848);
        goto LAB_0430b910;
      }
    }
LAB_0430b738:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar2 = local_80._0_8_;
    if ((long *)local_80._0_8_ != (long *)0x0) {
      lVar5 = *(long *)local_80._0_8_;
      uVar9 = local_80._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_0430b7f8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
LAB_0430b7f8:
      (*(code *)*puVar4)(uVar2,uVar9,puVar4[1]);
    }
    puVar8 = param_1 + 10;
    uVar2 = *(undefined8 *)puVar8;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Implicit(uVar2,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)puVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_Home_UIHomeTabPageMain__StopEndRestaurantVfx(*(long *)puVar8,0);
    }
    puVar8[0] = 0;
    puVar8[1] = 0;
    thunk_FUN_03f5d7b8(puVar8,0);
    iVar1 = 0x12;
  }
  else {
LAB_0430b014:
    if (*(int *)(DAT_09191308 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_09191308 + 0xb8);
    lVar5 = puVar4[1];
    if (lVar5 == 0) {
      if (*(int *)(DAT_09191308 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar4 = *(undefined8 **)(DAT_09191308 + 0xb8);
      }
      uVar2 = *puVar4;
      lVar5 = thunk_FUN_03f9944c(DAT_09177ab8);
      FUN_053007d8(lVar5,uVar2,DAT_091eb1a8,0);
      plVar3 = (long *)(*(long *)(DAT_09191308 + 0xb8) + 8);
      *plVar3 = lVar5;
      thunk_FUN_03f5d7b8(plVar3,lVar5);
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60 = Cysharp_Threading_Tasks_UniTask__WaitUntil(lVar5,8,uVar2,0,0);
    thunk_FUN_03f5d7b8(local_60,0);
    local_80 = local_60;
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
    uVar2 = local_80._0_8_;
    if ((long *)local_80._0_8_ == (long *)0x0) {
LAB_0430b1d4:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar2 = local_80._0_8_;
      if ((long *)local_80._0_8_ != (long *)0x0) {
        lVar5 = *(long *)local_80._0_8_;
        uVar9 = local_80._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091868c0) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_0430b254;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
LAB_0430b254:
        (*(code *)*puVar4)(uVar2,uVar9,puVar4[1]);
      }
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar12 = CakeOrder_Home_HomeControllerCookOrder__WaitSelectedMapReady
                          (local_68,*(undefined8 *)(param_1 + 8));
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_60 = auVar12;
      thunk_FUN_03f5d7b8(local_60,0);
      local_80 = local_60;
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
      uVar2 = local_80._0_8_;
      if ((long *)local_80._0_8_ != (long *)0x0) {
        lVar5 = *(long *)local_80._0_8_;
        uVar9 = local_80._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091868c0) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0430b354;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,0);
LAB_0430b354:
        iVar1 = (*(code *)*puVar4)(uVar2,uVar9,puVar4[1]);
        if (iVar1 == 0) {
          local_44 = 1;
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 0xc) = local_80;
          thunk_FUN_03f5d7b8(param_1 + 0xc,0);
          FUN_0430d664(param_1 + 2,local_80,param_1,DAT_091c2848);
          goto LAB_0430b910;
        }
      }
      goto LAB_0430b368;
    }
    lVar5 = *(long *)local_80._0_8_;
    uVar9 = local_80._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0430b1c0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,0);
LAB_0430b1c0:
    iVar1 = (*(code *)*puVar4)(uVar2,uVar9,puVar4[1]);
    if (iVar1 != 0) goto LAB_0430b1d4;
    local_44 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0xc) = local_80;
    thunk_FUN_03f5d7b8(param_1 + 0xc,0);
    FUN_0430d664(param_1 + 2,local_80,param_1,DAT_091c2848);
LAB_0430b910:
    iVar1 = 10;
  }
  lVar5 = local_68;
  if ((int)local_44 < 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Implicit(lVar5,0);
    if ((uVar6 & 1) != 0) {
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_Home_HomeControllerCookOrder__SetInputBlocked(local_68,0);
    }
  }
  if ((iVar1 == 0) || (iVar1 == 0x12)) {
    *param_1 = 0xfffffffe;
    param_1[8] = 0;
    param_1[9] = 0;
    FUN_042dada8(param_1 + 2,0);
  }
  return;
}


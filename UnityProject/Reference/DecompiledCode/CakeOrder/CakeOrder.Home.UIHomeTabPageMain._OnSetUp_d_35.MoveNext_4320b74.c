// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMain.<OnSetUp>d__35$$MoveNext
// address: 0x4320b74
// body: available
// range: 0x4320b74-0x432139b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4321320 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4321324 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4321328 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432132c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4321330 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4321334 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4321338 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432133c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4321340 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4321344 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4321348 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432134c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMain_<OnSetUp>d__35__MoveNext(int *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09517656 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c21b8);
    FUN_03f5c2a4(&DAT_091b17f8);
    FUN_03f5c2a4(&DAT_091b17f0);
    FUN_03f5c2a4(&DAT_0917d000);
    FUN_03f5c2a4(&DAT_091dcac8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09517656 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 != 0) {
    lVar13 = *(long *)(param_1 + 6);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar13 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar14 = *(long *)(*(long *)(lVar13 + 0x50) + 0x10);
    uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar5,lVar13,DAT_091dcac8,0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_Home_HomeSelectionControl__add_onSelectedMapChanged(lVar14,uVar5);
    if (*(long *)(lVar13 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*(long *)(lVar13 + 0x50) + 0x20) = *(undefined8 *)(lVar13 + 200);
    thunk_FUN_03f5d7b8();
    if (*(long *)(lVar13 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar14 = UnityEngine_Component__get_gameObject(*(long *)(lVar13 + 0xb0),0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(lVar14,1,0);
    if (*(long *)(lVar13 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar14 = UnityEngine_Component__get_gameObject(*(long *)(lVar13 + 0xb8),0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(lVar14,1,0);
    if (*(long *)(lVar13 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar14 = UnityEngine_Component__get_gameObject(*(long *)(lVar13 + 0xa0),0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(lVar14,1,0);
    if (*(long *)(lVar13 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar14 = UnityEngine_Component__get_gameObject(*(long *)(lVar13 + 0xa8),0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(lVar14,1,0);
    if (*(long *)(lVar13 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(lVar13 + 0xb0),0);
    if (*(long *)(lVar13 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(lVar13 + 0xb8),0);
    if (*(long *)(lVar13 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(lVar13 + 0xa0),0);
    if (*(long *)(lVar13 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(lVar13 + 0xa8),0);
    lVar6 = thunk_FUN_03f9944c(DAT_0917d000);
    FUN_058a14ac(lVar6,DAT_091b17f0);
    auVar16 = CakeOrder_Home_UIHomeTabPageMain__<>n__0();
    lVar14 = DAT_091b17f8;
    if (lVar6 != 0) {
      lVar9 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          pauVar7 = (undefined1 (*) [16])(lVar9 + (long)(int)uVar1 * 0x10 + 0x20);
          *pauVar7 = auVar16;
          thunk_FUN_03f5d7b8(pauVar7,0);
        }
        else {
          FUN_058a1d58(lVar6,auVar16._0_8_,auVar16._8_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(lVar13 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar13 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar16 = CakeOrder_Home_HomeRestaurantsBuildingControl__SetUp
                            (*(long *)(lVar13 + 200),
                             *(undefined8 *)(*(long *)(lVar13 + 0x50) + 0x10));
        lVar14 = DAT_091b17f8;
        lVar9 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          pauVar7 = (undefined1 (*) [16])(lVar9 + (long)(int)uVar1 * 0x10 + 0x20);
          *pauVar7 = auVar16;
          thunk_FUN_03f5d7b8(pauVar7,0);
        }
        else {
          FUN_058a1d58(lVar6,auVar16._0_8_,auVar16._8_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(lVar13 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar13 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar16 = CakeOrder_Home_HomeMapGlobalBackgroundControl__SetUp
                            (*(long *)(lVar13 + 0xc0),
                             *(undefined8 *)(*(long *)(lVar13 + 0x50) + 0x10));
        lVar14 = DAT_091b17f8;
        lVar9 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          pauVar7 = (undefined1 (*) [16])(lVar9 + (long)(int)uVar1 * 0x10 + 0x20);
          *pauVar7 = auVar16;
          thunk_FUN_03f5d7b8(pauVar7,0);
        }
        else {
          FUN_058a1d58(lVar6,auVar16._0_8_,auVar16._8_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(lVar13 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar16 = CakeOrder_Home_UIHomeTabPageMainSubModeBase__SetUp
                            (*(long *)(lVar13 + 0xb0),*(undefined8 *)(lVar13 + 0x48),
                             *(undefined8 *)(lVar13 + 0x50),0);
        lVar14 = DAT_091b17f8;
        lVar9 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          pauVar7 = (undefined1 (*) [16])(lVar9 + (long)(int)uVar1 * 0x10 + 0x20);
          *pauVar7 = auVar16;
          thunk_FUN_03f5d7b8(pauVar7,0);
        }
        else {
          FUN_058a1d58(lVar6,auVar16._0_8_,auVar16._8_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(lVar13 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar16 = CakeOrder_Home_UIHomeTabPageMainSubModeBase__SetUp
                            (*(long *)(lVar13 + 0xb8),*(undefined8 *)(lVar13 + 0x48),
                             *(undefined8 *)(lVar13 + 0x50),0);
        lVar14 = DAT_091b17f8;
        lVar9 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          pauVar7 = (undefined1 (*) [16])(lVar9 + (long)(int)uVar1 * 0x10 + 0x20);
          *pauVar7 = auVar16;
          thunk_FUN_03f5d7b8(pauVar7,0);
        }
        else {
          FUN_058a1d58(lVar6,auVar16._0_8_,auVar16._8_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(lVar13 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar16 = CakeOrder_Home_UIHomeTabPageMainSubModeBase__SetUp
                            (*(long *)(lVar13 + 0xa0),*(undefined8 *)(lVar13 + 0x48),
                             *(undefined8 *)(lVar13 + 0x50),0);
        lVar14 = DAT_091b17f8;
        lVar9 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          pauVar7 = (undefined1 (*) [16])(lVar9 + (long)(int)uVar1 * 0x10 + 0x20);
          *pauVar7 = auVar16;
          thunk_FUN_03f5d7b8(pauVar7,0);
        }
        else {
          FUN_058a1d58(lVar6,auVar16._0_8_,auVar16._8_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(lVar13 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar16 = CakeOrder_Home_UIHomeTabPageMainSubModeBase__SetUp
                            (*(long *)(lVar13 + 0xa8),*(undefined8 *)(lVar13 + 0x48),
                             *(undefined8 *)(lVar13 + 0x50),0);
        lVar13 = DAT_091b17f8;
        lVar14 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          pauVar7 = (undefined1 (*) [16])(lVar14 + (long)(int)uVar1 * 0x10 + 0x20);
          *pauVar7 = auVar16;
          thunk_FUN_03f5d7b8(pauVar7,0);
        }
        else {
          FUN_058a1d58(lVar6,auVar16._0_8_,auVar16._8_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_40 = Cysharp_Threading_Tasks_UniTask__WhenAll(lVar6,0);
        thunk_FUN_03f5d7b8(local_40,0);
        uVar3 = local_40._8_8_;
        uVar5 = local_40._0_8_;
        local_50 = local_40;
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
        if ((long *)uVar5 != (long *)0x0) {
          lVar13 = *(long *)uVar5;
          uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_091868c0) {
                puVar8 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_04321198;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)FUN_03f95da8(uVar5,DAT_091868c0,0);
LAB_04321198:
          iVar4 = (*(code *)*puVar8)(uVar5,uVar3 & 0xffffffff,puVar8[1]);
          if (iVar4 == 0) {
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 8) = local_50;
            thunk_FUN_03f5d7b8(param_1 + 8,0);
            FUN_04324d14(param_1 + 2,local_50,param_1,DAT_091c21b8);
            return;
          }
        }
        goto LAB_043211ac;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_50 = *(undefined1 (*) [16])(param_1 + 8);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = -1;
LAB_043211ac:
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar5 = local_50._0_8_;
  if ((long *)local_50._0_8_ != (long *)0x0) {
    lVar13 = *(long *)local_50._0_8_;
    uVar15 = local_50._8_8_ & 0xffff;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091868c0) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_04321230;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,2);
LAB_04321230:
    (*(code *)*puVar8)(uVar5,uVar15,puVar8[1]);
  }
  cVar2 = DAT_095162d8;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar12 = *(long **)(param_1 + 2);
  if (plVar12 != (long *)0x0) {
    lVar13 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091866a8) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_043212c8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar12,DAT_091866a8,2);
LAB_043212c8:
    (*(code *)*puVar8)(plVar12,puVar8[1]);
  }
  return;
}


// rea decompile_all
// name: CakeOrder.InGame.UILevelGoldCounterStarProgress$$SetUp
// address: 0x42a91c8
// body: available
// range: 0x42a91c8-0x42a9613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a93e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a9610 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UILevelGoldCounterStarProgress__SetUp
               (long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_09517281 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5430);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09191518);
    FUN_03f5c2a4(&DAT_091dcdd8);
    FUN_03f5c2a4(&DAT_0920d8f0);
    FUN_03f5c2a4(&DAT_0920d8e8);
    DAT_09517281 = 1;
  }
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd8),param_3);
  if ((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(DAT_0920d8e8,0);
    uVar1 = FUN_03f5c394(DAT_091801b8,0);
    *(undefined8 *)(param_1 + 0xd0) = uVar1;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd0),uVar1);
    if (*(long *)(param_1 + 0xa8) != 0) {
      UnityEngine_UI_Slider__set_maxValue(0x3f800000,*(long *)(param_1 + 0xa8),0);
      lVar2 = *(long *)(param_1 + 0xb0);
      if (lVar2 != 0) {
        lVar4 = 0;
        do {
          if ((int)*(uint *)(lVar2 + 0x18) <= (int)(uint)lVar4) {
            return;
          }
          if (*(uint *)(lVar2 + 0x18) <= (uint)lVar4) goto LAB_042a9610;
          lVar2 = *(long *)(lVar2 + lVar4 * 8 + 0x20);
          if ((lVar2 == 0) || (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 == 0))
          break;
          UnityEngine_GameObject__SetActive(lVar2,0,0);
          lVar2 = *(long *)(param_1 + 0xb0);
          lVar4 = lVar4 + 1;
        } while (lVar2 != 0);
      }
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0xb0);
    if (lVar2 != 0) {
      uVar9 = 0;
      do {
        uVar5 = *(uint *)(lVar2 + 0x18);
        if ((long)(int)uVar5 <= (long)uVar9) {
          lVar2 = *(long *)(param_1 + 0xd8);
          uVar1 = thunk_FUN_03f9944c(DAT_09191518);
          CakeOrder_DataSO_IItemCurrencyHoldingSource_OnAmountChangedDelegate___ctor
                    (uVar1,param_1,DAT_091dcdd8,0);
          if (lVar2 != 0) {
            CakeOrder_InGame_CakeLevelRuntimeDataSoftCurrency__add_onAmountChanged(lVar2,uVar1,0);
            if (*(long *)(param_1 + 0xb0) != 0) {
              lVar2 = param_2;
              if (*(int *)(param_2 + 0x18) == *(int *)(*(long *)(param_1 + 0xb0) + 0x18))
              goto LAB_042a94f0;
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              UnityEngine_Debug__LogWarning(DAT_0920d8f0,0);
              if ((*(long *)(param_1 + 0xb0) != 0) &&
                 (lVar2 = FUN_03f5c394(DAT_091801b8,
                                       *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x18)),
                 lVar2 != 0)) {
                uVar9 = *(ulong *)(lVar2 + 0x18);
                uVar5 = (uint)uVar9;
                if ((int)uVar5 < 1) goto LAB_042a94f0;
                uVar3 = 0;
                iVar6 = (int)*(ulong *)(param_2 + 0x18);
                uVar7 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
                goto LAB_042a94a8;
              }
            }
          }
          break;
        }
        if ((long)uVar9 < (long)(int)*(uint *)(param_2 + 0x18)) {
          if ((uVar5 <= uVar9) || (*(uint *)(param_2 + 0x18) <= uVar9)) goto LAB_042a9610;
          lVar2 = *(long *)(lVar2 + uVar9 * 8 + 0x20);
          if (lVar2 == 0) break;
          CakeOrder_InGame_UILevelGoldCounterStarMilestone__SettUp
                    (lVar2,*(undefined8 *)(param_1 + 0xb8),uVar9 & 0xffffffff,
                     *(undefined4 *)(param_2 + uVar9 * 4 + 0x20));
          lVar2 = *(long *)(param_1 + 0xb0);
          if (lVar2 == 0) break;
          if (*(uint *)(lVar2 + 0x18) <= uVar9) goto LAB_042a9610;
          lVar2 = *(long *)(lVar2 + uVar9 * 8 + 0x20);
          if (lVar2 == 0) break;
          CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar2,0);
        }
        else {
          if (uVar5 <= uVar9) goto LAB_042a9610;
          lVar2 = *(long *)(lVar2 + uVar9 * 8 + 0x20);
          if ((lVar2 == 0) || (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 == 0))
          break;
          UnityEngine_GameObject__SetActive(lVar2,0,0);
        }
        lVar2 = *(long *)(param_1 + 0xb0);
        uVar9 = uVar9 + 1;
      } while (lVar2 != 0);
    }
  }
  goto LAB_042a93e0;
  while( true ) {
    if ((uVar9 & 0xffffffff) <= uVar3) goto LAB_042a9610;
    lVar4 = uVar3 * 4;
    uVar3 = uVar3 + 1;
    *(undefined4 *)(lVar2 + lVar4 + 0x20) = *(undefined4 *)(param_2 + uVar8 * 4 + 0x20);
    if ((uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) == uVar3) break;
LAB_042a94a8:
    if ((long)uVar3 < (long)iVar6) {
      uVar8 = uVar3;
      if (uVar7 <= uVar3) goto LAB_042a9610;
    }
    else {
      uVar8 = (long)(iVar6 + -1);
      if (uVar7 == 0) goto LAB_042a9610;
    }
  }
LAB_042a94f0:
  plVar10 = (long *)(param_1 + 0xd0);
  *plVar10 = lVar2;
  thunk_FUN_03f5d7b8(plVar10,lVar2);
  if (*(uint *)(lVar2 + 0x18) == 0) {
LAB_042a9610:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    fVar13 = (*(float *)(param_1 + 0xc0) / (*(float *)(param_1 + 0xc0) - *(float *)(param_1 + 200)))
             * (float)*(int *)(lVar2 + ((long)(((ulong)*(uint *)(lVar2 + 0x18) << 0x20) +
                                              -0x100000000) >> 0x1e) + 0x20);
    UnityEngine_UI_Slider__set_maxValue(fVar13,*(long *)(param_1 + 0xa8),0);
    if (*(long *)(param_1 + 0xb0) != 0) {
      uVar5 = *(uint *)(*(long *)(param_1 + 0xb0) + 0x18);
      uVar9 = (ulong)uVar5;
      if (-1 < (int)(uVar5 - 1)) {
        fVar11 = *(float *)(param_1 + 0xc0);
        do {
          lVar2 = *plVar10;
          if (lVar2 == 0) goto LAB_042a93e0;
          uVar5 = (int)uVar9 - 1;
          uVar9 = (ulong)uVar5;
          if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_042a9610;
          lVar4 = *(long *)(param_1 + 0xb0);
          fVar12 = *(float *)(param_1 + 0xc0) * ((float)*(int *)(lVar2 + uVar9 * 4 + 0x20) / fVar13)
          ;
          if (fVar12 <= fVar11) {
            fVar11 = fVar12;
          }
          if (lVar4 == 0) goto LAB_042a93e0;
          if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_042a9610;
          lVar2 = *(long *)(lVar4 + uVar9 * 8 + 0x20);
          if ((lVar2 == 0) || (lVar2 = FUN_04a6a14c(lVar2,DAT_091c5430), lVar2 == 0))
          goto LAB_042a93e0;
          UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
          UnityEngine_RectTransform__set_anchoredPosition(fVar11,lVar2,0);
          fVar11 = fVar11 - *(float *)(param_1 + 0xc4);
        } while (0 < (int)uVar5);
      }
      return;
    }
  }
LAB_042a93e0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


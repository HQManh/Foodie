// rea decompile_all
// name: CakeOrder.Shop.UIShopItemGoldPack$$SetUp
// address: 0x4369128
// body: available
// range: 0x4369128-0x43696af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43696a4 to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43696a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43696ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UIShopItemGoldPack__SetUp
               (undefined1 param_1 [16],float param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_095178b9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182e88);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a3620);
    FUN_03f5c2a4(&DAT_091a3628);
    FUN_03f5c2a4(&DAT_091a3630);
    FUN_03f5c2a4(&DAT_091adf78);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0920a2d0);
    DAT_095178b9 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  *(undefined8 *)(param_3 + 0x88) = param_5;
  local_70 = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0x88),param_5);
  uVar6 = *(undefined8 *)(param_3 + 0x80);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar2 & 1) != 0) {
    lVar7 = *(long *)(param_3 + 0x80);
    if (*(int *)(DAT_09182e88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = CakeOrder_CookingdomInappPackListDefinition__GetSaleTagPercent(param_5,0);
    if (lVar7 == 0) goto LAB_043696a8;
    UnityEngine_GameObject__SetActive(lVar7,0 < iVar1,0);
    if ((*(long *)(param_3 + 0x80) == 0) ||
       (lVar7 = UnityEngine_GameObject__get_transform(*(long *)(param_3 + 0x80),0), lVar7 == 0))
    goto LAB_043696a8;
    UnityEngine_Transform__SetAsLastSibling(lVar7,0);
  }
  lVar7 = *(long *)(DAT_091b49d0 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if ((**(long **)(lVar7 + 0xb8) == 0) ||
     (lVar7 = CakeOrder_Shop_InAppShopDataAccess__GetPackValue(**(long **)(lVar7 + 0xb8),param_5,0),
     param_4 == 0)) goto LAB_043696a8;
  lVar3 = CakeOrder_Shop_UIShopItemGoldPack_GeneralConfig__GetFrameConfig(param_4,param_5);
  if (lVar3 != 0) {
    if (*(long *)(param_3 + 0x50) == 0) goto LAB_043696a8;
    UnityEngine_UI_Image__set_sprite(*(long *)(param_3 + 0x50),*(undefined8 *)(lVar3 + 0x18),0);
    plVar4 = *(long **)(param_3 + 0x50);
    if (plVar4 == (long *)0x0) goto LAB_043696a8;
    (**(code **)(*plVar4 + 0x408))(plVar4,*(undefined8 *)(*plVar4 + 0x410));
    if (*(long *)(param_3 + 0x50) == 0) goto LAB_043696a8;
    lVar5 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)(param_3 + 0x50),0);
    fVar10 = *(float *)(param_4 + 0x24);
    if ((0.0 < fVar10) && (fVar11 = *(float *)(param_4 + 0x28), 0.0 < fVar11)) {
      if (lVar5 == 0) goto LAB_043696a8;
      fVar9 = (float)UnityEngine_RectTransform__get_sizeDelta(lVar5,0);
      fVar10 = fVar10 / fVar9;
      fVar11 = fVar11 / param_2;
      if (fVar11 <= fVar10) {
        fVar10 = fVar11;
      }
      fVar11 = 1.0;
      if (fVar10 <= 1.0) {
        fVar11 = fVar10;
      }
      fVar10 = 0.01;
      if (0.01 <= *(float *)(lVar3 + 0x20)) {
        fVar10 = *(float *)(lVar3 + 0x20);
      }
      UnityEngine_RectTransform__set_sizeDelta
                (fVar10 * fVar9 * fVar11,fVar10 * param_2 * fVar11,lVar5,0);
    }
    if (DAT_09515ce8 == '\0') {
      FUN_03f5c2a4(&DAT_0918cb68);
      DAT_09515ce8 = '\x01';
    }
    if (lVar5 == 0) goto LAB_043696a8;
    UnityEngine_RectTransform__set_anchoredPosition
              (**(undefined4 **)(DAT_0918cb68 + 0xb8),(*(undefined4 **)(DAT_0918cb68 + 0xb8))[1],
               lVar5,0);
  }
  if (lVar7 == 0) {
    uVar6 = System_String__Concat(DAT_0920a2d0,param_5,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogError(uVar6,0);
    lVar7 = UnityEngine_Component__get_gameObject(param_3,0);
    if (lVar7 != 0) {
      UnityEngine_GameObject__SetActive(lVar7,0,0);
      return;
    }
  }
  else {
    lVar3 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if ((**(long **)(lVar3 + 0xb8) != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
      uVar6 = *(undefined8 *)(**(long **)(lVar3 + 0xb8) + 0x40);
      FUN_057e185c(&local_98,*(long *)(lVar7 + 0x10),DAT_091adf78);
      local_70 = local_88;
      puStack_78 = puStack_90;
      local_80 = local_98;
      local_98 = 0;
      puStack_90 = &local_80;
      do {
        uVar2 = FUN_071bd28c(&local_80,DAT_091a3628);
        lVar7 = local_70;
        if ((uVar2 & 1) == 0) goto LAB_043694bc;
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar8 = *(undefined8 *)(local_70 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Equality(uVar8,uVar6,0);
      } while ((uVar2 & 1) == 0);
      *(undefined4 *)(param_3 + 0x90) = *(undefined4 *)(lVar7 + 0x18);
LAB_043694bc:
      FUN_071bd288(&local_80,DAT_091a3620);
      uVar6 = CakeOrder_BaseUI_ShopPriceFormat__GroupedAmount(*(undefined4 *)(param_3 + 0x90),0);
      uVar8 = *(undefined8 *)(param_3 + 0x68);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar8,0);
      if ((uVar2 & 1) != 0) {
        plVar4 = *(long **)(param_3 + 0x68);
        if (plVar4 == (long *)0x0) goto LAB_043696a8;
        (**(code **)(*plVar4 + 0x558))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x560));
      }
      uVar8 = *(undefined8 *)(param_3 + 0x70);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar8,0);
      if ((uVar2 & 1) != 0) {
        plVar4 = *(long **)(param_3 + 0x70);
        if (plVar4 == (long *)0x0) goto LAB_043696a8;
        (**(code **)(*plVar4 + 0x558))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x560));
      }
      if (*(long *)(param_3 + 0x78) != 0) {
        CakeOrder_BaseUI_ButtonBuyWithSale__SetUp(*(long *)(param_3 + 0x78),param_5,0);
        uVar6 = *(undefined8 *)(param_3 + 0x58);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_4 + 0x18) == 0) goto LAB_043696a8;
          lVar7 = *(long *)(param_3 + 0x58);
          fVar10 = (float)UnityEngine_AnimationCurve__Evaluate
                                    ((float)*(int *)(param_3 + 0x90),*(long *)(param_4 + 0x18),0);
          if (lVar7 == 0) goto LAB_043696a8;
          UnityEngine_GameObject__SetActive(lVar7,0.0 < fVar10,0);
        }
        uVar6 = *(undefined8 *)(param_3 + 0x60);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_3 + 0x60) == 0) goto LAB_043696a8;
          UnityEngine_GameObject__SetActive
                    (*(long *)(param_3 + 0x60),*(int *)(param_4 + 0x20) <= *(int *)(param_3 + 0x90),
                     0);
        }
        return;
      }
    }
  }
LAB_043696a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


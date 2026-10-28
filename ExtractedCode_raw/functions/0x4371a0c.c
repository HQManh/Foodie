// rea decompile_all
// name: CakeOrder.Shop.InAppShopDataAccess$$OnPurchaseSuccess
// address: 0x4371a0c
// body: available
// range: 0x4371a0c-0x4372773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4372760 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4372764 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4372770 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_InAppShopDataAccess__OnPurchaseSuccess(long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 local_78 [2];
  undefined4 local_68;
  
  if ((DAT_095178db & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919f9a0);
    FUN_03f5c2a4(&DAT_0919f9d8);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_0919f648);
    FUN_03f5c2a4(&DAT_091ca4d0);
    FUN_03f5c2a4(&DAT_091cb4a8);
    FUN_03f5c2a4(&DAT_091789d8);
    FUN_03f5c2a4(&DAT_091789d0);
    FUN_03f5c2a4(&DAT_091adf68);
    FUN_03f5c2a4(&DAT_0917c588);
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4900);
    FUN_03f5c2a4(&DAT_091b4928);
    FUN_03f5c2a4(&DAT_091b4908);
    FUN_03f5c2a4(&DAT_091b4930);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_09189ef0);
    FUN_03f5c2a4(&DAT_0918a290);
    FUN_03f5c2a4(&DAT_0918aba8);
    FUN_03f5c2a4(&DAT_091eb4a8);
    FUN_03f5c2a4(&DAT_091eb4b0);
    FUN_03f5c2a4(&DAT_09191628);
    FUN_03f5c2a4(&DAT_09222a70);
    FUN_03f5c2a4(&DAT_0921fec0);
    FUN_03f5c2a4(&DAT_0920b198);
    FUN_03f5c2a4(&DAT_0920b1a0);
    FUN_03f5c2a4(&DAT_09216e70);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_0921d0e0);
    FUN_03f5c2a4(&DAT_0920cfd8);
    FUN_03f5c2a4(&DAT_09221b70);
    FUN_03f5c2a4(&DAT_0920a2c8);
    DAT_095178db = 1;
  }
  local_68 = 0;
  bVar1 = CakeOrder_Shop_InAppShopDataAccess__IsRemoveAdsPackId(param_1,param_2);
  if ((bVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 200) = 0;
    CakeOrder_Shop_InAppShopDataAccess__ApplyPermanentRemoveAds(param_1);
  }
  lVar4 = *(long *)(DAT_091b4b60 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar14 = **(long **)(lVar4 + 0xb8);
  lVar4 = thunk_FUN_03f9944c(DAT_0918a290);
  CakeOrder_UI_RewardListData___ctor(lVar4,0);
  if (lVar4 == 0) goto LAB_04372760;
  *(undefined1 *)(lVar4 + 0x28) = 1;
  uVar5 = System_String__op_Equality(param_2,*(undefined8 *)(param_1 + 0x70),0);
  if (((uVar5 & 1) != 0) ||
     (uVar5 = System_String__op_Equality(param_2,*(undefined8 *)(param_1 + 0x80),0),
     (uVar5 & 1) != 0)) {
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = CakeOrder_Localization_CakeLocalization__Tr(DAT_09221b70,0);
    *(undefined8 *)(lVar4 + 0x30) = uVar6;
    thunk_FUN_03f5d7b8();
  }
  if ((bVar1 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x88);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(DAT_09216e70,param_1,0);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x88);
    lVar7 = thunk_FUN_03f9944c(DAT_09189ef0);
    System_Object___ctor(lVar7,0);
    *(undefined8 *)(lVar7 + 0x10) = uVar6;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x10),uVar6);
    CakeOrder_UI_RewardListData__AddReward(lVar4,lVar7,1,0,0);
  }
  if ((*(long *)(param_1 + 0x60) == 0) ||
     (lVar7 = *(long *)(*(long *)(param_1 + 0x60) + 0x10), lVar7 == 0)) goto LAB_04372760;
  if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
    lVar19 = 0;
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    lVar19 = 0;
    uVar5 = 0;
    uVar12 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
    do {
      if (uVar12 <= uVar5) goto LAB_04372764;
      lVar17 = *(long *)(lVar7 + 0x20 + uVar5 * 8);
      if (lVar17 != 0) {
        uVar2 = System_String__op_Inequality(*(undefined8 *)(lVar17 + 0x10),param_2,0);
        iVar3 = iVar3 + ((uVar2 ^ 0xffffffff) & 1);
        if ((uVar2 & 1) == 0) {
          lVar19 = lVar17;
        }
      }
      uVar12 = (ulong)*(uint *)(lVar7 + 0x18);
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)*(uint *)(lVar7 + 0x18));
  }
  if ((lVar19 == 0 & (bVar1 ^ 0xff)) == 0) {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_0437212c;
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_04372760;
    uVar5 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__get_IsDataLoaded
                      (*(long *)(param_1 + 0x28),0);
    uVar5 = uVar5 & 0xffffffff;
  }
  else {
    plVar9 = (long *)FUN_03f5c394(DAT_09180318,3);
    if (plVar9 == (long *)0x0) goto LAB_04372760;
    if ((param_2 != 0) &&
       (lVar7 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0))
    goto LAB_04372768;
    if ((int)plVar9[3] == 0) goto LAB_04372764;
    plVar9[4] = param_2;
    thunk_FUN_03f5d7b8(plVar9 + 4,param_2);
    uVar6 = DAT_0920b198;
    uVar11 = 0;
    if (*(long *)(param_1 + 0x60) != 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x60) + 0x10);
      uVar11 = 0;
      if (lVar7 != 0) {
        local_78[0] = 0;
        FUN_05c3078c(local_78,*(undefined4 *)(lVar7 + 0x18),DAT_091b6f98);
        uVar11 = local_78[0];
      }
    }
    local_78[0] = CONCAT44(local_78[0]._4_4_,(int)((ulong)uVar11 >> 0x20));
    lVar7 = FUN_03f5c42c(DAT_09535420,local_78);
    if ((lVar7 != 0) &&
       (lVar17 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
    goto LAB_04372768;
    if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_04372764;
    plVar9[5] = lVar7;
    thunk_FUN_03f5d7b8(plVar9 + 5,lVar7);
    lVar7 = DAT_0921fec0;
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (lVar17 = *(long *)(*(long *)(param_1 + 0x60) + 0x10), lVar17 != 0)) {
      if (*(int *)(DAT_09191628 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar11 = DAT_091f86e8;
      puVar13 = *(undefined8 **)(DAT_09191628 + 0xb8);
      lVar7 = puVar13[1];
      if (lVar7 == 0) {
        if (*(int *)(DAT_09191628 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar13 = *(undefined8 **)(DAT_09191628 + 0xb8);
        }
        uVar15 = *puVar13;
        lVar7 = thunk_FUN_03f9944c(DAT_091789d0);
        FUN_05322d94(lVar7,uVar15,DAT_091eb4a8,0);
        plVar8 = (long *)(*(long *)(DAT_09191628 + 0xb8) + 8);
        *plVar8 = lVar7;
        thunk_FUN_03f5d7b8(plVar8,lVar7);
      }
      uVar15 = FUN_04b0cafc(lVar17,lVar7,DAT_091cb4a8);
      if (*(int *)(DAT_09191628 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09191628);
      }
      puVar13 = *(undefined8 **)(DAT_09191628 + 0xb8);
      lVar7 = puVar13[2];
      if (lVar7 == 0) {
        if (*(int *)(DAT_09191628 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09191628);
          puVar13 = *(undefined8 **)(DAT_09191628 + 0xb8);
        }
        uVar16 = *puVar13;
        lVar7 = thunk_FUN_03f9944c(DAT_091789d8);
        FUN_05324070(lVar7,uVar16,DAT_091eb4b0,0);
        plVar8 = (long *)(*(long *)(DAT_09191628 + 0xb8) + 0x10);
        *plVar8 = lVar7;
        thunk_FUN_03f5d7b8(plVar8,lVar7);
      }
      uVar15 = FUN_04af8044(uVar15,lVar7,DAT_091ca4d0);
      lVar7 = System_String__Join(uVar11,uVar15,0);
    }
    if ((lVar7 != 0) &&
       (lVar17 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
    goto LAB_04372768;
    if (*(uint *)(plVar9 + 3) < 3) goto LAB_04372764;
    plVar9[6] = lVar7;
    thunk_FUN_03f5d7b8(plVar9 + 6,lVar7);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogErrorFormat(param_1,uVar6,plVar9,0);
LAB_0437212c:
    uVar5 = 0;
  }
  if (1 < iVar3) {
    plVar9 = (long *)FUN_03f5c394(DAT_09180318,2);
    if (plVar9 == (long *)0x0) goto LAB_04372760;
    if ((param_2 != 0) &&
       (lVar7 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0))
    goto LAB_04372768;
    if ((int)plVar9[3] == 0) goto LAB_04372764;
    plVar9[4] = param_2;
    thunk_FUN_03f5d7b8(plVar9 + 4,param_2);
    local_78[0] = CONCAT44(local_78[0]._4_4_,iVar3);
    lVar7 = FUN_03f5c42c(DAT_09535420,local_78);
    if ((lVar7 != 0) &&
       (lVar17 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
    goto LAB_04372768;
    if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_04372764;
    plVar9[5] = lVar7;
    thunk_FUN_03f5d7b8(plVar9 + 5,lVar7);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogErrorFormat(DAT_0920cfd8,plVar9,0);
  }
  if (lVar19 != 0) {
    uVar6 = thunk_FUN_03f9944c(DAT_0917c588);
    FUN_057e0400(uVar6,DAT_091adf68);
    if (*(long *)(lVar19 + 0x18) == 0) goto LAB_04372760;
    uVar12 = *(ulong *)(*(long *)(lVar19 + 0x18) + 0x18);
    if (0 < (int)uVar12) {
      uVar18 = 0;
      do {
        lVar7 = *(long *)(lVar19 + 0x18);
        if (lVar7 == 0) goto LAB_04372760;
        if (*(uint *)(lVar7 + 0x18) <= uVar18) goto LAB_04372764;
        lVar17 = *(long *)(lVar19 + 0x20);
        if (lVar17 == 0) goto LAB_04372760;
        lVar7 = *(long *)(lVar7 + uVar18 * 8 + 0x20);
        if ((long)uVar18 < (long)(int)*(uint *)(lVar17 + 0x18)) {
          if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_04372764;
          iVar3 = *(int *)(lVar17 + uVar18 * 4 + 0x20);
        }
        else {
          iVar3 = 1;
        }
        lVar17 = *(long *)(DAT_091b4970 + 0x20);
        if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_03f95a6c();
        }
        lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_03f95a6c();
        }
        if ((**(long **)(lVar17 + 0xb8) == 0) ||
           (lVar17 = *(long *)(**(long **)(lVar17 + 0xb8) + 0x40), lVar17 == 0)) goto LAB_04372760;
        uVar6 = CakeOrder_HeartSystem_UnlimitedHeartRewardItemInfo__get_Id(lVar17,0);
        uVar10 = System_String__op_Equality(lVar7,uVar6,0);
        if ((uVar10 & 1) == 0) {
          if (lVar14 == 0) goto LAB_04372760;
          lVar17 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetCurrencyById(lVar14,lVar7,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar10 = UnityEngine_Object__op_Equality(lVar17,0,0);
          if ((uVar10 & 1) == 0) {
            if ((lVar17 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
              CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                        (*(long *)(param_1 + 0x28),*(undefined8 *)(lVar17 + 0x18),iVar3,DAT_0921d0e0
                         ,0,0);
              uVar6 = CakeOrder_Shop_InAppShopDataAccess__GetRewardIcon(param_1,param_2,lVar7,iVar3)
              ;
              goto LAB_0437247c;
            }
            goto LAB_04372760;
          }
          plVar9 = (long *)FUN_03f5c394(DAT_09180318,2);
          if (plVar9 == (long *)0x0) goto LAB_04372760;
          if ((param_2 != 0) &&
             (lVar17 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
          goto LAB_04372768;
          if ((int)plVar9[3] == 0) goto LAB_04372764;
          plVar9[4] = param_2;
          thunk_FUN_03f5d7b8(plVar9 + 4,param_2);
          if ((lVar7 != 0) &&
             (lVar17 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar17 == 0))
          goto LAB_04372768;
          if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_04372764;
          plVar9[5] = lVar7;
          thunk_FUN_03f5d7b8(plVar9 + 5,lVar7);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogErrorFormat(DAT_0920a2c8,plVar9,0);
          uVar5 = 0;
        }
        else {
          if (*(long *)(param_1 + 0x30) == 0) goto LAB_04372760;
          CakeOrder_HeartSystem_HeartSystemController__ActivateUnlimitedHeart
                    (*(long *)(param_1 + 0x30),iVar3 * 0x3c,0,0);
          if (*(long *)(param_1 + 0x30) == 0) goto LAB_04372760;
          lVar17 = *(long *)(*(long *)(param_1 + 0x30) + 0x40);
          uVar6 = 0;
LAB_0437247c:
          CakeOrder_UI_RewardListData__AddReward(lVar4,lVar17,iVar3,uVar6,0);
        }
        uVar18 = uVar18 + 1;
      } while ((uVar12 & 0xffffffff) != uVar18);
    }
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    plVar9 = (long *)FUN_03f5c394(DAT_09180318,1);
    if (plVar9 == (long *)0x0) goto LAB_04372760;
    if ((param_2 != 0) &&
       (lVar14 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
LAB_04372768:
      uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,0);
    }
    if ((int)plVar9[3] == 0) {
LAB_04372764:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar9[4] = param_2;
    thunk_FUN_03f5d7b8(plVar9 + 4,param_2);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogErrorFormat(DAT_0920b1a0,plVar9,0);
  }
  else {
    uVar6 = CakeOrder_Shop_InAppShopDataAccess__GetKeyCountPurchasedPack(param_2);
    if ((*(long *)(param_1 + 0x38) == 0) ||
       (lVar14 = *(long *)(*(long *)(param_1 + 0x38) + 0x18), lVar14 == 0)) goto LAB_04372760;
    uVar12 = FUN_06fca63c(lVar14,uVar6,DAT_0919f9a0);
    lVar14 = *(long *)(param_1 + 0x38);
    if ((uVar12 & 1) == 0) {
      if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x18), lVar14 == 0)) goto LAB_04372760;
      iVar3 = 1;
    }
    else {
      if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x18), lVar14 == 0)) goto LAB_04372760;
      iVar3 = FUN_06fca3c8(lVar14,uVar6,DAT_0919f9d8);
      iVar3 = iVar3 + 1;
    }
    FUN_06fca434(lVar14,uVar6,iVar3,DAT_0919f9f0);
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_04372760;
    lVar14 = *(long *)(*(long *)(param_1 + 0x38) + 0x30);
    uVar6 = CakeOrder_Shop_InAppShopDataAccess__GetKeyDatetimeLastPurchasedPack(param_2);
    if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188c20);
    }
    uVar11 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow(0);
    if (lVar14 == 0) goto LAB_04372760;
    FUN_06fbfb04(lVar14,uVar6,uVar11,DAT_0919f648);
    uVar12 = FUN_05a8eda4(DAT_091b4908);
    if ((uVar12 & 1) != 0) {
      lVar14 = *(long *)(DAT_091b4900 + 0x20);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_03f95a6c();
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_03f95a6c();
      }
      lVar7 = **(long **)(lVar14 + 0xb8);
      lVar14 = thunk_FUN_03f9944c(DAT_0918aba8);
      CakeOrder_Shop_ShopPlayerFacts___ctor(lVar14,0);
      if ((lVar14 == 0) || (lVar7 == 0)) goto LAB_04372760;
      CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__SetInt
                (lVar7,DAT_09222a70,*(undefined4 *)(lVar14 + 0x18),0);
    }
  }
  if (*(long *)(param_1 + 0x28) == 0) {
LAB_04372760:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(*(long *)(param_1 + 0x28),0);
  if (((uVar5 & 1) != 0) && (uVar5 = FUN_05a8eda4(DAT_091b4930), (uVar5 & 1) != 0)) {
    lVar14 = *(long *)(DAT_091b4928 + 0x20);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03f95a6c();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03f95a6c();
    }
    if (**(long **)(lVar14 + 0xb8) == 0) goto LAB_04372760;
    plVar9 = (long *)(**(long **)(lVar14 + 0xb8) + 0x58);
    *plVar9 = param_2;
    thunk_FUN_03f5d7b8(plVar9,param_2);
  }
  lVar14 = *(long *)(param_1 + 0x48);
  if (lVar14 != 0) {
    (**(code **)(lVar14 + 0x18))
              (*(undefined8 *)(lVar14 + 0x40),param_2,lVar4,*(undefined8 *)(lVar14 + 0x28));
  }
  return;
}


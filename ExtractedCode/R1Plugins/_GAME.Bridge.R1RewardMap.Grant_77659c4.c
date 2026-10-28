// rea decompile_all
// name: _GAME.Bridge.R1RewardMap$$Grant
// address: 0x77659c4
// body: available
// range: 0x77659c4-0x7765e17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7765acc to 0x77b1df8 _GAME.Profile.ProfileManager$$UnlockEquipAvatar (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7765b10 to 0x77b149c _GAME.Profile.ProfileManager$$UnlockEquipNameFx (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7765b70 to 0x42f7344 CakeOrder.HeartSystem.HeartSystemController$$ActivateUnlimitedHeart (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7765c20 to 0x77b1184 _GAME.Profile.ProfileManager$$UnlockEquipFrame (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7765e14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1RewardMap__Grant(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_24;
  
  if ((DAT_09522c68 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_091b49d8);
    FUN_03f5c2a4(&DAT_091b4978);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_09189978);
    FUN_03f5c2a4(&DAT_0918a448);
    FUN_03f5c2a4(&DAT_0918a450);
    FUN_03f5c2a4(&DAT_09214138);
    FUN_03f5c2a4(&DAT_09214130);
    DAT_09522c68 = 1;
  }
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar1 < 0x33) {
      if (iVar1 == 0) {
        if (*(int *)(DAT_09189978 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (1 < iVar2 - 1U) {
          return;
        }
        uVar4 = FUN_05a8eda4(DAT_091b49d8);
        if ((uVar4 & 1) == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(DAT_091b49d0 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c();
          }
          lVar5 = **(long **)(lVar5 + 0xb8);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Inequality(lVar5,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(param_1 + 0x14) == 2) {
            if (lVar5 == 0) goto LAB_07765e14;
            uVar4 = CakeOrder_Shop_InAppShopDataAccess__GrantRemoveAdsAsPurchase(lVar5,0);
          }
          else {
            if (lVar5 == 0) goto LAB_07765e14;
            uVar4 = CakeOrder_Shop_InAppShopDataAccess__GrantRemoveAdsGift(lVar5,0);
          }
          if ((uVar4 & 1) != 0) {
            return;
          }
        }
        local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)(param_1 + 0x14));
        uVar6 = FUN_03f5c42c(DAT_09535420,&local_48);
        local_24 = param_2;
        uVar7 = FUN_03f5c42c(DAT_0918a448,&local_24);
        uVar6 = System_String__Format(DAT_09214130,uVar6,uVar7,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__LogError(uVar6,0);
        return;
      }
      if (iVar1 == 0x32) {
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        _GAME_Profile_ProfileManager__UnlockEquipAvatar(iVar2,0);
        return;
      }
    }
    else {
      if (iVar1 == 0x33) {
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        _GAME_Profile_ProfileManager__UnlockEquipFrame(iVar2,0);
        return;
      }
      if (iVar1 == 0x34) {
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        _GAME_Profile_ProfileManager__UnlockEquipNameFx(iVar2,0);
        return;
      }
    }
    if (0 < iVar2) {
      if (iVar1 == 3) {
        uVar4 = FUN_05a8eda4(DAT_091b4978);
        if ((uVar4 & 1) != 0) {
          lVar5 = FUN_039af8ec(DAT_091b4970);
          if (lVar5 != 0) {
            CakeOrder_HeartSystem_HeartSystemController__ActivateUnlimitedHeart
                      (lVar5,*(int *)(param_1 + 0x14) * 0x3c,1,0);
            return;
          }
LAB_07765e14:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      else {
        if (*(int *)(DAT_09189978 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = _GAME_Bridge_R1RewardMap__GetCookOrderId(iVar1);
        if (lVar5 == 0) {
          local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)(param_1 + 0x10));
          uVar6 = FUN_03f5c42c(DAT_0918a450,&local_48);
          local_24 = *(undefined4 *)(param_1 + 0x14);
          uVar7 = FUN_03f5c42c(DAT_09535420,&local_24);
          uVar6 = System_String__Format(DAT_09214138,uVar6,uVar7,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogWarning(uVar6,0);
        }
        else {
          uVar3 = *(undefined4 *)(param_1 + 0x14);
          local_48 = DAT_0918a448;
          uStack_40 = 0xffffffffffffffff;
          local_38 = param_2;
          uVar6 = System_Enum__ToString(&local_48,0);
          _GAME_Bridge_CookOrderBridge__ChangeCurrency(lVar5,uVar3,uVar6);
        }
      }
    }
  }
  return;
}


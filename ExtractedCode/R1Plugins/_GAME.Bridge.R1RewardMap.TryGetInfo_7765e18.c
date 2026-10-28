// rea decompile_all
// name: _GAME.Bridge.R1RewardMap$$TryGetInfo
// address: 0x7765e18
// body: available
// range: 0x7765e18-0x7766253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77661bc to 0x8663838 UnityEngine.Object$$op_Inequality (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7766250 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _GAME_Bridge_R1RewardMap__TryGetInfo(long param_1,long *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_09522c6a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186500);
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_091b49d8);
    FUN_03f5c2a4(&DAT_091b4978);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189978);
    FUN_03f5c2a4(&DAT_09189ef0);
    FUN_03f5c2a4(&DAT_0918a450);
    FUN_03f5c2a4(&DAT_0918ac40);
    FUN_03f5c2a4(&DAT_092214b8);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09522c6a = 1;
  }
  *param_2 = 0;
  thunk_FUN_03f5d7b8(param_2,0);
  *param_3 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (*(int *)(DAT_09189978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (iVar1 - 0x32U < 3) {
      if (*(int *)(DAT_09189978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = _GAME_Bridge_R1RewardMap__R1ItemSprite(param_1);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar4 = UnityEngine_Object__op_Equality(uVar3,0,0);
      if ((uVar4 & 1) == 0) {
        local_34 = *(undefined4 *)(param_1 + 0x10);
        uVar5 = FUN_03f5c42c(DAT_0918a450,&local_34);
        local_38 = *(undefined4 *)(param_1 + 0x14);
        uVar6 = FUN_03f5c42c(DAT_09535420,&local_38);
        uVar5 = System_String__Format(DAT_092214b8,uVar5,uVar6,0);
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (*(int *)(DAT_09189978 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09189978);
        }
        uVar6 = _GAME_Bridge_R1RewardMap__R1ItemName(uVar2);
        lVar7 = thunk_FUN_03f9944c(DAT_0918ac40);
        CakeOrder_UI_SimpleRewardItemInfo___ctor
                  (lVar7,uVar5,uVar6,DAT_091f5700,uVar3,0,DAT_091f5700,0,0,0);
        *param_2 = lVar7;
        thunk_FUN_03f5d7b8(param_2,lVar7);
        *param_3 = 1;
        return 1;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x10) == 0) {
        if (*(int *)(DAT_09189978 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((iVar1 - 1U < 2) && (uVar4 = FUN_05a8eda4(DAT_091b49d8), (uVar4 & 1) != 0)) {
          lVar7 = FUN_039af8ec(DAT_091b49d0);
          if (lVar7 != 0) {
            uVar3 = *(undefined8 *)(lVar7 + 0x88);
            lVar7 = thunk_FUN_03f9944c(DAT_09189ef0);
            CakeOrder_Shop_RemoveAdsRewardItemInfo___ctor(lVar7,uVar3,0);
            *param_2 = lVar7;
            thunk_FUN_03f5d7b8(param_2,lVar7);
            lVar7 = *param_2;
            *param_3 = 1;
            if (lVar7 != 0) {
              uVar3 = FUN_039afee4(5,DAT_09186500);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188ad0);
              }
              uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
              return uVar4;
            }
          }
LAB_07766250:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      else {
        *param_3 = iVar1;
        iVar1 = *(int *)(param_1 + 0x10);
        if (iVar1 == 3) {
          uVar4 = FUN_05a8eda4(DAT_091b4978);
          if ((uVar4 & 1) != 0) {
            lVar7 = *(long *)(DAT_091b4970 + 0x20);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c();
            }
            if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_07766250;
            lVar7 = *(long *)(**(long **)(lVar7 + 0xb8) + 0x40);
            *param_2 = lVar7;
LAB_0776621c:
            thunk_FUN_03f5d7b8(param_2,lVar7);
            return (ulong)(*param_2 != 0);
          }
        }
        else {
          if (*(int *)(DAT_09189978 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar7 = _GAME_Bridge_R1RewardMap__GetCookOrderId(iVar1);
          if (lVar7 == 0) {
            return 0;
          }
          uVar4 = FUN_05a8f088(DAT_091b4b68);
          if ((uVar4 & 1) != 0) {
            lVar8 = FUN_039af8ec(DAT_091b4b60);
            if (lVar8 == 0) goto LAB_07766250;
            lVar7 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetCurrencyById(lVar8,lVar7,0);
            *param_2 = lVar7;
            goto LAB_0776621c;
          }
        }
      }
    }
  }
  return 0;
}


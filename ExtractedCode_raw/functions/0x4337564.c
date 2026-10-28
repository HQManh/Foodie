// rea decompile_all
// name: CakeOrder.Home.UIPetAssistantDetails$$BuyUses
// address: 0x4337564
// body: available
// range: 0x4337564-0x4337867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43377c8 to 0x42d2044 CakeOrder.BaseUI.SceneMainUI$$ShowToast (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4337850 to 0x4336ab8 CakeOrder.Home.UIPetAssistantDetails$$RefreshUsesSection (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4337854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4337858 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4337864 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIPetAssistantDetails__BuyUses(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_09517703 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09224070);
    FUN_03f5c2a4(&DAT_09220c60);
    DAT_09517703 = 1;
  }
  lVar2 = *(long *)(DAT_091b48d0 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    CakeOrder_AudioManagerCakeOrder__Play(**(long **)(lVar2 + 0xb8),0,0);
    if ((*(char *)(param_1 + 0x144) == '\0') ||
       (uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x48),0), (uVar3 & 1) != 0))
    {
      return;
    }
    lVar2 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
    if (lVar2 != 0) {
      iVar1 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount(lVar2,param_2,0);
      if (iVar1 < param_3) {
        lVar2 = *(long *)(DAT_091b4b60 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03f95a6c();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03f95a6c();
        }
        if (**(long **)(lVar2 + 0xb8) != 0) {
          lVar2 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetCurrencyById
                            (**(long **)(lVar2 + 0xb8),param_2,0);
          lVar7 = *(long *)(param_1 + 0x58);
          plVar4 = (long *)FUN_03f5c394(DAT_09180318,1);
          if ((lVar2 != 0) &&
             (lVar2 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedName(lVar2,0),
             plVar4 != (long *)0x0)) {
            if ((lVar2 != 0) &&
               (lVar5 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
              uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar6,0);
            }
            if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar4[4] = lVar2;
            thunk_FUN_03f5d7b8(plVar4 + 4,lVar2);
            if (*(int *)(DAT_09182278 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_09224070,plVar4,0);
            if (lVar7 != 0) {
              CakeOrder_BaseUI_SceneMainUI__ShowToast(0x40000000,0,lVar7,uVar6,0);
              return;
            }
          }
        }
      }
      else {
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                  (lVar2,param_2,-param_3,DAT_09220c60,0,0);
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(lVar2,0);
        if (*(long *)(param_1 + 0x60) != 0) {
          iVar1 = CakeOrder_SaveProfile_PetAssistantDataAccess__GetRemainingUses
                            (*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x48),0);
          if (*(long *)(param_1 + 0x60) != 0) {
            CakeOrder_SaveProfile_PetAssistantDataAccess__SetRemainingUses
                      (*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x48),
                       *(int *)(param_1 + 0x140) + iVar1,0);
            if (*(long *)(param_1 + 0x60) != 0) {
              CakeOrder_SaveProfile_PetAssistantDataAccess__SaveData(*(long *)(param_1 + 0x60),0);
              CakeOrder_Home_UIPetAssistantDetails__RefreshUsesSection(param_1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: CakeOrder.Home.UIItemToolUpgrade$$OnClickUpgrade
// address: 0x4349308
// body: available
// range: 0x4349308-0x43496bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434955c to 0x42d2044 CakeOrder.BaseUI.SceneMainUI$$ShowToast (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43496a8 to 0x427f344 CakeOrder.SaveProfile.PlayerMapLevelProgressDataAccess$$SaveData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43496ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43496b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43496bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIItemToolUpgrade__OnClickUpgrade(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_09517780 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09224070);
    FUN_03f5c2a4(&DAT_09224020);
    FUN_03f5c2a4(&DAT_09224128);
    DAT_09517780 = 1;
  }
  if (*(int *)(param_1 + 0xdc) + 1 < *(int *)(param_1 + 0xe0)) {
    if ((*(long *)(param_1 + 0x58) == 0) ||
       (lVar4 = CakeOrder_MapToolConfig_ToolData__get_upgradePrices(*(long *)(param_1 + 0x58),0),
       lVar4 == 0)) goto LAB_043496ac;
    uVar1 = *(int *)(param_1 + 0xdc) + 1;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
LAB_043496b0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    iVar2 = *(int *)(lVar4 + (long)(int)uVar1 * 4 + 0x20);
    lVar4 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c(lVar4);
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_043496ac;
    lVar8 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x48);
    lVar4 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if ((lVar8 == 0) || (**(long **)(lVar4 + 0xb8) == 0)) goto LAB_043496ac;
    iVar3 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                      (**(long **)(lVar4 + 0xb8),*(undefined8 *)(lVar8 + 0x18),0);
    if (iVar2 <= iVar3) {
      lVar4 = *(long *)(DAT_091b4b48 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      if (**(long **)(lVar4 + 0xb8) != 0) {
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                  (**(long **)(lVar4 + 0xb8),*(undefined8 *)(lVar8 + 0x18),-iVar2,DAT_09224128,0,0);
        lVar4 = *(long *)(DAT_091b4a58 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        if ((*(long *)(param_1 + 0x50) != 0) && (**(long **)(lVar4 + 0xb8) != 0)) {
          CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__UpgradeToolLevel
                    (**(long **)(lVar4 + 0xb8),*(undefined8 *)(param_1 + 0x48),
                     *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x18),0);
          lVar4 = *(long *)(DAT_091b4b48 + 0x20);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f95a6c();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f95a6c();
          }
          if (**(long **)(lVar4 + 0xb8) != 0) {
            CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar4 + 0xb8),0);
            lVar4 = *(long *)(DAT_091b4a58 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_03f95a6c();
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_03f95a6c();
            }
            if (**(long **)(lVar4 + 0xb8) != 0) {
              CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__SaveData
                        (**(long **)(lVar4 + 0xb8),0);
              return;
            }
          }
        }
      }
      goto LAB_043496ac;
    }
    lVar4 = *(long *)(param_1 + 0xf0);
    plVar5 = (long *)FUN_03f5c394(DAT_09180318,1);
    lVar8 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedName(lVar8,0);
    if (plVar5 == (long *)0x0) goto LAB_043496ac;
    if ((lVar8 != 0) &&
       (lVar6 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,0);
    }
    if ((int)plVar5[3] == 0) goto LAB_043496b0;
    plVar5[4] = lVar8;
    thunk_FUN_03f5d7b8(plVar5 + 4,lVar8);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_09224070,plVar5,0);
  }
  else {
    lVar4 = *(long *)(param_1 + 0xf0);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = CakeOrder_Localization_CakeLocalization__Tr(DAT_09224020,0);
  }
  if (lVar4 != 0) {
    CakeOrder_BaseUI_SceneMainUI__ShowToast(0x40000000,0,lVar4,uVar7,0);
    return;
  }
LAB_043496ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


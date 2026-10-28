// rea decompile_all
// name: CakeOrder.Home.UICakeSettingHome$$OnClickClearData
// address: 0x433ce40
// body: available
// range: 0x433ce40-0x433d03b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433d034 to 0x427f344 CakeOrder.SaveProfile.PlayerMapLevelProgressDataAccess$$SaveData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x433d038 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UICakeSettingHome__OnClickClearData(void)

{
  long lVar1;
  ulong uVar2;
  
  if ((DAT_09517729 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_091b4a18);
    FUN_03f5c2a4(&DAT_091b4a20);
    DAT_09517729 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteAll(0);
  lVar1 = *(long *)(DAT_091b4b48 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ResetData(**(long **)(lVar1 + 0xb8),0);
    lVar1 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    if (**(long **)(lVar1 + 0xb8) != 0) {
      CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__ResetData(**(long **)(lVar1 + 0xb8),0)
      ;
      uVar2 = FUN_05a8eda4(DAT_091b4a20);
      if ((uVar2 & 1) != 0) {
        lVar1 = *(long *)(DAT_091b4a18 + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_03f95a6c();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_03f95a6c();
        }
        if (**(long **)(lVar1 + 0xb8) == 0) goto LAB_0433d038;
        LiveOpsR1_LiveOpsManager__ResetData(**(long **)(lVar1 + 0xb8),0);
      }
      lVar1 = CakeOrderSubsystem_Base_CakeOrderSessionState__get_Instance(0);
      if (lVar1 != 0) {
        CakeOrderSubsystem_Base_CakeOrderSessionState__ClearAll(lVar1,0);
        CakeOrder_Boot_BootGameCookOrder__LastSetupBeforePlay(0);
        lVar1 = *(long *)(DAT_091b4b48 + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_03f95a6c();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_03f95a6c();
        }
        if (**(long **)(lVar1 + 0xb8) != 0) {
          CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar1 + 0xb8),0);
          lVar1 = *(long *)(DAT_091b4a58 + 0x20);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03f95a6c();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03f95a6c();
          }
          if (**(long **)(lVar1 + 0xb8) != 0) {
            CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__SaveData
                      (**(long **)(lVar1 + 0xb8),0);
            return;
          }
        }
      }
    }
  }
LAB_0433d038:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


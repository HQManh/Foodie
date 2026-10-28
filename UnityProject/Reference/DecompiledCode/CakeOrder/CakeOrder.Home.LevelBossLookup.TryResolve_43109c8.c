// rea decompile_all
// name: CakeOrder.Home.LevelBossLookup$$TryResolve
// address: 0x43109c8
// body: available
// range: 0x43109c8-0x4310ce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4310cd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4310cdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4310ce0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_Home_LevelBossLookup__TryResolve(undefined8 param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_78;
  undefined8 *puStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  long local_38;
  
  if ((DAT_095175ca & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2858);
    FUN_03f5c2a4(&DAT_091a2860);
    FUN_03f5c2a4(&DAT_091a2868);
    FUN_03f5c2a4(&DAT_091ac1f8);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4aa8);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_091b4ab0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189e78);
    DAT_095175ca = 1;
  }
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  uVar2 = System_String__IsNullOrEmpty(param_1,0);
  uVar3 = 1;
  if ((-1 < param_2) && ((uVar2 & 1) == 0)) {
    uVar2 = FUN_05a8eda4(DAT_091b4ab0);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_05a8f088(DAT_091b4b68), (uVar2 & 1) != 0)) {
      if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = CakeOrder_RemoteConfigDefaultSetterCakeOrder__GetRemoteKeyForMapLevelDesign
                        (param_1,param_2,0);
      lVar6 = *(long *)(DAT_091b4aa8 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c(lVar6);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      if (**(long **)(lVar6 + 0xb8) == 0) {
LAB_04310cdc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar6 + 0xb8),uVar3,0);
      uVar2 = System_String__IsNullOrEmpty(lVar6,0);
      if ((uVar2 & 1) == 0) {
        if (lVar6 != 0) {
          iVar1 = System_String__IndexOf(lVar6,0x7e,0);
          if (-1 < iVar1) {
            lVar6 = System_String__Substring(lVar6,0,iVar1,0);
          }
          lVar4 = FUN_039af8ec(DAT_091b4b60);
          if (lVar4 != 0) {
            uVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetAllCharacterIds(lVar4,0);
            uVar2 = CookingGraph_CustomerOrderTranslator__TryParse
                              (lVar6,&local_38,&uStack_48,uVar3,0);
            if ((uVar2 & 1) != 0) {
              if ((local_38 == 0) || (*(long *)(local_38 + 0x10) == 0)) goto LAB_04310cdc;
              FUN_057e185c(&local_78,*(long *)(local_38 + 0x10),DAT_091ac1f8);
              uStack_58 = puStack_70;
              local_60 = local_78;
              local_50 = local_68;
              local_78 = 0;
              puStack_70 = &local_60;
              do {
                do {
                  do {
                    uVar2 = FUN_071bd28c(&local_60,DAT_091a2860);
                    lVar6 = local_50;
                    if ((uVar2 & 1) == 0) goto LAB_04310cc8;
                    if (local_50 == 0) {
                      uVar3 = 0;
                    }
                    else {
                      uVar3 = *(undefined8 *)(local_50 + 0x38);
                    }
                    uVar2 = System_String__IsNullOrEmpty(uVar3,0);
                  } while ((uVar2 & 1) != 0);
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar5 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetCharacterSOById
                                    (lVar4,*(undefined8 *)(lVar6 + 0x38),0);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar2 = UnityEngine_Object__op_Equality(lVar5,0,0);
                } while ((uVar2 & 1) != 0);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
              } while (*(int *)(lVar5 + 0x3c) != 2);
              *param_3 = *(undefined8 *)(lVar6 + 0x38);
              thunk_FUN_03f5d7b8(param_3);
LAB_04310cc8:
              FUN_039b66e4(&local_78);
            }
            return 1;
          }
        }
        goto LAB_04310cdc;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


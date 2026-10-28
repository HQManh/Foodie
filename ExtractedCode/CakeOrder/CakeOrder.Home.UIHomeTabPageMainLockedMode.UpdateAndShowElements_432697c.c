// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMainLockedMode$$UpdateAndShowElements
// address: 0x432697c
// body: available
// range: 0x432697c-0x4326c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4326aa0 to 0x42d81ec CakeOrder.BaseUI.UIElementAbstract$$Hide (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4326c04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4326c08 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4326c14 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMainLockedMode__UpdateAndShowElements
               (undefined4 param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 local_24;
  
  if ((DAT_0951767e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0921f170);
    DAT_0951767e = 1;
  }
  if ((*(long *)(param_2 + 0x48) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_2 + 0x48) + 0x10), lVar3 != 0)) {
    uVar6 = *(undefined8 *)(lVar3 + 0x20);
    lVar3 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      uVar1 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__IsMapUnlocked
                        (**(long **)(lVar3 + 0xb8),uVar6,0);
      if ((uVar1 & 1) == 0) {
        uVar1 = CakeOrder_Home_UIHomeTabPageMainLockedMode__IsCurrentMapUnlockable(param_2);
        lVar3 = *(long *)(param_2 + 0x70);
        if ((uVar1 & 1) == 0) {
          if (lVar3 != 0) {
            CakeOrder_BaseUI_UIElementAbstract__Hide(param_1,lVar3,0);
            if (*(long *)(param_2 + 0x78) != 0) {
              CakeOrder_BaseUI_UIElementAbstract__Show(param_1,*(long *)(param_2 + 0x78),0);
              lVar3 = *(long *)(DAT_091b4b60 + 0x20);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03f95a6c();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03f95a6c();
              }
              if (((*(long *)(param_2 + 0x48) != 0) &&
                  (lVar4 = *(long *)(*(long *)(param_2 + 0x48) + 0x10), lVar4 != 0)) &&
                 (**(long **)(lVar3 + 0xb8) != 0)) {
                lVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO
                                  (**(long **)(lVar3 + 0xb8),*(int *)(lVar4 + 0x28) + -1,0);
                plVar5 = *(long **)(param_2 + 0x80);
                plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
                if (lVar3 != 0) {
                  local_24 = *(undefined4 *)(lVar3 + 0x50);
                  lVar3 = FUN_03f5c42c(DAT_09535420,&local_24);
                  if (plVar2 != (long *)0x0) {
                    if ((lVar3 != 0) &&
                       (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                       lVar4 == 0)) {
                      uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar6,0);
                    }
                    if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar2[4] = lVar3;
                    thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
                    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar6 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_0921f170,plVar2,0)
                    ;
                    if (plVar5 != (long *)0x0) {
                      (**(code **)(*plVar5 + 0x558))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x560));
                      return;
                    }
                  }
                }
              }
            }
          }
          goto LAB_04326c04;
        }
        if (lVar3 == 0) goto LAB_04326c04;
        CakeOrder_BaseUI_UIElementAbstract__Show(param_1,lVar3,0);
      }
      else {
        if (*(long *)(param_2 + 0x70) == 0) goto LAB_04326c04;
        CakeOrder_BaseUI_UIElementAbstract__Hide(param_1,*(long *)(param_2 + 0x70),0);
      }
      if (*(long *)(param_2 + 0x78) != 0) {
        CakeOrder_BaseUI_UIElementAbstract__Hide(param_1,*(long *)(param_2 + 0x78),0);
        return;
      }
    }
  }
LAB_04326c04:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


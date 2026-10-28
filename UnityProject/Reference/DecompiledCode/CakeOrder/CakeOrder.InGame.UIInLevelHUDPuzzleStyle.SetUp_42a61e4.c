// rea decompile_all
// name: CakeOrder.InGame.UIInLevelHUDPuzzleStyle$$SetUp
// address: 0x42a61e4
// body: available
// range: 0x42a61e4-0x42a64cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a64bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a64c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a64cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelHUDPuzzleStyle__SetUp(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  int local_44;
  
  if ((DAT_09517271 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0921a2c8);
    DAT_09517271 = 1;
  }
  if ((param_3 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    CakeOrder_InGame_UIInGameNumberCounter__AddHoldingSource
              (*(long *)(param_1 + 0x40),*(undefined8 *)(param_3 + 0x20),0);
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x1e8))(plVar1,*(undefined8 *)(*plVar1 + 0x1f0));
      plVar6 = *(long **)(param_1 + 0x48);
      plVar1 = (long *)FUN_03f5c394(DAT_09180318,1);
      if (param_2 != 0) {
        local_44 = *(int *)(param_2 + 0x1c) + 1;
        lVar2 = FUN_03f5c42c(DAT_09535420,&local_44);
        if (plVar1 != (long *)0x0) {
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
            uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar4,0);
          }
          if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar1[4] = lVar2;
          thunk_FUN_03f5d7b8(plVar1 + 4,lVar2);
          if (*(int *)(DAT_09182278 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_0921a2c8,plVar1,0);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x558))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x560));
            if (*(long *)(param_1 + 0x50) != 0) {
              CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(param_1 + 0x50),0);
              if (*(long *)(param_1 + 0x38) != 0) {
                CakeOrder_UICurrencyCounter__AddHoldingSource
                          (*(long *)(param_1 + 0x38),*(undefined8 *)(param_3 + 0x28),0);
                plVar1 = *(long **)(param_1 + 0x38);
                if (plVar1 != (long *)0x0) {
                  (**(code **)(*plVar1 + 0x1e8))(plVar1,*(undefined8 *)(*plVar1 + 0x1f0));
                  if (*(long *)(param_1 + 0x70) != 0) {
                    CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(param_1 + 0x70),0);
                    plVar1 = *(long **)(param_1 + 0x78);
                    if (plVar1 != (long *)0x0) {
                      (**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
                      CakeOrder_InGame_UIInLevelHUDPuzzleStyle__LoadSpeedBudget(param_1);
                      if (*(long *)(param_1 + 0x88) != 0) {
                        CakeOrder_BaseUI_UIElementAbstract__HideImmediate
                                  (*(long *)(param_1 + 0x88),0);
                      }
                      CakeOrder_InGame_UIInLevelHUDPuzzleStyle__UpdateSpeedBudgetText(param_1);
                      uVar4 = *(undefined8 *)(param_1 + 0x58);
                      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar5 = UnityEngine_Object__op_Implicit(uVar4,0);
                      if (((uVar5 & 1) == 0) ||
                         (uVar5 = FUN_05a8f088(DAT_091b4b68), (uVar5 & 1) == 0)) {
                        return;
                      }
                      lVar2 = *(long *)(DAT_091b4b60 + 0x20);
                      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                        lVar2 = FUN_03f95a6c();
                      }
                      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
                      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                        lVar2 = FUN_03f95a6c();
                      }
                      if ((((*(long *)(param_2 + 0x28) != 0) && (**(long **)(lVar2 + 0xb8) != 0)) &&
                          (lVar2 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetWeatherSO
                                             (**(long **)(lVar2 + 0xb8),
                                              *(undefined4 *)(*(long *)(param_2 + 0x28) + 0x10),0),
                          lVar2 != 0)) && (*(long *)(param_1 + 0x60) != 0)) {
                        UnityEngine_UI_Image__set_sprite
                                  (*(long *)(param_1 + 0x60),*(undefined8 *)(lVar2 + 0x38),0);
                        if (*(long *)(param_1 + 0x60) != 0) {
                          UnityEngine_Behaviour__set_enabled(*(long *)(param_1 + 0x60),1,0);
                          if (*(long *)(param_1 + 0x58) != 0) {
                            CakeOrder_BaseUI_UIElementAbstract__HideImmediate
                                      (*(long *)(param_1 + 0x58),0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


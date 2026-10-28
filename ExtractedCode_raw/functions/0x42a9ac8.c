// rea decompile_all
// name: CakeOrder.InGame.UIInLevelHUDHeartStyle$$SetUp
// address: 0x42a9ac8
// body: available
// range: 0x42a9ac8-0x42a9cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a9cdc to 0x42cae94 CakeOrder.BaseUI.UIElementAbstract$$HideImmediate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42a9cf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelHUDHeartStyle__SetUp(long param_1,long param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09517265 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517265 = 1;
  }
  if ((param_3 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    CakeOrder_InGame_UIInGameNumberCounter__AddHoldingSource
              (*(long *)(param_1 + 0x40),*(undefined8 *)(param_3 + 0x20),0);
    plVar2 = *(long **)(param_1 + 0x40);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
      if (param_2 != 0) {
        lVar4 = *(long *)(param_2 + 200);
        *(bool *)(param_1 + 0x62) = lVar4 != 0;
        if (lVar4 != 0) {
          if (*(long *)(param_1 + 0x48) == 0) goto LAB_042a9cf0;
          CakeOrder_InGame_UIInGameNumberCounter__AddHoldingSource
                    (*(long *)(param_1 + 0x48),*(undefined8 *)(param_3 + 0x38),0);
        }
        plVar2 = *(long **)(param_1 + 0x48);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
          uVar5 = *(undefined8 *)(param_1 + 0x38);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          bVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
          *(byte *)(param_1 + 0x60) = bVar1 & 1;
          if ((bVar1 & 1) != 0) {
            if (*(long *)(param_1 + 0x38) == 0) goto LAB_042a9cf0;
            CakeOrder_UICurrencyCounter__AddHoldingSource
                      (*(long *)(param_1 + 0x38),*(undefined8 *)(param_3 + 0x28),0);
          }
          uVar5 = *(undefined8 *)(param_1 + 0x38);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
          if ((uVar3 & 1) != 0) {
            plVar2 = *(long **)(param_1 + 0x38);
            if (plVar2 == (long *)0x0) goto LAB_042a9cf0;
            (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
          }
          uVar5 = *(undefined8 *)(param_1 + 0x50);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
          if (((uVar3 & 1) == 0) || (uVar3 = FUN_05a8f088(DAT_091b4b68), (uVar3 & 1) == 0)) {
            return;
          }
          lVar4 = *(long *)(DAT_091b4b60 + 0x20);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f95a6c();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f95a6c();
          }
          if ((((*(long *)(param_2 + 0x28) != 0) && (**(long **)(lVar4 + 0xb8) != 0)) &&
              (lVar4 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetWeatherSO
                                 (**(long **)(lVar4 + 0xb8),
                                  *(undefined4 *)(*(long *)(param_2 + 0x28) + 0x10),0), lVar4 != 0))
             && (*(long *)(param_1 + 0x58) != 0)) {
            UnityEngine_UI_Image__set_sprite
                      (*(long *)(param_1 + 0x58),*(undefined8 *)(lVar4 + 0x38),0);
            if (*(long *)(param_1 + 0x58) != 0) {
              UnityEngine_Behaviour__set_enabled(*(long *)(param_1 + 0x58),1,0);
              if (*(long *)(param_1 + 0x50) != 0) {
                CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(param_1 + 0x50),0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_042a9cf0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


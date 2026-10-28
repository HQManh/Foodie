// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder$$OnUpgradeRewardGranted
// address: 0x430597c
// body: available
// range: 0x430597c-0x4305b1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4305afc to 0x44f6690 Utilities.AsyncExtension$$RunWithLogException (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4305b18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4305b1c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder__OnUpgradeRewardGranted
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_09517581 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918a290);
    DAT_09517581 = 1;
  }
  if ((param_3 == 0) || (*(long *)(param_3 + 0x18) == 0)) {
    return;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918a290);
  CakeOrder_UI_RewardListData___ctor(lVar1,0);
  uVar5 = *(uint *)(param_3 + 0x18);
  if (0 < (int)uVar5) {
    lVar6 = 0;
    do {
      if (uVar5 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar7 = *(long *)(param_3 + 0x20 + lVar6 * 8);
      lVar2 = *(long *)(DAT_091b4b60 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      if (lVar7 == 0) {
LAB_04305b18:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_04305b18;
      uVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetCurrencyById
                        (**(long **)(lVar2 + 0xb8),*(undefined8 *)(lVar7 + 0x10),0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if (lVar1 == 0) goto LAB_04305b18;
        CakeOrder_UI_RewardListData__AddReward(lVar1,uVar3,*(undefined4 *)(lVar7 + 0x18),0,0);
      }
      uVar5 = *(uint *)(param_3 + 0x18);
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < (int)uVar5);
  }
  uVar3 = CakeOrder_BaseUI_SceneMainUI__ShowPopupRewards(param_1,lVar1,0,0,0);
  Utilities_AsyncExtension__RunWithLogException(uVar3,0);
  return;
}


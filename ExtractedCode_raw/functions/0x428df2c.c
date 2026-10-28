// rea decompile_all
// name: CakeOrder.InGame.InGameUITutorialProcessBooster$$TakeReward
// address: 0x428df2c
// body: available
// range: 0x428df2c-0x428e177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428e170 to 0x4d8dd74 FUN_04d8dd74 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x428e174 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_InGameUITutorialProcessBooster__TakeReward(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_09517186 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_091cfd38);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_091dbc98);
    FUN_03f5c2a4(&DAT_091dc008);
    FUN_03f5c2a4(&DAT_092244e8);
    DAT_09517186 = 1;
  }
  CakeOrder_UI_InGameUITutorialControl__SetDoneTut
            (*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),0);
  if (1 < *(int *)(param_1 + 0x3c)) {
    lVar2 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if ((*(long *)(param_1 + 0xe0) == 0) || (**(long **)(lVar2 + 0xb8) == 0)) goto LAB_0428e174;
    CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
              (**(long **)(lVar2 + 0xb8),*(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x18),
               *(int *)(param_1 + 0x3c) + -1,DAT_092244e8,0,0);
    lVar2 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_0428e174;
    CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar2 + 0xb8),0);
  }
  lVar2 = *(long *)(DAT_091b4b48 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if ((*(long *)(param_1 + 0xe0) != 0) && (**(long **)(lVar2 + 0xb8) != 0)) {
    CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
              (**(long **)(lVar2 + 0xb8),*(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x18),1,
               DAT_092244e8,0,0);
    if (*(long *)(param_1 + 0xd0) != 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0xd0) + 0x18);
      uVar4 = *(undefined8 *)(param_1 + 0xe0);
      uVar1 = *(undefined4 *)(param_1 + 0x3c);
      uVar3 = thunk_FUN_03f9944c(DAT_09174a48);
      FUN_070a8c30(uVar3,param_1,DAT_091cfd38,0);
      if (lVar2 != 0) {
        uVar3 = CakeOrder_InGame_UIInLevelCakeOrder__ShowPopupNewBooster(lVar2,uVar4,uVar1,uVar3,0);
        Utilities_AsyncExtension__RunWithLogException(uVar3,0);
        uVar3 = DG_Tweening_DOTweenModuleUI__DOFade(0,0x3e4ccccd,*(undefined8 *)(param_1 + 0x48),0);
        uVar3 = FUN_04d9656c(uVar3,1,DAT_091dc008);
        FUN_04d8dd74(uVar3,DAT_091dbc98);
        return;
      }
    }
  }
LAB_0428e174:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: CakeOrder.InGame.UIPopupBoosterSaveMeBase$$OnClickButtonUseItem
// address: 0x42ae5fc
// body: available
// range: 0x42ae5fc-0x42ae7e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ae7bc to 0x42adb4c CakeOrder.InGame.UIPopupBoosterSaveMeBase$$Activate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42ae7c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIPopupBoosterSaveMeBase__OnClickButtonUseItem(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  
  if ((DAT_0951729b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_09195798);
    FUN_03f5c2a4(&DAT_09218338);
    DAT_0951729b = 1;
  }
  if (*(long *)(param_1 + 0x168) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x168) + 0x28);
  }
  uVar2 = System_String__IsNullOrEmpty(uVar1,0);
  if (((uVar2 & 1) == 0) &&
     (fVar4 = (float)UnityEngine_Time__get_unscaledTime(0),
     *(float *)(param_1 + 0xbc) + 1.0 <= fVar4)) {
    uVar2 = CakeOrder_InGame_UIPopupBoosterSaveMeBase__get_HasItem(param_1);
    if ((uVar2 & 1) != 0) {
      uVar5 = UnityEngine_Time__get_unscaledTime(0);
      *(undefined4 *)(param_1 + 0xbc) = uVar5;
      lVar3 = *(long *)(DAT_091b4b48 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      if (*(long *)(param_1 + 0x168) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x168) + 0x28);
      }
      if (**(long **)(lVar3 + 0xb8) != 0) {
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                  (**(long **)(lVar3 + 0xb8),uVar1,0xffffffff,DAT_09218338,0,0);
        lVar3 = *(long *)(DAT_091b4b48 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        if (**(long **)(lVar3 + 0xb8) != 0) {
          CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar3 + 0xb8),0);
          lVar3 = thunk_FUN_03f9944c(DAT_09195798);
          System_Object___ctor(lVar3,0);
          if (*(long *)(param_1 + 0x168) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x168) + 0x28);
          }
          if (lVar3 != 0) {
            *(undefined8 *)(lVar3 + 0x20) = uVar1;
            thunk_FUN_03f5d7b8();
            CakeOrder_InGame_UIPopupBoosterSaveMeBase__Activate(param_1,lVar3);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *(long *)(param_1 + 0x180);
    if (lVar3 != 0) {
      if (*(long *)(param_1 + 0x168) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x168) + 0x28);
      }
                    /* WARNING: Could not recover jumptable at 0x042ae7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar1,*(undefined8 *)(lVar3 + 0x28))
      ;
      return;
    }
  }
  return;
}


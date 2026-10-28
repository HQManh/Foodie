// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder.<>c__DisplayClass88_0$$<ShowPopupBooster>g__OnSuccess|1
// address: 0x42a4888
// body: available
// range: 0x42a4888-0x42a4a4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a4a4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder_<>c__DisplayClass88_0__<ShowPopupBooster>g__OnSuccess_1
               (long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_0951724b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b48);
    DAT_0951724b = 1;
  }
  if (param_2 == 0) goto LAB_042a4a4c;
  if (*(char *)(param_2 + 0x10) != '\0') {
    uVar2 = CakeOrder_InGame_UIInLevelCakeOrder__GetKeyCountNumFreeBoosterUsed
                      (*(undefined8 *)(param_1 + 0x10));
    lVar3 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_042a4a4c;
    iVar1 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetInt
                      (**(long **)(lVar3 + 0xb8),uVar2,0,0);
    lVar3 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_042a4a4c;
    CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SetInt
              (**(long **)(lVar3 + 0xb8),uVar2,iVar1 + 1,0);
    lVar3 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_042a4a4c;
    CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar3 + 0xb8),0);
  }
  if (((*(long *)(param_1 + 0x18) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0xc0), lVar3 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x58), lVar3 != 0)) {
    Utilities_BoolModifierWithRegisteredSource__RemoveModifier(lVar3,2000,0);
    CakeOrder_TimeControlCakeOrder__ResumeTime(2000,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      CakeOrder_InGame_UIInLevelCakeOrder__ApplyUseBooster
                (*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),param_2);
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x042a4a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(param_1 + 0x10),param_2,
                   *(undefined8 *)(lVar3 + 0x28));
        return;
      }
      return;
    }
  }
LAB_042a4a4c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


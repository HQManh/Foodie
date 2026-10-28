// rea decompile_all
// name: CakeOrder.CakeOrderSubsystem.GameProgressScenario.<IEApplyInitCurrency>d__65$$MoveNext
// address: 0x42fa074
// body: available
// range: 0x42fa074-0x42fa273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42fa270 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_CakeOrderSubsystem_GameProgressScenario_<IEApplyInitCurrency>d__65__MoveNext(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_09517510 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_091b4b50);
    FUN_03f5c2a4(&DAT_09204b40);
    FUN_03f5c2a4(&DAT_09218d08);
    DAT_09517510 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x10) < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar1 = FUN_05a8f088(DAT_091b4b50);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x10) != 2) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  lVar2 = *(long *)(DAT_091b4b48 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar3 = 0;
  if (**(long **)(lVar2 + 0xb8) != 0) {
    uVar1 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__get_IsDataLoaded
                      (**(long **)(lVar2 + 0xb8),0);
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
    }
    lVar2 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x30) != 0)) {
      if (*(int *)(*(long *)(lVar5 + 0x30) + 0x14) < 1) {
        return 0;
      }
      lVar2 = **(long **)(lVar3 + 0xb8);
      if (lVar2 != 0) {
        uVar1 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetBool(lVar2,DAT_09218d08,0,0);
        lVar3 = 0;
        if ((uVar1 & 1) != 0) {
          return 0;
        }
        if (((*(long *)(lVar5 + 0x58) != 0) &&
            (lVar4 = *(long *)(*(long *)(lVar5 + 0x58) + 0x40), lVar4 != 0)) &&
           (*(long *)(lVar5 + 0x30) != 0)) {
          CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                    (lVar2,*(undefined8 *)(lVar4 + 0x18),
                     *(undefined4 *)(*(long *)(lVar5 + 0x30) + 0x14),DAT_09204b40,0,0);
          CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SetBool(lVar2,DAT_09218d08,1,0);
          CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(lVar2,0);
          return 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(lVar3);
}


// rea decompile_all
// name: CakeOrder.HeartSystem.HeartSystemController$$RefillHeart
// address: 0x42f6c1c
// body: available
// range: 0x42f6c1c-0x42f6da7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42f6da4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_HeartSystem_HeartSystemController__RefillHeart(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_095174ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_09210928);
    FUN_03f5c2a4(&DAT_09221708);
    FUN_03f5c2a4(&DAT_09200ea0);
    DAT_095174ea = 1;
  }
  uVar4 = System_String__IsNullOrEmpty(param_2,0);
  uVar5 = DAT_09221708;
  if ((uVar4 & 1) == 0) {
    uVar5 = param_2;
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    iVar2 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                      (*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),0
                      );
    iVar3 = CakeOrder_HeartSystem_HeartSystemController__get_MaxHeartInSaveData(param_1);
    iVar1 = iVar2;
    if (iVar2 <= iVar3) {
      iVar1 = iVar3;
    }
    if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SetItemAmount
                (*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),iVar1,
                 uVar5,0,0);
      lVar6 = *(long *)(param_1 + 0x20);
      if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow(0);
      if (lVar6 != 0) {
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SetDateTime(lVar6,DAT_09210928,uVar5,0);
        if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
          CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SetInt
                    (*(long *)(param_1 + 0x20),DAT_09200ea0,
                     *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),0);
          if (*(long *)(param_1 + 0x20) != 0) {
            CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(*(long *)(param_1 + 0x20),0);
            lVar6 = *(long *)(param_1 + 0x60);
            if (lVar6 != 0) {
              (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),iVar2,iVar1,*(undefined8 *)(lVar6 + 0x28));
            }
            *(undefined1 *)(param_1 + 0x50) = 0;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


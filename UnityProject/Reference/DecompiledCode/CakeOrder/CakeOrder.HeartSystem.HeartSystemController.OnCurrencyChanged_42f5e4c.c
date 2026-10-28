// rea decompile_all
// name: CakeOrder.HeartSystem.HeartSystemController$$OnCurrencyChanged
// address: 0x42f5e4c
// body: available
// range: 0x42f5e4c-0x42f5f83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42f5f80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_HeartSystem_HeartSystemController__OnCurrencyChanged
               (long param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_095174e6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_09210928);
    FUN_03f5c2a4(&DAT_09200ea0);
    DAT_095174e6 = 1;
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_042f5f80;
    uVar2 = System_String__op_Equality(param_2,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    iVar1 = CakeOrder_HeartSystem_HeartSystemController__get_MaxHeartInSaveData(param_1);
    if (iVar1 <= param_4) {
      if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x20) == 0)) {
LAB_042f5f80:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SetInt
                (*(long *)(param_1 + 0x20),DAT_09200ea0,
                 *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),0);
      lVar4 = *(long *)(param_1 + 0x20);
      if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow(0);
      if (lVar4 == 0) goto LAB_042f5f80;
      CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SetDateTime(lVar4,DAT_09210928,uVar3,0);
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_042f5f80;
      CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(*(long *)(param_1 + 0x20),0);
    }
    lVar4 = *(long *)(param_1 + 0x60);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))
                (*(undefined8 *)(lVar4 + 0x40),param_3,param_4,*(undefined8 *)(lVar4 + 0x28));
    }
  }
  return;
}


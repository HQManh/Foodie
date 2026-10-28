// rea decompile_all
// name: CakeOrder.HeartSystem.HeartSystemController$$AddHeart
// address: 0x42f652c
// body: available
// range: 0x42f652c-0x42f66ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42f66ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_HeartSystem_HeartSystemController__AddHeart
               (long param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_095174e9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_092171e8);
    FUN_03f5c2a4(&DAT_09210928);
    FUN_03f5c2a4(&DAT_09200ea0);
    DAT_095174e9 = 1;
  }
  if (0 < (int)param_2) {
    uVar5 = System_String__IsNullOrEmpty(param_3,0);
    uVar6 = DAT_092171e8;
    if ((uVar5 & 1) == 0) {
      uVar6 = param_3;
    }
    CakeOrder_HeartSystem_HeartSystemController__CheckAndSaveHeartStatus(param_1);
    *(undefined1 *)(param_1 + 0x50) = 1;
    if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_042f66ec;
    iVar3 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                      (*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),0
                      );
    iVar4 = CakeOrder_HeartSystem_HeartSystemController__get_MaxHeartInSaveData(param_1);
    uVar2 = iVar4 - iVar3;
    uVar1 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar1 <= (int)param_2) {
      param_2 = uVar1;
    }
    if (0 < (int)uVar2) {
      if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_042f66ec;
      CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                (*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),param_2
                 ,uVar6,0,0);
      iVar4 = CakeOrder_HeartSystem_HeartSystemController__get_MaxHeartInSaveData(param_1);
      if (iVar4 <= (int)(param_2 + iVar3)) {
        lVar7 = *(long *)(param_1 + 0x20);
        if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow(0);
        if (lVar7 == 0) goto LAB_042f66ec;
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SetDateTime(lVar7,DAT_09210928,uVar6,0);
        if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_042f66ec;
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SetInt
                  (*(long *)(param_1 + 0x20),DAT_09200ea0,
                   *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),0);
      }
      if (*(long *)(param_1 + 0x20) == 0) {
LAB_042f66ec:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(*(long *)(param_1 + 0x20),0);
      lVar7 = *(long *)(param_1 + 0x60);
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))
                  (*(undefined8 *)(lVar7 + 0x40),iVar3,param_2 + iVar3,*(undefined8 *)(lVar7 + 0x28)
                  );
      }
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}


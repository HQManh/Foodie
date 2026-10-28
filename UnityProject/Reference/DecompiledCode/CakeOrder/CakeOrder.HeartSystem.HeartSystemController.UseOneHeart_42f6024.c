// rea decompile_all
// name: CakeOrder.HeartSystem.HeartSystemController$$UseOneHeart
// address: 0x42f6024
// body: available
// range: 0x42f6024-0x42f62af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42f62ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_HeartSystem_HeartSystemController__UseOneHeart
          (long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_095174e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b0920);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_0918b718);
    FUN_03f5c2a4(&DAT_09208f90);
    FUN_03f5c2a4(&DAT_09210928);
    FUN_03f5c2a4(&DAT_0921e710);
    FUN_03f5c2a4(&DAT_09200ea0);
    DAT_095174e7 = 1;
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    iVar2 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                      (*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),0
                      );
    if (iVar2 < 1) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarning(DAT_09208f90,0);
      *(undefined1 *)(param_1 + 0x50) = 0;
      return 0;
    }
    iVar3 = CakeOrder_HeartSystem_HeartSystemController__get_MaxHeartInSaveData(param_1);
    if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                (*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),
                 0xffffffff,DAT_0921e710,0,0);
      if (iVar3 <= iVar2) {
        lVar9 = *(long *)(param_1 + 0x20);
        if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow(0);
        if (lVar9 == 0) goto LAB_042f62ac;
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SetDateTime(lVar9,DAT_09210928,uVar4,0);
        if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_042f62ac;
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SetInt
                  (*(long *)(param_1 + 0x20),DAT_09200ea0,
                   *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),0);
      }
      if ((param_3 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_042f62ac;
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(*(long *)(param_1 + 0x20),0);
      }
      lVar9 = *(long *)(param_1 + 0x60);
      if (lVar9 != 0) {
        (**(code **)(lVar9 + 0x18))
                  (*(undefined8 *)(lVar9 + 0x40),iVar2,iVar2 + -1,*(undefined8 *)(lVar9 + 0x28));
      }
      *(undefined1 *)(param_1 + 0x50) = 0;
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
        uVar4 = thunk_FUN_03f9944c(DAT_0918b718);
        CakeOrder_HeartSystem_SystemHeartHolder___ctor(uVar4,uVar8,1,0);
        lVar9 = DAT_091b0920;
        lVar5 = *(long *)(param_1 + 0x58);
        if (lVar5 != 0) {
          lVar6 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
              *puVar7 = uVar4;
              thunk_FUN_03f5d7b8(puVar7,uVar4);
              return uVar4;
            }
            FUN_057e0c68(lVar5,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            return uVar4;
          }
        }
      }
    }
  }
LAB_042f62ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


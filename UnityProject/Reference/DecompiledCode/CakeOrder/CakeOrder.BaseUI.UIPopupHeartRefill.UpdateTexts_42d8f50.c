// rea decompile_all
// name: CakeOrder.BaseUI.UIPopupHeartRefill$$UpdateTexts
// address: 0x42d8f50
// body: available
// range: 0x42d8f50-0x42d9173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d9170 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UIPopupHeartRefill__UpdateTexts(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  
  if ((DAT_095173ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b48);
    DAT_095173ea = 1;
  }
  plVar9 = *(long **)(param_1 + 0xd0);
  lVar2 = *(long *)(DAT_091b4970 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (((**(long **)(lVar2 + 0xb8) != 0) &&
      (lVar2 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x30), lVar2 != 0)) &&
     (uVar3 = System_Int32__ToString(lVar2 + 0x18,0), plVar9 != (long *)0x0)) {
    (**(code **)(*plVar9 + 0x558))(plVar9,uVar3,*(undefined8 *)(*plVar9 + 0x560));
    lVar2 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(DAT_091b4b60 + 0x20);
    lVar2 = **(long **)(lVar2 + 0xb8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c(lVar4);
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (((**(long **)(lVar4 + 0xb8) != 0) &&
        (lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x40), lVar4 != 0)) && (lVar2 != 0)) {
      iVar1 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                        (lVar2,*(undefined8 *)(lVar4 + 0x18),0);
      plVar9 = *(long **)(param_1 + 0xd0);
      lVar2 = *(long *)(DAT_091b4970 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c(lVar2);
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      if ((**(long **)(lVar2 + 0xb8) != 0) &&
         (lVar2 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x30), lVar2 != 0)) {
        if (iVar1 < *(int *)(lVar2 + 0x18)) {
          puVar5 = (undefined4 *)(param_1 + 0xe8);
          puVar6 = (undefined4 *)(param_1 + 0xec);
          puVar7 = (undefined4 *)(param_1 + 0xf0);
          puVar8 = (undefined4 *)(param_1 + 0xf4);
        }
        else {
          puVar5 = (undefined4 *)(param_1 + 0xd8);
          puVar6 = (undefined4 *)(param_1 + 0xdc);
          puVar7 = (undefined4 *)(param_1 + 0xe0);
          puVar8 = (undefined4 *)(param_1 + 0xe4);
        }
        if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x042d916c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar9 + 0x2a8))
                    (*puVar5,*puVar6,*puVar7,*puVar8,plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


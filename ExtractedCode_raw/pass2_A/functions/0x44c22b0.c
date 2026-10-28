// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayController$$ReportCustomerLifecycle
// address: 0x44c22b0
// body: available
// range: 0x44c22b0-0x44c239f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c2374 to 0x4385aa0 CakeOrder.InGame.CakeLevelRuntimeDataCustomer$$ReportCustomerArrived (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44c2398 to 0x4385abc CakeOrder.InGame.CakeLevelRuntimeDataCustomer$$ReportCustomerEnded (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44c239c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayController__ReportCustomerLifecycle
               (long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if ((DAT_09518265 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ac200);
    FUN_03f5c2a4(&DAT_091ac208);
    DAT_09518265 = 1;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    if ((((iVar1 - 4U < 3) && (*(long *)(param_1 + 0x120) != 0)) &&
        (lVar3 = *(long *)(*(long *)(param_1 + 0x120) + 0x28), lVar3 != 0)) &&
       (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)) {
      iVar2 = *(int *)(param_2 + 0x30);
      if ((-1 < iVar2) && (iVar2 < *(int *)(lVar3 + 0x18))) {
        lVar3 = FUN_057e0998(lVar3,iVar2,DAT_091ac208);
        if (lVar3 == 0) goto LAB_044c239c;
        if (((*(int *)(lVar3 + 0x10) != 1) && (*(long *)(param_1 + 0x40) != 0)) &&
           (lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0x20), lVar3 != 0)) {
          if (iVar1 == 4) {
            CakeOrder_InGame_CakeLevelRuntimeDataCustomer__ReportCustomerArrived
                      (lVar3,*(undefined4 *)(param_2 + 0x30),0);
            return;
          }
          CakeOrder_InGame_CakeLevelRuntimeDataCustomer__ReportCustomerEnded
                    (lVar3,*(undefined4 *)(param_2 + 0x30),iVar1 == 5,0);
          return;
        }
      }
    }
    return;
  }
LAB_044c239c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


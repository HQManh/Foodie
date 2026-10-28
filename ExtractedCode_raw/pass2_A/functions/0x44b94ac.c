// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$TryLeaveCustomer
// address: 0x44b94ac
// body: available
// range: 0x44b94ac-0x44b969b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44b9698 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__TryLeaveCustomer
               (long param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_38;
  
  if ((DAT_0951823d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d638);
    FUN_03f5c2a4(&DAT_091c9408);
    FUN_03f5c2a4(&DAT_09178660);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_091a82d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e7060);
    FUN_03f5c2a4(&DAT_0918f0b8);
    DAT_0951823d = 1;
  }
  local_38 = 0;
  lVar1 = thunk_FUN_03f9944c(DAT_0918f0b8);
  CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass186_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x368);
    *(undefined4 *)(lVar1 + 0x10) = param_2;
    if (lVar2 != 0) {
      uVar3 = FUN_053d750c(lVar2,param_2,DAT_091a82c0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (param_3 != 0) {
        uVar5 = *(undefined8 *)(param_3 + 0x30);
        uVar4 = thunk_FUN_03f9944c(DAT_09178660);
        FUN_05322d94(uVar4,lVar1,DAT_091e7060,0);
        uVar3 = FUN_04ab6f28(uVar5,uVar4,DAT_091c9408);
        if ((uVar3 & 1) != 0) {
          return;
        }
        if (*(long *)(param_1 + 0x308) != 0) {
          uVar3 = FUN_06ef1fe8(*(long *)(param_1 + 0x308),*(undefined4 *)(lVar1 + 0x10),&local_38,
                               DAT_0919d638);
          lVar2 = local_38;
          if ((uVar3 & 1) != 0) {
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Implicit(lVar2,0);
            if ((uVar3 & 1) != 0) {
              if (local_38 != 0) {
                uVar3 = CookOrder_Cooking_Implement_CookingCustomerView__get_AllDishesPresented
                                  (local_38,0);
                if ((uVar3 & 1) == 0) {
                  return;
                }
                if ((*(long *)(param_1 + 0x368) != 0) &&
                   (FUN_053d7700(*(long *)(param_1 + 0x368),*(undefined4 *)(lVar1 + 0x10),
                                 DAT_091a82d8), local_38 != 0)) {
                  CookOrder_Cooking_Implement_CookingCustomerView__Leave(local_38,0);
                  return;
                }
              }
              goto LAB_044b9698;
            }
          }
          if (*(long *)(param_1 + 0x368) != 0) {
            FUN_053d7700(*(long *)(param_1 + 0x368),*(undefined4 *)(lVar1 + 0x10),DAT_091a82d8);
            return;
          }
        }
      }
    }
  }
LAB_044b9698:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


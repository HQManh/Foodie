// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingCustomerView$$AdoptBody
// address: 0x44cfdcc
// body: available
// range: 0x44cfdcc-0x44cfeb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44cfea0 to 0x44cf0f4 CookOrder.Cooking.Implement.CookingCustomerHandle$$SetTint (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44cfeb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingCustomerView__AdoptBody
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
               long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = CookOrder_Cooking_Implement_CookingCustomerHandle__op_Implicit(param_5);
  if ((uVar1 & 1) == 0) {
    return;
  }
  *(long *)(param_4 + 0xe0) = param_5;
  thunk_FUN_03f5d7b8((long *)(param_4 + 0xe0),param_5);
  if (param_5 != 0) {
    CookOrder_Cooking_Implement_CookingCustomerHandle__KillAnimations(param_5);
    uVar2 = CookOrder_Cooking_Implement_CookingCustomerHandle__get_transform(param_5);
    DG_Tweening_ShortcutExtensions__DOKill(uVar2,0,0);
    lVar3 = CookOrder_Cooking_Implement_CookingCustomerHandle__get_transform(param_5);
    if (lVar3 != 0) {
      UnityEngine_Transform__SetParent(lVar3,*(undefined8 *)(param_4 + 0x20),1,0);
      CookOrder_Cooking_Implement_CookingCustomerHandle__SetAnimSpeed(0x3f800000,param_5);
      uVar5 = 0x3e99999a;
      CookOrder_Cooking_Implement_CookingCustomerHandle__SetVisualScale(0x3f800000,param_5);
      lVar3 = CookOrder_Cooking_Implement_CookingCustomerHandle__get_transform(param_5);
      if (lVar3 != 0) {
        uVar4 = UnityEngine_Transform__get_position(lVar3,0);
        *(undefined4 *)(param_4 + 0x120) = uVar5;
        *(undefined4 *)(param_4 + 0x124) = param_3;
        *(undefined1 *)(param_4 + 0x119) = 1;
        *(undefined4 *)(param_4 + 0x11c) = uVar4;
        CookOrder_Cooking_Implement_CookingCustomerHandle__SetTint(0,0x3e99999a,param_5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


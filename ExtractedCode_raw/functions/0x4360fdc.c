// rea decompile_all
// name: CakeOrder.Shop.ShopOfferRules$$GetWinner
// address: 0x4360fdc
// body: available
// range: 0x4360fdc-0x436112b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4361124 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4361128 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_Shop_ShopOfferRules__GetWinner(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_38;
  
  if ((DAT_0951784d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951784d = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  local_38 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = CakeOrder_DataSO_ShopOfferRulesSO__FindGroup(*(long *)(param_1 + 0x10),param_2,0);
    if ((lVar2 != 0) && (lVar6 = *(long *)(lVar2 + 0x18), lVar6 != 0)) {
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar1 = 0;
        uVar3 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        do {
          if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar5 = *(long *)(lVar6 + 0x20 + uVar1 * 8);
          if ((((lVar5 != 0) && (*(char *)(lVar5 + 0x18) == '\0')) &&
              (uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar5 + 0x10),0),
              (uVar3 & 1) == 0)) &&
             (uVar3 = CakeOrder_Shop_ShopOfferRules__Passes(param_1,lVar5,&local_38),
             (uVar3 & 1) != 0)) {
            if (*(char *)(lVar2 + 0x20) != '\0') {
              CakeOrder_Shop_ShopOfferRules__RememberShown
                        (uVar3,lVar2,*(undefined8 *)(lVar5 + 0x10));
            }
            return *(undefined8 *)(lVar5 + 0x10);
          }
          uVar3 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar1 = uVar1 + 1;
        } while ((long)uVar1 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
      if (*(char *)(lVar2 + 0x20) != '\0') {
        uVar4 = CakeOrder_Shop_ShopOfferRules__RecallShown(param_1,lVar2);
        return uVar4;
      }
    }
  }
  return 0;
}


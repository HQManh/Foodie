// rea decompile_all
// name: CakeOrder.Shop.ShopOfferRules$$LatestPurchase
// address: 0x43619cc
// body: available
// range: 0x43619cc-0x4361aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4361aa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4361aa8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_Shop_ShopOfferRules__LatestPurchase(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  if ((DAT_09517853 & 1) == 0) {
    uVar1 = FUN_03f5c2a4(&DAT_09183548);
    DAT_09517853 = 1;
  }
  if (param_2 == 0) {
LAB_04361aa4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((int)*(ulong *)(param_2 + 0x18) < 1) {
    uVar2 = 0;
  }
  else {
    uVar5 = 0;
    uVar3 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    uVar4 = 0;
    do {
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_04361aa4;
      uVar2 = CakeOrder_Shop_ShopPlayerFacts__GetLastBuyTime
                        (uVar1,*(undefined8 *)(param_2 + 0x20 + uVar5 * 8));
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183548);
      }
      uVar1 = System_DateTime__op_GreaterThan(uVar2,uVar4,0);
      uVar3 = (ulong)*(uint *)(param_2 + 0x18);
      uVar5 = uVar5 + 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
    } while ((long)uVar5 < (long)(int)*(uint *)(param_2 + 0x18));
  }
  return uVar2;
}


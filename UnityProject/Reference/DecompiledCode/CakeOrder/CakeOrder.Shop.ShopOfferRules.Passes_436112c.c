// rea decompile_all
// name: CakeOrder.Shop.ShopOfferRules$$Passes
// address: 0x436112c
// body: available
// range: 0x436112c-0x43611e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43611e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_Shop_ShopOfferRules__Passes(undefined8 param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  if (((param_2 != 0) && (lVar3 = *(long *)(param_2 + 0x20), lVar3 != 0)) &&
     (0 < (int)*(ulong *)(lVar3 + 0x18))) {
    uVar4 = 0;
    uVar1 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
    do {
      if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar2 = *(long *)(lVar3 + 0x20 + uVar4 * 8);
      if (lVar2 != 0) {
        uVar1 = CakeOrder_Shop_ShopOfferRules__Check(param_1,lVar2,*(undefined8 *)(param_2 + 0x10));
        if ((uVar1 & 1) == 0) {
          *param_3 = lVar2;
          thunk_FUN_03f5d7b8(param_3,lVar2);
          return 0;
        }
        uVar1 = (ulong)*(uint *)(lVar3 + 0x18);
      }
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)uVar1);
  }
  return 1;
}


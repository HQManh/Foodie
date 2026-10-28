// rea decompile_all
// name: AnhPD.FoodOrder.OrderPricingService$$SpawnCoin
// address: 0x4216dc0
// body: available
// range: 0x4216dc0-0x4216ecf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4216ec8 to 0x4216ed0 AnhPD.FoodOrder.OrderPricingService$$SpawnCoinAmount (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4216ecc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderPricingService__SpawnCoin
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if ((DAT_09516ccc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_09188cf8);
    DAT_09516ccc = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09188cf8);
  CakeOrder_InGame_OrderPricingInput___ctor(lVar2,0);
  if ((param_4 != 0) && (lVar2 != 0)) {
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_4 + 0x28);
    thunk_FUN_03f5d7b8();
    uVar1 = *(undefined4 *)(param_4 + 0x1c);
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_4 + 0x20);
    *(undefined4 *)(lVar2 + 0x18) = uVar1;
    thunk_FUN_03f5d7b8();
    lVar3 = *(long *)(DAT_091b4c28 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (((**(long **)(lVar3 + 0xb8) != 0) &&
        (lVar3 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x48), lVar3 != 0)) &&
       (lVar2 = CakeOrder_InGame_OrderPricingCalculator__CalculatePrice(lVar3,lVar2,0), lVar2 != 0))
    {
      AnhPD_FoodOrder_OrderPricingService__SpawnCoinAmount
                (param_1,param_2,lVar2,*(undefined4 *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x14),0
                );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: CakeOrder.Shop.UIOfferPackInGame$$UnsubscribeBuyPack
// address: 0x436cfec
// body: available
// range: 0x436cfec-0x436cfef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UIOfferPackInGame__UnsubscribeBuyPack(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_095178a5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174e18);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_091b49d8);
    FUN_03f5c2a4(&DAT_091dce50);
    DAT_095178a5 = 1;
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    uVar1 = FUN_05a8eda4(DAT_091b49d8);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(DAT_091b49d0 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = **(long **)(lVar2 + 0xb8);
      uVar3 = thunk_FUN_03f9944c(DAT_09174e18);
      FUN_071cd244(uVar3,param_1,DAT_091dce50,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_Shop_InAppShopDataAccess__remove_onBuyPack(lVar2,uVar3,0);
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}


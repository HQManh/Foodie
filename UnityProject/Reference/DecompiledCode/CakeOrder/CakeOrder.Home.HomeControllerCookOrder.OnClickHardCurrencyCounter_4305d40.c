// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder$$ShowShopAtGoldPacks
// address: 0x4305d40
// body: available
// range: 0x4305d40-0x4305d43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder__ShowShopAtGoldPacks(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lStack_18;
  
  if ((DAT_09517586 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919cd80);
    FUN_03f5c2a4(&DAT_0918c408);
    DAT_09517586 = 1;
  }
  lStack_18 = 0;
  if (*(long *)(param_1 + 0x150) != 0) {
    uVar1 = FUN_06f359c8(*(long *)(param_1 + 0x150),0,&lStack_18,DAT_0919cd80);
    if ((uVar1 & 1) != 0) {
      if (lStack_18 == 0) goto LAB_04305e08;
      plVar2 = *(long **)(lStack_18 + 0x28);
      if (plVar2 != (long *)0x0) {
        if ((*(byte *)(DAT_0918c408 + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_0918c408 + 0x130) * 8 + -8) ==
            DAT_0918c408)) {
          CakeOrder_Home_UIHomeTabPageShop__FocusGoldPacks(plVar2,0);
        }
      }
    }
    CakeOrder_Home_HomeControllerCookOrder__ShowTab(param_1,0);
    return;
  }
LAB_04305e08:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


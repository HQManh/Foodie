// rea decompile_all
// name: AnhPD.FoodOrder.BurgerOrderStrategy$$RollDrink
// address: 0x4135b48
// body: available
// range: 0x4135b48-0x4135c3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4135c3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_BurgerOrderStrategy__RollDrink(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_0951635f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ab610);
    FUN_03f5c2a4(&DAT_091ab600);
    FUN_03f5c2a4(&DAT_0917bd88);
    DAT_0951635f = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917bd88);
  FUN_0579924c(lVar3,DAT_091ab600);
  lVar2 = DAT_091ab610;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 7;
      }
      else {
        FUN_05799adc(lVar3,7,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      AnhPD_FoodOrder_BurgerOrderStrategy__AddOptional(param_1,lVar3,8);
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: AnhPD.FoodOrder.UIFlexibleBurgerDisplay$$FindFilling
// address: 0x413f500
// body: available
// range: 0x413f500-0x413f55f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413f558 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413f55c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_UIFlexibleBurgerDisplay__FindFilling(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
LAB_0413f558:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)(lVar3 + 0x18);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      if (uVar1 == uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar2 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_0413f558;
      if (*(int *)(lVar2 + 0x18) == param_2) {
        return lVar2;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar4);
  }
  return 0;
}


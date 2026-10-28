// rea decompile_all
// name: CakeOrder.Localization.ArabicShaper$$Neighbour
// address: 0x42e07b8
// body: available
// range: 0x42e07b8-0x42e08d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e08d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int CakeOrder_Localization_ArabicShaper__Neighbour(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((DAT_09517432 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181520);
    FUN_03f5c2a4(&DAT_0919c658);
    DAT_09517432 = 1;
  }
  do {
    param_2 = param_2 + param_3;
    if (param_2 < 0) {
      return -1;
    }
    if (param_1 == 0) goto LAB_042e08d4;
    if (*(int *)(param_1 + 0x10) <= param_2) {
      return -1;
    }
    uVar1 = System_String__get_Chars(param_1,param_2,0);
    if (*(int *)(DAT_09181520 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09181520);
    }
  } while ((((uVar1 - 0x6d6 & 0xffff) < 0x18) || ((uVar1 & 0xffff) == 0x670)) ||
          ((uVar1 - 0x64b & 0xffff) < 0x15));
  if (*(int *)(DAT_09181520 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09181520 + 0xb8) != 0) {
    uVar2 = FUN_06e77c44(**(long **)(DAT_09181520 + 0xb8),uVar1,DAT_0919c658);
    if ((uVar2 & 1) == 0 && (uVar1 & 0xffff) != 0x640) {
      param_2 = -1;
    }
    return param_2;
  }
LAB_042e08d4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


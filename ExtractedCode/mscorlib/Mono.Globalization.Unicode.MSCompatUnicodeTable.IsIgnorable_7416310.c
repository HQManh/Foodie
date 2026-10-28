// rea decompile_all
// name: Mono.Globalization.Unicode.MSCompatUnicodeTable$$IsIgnorable
// address: 0x7416310
// body: available
// range: 0x7416310-0x741641f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741641c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Mono_Globalization_Unicode_MSCompatUnicodeTable__IsIgnorable(int param_1,byte param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  if ((DAT_09520f4c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187d40);
    FUN_03f5c2a4(&DAT_09187d38);
    DAT_09520f4c = 1;
  }
  if (param_1 == 0) {
    bVar1 = true;
  }
  else {
    if ((param_2 & 1) != 0) {
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = System_Char__GetUnicodeCategory(param_1,0);
      if (iVar2 == 0x1d) {
        return true;
      }
      if (0xfffffcff < param_1 - 0xdb80U) {
        return true;
      }
    }
    if (*(int *)(DAT_09187d40 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09187d40 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = Mono_Globalization_Unicode_CodePointIndexer__ToIndex
                      (**(long **)(DAT_09187d40 + 0xb8),param_1);
    if ((int)uVar3 < 0) {
      bVar1 = false;
    }
    else {
      if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      bVar1 = (*(byte *)(*(long *)(*(long *)(DAT_09187d38 + 0xb8) + 8) + (ulong)uVar3) & param_2) !=
              0;
    }
  }
  return bVar1;
}


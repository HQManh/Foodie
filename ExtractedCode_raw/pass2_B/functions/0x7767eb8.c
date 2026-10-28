// rea decompile_all
// name: _GAME.Bridge.R1UserTextSupport$$FirstStrongIsArabic
// address: 0x7767eb8
// body: available
// range: 0x7767eb8-0x7767ff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7767ff0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GAME_Bridge_R1UserTextSupport__FirstStrongIsArabic(long param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  
  if ((DAT_09522c7b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189998);
    DAT_09522c7b = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar3 = 0;
    do {
      iVar1 = System_String__get_Chars(param_1,iVar3,0);
      if (*(int *)(DAT_09189998 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189998);
      }
      if ((iVar1 - 0x700U >> 8 & 0xff) < 0xff) {
        if ((iVar1 + 400U & 0xffff) < 0x90) {
          return 1;
        }
        if ((iVar1 - 0x750U & 0xffff) < 0x30) {
          return 1;
        }
        if ((iVar1 + 0x4b0U & 0xffff) < 0x2b0) {
          return 1;
        }
      }
      else if (((iVar1 - 0x66aU & 0xffff) < 0xfff6) && ((iVar1 - 0x6faU & 0xffff) < 0xfff6)) {
        return 1;
      }
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Char__IsLetter(iVar1,0);
    } while (((uVar2 & 1) == 0) && (iVar3 = iVar3 + 1, iVar3 < *(int *)(param_1 + 0x10)));
  }
  return 0;
}


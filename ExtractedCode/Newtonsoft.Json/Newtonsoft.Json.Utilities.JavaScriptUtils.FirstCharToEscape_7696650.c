// rea decompile_all
// name: Newtonsoft.Json.Utilities.JavaScriptUtils$$FirstCharToEscape
// address: 0x7696650
// body: available
// range: 0x7696650-0x7696707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7696704 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int Newtonsoft_Json_Utilities_JavaScriptUtils__FirstCharToEscape
              (long param_1,long param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  
  if (param_1 == 0) {
LAB_07696704:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = 0;
    do {
      uVar1 = System_String__get_Chars(param_1,iVar2,0);
      if (param_2 == 0) goto LAB_07696704;
      if ((int)(uint)uVar1 < *(int *)(param_2 + 0x18)) {
        if (*(char *)(param_2 + (ulong)uVar1 + 0x20) != '\0') {
          return iVar2;
        }
      }
      else {
        if (param_3 == 1) {
          return iVar2;
        }
        if (uVar1 == 0x85) {
          return iVar2;
        }
        if (uVar1 == 0x2028) {
          return iVar2;
        }
        if (uVar1 == 0x2029) {
          return iVar2;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != *(int *)(param_1 + 0x10));
  }
  return -1;
}


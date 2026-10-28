// rea decompile_all
// name: System.Security.Util.Tokenizer.StringMaker$$CompareStringAndChars
// address: 0x7458ca8
// body: available
// range: 0x7458ca8-0x7458d47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7458d40 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7458d44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Security_Util_Tokenizer_StringMaker__CompareStringAndChars
               (undefined8 param_1,long param_2,long param_3,int param_4)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
LAB_07458d44:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(param_2 + 0x10) == param_4) {
    if (param_4 < 1) {
      bVar2 = true;
    }
    else {
      if (param_3 == 0) goto LAB_07458d44;
      uVar5 = 0;
      do {
        uVar4 = (uint)uVar5;
        if (*(uint *)(param_3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558(param_1);
        }
        sVar1 = *(short *)(param_3 + 0x20 + uVar5 * 2);
        sVar3 = System_String__get_Chars(param_2,uVar5 & 0xffffffff,0);
        bVar2 = sVar1 == sVar3;
      } while ((bVar2) && (uVar5 = uVar5 + 1, param_1 = 1, param_4 - 1U != uVar4));
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


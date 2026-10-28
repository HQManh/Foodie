// rea decompile_all
// name: System.Text.StringBuilder$$get_RemainingCurrentChunk
// address: 0x7440438
// body: available
// range: 0x7440438-0x744049f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7440480 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744049c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] System_Text_StringBuilder__get_RemainingCurrentChunk(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_09521077 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba958);
    DAT_09521077 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x20);
    if (*(uint *)(lVar2 + 0x18) < uVar1) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    auVar3._8_4_ = *(uint *)(lVar2 + 0x18) - uVar1;
    auVar3._0_8_ = lVar2 + (long)(int)uVar1 * 2 + 0x20;
    auVar3._12_4_ = 0;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


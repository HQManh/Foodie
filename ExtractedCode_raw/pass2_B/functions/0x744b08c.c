// rea decompile_all
// name: System.Text.Encoding$$ThrowCharsOverflow
// address: 0x744b08c
// body: available
// range: 0x744b08c-0x744b0f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744b0b8 to 0x7437428 System.Text.DecoderNLS$$ClearMustFlush (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x744b0e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Text_Encoding__ThrowCharsOverflow(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x29) == '\0' && (param_3 & 1) == 0) {
      uVar1 = System_Text_DecoderNLS__ClearMustFlush(param_2,0);
      return uVar1;
    }
    uVar2 = System_Text_Decoder__get_InternalHasFallbackBuffer(param_2,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = System_Text_Decoder__get_FallbackBuffer(param_2,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Text_DecoderFallbackBuffer__InternalReset(lVar3,0);
    }
  }
  uVar1 = System_Text_Encoding__ThrowCharsOverflow(param_1);
  if ((DAT_095210b1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183fa0);
    DAT_095210b1 = 1;
  }
  uVar4 = thunk_FUN_03f9944c(DAT_09183fa0);
  System_Text_EncoderNLS___ctor(uVar4,uVar1,0);
  return uVar4;
}


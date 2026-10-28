// rea decompile_all
// name: System.Globalization.TextInfo$$get_IsAsciiCasingSameAsInvariant
// address: 0x7538170
// body: available
// range: 0x7538170-0x7538273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7538270 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Globalization_TextInfo__get_IsAsciiCasingSameAsInvariant(long param_1)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined2 local_14 [2];
  
  if ((DAT_095218ac & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_091b6a60);
    FUN_03f5c2a4(&DAT_091b6a68);
    FUN_03f5c2a4(&DAT_092242a8);
    FUN_03f5c2a4(&DAT_09217cc0);
    DAT_095218ac = 1;
  }
  pcVar3 = (char *)(param_1 + 0x30);
  if (*pcVar3 == '\0') {
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_07538270:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = System_String__op_Equality
                      (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),DAT_09217cc0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_07538270;
      uVar1 = System_String__op_Equality
                        (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),DAT_092242a8,0);
      uVar1 = uVar1 ^ 1;
    }
    else {
      uVar1 = 0;
    }
    local_14[0] = 0;
    FUN_05c290f8(local_14,uVar1 & 1,DAT_091b6a48);
    *(undefined2 *)pcVar3 = local_14[0];
  }
  uVar1 = FUN_05c29110(pcVar3,DAT_091b6a68);
  return uVar1 & 1;
}


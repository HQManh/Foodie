// rea decompile_all
// name: System.Globalization.TimeSpanParse.StringParser$$NextNonDigit
// address: 0x752c8ac
// body: available
// range: 0x752c8ac-0x752c90b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x752c908 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort System_Globalization_TimeSpanParse_StringParser__NextNonDigit(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  
  uVar2 = *(uint *)((long)param_1 + 0x14);
  if ((int)uVar2 < (int)param_1[3]) {
    lVar4 = (long)(int)uVar2;
    iVar5 = (int)param_1[3] - uVar2;
    uVar1 = *(uint *)(param_1 + 1);
    if (*(uint *)(param_1 + 1) <= uVar2) {
      uVar1 = uVar2;
    }
    do {
      if (uVar1 == (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar3 = *(ushort *)(*param_1 + lVar4 * 2);
      if (9 < uVar3 - 0x30) {
        return uVar3;
      }
      iVar5 = iVar5 + -1;
      lVar4 = lVar4 + 1;
    } while (iVar5 != 0);
  }
  return 0;
}


// rea decompile_all
// name: System.Text.InternalEncoderBestFitFallbackBuffer$$TryBestFit
// address: 0x7438768
// body: available
// range: 0x7438768-0x743883b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7438834 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7438838 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 System_Text_InternalEncoderBestFitFallbackBuffer__TryBestFit(long param_1,ushort param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x18), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = *(uint *)(lVar6 + 0x18);
  uVar1 = uVar3;
  uVar5 = uVar3;
  uVar8 = 0;
  while (6 < (int)uVar1) {
    uVar1 = uVar8 + (uVar1 >> 1) & 0xfffe;
    if (uVar3 <= uVar1) goto LAB_07438834;
    uVar4 = *(ushort *)(lVar6 + (ulong)uVar1 * 2 + 0x20);
    if (uVar4 == param_2) {
      uVar7 = (ulong)(uVar1 | 1);
      if (uVar3 <= (uVar1 | 1)) goto LAB_07438834;
      goto LAB_07438824;
    }
    uVar2 = uVar1;
    if (param_2 <= uVar4) {
      uVar2 = uVar8;
      uVar5 = uVar1;
    }
    uVar8 = uVar2;
    uVar1 = uVar5 - uVar2;
  }
  while( true ) {
    if ((int)uVar5 <= (int)uVar8) {
      return 0;
    }
    if (uVar3 <= uVar8) goto LAB_07438834;
    if (*(ushort *)(lVar6 + (long)(int)uVar8 * 2 + 0x20) == param_2) break;
    uVar8 = uVar8 + 2;
  }
  if (uVar8 + 1 < uVar3) {
    uVar7 = (ulong)(int)(uVar8 + 1);
LAB_07438824:
    return *(undefined2 *)(lVar6 + uVar7 * 2 + 0x20);
  }
LAB_07438834:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}


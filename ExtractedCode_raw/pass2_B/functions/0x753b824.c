// rea decompile_all
// name: System.Globalization.SortKey$$GetHashCode
// address: 0x753b824
// body: available
// range: 0x753b824-0x753b88b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x753b884 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x753b888 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Globalization_SortKey__GetHashCode(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = *(ulong *)(lVar4 + 0x18);
  if (uVar5 == 0) {
    uVar2 = 0;
  }
  else {
    if ((int)uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar2 = (uint)*(byte *)(lVar4 + 0x20);
    if (1 < (int)uVar5) {
      lVar3 = 0;
      do {
        pbVar1 = (byte *)(lVar4 + 0x21 + lVar3);
        lVar3 = lVar3 + 1;
        uVar2 = (uint)*pbVar1 << (ulong)((uint)lVar3 & 3) ^ uVar2;
      } while ((uVar5 & 0xffffffff) - 1 != lVar3);
    }
  }
  return uVar2;
}


// rea decompile_all
// name: System.Security.Cryptography.SHA384Managed$$InitializeState
// address: 0x746af50
// body: available
// range: 0x746af50-0x746b04f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x746b048 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x746b04c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_SHA384Managed__InitializeState(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (((((uVar1 != 0) && (*(undefined8 *)(lVar2 + 0x20) = 0xcbbb9d5dc1059ed8, uVar1 != 1)) &&
       (*(undefined8 *)(lVar2 + 0x28) = 0x629a292a367cd507, 2 < uVar1)) &&
      ((*(undefined8 *)(lVar2 + 0x30) = 0x9159015a3070dd17, uVar1 != 3 &&
       (*(undefined8 *)(lVar2 + 0x38) = 0x152fecd8f70e5939, 4 < uVar1)))) &&
     ((*(undefined8 *)(lVar2 + 0x40) = 0x67332667ffc00b31, uVar1 != 5 &&
      ((*(undefined8 *)(lVar2 + 0x48) = 0x8eb44a8768581511, 6 < uVar1 &&
       (*(undefined8 *)(lVar2 + 0x50) = 0xdb0c2e0d64f98fa7, uVar1 != 7)))))) {
    *(undefined8 *)(lVar2 + 0x58) = 0x47b5481dbefa4fa4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}


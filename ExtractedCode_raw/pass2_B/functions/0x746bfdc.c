// rea decompile_all
// name: System.Security.Cryptography.SHA512Managed$$InitializeState
// address: 0x746bfdc
// body: available
// range: 0x746bfdc-0x746c0db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x746c0d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x746c0d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_SHA512Managed__InitializeState(long param_1)

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
  if (((((uVar1 != 0) && (*(undefined8 *)(lVar2 + 0x20) = 0x6a09e667f3bcc908, uVar1 != 1)) &&
       (*(undefined8 *)(lVar2 + 0x28) = 0xbb67ae8584caa73b, 2 < uVar1)) &&
      ((*(undefined8 *)(lVar2 + 0x30) = 0x3c6ef372fe94f82b, uVar1 != 3 &&
       (*(undefined8 *)(lVar2 + 0x38) = 0xa54ff53a5f1d36f1, 4 < uVar1)))) &&
     ((*(undefined8 *)(lVar2 + 0x40) = 0x510e527fade682d1, uVar1 != 5 &&
      ((*(undefined8 *)(lVar2 + 0x48) = 0x9b05688c2b3e6c1f, 6 < uVar1 &&
       (*(undefined8 *)(lVar2 + 0x50) = 0x1f83d9abfb41bd6b, uVar1 != 7)))))) {
    *(undefined8 *)(lVar2 + 0x58) = 0x5be0cd19137e2179;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}


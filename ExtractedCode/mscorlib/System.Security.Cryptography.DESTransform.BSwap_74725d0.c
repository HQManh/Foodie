// rea decompile_all
// name: System.Security.Cryptography.DESTransform$$BSwap
// address: 0x74725d0
// body: available
// range: 0x74725d0-0x747262f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7472628 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747262c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_DESTransform__BSwap(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((uVar1 != 0) && (3 < uVar1)) {
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    uVar3 = NEON_rev64((ulong)CONCAT16((char)((uint)uVar2 >> 0x18),
                                       (uint6)CONCAT14((char)((uint)uVar2 >> 0x10),
                                                       (uint)CONCAT12((char)((uint)uVar2 >> 8),
                                                                      (ushort)(byte)uVar2))),2);
    *(uint *)(param_1 + 0x20) =
         CONCAT13((char)((ulong)uVar3 >> 0x30),
                  CONCAT12((char)((ulong)uVar3 >> 0x20),
                           CONCAT11((char)((ulong)uVar3 >> 0x10),(char)uVar3)));
    if ((uVar1 != 4) && (7 < uVar1)) {
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      uVar3 = NEON_rev64((ulong)CONCAT16((char)((uint)uVar2 >> 0x18),
                                         (uint6)CONCAT14((char)((uint)uVar2 >> 0x10),
                                                         (uint)CONCAT12((char)((uint)uVar2 >> 8),
                                                                        (ushort)(byte)uVar2))),2);
      *(uint *)(param_1 + 0x24) =
           CONCAT13((char)((ulong)uVar3 >> 0x30),
                    CONCAT12((char)((ulong)uVar3 >> 0x20),
                             CONCAT11((char)((ulong)uVar3 >> 0x10),(char)uVar3)));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}


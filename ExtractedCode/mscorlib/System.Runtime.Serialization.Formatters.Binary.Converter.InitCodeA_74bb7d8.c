// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.Converter$$InitCodeA
// address: 0x74bb7d8
// body: available
// range: 0x74bb7d8-0x74bb983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74bb978 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74bb97c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74bb980 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_Converter__InitCodeA(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  if ((DAT_09521465 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_091801e0);
    DAT_09521465 = 1;
  }
  lVar2 = FUN_03f5c394(DAT_091801e0,0x13);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (((((((uVar1 != 0) && (*(undefined4 *)(lVar2 + 0x20) = 0, uVar1 != 1)) &&
           (*(undefined4 *)(lVar2 + 0x24) = 0, 2 < uVar1)) &&
          ((*(undefined4 *)(lVar2 + 0x28) = 0, uVar1 != 3 &&
           (*(undefined4 *)(lVar2 + 0x2c) = 1, 4 < uVar1)))) &&
         ((*(undefined4 *)(lVar2 + 0x30) = 3, uVar1 != 5 &&
          ((*(undefined4 *)(lVar2 + 0x34) = 10, 6 < uVar1 &&
           (*(undefined4 *)(lVar2 + 0x38) = 2, uVar1 != 7)))))) &&
        (*(undefined4 *)(lVar2 + 0x3c) = 7, 8 < uVar1)) &&
       (((((*(undefined4 *)(lVar2 + 0x40) = 0xe, uVar1 != 9 &&
           (*(undefined4 *)(lVar2 + 0x44) = 8, 10 < uVar1)) &&
          (*(undefined4 *)(lVar2 + 0x48) = 0xf, uVar1 != 0xb)) &&
         (((*(undefined4 *)(lVar2 + 0x4c) = 9, 0xc < uVar1 &&
           (*(undefined4 *)(lVar2 + 0x50) = 0x10, uVar1 != 0xd)) &&
          ((*(undefined4 *)(lVar2 + 0x54) = 0xb, 0xe < uVar1 &&
           ((*(undefined4 *)(lVar2 + 0x58) = 6, uVar1 != 0xf &&
            (*(undefined4 *)(lVar2 + 0x5c) = 5, 0x10 < uVar1)))))))) &&
        ((*(undefined4 *)(lVar2 + 0x60) = 0xd, uVar1 != 0x11 &&
         (*(undefined4 *)(lVar2 + 100) = 0, 0x12 < uVar1)))))) {
      *(undefined4 *)(lVar2 + 0x68) = 0;
      if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      thunk_FUN_03f6a5cc();
      plVar3 = (long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x28);
      *plVar3 = lVar2;
      thunk_FUN_03f5d7b8(plVar3,lVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


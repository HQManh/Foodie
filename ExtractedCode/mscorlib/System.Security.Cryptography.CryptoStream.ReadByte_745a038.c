// rea decompile_all
// name: System.Security.Cryptography.CryptoStream$$ReadByte
// address: 0x745a038
// body: available
// range: 0x745a038-0x745a0b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x745a060 to 0x757f808 System.IO.Stream$$ReadByte (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x745a0ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745a0b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Security_Cryptography_CryptoStream__ReadByte(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x58) < 2) {
    uVar2 = System_IO_Stream__ReadByte(param_1,0);
    return uVar2;
  }
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      bVar1 = *(byte *)(lVar3 + 0x20);
      System_Buffer__BlockCopy(lVar3,1,lVar3,0,*(int *)(param_1 + 0x58) + -1,0);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
      return (ulong)bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


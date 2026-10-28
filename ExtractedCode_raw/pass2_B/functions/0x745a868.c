// rea decompile_all
// name: System.Security.Cryptography.CryptoStream$$Dispose
// address: 0x745a868
// body: available
// range: 0x745a868-0x745a8cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x745a8c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_CryptoStream__Dispose(long param_1,byte param_2)

{
  undefined8 local_38;
  byte *pbStack_30;
  long *local_28;
  byte local_1c [4];
  long local_18;
  
  pbStack_30 = local_1c;
  local_38 = 0;
  local_28 = &local_18;
  local_1c[0] = param_2;
  local_18 = param_1;
  if ((param_2 & 1) != 0) {
    if (*(char *)(param_1 + 0x62) == '\0') {
      System_Security_Cryptography_CryptoStream__FlushFinalBlock();
    }
    if (*(char *)(local_18 + 0x70) == '\0') {
      if (*(long *)(local_18 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_IO_Stream__Dispose(*(long *)(local_18 + 0x28),0);
    }
  }
  FUN_03eade6c(&local_38);
  return;
}


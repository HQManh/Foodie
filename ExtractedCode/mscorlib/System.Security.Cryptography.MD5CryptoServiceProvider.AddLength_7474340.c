// rea decompile_all
// name: System.Security.Cryptography.MD5CryptoServiceProvider$$AddLength
// address: 0x7474340
// body: available
// range: 0x7474340-0x747442f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7474428 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747442c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_MD5CryptoServiceProvider__AddLength
               (undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (param_4 < *(uint *)(param_3 + 0x18)) {
    *(char *)(param_3 + (int)param_4 + 0x20) = (char)param_2;
    if (param_4 + 1 < *(uint *)(param_3 + 0x18)) {
      *(char *)(param_3 + (int)(param_4 + 1) + 0x20) = (char)((ulong)param_2 >> 8);
      if (param_4 + 2 < *(uint *)(param_3 + 0x18)) {
        *(char *)(param_3 + (int)(param_4 + 2) + 0x20) = (char)((ulong)param_2 >> 0x10);
        if (param_4 + 3 < *(uint *)(param_3 + 0x18)) {
          *(char *)(param_3 + (int)(param_4 + 3) + 0x20) = (char)((ulong)param_2 >> 0x18);
          if (param_4 + 4 < *(uint *)(param_3 + 0x18)) {
            *(char *)(param_3 + (int)(param_4 + 4) + 0x20) = (char)((ulong)param_2 >> 0x20);
            if (param_4 + 5 < *(uint *)(param_3 + 0x18)) {
              *(char *)(param_3 + (int)(param_4 + 5) + 0x20) = (char)((ulong)param_2 >> 0x28);
              if (param_4 + 6 < *(uint *)(param_3 + 0x18)) {
                *(char *)(param_3 + (int)(param_4 + 6) + 0x20) = (char)((ulong)param_2 >> 0x30);
                if (param_4 + 7 < *(uint *)(param_3 + 0x18)) {
                  *(char *)(param_3 + (int)(param_4 + 7) + 0x20) = (char)((ulong)param_2 >> 0x38);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}


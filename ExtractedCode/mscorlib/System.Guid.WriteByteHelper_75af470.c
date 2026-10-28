// rea decompile_all
// name: System.Guid$$WriteByteHelper
// address: 0x75af470
// body: available
// range: 0x75af470-0x75af57f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75af57c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Guid__WriteByteHelper(undefined4 *param_1,undefined1 *param_2,uint param_3)

{
  if (param_3 != 0) {
    *param_2 = (char)*param_1;
    if (param_3 != 1) {
      param_2[1] = (char)((uint)*param_1 >> 8);
      if (2 < param_3) {
        param_2[2] = (char)*(undefined2 *)((long)param_1 + 2);
        if (param_3 != 3) {
          param_2[3] = *(undefined1 *)((long)param_1 + 3);
          if (4 < param_3) {
            param_2[4] = *(undefined1 *)(param_1 + 1);
            if (param_3 != 5) {
              param_2[5] = *(undefined1 *)((long)param_1 + 5);
              if (6 < param_3) {
                param_2[6] = *(undefined1 *)((long)param_1 + 6);
                if (param_3 != 7) {
                  param_2[7] = *(undefined1 *)((long)param_1 + 7);
                  if (8 < param_3) {
                    param_2[8] = *(undefined1 *)(param_1 + 2);
                    if (param_3 != 9) {
                      param_2[9] = *(undefined1 *)((long)param_1 + 9);
                      if (10 < param_3) {
                        param_2[10] = *(undefined1 *)((long)param_1 + 10);
                        if (param_3 != 0xb) {
                          param_2[0xb] = *(undefined1 *)((long)param_1 + 0xb);
                          if (0xc < param_3) {
                            param_2[0xc] = *(undefined1 *)(param_1 + 3);
                            if (param_3 != 0xd) {
                              param_2[0xd] = *(undefined1 *)((long)param_1 + 0xd);
                              if (0xe < param_3) {
                                param_2[0xe] = *(undefined1 *)((long)param_1 + 0xe);
                                if (param_3 != 0xf) {
                                  param_2[0xf] = *(undefined1 *)((long)param_1 + 0xf);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
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


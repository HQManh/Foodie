// rea decompile_all
// name: FUN_0404eb34
// address: 0x404eb34
// body: available
// range: 0x404eb34-0x404ecfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x404ecc4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404ecf8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_0404eb34(long *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)*param_1;
  if (pbVar3 != param_2) {
    pbVar4 = pbVar3 + 1;
    uVar2 = (ulong)*pbVar3 & 0x7f;
    if (-1 < (char)*pbVar3) {
LAB_0404eb64:
      *param_1 = (long)pbVar4;
      return uVar2;
    }
    if (pbVar4 != param_2) {
      uVar2 = uVar2 | (ulong)((int)(char)pbVar3[1] & 0x7f) << 7;
      pbVar4 = pbVar3 + 2;
      if (-1 < (char)pbVar3[1]) goto LAB_0404eb64;
      if (pbVar4 != param_2) {
        uVar2 = uVar2 | (ulong)((int)(char)pbVar3[2] & 0x7f) << 0xe;
        pbVar4 = pbVar3 + 3;
        if (-1 < (char)pbVar3[2]) goto LAB_0404eb64;
        if (pbVar4 != param_2) {
          uVar2 = uVar2 | (ulong)((int)(char)pbVar3[3] & 0x7f) << 0x15;
          pbVar4 = pbVar3 + 4;
          if (-1 < (char)pbVar3[3]) goto LAB_0404eb64;
          if (pbVar4 != param_2) {
            uVar2 = uVar2 | (ulong)((int)(char)pbVar3[4] & 0x7f) << 0x1c;
            pbVar4 = pbVar3 + 5;
            if (-1 < (char)pbVar3[4]) goto LAB_0404eb64;
            if (pbVar4 != param_2) {
              uVar2 = uVar2 | (ulong)((int)(char)pbVar3[5] & 0x7f) << 0x23;
              pbVar4 = pbVar3 + 6;
              if (-1 < (char)pbVar3[5]) goto LAB_0404eb64;
              if (pbVar4 != param_2) {
                uVar2 = uVar2 | (ulong)((int)(char)pbVar3[6] & 0x7f) << 0x2a;
                pbVar4 = pbVar3 + 7;
                if (-1 < (char)pbVar3[6]) goto LAB_0404eb64;
                if (pbVar4 != param_2) {
                  uVar2 = uVar2 | (ulong)((int)(char)pbVar3[7] & 0x7f) << 0x31;
                  pbVar4 = pbVar3 + 8;
                  if (-1 < (char)pbVar3[7]) goto LAB_0404eb64;
                  if (pbVar4 != param_2) {
                    uVar2 = uVar2 | (ulong)((int)(char)pbVar3[8] & 0x7f) << 0x38;
                    pbVar4 = pbVar3 + 9;
                    if (-1 < (char)pbVar3[8]) goto LAB_0404eb64;
                    if (pbVar4 != param_2) {
                      bVar1 = *pbVar4;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar3 + 10);
                          return uVar2 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar3 + 10 == param_2) goto LAB_0404ec94;
                      }
                      fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getULEB128",
                              "malformed uleb128 expression");
                      fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
                      abort();
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
LAB_0404ec94:
  fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getULEB128","truncated uleb128 expression");
  fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
  abort();
}


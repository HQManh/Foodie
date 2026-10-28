// rea decompile_all
// name: FUN_03fb5ef0
// address: 0x3fb5ef0
// body: available
// range: 0x3fb5ef0-0x3fb6033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fb5ef0(long *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  uint local_58 [4];
  void *local_48;
  
  pbVar5 = (byte *)param_1[2];
  pbVar4 = (byte *)param_1[3];
  if (pbVar5 < pbVar4) {
    do {
      if (*pbVar5 != 0x2b) {
        return 1;
      }
      pbVar5 = pbVar5 + 1;
      param_1[2] = (long)pbVar5;
      pbVar3 = pbVar5;
      if (pbVar4 <= pbVar5) {
        return 0;
      }
      do {
        uVar1 = *pbVar3 - 0x22;
        if (uVar1 < 0x3f) {
          if ((ulong)uVar1 == 0x3a) {
            pbVar3 = pbVar3 + 1;
            param_1[2] = (long)pbVar3;
          }
          else if ((1L << ((ulong)uVar1 & 0x3f) & 0x4a00000008001711U) != 0) break;
        }
        pbVar3 = pbVar3 + 1;
        param_1[2] = (long)pbVar3;
      } while (pbVar3 < pbVar4);
      if ((pbVar3 < pbVar4) && (*pbVar3 == 0x60)) {
        param_1[2] = (long)(pbVar3 + 1);
        if (pbVar4 <= pbVar3 + 1) {
          return 0;
        }
        local_58[0] = 0;
        uVar2 = FUN_03fb6bd0(param_1,local_58);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        *param_2 = *param_2 + local_58[0];
        pbVar3 = (byte *)param_1[2];
      }
      lVar6 = *param_1;
      FUN_03f67c24(local_58,pbVar5,pbVar3,(long)pbVar3 - (long)pbVar5);
      FUN_03f8cce0(lVar6 + 0xd0,local_58);
      if ((local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
      pbVar5 = (byte *)param_1[2];
      pbVar4 = (byte *)param_1[3];
    } while (pbVar5 < pbVar4);
  }
  return 1;
}


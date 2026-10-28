// rea decompile_all
// name: FUN_04020a1c
// address: 0x4020a1c
// body: available
// range: 0x4020a1c-0x4020bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_04020a1c(long param_1,uint *param_2,long *param_3,undefined1 *param_4,long param_5,long *param_6
            ,ulong param_7,uint param_8)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  byte *pbVar4;
  byte bVar5;
  
  *param_3 = param_1;
  *param_6 = (long)param_4;
  if ((param_8 >> 1 & 1) != 0) {
    if (param_5 - (long)param_4 < 3) {
      return 1;
    }
    *param_6 = (long)(param_4 + 1);
    *param_4 = 0xef;
    puVar2 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar2 + 1);
    *puVar2 = 0xbb;
    puVar2 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar2 + 1);
    *puVar2 = 0xbf;
  }
  puVar3 = (uint *)*param_3;
  while( true ) {
    if (param_2 <= puVar3) {
      return 0;
    }
    uVar1 = *puVar3;
    if (uVar1 >> 0xb == 0x1b || param_7 < uVar1) break;
    if (uVar1 < 0x80) {
      pbVar4 = (byte *)*param_6;
      if (param_5 - (long)pbVar4 < 1) {
        return 1;
      }
      *param_6 = (long)(pbVar4 + 1);
      *pbVar4 = (byte)uVar1;
      puVar3 = (uint *)(*param_3 + 4);
      *param_3 = (long)puVar3;
    }
    else {
      if (uVar1 < 0x800) {
        pbVar4 = (byte *)*param_6;
        if (param_5 - (long)pbVar4 < 2) {
          return 1;
        }
        *param_6 = (long)(pbVar4 + 1);
        bVar5 = (byte)(uVar1 >> 6) | 0xc0;
      }
      else {
        pbVar4 = (byte *)*param_6;
        if (uVar1 >> 0x10 == 0) {
          if (param_5 - (long)pbVar4 < 3) {
            return 1;
          }
          *param_6 = (long)(pbVar4 + 1);
          bVar5 = (byte)(uVar1 >> 0xc) | 0xe0;
        }
        else {
          if (param_5 - (long)pbVar4 < 4) {
            return 1;
          }
          *param_6 = (long)(pbVar4 + 1);
          *pbVar4 = (byte)(uVar1 >> 0x12) | 0xf0;
          pbVar4 = (byte *)*param_6;
          bVar5 = (byte)(uVar1 >> 0xc) & 0x3f | 0x80;
          *param_6 = (long)(pbVar4 + 1);
        }
        *pbVar4 = bVar5;
        pbVar4 = (byte *)*param_6;
        bVar5 = (byte)(uVar1 >> 6) & 0x3f | 0x80;
        *param_6 = (long)(pbVar4 + 1);
      }
      *pbVar4 = bVar5;
      pbVar4 = (byte *)*param_6;
      *param_6 = (long)(pbVar4 + 1);
      *pbVar4 = (byte)uVar1 & 0x3f | 0x80;
      puVar3 = (uint *)(*param_3 + 4);
      *param_3 = (long)puVar3;
    }
  }
  return 2;
}


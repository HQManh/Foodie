// rea decompile_all
// name: FUN_0401ffb0
// address: 0x401ffb0
// body: available
// range: 0x401ffb0-0x402020b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_0401ffb0(long param_1,ushort *param_2,long *param_3,undefined1 *param_4,long param_5,
            long *param_6,ulong param_7,uint param_8)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ushort *puVar6;
  byte *pbVar7;
  byte bVar8;
  
  *param_3 = param_1;
  *param_6 = (long)param_4;
  if ((param_8 >> 1 & 1) != 0) {
    if (param_5 - (long)param_4 < 3) {
      return 1;
    }
    *param_6 = (long)(param_4 + 1);
    *param_4 = 0xef;
    puVar4 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar4 + 1);
    *puVar4 = 0xbb;
    puVar4 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar4 + 1);
    *puVar4 = 0xbf;
  }
  puVar6 = (ushort *)*param_3;
  do {
    if (param_2 <= puVar6) {
      return 0;
    }
    uVar2 = *puVar6;
    if (param_7 < uVar2) {
      return 2;
    }
    uVar5 = (uint)uVar2;
    if (uVar2 < 0x80) {
      pbVar7 = (byte *)*param_6;
      if (param_5 - (long)pbVar7 < 1) {
        return 1;
      }
      *param_6 = (long)(pbVar7 + 1);
      *pbVar7 = (byte)uVar2;
    }
    else {
      if (uVar2 < 0x800) {
        pbVar7 = (byte *)*param_6;
        if (param_5 - (long)pbVar7 < 2) {
          return 1;
        }
        *param_6 = (long)(pbVar7 + 1);
        bVar8 = (byte)(uVar2 >> 6) | 0xc0;
      }
      else {
        bVar8 = (byte)(uVar2 >> 8);
        if (uVar2 >> 0xb < 0x1b) {
          pbVar7 = (byte *)*param_6;
          if (param_5 - (long)pbVar7 < 3) {
            return 1;
          }
          *param_6 = (long)(pbVar7 + 1);
          *pbVar7 = bVar8 >> 4 | 0xe0;
          pbVar7 = (byte *)*param_6;
          bVar8 = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        }
        else {
          if (uVar2 >> 10 < 0x37) {
            if ((long)param_2 - (long)puVar6 < 4) {
              return 1;
            }
            uVar3 = puVar6[1];
            if ((uVar3 & 0xfc00) != 0xdc00) {
              return 2;
            }
            if (param_5 - *param_6 < 4) {
              return 1;
            }
            if (param_7 < ((ulong)uVar3 & 0x3ff | ((ulong)uVar5 & 0x3ff) << 10) + 0x10000) {
              return 2;
            }
            *param_3 = (long)(puVar6 + 1);
            pbVar7 = (byte *)*param_6;
            uVar1 = (uVar2 >> 6 & 0xf) + 1;
            *param_6 = (long)(pbVar7 + 1);
            *pbVar7 = (byte)(uVar1 >> 2) | 0xf0;
            pbVar7 = (byte *)*param_6;
            *param_6 = (long)(pbVar7 + 1);
            *pbVar7 = (byte)((uVar1 & 3) << 4) | (byte)(uVar2 >> 2) & 0xf | 0x80;
            pbVar7 = (byte *)*param_6;
            *param_6 = (long)(pbVar7 + 1);
            *pbVar7 = (byte)((uVar5 & 3) << 4) | (byte)(uVar3 >> 6) & 0xf | 0x80;
            pbVar7 = (byte *)*param_6;
            *param_6 = (long)(pbVar7 + 1);
            *pbVar7 = (byte)uVar3 & 0x3f | 0x80;
            goto LAB_04020064;
          }
          if (uVar5 < 0xe000) {
            return 2;
          }
          pbVar7 = (byte *)*param_6;
          if (param_5 - (long)pbVar7 < 3) {
            return 1;
          }
          *param_6 = (long)(pbVar7 + 1);
          *pbVar7 = bVar8 >> 4 | 0xe0;
          pbVar7 = (byte *)*param_6;
          bVar8 = (byte)(uVar2 >> 6) & 0xbf;
        }
        *param_6 = (long)(pbVar7 + 1);
      }
      *pbVar7 = bVar8;
      pbVar7 = (byte *)*param_6;
      *param_6 = (long)(pbVar7 + 1);
      *pbVar7 = (byte)uVar2 & 0x3f | 0x80;
    }
LAB_04020064:
    puVar6 = (ushort *)(*param_3 + 2);
    *param_3 = (long)puVar6;
  } while( true );
}


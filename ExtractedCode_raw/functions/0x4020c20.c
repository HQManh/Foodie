// rea decompile_all
// name: FUN_04020c20
// address: 0x4020c20
// body: available
// range: 0x4020c20-0x4020e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_04020c20(long param_1,byte *param_2,long *param_3,long param_4,undefined4 *param_5,
                 long *param_6,ulong param_7,uint param_8)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined4 *puVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined4 *puVar9;
  
  *param_3 = param_1;
  *param_6 = param_4;
  pbVar7 = (byte *)*param_3;
  if (((((param_8 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)pbVar7)) && (*pbVar7 == 0xef)) &&
     ((pbVar7[1] == 0xbb && (pbVar7[2] == 0xbf)))) {
    pbVar7 = pbVar7 + 3;
    *param_3 = (long)pbVar7;
  }
  if (param_2 <= pbVar7) {
    return false;
  }
  puVar5 = (undefined4 *)*param_6;
  do {
    puVar9 = puVar5;
    if (param_5 <= puVar9) break;
    bVar4 = *pbVar7;
    uVar2 = (uint)bVar4;
    uVar8 = (ulong)uVar2;
    if ((char)bVar4 < '\0') {
      if (uVar2 < 0xc2) {
        return (bool)2;
      }
      if (uVar2 < 0xe0) {
        if ((long)param_2 - (long)pbVar7 < 2) {
          return true;
        }
        if ((pbVar7[1] & 0xc0) != 0x80) {
          return (bool)2;
        }
        lVar6 = 2;
        uVar8 = (ulong)pbVar7[1] & 0x3f | (uVar8 & 0x1f) << 6;
        if (param_7 < uVar8) {
          return (bool)2;
        }
      }
      else if (uVar2 < 0xf0) {
        if ((long)param_2 - (long)pbVar7 < 2) {
          return true;
        }
        bVar4 = pbVar7[1];
        if (uVar2 == 0xed) {
          bVar3 = bVar4 & 0xe0;
joined_r0x04020d90:
          if (bVar3 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar2 != 0xe0) {
            bVar3 = bVar4 & 0xc0;
            goto joined_r0x04020d90;
          }
          if ((bVar4 & 0xe0) != 0xa0) {
            return (bool)2;
          }
        }
        if ((long)param_2 - (long)pbVar7 == 2) {
          return true;
        }
        if (((pbVar7[2] & 0xc0) != 0x80) ||
           (uVar8 = (uVar8 & 0xf) << 0xc | ((ulong)bVar4 & 0x3f) << 6 | (ulong)pbVar7[2] & 0x3f,
           param_7 < uVar8)) {
          return (bool)2;
        }
        lVar6 = 3;
      }
      else {
        if (0xf4 < uVar2) {
          return (bool)2;
        }
        lVar6 = (long)param_2 - (long)pbVar7;
        if (lVar6 < 2) {
          return true;
        }
        bVar3 = pbVar7[1];
        if (uVar2 == 0xf4) {
          bVar1 = bVar3 & 0xf0;
joined_r0x04020de0:
          if (bVar1 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar2 != 0xf0) {
            bVar1 = bVar3 & 0xc0;
            goto joined_r0x04020de0;
          }
          if (0x2f < (byte)(bVar3 + 0x70)) {
            return (bool)2;
          }
        }
        if (lVar6 == 2) {
          return true;
        }
        if ((pbVar7[2] & 0xc0) != 0x80) {
          return (bool)2;
        }
        if (lVar6 == 3) {
          return true;
        }
        if ((pbVar7[3] & 0xc0) != 0x80) {
          return (bool)2;
        }
        uVar8 = ((ulong)bVar4 & 7) << 0x12 | ((ulong)bVar3 & 0x3f) << 0xc |
                ((ulong)pbVar7[2] & 0x3f) << 6 | (ulong)pbVar7[3] & 0x3f;
        if (param_7 < uVar8) {
          return (bool)2;
        }
        lVar6 = 4;
      }
    }
    else {
      if (param_7 < bVar4) {
        return (bool)2;
      }
      lVar6 = 1;
    }
    *puVar9 = (int)uVar8;
    *param_3 = (long)(pbVar7 + lVar6);
    lVar6 = *param_6;
    *param_6 = lVar6 + 4;
    pbVar7 = (byte *)*param_3;
    puVar5 = (undefined4 *)(lVar6 + 4);
  } while (pbVar7 < param_2);
  return param_5 <= puVar9;
}


// rea decompile_all
// name: FUN_04022eb0
// address: 0x4022eb0
// body: available
// range: 0x4022eb0-0x4023143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_04022eb0(long param_1,byte *param_2,long *param_3,long param_4,uint *param_5,long *param_6,
                 ulong param_7,uint param_8)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint *puVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  ulong uVar12;
  
  *param_3 = param_1;
  *param_6 = param_4;
  pbVar6 = (byte *)*param_3;
  if (((((param_8 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)pbVar6)) && (*pbVar6 == 0xef)) &&
     ((pbVar6[1] == 0xbb && (pbVar6[2] == 0xbf)))) {
    pbVar6 = pbVar6 + 3;
    *param_3 = (long)pbVar6;
  }
  if (param_2 <= pbVar6) {
    return false;
  }
  puVar5 = (uint *)*param_6;
  do {
    puVar11 = puVar5;
    if (param_5 <= puVar11) break;
    bVar2 = *pbVar6;
    if (param_7 < bVar2) {
      return (bool)2;
    }
    uVar8 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      if (uVar8 < 0xc2) {
        return (bool)2;
      }
      uVar9 = (uint)bVar2;
      uVar10 = (uint)bVar2;
      if (uVar8 < 0xe0) {
        if ((long)param_2 - (long)pbVar6 < 2) {
          return true;
        }
        if ((pbVar6[1] & 0xc0) != 0x80) {
          return (bool)2;
        }
        uVar12 = (ulong)pbVar6[1] & 0x3f | ((ulong)uVar10 & 0x1f) << 6;
        if (param_7 < uVar12) {
          return (bool)2;
        }
        *puVar11 = (uint)uVar12;
        pbVar6 = pbVar6 + 2;
      }
      else if (uVar9 < 0xf0) {
        if ((long)param_2 - (long)pbVar6 < 2) {
          return true;
        }
        bVar3 = pbVar6[1];
        if (uVar10 == 0xed) {
          bVar4 = bVar3 & 0xe0;
joined_r0x0402301c:
          if (bVar4 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar10 != 0xe0) {
            bVar4 = bVar3 & 0xc0;
            goto joined_r0x0402301c;
          }
          if ((bVar3 & 0xe0) != 0xa0) {
            return (bool)2;
          }
        }
        if ((long)param_2 - (long)pbVar6 == 2) {
          return true;
        }
        if (((pbVar6[2] & 0xc0) != 0x80) ||
           (uVar12 = ((ulong)bVar2 & 0xf) << 0xc | ((ulong)bVar3 & 0x3f) << 6 |
                     (ulong)pbVar6[2] & 0x3f, param_7 < uVar12)) {
          return (bool)2;
        }
        *puVar11 = (uint)uVar12;
        pbVar6 = pbVar6 + 3;
      }
      else {
        if (0xf4 < uVar9) {
          return (bool)2;
        }
        lVar7 = (long)param_2 - (long)pbVar6;
        if (lVar7 < 2) {
          return true;
        }
        bVar2 = pbVar6[1];
        uVar8 = (uint)bVar2;
        if (uVar9 == 0xf4) {
          uVar1 = uVar8 & 0xf0;
joined_r0x04023070:
          if (uVar1 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar9 != 0xf0) {
            uVar1 = uVar8 & 0xc0;
            goto joined_r0x04023070;
          }
          if (0x2f < (uVar8 + 0x70 & 0xff)) {
            return (bool)2;
          }
        }
        if (lVar7 == 2) {
          return true;
        }
        bVar3 = pbVar6[2];
        if ((bVar3 & 0xc0) != 0x80) {
          return (bool)2;
        }
        if (lVar7 == 3) {
          return true;
        }
        bVar4 = pbVar6[3];
        if ((bVar4 & 0xc0) != 0x80) {
          return (bool)2;
        }
        if ((long)param_5 - (long)puVar11 < 8) {
          return true;
        }
        if (param_7 < (((ulong)uVar9 & 7) << 0x12 | ((ulong)bVar2 & 0x3f) << 0xc |
                       ((ulong)bVar3 & 0x3f) << 6 | (ulong)bVar4 & 0x3f)) {
          return (bool)2;
        }
        puVar11[1] = bVar4 & 0x3f | (bVar3 & 0xf) << 6 | 0xdc00;
        *param_6 = (long)(puVar11 + 1);
        lVar7 = *param_3;
        *puVar11 = ((uVar8 & 0xf) << 2 | ((uVar10 & 7) << 2 | bVar2 >> 4 & 3) << 6 | bVar3 >> 4 & 3)
                   - 0x40 | 0xd800;
        pbVar6 = (byte *)(lVar7 + 4);
      }
    }
    else {
      *puVar11 = uVar8;
      pbVar6 = pbVar6 + 1;
    }
    *param_3 = (long)pbVar6;
    lVar7 = *param_6;
    *param_6 = lVar7 + 4;
    pbVar6 = (byte *)*param_3;
    puVar5 = (uint *)(lVar7 + 4);
  } while (pbVar6 < param_2);
  return param_5 <= puVar11;
}


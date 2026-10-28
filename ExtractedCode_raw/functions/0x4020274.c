// rea decompile_all
// name: FUN_04020274
// address: 0x4020274
// body: available
// range: 0x4020274-0x402050b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_04020274(long param_1,byte *param_2,long *param_3,long param_4,ushort *param_5,
                 long *param_6,ulong param_7,uint param_8)

{
  ushort uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort *puVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  ushort uVar12;
  
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
  puVar6 = (ushort *)*param_6;
  do {
    puVar11 = puVar6;
    if (param_5 <= puVar11) break;
    bVar3 = *pbVar7;
    if (param_7 < bVar3) {
      return (bool)2;
    }
    if ((char)bVar3 < '\0') {
      if (bVar3 < 0xc2) {
        return (bool)2;
      }
      uVar9 = (uint)bVar3;
      uVar10 = (uint)bVar3;
      if (bVar3 < 0xe0) {
        if ((long)param_2 - (long)pbVar7 < 2) {
          return true;
        }
        if ((pbVar7[1] & 0xc0) != 0x80) {
          return (bool)2;
        }
        uVar2 = (ulong)pbVar7[1] & 0x3f | ((ulong)uVar10 & 0x1f) << 6;
        if (param_7 < uVar2) {
          return (bool)2;
        }
        *puVar11 = (ushort)uVar2;
        pbVar7 = pbVar7 + 2;
      }
      else if (uVar9 < 0xf0) {
        if ((long)param_2 - (long)pbVar7 < 2) {
          return true;
        }
        bVar4 = pbVar7[1];
        if (uVar10 == 0xed) {
          bVar5 = bVar4 & 0xe0;
joined_r0x040203e4:
          if (bVar5 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar10 != 0xe0) {
            bVar5 = bVar4 & 0xc0;
            goto joined_r0x040203e4;
          }
          if ((bVar4 & 0xe0) != 0xa0) {
            return (bool)2;
          }
        }
        if ((long)param_2 - (long)pbVar7 == 2) {
          return true;
        }
        if (((pbVar7[2] & 0xc0) != 0x80) ||
           (uVar12 = (ushort)bVar3 << 0xc | (bVar4 & 0x3f) << 6 | pbVar7[2] & 0x3f, param_7 < uVar12
           )) {
          return (bool)2;
        }
        *puVar11 = uVar12;
        pbVar7 = pbVar7 + 3;
      }
      else {
        if (0xf4 < uVar9) {
          return (bool)2;
        }
        lVar8 = (long)param_2 - (long)pbVar7;
        if (lVar8 < 2) {
          return true;
        }
        bVar3 = pbVar7[1];
        uVar12 = (ushort)bVar3;
        if (uVar9 == 0xf4) {
          uVar1 = uVar12 & 0xf0;
joined_r0x04020438:
          if (uVar1 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar9 != 0xf0) {
            uVar1 = uVar12 & 0xc0;
            goto joined_r0x04020438;
          }
          if (0x2f < (uVar12 + 0x70 & 0xff)) {
            return (bool)2;
          }
        }
        if (lVar8 == 2) {
          return true;
        }
        bVar4 = pbVar7[2];
        if ((bVar4 & 0xc0) != 0x80) {
          return (bool)2;
        }
        if (lVar8 == 3) {
          return true;
        }
        bVar5 = pbVar7[3];
        if ((bVar5 & 0xc0) != 0x80) {
          return (bool)2;
        }
        if ((long)param_5 - (long)puVar11 < 4) {
          return true;
        }
        if (param_7 < (((ulong)uVar9 & 7) << 0x12 | ((ulong)bVar3 & 0x3f) << 0xc |
                       ((ulong)bVar4 & 0x3f) << 6 | (ulong)bVar5 & 0x3f)) {
          return (bool)2;
        }
        puVar11[1] = bVar5 & 0x3f | (bVar4 & 0xf) << 6 | 0xdc00;
        *param_6 = (long)(puVar11 + 1);
        lVar8 = *param_3;
        *puVar11 = ((uVar12 & 0xf) << 2 | (ushort)(((uVar10 & 7) << 2 | bVar3 >> 4 & 3) << 6) |
                   bVar4 >> 4 & 3) + 0x3fc0 | 0xd800;
        pbVar7 = (byte *)(lVar8 + 4);
      }
    }
    else {
      *puVar11 = (ushort)bVar3;
      pbVar7 = pbVar7 + 1;
    }
    *param_3 = (long)pbVar7;
    lVar8 = *param_6;
    *param_6 = lVar8 + 2;
    pbVar7 = (byte *)*param_3;
    puVar6 = (ushort *)(lVar8 + 2);
  } while (pbVar7 < param_2);
  return param_5 <= puVar11;
}


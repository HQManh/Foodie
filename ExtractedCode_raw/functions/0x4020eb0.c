// rea decompile_all
// name: FUN_04020eb0
// address: 0x4020eb0
// body: available
// range: 0x4020eb0-0x40210bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_04020eb0(byte *param_1,byte *param_2,ulong param_3,ulong param_4,uint param_5)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  
  pbVar4 = param_1;
  if ((((2 < (long)param_2 - (long)param_1) && ((param_5 >> 2 & 1) != 0)) && (*param_1 == 0xef)) &&
     (param_1[1] == 0xbb)) {
    lVar1 = 3;
    if (param_1[2] != 0xbf) {
      lVar1 = 0;
    }
    pbVar4 = param_1 + lVar1;
  }
  if ((pbVar4 < param_2) && (param_3 != 0)) {
    uVar5 = 1;
    do {
      bVar7 = *pbVar4;
      uVar6 = (ulong)bVar7;
      if ((char)bVar7 < '\0') {
        if (bVar7 < 0xc2) break;
        if (bVar7 < 0xe0) {
          if ((((long)param_2 - (long)pbVar4 < 2) || ((pbVar4[1] & 0xc0) != 0x80)) ||
             (param_4 < ((ulong)pbVar4[1] & 0x3f | (uVar6 & 0x1f) << 6))) break;
          pbVar4 = pbVar4 + 2;
        }
        else if (bVar7 < 0xf0) {
          if ((long)param_2 - (long)pbVar4 < 3) break;
          bVar2 = pbVar4[1];
          if (bVar7 == 0xed) {
            bVar7 = bVar2 & 0xe0;
LAB_04021018:
            if (bVar7 != 0x80) break;
          }
          else {
            if (bVar7 != 0xe0) {
              bVar7 = bVar2 & 0xc0;
              goto LAB_04021018;
            }
            if ((bVar2 & 0xe0) != 0xa0) break;
          }
          if (((pbVar4[2] & 0xc0) != 0x80) ||
             (param_4 < ((uVar6 & 0xf) << 0xc | ((ulong)bVar2 & 0x3f) << 6 | (ulong)pbVar4[2] & 0x3f
                        ))) break;
          pbVar4 = pbVar4 + 3;
        }
        else {
          if ((0xf4 < bVar7) || ((long)param_2 - (long)pbVar4 < 4)) break;
          bVar2 = pbVar4[1];
          if (bVar7 == 0xf4) {
            bVar7 = bVar2 & 0xf0;
LAB_04021060:
            if (bVar7 != 0x80) break;
          }
          else {
            if (bVar7 != 0xf0) {
              bVar7 = bVar2 & 0xc0;
              goto LAB_04021060;
            }
            if (0x2f < (byte)(bVar2 + 0x70)) break;
          }
          if ((((pbVar4[2] & 0xc0) != 0x80) || ((pbVar4[3] & 0xc0) != 0x80)) ||
             (param_4 < ((uVar6 & 7) << 0x12 | ((ulong)bVar2 & 0x3f) << 0xc |
                         ((ulong)pbVar4[2] & 0x3f) << 6 | (ulong)pbVar4[3] & 0x3f))) break;
          pbVar4 = pbVar4 + 4;
        }
      }
      else {
        if (param_4 < uVar6) break;
        pbVar4 = pbVar4 + 1;
      }
      if ((param_2 <= pbVar4) || (bVar3 = param_3 <= uVar5, uVar5 = uVar5 + 1, bVar3)) break;
    } while( true );
  }
  return (int)pbVar4 - (int)param_1;
}


// rea decompile_all
// name: System.Globalization.CompareInfo$$InvariantFindString
// address: 0x74fc4a8
// body: available
// range: 0x74fc4a8-0x74fc8a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Globalization_CompareInfo__InvariantFindString
               (long param_1,int param_2,ushort *param_3,uint param_4,uint param_5,uint param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  
  if ((DAT_09521654 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827f8);
    DAT_09521654 = 1;
  }
  if (param_4 == 0) {
    if ((param_6 & 1) != 0) {
      return 0;
    }
    return param_2 - 1;
  }
  uVar9 = param_2 - param_4;
  if ((int)param_4 <= param_2) {
    uVar10 = (uint)*param_3;
    if ((param_6 & 1) == 0) {
      if ((param_5 & 1) == 0) {
        if (-1 < (int)uVar9) {
          lVar6 = ((ulong)uVar9 << 0x20) + 0x100000000;
          do {
            if (*(ushort *)(param_1 + (ulong)(uVar9 << 1)) == uVar10) {
              if ((int)param_4 < 2) {
                uVar14 = 1;
              }
              else {
                uVar14 = 1;
                lVar7 = lVar6;
                puVar8 = param_3;
                while (puVar8 = puVar8 + 1, *(ushort *)((lVar7 >> 0x1f) + param_1) == *puVar8) {
                  uVar14 = uVar14 + 1;
                  lVar7 = lVar7 + 0x100000000;
                  if (param_4 == uVar14) {
                    return uVar9;
                  }
                }
              }
              if ((uint)uVar14 == param_4) {
                return uVar9;
              }
            }
            lVar6 = lVar6 + -0x100000000;
            bVar1 = (int)uVar9 < 1;
            uVar9 = uVar9 - 1;
            if (bVar1) {
              return 0xffffffff;
            }
          } while( true );
        }
      }
      else {
        if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (0xffffffe5 < uVar10 - 0x7b) {
          uVar10 = uVar10 - 0x20;
        }
        if (-1 < (int)uVar9) {
          lVar6 = ((ulong)uVar9 << 0x20) + 0x100000000;
          lVar7 = DAT_091827f8;
          do {
            uVar5 = *(ushort *)(param_1 + (ulong)(uVar9 << 1));
            if (*(int *)(lVar7 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar7 = DAT_091827f8;
            }
            uVar11 = (uint)uVar5;
            if (0xffffffe5 < uVar5 - 0x7b) {
              uVar11 = uVar5 - 0x20;
            }
            if ((uVar11 & 0xffff) == (uVar10 & 0xffff)) {
              if ((int)param_4 < 2) {
                uVar14 = 1;
              }
              else {
                uVar14 = 1;
                lVar12 = lVar6;
                puVar8 = param_3;
                while( true ) {
                  puVar8 = puVar8 + 1;
                  uVar5 = *(ushort *)((lVar12 >> 0x1f) + param_1);
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    FUN_03f5c424();
                    lVar7 = DAT_091827f8;
                  }
                  uVar4 = *puVar8;
                  uVar11 = (uint)uVar5;
                  if (0xffffffe5 < uVar5 - 0x7b) {
                    uVar11 = uVar5 - 0x20;
                  }
                  uVar13 = (uint)uVar4;
                  if (0xffffffe5 < uVar4 - 0x7b) {
                    uVar13 = uVar4 - 0x20;
                  }
                  if ((uVar11 & 0xffff) != (uVar13 & 0xffff)) break;
                  uVar14 = uVar14 + 1;
                  lVar12 = lVar12 + 0x100000000;
                  if (param_4 == uVar14) {
                    return uVar9;
                  }
                }
              }
              if ((uint)uVar14 == param_4) {
                return uVar9;
              }
            }
            lVar6 = lVar6 + -0x100000000;
            bVar1 = 0 < (int)uVar9;
            uVar9 = uVar9 - 1;
          } while (bVar1);
          return 0xffffffff;
        }
      }
    }
    else if ((param_5 & 1) == 0) {
      if (-1 < (int)uVar9) {
        uVar11 = 0;
        do {
          if (*(ushort *)(param_1 + (long)(int)uVar11 * 2) == uVar10) {
            uVar13 = 1;
            lVar6 = (ulong)param_4 - 1;
            puVar8 = param_3;
            if (1 < (int)param_4) {
              while (*(ushort *)(param_1 + (long)(int)(uVar11 + uVar13) * 2) == puVar8[1]) {
                lVar6 = lVar6 + -1;
                uVar13 = uVar13 + 1;
                puVar8 = puVar8 + 1;
                if (lVar6 == 0) {
                  return uVar11;
                }
              }
            }
            if (uVar13 == param_4) {
              return uVar11;
            }
          }
          uVar11 = uVar11 + 1;
          if ((int)uVar9 < (int)uVar11) {
            return 0xffffffff;
          }
        } while( true );
      }
    }
    else {
      if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (0xffffffe5 < uVar10 - 0x7b) {
        uVar10 = uVar10 - 0x20;
      }
      if (-1 < (int)uVar9) {
        uVar11 = 0;
        lVar6 = DAT_091827f8;
        do {
          uVar5 = *(ushort *)(param_1 + (long)(int)uVar11 * 2);
          if (*(int *)(lVar6 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar6 = DAT_091827f8;
          }
          uVar13 = (uint)uVar5;
          if (0xffffffe5 < uVar5 - 0x7b) {
            uVar13 = uVar5 - 0x20;
          }
          if ((uVar13 & 0xffff) == (uVar10 & 0xffff)) {
            uVar13 = 1;
            lVar7 = (ulong)param_4 - 1;
            puVar8 = param_3;
            if (1 < (int)param_4) {
              while( true ) {
                uVar5 = *(ushort *)(param_1 + (long)(int)(uVar11 + uVar13) * 2);
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  FUN_03f5c424();
                  lVar6 = DAT_091827f8;
                }
                uVar4 = puVar8[1];
                uVar2 = (uint)uVar5;
                if (0xffffffe5 < uVar5 - 0x7b) {
                  uVar2 = uVar5 - 0x20;
                }
                uVar3 = (uint)uVar4;
                if (0xffffffe5 < uVar4 - 0x7b) {
                  uVar3 = uVar4 - 0x20;
                }
                if ((uVar2 & 0xffff) != (uVar3 & 0xffff)) break;
                lVar7 = lVar7 + -1;
                uVar13 = uVar13 + 1;
                puVar8 = puVar8 + 1;
                if (lVar7 == 0) {
                  return uVar11;
                }
              }
            }
            if (uVar13 == param_4) {
              return uVar11;
            }
          }
          uVar11 = uVar11 + 1;
          if ((int)uVar9 < (int)uVar11) {
            return 0xffffffff;
          }
        } while( true );
      }
    }
  }
  return 0xffffffff;
}


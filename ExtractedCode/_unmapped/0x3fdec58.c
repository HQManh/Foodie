// rea decompile_all
// name: FUN_03fdec58
// address: 0x3fdec58
// body: available
// range: 0x3fdec58-0x3fdf107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fdec58(long param_1,long param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  
  if (-1 < param_3) {
    uVar1 = *(ushort *)(param_2 + 2);
    uVar12 = 0;
    iVar6 = 0;
    iVar16 = 0x8a;
    if (uVar1 != 0) {
      iVar16 = 7;
    }
    iVar15 = 3;
    if (uVar1 != 0) {
      iVar15 = 4;
    }
    uVar18 = 0xffffffff;
    uVar17 = 1;
    if (1 < param_3 + 1) {
      uVar17 = param_3 + 1;
    }
    do {
      uVar14 = (ulong)uVar1;
      uVar12 = uVar12 + 1;
      iVar7 = iVar6 + 1;
      uVar2 = *(ushort *)(param_2 + uVar12 * 4 + 2);
      uVar5 = (uint)uVar1;
      uVar13 = (uint)uVar2;
      if ((iVar16 <= iVar7) || (uVar5 != uVar13)) {
        if (iVar7 < iVar15) {
          lVar11 = param_1 + uVar14 * 4;
          uVar9 = *(uint *)(param_1 + 0x1734);
          do {
            uVar1 = *(ushort *)(lVar11 + 0xabc);
            uVar3 = *(ushort *)(lVar11 + 0xabe);
            uVar8 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar1 << (ulong)(uVar9 & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar8;
            if ((int)(0x10 - (uint)uVar3) < (int)uVar9) {
              lVar10 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar10 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar10) = (char)uVar8;
              lVar10 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar10 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar10) =
                   *(undefined1 *)(param_1 + 0x1731);
              uVar9 = ((uint)uVar3 + *(int *)(param_1 + 0x1734)) - 0x10;
              *(ushort *)(param_1 + 0x1730) =
                   uVar1 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
            }
            else {
              uVar9 = uVar9 + uVar3;
            }
            iVar7 = iVar7 + -1;
            *(uint *)(param_1 + 0x1734) = uVar9;
          } while (iVar7 != 0);
        }
        else {
          uVar9 = *(uint *)(param_1 + 0x1734);
          if (uVar5 == 0) {
            if (iVar6 < 10) {
              uVar1 = *(ushort *)(param_1 + 0xb00);
              uVar3 = *(ushort *)(param_1 + 0xb02);
              uVar8 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar1 << (ulong)(uVar9 & 0x1f);
              *(short *)(param_1 + 0x1730) = (short)uVar8;
              if ((int)(0x10 - (uint)uVar3) < (int)uVar9) {
                lVar11 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar11 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar8;
                lVar11 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar11 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) =
                     *(undefined1 *)(param_1 + 0x1731);
                uVar1 = uVar1 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
                uVar8 = (uint)uVar1;
                uVar9 = ((uint)uVar3 + *(int *)(param_1 + 0x1734)) - 0x10;
                *(ushort *)(param_1 + 0x1730) = uVar1;
              }
              else {
                uVar9 = uVar9 + uVar3;
              }
              *(uint *)(param_1 + 0x1734) = uVar9;
              uVar4 = iVar6 + 0xfffeU << (ulong)(uVar9 & 0x1f);
              if ((int)uVar9 < 0xe) {
                *(ushort *)(param_1 + 0x1730) = (ushort)uVar8 | (ushort)uVar4;
                iVar16 = uVar9 + 3;
              }
              else {
                lVar11 = *(long *)(param_1 + 0x28);
                uVar8 = uVar8 | uVar4;
                *(short *)(param_1 + 0x1730) = (short)uVar8;
                *(long *)(param_1 + 0x28) = lVar11 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar8;
                lVar11 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar11 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) =
                     *(undefined1 *)(param_1 + 0x1731);
                *(short *)(param_1 + 0x1730) =
                     (short)((iVar6 + 0xfffeU & 0xffff) >>
                            (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
                iVar16 = *(int *)(param_1 + 0x1734) + -0xd;
              }
            }
            else {
              uVar1 = *(ushort *)(param_1 + 0xb04);
              uVar3 = *(ushort *)(param_1 + 0xb06);
              uVar8 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar1 << (ulong)(uVar9 & 0x1f);
              *(short *)(param_1 + 0x1730) = (short)uVar8;
              if ((int)(0x10 - (uint)uVar3) < (int)uVar9) {
                lVar11 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar11 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar8;
                lVar11 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar11 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) =
                     *(undefined1 *)(param_1 + 0x1731);
                uVar1 = uVar1 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
                uVar8 = (uint)uVar1;
                uVar9 = ((uint)uVar3 + *(int *)(param_1 + 0x1734)) - 0x10;
                *(ushort *)(param_1 + 0x1730) = uVar1;
              }
              else {
                uVar9 = uVar9 + uVar3;
              }
              *(uint *)(param_1 + 0x1734) = uVar9;
              uVar4 = iVar6 + 0xfff6U << (ulong)(uVar9 & 0x1f);
              if ((int)uVar9 < 10) {
                *(ushort *)(param_1 + 0x1730) = (ushort)uVar8 | (ushort)uVar4;
                iVar16 = uVar9 + 7;
              }
              else {
                lVar11 = *(long *)(param_1 + 0x28);
                uVar8 = uVar8 | uVar4;
                *(short *)(param_1 + 0x1730) = (short)uVar8;
                *(long *)(param_1 + 0x28) = lVar11 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar8;
                lVar11 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar11 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) =
                     *(undefined1 *)(param_1 + 0x1731);
                *(short *)(param_1 + 0x1730) =
                     (short)((iVar6 + 0xfff6U & 0xffff) >>
                            (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
                iVar16 = *(int *)(param_1 + 0x1734) + -9;
              }
            }
          }
          else {
            if (uVar5 != (uint)uVar18) {
              lVar11 = param_1 + uVar14 * 4;
              uVar1 = *(ushort *)(lVar11 + 0xabc);
              uVar3 = *(ushort *)(lVar11 + 0xabe);
              uVar8 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar1 << (ulong)(uVar9 & 0x1f);
              *(short *)(param_1 + 0x1730) = (short)uVar8;
              if ((int)(0x10 - (uint)uVar3) < (int)uVar9) {
                lVar11 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar11 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar8;
                lVar11 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar11 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) =
                     *(undefined1 *)(param_1 + 0x1731);
                uVar9 = ((uint)uVar3 + *(int *)(param_1 + 0x1734)) - 0x10;
                *(ushort *)(param_1 + 0x1730) =
                     uVar1 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
              }
              else {
                uVar9 = uVar9 + uVar3;
              }
              *(uint *)(param_1 + 0x1734) = uVar9;
              iVar7 = iVar6;
            }
            uVar1 = *(ushort *)(param_1 + 0xafc);
            uVar3 = *(ushort *)(param_1 + 0xafe);
            uVar8 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar1 << (ulong)(uVar9 & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar8;
            if ((int)(0x10 - (uint)uVar3) < (int)uVar9) {
              lVar11 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar11 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar8;
              lVar11 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar11 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) =
                   *(undefined1 *)(param_1 + 0x1731);
              uVar1 = uVar1 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
              uVar8 = (uint)uVar1;
              uVar9 = ((uint)uVar3 + *(int *)(param_1 + 0x1734)) - 0x10;
              *(ushort *)(param_1 + 0x1730) = uVar1;
            }
            else {
              uVar9 = uVar9 + uVar3;
            }
            *(uint *)(param_1 + 0x1734) = uVar9;
            uVar4 = iVar7 + 0xfffdU << (ulong)(uVar9 & 0x1f);
            if ((int)uVar9 < 0xf) {
              *(ushort *)(param_1 + 0x1730) = (ushort)uVar8 | (ushort)uVar4;
              iVar16 = uVar9 + 2;
            }
            else {
              lVar11 = *(long *)(param_1 + 0x28);
              uVar8 = uVar8 | uVar4;
              *(short *)(param_1 + 0x1730) = (short)uVar8;
              *(long *)(param_1 + 0x28) = lVar11 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar11) = (char)uVar8;
              lVar11 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar11 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar11) =
                   *(undefined1 *)(param_1 + 0x1731);
              iVar16 = *(int *)(param_1 + 0x1734) + -0xe;
              *(short *)(param_1 + 0x1730) =
                   (short)((iVar7 + 0xfffdU & 0xffff) >>
                          (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
            }
          }
          *(int *)(param_1 + 0x1734) = iVar16;
        }
        iVar7 = 0;
        uVar18 = uVar14;
        if (uVar13 == 0) {
          iVar16 = 0x8a;
          iVar15 = 3;
        }
        else {
          iVar15 = 3;
          if (uVar5 != uVar13) {
            iVar15 = 4;
          }
          iVar16 = 6;
          if (uVar5 != uVar13) {
            iVar16 = 7;
          }
        }
      }
      iVar6 = iVar7;
      uVar1 = uVar2;
    } while (uVar12 != uVar17);
  }
  return;
}


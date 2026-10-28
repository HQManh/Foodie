// rea decompile_all
// name: FUN_03fdcf14
// address: 0x3fdcf14
// body: available
// range: 0x3fdcf14-0x3fdd40f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_03fdcf14(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  short sVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 uVar17;
  ulong uVar18;
  int iVar19;
  
LAB_03fdcf44:
  do {
    if (*(uint *)((long)param_1 + 0xb4) < 0x106) {
      FUN_03fdb190(param_1);
      uVar5 = *(uint *)((long)param_1 + 0xb4);
      if ((param_2 == 0) && (uVar5 < 0x106)) {
        return 0;
      }
      if (uVar5 == 0) {
        if ((int)param_1[0x15] != 0) {
          uVar15 = *(uint *)((long)param_1 + 0x170c);
          bVar9 = *(byte *)(param_1[0xc] + (ulong)(*(int *)((long)param_1 + 0xac) - 1));
          *(uint *)((long)param_1 + 0x170c) = uVar15 + 1;
          *(undefined1 *)(param_1[0x2e0] + (ulong)uVar15) = 0;
          uVar15 = *(uint *)((long)param_1 + 0x170c);
          *(uint *)((long)param_1 + 0x170c) = uVar15 + 1;
          *(undefined1 *)(param_1[0x2e0] + (ulong)uVar15) = 0;
          uVar15 = *(uint *)((long)param_1 + 0x170c);
          *(uint *)((long)param_1 + 0x170c) = uVar15 + 1;
          *(byte *)(param_1[0x2e0] + (ulong)uVar15) = bVar9;
          sVar10 = *(short *)((long)param_1 + (ulong)bVar9 * 4 + 0xd4);
          *(undefined4 *)(param_1 + 0x15) = 0;
          *(short *)((long)param_1 + (ulong)bVar9 * 4 + 0xd4) = sVar10 + 1;
        }
        uVar15 = *(uint *)((long)param_1 + 0xac);
        uVar16 = (ulong)uVar15;
        if (1 < uVar15) {
          uVar15 = 2;
        }
        *(uint *)((long)param_1 + 0x172c) = uVar15;
        if (param_2 != 4) {
          if (*(int *)((long)param_1 + 0x170c) != 0) {
            uVar18 = param_1[0x13];
            if ((long)uVar18 < 0) {
              lVar14 = 0;
            }
            else {
              lVar14 = param_1[0xc] + (uVar18 & 0xffffffff);
            }
            FUN_03fddcf4(param_1,lVar14,uVar16 - uVar18,0);
            param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
            FUN_03fdbffc(*param_1);
            if (*(int *)(*param_1 + 0x20) == 0) {
              return 0;
            }
          }
          return 1;
        }
        uVar18 = param_1[0x13];
        if ((long)uVar18 < 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = param_1[0xc] + (uVar18 & 0xffffffff);
        }
        FUN_03fddcf4(param_1,lVar14,uVar16 - uVar18,1);
        param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
        FUN_03fdbffc(*param_1);
        if (*(int *)(*param_1 + 0x20) != 0) {
          return 3;
        }
        return 2;
      }
      uVar15 = *(uint *)(param_1 + 0x14);
      uVar17 = (undefined4)param_1[0x16];
      if (2 < uVar5) goto LAB_03fdcf94;
      uVar13 = 2;
      *(uint *)(param_1 + 0x17) = uVar15;
      *(undefined4 *)(param_1 + 0x14) = 2;
      *(undefined4 *)((long)param_1 + 0xa4) = uVar17;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x14);
      uVar17 = (undefined4)param_1[0x16];
LAB_03fdcf94:
      uVar5 = *(uint *)((long)param_1 + 0xac);
      uVar13 = 2;
      bVar9 = *(byte *)(param_1[0xc] + (ulong)(uVar5 + 2));
      *(uint *)(param_1 + 0x17) = uVar15;
      lVar14 = param_1[0xf];
      uVar12 = ((int)param_1[0x10] << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^ (uint)bVar9) &
               *(uint *)((long)param_1 + 0x8c);
      *(undefined4 *)(param_1 + 0x14) = 2;
      *(undefined4 *)((long)param_1 + 0xa4) = uVar17;
      *(uint *)(param_1 + 0x10) = uVar12;
      uVar11 = *(ushort *)(lVar14 + (ulong)uVar12 * 2);
      *(ushort *)(param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar5) * 2) = uVar11;
      *(short *)(lVar14 + (ulong)uVar12 * 2) = (short)uVar5;
      if (uVar11 != 0) {
        uVar13 = 2;
        if ((uVar15 < *(uint *)(param_1 + 0x18)) && (uVar5 - uVar11 <= (int)param_1[10] - 0x106U)) {
          uVar13 = FUN_03fdd410(param_1);
          *(uint *)(param_1 + 0x14) = uVar13;
          if (uVar13 < 6) {
            if ((int)param_1[0x19] == 1) {
LAB_03fdd024:
              uVar13 = 2;
              *(undefined4 *)(param_1 + 0x14) = 2;
            }
            else if (uVar13 == 3) {
              if (0x1000 < (uint)(*(int *)((long)param_1 + 0xac) - (int)param_1[0x16]))
              goto LAB_03fdd024;
              uVar13 = 3;
            }
          }
        }
        uVar15 = *(uint *)(param_1 + 0x17);
      }
    }
    if ((uVar15 < 3) || (uVar15 < uVar13)) {
      if ((int)param_1[0x15] == 0) {
        *(undefined4 *)(param_1 + 0x15) = 1;
        *(int *)((long)param_1 + 0xac) = *(int *)((long)param_1 + 0xac) + 1;
        *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) + -1;
        goto LAB_03fdcf44;
      }
      uVar15 = *(uint *)((long)param_1 + 0x170c);
      bVar9 = *(byte *)(param_1[0xc] + (ulong)(*(int *)((long)param_1 + 0xac) - 1));
      *(uint *)((long)param_1 + 0x170c) = uVar15 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar15) = 0;
      uVar15 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar15 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar15) = 0;
      uVar15 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar15 + 1;
      *(byte *)(param_1[0x2e0] + (ulong)uVar15) = bVar9;
      iVar1 = *(int *)((long)param_1 + 0x170c);
      lVar14 = param_1[0x2e2];
      *(short *)((long)param_1 + (ulong)bVar9 * 4 + 0xd4) =
           *(short *)((long)param_1 + (ulong)bVar9 * 4 + 0xd4) + 1;
      if (iVar1 == (int)lVar14) {
        uVar16 = param_1[0x13];
        if ((long)uVar16 < 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = param_1[0xc] + (uVar16 & 0xffffffff);
        }
        FUN_03fddcf4(param_1,lVar14,*(uint *)((long)param_1 + 0xac) - uVar16,0);
        param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
        FUN_03fdbffc(*param_1);
      }
      iVar1 = *(int *)(*param_1 + 0x20);
      *(int *)((long)param_1 + 0xac) = *(int *)((long)param_1 + 0xac) + 1;
      *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) + -1;
    }
    else {
      uVar5 = *(uint *)((long)param_1 + 0x170c);
      iVar6 = *(int *)((long)param_1 + 0xac);
      *(uint *)((long)param_1 + 0x170c) = uVar5 + 1;
      iVar7 = *(int *)((long)param_1 + 0xb4);
      iVar1 = iVar6 + ~*(uint *)((long)param_1 + 0xa4);
      *(char *)(param_1[0x2e0] + (ulong)uVar5) = (char)iVar1;
      uVar5 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar5 + 1;
      *(char *)(param_1[0x2e0] + (ulong)uVar5) = (char)((uint)iVar1 >> 8);
      uVar5 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar5 + 1;
      *(char *)(param_1[0x2e0] + (ulong)uVar5) = (char)(uVar15 - 3);
      uVar5 = iVar1 - 1;
      iVar1 = *(int *)((long)param_1 + 0xac);
      if ((uVar5 & 0xff00) != 0) {
        uVar5 = (uVar5 >> 7 & 0x1ff) + 0x100;
      }
      *(short *)((long)param_1 +
                (ulong)(byte)(&DAT_023aec78)[(ulong)(uVar15 - 3) & 0xff] * 4 + 0x4d8) =
           *(short *)((long)param_1 +
                     (ulong)(byte)(&DAT_023aec78)[(ulong)(uVar15 - 3) & 0xff] * 4 + 0x4d8) + 1;
      iVar2 = *(int *)((long)param_1 + 0xb4);
      iVar3 = (int)param_1[0x17];
      iVar8 = *(int *)((long)param_1 + 0x170c);
      lVar14 = param_1[0x2e2];
      *(short *)((long)param_1 + (ulong)(byte)(&DAT_023aea78)[(ulong)uVar5 & 0xffff] * 4 + 0x9c8) =
           *(short *)((long)param_1 +
                     (ulong)(byte)(&DAT_023aea78)[(ulong)uVar5 & 0xffff] * 4 + 0x9c8) + 1;
      iVar19 = iVar3 + -3;
      *(int *)((long)param_1 + 0xb4) = (iVar2 - iVar3) + 1;
      *(int *)(param_1 + 0x17) = iVar3 + -2;
      uVar16 = (ulong)(iVar1 + 1);
      do {
        uVar15 = (uint)uVar16;
        *(uint *)((long)param_1 + 0xac) = uVar15;
        if (uVar15 <= (iVar6 + iVar7) - 3U) {
          lVar4 = param_1[0xf];
          uVar5 = ((int)param_1[0x10] << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^
                  (uint)*(byte *)(param_1[0xc] + (ulong)(uVar15 + 2))) &
                  *(uint *)((long)param_1 + 0x8c);
          *(uint *)(param_1 + 0x10) = uVar5;
          *(undefined2 *)(param_1[0xe] + (*(uint *)(param_1 + 0xb) & uVar16) * 2) =
               *(undefined2 *)(lVar4 + (ulong)uVar5 * 2);
          *(short *)(lVar4 + (ulong)uVar5 * 2) = (short)uVar16;
        }
        *(int *)(param_1 + 0x17) = iVar19;
        iVar19 = iVar19 + -1;
        uVar16 = (ulong)(uVar15 + 1);
      } while (iVar19 != -1);
      *(undefined4 *)(param_1 + 0x14) = 2;
      *(undefined4 *)(param_1 + 0x15) = 0;
      *(uint *)((long)param_1 + 0xac) = uVar15 + 1;
      if (iVar8 != (int)lVar14) goto LAB_03fdcf44;
      uVar18 = param_1[0x13];
      if ((long)uVar18 < 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = param_1[0xc] + (uVar18 & 0xffffffff);
      }
      FUN_03fddcf4(param_1,lVar14,uVar16 - uVar18,0);
      param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
      FUN_03fdbffc(*param_1);
      iVar1 = *(int *)(*param_1 + 0x20);
    }
    if (iVar1 == 0) {
      return 0;
    }
  } while( true );
}


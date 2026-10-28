// rea decompile_all
// name: FUN_03fdcb40
// address: 0x3fdcb40
// body: available
// range: 0x3fdcb40-0x3fdcf13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_03fdcb40(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  ushort uVar8;
  undefined2 uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  
LAB_03fdcb64:
  do {
    if (*(uint *)((long)param_1 + 0xb4) < 0x106) {
      FUN_03fdb190(param_1);
      uVar12 = *(uint *)((long)param_1 + 0xb4);
      if ((param_2 == 0) && (uVar12 < 0x106)) {
        return 0;
      }
      if (uVar12 == 0) {
        uVar12 = *(uint *)((long)param_1 + 0xac);
        uVar13 = (ulong)uVar12;
        if (1 < uVar12) {
          uVar12 = 2;
        }
        *(uint *)((long)param_1 + 0x172c) = uVar12;
        if (param_2 == 4) {
          uVar15 = param_1[0x13];
          if ((long)uVar15 < 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = param_1[0xc] + (uVar15 & 0xffffffff);
          }
          FUN_03fddcf4(param_1,lVar14,uVar13 - uVar15,1);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          FUN_03fdbffc(*param_1);
          if (*(int *)(*param_1 + 0x20) != 0) {
            return 3;
          }
          return 2;
        }
        if (*(int *)((long)param_1 + 0x170c) != 0) {
          uVar15 = param_1[0x13];
          if ((long)uVar15 < 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = param_1[0xc] + (uVar15 & 0xffffffff);
          }
          FUN_03fddcf4(param_1,lVar14,uVar13 - uVar15,0);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          FUN_03fdbffc(*param_1);
          if (*(int *)(*param_1 + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      if (2 < uVar12) goto LAB_03fdcb94;
LAB_03fdcbec:
      uVar12 = *(uint *)(param_1 + 0x14);
    }
    else {
LAB_03fdcb94:
      uVar12 = *(uint *)((long)param_1 + 0xac);
      lVar14 = param_1[0xf];
      uVar17 = ((int)param_1[0x10] << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^
               (uint)*(byte *)(param_1[0xc] + (ulong)(uVar12 + 2))) &
               *(uint *)((long)param_1 + 0x8c);
      uVar8 = *(ushort *)(lVar14 + (ulong)uVar17 * 2);
      *(uint *)(param_1 + 0x10) = uVar17;
      *(ushort *)(param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar12) * 2) = uVar8;
      *(short *)(lVar14 + (ulong)uVar17 * 2) = (short)uVar12;
      if ((uVar8 == 0) || ((int)param_1[10] - 0x106U < uVar12 - uVar8)) goto LAB_03fdcbec;
      uVar12 = FUN_03fdd410(param_1);
      *(uint *)(param_1 + 0x14) = uVar12;
    }
    if (uVar12 < 3) {
      uVar12 = *(uint *)((long)param_1 + 0x170c);
      bVar7 = *(byte *)(param_1[0xc] + (ulong)*(uint *)((long)param_1 + 0xac));
      *(uint *)((long)param_1 + 0x170c) = uVar12 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar12) = 0;
      uVar12 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar12 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar12) = 0;
      uVar12 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar12 + 1;
      *(byte *)(param_1[0x2e0] + (ulong)uVar12) = bVar7;
      iVar18 = *(int *)((long)param_1 + 0xb4);
      iVar4 = *(int *)((long)param_1 + 0x170c);
      lVar14 = param_1[0x2e2];
      iVar6 = *(int *)((long)param_1 + 0xac);
      *(short *)((long)param_1 + (ulong)bVar7 * 4 + 0xd4) =
           *(short *)((long)param_1 + (ulong)bVar7 * 4 + 0xd4) + 1;
      uVar12 = iVar6 + 1;
      bVar11 = iVar4 == (int)lVar14;
      *(int *)((long)param_1 + 0xb4) = iVar18 + -1;
LAB_03fdcdac:
      *(uint *)((long)param_1 + 0xac) = uVar12;
      if (!bVar11) goto LAB_03fdcb64;
    }
    else {
      uVar17 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar17 + 1;
      iVar18 = *(int *)((long)param_1 + 0xac) - (int)param_1[0x16];
      *(char *)(param_1[0x2e0] + (ulong)uVar17) = (char)iVar18;
      uVar17 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar17 + 1;
      *(char *)(param_1[0x2e0] + (ulong)uVar17) = (char)((uint)iVar18 >> 8);
      uVar17 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar17 + 1;
      *(char *)(param_1[0x2e0] + (ulong)uVar17) = (char)(uVar12 - 3);
      uVar17 = iVar18 - 1;
      iVar18 = *(int *)((long)param_1 + 0xb4);
      if ((uVar17 & 0xff00) != 0) {
        uVar17 = (uVar17 >> 7 & 0x1ff) + 0x100;
      }
      *(short *)((long)param_1 +
                (ulong)(byte)(&DAT_023aec78)[(ulong)(uVar12 - 3) & 0xff] * 4 + 0x4d8) =
           *(short *)((long)param_1 +
                     (ulong)(byte)(&DAT_023aec78)[(ulong)(uVar12 - 3) & 0xff] * 4 + 0x4d8) + 1;
      uVar12 = *(uint *)(param_1 + 0x18);
      uVar3 = *(uint *)(param_1 + 0x14);
      iVar4 = *(int *)((long)param_1 + 0x170c);
      lVar14 = param_1[0x2e2];
      uVar10 = iVar18 - uVar3;
      *(short *)((long)param_1 + (ulong)(byte)(&DAT_023aea78)[(ulong)uVar17 & 0xffff] * 4 + 0x9c8) =
           *(short *)((long)param_1 +
                     (ulong)(byte)(&DAT_023aea78)[(ulong)uVar17 & 0xffff] * 4 + 0x9c8) + 1;
      *(uint *)((long)param_1 + 0xb4) = uVar10;
      if ((uVar3 <= uVar12) && (2 < uVar10)) {
        uVar17 = *(uint *)((long)param_1 + 0x8c);
        uVar10 = *(uint *)(param_1 + 0x12);
        lVar1 = param_1[0xe];
        lVar2 = param_1[0xf];
        lVar16 = param_1[0xc];
        iVar18 = uVar3 - 2;
        uVar5 = *(uint *)(param_1 + 0xb);
        uVar13 = (ulong)*(uint *)(param_1 + 0x10);
        uVar12 = *(int *)((long)param_1 + 0xac) + 1;
        *(uint *)(param_1 + 0x14) = uVar3 - 1;
        do {
          *(uint *)((long)param_1 + 0xac) = uVar12;
          bVar7 = *(byte *)(lVar16 + (ulong)(uVar12 + 2));
          *(int *)(param_1 + 0x14) = iVar18;
          iVar18 = iVar18 + -1;
          uVar3 = ((int)uVar13 << (ulong)(uVar10 & 0x1f) ^ (uint)bVar7) & uVar17;
          uVar13 = (ulong)uVar3;
          uVar9 = *(undefined2 *)(lVar2 + uVar13 * 2);
          *(uint *)(param_1 + 0x10) = uVar3;
          *(undefined2 *)(lVar1 + (ulong)(uVar5 & uVar12) * 2) = uVar9;
          *(short *)(lVar2 + uVar13 * 2) = (short)uVar12;
          uVar12 = uVar12 + 1;
        } while (iVar18 != -1);
        bVar11 = iVar4 == (int)lVar14;
        goto LAB_03fdcdac;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      uVar12 = *(int *)((long)param_1 + 0xac) + uVar3;
      *(uint *)((long)param_1 + 0xac) = uVar12;
      uVar17 = (uint)*(byte *)(param_1[0xc] + (ulong)uVar12);
      *(uint *)(param_1 + 0x10) = uVar17;
      *(uint *)(param_1 + 0x10) =
           (uVar17 << (ulong)(*(uint *)(param_1 + 0x12) & 0x1f) ^
           (uint)*(byte *)(param_1[0xc] + (ulong)(uVar12 + 1))) & *(uint *)((long)param_1 + 0x8c);
      if (iVar4 != (int)lVar14) goto LAB_03fdcb64;
    }
    uVar13 = param_1[0x13];
    if ((long)uVar13 < 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = param_1[0xc] + (uVar13 & 0xffffffff);
    }
    FUN_03fddcf4(param_1,lVar14,uVar12 - uVar13,0);
    param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
    FUN_03fdbffc(*param_1);
    if (*(int *)(*param_1 + 0x20) == 0) {
      return 0;
    }
  } while( true );
}


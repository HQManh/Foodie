// rea decompile_all
// name: FUN_03fde22c
// address: 0x3fde22c
// body: available
// range: 0x3fde22c-0x3fde697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fde22c(long param_1,long *param_2)

{
  long lVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  short sVar18;
  ulong uVar19;
  long *plVar20;
  uint uVar21;
  undefined2 *puVar22;
  ushort *puVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  int iVar28;
  ulong uVar29;
  ushort auStack_70 [16];
  
  lVar25 = *param_2;
  uVar17 = *(uint *)(param_2[2] + 0x14);
  uVar29 = (ulong)uVar17;
  lVar15 = *(long *)param_2[2];
  *(undefined8 *)(param_1 + 0x14b4) = 0x23d00000000;
  if ((int)uVar17 < 1) {
    uVar17 = 0;
    uVar27 = 0xffffffff;
  }
  else {
    uVar19 = 0;
    puVar22 = (undefined2 *)(lVar25 + 2);
    uVar27 = 0xffffffff;
    do {
      if (puVar22[-1] == 0) {
        *puVar22 = 0;
      }
      else {
        uVar27 = uVar19 & 0xffffffff;
        iVar14 = *(int *)(param_1 + 0x14b4) + 1;
        *(int *)(param_1 + 0x14b4) = iVar14;
        *(int *)(param_1 + (long)iVar14 * 4 + 0xbc0) = (int)uVar19;
        *(undefined1 *)(param_1 + 0x14bc + uVar19) = 0;
      }
      uVar26 = (uint)uVar27;
      uVar19 = uVar19 + 1;
      puVar22 = puVar22 + 2;
    } while (uVar29 != uVar19);
    uVar17 = *(uint *)(param_1 + 0x14b4);
    if (1 < (int)uVar17) goto LAB_03fde350;
  }
  do {
    uVar21 = (uint)uVar27;
    uVar26 = uVar21;
    if ((int)uVar21 < 2) {
      uVar26 = uVar21 + 1;
    }
    uVar27 = (ulong)uVar26;
    uVar4 = 0;
    if ((int)uVar21 < 2) {
      uVar4 = uVar21 + 1;
    }
    *(int *)(param_1 + 0x14b4) = (int)((long)(int)uVar17 + 1);
    *(uint *)(param_1 + ((long)(int)uVar17 + 1) * 4 + 0xbc0) = uVar4;
    *(undefined2 *)(lVar25 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2)) = 1
    ;
    *(undefined1 *)(param_1 + (int)uVar4 + 0x14bc) = 0;
    *(long *)(param_1 + 0x1718) = *(long *)(param_1 + 0x1718) + -1;
    if (lVar15 != 0) {
      *(ulong *)(param_1 + 0x1720) =
           *(long *)(param_1 + 0x1720) - (ulong)*(ushort *)(lVar15 + (long)(int)uVar4 * 4 + 2);
    }
    uVar17 = *(uint *)(param_1 + 0x14b4);
  } while ((int)uVar17 < 2);
LAB_03fde350:
  uVar17 = uVar17 >> 1;
  *(uint *)(param_2 + 1) = uVar26;
  do {
    FUN_03fdea48(param_1,lVar25,uVar17);
    bVar12 = uVar17 != 0;
    uVar17 = uVar17 - 1;
  } while (bVar12 && uVar17 != 0);
  iVar14 = *(int *)(param_1 + 0x14b4);
  lVar15 = param_1 + 0x14bc;
  do {
    lVar24 = param_1 + 0xbc0;
    iVar28 = *(int *)(param_1 + 0xbc4);
    *(int *)(param_1 + 0x14b4) = iVar14 + -1;
    *(undefined4 *)(param_1 + 0xbc4) = *(undefined4 *)(lVar24 + (long)iVar14 * 4);
    FUN_03fdea48(param_1,lVar25,1);
    iVar14 = *(int *)(param_1 + 0xbc4);
    psVar2 = (short *)(lVar25 + (long)iVar28 * 4);
    iVar13 = *(int *)(param_1 + 0x14b8) + -1;
    psVar3 = (short *)(lVar25 + (long)iVar14 * 4);
    *(int *)(param_1 + 0x14b8) = iVar13;
    *(int *)(lVar24 + (long)iVar13 * 4) = iVar28;
    iVar13 = *(int *)(param_1 + 0x14b8) + -1;
    *(int *)(param_1 + 0x14b8) = iVar13;
    *(int *)(lVar24 + (long)iVar13 * 4) = iVar14;
    *(short *)(lVar25 + (-(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar29 << 2)) = *psVar3 + *psVar2;
    bVar6 = *(byte *)(lVar15 + iVar28);
    bVar7 = *(byte *)(lVar15 + iVar14);
    iVar28 = (int)uVar29;
    if (bVar6 <= bVar7) {
      bVar6 = bVar7;
    }
    *(byte *)(lVar15 + iVar28) = bVar6 + 1;
    psVar3[1] = (short)uVar29;
    psVar2[1] = (short)uVar29;
    *(int *)(param_1 + 0xbc4) = iVar28;
    FUN_03fdea48(param_1,lVar25,1);
    iVar14 = *(int *)(param_1 + 0x14b4);
    uVar29 = (ulong)(iVar28 + 1);
  } while (1 < iVar14);
  plVar20 = (long *)param_2[2];
  iVar14 = *(int *)(param_1 + 0x14b8) + -1;
  lVar16 = *param_2;
  *(int *)(param_1 + 0x14b8) = iVar14;
  lVar15 = *plVar20;
  lVar5 = plVar20[1];
  *(undefined4 *)(lVar24 + (long)iVar14 * 4) = *(undefined4 *)(param_1 + 0xbc4);
  lVar10 = param_2[1];
  lVar11 = plVar20[2];
  uVar17 = *(uint *)(plVar20 + 3);
  *(undefined8 *)(param_1 + 3000) = 0;
  *(undefined8 *)(param_1 + 0xbb0) = 0;
  *(undefined8 *)(param_1 + 0xba8) = 0;
  *(undefined8 *)(param_1 + 0xba0) = 0;
  *(undefined2 *)(lVar16 + (long)*(int *)(lVar24 + (long)*(int *)(param_1 + 0x14b8) * 4) * 4 + 2) =
       0;
  iVar14 = *(int *)(param_1 + 0x14b8) + 1;
  if (iVar14 < 0x23d) {
    lVar24 = (long)iVar14;
    iVar14 = 0;
    do {
      iVar28 = *(int *)(param_1 + 0xbc0 + lVar24 * 4);
      puVar23 = (ushort *)(lVar16 + (long)iVar28 * 4);
      uVar8 = *(ushort *)(lVar16 + (ulong)puVar23[1] * 4 + 2);
      if ((int)(uint)uVar8 < (int)uVar17) {
        uVar21 = uVar8 + 1;
      }
      else {
        iVar14 = iVar14 + 1;
        uVar21 = uVar17;
      }
      puVar23[1] = (ushort)uVar21;
      if (iVar28 <= (int)lVar10) {
        lVar1 = param_1 + (long)(int)uVar21 * 2;
        *(short *)(lVar1 + 0xba0) = *(short *)(lVar1 + 0xba0) + 1;
        if (iVar28 < (int)lVar11) {
          iVar13 = 0;
        }
        else {
          iVar13 = *(int *)(lVar5 + (long)(iVar28 - (int)lVar11) * 4);
        }
        uVar8 = *puVar23;
        *(ulong *)(param_1 + 0x1718) =
             *(long *)(param_1 + 0x1718) + (ulong)uVar8 * (ulong)(iVar13 + uVar21);
        if (lVar15 != 0) {
          *(ulong *)(param_1 + 0x1720) =
               *(long *)(param_1 + 0x1720) +
               (ulong)uVar8 * (ulong)(iVar13 + (uint)*(ushort *)(lVar15 + (long)iVar28 * 4 + 2));
        }
      }
      lVar24 = lVar24 + 1;
    } while ((int)lVar24 != 0x23d);
    if (iVar14 != 0) {
      lVar15 = param_1 + (long)(int)uVar17 * 2;
      iVar28 = uVar17 + 1;
      do {
        do {
          iVar13 = iVar28 + -1;
          lVar24 = param_1 + (long)(iVar28 + -2) * 2;
          sVar18 = *(short *)(lVar24 + 0xba0);
          iVar28 = iVar13;
        } while (sVar18 == 0);
        lVar5 = param_1 + (long)iVar13 * 2;
        iVar14 = iVar14 + -2;
        *(short *)(lVar24 + 0xba0) = sVar18 + -1;
        *(short *)(lVar5 + 0xba0) = *(short *)(lVar5 + 0xba0) + 2;
        *(short *)(lVar15 + 0xba0) = *(short *)(lVar15 + 0xba0) + -1;
        iVar28 = uVar17 + 1;
      } while (0 < iVar14);
      if (uVar17 != 0) {
        iVar14 = 0x23d;
        do {
          uVar8 = *(ushort *)(param_1 + (long)(int)uVar17 * 2 + 0xba0);
          uVar21 = (uint)uVar8;
          if (uVar8 != 0) {
            do {
              do {
                iVar14 = iVar14 + -1;
                iVar28 = *(int *)(param_1 + (long)iVar14 * 4 + 0xbc0);
              } while ((int)lVar10 < iVar28);
              puVar23 = (ushort *)(lVar16 + (long)iVar28 * 4 + 2);
              uVar8 = *puVar23;
              if (uVar17 != uVar8) {
                *(ulong *)(param_1 + 0x1718) =
                     *(long *)(param_1 + 0x1718) +
                     ((long)(int)uVar17 - (ulong)uVar8) *
                     (ulong)*(ushort *)(lVar16 + (long)iVar28 * 4);
                *puVar23 = (ushort)uVar17;
              }
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
    }
  }
  sVar18 = 0;
  lVar15 = 0;
  do {
    lVar24 = lVar15 + 2;
    sVar18 = (sVar18 + *(short *)(param_1 + 0xba0 + lVar15)) * 2;
    *(short *)((long)auStack_70 + lVar15 + 2) = sVar18;
    lVar15 = lVar24;
  } while (lVar24 != 0x1e);
  if (-1 < (int)uVar26) {
    uVar29 = 0;
    uVar17 = 1;
    if (1 < (int)(uVar26 + 1)) {
      uVar17 = uVar26 + 1;
    }
    do {
      uVar8 = *(ushort *)(lVar25 + uVar29 * 4 + 2);
      uVar27 = (ulong)uVar8;
      if (uVar8 != 0) {
        uVar21 = (uint)auStack_70[(uint)uVar8];
        uVar26 = 0;
        auStack_70[uVar27] = auStack_70[(uint)uVar8] + 1;
        do {
          uVar4 = uVar21 & 1;
          uVar21 = uVar21 >> 1;
          uVar9 = (int)uVar27 - 1;
          uVar27 = (ulong)uVar9;
          uVar4 = uVar26 | uVar4;
          uVar26 = uVar4 << 1;
        } while (uVar9 != 0);
        *(short *)(lVar25 + uVar29 * 4) = (short)uVar4;
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar17);
  }
  return;
}


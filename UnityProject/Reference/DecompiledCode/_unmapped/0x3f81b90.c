// rea decompile_all
// name: FUN_03f81b90
// address: 0x3f81b90
// body: available
// range: 0x3f81b90-0x3f8215b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f81b90(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  pthread_t pVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  
  lVar16 = DAT_09534880;
  pVar10 = pthread_self();
  if (pVar10 == *(pthread_t *)(lVar16 + 600)) {
    *(int *)(lVar16 + 0x260) = *(int *)(lVar16 + 0x260) + 1;
  }
  else {
    iVar8 = *(int *)(lVar16 + 0x218);
    do {
      if (iVar8 != 0) {
        return;
      }
      iVar8 = FUN_0404bd00(0,1,lVar16 + 0x218);
    } while (iVar8 != 0);
    *(pthread_t *)(lVar16 + 600) = pVar10;
  }
  iVar8 = FUN_0404bed0(0,DAT_09534880 + 0x138);
  uVar11 = FUN_03f8f428();
  lVar16 = *(long *)(DAT_09534880 + 0x158);
  uVar21 = (uVar11 & 0xffffffff) - *(long *)(DAT_09534880 + 0x140);
  if (lVar16 < 0) {
    lVar16 = lVar16 + 1;
  }
  lVar17 = DAT_09534880;
  if (lVar16 >> 1 <= (long)uVar21) {
    uVar12 = FUN_0404c080(0,DAT_09534880);
    lVar16 = DAT_09534880;
    DataMemoryBarrier(2,3);
    local_90 = 0.0;
    dStack_88 = 0.0;
    uVar6 = (uint)(short)uVar12;
    if ((uint)*(ushort *)(DAT_09534880 + 0x1c8) != ((uint)uVar12 & 0xffff)) {
      FUN_03f814b4(uVar6);
    }
    lVar17 = *(long *)(lVar16 + 0x1c0);
    iVar14 = *(int *)(lVar16 + 0x208) + iVar8;
    uVar20 = (int)*(double *)(lVar16 + 0x210) + (int)uVar21;
    *(double *)(lVar16 + 0x1d8) = *(double *)(lVar16 + 0x1d8) + (double)iVar8;
    *(double *)(lVar16 + 0x1d0) = *(double *)(lVar16 + 0x1d0) + (double)(uVar21 & 0xffffffff);
    if ((lVar17 < 1) || (((double)(int)uVar6 + -1.0) / (double)iVar14 < *(double *)(lVar16 + 0x1b0))
       ) {
      dVar31 = (double)uVar20;
      iVar4 = *(int *)(lVar16 + 0x164);
      lVar18 = (long)iVar4;
      iVar8 = *(int *)(lVar16 + 0x160);
      lVar2 = *(long *)(lVar16 + 0x1e8);
      lVar3 = *(long *)(lVar16 + 0x1f0);
      dVar27 = 0.0;
      lVar19 = 0;
      if (lVar18 != 0) {
        lVar19 = lVar17 / lVar18;
      }
      *(undefined8 *)(lVar16 + 0x210) = 0;
      lVar1 = lVar17;
      if (lVar18 <= lVar17) {
        lVar1 = lVar18;
      }
      *(undefined4 *)(lVar16 + 0x208) = 0;
      iVar5 = 0;
      if (iVar8 != 0) {
        iVar5 = (int)lVar1 / iVar8;
      }
      lVar19 = lVar17 - lVar19 * lVar18;
      *(double *)(lVar2 + lVar19 * 8) = (double)iVar14 / dVar31;
      dVar25 = 0.0;
      uVar20 = iVar5 * iVar8;
      *(double *)(lVar3 + lVar19 * 8) = (double)(int)uVar6;
      *(long *)(lVar16 + 0x1c0) = lVar17 + 1;
      if (iVar8 < (int)uVar20) {
        dVar22 = 0.0;
        if (0 < (int)uVar20) {
          lVar19 = -(ulong)uVar20;
          do {
            lVar1 = lVar17 + 1 + lVar19;
            bVar7 = lVar19 != -1;
            lVar19 = lVar19 + 1;
            iVar14 = 0;
            if (lVar18 != 0) {
              iVar14 = (int)(lVar1 / lVar18);
            }
            uVar15 = (int)lVar1 - iVar14 * iVar4;
            dVar25 = dVar25 + *(double *)(lVar2 + (ulong)uVar15 * 8);
            dVar22 = dVar22 + *(double *)(lVar3 + (ulong)uVar15 * 8);
          } while (bVar7);
        }
        dVar29 = (double)(int)uVar20;
        dVar32 = dVar25 / dVar29;
        if (dVar32 <= 0.0) {
          dVar25 = 0.0;
        }
        else {
          dVar22 = dVar22 / dVar29;
          dVar25 = 0.0;
          if (0.0 < dVar22) {
            dVar28 = (double)iVar8;
            dVar26 = -1.0;
            dVar30 = dVar29 / (dVar29 / dVar28 + -1.0);
            dVar23 = (double)FUN_03f849f4(dVar28,lVar2,uVar20);
            dVar25 = dVar26;
            dVar27 = (double)FUN_03f849f4(dVar29 / (dVar29 / dVar28 + 1.0),lVar2,uVar20);
            dVar25 = dVar25 / dVar32;
            dVar27 = hypot(dVar27 / dVar32,dVar25);
            dVar24 = dVar27;
            if (dVar30 <= dVar29) {
              dVar29 = (double)FUN_03f849f4(dVar30,lVar2,uVar20);
              dVar25 = dVar25 / dVar32;
              dVar24 = hypot(dVar29 / dVar32,dVar25);
              if (dVar24 <= dVar27) {
                dVar24 = dVar27;
              }
            }
            dVar29 = (double)FUN_03f849f4(dVar28,lVar3,uVar20);
            dVar29 = dVar29 / dVar22;
            dVar25 = dVar25 / dVar22;
            dVar22 = dVar24;
            if (*(double *)(lVar16 + 0x1e0) != 0.0) {
              dVar22 = *(double *)(lVar16 + 0x1e0) * (*(double *)(lVar16 + 0x1a0) + 1.0) +
                       dVar24 * *(double *)(lVar16 + 0x1a0);
            }
            *(double *)(lVar16 + 0x1e0) = dVar22;
            local_90 = dVar29;
            dStack_88 = dVar25;
            dVar28 = hypot(dVar29,dVar25);
            dVar27 = 0.0;
            if (0.0 < dVar28) {
              dStack_98 = dVar26 / dVar32 - dVar25 * *(double *)(lVar16 + 0x168);
              local_a0 = dVar23 / dVar32 - dVar29 * *(double *)(lVar16 + 0x168);
              dVar27 = (double)FUN_03f84ab4(&local_a0,&local_90);
              dVar22 = *(double *)(lVar16 + 0x1e0);
            }
            dVar25 = 1.0;
            if (dVar24 <= dVar22) {
              dVar24 = dVar22;
            }
            if (0.0 < dVar24) {
              dVar25 = hypot(local_90,dStack_88);
              dVar25 = (dVar25 / dVar24) / *(double *)(lVar16 + 0x170);
            }
          }
        }
      }
      dVar22 = 1.0;
      if (dVar27 <= 1.0) {
        dVar22 = dVar27;
      }
      dVar29 = -1.0;
      if (-1.0 <= dVar27) {
        dVar29 = dVar22;
      }
      dVar22 = 1.0;
      if (dVar25 <= 1.0) {
        dVar22 = dVar25;
      }
      dVar32 = -1.0;
      if (-1.0 <= dVar25) {
        dVar32 = dVar22;
      }
      dVar22 = *(double *)(lVar16 + 0x178);
      dVar25 = pow(ABS(dVar29 * dVar32),*(double *)(lVar16 + 0x1a8));
      if (dVar29 * dVar32 < 0.0) {
        dVar25 = -dVar25;
      }
      dVar25 = dVar22 * dVar31 * dVar25;
      dVar31 = *(double *)(lVar16 + 0x180);
      if (dVar25 <= *(double *)(lVar16 + 0x180)) {
        dVar31 = dVar25;
      }
      dVar25 = dVar31;
      if ((0.0 < dVar31) && (dVar25 = 0.0, *(int *)(DAT_09534880 + 0x280) < 0x60)) {
        dVar25 = dVar31;
      }
      dVar25 = dVar25 + *(double *)(lVar16 + 0x1b8);
      *(double *)(lVar16 + 0x1b8) = dVar25;
      lVar17 = DAT_09534880;
      iVar8 = (int)(dVar25 * *(double *)(lVar16 + 0x1e0) * *(double *)(lVar16 + 0x170) *
                    *(double *)(lVar16 + 400) * 2.0 + 0.5);
      if (iVar8 < 1) {
        iVar14 = 1;
      }
      else {
        iVar14 = *(int *)(lVar16 + 0x188);
        if (iVar8 <= *(int *)(lVar16 + 0x188)) {
          iVar14 = iVar8;
        }
      }
      uVar20 = *(uint *)(DAT_09534880 + 0x268);
      dVar31 = (double)(int)uVar20;
      if (((double)(int)uVar20 <= dVar25) &&
         (dVar31 = (double)(*(int *)(DAT_09534880 + 0x26c) - iVar14), dVar25 <= dVar31)) {
        dVar31 = dVar25;
      }
      uVar15 = *(uint *)(lVar16 + 0x160);
      *(double *)(lVar16 + 0x1b8) = dVar31;
      if ((int)uVar15 < 0) {
        uVar15 = uVar15 + 1;
      }
      lVar2 = (long)((ulong)uVar15 << 0x20) >> 0x21;
      uVar21 = 0;
      if (lVar2 != 0) {
        uVar21 = *(long *)(lVar16 + 0x1c0) / lVar2;
      }
      uVar12 = -(uVar21 & 1);
      if (-1 < (long)uVar21) {
        uVar12 = uVar21 & 1;
      }
      uVar15 = (uint)(dVar31 + (double)(long)(uVar12 * (long)iVar14));
      if (((int)uVar20 <= (int)uVar15) &&
         (uVar20 = *(uint *)(lVar17 + 0x26c), (int)uVar15 <= (int)*(uint *)(lVar17 + 0x26c))) {
        uVar20 = uVar15;
      }
      if (uVar20 != uVar6) {
        *(short *)(lVar17 + 0x1c8) = (short)uVar20;
        uVar9 = FUN_03fae880(lVar17 + 0x200,*(undefined4 *)(lVar17 + 0x18c),
                             *(undefined4 *)(lVar17 + 0x198));
        *(undefined8 *)(lVar17 + 0x1d0) = 0;
        *(undefined8 *)(lVar17 + 0x1d8) = 0;
        *(undefined4 *)(lVar17 + 0x1f8) = uVar9;
      }
      if ((0.0 <= dVar27) || (uVar20 != *(uint *)(DAT_09534880 + 0x268))) {
        uVar21 = (ulong)*(uint *)(lVar16 + 0x1f8);
      }
      else {
        dVar25 = (double)NEON_ucvtf((ulong)*(uint *)(lVar16 + 0x1f8));
        dVar31 = 1.0;
        if (dVar27 <= -1.0) {
          dVar31 = -dVar27;
        }
        uVar21 = (ulong)(int)(dVar31 * 10.0 * dVar25 + 0.5);
      }
      uVar12 = (ulong)uVar20;
      *(ulong *)(lVar16 + 0x158) = uVar21;
    }
    else {
      *(int *)(lVar16 + 0x208) = iVar14;
      *(undefined8 *)(lVar16 + 0x158) = 10;
      *(double *)(lVar16 + 0x210) = (double)uVar20;
    }
    do {
      uVar21 = FUN_0404c080(0,DAT_09534880);
      DataMemoryBarrier(2,3);
      uVar13 = FUN_0404be00(uVar21,uVar21 & 0xffffffffffff0000 | uVar12 & 0xffff,DAT_09534880);
      DataMemoryBarrier(2,3);
    } while (uVar13 != uVar21);
    *(ulong *)(DAT_09534880 + 0x140) = uVar11 & 0xffffffff;
    uVar11 = FUN_03f8f428();
    lVar17 = DAT_09534880;
    *(ulong *)(DAT_09534880 + 0x150) = uVar11 & 0xffffffff;
  }
  if (*(int *)(lVar17 + 0x260) == 0) {
    *(undefined8 *)(lVar17 + 600) = 0;
    iVar8 = FUN_0404bea0(0,lVar17 + 0x218);
    if (iVar8 == 2) {
      FUN_03fe0300(lVar17 + 0x218,1,0);
    }
  }
  else {
    *(int *)(lVar17 + 0x260) = *(int *)(lVar17 + 0x260) + -1;
  }
  return;
}


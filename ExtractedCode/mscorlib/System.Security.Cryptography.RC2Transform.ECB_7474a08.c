// rea decompile_all
// name: System.Security.Cryptography.RC2Transform$$ECB
// address: 0x7474a08
// body: available
// range: 0x7474a08-0x747532f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74752c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74752e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7475328 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747532c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_RC2Transform__ECB(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  
  if (param_2 == 0) goto LAB_0747532c;
  uVar13 = *(uint *)(param_2 + 0x18);
  if ((uVar13 == 1) || (uVar13 == 0)) goto LAB_074752c0;
  uVar7 = (uint)*(ushort *)(param_2 + 0x20);
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_2 + 0x20);
  if ((uVar13 < 3) || (uVar13 == 3)) goto LAB_074752c0;
  uVar11 = (uint)*(ushort *)(param_2 + 0x22);
  *(ushort *)(param_1 + 0x5a) = *(ushort *)(param_2 + 0x22);
  if ((uVar13 < 5) || (uVar13 == 5)) goto LAB_074752c0;
  uVar12 = (uint)*(ushort *)(param_2 + 0x24);
  *(ushort *)(param_1 + 0x5c) = *(ushort *)(param_2 + 0x24);
  if ((uVar13 < 7) || (uVar13 == 7)) goto LAB_074752c0;
  uVar13 = (uint)*(ushort *)(param_2 + 0x26);
  *(ushort *)(param_1 + 0x5e) = *(ushort *)(param_2 + 0x26);
  if (*(char *)(param_1 + 0x18) == '\0') {
    lVar6 = *(long *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x68) = 0x3f;
    puVar9 = (ushort *)(lVar6 + 0x9e);
    uVar19 = 0x3f;
    do {
      uVar13 = uVar13 >> 5 & 0x7ff | uVar13 << 0xb;
      *(short *)(param_1 + 0x5e) = (short)uVar13;
      iVar21 = (int)uVar19;
      if (lVar6 == 0) {
        iVar21 = iVar21 + -1;
        goto LAB_074752e0;
      }
      uVar3 = *(uint *)(lVar6 + 0x18);
      uVar5 = (ulong)uVar3;
      if (uVar5 <= uVar19) {
        iVar21 = iVar21 + -1;
        goto LAB_07475324;
      }
      uVar15 = uVar12 >> 3 & 0x1fff | uVar12 << 0xd;
      uVar13 = uVar13 - ((uint)*puVar9 + (uVar11 & uVar12) + (uVar7 & (uVar12 ^ 0xffffffff)));
      *(short *)(param_1 + 0x5e) = (short)uVar13;
      *(short *)(param_1 + 0x5c) = (short)uVar15;
      if (uVar5 <= uVar19 - 1) {
        iVar21 = iVar21 + -2;
        goto LAB_07475324;
      }
      uVar18 = uVar11 >> 2 & 0x3fff | uVar11 << 0xe;
      uVar12 = (uVar15 - puVar9[-1]) - (uVar7 & uVar11 | uVar13 & (uVar11 ^ 0xffffffff));
      *(short *)(param_1 + 0x5c) = (short)uVar12;
      *(short *)(param_1 + 0x5a) = (short)uVar18;
      if (uVar5 <= uVar19 - 2) {
        iVar21 = iVar21 + -3;
        goto LAB_07475324;
      }
      uVar15 = uVar7 >> 1 & 0x7fff | uVar7 << 0xf;
      uVar11 = (uVar18 - puVar9[-2]) - (uVar13 & uVar7 | uVar12 & (uVar7 ^ 0xffffffff));
      *(short *)(param_1 + 0x5a) = (short)uVar11;
      *(short *)(param_1 + 0x58) = (short)uVar15;
      if (uVar5 <= uVar19 - 3) {
        iVar21 = iVar21 + -4;
        goto LAB_07475324;
      }
      puVar10 = puVar9 + -3;
      puVar9 = puVar9 + -4;
      uVar7 = (uVar15 - *puVar10) - (uVar12 & uVar13 | uVar11 & (uVar13 ^ 0xffffffff));
      *(short *)(param_1 + 0x58) = (short)uVar7;
      bVar4 = 0x2f < uVar19;
      uVar19 = uVar19 - 4;
    } while (bVar4);
    *(undefined4 *)(param_1 + 0x68) = 0x2b;
    if (uVar3 <= (uVar12 & 0x3f)) goto LAB_074752c0;
    uVar13 = uVar13 - *(ushort *)(lVar6 + (ulong)(uVar12 & 0x3f) * 2 + 0x20);
    *(short *)(param_1 + 0x5e) = (short)uVar13;
    if (uVar3 <= (uVar11 & 0x3f)) goto LAB_074752c0;
    uVar12 = uVar12 - *(ushort *)(lVar6 + (ulong)(uVar11 & 0x3f) * 2 + 0x20);
    *(short *)(param_1 + 0x5c) = (short)uVar12;
    if (uVar3 <= (uVar7 & 0x3f)) goto LAB_074752c0;
    uVar11 = uVar11 - *(ushort *)(lVar6 + (ulong)(uVar7 & 0x3f) * 2 + 0x20);
    *(short *)(param_1 + 0x5a) = (short)uVar11;
    if (uVar3 <= (uVar13 & 0x3f)) goto LAB_074752c0;
    uVar7 = uVar7 - *(ushort *)(lVar6 + (ulong)(uVar13 & 0x3f) * 2 + 0x20);
    puVar9 = (ushort *)(lVar6 + 0x76);
    *(short *)(param_1 + 0x58) = (short)uVar7;
    uVar19 = 0x2b;
    iVar8 = 0x27;
    do {
      iVar21 = iVar8;
      uVar17 = uVar19;
      uVar13 = uVar13 >> 5 & 0x7ff | uVar13 << 0xb;
      *(short *)(param_1 + 0x5e) = (short)uVar13;
      iVar8 = iVar21;
      if (uVar5 <= uVar17) goto LAB_074752d4;
      uVar15 = uVar12 >> 3 & 0x1fff | uVar12 << 0xd;
      uVar13 = uVar13 - ((uint)*puVar9 + (uVar7 & (uVar12 ^ 0xffffffff)) + (uVar11 & uVar12));
      *(short *)(param_1 + 0x5e) = (short)uVar13;
      *(short *)(param_1 + 0x5c) = (short)uVar15;
      if (uVar5 <= uVar17 - 1) goto LAB_074752cc;
      uVar18 = uVar11 >> 2 & 0x3fff | uVar11 << 0xe;
      uVar12 = (uVar15 - puVar9[-1]) - (uVar11 & uVar7 | uVar13 & (uVar11 ^ 0xffffffff));
      *(short *)(param_1 + 0x5c) = (short)uVar12;
      *(short *)(param_1 + 0x5a) = (short)uVar18;
      if (uVar5 <= uVar17 - 2) goto LAB_074752c4;
      uVar15 = uVar7 >> 1 & 0x7fff | uVar7 << 0xf;
      uVar11 = (uVar18 - puVar9[-2]) - (uVar13 & uVar7 | uVar12 & (uVar7 ^ 0xffffffff));
      *(short *)(param_1 + 0x5a) = (short)uVar11;
      *(short *)(param_1 + 0x58) = (short)uVar15;
      if (uVar5 <= uVar17 - 3) goto LAB_074752bc;
      puVar10 = puVar9 + -3;
      puVar9 = puVar9 + -4;
      iVar8 = iVar21 + -4;
      uVar7 = (uVar15 - *puVar10) - (uVar12 & uVar13 | uVar11 & (uVar13 ^ 0xffffffff));
      *(short *)(param_1 + 0x58) = (short)uVar7;
      uVar19 = uVar17 - 4;
    } while (0x17 < uVar17);
    *(int *)(param_1 + 0x68) = iVar21;
    if (uVar3 <= (uVar12 & 0x3f)) goto LAB_074752c0;
    uVar13 = uVar13 - *(ushort *)(lVar6 + (ulong)(uVar12 & 0x3f) * 2 + 0x20);
    *(short *)(param_1 + 0x5e) = (short)uVar13;
    if (uVar3 <= (uVar11 & 0x3f)) goto LAB_074752c0;
    uVar12 = uVar12 - *(ushort *)(lVar6 + (ulong)(uVar11 & 0x3f) * 2 + 0x20);
    *(short *)(param_1 + 0x5c) = (short)uVar12;
    if (uVar3 <= (uVar7 & 0x3f)) goto LAB_074752c0;
    uVar11 = uVar11 - *(ushort *)(lVar6 + (ulong)(uVar7 & 0x3f) * 2 + 0x20);
    *(short *)(param_1 + 0x5a) = (short)uVar11;
    if (uVar3 <= (uVar13 & 0x3f)) goto LAB_074752c0;
    uVar7 = uVar7 - *(ushort *)(lVar6 + (ulong)(uVar13 & 0x3f) * 2 + 0x20);
    *(short *)(param_1 + 0x58) = (short)uVar7;
    if (-1 < iVar21) {
      do {
        uVar19 = uVar17 - 4;
        uVar13 = uVar13 >> 5 & 0x7ff | uVar13 << 0xb;
        *(short *)(param_1 + 0x5e) = (short)uVar13;
        if (uVar5 <= uVar19) goto LAB_074752d4;
        iVar21 = (int)uVar17;
        uVar15 = uVar12 >> 3 & 0x1fff | uVar12 << 0xd;
        uVar13 = uVar13 - ((uint)*puVar9 + (uVar7 & (uVar12 ^ 0xffffffff)) + (uVar11 & uVar12));
        *(short *)(param_1 + 0x5e) = (short)uVar13;
        *(short *)(param_1 + 0x5c) = (short)uVar15;
        if (uVar3 <= iVar21 - 5U) goto LAB_074752cc;
        uVar18 = uVar11 >> 2 & 0x3fff | uVar11 << 0xe;
        uVar12 = (uVar15 - puVar9[-1]) - (uVar11 & uVar7 | uVar13 & (uVar11 ^ 0xffffffff));
        *(short *)(param_1 + 0x5c) = (short)uVar12;
        *(short *)(param_1 + 0x5a) = (short)uVar18;
        if (uVar3 <= iVar21 - 6U) goto LAB_074752c4;
        uVar15 = uVar7 >> 1 & 0x7fff | uVar7 << 0xf;
        uVar11 = (uVar18 - puVar9[-2]) - (uVar13 & uVar7 | uVar12 & (uVar7 ^ 0xffffffff));
        *(short *)(param_1 + 0x5a) = (short)uVar11;
        *(short *)(param_1 + 0x58) = (short)uVar15;
        if (uVar3 <= iVar21 - 7U) goto LAB_074752bc;
        puVar10 = puVar9 + -3;
        iVar8 = iVar8 + -4;
        puVar9 = puVar9 + -4;
        uVar7 = (uVar15 - *puVar10) - (uVar12 & uVar13 | uVar11 & (uVar13 ^ 0xffffffff));
        *(short *)(param_1 + 0x58) = (short)uVar7;
        uVar17 = uVar19;
      } while (3 < uVar19);
      iVar21 = iVar21 + -8;
      goto LAB_074751e8;
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x60);
    uVar19 = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    puVar9 = (ushort *)(lVar6 + 0x26);
    do {
      iVar21 = (int)uVar19;
      if (lVar6 == 0) {
        iVar21 = iVar21 + 1;
LAB_074752e0:
        *(int *)(param_1 + 0x68) = iVar21;
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = *(uint *)(lVar6 + 0x18);
      uVar5 = (ulong)uVar3;
      if (uVar5 <= uVar19) {
        iVar21 = iVar21 + 1;
        goto LAB_07475324;
      }
      uVar7 = (uint)puVar9[-3] + uVar7 + (uVar12 & uVar13) + (uVar11 & (uVar13 ^ 0xffffffff));
      uVar7 = uVar7 >> 0xf & 1 | uVar7 * 2;
      *(ushort *)(param_1 + 0x58) = (ushort)uVar7;
      if (uVar5 <= uVar19 + 1) {
        iVar21 = iVar21 + 2;
        goto LAB_07475324;
      }
      uVar11 = (uVar7 & uVar13) + uVar11 + (uVar12 & (uVar7 ^ 0xffffffff)) + (uint)puVar9[-2];
      uVar11 = uVar11 >> 0xe & 3 | uVar11 * 4;
      *(ushort *)(param_1 + 0x5a) = (ushort)uVar11;
      if (uVar5 <= uVar19 + 2) {
        iVar21 = iVar21 + 3;
        goto LAB_07475324;
      }
      uVar12 = (uVar11 & uVar7) + uVar12 + (uVar13 & (uVar11 ^ 0xffffffff)) + (uint)puVar9[-1];
      uVar12 = uVar12 >> 0xd & 7 | uVar12 * 8;
      *(ushort *)(param_1 + 0x5c) = (ushort)uVar12;
      if (uVar5 <= uVar19 + 3) {
        iVar21 = iVar21 + 4;
        goto LAB_07475324;
      }
      uVar15 = (uVar12 & uVar11) + uVar13 + (uVar7 & (uVar12 ^ 0xffffffff)) + (uint)*puVar9;
      uVar18 = uVar15 >> 0xb & 0x1f;
      uVar15 = uVar15 * 0x20;
      uVar13 = uVar18 | uVar15;
      bVar4 = uVar19 < 0xd;
      uVar19 = uVar19 + 4;
      *(short *)(param_1 + 0x5e) = (short)uVar13;
      puVar9 = puVar9 + 4;
    } while (bVar4);
    uVar13 = uVar18 | uVar15 & 0x3f;
    *(undefined4 *)(param_1 + 0x68) = 0x14;
    if (uVar3 <= uVar13) goto LAB_074752c0;
    uVar19 = (ulong)*(ushort *)(lVar6 + (ulong)uVar13 * 2 + 0x20) + (ulong)(ushort)uVar7;
    *(short *)(param_1 + 0x58) = (short)uVar19;
    if (uVar3 <= (uint)(uVar19 & 0x3f)) goto LAB_074752c0;
    uVar5 = (ulong)*(ushort *)(lVar6 + (uVar19 & 0x3f) * 2 + 0x20) + (ulong)(ushort)uVar11;
    *(short *)(param_1 + 0x5a) = (short)uVar5;
    if (uVar3 <= (uint)(uVar5 & 0x3f)) goto LAB_074752c0;
    uVar17 = (ulong)*(ushort *)(lVar6 + (uVar5 & 0x3f) * 2 + 0x20) + (ulong)(ushort)uVar12;
    *(short *)(param_1 + 0x5c) = (short)uVar17;
    if (uVar3 <= (uint)(uVar17 & 0x3f)) goto LAB_074752c0;
    lVar22 = 0x27;
    uVar13 = (uint)*(ushort *)(lVar6 + (uVar17 & 0x3f) * 2 + 0x20) + (uVar18 | uVar15 & 0xffff);
    uVar14 = (ulong)uVar13;
    *(short *)(param_1 + 0x5e) = (short)uVar13;
    puVar9 = (ushort *)(lVar6 + 0x4e);
    do {
      iVar21 = (int)lVar22;
      if (uVar3 <= iVar21 - 0x13U) {
        iVar21 = iVar21 + -0x12;
        goto LAB_07475324;
      }
      uVar12 = (uint)uVar14;
      uVar15 = (uint)uVar17;
      uVar13 = (int)uVar19 +
               (uVar15 & uVar12) + ((uint)uVar5 & (uVar12 ^ 0xffffffff)) + (uint)puVar9[-3];
      uVar11 = uVar13 >> 0xf & 1;
      uVar13 = uVar13 * 2;
      uVar7 = uVar11 | uVar13;
      uVar19 = (ulong)uVar7;
      *(ushort *)(param_1 + 0x58) = (ushort)uVar7;
      if (uVar3 <= iVar21 - 0x12U) {
        iVar21 = iVar21 + -0x11;
        goto LAB_07475324;
      }
      uVar18 = (uVar7 & uVar12) + (uint)uVar5 + (uVar15 & (uVar7 ^ 0xffffffff)) + (uint)puVar9[-2];
      uVar20 = (ulong)(uVar18 >> 0xe) & 3;
      uVar1 = (ulong)uVar18 << 2;
      uVar5 = uVar20 | uVar1 & 0x3fffc;
      uVar18 = (uint)uVar5;
      *(short *)(param_1 + 0x5a) = (short)uVar5;
      if (uVar3 <= iVar21 - 0x11U) {
        iVar21 = iVar21 + -0x10;
        goto LAB_07475324;
      }
      uVar15 = uVar15 + (uVar12 & (uVar18 ^ 0xffffffff)) + (uVar7 & uVar18) + (uint)puVar9[-1];
      uVar16 = (ulong)(uVar15 >> 0xd) & 7;
      uVar2 = (ulong)uVar15 << 3;
      uVar17 = uVar16 | uVar2 & 0x7fff8;
      *(short *)(param_1 + 0x5c) = (short)uVar17;
      if (uVar3 <= iVar21 - 0x10U) {
        iVar21 = iVar21 + -0xf;
        goto LAB_07475324;
      }
      puVar10 = puVar9 + 4;
      uVar23 = lVar22 - 0x13;
      uVar13 = (uint)*puVar9 + ((uVar11 | uVar13 & 0xffff) & ((uint)uVar17 ^ 0xffffffff)) +
               ((uint)uVar17 & uVar18) + uVar12;
      uVar12 = uVar13 >> 0xb & 0x1f;
      uVar13 = uVar13 * 0x20;
      uVar11 = uVar12 | uVar13 & 0x1fffe0;
      uVar14 = (ulong)uVar11;
      lVar22 = lVar22 + 4;
      *(short *)(param_1 + 0x5e) = (short)uVar11;
      puVar9 = puVar10;
    } while (uVar23 < 0x25);
    iVar21 = (int)lVar22 + -0x13;
    *(int *)(param_1 + 0x68) = iVar21;
    if (uVar3 <= (uVar12 | uVar13 & 0x20)) goto LAB_074752c0;
    uVar19 = (ulong)*(ushort *)(lVar6 + (uVar14 & 0x3f) * 2 + 0x20) + (ulong)(ushort)uVar7;
    uVar7 = (uint)uVar19;
    *(short *)(param_1 + 0x58) = (short)uVar19;
    if (uVar3 <= (uint)(uVar19 & 0x3f)) goto LAB_074752c0;
    uVar5 = (ulong)*(ushort *)(lVar6 + (uVar19 & 0x3f) * 2 + 0x20) + (uVar20 | uVar1 & 0xfffc);
    *(short *)(param_1 + 0x5a) = (short)uVar5;
    if (uVar3 <= (uint)(uVar5 & 0x3f)) goto LAB_074752c0;
    uVar17 = (ulong)*(ushort *)(lVar6 + (uVar5 & 0x3f) * 2 + 0x20) + (uVar16 | uVar2 & 0xfff8);
    *(short *)(param_1 + 0x5c) = (short)uVar17;
    if (uVar3 <= (uint)(uVar17 & 0x3f)) goto LAB_074752c0;
    uVar13 = (uint)*(ushort *)(lVar6 + (uVar17 & 0x3f) * 2 + 0x20) + (uVar12 | uVar13 & 0xffe0);
    *(short *)(param_1 + 0x5e) = (short)uVar13;
    if (iVar21 < 0x40) {
      do {
        iVar21 = (int)lVar22;
        if (uVar3 <= iVar21 - 0x13U) {
          iVar21 = iVar21 + -0x12;
          goto LAB_07475324;
        }
        uVar15 = (uint)uVar17;
        uVar11 = (int)uVar19 +
                 (uVar15 & uVar13) + ((uint)uVar5 & (uVar13 ^ 0xffffffff)) + (uint)puVar10[-3];
        uVar12 = uVar11 >> 0xf & 1;
        uVar11 = uVar11 * 2;
        uVar7 = uVar12 | uVar11;
        uVar19 = (ulong)uVar7;
        *(short *)(param_1 + 0x58) = (short)uVar7;
        if (uVar3 <= iVar21 - 0x12U) {
          iVar21 = iVar21 + -0x11;
          goto LAB_07475324;
        }
        uVar18 = (uVar7 & uVar13) + (uint)uVar5 +
                 (uVar15 & (uVar7 ^ 0xffffffff)) + (uint)puVar10[-2];
        uVar18 = uVar18 >> 0xe & 3 | (uVar18 & 0xffff) << 2;
        uVar5 = (ulong)uVar18;
        *(short *)(param_1 + 0x5a) = (short)uVar18;
        if (uVar3 <= iVar21 - 0x11U) {
          iVar21 = iVar21 + -0x10;
          goto LAB_07475324;
        }
        uVar15 = uVar15 + (uVar13 & (uVar18 ^ 0xffffffff)) + (uVar7 & uVar18) + (uint)puVar10[-1];
        uVar15 = uVar15 >> 0xd & 7 | (uVar15 & 0xffff) << 3;
        uVar17 = (ulong)uVar15;
        *(short *)(param_1 + 0x5c) = (short)uVar15;
        if (uVar3 <= iVar21 - 0x10U) {
          iVar21 = iVar21 + -0xf;
          goto LAB_07475324;
        }
        lVar6 = lVar22 + -0x13;
        uVar13 = (uint)*puVar10 + ((uVar12 | uVar11 & 0xffff) & (uVar15 ^ 0xffffffff)) +
                 (uVar18 & uVar15) + uVar13;
        lVar22 = lVar22 + 4;
        uVar13 = uVar13 >> 0xb & 0x1f | (uVar13 & 0xffff) << 5;
        *(short *)(param_1 + 0x5e) = (short)uVar13;
        puVar10 = puVar10 + 4;
      } while (lVar6 < 0x3c);
      iVar21 = iVar21 + -0xf;
LAB_074751e8:
      *(int *)(param_1 + 0x68) = iVar21;
    }
  }
  if (param_3 != 0) {
    uVar13 = *(uint *)(param_3 + 0x18);
    if (((((uVar13 != 0) && (*(char *)(param_3 + 0x20) = (char)uVar7, uVar13 != 1)) &&
         (*(undefined1 *)(param_3 + 0x21) = *(undefined1 *)(param_1 + 0x59), 2 < uVar13)) &&
        ((*(undefined1 *)(param_3 + 0x22) = *(undefined1 *)(param_1 + 0x5a), uVar13 != 3 &&
         (*(undefined1 *)(param_3 + 0x23) = *(undefined1 *)(param_1 + 0x5b), 4 < uVar13)))) &&
       ((*(undefined1 *)(param_3 + 0x24) = *(undefined1 *)(param_1 + 0x5c), uVar13 != 5 &&
        ((*(undefined1 *)(param_3 + 0x25) = *(undefined1 *)(param_1 + 0x5d), 6 < uVar13 &&
         (*(undefined1 *)(param_3 + 0x26) = *(undefined1 *)(param_1 + 0x5e), uVar13 != 7)))))) {
      *(undefined1 *)(param_3 + 0x27) = *(undefined1 *)(param_1 + 0x5f);
      return;
    }
LAB_074752c0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0747532c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_074752d4:
  iVar21 = iVar8 + 3;
  goto LAB_07475324;
LAB_074752cc:
  iVar21 = iVar8 + 2;
  goto LAB_07475324;
LAB_074752bc:
  *(int *)(param_1 + 0x68) = iVar8;
  goto LAB_074752c0;
LAB_074752c4:
  iVar21 = iVar8 + 1;
LAB_07475324:
  *(int *)(param_1 + 0x68) = iVar21;
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}


// rea decompile_all
// name: System.Security.Cryptography.MD5CryptoServiceProvider$$ProcessBlock
// address: 0x74733cc
// body: available
// range: 0x74733cc-0x747403b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7474034 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7474038 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_MD5CryptoServiceProvider__ProcessBlock
               (long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  
  if ((DAT_09521206 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187d28);
    DAT_09521206 = 1;
  }
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 0x40;
  if (param_2 != 0) {
    uVar18 = 0;
    lVar19 = *(long *)(param_1 + 0x30);
    uVar16 = *(uint *)(param_2 + 0x18);
    lVar21 = 0x20;
    do {
      iVar17 = param_3 + (int)lVar21;
      uVar22 = iVar17 - 0x20;
      if ((uVar16 <= uVar22) || (uVar23 = iVar17 - 0x1f, uVar16 <= uVar23)) goto LAB_07474034;
      iVar17 = param_3 + (int)lVar21;
      uVar24 = iVar17 - 0x1e;
      if ((uVar16 <= uVar24) || (uVar25 = iVar17 - 0x1d, uVar16 <= uVar25)) goto LAB_07474034;
      if (lVar19 == 0) goto LAB_07474038;
      if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_07474034;
      uVar18 = uVar18 + 1;
      *(uint *)(lVar19 + lVar21) =
           CONCAT13(*(undefined1 *)(param_2 + (int)uVar25 + 0x20),
                    CONCAT12(*(undefined1 *)(param_2 + (int)uVar24 + 0x20),
                             CONCAT11(*(undefined1 *)(param_2 + (int)uVar23 + 0x20),
                                      *(undefined1 *)(param_2 + (int)uVar22 + 0x20))));
      lVar21 = lVar21 + 4;
    } while (lVar21 != 0x60);
    lVar21 = *(long *)(param_1 + 0x28);
    if (lVar21 != 0) {
      uVar16 = *(uint *)(lVar21 + 0x18);
      if ((((uVar16 != 0) && (uVar16 != 1)) && (2 < uVar16)) && (uVar16 != 3)) {
        iVar17 = *(int *)(lVar21 + 0x20);
        uVar22 = *(uint *)(lVar21 + 0x24);
        uVar16 = *(uint *)(lVar21 + 0x28);
        uVar23 = *(uint *)(lVar21 + 0x2c);
        if (*(int *)(DAT_09187d28 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar21 = **(long **)(DAT_09187d28 + 0xb8);
        if (lVar21 == 0) goto LAB_07474038;
        uVar24 = *(uint *)(lVar21 + 0x18);
        if (uVar24 != 0) {
          lVar19 = *(long *)(param_1 + 0x30);
          if (lVar19 == 0) goto LAB_07474038;
          uVar25 = *(uint *)(lVar19 + 0x18);
          if ((((((((uVar25 != 0) && (uVar24 != 1)) &&
                  ((uVar25 != 1 && ((2 < uVar24 && (2 < uVar25)))))) && (uVar24 != 3)) &&
                (((((uVar25 != 3 && (4 < uVar24)) && (4 < uVar25)) &&
                  ((uVar24 != 5 && (uVar25 != 5)))) &&
                 ((6 < uVar24 && ((6 < uVar25 && (uVar24 != 7)))))))) &&
               ((uVar25 != 7 && (((8 < uVar24 && (8 < uVar25)) && (uVar24 != 9)))))) &&
              ((((uVar25 != 9 && (10 < uVar24)) &&
                ((10 < uVar25 && ((uVar24 != 0xb && (uVar25 != 0xb)))))) && (0xc < uVar24)))) &&
             (((((((((0xc < uVar25 && (uVar24 != 0xd)) && (uVar25 != 0xd)) &&
                   ((0xe < uVar24 && (0xe < uVar25)))) && (uVar24 != 0xf)) &&
                 ((uVar25 != 0xf && (0x10 < uVar24)))) &&
                (((uVar24 != 0x11 && (((0x12 < uVar24 && (uVar24 != 0x13)) && (0x14 < uVar24)))) &&
                 (((uVar24 != 0x15 && (0x16 < uVar24)) && (uVar24 != 0x17)))))) &&
               ((((0x18 < uVar24 && (uVar24 != 0x19)) &&
                 ((0x1a < uVar24 && (((uVar24 != 0x1b && (0x1c < uVar24)) && (uVar24 != 0x1d))))))
                && (((0x1e < uVar24 && (uVar24 != 0x1f)) &&
                    ((((0x20 < uVar24 &&
                       (((uVar24 != 0x21 && (0x22 < uVar24)) &&
                        ((uVar24 != 0x23 &&
                         ((((0x24 < uVar24 && (uVar24 != 0x25)) && (0x26 < uVar24)) &&
                          ((uVar24 != 0x27 && (0x28 < uVar24)))))))))) && (uVar24 != 0x29)) &&
                     ((((0x2a < uVar24 && (uVar24 != 0x2b)) &&
                       (((((0x2c < uVar24 &&
                           (((uVar24 != 0x2d && (0x2e < uVar24)) && (uVar24 != 0x2f)))) &&
                          (((0x30 < uVar24 && (uVar24 != 0x31)) && (0x32 < uVar24)))) &&
                         ((uVar24 != 0x33 && (0x34 < uVar24)))) &&
                        ((uVar24 != 0x35 &&
                         (((0x36 < uVar24 && (uVar24 != 0x37)) && (0x38 < uVar24)))))))) &&
                      ((uVar24 != 0x39 && (0x3a < uVar24)))))))))))) &&
              ((uVar24 != 0x3b &&
               (((0x3c < uVar24 && (uVar24 != 0x3d)) && ((0x3e < uVar24 && (uVar24 != 0x3f))))))))))
          {
            lVar20 = *(long *)(param_1 + 0x28);
            if (lVar20 == 0) goto LAB_07474038;
            uVar24 = *(uint *)(lVar20 + 0x18);
            if (uVar24 != 0) {
              iVar1 = *(int *)(lVar19 + 0x20);
              iVar8 = *(int *)(lVar19 + 0x24);
              uVar25 = (uVar16 & uVar22 | uVar23 & (uVar22 ^ 0xffffffff)) + iVar17 + iVar1 +
                       *(int *)(lVar21 + 0x20);
              uVar25 = (uVar25 >> 0x19 | uVar25 * 0x80) + uVar22;
              uVar23 = (uVar22 & uVar25 | uVar16 & (uVar25 ^ 0xffffffff)) +
                       uVar23 + *(int *)(lVar21 + 0x24) + iVar8;
              uVar23 = (uVar23 >> 0x14 | uVar23 * 0x1000) + uVar25;
              iVar17 = *(int *)(lVar19 + 0x28);
              iVar9 = *(int *)(lVar19 + 0x2c);
              uVar16 = (uVar25 & uVar23 | uVar22 & (uVar23 ^ 0xffffffff)) +
                       uVar16 + *(int *)(lVar21 + 0x28) + iVar17;
              uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) + uVar23;
              uVar22 = (uVar23 & uVar16 | uVar25 & (uVar16 ^ 0xffffffff)) +
                       uVar22 + *(int *)(lVar21 + 0x2c) + iVar9;
              uVar22 = (uVar22 >> 10 | uVar22 * 0x400000) + uVar16;
              iVar2 = *(int *)(lVar19 + 0x30);
              iVar10 = *(int *)(lVar19 + 0x34);
              uVar25 = (uVar16 & uVar22 | uVar23 & (uVar22 ^ 0xffffffff)) +
                       uVar25 + *(int *)(lVar21 + 0x30) + iVar2;
              uVar25 = (uVar25 >> 0x19 | uVar25 * 0x80) + uVar22;
              uVar23 = (uVar22 & uVar25 | uVar16 & (uVar25 ^ 0xffffffff)) +
                       uVar23 + *(int *)(lVar21 + 0x34) + iVar10;
              uVar23 = (uVar23 >> 0x14 | uVar23 * 0x1000) + uVar25;
              iVar3 = *(int *)(lVar19 + 0x38);
              iVar11 = *(int *)(lVar19 + 0x3c);
              uVar16 = (uVar25 & uVar23 | uVar22 & (uVar23 ^ 0xffffffff)) +
                       uVar16 + *(int *)(lVar21 + 0x38) + iVar3;
              uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) + uVar23;
              uVar22 = (uVar23 & uVar16 | uVar25 & (uVar16 ^ 0xffffffff)) +
                       uVar22 + *(int *)(lVar21 + 0x3c) + iVar11;
              uVar22 = (uVar22 >> 10 | uVar22 * 0x400000) + uVar16;
              iVar4 = *(int *)(lVar19 + 0x40);
              iVar12 = *(int *)(lVar19 + 0x44);
              uVar25 = (uVar16 & uVar22 | uVar23 & (uVar22 ^ 0xffffffff)) +
                       uVar25 + *(int *)(lVar21 + 0x40) + iVar4;
              uVar25 = (uVar25 >> 0x19 | uVar25 * 0x80) + uVar22;
              uVar23 = (uVar22 & uVar25 | uVar16 & (uVar25 ^ 0xffffffff)) +
                       uVar23 + *(int *)(lVar21 + 0x44) + iVar12;
              uVar23 = (uVar23 >> 0x14 | uVar23 * 0x1000) + uVar25;
              iVar5 = *(int *)(lVar19 + 0x48);
              iVar13 = *(int *)(lVar19 + 0x4c);
              uVar16 = (uVar25 & uVar23 | uVar22 & (uVar23 ^ 0xffffffff)) +
                       uVar16 + *(int *)(lVar21 + 0x48) + iVar5;
              uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) + uVar23;
              uVar22 = (uVar23 & uVar16 | uVar25 & (uVar16 ^ 0xffffffff)) +
                       uVar22 + *(int *)(lVar21 + 0x4c) + iVar13;
              uVar22 = (uVar22 >> 10 | uVar22 * 0x400000) + uVar16;
              iVar6 = *(int *)(lVar19 + 0x50);
              iVar14 = *(int *)(lVar19 + 0x54);
              uVar25 = (uVar16 & uVar22 | uVar23 & (uVar22 ^ 0xffffffff)) +
                       uVar25 + *(int *)(lVar21 + 0x50) + iVar6;
              uVar25 = (uVar25 >> 0x19 | uVar25 * 0x80) + uVar22;
              uVar23 = (uVar22 & uVar25 | uVar16 & (uVar25 ^ 0xffffffff)) +
                       uVar23 + *(int *)(lVar21 + 0x54) + iVar14;
              uVar23 = (uVar23 >> 0x14 | uVar23 * 0x1000) + uVar25;
              iVar7 = *(int *)(lVar19 + 0x58);
              iVar15 = *(int *)(lVar19 + 0x5c);
              uVar16 = (uVar25 & uVar23 | uVar22 & (uVar23 ^ 0xffffffff)) +
                       uVar16 + *(int *)(lVar21 + 0x58) + iVar7;
              uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) + uVar23;
              uVar22 = (uVar23 & uVar16 | uVar25 & (uVar16 ^ 0xffffffff)) +
                       uVar22 + *(int *)(lVar21 + 0x5c) + iVar15;
              uVar22 = (uVar22 >> 10 | uVar22 * 0x400000) + uVar16;
              uVar25 = uVar25 + iVar8 + *(int *)(lVar21 + 0x60) +
                       (uVar22 & uVar23 | uVar16 & (uVar23 ^ 0xffffffff));
              uVar25 = (uVar25 >> 0x1b | uVar25 * 0x20) + uVar22;
              uVar23 = uVar23 + iVar3 + *(int *)(lVar21 + 100) +
                       (uVar25 & uVar16 | uVar22 & (uVar16 ^ 0xffffffff));
              uVar23 = (uVar23 >> 0x17 | uVar23 * 0x200) + uVar25;
              uVar16 = uVar16 + iVar13 + *(int *)(lVar21 + 0x68) +
                       (uVar23 & uVar22 | uVar25 & (uVar22 ^ 0xffffffff));
              uVar16 = (uVar16 >> 0x12 | uVar16 * 0x4000) + uVar23;
              uVar22 = uVar22 + iVar1 + *(int *)(lVar21 + 0x6c) +
                       (uVar16 & uVar25 | uVar23 & (uVar25 ^ 0xffffffff));
              uVar22 = (uVar22 >> 0xc | uVar22 * 0x100000) + uVar16;
              uVar25 = uVar25 + iVar10 + *(int *)(lVar21 + 0x70) +
                       (uVar22 & uVar23 | uVar16 & (uVar23 ^ 0xffffffff));
              uVar25 = (uVar25 >> 0x1b | uVar25 * 0x20) + uVar22;
              uVar23 = uVar23 + iVar5 + *(int *)(lVar21 + 0x74) +
                       (uVar25 & uVar16 | uVar22 & (uVar16 ^ 0xffffffff));
              uVar23 = (uVar23 >> 0x17 | uVar23 * 0x200) + uVar25;
              uVar16 = uVar16 + iVar15 + *(int *)(lVar21 + 0x78) +
                       (uVar23 & uVar22 | uVar25 & (uVar22 ^ 0xffffffff));
              uVar16 = (uVar16 >> 0x12 | uVar16 * 0x4000) + uVar23;
              uVar22 = uVar22 + iVar2 + *(int *)(lVar21 + 0x7c) +
                       (uVar16 & uVar25 | uVar23 & (uVar25 ^ 0xffffffff));
              uVar22 = (uVar22 >> 0xc | uVar22 * 0x100000) + uVar16;
              uVar25 = uVar25 + iVar12 + *(int *)(lVar21 + 0x80) +
                       (uVar22 & uVar23 | uVar16 & (uVar23 ^ 0xffffffff));
              uVar25 = (uVar25 >> 0x1b | uVar25 * 0x20) + uVar22;
              uVar23 = uVar23 + iVar7 + *(int *)(lVar21 + 0x84) +
                       (uVar25 & uVar16 | uVar22 & (uVar16 ^ 0xffffffff));
              uVar23 = (uVar23 >> 0x17 | uVar23 * 0x200) + uVar25;
              uVar16 = uVar16 + iVar9 + *(int *)(lVar21 + 0x88) +
                       (uVar23 & uVar22 | uVar25 & (uVar22 ^ 0xffffffff));
              uVar16 = (uVar16 >> 0x12 | uVar16 * 0x4000) + uVar23;
              uVar22 = uVar22 + iVar4 + *(int *)(lVar21 + 0x8c) +
                       (uVar16 & uVar25 | uVar23 & (uVar25 ^ 0xffffffff));
              uVar22 = (uVar22 >> 0xc | uVar22 * 0x100000) + uVar16;
              uVar25 = uVar25 + iVar14 + *(int *)(lVar21 + 0x90) +
                       (uVar22 & uVar23 | uVar16 & (uVar23 ^ 0xffffffff));
              uVar25 = (uVar25 >> 0x1b | uVar25 * 0x20) + uVar22;
              uVar23 = uVar23 + iVar17 + *(int *)(lVar21 + 0x94) +
                       (uVar25 & uVar16 | uVar22 & (uVar16 ^ 0xffffffff));
              uVar23 = (uVar23 >> 0x17 | uVar23 * 0x200) + uVar25;
              uVar16 = uVar16 + iVar11 + *(int *)(lVar21 + 0x98) +
                       (uVar23 & uVar22 | uVar25 & (uVar22 ^ 0xffffffff));
              uVar16 = (uVar16 >> 0x12 | uVar16 * 0x4000) + uVar23;
              uVar22 = uVar22 + iVar6 + *(int *)(lVar21 + 0x9c) +
                       ((uVar16 ^ uVar23) & uVar25 ^ uVar23);
              uVar22 = (uVar22 >> 0xc | uVar22 * 0x100000) + uVar16;
              uVar25 = uVar25 + iVar10 + *(int *)(lVar21 + 0xa0) + (uVar16 ^ uVar23 ^ uVar22);
              uVar25 = (uVar25 >> 0x1c | uVar25 * 0x10) + uVar22;
              uVar23 = uVar23 + iVar4 + *(int *)(lVar21 + 0xa4) + (uVar22 ^ uVar16 ^ uVar25);
              uVar23 = (uVar23 >> 0x15 | uVar23 * 0x800) + uVar25;
              uVar16 = uVar16 + iVar13 + *(int *)(lVar21 + 0xa8) + (uVar25 ^ uVar22 ^ uVar23);
              uVar16 = (uVar16 >> 0x10 | uVar16 * 0x10000) + uVar23;
              uVar22 = uVar22 + iVar7 + *(int *)(lVar21 + 0xac) + (uVar23 ^ uVar25 ^ uVar16);
              uVar22 = (uVar22 >> 9 | uVar22 * 0x800000) + uVar16;
              uVar25 = uVar25 + iVar8 + *(int *)(lVar21 + 0xb0) + (uVar16 ^ uVar23 ^ uVar22);
              uVar25 = (uVar25 >> 0x1c | uVar25 * 0x10) + uVar22;
              uVar23 = uVar23 + iVar2 + *(int *)(lVar21 + 0xb4) + (uVar22 ^ uVar16 ^ uVar25);
              uVar23 = (uVar23 >> 0x15 | uVar23 * 0x800) + uVar25;
              uVar16 = uVar16 + iVar11 + *(int *)(lVar21 + 0xb8) + (uVar25 ^ uVar22 ^ uVar23);
              uVar16 = (uVar16 >> 0x10 | uVar16 * 0x10000) + uVar23;
              uVar22 = uVar22 + iVar5 + *(int *)(lVar21 + 0xbc) + (uVar23 ^ uVar25 ^ uVar16);
              uVar22 = (uVar22 >> 9 | uVar22 * 0x800000) + uVar16;
              uVar25 = uVar25 + iVar14 + *(int *)(lVar21 + 0xc0) + (uVar16 ^ uVar23 ^ uVar22);
              uVar25 = (uVar25 >> 0x1c | uVar25 * 0x10) + uVar22;
              uVar23 = uVar23 + iVar1 + *(int *)(lVar21 + 0xc4) + (uVar22 ^ uVar16 ^ uVar25);
              uVar23 = (uVar23 >> 0x15 | uVar23 * 0x800) + uVar25;
              uVar16 = uVar16 + iVar9 + *(int *)(lVar21 + 200) + (uVar25 ^ uVar22 ^ uVar23);
              uVar16 = (uVar16 >> 0x10 | uVar16 * 0x10000) + uVar23;
              uVar22 = uVar22 + iVar3 + *(int *)(lVar21 + 0xcc) + (uVar23 ^ uVar25 ^ uVar16);
              uVar22 = (uVar22 >> 9 | uVar22 * 0x800000) + uVar16;
              uVar25 = uVar25 + iVar12 + *(int *)(lVar21 + 0xd0) + (uVar16 ^ uVar23 ^ uVar22);
              uVar25 = (uVar25 >> 0x1c | uVar25 * 0x10) + uVar22;
              uVar23 = uVar23 + iVar6 + *(int *)(lVar21 + 0xd4) + (uVar22 ^ uVar16 ^ uVar25);
              uVar23 = (uVar23 >> 0x15 | uVar23 * 0x800) + uVar25;
              uVar16 = uVar16 + iVar15 + *(int *)(lVar21 + 0xd8) + (uVar25 ^ uVar22 ^ uVar23);
              uVar16 = (uVar16 >> 0x10 | uVar16 * 0x10000) + uVar23;
              uVar22 = uVar22 + iVar17 + *(int *)(lVar21 + 0xdc) + (uVar23 ^ uVar25 ^ uVar16);
              uVar22 = (uVar22 >> 9 | uVar22 * 0x800000) + uVar16;
              uVar25 = uVar25 + iVar1 + *(int *)(lVar21 + 0xe0) +
                       ((uVar22 | uVar23 ^ 0xffffffff) ^ uVar16);
              uVar25 = (uVar25 >> 0x1a | uVar25 * 0x40) + uVar22;
              uVar23 = uVar23 + iVar11 + *(int *)(lVar21 + 0xe4) +
                       ((uVar25 | uVar16 ^ 0xffffffff) ^ uVar22);
              uVar23 = (uVar23 >> 0x16 | uVar23 * 0x400) + uVar25;
              uVar16 = uVar16 + iVar7 + *(int *)(lVar21 + 0xe8) +
                       ((uVar23 | uVar22 ^ 0xffffffff) ^ uVar25);
              uVar16 = (uVar16 >> 0x11 | uVar16 * 0x8000) + uVar23;
              uVar22 = uVar22 + iVar10 + *(int *)(lVar21 + 0xec) +
                       ((uVar16 | uVar25 ^ 0xffffffff) ^ uVar23);
              uVar22 = (uVar22 >> 0xb | uVar22 * 0x200000) + uVar16;
              uVar25 = uVar25 + iVar6 + *(int *)(lVar21 + 0xf0) +
                       ((uVar22 | uVar23 ^ 0xffffffff) ^ uVar16);
              uVar25 = (uVar25 >> 0x1a | uVar25 * 0x40) + uVar22;
              uVar23 = uVar23 + iVar9 + *(int *)(lVar21 + 0xf4) +
                       ((uVar25 | uVar16 ^ 0xffffffff) ^ uVar22);
              uVar23 = (uVar23 >> 0x16 | uVar23 * 0x400) + uVar25;
              uVar16 = uVar16 + iVar5 + *(int *)(lVar21 + 0xf8) +
                       ((uVar23 | uVar22 ^ 0xffffffff) ^ uVar25);
              uVar16 = (uVar16 >> 0x11 | uVar16 * 0x8000) + uVar23;
              uVar22 = uVar22 + iVar8 + *(int *)(lVar21 + 0xfc) +
                       ((uVar16 | uVar25 ^ 0xffffffff) ^ uVar23);
              uVar22 = (uVar22 >> 0xb | uVar22 * 0x200000) + uVar16;
              uVar25 = uVar25 + iVar4 + *(int *)(lVar21 + 0x100) +
                       ((uVar22 | uVar23 ^ 0xffffffff) ^ uVar16);
              uVar25 = (uVar25 >> 0x1a | uVar25 * 0x40) + uVar22;
              uVar23 = uVar23 + iVar15 + *(int *)(lVar21 + 0x104) +
                       ((uVar25 | uVar16 ^ 0xffffffff) ^ uVar22);
              uVar23 = (uVar23 >> 0x16 | uVar23 * 0x400) + uVar25;
              uVar16 = uVar16 + iVar3 + *(int *)(lVar21 + 0x108) +
                       ((uVar23 | uVar22 ^ 0xffffffff) ^ uVar25);
              iVar1 = *(int *)(lVar21 + 0x118);
              uVar16 = (uVar16 >> 0x11 | uVar16 * 0x8000) + uVar23;
              uVar22 = uVar22 + iVar14 + *(int *)(lVar21 + 0x10c) +
                       ((uVar16 | uVar25 ^ 0xffffffff) ^ uVar23);
              uVar22 = (uVar22 >> 0xb | uVar22 * 0x200000) + uVar16;
              iVar3 = *(int *)(lVar21 + 0x114);
              uVar25 = uVar25 + iVar2 + *(int *)(lVar21 + 0x110) +
                       ((uVar22 | uVar23 ^ 0xffffffff) ^ uVar16);
              uVar25 = (uVar25 >> 0x1a | uVar25 * 0x40) + uVar22;
              iVar2 = *(int *)(lVar21 + 0x11c);
              *(uint *)(lVar20 + 0x20) = *(int *)(lVar20 + 0x20) + uVar25;
              if (uVar24 != 1) {
                uVar23 = uVar23 + iVar13 + iVar3 + ((uVar25 | uVar16 ^ 0xffffffff) ^ uVar22);
                uVar23 = (uVar23 >> 0x16 | uVar23 * 0x400) + uVar25;
                uVar16 = uVar16 + iVar17 + iVar1 + ((uVar23 | uVar22 ^ 0xffffffff) ^ uVar25);
                uVar16 = (uVar16 >> 0x11 | uVar16 * 0x8000) + uVar23;
                uVar22 = uVar22 + iVar12 + iVar2 + ((uVar16 | uVar25 ^ 0xffffffff) ^ uVar23);
                *(uint *)(lVar20 + 0x24) =
                     (uVar22 >> 0xb | uVar22 * 0x200000) + uVar16 + *(int *)(lVar20 + 0x24);
                if ((2 < uVar24) &&
                   (*(uint *)(lVar20 + 0x28) = *(int *)(lVar20 + 0x28) + uVar16, uVar24 != 3)) {
                  *(uint *)(lVar20 + 0x2c) = *(int *)(lVar20 + 0x2c) + uVar23;
                  return;
                }
              }
            }
          }
        }
      }
LAB_07474034:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_07474038:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


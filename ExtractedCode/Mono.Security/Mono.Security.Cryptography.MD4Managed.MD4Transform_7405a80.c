// rea decompile_all
// name: Mono.Security.Cryptography.MD4Managed$$MD4Transform
// address: 0x7405a80
// body: available
// range: 0x7405a80-0x74060ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74060e8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74060ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Cryptography_MD4Managed__MD4Transform(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  
  if (param_2 != 0) {
    uVar20 = *(uint *)(param_2 + 0x18);
    if ((((uVar20 != 0) && (uVar20 != 1)) && (2 < uVar20)) && (uVar20 != 3)) {
      iVar2 = *(int *)(param_2 + 0x20);
      uVar10 = *(uint *)(param_2 + 0x24);
      uVar20 = *(uint *)(param_2 + 0x28);
      uVar11 = *(uint *)(param_2 + 0x2c);
      Mono_Security_Cryptography_MD4Managed__Decode(param_1,*(undefined8 *)(param_1 + 0x40));
      lVar26 = *(long *)(param_1 + 0x40);
      if (lVar26 == 0) goto LAB_074060ec;
      uVar21 = *(uint *)(lVar26 + 0x18);
      if ((((((uVar21 != 0) && (uVar21 != 1)) && ((2 < uVar21 && ((uVar21 != 3 && (4 < uVar21))))))
           && (uVar21 != 5)) &&
          ((((6 < uVar21 && (uVar21 != 7)) && (8 < uVar21)) && ((uVar21 != 9 && (10 < uVar21))))))
         && (((uVar21 != 0xb && ((0xc < uVar21 && (uVar21 != 0xd)))) &&
             ((0xe < uVar21 && (uVar21 != 0xf)))))) {
        uVar21 = *(uint *)(param_2 + 0x18);
        if (uVar21 != 0) {
          iVar3 = *(int *)(lVar26 + 0x20);
          iVar12 = *(int *)(lVar26 + 0x24);
          uVar1 = (uVar20 & uVar10) + iVar2 + (uVar11 & (uVar10 ^ 0xffffffff)) + iVar3;
          uVar1 = uVar1 >> 0x1d | uVar1 * 8;
          uVar11 = (uVar1 & uVar10) + uVar11 + (uVar20 & (uVar1 ^ 0xffffffff)) + iVar12;
          uVar11 = uVar11 >> 0x19 | uVar11 * 0x80;
          iVar2 = *(int *)(lVar26 + 0x28);
          iVar13 = *(int *)(lVar26 + 0x2c);
          uVar20 = (uVar11 & uVar1) + uVar20 + (uVar10 & (uVar11 ^ 0xffffffff)) + iVar2;
          uVar22 = uVar20 >> 0x15 | uVar20 * 0x800;
          uVar20 = (uVar22 & uVar11) + uVar10 + (uVar1 & (uVar22 ^ 0xffffffff)) + iVar13;
          uVar10 = uVar20 >> 0xd | uVar20 * 0x80000;
          iVar4 = *(int *)(lVar26 + 0x30);
          iVar14 = *(int *)(lVar26 + 0x34);
          uVar20 = (uVar10 & uVar22) + uVar1 + (uVar11 & (uVar10 ^ 0xffffffff)) + iVar4;
          uVar1 = uVar20 >> 0x1d | uVar20 * 8;
          uVar20 = (uVar1 & uVar10) + uVar11 + (uVar22 & (uVar1 ^ 0xffffffff)) + iVar14;
          uVar11 = uVar20 >> 0x19 | uVar20 * 0x80;
          iVar5 = *(int *)(lVar26 + 0x38);
          iVar15 = *(int *)(lVar26 + 0x3c);
          uVar20 = (uVar11 & uVar1) + uVar22 + (uVar10 & (uVar11 ^ 0xffffffff)) + iVar5;
          uVar22 = uVar20 >> 0x15 | uVar20 * 0x800;
          uVar20 = (uVar22 & uVar11) + uVar10 + (uVar1 & (uVar22 ^ 0xffffffff)) + iVar15;
          uVar10 = uVar20 >> 0xd | uVar20 * 0x80000;
          iVar6 = *(int *)(lVar26 + 0x40);
          iVar16 = *(int *)(lVar26 + 0x44);
          uVar20 = (uVar10 & uVar22) + uVar1 + (uVar11 & (uVar10 ^ 0xffffffff)) + iVar6;
          uVar1 = uVar20 >> 0x1d | uVar20 * 8;
          uVar20 = (uVar1 & uVar10) + uVar11 + (uVar22 & (uVar1 ^ 0xffffffff)) + iVar16;
          uVar11 = uVar20 >> 0x19 | uVar20 * 0x80;
          iVar7 = *(int *)(lVar26 + 0x48);
          iVar17 = *(int *)(lVar26 + 0x4c);
          uVar20 = (uVar11 & uVar1) + uVar22 + (uVar10 & (uVar11 ^ 0xffffffff)) + iVar7;
          uVar22 = uVar20 >> 0x15 | uVar20 * 0x800;
          uVar20 = (uVar22 & uVar11) + uVar10 + (uVar1 & (uVar22 ^ 0xffffffff)) + iVar17;
          uVar10 = uVar20 >> 0xd | uVar20 * 0x80000;
          iVar8 = *(int *)(lVar26 + 0x50);
          iVar18 = *(int *)(lVar26 + 0x54);
          uVar20 = (uVar10 & uVar22) + uVar1 + (uVar11 & (uVar10 ^ 0xffffffff)) + iVar8;
          uVar1 = uVar20 >> 0x1d | uVar20 * 8;
          uVar20 = (uVar1 & uVar10) + uVar11 + (uVar22 & (uVar1 ^ 0xffffffff)) + iVar18;
          uVar23 = uVar20 >> 0x19 | uVar20 * 0x80;
          iVar9 = *(int *)(lVar26 + 0x58);
          iVar19 = *(int *)(lVar26 + 0x5c);
          uVar20 = (uVar23 & uVar1) + uVar22 + (uVar10 & (uVar23 ^ 0xffffffff)) + iVar9;
          uVar11 = uVar23 & (uVar20 >> 0x15 | uVar20 * 0x800);
          uVar10 = iVar19 + uVar10 + uVar11 +
                   (uVar1 & ((uVar20 >> 0x15 | uVar20 * 0x800) ^ 0xffffffff));
          uVar22 = uVar10 >> 0xd | uVar10 * 0x80000;
          uVar11 = iVar3 + uVar1 + 0x5a827999 +
                   ((uVar23 | uVar20 >> 0x15 | uVar20 * 0x800) & (uVar10 >> 0xd | uVar10 * 0x80000)
                   | uVar11);
          uVar24 = uVar11 >> 0x1d | uVar11 * 8;
          uVar1 = iVar4 + uVar23 + 0x5a827999 +
                  ((uVar22 | uVar20 >> 0x15 | uVar20 * 0x800) & (uVar11 >> 0x1d | uVar11 * 8) |
                  uVar22 & (uVar20 >> 0x15 | uVar20 * 0x800));
          uVar23 = uVar1 >> 0x1b | uVar1 * 0x20;
          uVar20 = iVar6 + (uVar20 >> 0x15 | uVar20 * 0x800) + 0x5a827999 +
                   ((uVar24 | uVar10 >> 0xd | uVar10 * 0x80000) & (uVar1 >> 0x1b | uVar1 * 0x20) |
                   uVar24 & (uVar10 >> 0xd | uVar10 * 0x80000));
          uVar25 = uVar20 >> 0x17 | uVar20 * 0x200;
          uVar10 = iVar8 + uVar22 + 0x5a827999 +
                   ((uVar23 | uVar11 >> 0x1d | uVar11 * 8) & (uVar20 >> 0x17 | uVar20 * 0x200) |
                   uVar23 & (uVar11 >> 0x1d | uVar11 * 8));
          uVar22 = uVar10 >> 0x13 | uVar10 * 0x2000;
          uVar11 = iVar12 + uVar24 + 0x5a827999 +
                   ((uVar25 | uVar1 >> 0x1b | uVar1 * 0x20) & (uVar10 >> 0x13 | uVar10 * 0x2000) |
                   uVar25 & (uVar1 >> 0x1b | uVar1 * 0x20));
          uVar1 = uVar11 >> 0x1d | uVar11 * 8;
          uVar20 = iVar14 + uVar23 + 0x5a827999 +
                   ((uVar22 | uVar20 >> 0x17 | uVar20 * 0x200) & (uVar11 >> 0x1d | uVar11 * 8) |
                   uVar22 & (uVar20 >> 0x17 | uVar20 * 0x200));
          uVar23 = uVar20 >> 0x1b | uVar20 * 0x20;
          uVar10 = iVar16 + uVar25 + 0x5a827999 +
                   ((uVar1 | uVar10 >> 0x13 | uVar10 * 0x2000) & (uVar20 >> 0x1b | uVar20 * 0x20) |
                   uVar1 & (uVar10 >> 0x13 | uVar10 * 0x2000));
          uVar24 = uVar10 >> 0x17 | uVar10 * 0x200;
          uVar11 = iVar18 + uVar22 + 0x5a827999 +
                   ((uVar23 | uVar11 >> 0x1d | uVar11 * 8) & (uVar10 >> 0x17 | uVar10 * 0x200) |
                   uVar23 & (uVar11 >> 0x1d | uVar11 * 8));
          uVar22 = uVar11 >> 0x13 | uVar11 * 0x2000;
          uVar20 = iVar2 + uVar1 + 0x5a827999 +
                   ((uVar24 | uVar20 >> 0x1b | uVar20 * 0x20) & (uVar11 >> 0x13 | uVar11 * 0x2000) |
                   uVar24 & (uVar20 >> 0x1b | uVar20 * 0x20));
          uVar1 = uVar20 >> 0x1d | uVar20 * 8;
          uVar10 = iVar5 + uVar23 + 0x5a827999 +
                   ((uVar22 | uVar10 >> 0x17 | uVar10 * 0x200) & (uVar20 >> 0x1d | uVar20 * 8) |
                   uVar22 & (uVar10 >> 0x17 | uVar10 * 0x200));
          uVar23 = uVar10 >> 0x1b | uVar10 * 0x20;
          uVar11 = iVar7 + uVar24 + 0x5a827999 +
                   ((uVar1 | uVar11 >> 0x13 | uVar11 * 0x2000) & (uVar10 >> 0x1b | uVar10 * 0x20) |
                   uVar1 & (uVar11 >> 0x13 | uVar11 * 0x2000));
          uVar24 = uVar11 >> 0x17 | uVar11 * 0x200;
          uVar20 = iVar9 + uVar22 + 0x5a827999 +
                   ((uVar23 | uVar20 >> 0x1d | uVar20 * 8) & (uVar11 >> 0x17 | uVar11 * 0x200) |
                   uVar23 & (uVar20 >> 0x1d | uVar20 * 8));
          uVar22 = uVar20 >> 0x13 | uVar20 * 0x2000;
          uVar10 = iVar13 + uVar1 + 0x5a827999 +
                   ((uVar24 | uVar10 >> 0x1b | uVar10 * 0x20) & (uVar20 >> 0x13 | uVar20 * 0x2000) |
                   uVar24 & (uVar10 >> 0x1b | uVar10 * 0x20));
          uVar25 = uVar10 >> 0x1d | uVar10 * 8;
          uVar11 = iVar15 + uVar23 + 0x5a827999 +
                   ((uVar22 | uVar11 >> 0x17 | uVar11 * 0x200) & (uVar10 >> 0x1d | uVar10 * 8) |
                   uVar22 & (uVar11 >> 0x17 | uVar11 * 0x200));
          uVar23 = uVar11 >> 0x1b | uVar11 * 0x20;
          uVar20 = iVar17 + uVar24 + 0x5a827999 +
                   ((uVar25 | uVar20 >> 0x13 | uVar20 * 0x2000) & (uVar11 >> 0x1b | uVar11 * 0x20) |
                   uVar25 & (uVar20 >> 0x13 | uVar20 * 0x2000));
          uVar10 = iVar19 + uVar22 + 0x5a827999 +
                   ((uVar23 | uVar10 >> 0x1d | uVar10 * 8) & (uVar20 >> 0x17 | uVar20 * 0x200) |
                   uVar23 & (uVar10 >> 0x1d | uVar10 * 8));
          uVar22 = uVar10 >> 0x13 | uVar10 * 0x2000;
          uVar1 = uVar22 ^ (uVar20 >> 0x17 | uVar20 * 0x200);
          uVar11 = iVar3 + uVar25 + 0x6ed9eba1 + (uVar1 ^ (uVar11 >> 0x1b | uVar11 * 0x20));
          uVar24 = uVar11 >> 0x1d | uVar11 * 8;
          uVar1 = iVar6 + uVar23 + 0x6ed9eba1 + (uVar1 ^ (uVar11 >> 0x1d | uVar11 * 8));
          uVar23 = uVar1 >> 0x17 | uVar1 * 0x200;
          uVar20 = iVar4 + (uVar20 >> 0x17 | uVar20 * 0x200) + 0x6ed9eba1 +
                   (uVar24 ^ (uVar10 >> 0x13 | uVar10 * 0x2000) ^ (uVar1 >> 0x17 | uVar1 * 0x200));
          uVar25 = uVar20 >> 0x15 | uVar20 * 0x800;
          uVar10 = iVar8 + uVar22 + 0x6ed9eba1 +
                   (uVar23 ^ (uVar11 >> 0x1d | uVar11 * 8) ^ (uVar20 >> 0x15 | uVar20 * 0x800));
          uVar22 = uVar10 >> 0x11 | uVar10 * 0x8000;
          uVar11 = iVar2 + uVar24 + 0x6ed9eba1 +
                   (uVar25 ^ (uVar1 >> 0x17 | uVar1 * 0x200) ^ (uVar10 >> 0x11 | uVar10 * 0x8000));
          uVar1 = uVar11 >> 0x1d | uVar11 * 8;
          uVar20 = iVar7 + uVar23 + 0x6ed9eba1 +
                   (uVar22 ^ (uVar20 >> 0x15 | uVar20 * 0x800) ^ (uVar11 >> 0x1d | uVar11 * 8));
          uVar23 = uVar20 >> 0x17 | uVar20 * 0x200;
          uVar10 = iVar5 + uVar25 + 0x6ed9eba1 +
                   (uVar1 ^ (uVar10 >> 0x11 | uVar10 * 0x8000) ^ (uVar20 >> 0x17 | uVar20 * 0x200));
          uVar24 = uVar10 >> 0x15 | uVar10 * 0x800;
          uVar11 = iVar9 + uVar22 + 0x6ed9eba1 +
                   (uVar23 ^ (uVar11 >> 0x1d | uVar11 * 8) ^ (uVar10 >> 0x15 | uVar10 * 0x800));
          uVar22 = uVar11 >> 0x11 | uVar11 * 0x8000;
          uVar20 = iVar12 + uVar1 + 0x6ed9eba1 +
                   (uVar24 ^ (uVar20 >> 0x17 | uVar20 * 0x200) ^ (uVar11 >> 0x11 | uVar11 * 0x8000))
          ;
          uVar1 = uVar20 >> 0x1d | uVar20 * 8;
          uVar10 = iVar16 + uVar23 + 0x6ed9eba1 +
                   (uVar22 ^ (uVar10 >> 0x15 | uVar10 * 0x800) ^ (uVar20 >> 0x1d | uVar20 * 8));
          uVar23 = uVar10 >> 0x17 | uVar10 * 0x200;
          uVar11 = iVar14 + uVar24 + 0x6ed9eba1 +
                   (uVar1 ^ (uVar11 >> 0x11 | uVar11 * 0x8000) ^ (uVar10 >> 0x17 | uVar10 * 0x200));
          uVar24 = uVar11 >> 0x15 | uVar11 * 0x800;
          uVar20 = iVar18 + uVar22 + 0x6ed9eba1 +
                   (uVar23 ^ (uVar20 >> 0x1d | uVar20 * 8) ^ (uVar11 >> 0x15 | uVar11 * 0x800));
          uVar10 = iVar13 + uVar1 + 0x6ed9eba1 +
                   (uVar24 ^ (uVar10 >> 0x17 | uVar10 * 0x200) ^ (uVar20 >> 0x11 | uVar20 * 0x8000))
          ;
          uVar1 = uVar10 >> 0x1d | uVar10 * 8;
          *(uint *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + uVar1;
          if (uVar21 != 1) {
            uVar22 = uVar20 >> 0x11 | uVar20 * 0x8000;
            uVar11 = iVar17 + uVar23 + 0x6ed9eba1 +
                     (uVar22 ^ (uVar11 >> 0x15 | uVar11 * 0x800) ^ (uVar10 >> 0x1d | uVar10 * 8));
            uVar23 = uVar11 >> 0x17 | uVar11 * 0x200;
            uVar20 = iVar15 + uVar24 + 0x6ed9eba1 +
                     (uVar1 ^ (uVar20 >> 0x11 | uVar20 * 0x8000) ^ (uVar11 >> 0x17 | uVar11 * 0x200)
                     );
            uVar10 = iVar19 + uVar22 + 0x6ed9eba1 +
                     (uVar23 ^ (uVar10 >> 0x1d | uVar10 * 8) ^ (uVar20 >> 0x15 | uVar20 * 0x800));
            *(uint *)(param_2 + 0x24) =
                 *(int *)(param_2 + 0x24) + (uVar10 >> 0x11 | uVar10 * 0x8000);
            if ((2 < uVar21) &&
               (*(uint *)(param_2 + 0x28) =
                     *(int *)(param_2 + 0x28) + (uVar20 >> 0x15 | uVar20 * 0x800), uVar21 != 3)) {
              *(uint *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + uVar23;
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_074060ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


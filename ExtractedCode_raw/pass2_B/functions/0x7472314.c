// rea decompile_all
// name: System.Security.Cryptography.DESTransform$$Permutation
// address: 0x7472314
// body: available
// range: 0x7472314-0x74725cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74725c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74725cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_DESTransform__Permutation
               (long param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  if ((DAT_095211fd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183188);
    DAT_095211fd = 1;
  }
  if ((param_4 & 1) != 0) {
    if (*(int *)(DAT_09183188 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Security_Cryptography_DESTransform__BSwap(param_1);
  }
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      if (param_3 == 0) goto LAB_074725cc;
      uVar18 = *(uint *)(param_3 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x20) >> 3;
      uVar13 = (ulong)bVar12 & 0x1e;
      if ((uint)uVar13 < uVar18) {
        uVar14 = ((ulong)*(byte *)(param_1 + 0x20) & 0xf) << 1 | 0x20;
        uVar16 = (uint)uVar14;
        if (((uVar16 < uVar18) && (uVar4 = bVar12 | 1, uVar4 < uVar18)) &&
           (uVar16 = uVar16 | 1, uVar16 < uVar18)) {
          uVar19 = *(uint *)(param_3 + 0x20 + uVar14 * 4) | *(uint *)(param_3 + 0x20 + uVar13 * 4);
          uVar18 = *(uint *)(param_3 + 0x20 + (ulong)uVar16 * 4) |
                   *(uint *)(param_3 + 0x20 + (ulong)uVar4 * 4);
          if (*(int *)(DAT_09183188 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar3 = *(int *)(*(long *)(DAT_09183188 + 0xb8) + 0xc) * 2;
          if (2 < iVar3) {
            uVar16 = *(uint *)(param_1 + 0x18);
            iVar17 = 0x61;
            iVar3 = (iVar3 - 3U >> 1) + 1;
            if (uVar16 < 2) {
              uVar16 = 1;
            }
            pbVar15 = (byte *)(param_1 + 0x21);
            do {
              uVar16 = uVar16 - 1;
              if (uVar16 == 0) goto LAB_074725c8;
              uVar4 = *(uint *)(param_3 + 0x18);
              iVar1 = iVar17 + (*pbVar15 >> 3 & 0x1e);
              uVar10 = iVar1 - 0x21;
              if (uVar4 <= uVar10) goto LAB_074725c8;
              uVar2 = iVar17 + (*pbVar15 & 0xf) * 2;
              if (((uVar4 <= uVar2 - 1) || (uVar11 = iVar1 - 0x20, uVar4 <= uVar11)) ||
                 (uVar4 <= uVar2)) goto LAB_074725c8;
              iVar3 = iVar3 + -1;
              iVar17 = iVar17 + 0x40;
              pbVar15 = pbVar15 + 1;
              uVar19 = *(uint *)(param_3 + 0x20 + (long)(int)uVar10 * 4) |
                       uVar19 | *(uint *)(param_3 + 0x20 + (long)(int)(uVar2 - 1) * 4);
              uVar18 = *(uint *)(param_3 + 0x20 + (long)(int)uVar11 * 4) |
                       uVar18 | *(uint *)(param_3 + 0x20 + (long)(int)uVar2 * 4);
            } while (iVar3 != 0);
          }
          uVar5 = (undefined1)(uVar19 >> 8);
          uVar6 = (undefined1)(uVar19 >> 0x10);
          uVar7 = (undefined1)(uVar19 >> 0x18);
          uVar8 = (undefined1)(uVar18 >> 8);
          uVar9 = (undefined1)(uVar18 >> 0x10);
          if ((param_4 & 1) == 0) {
            if (param_2 == 0) goto LAB_074725cc;
            uVar16 = *(uint *)(param_2 + 0x18);
            if (((uVar16 != 0) && (*(undefined1 *)(param_2 + 0x20) = uVar7, uVar16 != 1)) &&
               ((*(undefined1 *)(param_2 + 0x21) = uVar6, 2 < uVar16 &&
                ((((*(undefined1 *)(param_2 + 0x22) = uVar5, uVar16 != 3 &&
                   (*(char *)(param_2 + 0x23) = (char)uVar19, 4 < uVar16)) &&
                  (*(char *)(param_2 + 0x24) = (char)(uVar18 >> 0x18), uVar16 != 5)) &&
                 ((*(undefined1 *)(param_2 + 0x25) = uVar9, 6 < uVar16 &&
                  (*(undefined1 *)(param_2 + 0x26) = uVar8, uVar16 != 7)))))))) goto LAB_074725b0;
          }
          else {
            if (param_2 == 0) goto LAB_074725cc;
            uVar16 = *(uint *)(param_2 + 0x18);
            if (((uVar16 != 0) && (*(char *)(param_2 + 0x20) = (char)uVar19, uVar16 != 1)) &&
               (((*(undefined1 *)(param_2 + 0x21) = uVar5, 2 < uVar16 &&
                 (((*(undefined1 *)(param_2 + 0x22) = uVar6, uVar16 != 3 &&
                   (*(undefined1 *)(param_2 + 0x23) = uVar7, 4 < uVar16)) &&
                  (*(char *)(param_2 + 0x24) = (char)uVar18, uVar16 != 5)))) &&
                ((*(undefined1 *)(param_2 + 0x25) = uVar8, 6 < uVar16 &&
                 (*(undefined1 *)(param_2 + 0x26) = uVar9, uVar16 != 7)))))) {
              uVar18 = uVar18 >> 0x18;
LAB_074725b0:
              *(char *)(param_2 + 0x27) = (char)uVar18;
              return;
            }
          }
        }
      }
    }
LAB_074725c8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_074725cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


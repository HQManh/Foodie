// rea decompile_all
// name: System.Security.Cryptography.RijndaelManagedTransform$$GenerateKeyExpansion
// address: 0x7463770
// body: available
// range: 0x7463770-0x7463cef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7463c9c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7463ca0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7463cec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_RijndaelManagedTransform__GenerateKeyExpansion
               (long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  ulong uVar17;
  
  if ((DAT_095211a3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_0918a310);
    DAT_095211a3 = 1;
  }
  if (param_2 == 0) goto LAB_07463ca0;
  iVar9 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) <= *(int *)(param_2 + 0x18) * 8) {
    iVar9 = *(int *)(param_2 + 0x18) << 3;
  }
  if (iVar9 == 0x80) {
    iVar9 = 0xb;
    uVar7 = 10;
  }
  else if (iVar9 == 0x100) {
    iVar9 = 0xf;
    uVar7 = 0xe;
  }
  else {
    if (iVar9 != 0xc0) {
      uVar4 = thunk_FUN_03fc39d4(&DAT_0920d668);
      uVar4 = System_Environment__GetResourceString(uVar4,0);
      thunk_FUN_03fc39d4(&DAT_09182f98);
      uVar5 = thunk_FUN_03f9944c();
      System_Security_Cryptography_CryptographicException___ctor(uVar5,uVar4);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091d8080);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar4);
    }
    iVar9 = 0xd;
    uVar7 = 0xc;
  }
  *(undefined4 *)(param_1 + 0x40) = uVar7;
  lVar3 = FUN_03f5c394(DAT_091801b8,iVar9 * *(int *)(param_1 + 0x44));
  plVar14 = (long *)(param_1 + 0x30);
  *plVar14 = lVar3;
  thunk_FUN_03f5d7b8(plVar14,lVar3);
  lVar3 = FUN_03f5c394(DAT_091801b8,
                       *(int *)(param_1 + 0x44) +
                       *(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x40));
  plVar15 = (long *)(param_1 + 0x38);
  *plVar15 = lVar3;
  thunk_FUN_03f5d7b8(plVar15,lVar3);
  uVar13 = *(uint *)(param_1 + 0x48);
  if ((int)uVar13 < 1) {
LAB_07463a28:
    iVar9 = *(int *)(param_1 + 0x40);
    uVar2 = *(uint *)(param_1 + 0x44);
    uVar6 = (ulong)uVar2;
    if ((int)uVar13 < (int)(uVar2 + uVar2 * iVar9)) {
      lVar3 = (long)(int)uVar13;
      lVar12 = *plVar14;
      do {
        if (lVar12 == 0) goto LAB_07463ca0;
        uVar13 = (uint)lVar3;
        if (*(uint *)(lVar12 + 0x18) <= uVar13 - 1) goto LAB_07463c9c;
        iVar9 = *(int *)(param_1 + 0x48);
        iVar16 = 0;
        if (iVar9 != 0) {
          iVar16 = (int)uVar13 / iVar9;
        }
        uVar2 = *(uint *)(lVar12 + (long)(int)(uVar13 - 1) * 4 + 0x20);
        if (uVar13 == iVar16 * iVar9) {
          if (*(int *)(DAT_0918a310 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_Security_Cryptography_RijndaelManagedTransform__SubWord
                            (uVar2 >> 8 | uVar2 << 0x18);
          lVar10 = *(long *)(*(long *)(DAT_0918a310 + 0xb8) + 8);
          if (lVar10 == 0) goto LAB_07463ca0;
          iVar9 = *(int *)(param_1 + 0x48);
          iVar16 = 0;
          if (iVar9 != 0) {
            iVar16 = (int)uVar13 / iVar9;
          }
          if (*(uint *)(lVar10 + 0x18) <= iVar16 - 1U) goto LAB_07463c9c;
          lVar12 = *plVar14;
          if (lVar12 == 0) goto LAB_07463ca0;
          uVar2 = *(uint *)(lVar10 + (long)(int)(iVar16 - 1U) * 4 + 0x20) ^ uVar2;
        }
        if ((*(uint *)(lVar12 + 0x18) <= uVar13 - iVar9) || (*(uint *)(lVar12 + 0x18) <= uVar13))
        goto LAB_07463c9c;
        lVar10 = lVar3 * 4;
        lVar3 = lVar3 + 1;
        *(uint *)(lVar12 + lVar10 + 0x20) =
             *(uint *)(lVar12 + (long)(int)(uVar13 - iVar9) * 4 + 0x20) ^ uVar2;
        iVar9 = *(int *)(param_1 + 0x40);
        uVar13 = *(uint *)(param_1 + 0x44);
        uVar6 = (ulong)uVar13;
      } while (lVar3 < (int)(uVar13 + uVar13 * iVar9));
    }
  }
  else {
    uVar2 = *(uint *)(param_2 + 0x18);
    uVar6 = 0;
    lVar3 = 0x20;
    do {
      iVar9 = (int)lVar3;
      if ((((uVar2 <= iVar9 - 0x20U) || (uVar2 <= iVar9 - 0x1fU)) || (uVar2 <= iVar9 - 0x1eU)) ||
         (uVar2 <= iVar9 - 0x1dU)) goto LAB_07463c9c;
      lVar12 = *plVar14;
      if (lVar12 == 0) goto LAB_07463ca0;
      if (*(uint *)(lVar12 + 0x18) <= uVar6) goto LAB_07463c9c;
      uVar6 = uVar6 + 1;
      *(uint *)(lVar12 + lVar3) =
           CONCAT13(*(undefined1 *)(param_2 + (iVar9 + -0x1d) + 0x20),
                    CONCAT12(*(undefined1 *)(param_2 + (iVar9 + -0x1e) + 0x20),
                             CONCAT11(*(undefined1 *)(param_2 + (iVar9 + -0x1f) + 0x20),
                                      *(undefined1 *)(param_2 + (int)(iVar9 - 0x20U) + 0x20))));
      lVar3 = lVar3 + 4;
      uVar13 = *(uint *)(param_1 + 0x48);
    } while ((long)uVar6 < (long)(int)uVar13);
    if ((int)uVar13 < 7) goto LAB_07463a28;
    iVar9 = *(int *)(param_1 + 0x40);
    uVar2 = *(uint *)(param_1 + 0x44);
    uVar6 = (ulong)uVar2;
    if ((int)uVar13 < (int)(uVar2 + uVar2 * iVar9)) {
      lVar3 = *plVar14;
      uVar17 = (ulong)uVar13;
      do {
        if (lVar3 == 0) goto LAB_07463ca0;
        uVar13 = (uint)uVar17;
        if (*(uint *)(lVar3 + 0x18) <= uVar13 - 1) goto LAB_07463c9c;
        iVar9 = *(int *)(param_1 + 0x48);
        iVar16 = 0;
        if (iVar9 != 0) {
          iVar16 = (int)uVar13 / iVar9;
        }
        uVar2 = *(uint *)(lVar3 + (long)(int)(uVar13 - 1) * 4 + 0x20);
        if (uVar13 - iVar16 * iVar9 == 4) {
          if (*(int *)(DAT_0918a310 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_Security_Cryptography_RijndaelManagedTransform__SubWord(uVar2);
        }
        else if (uVar13 == iVar16 * iVar9) {
          if (*(int *)(DAT_0918a310 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_Security_Cryptography_RijndaelManagedTransform__SubWord
                            (uVar2 >> 8 | uVar2 << 0x18);
          lVar3 = *(long *)(*(long *)(DAT_0918a310 + 0xb8) + 8);
          if (lVar3 == 0) goto LAB_07463ca0;
          iVar9 = 0;
          if (*(int *)(param_1 + 0x48) != 0) {
            iVar9 = (int)uVar13 / *(int *)(param_1 + 0x48);
          }
          if (*(uint *)(lVar3 + 0x18) <= iVar9 - 1U) goto LAB_07463c9c;
          uVar2 = *(uint *)(lVar3 + (long)(int)(iVar9 - 1U) * 4 + 0x20) ^ uVar2;
        }
        lVar3 = *plVar14;
        if (lVar3 == 0) goto LAB_07463ca0;
        uVar8 = uVar13 - *(int *)(param_1 + 0x48);
        if ((*(uint *)(lVar3 + 0x18) <= uVar8) || (*(uint *)(lVar3 + 0x18) <= uVar13))
        goto LAB_07463c9c;
        lVar12 = uVar17 * 4;
        uVar17 = uVar17 + 1;
        *(uint *)(lVar3 + lVar12 + 0x20) = *(uint *)(lVar3 + (long)(int)uVar8 * 4 + 0x20) ^ uVar2;
        iVar9 = *(int *)(param_1 + 0x40);
        uVar13 = *(uint *)(param_1 + 0x44);
        uVar6 = (ulong)uVar13;
      } while ((long)uVar17 < (long)(int)(uVar13 + uVar13 * iVar9));
    }
  }
  if (0 < (int)uVar6) {
    lVar3 = *plVar14;
    if (lVar3 == 0) {
LAB_07463ca0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar12 = *plVar15;
    uVar11 = *(ulong *)(lVar3 + 0x18);
    uVar17 = 0;
    do {
      if ((uVar11 & 0xffffffff) == uVar17) goto LAB_07463c9c;
      if (lVar12 == 0) goto LAB_07463ca0;
      uVar6 = *(ulong *)(lVar12 + 0x18);
      if ((uVar6 & 0xffffffff) <= uVar17) goto LAB_07463c9c;
      *(undefined4 *)(lVar12 + 0x20 + uVar17 * 4) = *(undefined4 *)(lVar3 + 0x20 + uVar17 * 4);
      uVar13 = (int)uVar17 + *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44);
      if (((uint)uVar11 <= uVar13) || ((uint)uVar6 <= uVar13)) goto LAB_07463c9c;
      uVar17 = uVar17 + 1;
      *(undefined4 *)(lVar12 + (long)(int)uVar13 * 4 + 0x20) =
           *(undefined4 *)(lVar3 + (long)(int)uVar13 * 4 + 0x20);
      uVar6 = (ulong)*(int *)(param_1 + 0x44);
    } while ((long)uVar17 < (long)uVar6);
    iVar9 = *(int *)(param_1 + 0x40);
  }
  iVar16 = (int)uVar6;
  if (iVar16 < iVar9 * iVar16) {
    lVar3 = (long)iVar16 + 8;
    do {
      lVar12 = *plVar14;
      if (lVar12 == 0) goto LAB_07463ca0;
      uVar13 = (uint)uVar6;
      if (*(uint *)(lVar12 + 0x18) <= uVar13) {
LAB_07463c9c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar2 = *(uint *)(lVar12 + lVar3 * 4);
      if (*(int *)(DAT_0918a310 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar12 = *plVar15;
      if (lVar12 == 0) goto LAB_07463ca0;
      if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_07463c9c;
      uVar6 = (ulong)(uVar13 + 1);
      uVar13 = (uVar2 & 0x80808080) - ((uVar2 & 0x80808080) >> 7) & 0x1b1b1b1b ^
               (uVar2 & 0x7f7f7f7f) << 1;
      uVar8 = (uVar13 & 0x7f7f7f7f) << 1 ^
              (uVar2 & 0x40404040) * 2 - ((uVar2 & 0x40404040) >> 6) & 0x1b1b1b1b;
      uVar1 = (uVar13 & 0x40404040) * 2 - ((uVar13 & 0x40404040) >> 6) & 0x1b1b1b1b ^
              (uVar8 & 0x7f7f7f7f) << 1;
      uVar2 = uVar1 ^ uVar2;
      *(uint *)(lVar12 + lVar3 * 4) =
           (uVar2 >> 0x18 | uVar2 << 8) ^ ((uVar2 ^ uVar8) >> 0x10 | (uVar2 ^ uVar8) << 0x10) ^
           ((uVar2 ^ uVar13) >> 8 | (uVar2 ^ uVar13) << 0x18) ^ uVar13 ^ uVar8 ^ uVar1;
      lVar12 = lVar3 + -7;
      lVar3 = lVar3 + 1;
    } while (lVar12 < *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44));
  }
  return;
}


// rea decompile_all
// name: Mono.Security.X509.PKCS12.DeriveBytes$$Derive
// address: 0x73f8f3c
// body: available
// range: 0x73f8f3c-0x73f936b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f9364 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f9368 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Security_X509_PKCS12_DeriveBytes__Derive(long param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  if ((DAT_09520e35 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09188d80);
    DAT_09520e35 = 1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(DAT_09188d80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar8 = (long *)Mono_Security_Cryptography_PKCS1__CreateFromName(uVar17,0);
  if (plVar8 != (long *)0x0) {
    iVar7 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
    lVar9 = FUN_03f5c394(DAT_0917fc88,param_3);
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar13 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar13 == 0)) {
      lVar13 = FUN_03f5c394(DAT_0917fc88,0);
    }
    else {
      iVar11 = (int)lVar13;
      uVar14 = iVar11 + 0x3f;
      uVar12 = iVar11 + 0x7e;
      if (-1 < (int)uVar14) {
        uVar12 = uVar14;
      }
      lVar13 = FUN_03f5c394(DAT_0917fc88,uVar12 & 0xffffffc0);
      if (lVar13 == 0) goto LAB_073f9368;
      uVar14 = *(uint *)(lVar13 + 0x18);
      if (uVar14 != 0) {
        uVar12 = 0;
        do {
          lVar15 = *(long *)(param_1 + 0x28);
          if (lVar15 == 0) goto LAB_073f9368;
          uVar3 = *(uint *)(lVar15 + 0x18);
          iVar11 = 0;
          if (uVar3 != 0) {
            iVar11 = (int)uVar12 / (int)uVar3;
          }
          uVar5 = uVar12 - iVar11 * uVar3;
          if ((uVar3 <= uVar5) || (uVar14 <= uVar12)) goto LAB_073f9364;
          lVar16 = (long)(int)uVar12;
          uVar12 = uVar12 + 1;
          *(undefined1 *)(lVar13 + lVar16 + 0x20) = *(undefined1 *)(lVar15 + (int)uVar5 + 0x20);
          uVar14 = *(uint *)(lVar13 + 0x18);
        } while (uVar12 != uVar14);
      }
    }
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar15 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar15 == 0)) {
      lVar15 = FUN_03f5c394(DAT_0917fc88,0);
    }
    else {
      iVar11 = (int)lVar15;
      uVar14 = iVar11 + 0x3f;
      uVar12 = iVar11 + 0x7e;
      if (-1 < (int)uVar14) {
        uVar12 = uVar14;
      }
      lVar15 = FUN_03f5c394(DAT_0917fc88,uVar12 & 0xffffffc0);
      if (lVar15 == 0) goto LAB_073f9368;
      uVar14 = *(uint *)(lVar15 + 0x18);
      if (uVar14 != 0) {
        uVar12 = 0;
        do {
          lVar16 = *(long *)(param_1 + 0x20);
          if (lVar16 == 0) goto LAB_073f9368;
          uVar3 = *(uint *)(lVar16 + 0x18);
          iVar11 = 0;
          if (uVar3 != 0) {
            iVar11 = (int)uVar12 / (int)uVar3;
          }
          uVar5 = uVar12 - iVar11 * uVar3;
          if ((uVar3 <= uVar5) || (uVar14 <= uVar12)) {
LAB_073f9364:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar10 = (long)(int)uVar12;
          uVar12 = uVar12 + 1;
          *(undefined1 *)(lVar15 + lVar10 + 0x20) = *(undefined1 *)(lVar16 + (int)uVar5 + 0x20);
          uVar14 = *(uint *)(lVar15 + 0x18);
        } while (uVar12 != uVar14);
      }
    }
    if ((lVar13 != 0) && (lVar15 != 0)) {
      iVar7 = iVar7 >> 3;
      lVar16 = FUN_03f5c394(DAT_0917fc88,*(int *)(lVar15 + 0x18) + *(int *)(lVar13 + 0x18));
      System_Buffer__BlockCopy(lVar13,0,lVar16,0,*(undefined4 *)(lVar13 + 0x18),0);
      System_Buffer__BlockCopy
                (lVar15,0,lVar16,*(undefined4 *)(lVar13 + 0x18),*(undefined4 *)(lVar15 + 0x18),0);
      lVar13 = FUN_03f5c394(DAT_0917fc88,0x40);
      iVar11 = 0;
      if (iVar7 != 0) {
        iVar11 = (param_3 + iVar7 + -1) / iVar7;
      }
      if (0 < iVar11) {
        if (param_2 == 0) goto LAB_073f9368;
        iVar20 = 1;
        iVar6 = (iVar11 + -1) * iVar7;
        do {
          System_Security_Cryptography_HashAlgorithm__TransformBlock
                    (plVar8,param_2,0,*(undefined4 *)(param_2 + 0x18),param_2,0,0);
          if (lVar16 == 0) goto LAB_073f9368;
          System_Security_Cryptography_HashAlgorithm__TransformFinalBlock
                    (plVar8,lVar16,0,*(undefined4 *)(lVar16 + 0x18),0);
          lVar15 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
          lVar10 = (**(code **)(*plVar8 + 600))(plVar8,*(undefined8 *)(*plVar8 + 0x260));
          if (*(int *)(param_1 + 0x18) != 1) {
            iVar18 = 1;
            lVar10 = lVar15;
            do {
              if (lVar10 == 0) goto LAB_073f9368;
              lVar10 = System_Security_Cryptography_HashAlgorithm__ComputeHash
                                 (plVar8,lVar10,0,*(undefined4 *)(lVar10 + 0x18),0);
              iVar18 = iVar18 + 1;
              lVar15 = lVar10;
            } while (iVar18 != *(int *)(param_1 + 0x18));
          }
          if (lVar13 == 0) goto LAB_073f9368;
          uVar14 = *(uint *)(lVar13 + 0x18);
          if (uVar14 != 0) {
            uVar12 = 0;
            do {
              if (lVar15 == 0) goto LAB_073f9368;
              uVar3 = *(uint *)(lVar15 + 0x18);
              iVar18 = 0;
              if (uVar3 != 0) {
                iVar18 = (int)uVar12 / (int)uVar3;
              }
              uVar5 = uVar12 - iVar18 * uVar3;
              if ((uVar3 <= uVar5) || (uVar14 <= uVar12)) goto LAB_073f9364;
              lVar1 = (long)(int)uVar12;
              uVar12 = uVar12 + 1;
              *(undefined1 *)(lVar13 + lVar1 + 0x20) = *(undefined1 *)(lVar15 + (int)uVar5 + 0x20);
              uVar14 = *(uint *)(lVar13 + 0x18);
            } while (uVar12 != uVar14);
          }
          if (0x7e < *(int *)(lVar16 + 0x18) + 0x3fU) {
            iVar19 = 0;
            iVar18 = 0;
            do {
              lVar10 = Mono_Security_X509_PKCS12_DeriveBytes__Adjust(lVar10,lVar16,iVar19,lVar13);
              iVar4 = *(int *)(lVar16 + 0x18);
              iVar18 = iVar18 + 1;
              iVar19 = iVar19 + 0x40;
              iVar2 = iVar4 + 0x3f;
              if (-1 < iVar4) {
                iVar2 = iVar4;
              }
            } while (iVar18 != iVar2 >> 6);
          }
          if (iVar20 == iVar11) {
            if (lVar9 == 0) goto LAB_073f9368;
            iVar18 = *(int *)(lVar9 + 0x18) - iVar6;
            iVar19 = iVar6;
          }
          else {
            if (lVar15 == 0) goto LAB_073f9368;
            iVar18 = *(int *)(lVar15 + 0x18);
            iVar19 = (iVar20 + -1) * iVar7;
          }
          System_Buffer__BlockCopy(lVar15,0,lVar9,iVar19,iVar18,0);
          iVar20 = iVar20 + 1;
        } while (iVar20 <= iVar11);
      }
      return lVar9;
    }
  }
LAB_073f9368:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


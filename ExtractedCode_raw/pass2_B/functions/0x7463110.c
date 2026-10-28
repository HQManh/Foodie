// rea decompile_all
// name: System.Security.Cryptography.RijndaelManagedTransform$$.ctor
// address: 0x7463110
// body: available
// range: 0x7463110-0x746376f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7463684 to 0x75e4068 thunk_FUN_03f6c31c (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74636a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74636ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7463714 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x746376c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_RijndaelManagedTransform___ctor
               (long param_1,long param_2,int param_3,long param_4,int param_5,int param_6,
               undefined4 param_7,undefined4 param_8)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 *puVar24;
  
  if ((DAT_0952119e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_091801b8);
    DAT_0952119e = 1;
  }
  System_Object___ctor(param_1,0);
  uVar14 = DAT_091801b8;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar14 = thunk_FUN_03f9944c();
    puVar15 = &DAT_09221bb8;
LAB_074636ec:
    uVar16 = thunk_FUN_03fc39d4(puVar15);
    System_ArgumentNullException___ctor(uVar14,uVar16,0);
    uVar16 = thunk_FUN_03fc39d4(&DAT_091d8068);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar14,uVar16);
  }
  iVar21 = param_5 + 7;
  if (-1 < param_5) {
    iVar21 = param_5;
  }
  iVar3 = *(int *)(param_2 + 0x18);
  iVar5 = param_5 + 0x1f;
  if (-1 < param_5) {
    iVar5 = param_5;
  }
  *(int *)(param_1 + 0x1c) = param_5;
  *(int *)(param_1 + 0x20) = iVar21 >> 3;
  iVar21 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar21 = iVar3;
  }
  *(int *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_7;
  iVar3 = 2;
  if (0xdf < param_5) {
    iVar3 = 3;
  }
  iVar2 = 3;
  if (0xdf < param_5) {
    iVar2 = 4;
  }
  *(undefined4 *)(param_1 + 0x18) = param_8;
  *(int *)(param_1 + 0x44) = iVar5 >> 5;
  *(int *)(param_1 + 0x48) = iVar21 >> 2;
  lVar8 = FUN_03f5c394(uVar14);
  lVar9 = FUN_03f5c394(DAT_091801b8,*(undefined4 *)(param_1 + 0x44));
  lVar10 = FUN_03f5c394(DAT_091801b8,*(undefined4 *)(param_1 + 0x44));
  lVar11 = FUN_03f5c394(DAT_091801b8,*(undefined4 *)(param_1 + 0x44));
  lVar12 = FUN_03f5c394(DAT_091801b8,*(undefined4 *)(param_1 + 0x44));
  lVar13 = FUN_03f5c394(DAT_091801b8,*(undefined4 *)(param_1 + 0x44));
  uVar18 = *(uint *)(param_1 + 0x44);
  uVar19 = (ulong)uVar18;
  if (0 < (int)uVar18) {
    if (lVar8 == 0) {
LAB_074636ac:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = *(uint *)(lVar8 + 0x18);
    iVar21 = -3;
    if (param_5 < 0xe0) {
      iVar21 = -2;
    }
    iVar5 = -4;
    if (param_5 < 0xe0) {
      iVar5 = -3;
    }
    uVar22 = 0;
    do {
      if (uVar4 == uVar22) goto LAB_074636a8;
      uVar1 = uVar22 + 1;
      iVar6 = 0;
      iVar17 = (int)uVar19;
      if (iVar17 != 0) {
        iVar6 = (int)uVar1 / iVar17;
      }
      *(int *)(lVar8 + 0x20 + uVar22 * 4) = (int)uVar1 - iVar6 * iVar17;
      if (lVar9 == 0) goto LAB_074636ac;
      if (*(uint *)(lVar9 + 0x18) <= uVar22) goto LAB_074636a8;
      iVar6 = *(int *)(param_1 + 0x44);
      iVar20 = (int)uVar22;
      iVar17 = 0;
      if (iVar6 != 0) {
        iVar17 = (iVar3 + iVar20) / iVar6;
      }
      *(int *)(lVar9 + 0x20 + uVar22 * 4) = (iVar3 + iVar20) - iVar17 * iVar6;
      if (lVar10 == 0) goto LAB_074636ac;
      if (*(uint *)(lVar10 + 0x18) <= uVar22) goto LAB_074636a8;
      iVar6 = *(int *)(param_1 + 0x44);
      iVar17 = 0;
      if (iVar6 != 0) {
        iVar17 = (iVar2 + iVar20) / iVar6;
      }
      *(int *)(lVar10 + 0x20 + uVar22 * 4) = (iVar2 + iVar20) - iVar17 * iVar6;
      if (lVar11 == 0) goto LAB_074636ac;
      if (*(uint *)(lVar11 + 0x18) <= uVar22) goto LAB_074636a8;
      iVar6 = *(int *)(param_1 + 0x44);
      iVar7 = iVar20 + iVar6 + -1;
      iVar17 = 0;
      if (iVar6 != 0) {
        iVar17 = iVar7 / iVar6;
      }
      *(int *)(lVar11 + 0x20 + uVar22 * 4) = iVar7 - iVar17 * iVar6;
      if (lVar12 == 0) goto LAB_074636ac;
      if (*(uint *)(lVar12 + 0x18) <= uVar22) goto LAB_074636a8;
      iVar17 = *(int *)(param_1 + 0x44);
      iVar6 = iVar21 + iVar20 + iVar17;
      iVar7 = 0;
      if (iVar17 != 0) {
        iVar7 = iVar6 / iVar17;
      }
      *(int *)(lVar12 + 0x20 + uVar22 * 4) = iVar6 - iVar7 * iVar17;
      if (lVar13 == 0) goto LAB_074636ac;
      if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_074636a8;
      iVar17 = *(int *)(param_1 + 0x44);
      iVar6 = iVar5 + iVar20 + iVar17;
      iVar20 = 0;
      if (iVar17 != 0) {
        iVar20 = iVar6 / iVar17;
      }
      *(int *)(lVar13 + 0x20 + uVar22 * 4) = iVar6 - iVar20 * iVar17;
      uVar18 = *(uint *)(param_1 + 0x44);
      uVar19 = (ulong)(int)uVar18;
      uVar22 = uVar1;
    } while ((long)uVar1 < (long)uVar19);
  }
  uVar14 = FUN_03f5c394(DAT_091801b8,uVar18 * 3);
  puVar24 = (undefined8 *)(param_1 + 0x50);
  *puVar24 = uVar14;
  thunk_FUN_03f5d7b8(puVar24,uVar14);
  System_Array__Copy(lVar8,0,*puVar24,0,*(undefined4 *)(param_1 + 0x44),0);
  System_Array__Copy(lVar9,0,*puVar24,*(undefined4 *)(param_1 + 0x44),
                     *(undefined4 *)(param_1 + 0x44),0);
  System_Array__Copy(lVar10,0,*puVar24,*(int *)(param_1 + 0x44) << 1,*(int *)(param_1 + 0x44),0);
  uVar14 = FUN_03f5c394(DAT_091801b8,*(int *)(param_1 + 0x44) * 3);
  puVar24 = (undefined8 *)(param_1 + 0x58);
  *puVar24 = uVar14;
  thunk_FUN_03f5d7b8(puVar24,uVar14);
  System_Array__Copy(lVar11,0,*puVar24,0,*(undefined4 *)(param_1 + 0x44),0);
  System_Array__Copy(lVar12,0,*puVar24,*(undefined4 *)(param_1 + 0x44),
                     *(undefined4 *)(param_1 + 0x44),0);
  System_Array__Copy(lVar13,0,*puVar24,*(int *)(param_1 + 0x44) << 1,*(int *)(param_1 + 0x44),0);
  if (*(int *)(param_1 + 0x10) - 3U < 0xfffffffe) {
    if (*(int *)(param_1 + 0x10) != 4) {
      puVar15 = &DAT_0920d638;
      goto LAB_0746372c;
    }
    iVar21 = param_6 + 7;
    if (-1 < param_6) {
      iVar21 = param_6;
    }
    iVar21 = iVar21 >> 3;
  }
  else {
    iVar21 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x24) = iVar21;
  *(int *)(param_1 + 0x28) = iVar21;
  if ((param_3 == 4) || (param_3 == 1)) {
    if (param_4 == 0) {
      thunk_FUN_03fc39d4(&DAT_09181550);
      uVar14 = thunk_FUN_03f9944c();
      puVar15 = &DAT_09221bb0;
      goto LAB_074636ec;
    }
    iVar5 = *(int *)(param_4 + 0x18);
    iVar21 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar21 = iVar5;
    }
    if (*(int *)(param_1 + 0x44) != iVar21 >> 2) {
      puVar15 = &DAT_0920d650;
LAB_0746372c:
      uVar14 = thunk_FUN_03fc39d4(puVar15);
      uVar14 = System_Environment__GetResourceString(uVar14,0);
      thunk_FUN_03fc39d4(&DAT_09182f98);
      uVar16 = thunk_FUN_03f9944c();
      System_Security_Cryptography_CryptographicException___ctor(uVar16,uVar14);
      uVar14 = thunk_FUN_03fc39d4(&DAT_091d8068);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar16,uVar14);
    }
    lVar8 = FUN_03f5c394(DAT_091801b8);
    plVar23 = (long *)(param_1 + 0x60);
    *plVar23 = lVar8;
    thunk_FUN_03f5d7b8(plVar23,lVar8);
    if (0 < *(int *)(param_1 + 0x44)) {
      uVar18 = *(uint *)(param_4 + 0x18);
      uVar19 = 0;
      lVar8 = 0x20;
      do {
        iVar21 = (int)lVar8;
        if ((((uVar18 <= iVar21 - 0x20U) || (uVar18 <= iVar21 - 0x1fU)) ||
            (uVar18 <= iVar21 - 0x1eU)) || (uVar18 <= iVar21 - 0x1dU)) {
LAB_074636a8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar9 = *plVar23;
        if (lVar9 == 0) goto LAB_074636ac;
        if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_074636a8;
        uVar19 = uVar19 + 1;
        *(uint *)(lVar9 + lVar8) =
             CONCAT13(*(undefined1 *)(param_4 + (iVar21 + -0x1d) + 0x20),
                      CONCAT12(*(undefined1 *)(param_4 + (iVar21 + -0x1e) + 0x20),
                               CONCAT11(*(undefined1 *)(param_4 + (iVar21 + -0x1f) + 0x20),
                                        *(undefined1 *)(param_4 + (int)(iVar21 - 0x20U) + 0x20))));
        lVar8 = lVar8 + 4;
      } while ((long)uVar19 < (long)*(int *)(param_1 + 0x44));
    }
  }
  System_Security_Cryptography_RijndaelManagedTransform__GenerateKeyExpansion(param_1,param_2);
  iVar21 = *(int *)(param_1 + 0x10);
  if (iVar21 == 1) {
    uVar14 = FUN_03f5c394(DAT_091801b8,*(undefined4 *)(param_1 + 0x44));
    *(undefined8 *)(param_1 + 0x68) = uVar14;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x68),uVar14);
    thunk_FUN_03f6c31c(*(undefined8 *)(param_1 + 0x60),0,*(undefined8 *)(param_1 + 0x68),0,
                       *(undefined4 *)(param_1 + 0x20),0);
    iVar21 = *(int *)(param_1 + 0x10);
  }
  if (iVar21 != 4) {
    return;
  }
  uVar14 = FUN_03f5c394(DAT_0917fc88,*(int *)(param_1 + 0x44) << 2);
  puVar24 = (undefined8 *)(param_1 + 0x78);
  *puVar24 = uVar14;
  thunk_FUN_03f5d7b8(puVar24,uVar14);
  thunk_FUN_03f6c31c(*(undefined8 *)(param_1 + 0x60),0,*puVar24,0,*(int *)(param_1 + 0x44) << 2,0);
  return;
}


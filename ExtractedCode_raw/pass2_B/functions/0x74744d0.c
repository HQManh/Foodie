// rea decompile_all
// name: System.Security.Cryptography.RC2Transform$$.ctor
// address: 0x74744d0
// body: available
// range: 0x74744d0-0x7474a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74748e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74748e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74749f8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7474a04 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_RC2Transform___ctor
               (long param_1,long *param_2,uint param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  undefined4 local_54;
  undefined4 local_48;
  int local_44;
  
  if ((DAT_09521209 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091899b0);
    FUN_03f5c2a4(&DAT_091807a8);
    DAT_09521209 = 1;
  }
  Mono_Security_Cryptography_SymmetricTransform___ctor(param_1,param_2,param_3 & 1,param_5,0);
  if (param_2 == (long *)0x0) goto LAB_074748e4;
  iVar6 = (**(code **)(*param_2 + 0x2d8))(param_2,*(undefined8 *)(*param_2 + 0x2e0));
  if (param_4 == 0) {
    iVar7 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
    lVar9 = Mono_Security_Cryptography_KeyBuilder__Key(iVar7 >> 3,0);
    if (lVar9 == 0) goto LAB_074748e4;
  }
  else {
    lVar8 = System_Array__Clone(param_4,0);
    uVar10 = DAT_0917fc88;
    if (lVar8 == 0) goto LAB_074748e4;
    lVar9 = thunk_FUN_03f99350(lVar8,DAT_0917fc88);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar8,uVar10);
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar6 = System_Math__Min(iVar6,*(int *)(lVar9 + 0x18) << 3,0);
  }
  uVar18 = *(ulong *)(lVar9 + 0x18);
  uVar10 = (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(*param_2 + 0x210));
  iVar7 = (int)uVar18;
  uVar11 = System_Security_Cryptography_KeySizes__IsLegalKeySize(uVar10,iVar7 << 3,0);
  if ((uVar11 & 1) == 0) {
    uVar10 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar10 = FUN_03f5c394(uVar10,3);
    local_44 = iVar7;
    uVar12 = FUN_03f5c42c(DAT_09535420,&local_44);
    FUN_039b1d98(uVar10);
    FUN_039b0da0(uVar10,uVar12);
    FUN_039af17c(uVar10,0,uVar12);
    local_48 = 5;
    uVar12 = FUN_03f5c42c(DAT_09535420,&local_48);
    FUN_039b0da0(uVar10,uVar12);
    FUN_039af17c(uVar10,1,uVar12);
    local_54 = 0x10;
    uVar12 = FUN_03f5c42c(DAT_09535420,&local_54);
    FUN_039b0da0(uVar10,uVar12);
    FUN_039af17c(uVar10,2,uVar12);
    uVar12 = thunk_FUN_03fc39d4(&DAT_092065f8);
    uVar10 = Locale__GetText(uVar12,uVar10,0);
    thunk_FUN_03fc39d4(&DAT_09182f98);
    uVar12 = thunk_FUN_03f9944c();
    System_Security_Cryptography_CryptographicException___ctor(uVar12,uVar10,0);
    uVar10 = thunk_FUN_03fc39d4(&DAT_091d6d80);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar12,uVar10);
  }
  lVar8 = FUN_03f5c394(DAT_0917fc88,0x80);
  if (iVar7 < 1) {
LAB_07474694:
    lVar9 = (long)iVar7;
    lVar17 = 0;
    do {
      if (*(int *)(DAT_091899b0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar8 == 0) goto LAB_074748e4;
      uVar14 = (uint)lVar9 - 1;
      if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_074748e0;
      lVar15 = **(long **)(DAT_091899b0 + 0xb8);
      if (lVar15 == 0) goto LAB_074748e4;
      bVar2 = *(char *)(lVar8 + 0x20 + (lVar17 >> 0x20)) +
              *(char *)(lVar8 + 0x20 + (long)(int)uVar14);
      if ((*(uint *)(lVar15 + 0x18) <= (uint)bVar2) || (*(uint *)(lVar8 + 0x18) <= (uint)lVar9))
      goto LAB_074748e0;
      lVar17 = lVar17 + 0x100000000;
      *(undefined1 *)(lVar8 + 0x20 + lVar9) = *(undefined1 *)(lVar15 + (ulong)bVar2 + 0x20);
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x80);
  }
  else {
    uVar11 = 0;
    do {
      if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_074748e0;
      if (lVar8 == 0) goto LAB_074748e4;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_074748e0;
      *(undefined1 *)(lVar8 + 0x20 + uVar11) = *(undefined1 *)(lVar9 + 0x20 + uVar11);
      uVar11 = uVar11 + 1;
    } while ((uVar18 & 0xffffffff) != uVar11);
    if (iVar7 < 0x80) goto LAB_07474694;
  }
  iVar7 = (int)(iVar6 + 7U) >> 3;
  if (*(int *)(DAT_091899b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((uint)(0x80 - (long)iVar7) < *(uint *)(lVar8 + 0x18)) {
    lVar9 = **(long **)(DAT_091899b0 + 0xb8);
    if (lVar9 == 0) {
LAB_074748e4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar17 = lVar8 + (0x80 - (long)iVar7);
    iVar6 = 2 << (ulong)(iVar6 + (~(iVar6 + 7U) | 7) + 8 & 0x1f);
    iVar4 = 0;
    if (iVar6 != 0) {
      iVar4 = 0xff / iVar6;
    }
    uVar11 = (ulong)(0xff - iVar4 * iVar6) & (ulong)*(byte *)(lVar17 + 0x20);
    if ((uint)uVar11 < *(uint *)(lVar9 + 0x18)) {
      *(undefined1 *)(lVar17 + 0x20) = *(undefined1 *)(lVar9 + uVar11 + 0x20);
      if (iVar7 < 0x80) {
        lVar15 = 0;
        lVar9 = lVar8 + (ulong)(0x7f - iVar7);
        lVar17 = (ulong)(0x7f - iVar7) + 1;
        do {
          if (*(int *)(DAT_091899b0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if ((*(uint *)(lVar8 + 0x18) <= (uint)((0x80 - iVar7) + (int)lVar15)) ||
             (uVar14 = (int)lVar15 + 0x7f, *(uint *)(lVar8 + 0x18) <= uVar14)) goto LAB_074748e0;
          lVar13 = **(long **)(DAT_091899b0 + 0xb8);
          if (lVar13 == 0) goto LAB_074748e4;
          bVar2 = *(byte *)(lVar8 + (int)uVar14 + 0x20) ^ *(byte *)(lVar9 + lVar15 + 0x21);
          if (*(uint *)(lVar13 + 0x18) <= (uint)bVar2) goto LAB_074748e0;
          lVar3 = lVar9 + lVar15;
          lVar5 = lVar17 + -1;
          lVar15 = lVar15 + -1;
          *(undefined1 *)(lVar3 + 0x20) = *(undefined1 *)(lVar13 + (ulong)bVar2 + 0x20);
          bVar1 = 0 < lVar17;
          lVar17 = lVar5;
        } while (lVar5 != 0 && bVar1);
      }
      lVar9 = FUN_03f5c394(DAT_091807a8,0x40);
      plVar16 = (long *)(param_1 + 0x60);
      *plVar16 = lVar9;
      thunk_FUN_03f5d7b8(plVar16,lVar9);
      lVar9 = *plVar16;
      uVar14 = *(uint *)(lVar8 + 0x18);
      uVar11 = 0;
      uVar18 = 0;
      while ((uVar18 < uVar14 && (uVar18 + 1 < (ulong)uVar14))) {
        if (lVar9 == 0) goto LAB_074748e4;
        if (*(uint *)(lVar9 + 0x18) <= uVar11) break;
        *(ushort *)(lVar9 + 0x20 + uVar11 * 2) =
             CONCAT11(*(undefined1 *)(lVar8 + uVar18 + 0x21),*(undefined1 *)(lVar8 + uVar18 + 0x20))
        ;
        uVar11 = uVar11 + 1;
        uVar18 = uVar18 + 2;
        if (uVar11 == 0x40) {
          return;
        }
      }
    }
  }
LAB_074748e0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}


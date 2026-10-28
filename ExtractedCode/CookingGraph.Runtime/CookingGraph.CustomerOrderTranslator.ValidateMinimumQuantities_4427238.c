// rea decompile_all
// name: CookingGraph.CustomerOrderTranslator$$ValidateMinimumQuantities
// address: 0x4427238
// body: available
// range: 0x4427238-0x442723b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04422f34) */
/* WARNING: Removing unreachable block (ram,0x04422bf0) */

long CookingGraph_CustomerOrderTranslator__ValidateMinimumQuantities(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int aiStack_84 [3];
  long **pplStack_78;
  int iStack_6c;
  long *plStack_68;
  
  if ((DAT_09517f54 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183100);
    FUN_03f5c2a4(&DAT_0919cc78);
    FUN_03f5c2a4(&DAT_0919cc60);
    FUN_03f5c2a4(&DAT_0919cc70);
    FUN_03f5c2a4(&DAT_0919cc68);
    FUN_03f5c2a4(&DAT_091761c8);
    FUN_03f5c2a4(&DAT_091761c0);
    FUN_03f5c2a4(&DAT_091cb4a0);
    FUN_03f5c2a4(&DAT_091789a8);
    FUN_03f5c2a4(&DAT_091a8018);
    FUN_03f5c2a4(&DAT_09179d90);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a4f8);
    FUN_03f5c2a4(&DAT_0917aba8);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ac228);
    FUN_03f5c2a4(&DAT_091acfd0);
    FUN_03f5c2a4(&DAT_091ac220);
    FUN_03f5c2a4(&DAT_091ac200);
    FUN_03f5c2a4(&DAT_091ac610);
    FUN_03f5c2a4(&DAT_091abc08);
    FUN_03f5c2a4(&DAT_091ac208);
    FUN_03f5c2a4(&DAT_091abc10);
    FUN_03f5c2a4(&DAT_091ac618);
    FUN_03f5c2a4(&DAT_0917bfd0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e8410);
    FUN_03f5c2a4(&DAT_0918f998);
    FUN_03f5c2a4(&DAT_09203290);
    FUN_03f5c2a4(&DAT_09203298);
    FUN_03f5c2a4(&DAT_091ffac0);
    FUN_03f5c2a4(&DAT_091ffab0);
    DAT_09517f54 = 1;
  }
  plStack_68 = (long *)0x0;
  iStack_6c = 0;
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar12 = thunk_FUN_03f9944c();
    puVar18 = &DAT_0921a200;
  }
  else {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = UnityEngine_Object__op_Equality(param_2,0,0);
    if ((uVar7 & 1) == 0) {
      lVar8 = thunk_FUN_03f9944c(DAT_0917bfd0);
      FUN_057e0400(lVar8,DAT_091ac220);
      lVar9 = *(long *)(param_1 + 0x10);
      if (lVar9 == 0) {
LAB_04422f0c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar20 = 0;
LAB_04422234:
      if (*(int *)(lVar9 + 0x18) <= iVar20) {
        return lVar8;
      }
      lVar9 = FUN_057e0998(lVar9,iVar20,DAT_091ac208);
      if ((lVar9 != 0) && (lVar10 = *(long *)(lVar9 + 0x20), lVar10 != 0)) {
        iVar1 = iVar20 + 1;
        iVar21 = 0;
LAB_04422270:
        if (*(int *)(lVar10 + 0x18) <= iVar21) goto LAB_04422efc;
        lVar10 = FUN_057e0998(lVar10,iVar21,DAT_091ac618);
        if ((((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x10), lVar10 != 0)) &&
            (*(int *)(lVar10 + 0x10) == 1)) && (iVar2 = *(int *)(lVar10 + 0x14), -1 < iVar2)) {
          if (((param_2 == 0) || (*(long *)(param_2 + 0x30) == 0)) ||
             (lVar11 = *(long *)(*(long *)(param_2 + 0x30) + 0x18), lVar11 == 0)) goto LAB_04422f0c;
          if (*(int *)(lVar11 + 0x18) <= iVar2) goto LAB_04422bf4;
          uVar12 = FUN_057e0998(lVar11,iVar2,DAT_091abc10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar12,0,0);
          if ((uVar7 & 1) == 0) {
            lVar11 = thunk_FUN_03f9944c(DAT_091761c0);
            FUN_06fd76bc(lVar11,DAT_0919cc60);
            uVar13 = thunk_FUN_03f9944c(DAT_09179d90);
            FUN_053eb530(uVar13,DAT_091a8018);
            CookingGraph_CustomerOrderTranslator__CollectRequiredGroups
                      (uVar12,param_2,0,lVar11,uVar13);
            lVar14 = thunk_FUN_03f9944c(DAT_091761c8);
            FUN_06fc96ac(lVar14,DAT_0919cc70);
            CookingGraph_CustomerOrderTranslator__CollectAuthoredGroups
                      (lVar10,param_2,lVar14,lVar11,0,lVar8,iVar20,iVar21);
            if (lVar11 != 0) {
              uVar12 = FUN_06fd811c(lVar11,DAT_0919cc68);
              if (*(int *)(DAT_0918f998 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f998);
              }
              puVar18 = *(undefined8 **)(DAT_0918f998 + 0xb8);
              lVar10 = puVar18[4];
              if (lVar10 == 0) {
                if (*(int *)(DAT_0918f998 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_0918f998);
                  puVar18 = *(undefined8 **)(DAT_0918f998 + 0xb8);
                }
                uVar13 = *puVar18;
                lVar10 = thunk_FUN_03f9944c(DAT_091789a8);
                FUN_05322d94(lVar10,uVar13,DAT_091e8410,0);
                plVar15 = (long *)(*(long *)(DAT_0918f998 + 0xb8) + 0x20);
                *plVar15 = lVar10;
                thunk_FUN_03f5d7b8(plVar15,lVar10);
              }
              plVar15 = (long *)FUN_04b0cafc(uVar12,lVar10,DAT_091cb4a0);
              if (plVar15 != (long *)0x0) {
                lVar10 = *plVar15;
                uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar7 != 0) {
                  piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == DAT_0917a4f8) {
                      puVar18 = (undefined8 *)(lVar10 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_044224e8;
                    }
                    uVar7 = uVar7 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar7 != 0);
                }
                puVar18 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917a4f8,0);
LAB_044224e8:
                plStack_68 = (long *)(*(code *)*puVar18)(plVar15,puVar18[1]);
                pplStack_78 = &plStack_68;
                aiStack_84[1] = 0;
                aiStack_84[2] = 0;
                if (plStack_68 == (long *)0x0) {
LAB_04422b68:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                do {
                  plVar15 = plStack_68;
                  lVar10 = *plStack_68;
                  uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar7 != 0) {
                    piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == DAT_09185b10) {
                        puVar18 = (undefined8 *)(lVar10 + (long)*piVar19 * 0x10 + 0x138);
                        goto LAB_04422560;
                      }
                      uVar7 = uVar7 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar18 = (undefined8 *)FUN_03f95da8(plStack_68,DAT_09185b10,0);
LAB_04422560:
                  uVar7 = (*(code *)*puVar18)(plVar15,puVar18[1]);
                  plVar15 = plStack_68;
                  if ((uVar7 & 1) == 0) goto LAB_04422b70;
                  if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar10 = *plStack_68;
                  uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar7 != 0) {
                    piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == DAT_0917aba8) {
                        puVar18 = (undefined8 *)(lVar10 + (long)*piVar19 * 0x10 + 0x138);
                        goto LAB_044225cc;
                      }
                      uVar7 = uVar7 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar18 = (undefined8 *)FUN_03f95da8(plStack_68,DAT_0917aba8,0);
LAB_044225cc:
                  lVar10 = (*(code *)*puVar18)(plVar15,puVar18[1]);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar7 = FUN_06fcbf70(lVar14,lVar10,&iStack_6c,DAT_0919cc78);
                  iVar2 = iStack_6c;
                  if ((uVar7 & 1) == 0) {
                    iVar2 = 0;
                  }
                  if (*(long *)(param_2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar11 = *(long *)(*(long *)(param_2 + 0x30) + 0x20);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar6 = FUN_057e1a08(lVar11,lVar10,DAT_091acfd0);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (iVar2 < *(int *)(lVar10 + 0x38)) {
                    lVar11 = thunk_FUN_03f9944c(DAT_09183100);
                    *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
                    System_Object___ctor(lVar11,0);
                    *(undefined8 *)(lVar11 + 0x10) = DAT_09203298;
                    thunk_FUN_03f5d7b8();
                    *(int *)(lVar11 + 0x18) = iVar20;
                    *(int *)(lVar11 + 0x1c) = iVar21;
                    *(undefined4 *)(lVar11 + 0x20) = uVar6;
                    uVar3 = *(undefined4 *)(lVar10 + 0x38);
                    *(int *)(lVar11 + 0x2c) = iVar2;
                    uVar12 = DAT_09180318;
                    *(undefined4 *)(lVar11 + 0x24) = uVar3;
                    plVar15 = (long *)FUN_03f5c394(uVar12,5);
                    aiStack_84[0] = iVar1;
                    lVar16 = FUN_03f5c42c(DAT_09535420,aiStack_84);
                    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    if ((lVar16 != 0) &&
                       (lVar17 = thunk_FUN_03f99350(lVar16,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar17 == 0)) {
                      uVar12 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar12,0);
                    }
                    if ((int)plVar15[3] == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar15[4] = lVar16;
                    thunk_FUN_03f5d7b8(plVar15 + 4,lVar16);
                    iStack_88 = iVar21 + 1;
                    lVar16 = FUN_03f5c42c(DAT_09535420,&iStack_88);
                    if ((lVar16 != 0) &&
                       (lVar17 = thunk_FUN_03f99350(lVar16,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar17 == 0)) {
                      uVar12 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar12,0);
                    }
                    if ((*(uint *)(plVar15 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar15[5] = lVar16;
                    thunk_FUN_03f5d7b8(plVar15 + 5,lVar16);
                    lVar16 = *(long *)(lVar10 + 0x18);
                    if ((lVar16 != 0) &&
                       (lVar17 = thunk_FUN_03f99350(lVar16,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar17 == 0)) {
                      uVar12 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar12,0);
                    }
                    if (*(uint *)(plVar15 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar15[6] = lVar16;
                    thunk_FUN_03f5d7b8(plVar15 + 6,lVar16);
                    iStack_8c = *(int *)(lVar10 + 0x38);
                    lVar16 = FUN_03f5c42c(DAT_09535420,&iStack_8c);
                    if ((lVar16 != 0) &&
                       (lVar17 = thunk_FUN_03f99350(lVar16,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar17 == 0)) {
                      uVar12 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar12,0);
                    }
                    if ((*(uint *)(plVar15 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar15[7] = lVar16;
                    thunk_FUN_03f5d7b8(plVar15 + 7,lVar16);
                    iStack_90 = iVar2;
                    lVar16 = FUN_03f5c42c(DAT_09535420,&iStack_90);
                    if ((lVar16 != 0) &&
                       (lVar17 = thunk_FUN_03f99350(lVar16,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar17 == 0)) {
                      uVar12 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar12,0);
                    }
                    if (*(uint *)(plVar15 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar15[8] = lVar16;
                    thunk_FUN_03f5d7b8(plVar15 + 8,lVar16);
                    uVar12 = System_String__Format(DAT_091ffac0,plVar15,0);
                    *(undefined8 *)(lVar11 + 0x30) = uVar12;
                    thunk_FUN_03f5d7b8();
                    lVar16 = DAT_091ac228;
                    if (lVar8 == 0) {
LAB_04422c30:
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar17 = *(long *)(lVar8 + 0x10);
                    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                    if (lVar17 == 0) goto LAB_04422c30;
                    uVar5 = *(uint *)(lVar8 + 0x18);
                    if (uVar5 < *(uint *)(lVar17 + 0x18)) {
                      *(uint *)(lVar8 + 0x18) = uVar5 + 1;
                      plVar15 = (long *)(lVar17 + (long)(int)uVar5 * 8 + 0x20);
                      *plVar15 = lVar11;
                      thunk_FUN_03f5d7b8(plVar15,lVar11);
                    }
                    else {
                      FUN_057e0c68(lVar8,lVar11,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  lVar11 = *(long *)(lVar10 + 0x40);
                  if ((((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) &&
                      (iVar4 = *(int *)(lVar11 + 0x14), -1 < iVar4)) && (iVar4 < iVar2)) {
                    lVar11 = thunk_FUN_03f9944c(DAT_09183100);
                    *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
                    System_Object___ctor(lVar11,0);
                    *(undefined8 *)(lVar11 + 0x10) = DAT_09203290;
                    thunk_FUN_03f5d7b8();
                    *(int *)(lVar11 + 0x18) = iVar20;
                    *(int *)(lVar11 + 0x1c) = iVar21;
                    *(undefined4 *)(lVar11 + 0x20) = uVar6;
                    *(int *)(lVar11 + 0x28) = iVar4;
                    *(int *)(lVar11 + 0x2c) = iVar2;
                    plVar15 = (long *)FUN_03f5c394(DAT_09180318,5);
                    aiStack_84[0] = iVar1;
                    lVar16 = FUN_03f5c42c(DAT_09535420,aiStack_84);
                    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    if ((lVar16 != 0) &&
                       (lVar17 = thunk_FUN_03f99350(lVar16,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar17 == 0)) {
                      uVar12 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar12,0);
                    }
                    if ((int)plVar15[3] == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar15[4] = lVar16;
                    thunk_FUN_03f5d7b8(plVar15 + 4,lVar16);
                    iStack_88 = iVar21 + 1;
                    lVar16 = FUN_03f5c42c(DAT_09535420,&iStack_88);
                    if ((lVar16 != 0) &&
                       (lVar17 = thunk_FUN_03f99350(lVar16,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar17 == 0)) {
                      uVar12 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar12,0);
                    }
                    if ((*(uint *)(plVar15 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar15[5] = lVar16;
                    thunk_FUN_03f5d7b8(plVar15 + 5,lVar16);
                    lVar10 = *(long *)(lVar10 + 0x18);
                    if ((lVar10 != 0) &&
                       (lVar16 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar16 == 0)) {
                      uVar12 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar12,0);
                    }
                    if (*(uint *)(plVar15 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar15[6] = lVar10;
                    thunk_FUN_03f5d7b8(plVar15 + 6,lVar10);
                    iStack_8c = iVar4;
                    lVar10 = FUN_03f5c42c(DAT_09535420,&iStack_8c);
                    if ((lVar10 != 0) &&
                       (lVar16 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar16 == 0)) {
                      uVar12 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar12,0);
                    }
                    if ((*(uint *)(plVar15 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar15[7] = lVar10;
                    thunk_FUN_03f5d7b8(plVar15 + 7,lVar10);
                    iStack_90 = iVar2;
                    lVar10 = FUN_03f5c42c(DAT_09535420,&iStack_90);
                    if ((lVar10 != 0) &&
                       (lVar16 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar16 == 0)) {
                      uVar12 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar12,0);
                    }
                    if (*(uint *)(plVar15 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar15[8] = lVar10;
                    thunk_FUN_03f5d7b8(plVar15 + 8,lVar10);
                    uVar12 = System_String__Format(DAT_091ffab0,plVar15,0);
                    *(undefined8 *)(lVar11 + 0x30) = uVar12;
                    thunk_FUN_03f5d7b8();
                    lVar10 = DAT_091ac228;
                    if (lVar8 == 0) {
LAB_04422cb4:
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar16 = *(long *)(lVar8 + 0x10);
                    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                    if (lVar16 == 0) goto LAB_04422cb4;
                    uVar5 = *(uint *)(lVar8 + 0x18);
                    if (uVar5 < *(uint *)(lVar16 + 0x18)) {
                      *(uint *)(lVar8 + 0x18) = uVar5 + 1;
                      plVar15 = (long *)(lVar16 + (long)(int)uVar5 * 8 + 0x20);
                      *plVar15 = lVar11;
                      thunk_FUN_03f5d7b8(plVar15,lVar11);
                    }
                    else {
                      FUN_057e0c68(lVar8,lVar11,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  if (plStack_68 == (long *)0x0) goto LAB_04422b68;
                } while( true );
              }
            }
            goto LAB_04422f0c;
          }
        }
        goto LAB_04422bf4;
      }
      goto LAB_04422f0c;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar12 = thunk_FUN_03f9944c();
    puVar18 = &DAT_0921c7b8;
  }
  uVar13 = thunk_FUN_03fc39d4(puVar18);
  System_ArgumentNullException___ctor(uVar12,uVar13,0);
  uVar13 = thunk_FUN_03fc39d4(&DAT_091c7018);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar12,uVar13);
LAB_04422efc:
  lVar9 = *(long *)(param_1 + 0x10);
  iVar20 = iVar1;
  if (lVar9 == 0) goto LAB_04422f0c;
  goto LAB_04422234;
LAB_04422b70:
  if (plStack_68 != (long *)0x0) {
    lVar10 = *plStack_68;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == DAT_09185a58) {
          puVar18 = (undefined8 *)(lVar10 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_04422bd8;
        }
        uVar7 = uVar7 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined8 *)FUN_03f95da8(plStack_68,DAT_09185a58,0);
LAB_04422bd8:
    (*(code *)*puVar18)(plVar15,puVar18[1]);
  }
LAB_04422bf4:
  lVar10 = *(long *)(lVar9 + 0x20);
  iVar21 = iVar21 + 1;
  if (lVar10 == 0) goto LAB_04422f0c;
  goto LAB_04422270;
}


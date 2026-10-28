// rea decompile_all
// name: FUN_03fcfe38
// address: 0x3fcfe38
// body: available
// range: 0x3fcfe38-0x3fd0383 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd0360 to 0x3fd2e2c FUN_03fd2e2c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fcfe38(void)

{
  bool bVar1;
  ulong *puVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  
  uVar5 = DAT_095156d0;
  DAT_09748718 = DAT_095156b0;
  DAT_09748720 = DAT_095156c8;
  FUN_03fd1c40();
  FUN_03fd254c(&DAT_095156a0);
  if (uVar5 == 0xffffffffffffffff) {
    bVar1 = false;
    DAT_09535c38 = 0;
  }
  else {
    lVar6 = 0;
    lVar11 = 1L << (uVar5 & 0x3f);
    do {
      for (puVar7 = *(ulong **)(DAT_097486d8 + lVar6 * 8); puVar7 != (ulong *)0x0;
          puVar7 = (ulong *)puVar7[1]) {
        uVar8 = *puVar7;
        iVar3 = FUN_03fd1084(~uVar8);
        if (iVar3 == 0) {
          (*(code *)puVar7[5])(~uVar8);
          if (DAT_09535c60 <= DAT_09535c70) {
            do {
              DAT_09535c70 = FUN_03fd2684(DAT_09535c70,DAT_09535c60,
                                          DAT_09535c60 + DAT_09748708 * 0x10);
            } while (DAT_09535c60 <= DAT_09535c70);
          }
          if (DAT_09748728 != 0) {
            FUN_03fd158c(~uVar8);
            do {
              iVar3 = FUN_03fcf594(0);
            } while (iVar3 == 0);
          }
          iVar3 = FUN_03fd1084(~uVar8);
          if (iVar3 != 0) {
            (*(code *)PTR_thunk_FUN_03fcb048_09515630)
                      ("GC Warning: Finalization cycle involving %p\n",~uVar8);
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar11);
    DAT_09535c38 = 0;
    if (uVar5 == 0xffffffffffffffff) {
      bVar1 = false;
    }
    else {
      lVar6 = 0;
      bVar1 = false;
      do {
        puVar7 = *(ulong **)(DAT_097486d8 + lVar6 * 8);
        if (puVar7 != (ulong *)0x0) {
          puVar9 = (ulong *)0x0;
          do {
            uVar5 = *puVar7;
            iVar3 = FUN_03fd1084(~uVar5);
            if (iVar3 == 0) {
              if (DAT_095156d8 == 0) {
                FUN_03fd158c(~uVar5);
              }
              puVar10 = (ulong *)puVar7[1];
              if (puVar9 == (ulong *)0x0) {
                *(ulong **)(DAT_097486d8 + lVar6 * 8) = puVar10;
                bVar1 = true;
              }
              else {
                puVar9[1] = (ulong)puVar10;
                if (DAT_097480f0 != 0) {
                  FUN_0404c050(1L << ((ulong)puVar9 >> 0xc & 0x3f),
                               &DAT_0957c0c8 + ((ulong)puVar9 >> 0x12 & 0x7fff) * 8);
                }
              }
              DAT_09748610 = DAT_09748610 + -1;
              if (DAT_09748700 != (code *)0x0) {
                (*DAT_09748700)(~uVar5);
              }
              iVar3 = DAT_097480f0;
              puVar7[1] = (ulong)DAT_097486e0;
              if (iVar3 != 0) {
                FUN_0404c050(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                             &DAT_0957c0c8 + ((ulong)puVar7 >> 0x12 & 0x7fff) * 8);
              }
              DAT_097486e0 = puVar7;
              *puVar7 = ~*puVar7;
              DAT_09535c38 = puVar7[4] + DAT_09535c38 + 0x30;
              puVar7 = puVar10;
            }
            else {
              puVar9 = puVar7;
              puVar7 = (ulong *)puVar7[1];
            }
          } while (puVar7 != (ulong *)0x0);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != lVar11);
    }
  }
  if ((DAT_095156d8 != 0) && (puVar7 = DAT_097486e0, DAT_097486e0 != (ulong *)0x0)) {
    do {
      uVar5 = *puVar7;
      iVar3 = FUN_03fd1084(uVar5);
      if (iVar3 == 0) {
        puVar4 = (undefined *)puVar7[5];
        if (puVar4 == &DAT_03fd204c) {
          FUN_03fd1d74(uVar5);
          if (DAT_09535c60 <= DAT_09535c70) {
            do {
              DAT_09535c70 = FUN_03fd2684(DAT_09535c70,DAT_09535c60,
                                          DAT_09535c60 + DAT_09748708 * 0x10);
            } while (DAT_09535c60 <= DAT_09535c70);
          }
          if (DAT_09748728 != 0) {
            FUN_03fd158c(uVar5);
            do {
              iVar3 = FUN_03fcf594(0);
            } while (iVar3 == 0);
          }
          puVar4 = (undefined *)puVar7[5];
        }
        if (puVar4 != &UNK_03fd2050) {
          FUN_03fd158c(uVar5);
        }
      }
      puVar9 = puVar7 + 1;
      puVar7 = (ulong *)*puVar9;
    } while ((ulong *)*puVar9 != (ulong *)0x0);
    if ((DAT_09748710 == '\x01') && (DAT_097486e0 != (ulong *)0x0)) {
      puVar7 = DAT_097486e0;
      puVar9 = (ulong *)0x0;
LAB_03fd01b8:
      do {
        puVar10 = puVar7;
        puVar7 = (ulong *)puVar10[1];
        if ((undefined *)puVar10[5] == &UNK_03fd2050) {
          uVar5 = *puVar10;
          iVar3 = FUN_03fd1084(uVar5);
          if (iVar3 != 0) {
            puVar2 = puVar7;
            iVar3 = DAT_097480f0;
            if (puVar9 != (ulong *)0x0) {
              puVar9[1] = (ulong)puVar7;
              if (DAT_097480f0 == 0) {
                puVar2 = DAT_097486e0;
                iVar3 = 0;
              }
              else {
                FUN_0404c050(1L << ((ulong)puVar9 >> 0xc & 0x3f),
                             &DAT_0957c0c8 + ((ulong)puVar9 >> 0x12 & 0x7fff) * 8);
                puVar2 = DAT_097486e0;
                iVar3 = 1;
              }
            }
            DAT_097486e0 = puVar2;
            *puVar10 = ~*puVar10;
            uVar8 = DAT_097486d8;
            uVar5 = (uVar5 >> (DAT_095156d0 + 3 & 0x3f) ^ uVar5 >> 3) &
                    (-1L << (DAT_095156d0 & 0x3f) ^ 0xffffffffffffffffU);
            DAT_09535c38 = (DAT_09535c38 - puVar10[4]) + -0x30;
            puVar10[1] = *(ulong *)(DAT_097486d8 + uVar5 * 8);
            if (iVar3 != 0) {
              FUN_0404c050(1L << ((ulong)puVar10 >> 0xc & 0x3f),
                           &DAT_0957c0c8 + ((ulong)puVar10 >> 0x12 & 0x7fff) * 8);
            }
            bVar1 = true;
            *(ulong **)(uVar8 + uVar5 * 8) = puVar10;
            DAT_09748610 = DAT_09748610 + 1;
            if (puVar7 == (ulong *)0x0) break;
            goto LAB_03fd01b8;
          }
          FUN_03fd158c(uVar5);
        }
        puVar9 = puVar10;
      } while (puVar7 != (ulong *)0x0);
    }
  }
  if ((bVar1) && (DAT_097480f0 != 0)) {
    FUN_0404c050(1L << (DAT_097486d8 >> 0xc & 0x3f),
                 &DAT_0957c0c8 + (DAT_097486d8 >> 0x12 & 0x7fff) * 8);
  }
  FUN_03fd2cf8(&DAT_095156a0);
  FUN_03fd1d10();
  FUN_03fd254c(&DAT_095156b8);
  FUN_03fd2cf8(&DAT_095156b8);
  if (DAT_09748518 != 0) {
    FUN_03fd2e2c();
    return;
  }
  return;
}


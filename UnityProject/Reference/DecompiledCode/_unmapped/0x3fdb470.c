// rea decompile_all
// name: FUN_03fdb470
// address: 0x3fdb470
// body: available
// range: 0x3fdb470-0x3fdbffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_03fdb470(long *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  void *__s;
  undefined1 uVar8;
  char *pcVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  size_t __n;
  ulong __n_00;
  ulong uVar19;
  ulong uVar20;
  
  iVar5 = FUN_03fdb114();
  uVar7 = 0xfffffffe;
  if (5 < param_2) {
    return 0xfffffffe;
  }
  if (iVar5 != 0) {
    return 0xfffffffe;
  }
  if (param_1[3] != 0) {
    lVar11 = param_1[1];
    lVar18 = param_1[7];
    if ((((int)lVar11 == 0) || (*param_1 != 0)) &&
       ((iVar5 = *(int *)(lVar18 + 8), param_2 == 4 || (iVar5 != 0x29a)))) {
      if ((int)param_1[4] == 0) {
LAB_03fdb800:
        uVar7 = 0xfffffffb;
        pcVar9 = "buffer error";
        goto LAB_03fdb4dc;
      }
      iVar2 = *(int *)(lVar18 + 0x4c);
      *(uint *)(lVar18 + 0x4c) = param_2;
      if (*(long *)(lVar18 + 0x28) == 0) {
        if ((int)lVar11 == 0) {
          iVar16 = -9;
          iVar1 = iVar16;
          if (iVar2 < 5) {
            iVar1 = 0;
          }
          if (param_2 < 5) {
            iVar16 = 0;
          }
          if ((param_2 != 4) && ((int)(iVar16 + param_2 * 2) <= iVar1 + iVar2 * 2))
          goto LAB_03fdb800;
        }
      }
      else {
        FUN_03fdbffc(param_1);
        if ((int)param_1[4] == 0) goto LAB_03fdbe60;
        iVar5 = *(int *)(lVar18 + 8);
      }
      if (iVar5 == 0x2a) {
        if (*(int *)(lVar18 + 0x30) != 0) {
          if ((*(int *)(lVar18 + 200) < 2) && (uVar6 = *(uint *)(lVar18 + 0xc4), 1 < (int)uVar6)) {
            if (uVar6 < 6) {
              uVar12 = 0x40;
            }
            else {
              uVar12 = 0x80;
              if (uVar6 != 6) {
                uVar12 = 0xc0;
              }
            }
          }
          else {
            uVar12 = 0;
          }
          uVar12 = uVar12 | *(int *)(lVar18 + 0x54) * 0x1000 - 0x7800U;
          lVar11 = *(long *)(lVar18 + 0x28);
          if (*(int *)(lVar18 + 0xac) != 0) {
            uVar12 = uVar12 | 0x20;
          }
          *(long *)(lVar18 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)(uVar12 >> 8);
          lVar11 = *(long *)(lVar18 + 0x28);
          *(long *)(lVar18 + 0x28) = lVar11 + 1;
          *(byte *)(*(long *)(lVar18 + 0x10) + lVar11) =
               ((byte)uVar12 + (char)(uVar12 / 0x1f) * -0x1f | (byte)uVar12) ^ 0x1f;
          if (*(int *)(lVar18 + 0xac) != 0) {
            lVar11 = *(long *)(lVar18 + 0x28);
            lVar15 = param_1[0xc];
            *(long *)(lVar18 + 0x28) = lVar11 + 1;
            *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)((ulong)lVar15 >> 0x18);
            lVar11 = *(long *)(lVar18 + 0x28);
            *(long *)(lVar18 + 0x28) = lVar11 + 1;
            *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)((ulong)lVar15 >> 0x10);
            lVar11 = *(long *)(lVar18 + 0x28);
            lVar15 = param_1[0xc];
            *(long *)(lVar18 + 0x28) = lVar11 + 1;
            *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)((ulong)lVar15 >> 8);
            lVar11 = *(long *)(lVar18 + 0x28);
            *(long *)(lVar18 + 0x28) = lVar11 + 1;
            *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)lVar15;
          }
          lVar11 = FUN_03fdad2c(0,0,0);
          param_1[0xc] = lVar11;
          *(undefined4 *)(lVar18 + 8) = 0x71;
          FUN_03fdbffc(param_1);
          if (*(long *)(lVar18 + 0x28) != 0) goto LAB_03fdbe60;
          iVar5 = *(int *)(lVar18 + 8);
          goto LAB_03fdb67c;
        }
        *(undefined4 *)(lVar18 + 8) = 0x71;
        goto LAB_03fdbd20;
      }
      if (iVar5 == 0x29a) {
        if ((int)param_1[1] != 0) goto LAB_03fdb800;
LAB_03fdbd28:
        if (*(int *)(lVar18 + 0xb4) == 0) {
          if (param_2 == 0) {
            return 0;
          }
          if (*(int *)(lVar18 + 8) == 0x29a) goto LAB_03fdbe50;
        }
      }
      else {
LAB_03fdb67c:
        if (iVar5 == 0x39) {
          lVar11 = FUN_03fda9f8(0,0,0);
          lVar15 = *(long *)(lVar18 + 0x28);
          lVar13 = *(long *)(lVar18 + 0x10);
          param_1[0xc] = lVar11;
          *(long *)(lVar18 + 0x28) = lVar15 + 1;
          *(undefined1 *)(lVar13 + lVar15) = 0x1f;
          lVar11 = *(long *)(lVar18 + 0x28);
          *(long *)(lVar18 + 0x28) = lVar11 + 1;
          *(undefined1 *)(*(long *)(lVar18 + 0x10) + lVar11) = 0x8b;
          lVar11 = *(long *)(lVar18 + 0x28);
          *(long *)(lVar18 + 0x28) = lVar11 + 1;
          *(undefined1 *)(*(long *)(lVar18 + 0x10) + lVar11) = 8;
          piVar10 = *(int **)(lVar18 + 0x38);
          if (piVar10 == (int *)0x0) {
            lVar11 = *(long *)(lVar18 + 0x28);
            *(long *)(lVar18 + 0x28) = lVar11 + 1;
            *(undefined1 *)(*(long *)(lVar18 + 0x10) + lVar11) = 0;
            lVar11 = *(long *)(lVar18 + 0x28);
            *(long *)(lVar18 + 0x28) = lVar11 + 1;
            *(undefined1 *)(*(long *)(lVar18 + 0x10) + lVar11) = 0;
            lVar11 = *(long *)(lVar18 + 0x28);
            *(long *)(lVar18 + 0x28) = lVar11 + 1;
            *(undefined1 *)(*(long *)(lVar18 + 0x10) + lVar11) = 0;
            lVar11 = *(long *)(lVar18 + 0x28);
            *(long *)(lVar18 + 0x28) = lVar11 + 1;
            *(undefined1 *)(*(long *)(lVar18 + 0x10) + lVar11) = 0;
            lVar11 = *(long *)(lVar18 + 0x28);
            *(long *)(lVar18 + 0x28) = lVar11 + 1;
            *(undefined1 *)(*(long *)(lVar18 + 0x10) + lVar11) = 0;
            if (*(int *)(lVar18 + 0xc4) == 9) {
              uVar8 = 2;
            }
            else {
              uVar8 = 4;
              if (*(int *)(lVar18 + 200) < 2 && 1 < *(int *)(lVar18 + 0xc4)) {
                uVar8 = 0;
              }
            }
            lVar11 = *(long *)(lVar18 + 0x28);
            *(long *)(lVar18 + 0x28) = lVar11 + 1;
            *(undefined1 *)(*(long *)(lVar18 + 0x10) + lVar11) = uVar8;
            lVar11 = *(long *)(lVar18 + 0x28);
            *(long *)(lVar18 + 0x28) = lVar11 + 1;
            *(undefined1 *)(*(long *)(lVar18 + 0x10) + lVar11) = 3;
            *(undefined4 *)(lVar18 + 8) = 0x71;
            FUN_03fdbffc(param_1);
            if (*(long *)(lVar18 + 0x28) != 0) goto LAB_03fdbe60;
            iVar5 = *(int *)(lVar18 + 8);
            goto LAB_03fdb9bc;
          }
          iVar5 = *piVar10;
          iVar2 = piVar10[0x11];
          lVar17 = *(long *)(piVar10 + 10);
          lVar15 = *(long *)(piVar10 + 6);
          lVar11 = *(long *)(piVar10 + 0xe);
          lVar13 = *(long *)(lVar18 + 0x28);
          *(long *)(lVar18 + 0x28) = lVar13 + 1;
          *(char *)(*(long *)(lVar18 + 0x10) + lVar13) =
               iVar5 != 0 | (iVar2 != 0) << 1 | (lVar15 != 0) << 2 | (lVar17 != 0) << 3 |
               (lVar11 != 0) << 4;
          lVar11 = *(long *)(lVar18 + 0x28);
          uVar14 = *(undefined8 *)(*(long *)(lVar18 + 0x38) + 8);
          *(long *)(lVar18 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)uVar14;
          lVar11 = *(long *)(lVar18 + 0x28);
          uVar14 = *(undefined8 *)(*(long *)(lVar18 + 0x38) + 8);
          *(long *)(lVar18 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)((ulong)uVar14 >> 8);
          lVar11 = *(long *)(lVar18 + 0x28);
          uVar14 = *(undefined8 *)(*(long *)(lVar18 + 0x38) + 8);
          *(long *)(lVar18 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)((ulong)uVar14 >> 0x10);
          lVar11 = *(long *)(lVar18 + 0x28);
          uVar14 = *(undefined8 *)(*(long *)(lVar18 + 0x38) + 8);
          *(long *)(lVar18 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)((ulong)uVar14 >> 0x18);
          if (*(int *)(lVar18 + 0xc4) == 9) {
            uVar8 = 2;
          }
          else {
            uVar8 = 4;
            if (*(int *)(lVar18 + 200) < 2 && 1 < *(int *)(lVar18 + 0xc4)) {
              uVar8 = 0;
            }
          }
          lVar11 = *(long *)(lVar18 + 0x28);
          *(long *)(lVar18 + 0x28) = lVar11 + 1;
          *(undefined1 *)(*(long *)(lVar18 + 0x10) + lVar11) = uVar8;
          lVar11 = *(long *)(lVar18 + 0x28);
          uVar3 = *(undefined4 *)(*(long *)(lVar18 + 0x38) + 0x14);
          *(long *)(lVar18 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)uVar3;
          lVar11 = *(long *)(lVar18 + 0x38);
          if (*(long *)(lVar11 + 0x18) != 0) {
            lVar15 = *(long *)(lVar18 + 0x28);
            uVar3 = *(undefined4 *)(lVar11 + 0x20);
            *(long *)(lVar18 + 0x28) = lVar15 + 1;
            *(char *)(*(long *)(lVar18 + 0x10) + lVar15) = (char)uVar3;
            lVar11 = *(long *)(lVar18 + 0x28);
            uVar3 = *(undefined4 *)(*(long *)(lVar18 + 0x38) + 0x20);
            *(long *)(lVar18 + 0x28) = lVar11 + 1;
            *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)((uint)uVar3 >> 8);
            lVar11 = *(long *)(lVar18 + 0x38);
          }
          if (*(int *)(lVar11 + 0x44) != 0) {
            lVar11 = FUN_03fda9f8(param_1[0xc],*(undefined8 *)(lVar18 + 0x10),
                                  *(undefined4 *)(lVar18 + 0x28));
            param_1[0xc] = lVar11;
          }
          *(undefined8 *)(lVar18 + 0x40) = 0;
          *(undefined4 *)(lVar18 + 8) = 0x45;
LAB_03fdb9d8:
          lVar11 = *(long *)(*(long *)(lVar18 + 0x38) + 0x18);
          if (lVar11 != 0) {
            lVar15 = *(long *)(lVar18 + 0x40);
            uVar19 = *(ulong *)(lVar18 + 0x28);
            __n = (size_t)((uint)*(ushort *)(*(long *)(lVar18 + 0x38) + 0x20) - (int)lVar15);
            uVar7 = *(ulong *)(lVar18 + 0x18);
            if (uVar7 < uVar19 + __n) {
              do {
                uVar20 = uVar7 - uVar19;
                __n_00 = uVar20 & 0xffffffff;
                memcpy((void *)(*(long *)(lVar18 + 0x10) + uVar19),
                       (void *)(*(long *)(*(long *)(lVar18 + 0x38) + 0x18) +
                               *(long *)(lVar18 + 0x40)),__n_00);
                uVar7 = *(ulong *)(lVar18 + 0x18);
                iVar5 = *(int *)(*(long *)(lVar18 + 0x38) + 0x44);
                *(ulong *)(lVar18 + 0x28) = uVar7;
                if ((iVar5 != 0) && (uVar19 < uVar7)) {
                  lVar11 = FUN_03fda9f8(param_1[0xc],*(long *)(lVar18 + 0x10) + uVar19,
                                        (int)uVar7 - (int)uVar19);
                  param_1[0xc] = lVar11;
                }
                *(ulong *)(lVar18 + 0x40) = *(long *)(lVar18 + 0x40) + __n_00;
                FUN_03fdbffc(param_1);
                if (*(long *)(lVar18 + 0x28) != 0) goto LAB_03fdbe60;
                uVar7 = *(ulong *)(lVar18 + 0x18);
                __n = (size_t)(uint)((int)__n - (int)uVar20);
                uVar19 = 0;
              } while (uVar7 < __n);
              lVar15 = *(long *)(lVar18 + 0x40);
              uVar19 = 0;
              lVar11 = *(long *)(*(long *)(lVar18 + 0x38) + 0x18);
            }
            memcpy((void *)(*(long *)(lVar18 + 0x10) + uVar19),(void *)(lVar11 + lVar15),__n);
            iVar5 = *(int *)(*(long *)(lVar18 + 0x38) + 0x44);
            uVar7 = *(long *)(lVar18 + 0x28) + __n;
            *(ulong *)(lVar18 + 0x28) = uVar7;
            if ((iVar5 != 0) && (uVar19 < uVar7)) {
              lVar11 = FUN_03fda9f8(param_1[0xc],*(long *)(lVar18 + 0x10) + uVar19,
                                    (int)uVar7 - (int)uVar19);
              param_1[0xc] = lVar11;
            }
            *(undefined8 *)(lVar18 + 0x40) = 0;
          }
          *(undefined4 *)(lVar18 + 8) = 0x49;
LAB_03fdbaf0:
          if (*(long *)(*(long *)(lVar18 + 0x38) + 0x28) != 0) {
            uVar7 = *(ulong *)(lVar18 + 0x28);
            do {
              uVar19 = *(ulong *)(lVar18 + 0x28);
              lVar11 = *(long *)(lVar18 + 0x38);
              if (uVar19 == *(ulong *)(lVar18 + 0x18)) {
                if ((*(int *)(lVar11 + 0x44) != 0) && (uVar7 < uVar19)) {
                  lVar11 = FUN_03fda9f8(param_1[0xc],*(long *)(lVar18 + 0x10) + uVar7,
                                        (int)uVar19 - (int)uVar7);
                  param_1[0xc] = lVar11;
                }
                FUN_03fdbffc(param_1);
                if (*(long *)(lVar18 + 0x28) != 0) goto LAB_03fdbe60;
                lVar11 = *(long *)(lVar18 + 0x38);
                uVar19 = 0;
                uVar7 = 0;
              }
              lVar15 = *(long *)(lVar18 + 0x40);
              lVar11 = *(long *)(lVar11 + 0x28);
              *(long *)(lVar18 + 0x40) = lVar15 + 1;
              cVar4 = *(char *)(lVar11 + lVar15);
              *(ulong *)(lVar18 + 0x28) = uVar19 + 1;
              *(char *)(*(long *)(lVar18 + 0x10) + uVar19) = cVar4;
            } while (cVar4 != '\0');
            if ((*(int *)(*(long *)(lVar18 + 0x38) + 0x44) != 0) &&
               (uVar7 < *(ulong *)(lVar18 + 0x28))) {
              lVar11 = FUN_03fda9f8(param_1[0xc],*(long *)(lVar18 + 0x10) + uVar7,
                                    (int)*(ulong *)(lVar18 + 0x28) - (int)uVar7);
              param_1[0xc] = lVar11;
            }
            *(undefined8 *)(lVar18 + 0x40) = 0;
          }
          *(undefined4 *)(lVar18 + 8) = 0x5b;
LAB_03fdbbd0:
          if (*(long *)(*(long *)(lVar18 + 0x38) + 0x38) != 0) {
            uVar7 = *(ulong *)(lVar18 + 0x28);
            do {
              uVar19 = *(ulong *)(lVar18 + 0x28);
              lVar11 = *(long *)(lVar18 + 0x38);
              if (uVar19 == *(ulong *)(lVar18 + 0x18)) {
                if ((*(int *)(lVar11 + 0x44) != 0) && (uVar7 < uVar19)) {
                  lVar11 = FUN_03fda9f8(param_1[0xc],*(long *)(lVar18 + 0x10) + uVar7,
                                        (int)uVar19 - (int)uVar7);
                  param_1[0xc] = lVar11;
                }
                FUN_03fdbffc(param_1);
                if (*(long *)(lVar18 + 0x28) != 0) goto LAB_03fdbe60;
                lVar11 = *(long *)(lVar18 + 0x38);
                uVar19 = 0;
                uVar7 = 0;
              }
              lVar15 = *(long *)(lVar18 + 0x40);
              lVar11 = *(long *)(lVar11 + 0x38);
              *(long *)(lVar18 + 0x40) = lVar15 + 1;
              cVar4 = *(char *)(lVar11 + lVar15);
              *(ulong *)(lVar18 + 0x28) = uVar19 + 1;
              *(char *)(*(long *)(lVar18 + 0x10) + uVar19) = cVar4;
            } while (cVar4 != '\0');
            if ((*(int *)(*(long *)(lVar18 + 0x38) + 0x44) != 0) &&
               (uVar7 < *(ulong *)(lVar18 + 0x28))) {
              lVar11 = FUN_03fda9f8(param_1[0xc],*(long *)(lVar18 + 0x10) + uVar7,
                                    (int)*(ulong *)(lVar18 + 0x28) - (int)uVar7);
              param_1[0xc] = lVar11;
            }
          }
          *(undefined4 *)(lVar18 + 8) = 0x67;
LAB_03fdbc94:
          if (*(int *)(*(long *)(lVar18 + 0x38) + 0x44) != 0) {
            lVar11 = *(long *)(lVar18 + 0x28);
            if (*(ulong *)(lVar18 + 0x18) < lVar11 + 2U) {
              FUN_03fdbffc(param_1);
              lVar11 = 0;
              if (*(long *)(lVar18 + 0x28) != 0) goto LAB_03fdbe60;
            }
            lVar15 = param_1[0xc];
            *(long *)(lVar18 + 0x28) = lVar11 + 1;
            *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)lVar15;
            lVar11 = *(long *)(lVar18 + 0x28);
            lVar15 = param_1[0xc];
            *(long *)(lVar18 + 0x28) = lVar11 + 1;
            *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)((ulong)lVar15 >> 8);
            lVar11 = FUN_03fda9f8(0,0,0);
            param_1[0xc] = lVar11;
          }
          *(undefined4 *)(lVar18 + 8) = 0x71;
          FUN_03fdbffc(param_1);
          if (*(long *)(lVar18 + 0x28) != 0) goto LAB_03fdbe60;
        }
        else {
LAB_03fdb9bc:
          if (0x5a < iVar5) {
            if (iVar5 == 0x5b) goto LAB_03fdbbd0;
            if (iVar5 != 0x67) goto LAB_03fdbd20;
            goto LAB_03fdbc94;
          }
          if (iVar5 == 0x45) goto LAB_03fdb9d8;
          if (iVar5 == 0x49) goto LAB_03fdbaf0;
        }
LAB_03fdbd20:
        if ((int)param_1[1] == 0) goto LAB_03fdbd28;
      }
      if (*(int *)(lVar18 + 0xc4) == 0) {
        uVar6 = FUN_03fdc084(lVar18,param_2);
      }
      else if (*(int *)(lVar18 + 200) == 3) {
        uVar6 = FUN_03fdc700(lVar18,param_2);
      }
      else if (*(int *)(lVar18 + 200) == 2) {
        uVar6 = FUN_03fdc540(lVar18,param_2);
      }
      else {
        uVar6 = (**(code **)(&UNK_08fa9a30 + (long)*(int *)(lVar18 + 0xc4) * 0x10))(lVar18,param_2);
      }
      if ((uVar6 & 0xfffffffe) == 2) {
        *(undefined4 *)(lVar18 + 8) = 0x29a;
      }
      if ((uVar6 & 0xfffffffd) != 0) {
        if (uVar6 == 1) {
          if (param_2 != 5) {
            if (param_2 == 1) {
              FUN_03fddc24();
            }
            else {
              FUN_03fdd9f4(lVar18,0,0,0);
              if (param_2 == 3) {
                __s = *(void **)(lVar18 + 0x78);
                uVar7 = (ulong)(*(int *)(lVar18 + 0x84) - 1);
                *(undefined2 *)((long)__s + uVar7 * 2) = 0;
                memset(__s,0,uVar7 << 1);
                if (*(int *)(lVar18 + 0xb4) == 0) {
                  *(undefined4 *)(lVar18 + 0xac) = 0;
                  *(undefined8 *)(lVar18 + 0x98) = 0;
                  *(undefined4 *)(lVar18 + 0x172c) = 0;
                }
              }
            }
          }
          FUN_03fdbffc(param_1);
          if ((int)param_1[4] == 0) goto LAB_03fdbe60;
        }
LAB_03fdbe50:
        if (param_2 != 4) {
          return 0;
        }
        if (*(int *)(lVar18 + 0x30) < 1) {
          return 1;
        }
        lVar11 = param_1[0xc];
        if (*(int *)(lVar18 + 0x30) == 2) {
          lVar15 = *(long *)(lVar18 + 0x28);
          *(long *)(lVar18 + 0x28) = lVar15 + 1;
          *(char *)(*(long *)(lVar18 + 0x10) + lVar15) = (char)lVar11;
          lVar11 = *(long *)(lVar18 + 0x28);
          lVar15 = param_1[0xc];
          *(long *)(lVar18 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)((ulong)lVar15 >> 8);
          lVar11 = *(long *)(lVar18 + 0x28);
          lVar15 = param_1[0xc];
          *(long *)(lVar18 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)((ulong)lVar15 >> 0x10);
          lVar11 = *(long *)(lVar18 + 0x28);
          lVar15 = param_1[0xc];
          *(long *)(lVar18 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)((ulong)lVar15 >> 0x18);
          lVar11 = *(long *)(lVar18 + 0x28);
          lVar15 = param_1[2];
          *(long *)(lVar18 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)lVar15;
          lVar11 = *(long *)(lVar18 + 0x28);
          lVar15 = param_1[2];
          *(long *)(lVar18 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)((ulong)lVar15 >> 8);
          lVar11 = *(long *)(lVar18 + 0x28);
          lVar15 = param_1[2];
          *(long *)(lVar18 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)((ulong)lVar15 >> 0x10);
          lVar11 = *(long *)(lVar18 + 0x28);
          lVar15 = *(long *)(lVar18 + 0x10);
          uVar8 = (undefined1)((ulong)param_1[2] >> 0x18);
        }
        else {
          lVar15 = *(long *)(lVar18 + 0x28);
          *(long *)(lVar18 + 0x28) = lVar15 + 1;
          *(char *)(*(long *)(lVar18 + 0x10) + lVar15) = (char)((ulong)lVar11 >> 0x18);
          lVar15 = *(long *)(lVar18 + 0x28);
          *(long *)(lVar18 + 0x28) = lVar15 + 1;
          *(char *)(*(long *)(lVar18 + 0x10) + lVar15) = (char)((ulong)lVar11 >> 0x10);
          lVar11 = *(long *)(lVar18 + 0x28);
          lVar15 = param_1[0xc];
          uVar8 = (undefined1)lVar15;
          *(long *)(lVar18 + 0x28) = lVar11 + 1;
          *(char *)(*(long *)(lVar18 + 0x10) + lVar11) = (char)((ulong)lVar15 >> 8);
          lVar11 = *(long *)(lVar18 + 0x28);
          lVar15 = *(long *)(lVar18 + 0x10);
        }
        *(long *)(lVar18 + 0x28) = lVar11 + 1;
        *(undefined1 *)(lVar15 + lVar11) = uVar8;
        FUN_03fdbffc(param_1);
        if (0 < *(int *)(lVar18 + 0x30)) {
          *(int *)(lVar18 + 0x30) = -*(int *)(lVar18 + 0x30);
        }
        return (ulong)(*(long *)(lVar18 + 0x28) == 0);
      }
      if ((int)param_1[4] != 0) {
        return 0;
      }
LAB_03fdbe60:
      *(undefined4 *)(lVar18 + 0x4c) = 0xffffffff;
      return 0;
    }
  }
  pcVar9 = "stream error";
LAB_03fdb4dc:
  param_1[6] = (long)pcVar9;
  return uVar7;
}

